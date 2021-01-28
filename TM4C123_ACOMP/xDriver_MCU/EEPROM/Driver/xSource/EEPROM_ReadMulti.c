/*
 * EEPROM_ReadMulti.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <EEPROM/Driver/xHeader/EEPROM_ReadMulti.h>

#include <EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <EEPROM/Driver/xHeader/EEPROM_Read.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

EEPROM_nSTATUS EEPROM__enReadMultiWorld (uint32_t *pu32Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enOK;
    EEPROM_nREADY enReady = EEPROM_enNOREADY;
    uint32_t u32MaxAddress = 0UL;

    if(0UL != (uint32_t) pu32Data)
    {
        u32MaxAddress = EEPROM__u32GetWorldCount();
        u32MaxAddress  <<= 2UL;

        enReady = EEPROM__enIsReady();
        if(EEPROM_enREADY == enReady)
        {
            while((u32MaxAddress > u32Address) && (u16Count > (uint16_t) 0UL) && (EEPROM_enOK == enReturn))
            {
                enReturn = EEPROM__enReadWorld( pu32Data, u32Address);
                pu32Data += 1UL;
                u32Address += 4UL;
                u16Count--;
            }
        }
    }
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enReadMultiHalfWorld (uint16_t *pu16Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enOK;
    EEPROM_nREADY enReady = EEPROM_enNOREADY;
    uint32_t u32MaxAddress = 0UL;

    if(0UL != (uint32_t) pu16Data)
    {
        u32MaxAddress = EEPROM__u32GetWorldCount();
        u32MaxAddress  <<= 2UL;

        enReady = EEPROM__enIsReady();
        if(EEPROM_enREADY == enReady)
        {
            while((u32MaxAddress > u32Address) && (u16Count> (uint16_t) 0UL) && (EEPROM_enOK == enReturn))
            {
                enReturn = EEPROM__enReadHalfWorld( pu16Data, u32Address);
                pu16Data += 1UL;
                u32Address += 2UL;
                u16Count--;
            }
        }
    }
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enReadMultiByte (uint8_t *pu8Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enOK;
    EEPROM_nREADY enReady = EEPROM_enNOREADY;
    uint32_t u32MaxAddress = 0UL;
    if(0UL != (uint32_t) pu8Data)
    {
        u32MaxAddress = EEPROM__u32GetWorldCount();
        u32MaxAddress  <<= 2UL;

        enReady = EEPROM__enIsReady();
        if(EEPROM_enREADY == enReady)
        {
            while((u32MaxAddress > u32Address) && (u16Count > (uint16_t) 0UL) && (EEPROM_enOK == enReturn))
            {
                enReturn = EEPROM__enReadByte( pu8Data, u32Address);
                pu8Data += 1UL;
                u32Address += 1UL;
                u16Count--;
            }
        }
    }
    return enReturn;
}
