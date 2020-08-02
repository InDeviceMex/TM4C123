/*
 * EEPROM_Write.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/EEPROM/Header/Driver/EEPROM_Write.h>

#include <stdint.h>
#include <xDriver_MCU/EEPROM/Header/Peripheral/EEPROM_Peripheral.h>
#include <xDriver_MCU/EEPROM/Header/Driver/EEPROM_Intrinsics.h>

EEPROM_nSTATUS EEPROM__enWriteWorld (uint32_t u32Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    uint32_t u32MaxAddress = (EEPROM__u32GetWorldCount() << 2);
    uint32_t u32Block = (u32Address >> 6);/*u32Address/16*/
    uint32_t u32Offset = (u32Address >> (uint32_t)2u) & (uint32_t)0xFu;/*First 16 worlds*/
    if((u32MaxAddress) > u32Address)
    {
        EEPROM_EEBLOCK_R = u32Block;
        EEPROM_EEOFFSET_R = u32Offset;
        EEPROM_EERDWR_R = u32Data;
        enReturn = EEPROM__enWait();
    }

    return (EEPROM_nSTATUS) enReturn;
}


EEPROM_nSTATUS EEPROM__enWriteHalfWorld (uint16_t u16Data, uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    uint32_t u32MaxAddress = (EEPROM__u32GetWorldCount() << 2);
    uint32_t u32Block = (u32Address >> 6);/*u32Address/16*/
    uint32_t u32Offset = (u32Address >> (uint32_t)2u) &(uint32_t)0xFu;/*First 16 worlds*/
    uint32_t u32Pos = (u32Address >> (uint32_t)1u) & (uint32_t)1u;

    volatile uint32_t u32DataAux = 0;
    volatile uint16_t *pu16DataAux = 0;
    if((u32MaxAddress) > u32Address)
    {
        EEPROM_EEBLOCK_R = u32Block;
        EEPROM_EEOFFSET_R = u32Offset;
        u32DataAux = EEPROM_EERDWR_R;
        enReturn = EEPROM__enWait();

        if(EEPROM_enOK == enReturn)
        {
            pu16DataAux = (volatile uint16_t*) &u32DataAux + u32Pos;
            *pu16DataAux = u16Data;

            EEPROM_EERDWR_R = u32DataAux;
            enReturn = EEPROM__enWait();
        }
    }

    return (EEPROM_nSTATUS) enReturn;
}


EEPROM_nSTATUS EEPROM__enWriteByte(uint8_t u8Data,uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn =EEPROM_enERROR;
    uint32_t u32MaxAddress= (EEPROM__u32GetWorldCount()<<2);
    uint32_t u32Block =(u32Address>>(uint32_t)6u);/*u32Address/16*/
    uint32_t u32Offset =(u32Address>>(uint32_t)2u)&(uint32_t)0xFu;/*First 16 worlds*/
    uint32_t u32Pos=(u32Address)&(uint32_t)0x3u;

    volatile uint32_t u32DataAux=0;
    volatile uint8_t* pu8DataAux=0;
    if((u32MaxAddress )> u32Address )
    {
        EEPROM_EEBLOCK_R=u32Block;
        EEPROM_EEOFFSET_R=u32Offset;
        u32DataAux=EEPROM_EERDWR_R;
        enReturn=EEPROM__enWait();

        if(EEPROM_enOK ==enReturn)
        {
            pu8DataAux=(volatile uint8_t*)&u32DataAux+u32Pos;
            *pu8DataAux=u8Data;

            EEPROM_EERDWR_R=u32DataAux;
            enReturn=EEPROM__enWait();
        }
    }

    return (EEPROM_nSTATUS) enReturn;
}


EEPROM_nSTATUS EEPROM__enWriteWorldBlock(const uint32_t* pu32Data,uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn =EEPROM_enERROR;
    uint32_t u32MaxAddress= (EEPROM__u32GetWorldCount()<<2);
    uint32_t u32Block =(u32Address>>(uint32_t)6u);/*u32Address/16*/
    uint32_t u32Offset =(u32Address>>(uint32_t)2u)&(uint32_t)0xFu;/*First 16 worlds*/
    if((u32MaxAddress )> u32Address )
    {
        EEPROM_EEBLOCK_R=u32Block;
        EEPROM_EEOFFSET_R=u32Offset;
        do
        {
            EEPROM_EERDWR_R=*pu32Data;
            pu32Data++;
            enReturn=EEPROM__enWait();
        }while((uint32_t) 0 != EEPROM_EEOFFSET_R);
    }

    return (EEPROM_nSTATUS) enReturn;
}
