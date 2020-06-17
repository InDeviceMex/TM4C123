/*
 * EEPROM_ReadMulti.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM.h>

extern uint32_t EEPROM_u32WorldCount;

EEPROM_nSTATUS EEPROM__enReadMultiWorld(uint32_t* pu32Data,uint32_t u32Address,uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn =EEPROM_enOK;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    while(((u32MaxAddress )> u32Address) && (u16Count>0) && (enReturn==EEPROM_enOK) && (0!=pu32Data) )
    {
        enReturn=EEPROM__enReadWorld(pu32Data,u32Address);
        pu32Data++;
        u32Address+=4;
        u16Count--;
    }

    return enReturn;
}


EEPROM_nSTATUS EEPROM__enReadMultiHalfWorld(uint16_t* pu16Data,uint32_t u32Address,uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn =EEPROM_enOK;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    while(((u32MaxAddress )> u32Address) && (u16Count>0) && (enReturn==EEPROM_enOK) && (0!=pu16Data) )
    {
        enReturn=EEPROM__enReadHalfWorld(pu16Data,u32Address);
        pu16Data++;
        u32Address+=2;
        u16Count--;
    }

    return enReturn;
}


EEPROM_nSTATUS EEPROM__enReadMultiByte(uint8_t* pu8Data,uint32_t u32Address,uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn =EEPROM_enOK;
    uint32_t u32MaxAddress= (EEPROM_u32WorldCount<<2);
    while(((u32MaxAddress )> u32Address) && (u16Count>0) && (enReturn==EEPROM_enOK) && (0!=pu8Data) )
    {
        enReturn=EEPROM__enReadByte(pu8Data,u32Address);
        pu8Data++;
        u32Address+=1;
        u16Count--;
    }

    return enReturn;
}
