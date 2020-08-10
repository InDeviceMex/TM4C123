/*
 * EEPROM_ReadMulti.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <EEPROM/Driver/xHeader/EEPROM_Read.h>
#include <EEPROM/Driver/xHeader/EEPROM_ReadMulti.h>
#include <stdint.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>


EEPROM_nSTATUS EEPROM__enReadMultiWorld (uint32_t *pu32Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enOK;
    EEPROM_nREADY enReady= EEPROM_enNOREADY;
    uint32_t u32MaxAddress = (EEPROM__u32GetWorldCount() << (uint32_t)2u);
    enReady = EEPROM__enIsReady();
    if(EEPROM_enREADY == enReady)
    {
        while(((u32MaxAddress) > u32Address) && (u16Count >(uint16_t) 0) && (EEPROM_enOK == enReturn) && ((uint32_t)0!= (uint32_t) pu32Data))
        {
            enReturn = EEPROM__enReadWorld(pu32Data,u32Address);
            pu32Data++;
            u32Address += (uint32_t)4u;
            u16Count--;
        }
    }

    return (EEPROM_nSTATUS) enReturn;
}


EEPROM_nSTATUS EEPROM__enReadMultiHalfWorld (uint16_t *pu16Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enOK;
    uint32_t u32MaxAddress = (EEPROM__u32GetWorldCount() << (uint32_t)2u);
    while(((u32MaxAddress) > u32Address) && (u16Count> (uint16_t)0) && (EEPROM_enOK == enReturn) && ((uint32_t)0 != (uint32_t) pu16Data))
    {
        enReturn = EEPROM__enReadHalfWorld(pu16Data,u32Address);
        pu16Data++;
        u32Address += (uint32_t)2u;
        u16Count--;
    }

    return (EEPROM_nSTATUS) enReturn;
}


EEPROM_nSTATUS EEPROM__enReadMultiByte (uint8_t *pu8Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enOK;
    uint32_t u32MaxAddress = (EEPROM__u32GetWorldCount() <<(uint32_t) 2u);
    while(((u32MaxAddress) > u32Address) && (u16Count > (uint16_t)0) && (EEPROM_enOK == enReturn) && ((uint32_t)0 != (uint32_t)pu8Data))
    {
        enReturn = EEPROM__enReadByte(pu8Data, u32Address);
        pu8Data++;
        u32Address +=(uint32_t) 1u;
        u16Count--;
    }

    return (EEPROM_nSTATUS) enReturn;
}
