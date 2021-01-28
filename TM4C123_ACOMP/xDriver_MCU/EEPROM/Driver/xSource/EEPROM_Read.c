/*
 * EEPROM_Read.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <EEPROM/Driver/xHeader/EEPROM_Read.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

EEPROM_nSTATUS EEPROM__enReadWorld (uint32_t *pu32Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    EEPROM_nREADY enReady = EEPROM_enNOREADY;
    uint32_t u32MaxAddress = 0UL;
    uint32_t u32Block = 0UL;/*u32Address/16*/
    uint32_t u32Offset = 0UL;/*First 16 worlds*/

    if(0UL != (uint32_t) pu32Data)
    {
        u32MaxAddress = EEPROM__u32GetWorldCount();
        u32MaxAddress  <<= 2UL;

        u32Block = u32Address;
        u32Block >>= 6UL;

        u32Offset = u32Address;
        u32Offset >>= 2UL;
        u32Offset &= 0xFUL;

        *pu32Data = 0xFFFFFFFFU;
        enReady = EEPROM__enIsReady();
        if(EEPROM_enREADY == enReady)
        {
            if((u32MaxAddress > u32Address))
            {
                MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEBLOCK_OFFSET, u32Block, EEPROM_EEBLOCK_R_BLOCK_MASK, 0UL);
                MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEOFFSET_OFFSET, u32Offset, EEPROM_EEOFFSET_R_OFFSET_MASK, 0UL);
                *pu32Data = MCU__u32ReadRegister(EEPROM_BASE, EEPROM_EERDWR_OFFSET, EEPROM_EERDWR_VALUE_MASK, EEPROM_EERDWR_R_VALUE_BIT);
                enReturn = EEPROM__enWait();
            }
        }
    }
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enReadHalfWorld (uint16_t *pu16Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    uint32_t u32MaxAddress = 0UL;
    uint32_t u32Block = 0UL;/*u32Address/16*/
    uint32_t u32Offset = 0UL;/*First 16 worlds*/
    uint32_t u32Pos = 0UL;

    static volatile uint16_t *pu16DataAux = 0UL;
    static volatile uint32_t u32DataAux = 0UL;

    if(0UL != (uint32_t) pu16Data)
    {
        u32MaxAddress = EEPROM__u32GetWorldCount();
        u32MaxAddress <<= 2UL;

        u32Block = u32Address;
        u32Block >>= 6UL;

        u32Offset = u32Address;
        u32Offset >>= 2UL;
        u32Offset &= 0xFUL;

        u32Pos = u32Address;
        u32Pos >>= 1UL;
        u32Pos &= 1UL;

        if((u32MaxAddress > u32Address))
        {
            MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEBLOCK_OFFSET, u32Block, EEPROM_EEBLOCK_R_BLOCK_MASK, 0UL);
            MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEOFFSET_OFFSET, u32Offset, EEPROM_EEOFFSET_R_OFFSET_MASK, 0UL);
            u32DataAux = MCU__u32ReadRegister(EEPROM_BASE, EEPROM_EERDWR_OFFSET, EEPROM_EERDWR_VALUE_MASK, EEPROM_EERDWR_R_VALUE_BIT);
            enReturn = EEPROM__enWait();

            if(EEPROM_enOK == enReturn)
            {
                pu16DataAux = (volatile uint16_t*) &u32DataAux;
                pu16DataAux += u32Pos;
                *pu16Data = *pu16DataAux;
            }
        }
    }
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enReadByte (uint8_t *pu8Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    uint32_t u32MaxAddress = 0UL;
    uint32_t u32Block = 0UL;/*u32Address/16*/
    uint32_t u32Offset = 0UL;/*First 16 worlds*/
    uint32_t u32Pos = 0UL;

    static volatile uint8_t *pu8DataAux = 0;
    static volatile uint32_t u32DataAux = 0;

    if(0UL != (uint32_t) pu8Data)
    {
        u32MaxAddress = EEPROM__u32GetWorldCount();
        u32MaxAddress <<= 2UL;

        u32Block = u32Address;
        u32Block >>= 6UL;

        u32Offset = u32Address;
        u32Offset >>= 2UL;
        u32Offset &= 0xFUL;

        u32Pos = u32Address;
        u32Pos &= 3UL;

        if((u32MaxAddress > u32Address))
        {
            MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEBLOCK_OFFSET, u32Block, EEPROM_EEBLOCK_R_BLOCK_MASK, 0UL);
            MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEOFFSET_OFFSET, u32Offset, EEPROM_EEOFFSET_R_OFFSET_MASK, 0UL);
            u32DataAux = MCU__u32ReadRegister(EEPROM_BASE, EEPROM_EERDWR_OFFSET, EEPROM_EERDWR_R_VALUE_MASK, 0UL);
            enReturn = EEPROM__enWait();

            if(EEPROM_enOK == enReturn)
            {
                pu8DataAux = (volatile uint8_t*) &u32DataAux;
                pu8DataAux += u32Pos;
                *pu8Data = *pu8DataAux;
            }
        }
    }
    return enReturn;
}
