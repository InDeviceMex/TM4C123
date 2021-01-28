/*
 * EEPROM_Write.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <EEPROM/Driver/xHeader/EEPROM_Write.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

EEPROM_nSTATUS EEPROM__enWriteWorld (uint32_t u32Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    uint32_t u32MaxAddress = 0UL;
    uint32_t u32Block = 0UL;/*u32Address/16*/
    uint32_t u32Offset = 0UL;/*First 16 worlds*/

    u32MaxAddress = EEPROM__u32GetWorldCount();
    u32MaxAddress  <<= 2UL;

    u32Block = u32Address;
    u32Block >>= 6UL;

    u32Offset = u32Address;
    u32Offset >>= 2UL;
    u32Offset &= 0xFUL;

    if(u32MaxAddress > u32Address)
    {
        EEPROM__vSetReady();
        MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEBLOCK_OFFSET, u32Block, EEPROM_EEBLOCK_R_BLOCK_MASK, 0UL);
        MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEOFFSET_OFFSET, u32Offset, EEPROM_EEOFFSET_R_OFFSET_MASK, 0UL);
        MCU__vWriteRegister(EEPROM_BASE, EEPROM_EERDWR_OFFSET, u32Data, EEPROM_EERDWR_VALUE_MASK, EEPROM_EERDWR_R_VALUE_BIT);
        enReturn = EEPROM__enWait();
    }
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteHalfWorld (uint16_t u16Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    uint32_t u32MaxAddress = 0UL;
    uint32_t u32Block = 0UL;/*u32Address/16*/
    uint32_t u32Offset = 0UL;/*First 16 worlds*/
    uint32_t u32Pos = 0UL;

    static volatile uint16_t *pu16DataAux = 0UL;
    static volatile uint32_t u32DataAux = 0UL;

    u32MaxAddress = EEPROM__u32GetWorldCount();
    u32MaxAddress  <<= 2UL;

    u32Block = u32Address;
    u32Block >>= 6UL;

    u32Offset = u32Address;
    u32Offset >>= 2UL;
    u32Offset &= 0xFUL;

    u32Pos = u32Address;
    u32Pos >>= 1UL;
    u32Pos &= 1UL;

    if(u32MaxAddress > u32Address)
    {
        EEPROM__vSetReady();
        MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEBLOCK_OFFSET, u32Block, EEPROM_EEBLOCK_R_BLOCK_MASK, 0UL);
        MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEOFFSET_OFFSET, u32Offset, EEPROM_EEOFFSET_R_OFFSET_MASK, 0UL);
        u32DataAux = MCU__u32ReadRegister(EEPROM_BASE, EEPROM_EERDWR_OFFSET, EEPROM_EERDWR_VALUE_MASK, EEPROM_EERDWR_R_VALUE_BIT);
        enReturn = EEPROM__enWait();

        if(EEPROM_enOK == enReturn)
        {
            pu16DataAux = (volatile uint16_t*) &u32DataAux;
            pu16DataAux += u32Pos;
            *pu16DataAux = u16Data;

            MCU__vWriteRegister(EEPROM_BASE, EEPROM_EERDWR_OFFSET, u32DataAux, EEPROM_EERDWR_VALUE_MASK, EEPROM_EERDWR_R_VALUE_BIT);
            enReturn = EEPROM__enWait();
        }
    }
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteByte(uint8_t u8Data,uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn =EEPROM_enERROR;
    uint32_t u32MaxAddress= 0UL;
    uint32_t u32Block = 0UL;/*u32Address/16*/
    uint32_t u32Offset = 0UL;/*First 16 worlds*/
    uint32_t u32Pos = 0UL;

    static volatile uint8_t* pu8DataAux = 0UL;
    static volatile uint32_t u32DataAux = 0UL;

    u32MaxAddress = EEPROM__u32GetWorldCount();
    u32MaxAddress  <<= 2UL;

    u32Block = u32Address;
    u32Block >>= 6UL;

    u32Offset = u32Address;
    u32Offset >>= 2UL;
    u32Offset &= 0xFUL;

    u32Pos = u32Address;
    u32Pos &= 3UL;

    if(u32MaxAddress > u32Address )
    {
        EEPROM__vSetReady();
        MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEBLOCK_OFFSET, u32Block, EEPROM_EEBLOCK_R_BLOCK_MASK, 0UL);
        MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEOFFSET_OFFSET, u32Offset, EEPROM_EEOFFSET_R_OFFSET_MASK, 0UL);
        u32DataAux = MCU__u32ReadRegister(EEPROM_BASE, EEPROM_EERDWR_OFFSET, EEPROM_EERDWR_R_VALUE_MASK, 0UL);
        enReturn = EEPROM__enWait();

        if(EEPROM_enOK == enReturn)
        {
            pu8DataAux = (volatile uint8_t*) &u32DataAux;
            pu8DataAux += u32Pos;
            *pu8DataAux = u8Data;

            MCU__vWriteRegister(EEPROM_BASE, EEPROM_EERDWR_OFFSET, u32DataAux, EEPROM_EERDWR_R_VALUE_MASK, 0UL);
            enReturn = EEPROM__enWait();
        }
    }
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteWorldBlock(const uint32_t* pu32Data,uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    uint32_t u32MaxAddress= 0UL;
    uint32_t u32Block = 0UL;/*u32Address/16*/
    uint32_t u32Offset = 0UL;/*First 16 worlds*/

    u32MaxAddress = EEPROM__u32GetWorldCount();
    u32MaxAddress  <<= 2UL;

    u32Block = u32Address;
    u32Block >>= 6UL;

    u32Offset = u32Address;
    u32Offset >>= 2UL;
    u32Offset &= 0xFUL;

    if(u32MaxAddress > u32Address )
    {
        EEPROM__vSetReady();
        MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEBLOCK_OFFSET, u32Block, EEPROM_EEBLOCK_R_BLOCK_MASK, 0UL);
        MCU__vWriteRegister(EEPROM_BASE, EEPROM_EEOFFSET_OFFSET, u32Offset, EEPROM_EEOFFSET_R_OFFSET_MASK, 0UL);
        do
        {
            MCU__vWriteRegister(EEPROM_BASE, EEPROM_EERDWR_OFFSET, *pu32Data, EEPROM_EERDWR_R_VALUE_MASK, 0UL);
            pu32Data += 1U;
            enReturn = EEPROM__enWait();
            u32Offset = MCU__u32ReadRegister(EEPROM_BASE, EEPROM_EEOFFSET_OFFSET, EEPROM_EEOFFSET_R_OFFSET_MASK, 0UL);
        }while(0UL != u32Offset);
    }
    return enReturn;
}
