/*
 * EEPROM_WriteMulti.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <EEPROM/Driver/xHeader/EEPROM_Write.h>
#include <EEPROM/Driver/xHeader/EEPROM_WriteMulti.h>
#include <stdint.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>


EEPROM_nSTATUS EEPROM__enWriteMultiWorld (const uint32_t *pu32Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enOK;
    uint32_t u32MaxAddress = (EEPROM__u32GetWorldCount() << (uint32_t)2u);
    while(((u32MaxAddress) > u32Address) && (u16Count > (uint16_t)0) && (EEPROM_enOK == (EEPROM_nSTATUS) enReturn))
    {

        EEPROM__vSetReady();
        enReturn = EEPROM__enWriteWorld(*pu32Data, u32Address);
        pu32Data++;
        u32Address += (uint32_t)4u;
        u16Count--;
    }

    return (EEPROM_nSTATUS) enReturn;
}


EEPROM_nSTATUS EEPROM__enWriteMultiHalfWorld (const uint16_t *pu16Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enOK;
    uint32_t u32MaxAddress = (EEPROM__u32GetWorldCount() << (uint32_t)2u);
    while(((u32MaxAddress) > u32Address) && (u16Count > (uint16_t)0) && (EEPROM_enOK == (EEPROM_nSTATUS) enReturn))
    {
        enReturn = EEPROM__enWriteHalfWorld(*pu16Data, u32Address);
        pu16Data++;
        u32Address += (uint32_t)2u;
        u16Count--;
    }

    return (EEPROM_nSTATUS) enReturn;
}


EEPROM_nSTATUS EEPROM__enWriteMultiByte (const uint8_t *pu8Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enOK;
    uint32_t u32MaxAddress = (EEPROM__u32GetWorldCount() << (uint32_t)2u);
    while(((u32MaxAddress) > u32Address) && (u16Count > (uint16_t)0) && (EEPROM_enOK == (EEPROM_nSTATUS) enReturn))
    {
        enReturn = EEPROM__enWriteByte(*pu8Data, u32Address);
        pu8Data++;
        u32Address += (uint32_t)1u;
        u16Count--;
    }

    return (EEPROM_nSTATUS) enReturn;
}
