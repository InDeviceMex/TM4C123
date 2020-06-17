/*
 * EEPROM_Read.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM_Driver/EEPROM_Read.h>

EEPROM_nSTATUS EEPROM__enReadWorld(uint32_t* pu32Data,uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn =EEPROM_enERROR;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    uint32_t u32Block =(u32Address>>6); //u32Address/16
    uint32_t u32Offset =(u32Address>>2)&0xF; //First 16 worlds
    if(((u32MaxAddress )> u32Address) && (0!=pu32Data) )
    {
        EEPROM_EEBLOCK_R=u32Block;
        EEPROM_EEOFFSET_R=u32Offset;
        *pu32Data = EEPROM_EERDWR_R;
        enReturn=EEPROM__enWait();
    }

    return enReturn;
}


EEPROM_nSTATUS EEPROM__enReadHalfWorld(uint16_t* pu16Data,uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn =EEPROM_enERROR;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    uint32_t u32Block =(u32Address>>6); //u32Address/16
    uint32_t u32Offset =(u32Address>>2)&0xF; //First 16 worlds
    uint32_t u32Pos=(u32Address>>1)&1;

    volatile uint32_t u32DataAux=0;
    volatile uint16_t* pu16DataAux=0;
    if(((u32MaxAddress )> u32Address) && (0!=pu16Data)  )
    {
        EEPROM_EEBLOCK_R=u32Block;
        EEPROM_EEOFFSET_R=u32Offset;
        u32DataAux=EEPROM_EERDWR_R;
        enReturn=EEPROM__enWait();

        if(EEPROM_enOK ==enReturn)
        {
            pu16DataAux=(uint16_t*)&u32DataAux+u32Pos;
            *pu16Data=*pu16DataAux;
        }
    }

    return enReturn;
}


EEPROM_nSTATUS EEPROM__enReadByte(uint8_t* pu8Data,uint32_t u32Address)
{
    EEPROM_nSTATUS enReturn =EEPROM_enERROR;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    uint32_t u32Block =(u32Address>>6); //u32Address/16
    uint32_t u32Offset =(u32Address>>2)&0xF; //First 16 worlds
    uint32_t u32Pos=(u32Address)&0x3;

    volatile uint32_t u32DataAux=0;
    volatile uint8_t* pu8DataAux=0;
    if(((u32MaxAddress )> u32Address) && (0!=pu8Data)  )
    {
        EEPROM_EEBLOCK_R=u32Block;
        EEPROM_EEOFFSET_R=u32Offset;
        u32DataAux=EEPROM_EERDWR_R;
        enReturn=EEPROM__enWait();

        if(EEPROM_enOK ==enReturn)
        {
            pu8DataAux=(uint8_t*)&u32DataAux+u32Pos;
            *pu8Data=*pu8DataAux;
        }
    }

    return enReturn;
}
