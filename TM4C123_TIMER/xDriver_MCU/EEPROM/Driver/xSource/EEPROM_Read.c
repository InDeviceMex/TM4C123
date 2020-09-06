/*
 * EEPROM_Read.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <EEPROM/Driver/xHeader/EEPROM_Read.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

EEPROM_nSTATUS EEPROM__enReadWorld (uint32_t *pu32Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    EEPROM_nREADY enReady= EEPROM_enNOREADY;
    uint32_t u32MaxAddress = (EEPROM__u32GetWorldCount( ) << 2);
    uint32_t u32Block =(u32Address >> 6);/*u32Address/16*/
    uint32_t u32Offset = (u32Address >> (uint32_t)2u) & 0xFu;/*First 16 worlds*/
    *pu32Data=0xFFFFFFFFu;
    enReady = EEPROM__enIsReady();
    if(EEPROM_enREADY == enReady)
    {
        if(((u32MaxAddress) > u32Address) && ((uint32_t)0 != (uint32_t)pu32Data) )
        {
            EEPROM_EEBLOCK_R = u32Block;
            EEPROM_EEOFFSET_R = u32Offset;
            *pu32Data = EEPROM_EERDWR_R;
            enReturn = EEPROM__enWait();
        }
    }

    return (EEPROM_nSTATUS) enReturn;
}


EEPROM_nSTATUS EEPROM__enReadHalfWorld (uint16_t *pu16Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    uint32_t u32MaxAddress = (EEPROM__u32GetWorldCount() << 2);
    uint32_t u32Block = (u32Address >> 6);/*u32Address/16*/
    uint32_t u32Offset = (u32Address >> (uint32_t)2)& (uint32_t)0xFu;/*First 16 worlds*/
    uint32_t u32Pos = (u32Address >> (uint32_t)1u) & (uint32_t)1u;

    static volatile uint16_t *pu16DataAux = 0;
    static volatile uint32_t u32DataAux = 0;
    if(((u32MaxAddress) > u32Address) && ((uint32_t)0 != (uint32_t)pu16Data)  )
    {
        EEPROM_EEBLOCK_R = u32Block;
        EEPROM_EEOFFSET_R = u32Offset;
        u32DataAux = EEPROM_EERDWR_R;
        enReturn = EEPROM__enWait();

        if(EEPROM_enOK == enReturn)
        {
            pu16DataAux = (volatile uint16_t*) &u32DataAux;
            pu16DataAux+=u32Pos;
            *pu16Data = *pu16DataAux;
        }
    }

    return (EEPROM_nSTATUS) enReturn;
}


EEPROM_nSTATUS EEPROM__enReadByte (uint8_t *pu8Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    uint32_t u32MaxAddress = (EEPROM__u32GetWorldCount() << 2);
    uint32_t u32Block = (u32Address >> 6);/*u32Address/16*/
    uint32_t u32Offset = (u32Address >> (uint32_t)2u) & (uint32_t)0xFu;/*First 16 worlds*/
    uint32_t u32Pos = (u32Address) & (uint32_t)0x3u;

    static volatile uint8_t *pu8DataAux = 0;
    static volatile uint32_t u32DataAux = 0;
    if(((u32MaxAddress) > u32Address) && ((uint32_t)0 != (uint32_t)pu8Data))
    {
        EEPROM_EEBLOCK_R = u32Block;
        EEPROM_EEOFFSET_R = u32Offset;
        u32DataAux = EEPROM_EERDWR_R;
        enReturn = EEPROM__enWait();

        if(EEPROM_enOK == enReturn)
        {
            pu8DataAux = (volatile uint8_t*) &u32DataAux;
            pu8DataAux+=u32Pos;
            *pu8Data = *pu8DataAux;
        }
    }

    return (EEPROM_nSTATUS) enReturn;
}
