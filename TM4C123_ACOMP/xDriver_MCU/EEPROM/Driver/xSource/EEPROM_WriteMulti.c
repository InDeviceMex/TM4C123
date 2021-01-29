/*
 * EEPROM_WriteMulti.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <EEPROM/Driver/xHeader/EEPROM_WriteMulti.h>

#include <EEPROM/Driver/Intrinsics/EEPROM_Intrinsics.h>
#include <EEPROM/Driver/xHeader/EEPROM_Write.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>

EEPROM_nSTATUS EEPROM__enWriteMultiAlt (void* pvData, uint32_t u32Address, uint16_t u16Count, uint32_t u32VariableType);

EEPROM_nSTATUS EEPROM__enWriteMultiAlt (void* pvData, uint32_t u32Address, uint16_t u16Count, uint32_t u32VariableType)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    uint32_t u32MaxAddress = 0UL;
    uint8_t *pu8DataAux = 0UL;
    uint16_t *pu16DataAux = 0UL;
    uint32_t *pu32DataAux = 0UL;

    u32MaxAddress = EEPROM__u32GetWorldCount();
    u32MaxAddress  <<= 2UL;

    if(0UL != (uint32_t) pvData)
    {
        enReturn = EEPROM_enOK;
        EEPROM__vSetReady();
        switch (u32VariableType)
        {
        case 0UL:
            pu8DataAux = (uint8_t*) pvData;
            while((u32MaxAddress > u32Address) && (u16Count > (uint16_t)0UL) && (EEPROM_enOK == enReturn))
            {
                enReturn = EEPROM__enWriteByte( *pu8DataAux, u32Address);
                pu8DataAux+=1UL;
                u32Address += 1UL;
                u16Count--;
            }
        break;
        case 1UL:
            pu16DataAux = (uint16_t*) pvData;
            while((u32MaxAddress > u32Address) && (u16Count > (uint16_t) 0UL) && (EEPROM_enOK == enReturn))
            {
                enReturn = EEPROM__enWriteHalfWorld( *pu16DataAux, u32Address);
                pu16DataAux += 1UL;
                u32Address += 2UL;
                u16Count--;
            }
        break;
        case 2UL:
            pu32DataAux = (uint32_t*) pvData;
            while((u32MaxAddress > u32Address) && (u16Count > (uint16_t) 0UL) && (EEPROM_enOK == enReturn))
            {
                enReturn = EEPROM__enWriteWorld( *pu32DataAux, u32Address);
                pu32DataAux += 1UL;
                u32Address += 4UL;
                u16Count--;
            }
        break;
        default:
            enReturn = EEPROM_enERROR;
        break;
        }
    }
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteMultiWorld (const uint32_t *pu32Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    enReturn = EEPROM__enWriteMultiAlt( (void*) pu32Data, u32Address, u16Count, 2UL);
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteMultiHalfWorld (const uint16_t *pu16Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    enReturn = EEPROM__enWriteMultiAlt( (void*) pu16Data, u32Address, u16Count, 1UL);
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enWriteMultiByte (const uint8_t *pu8Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    enReturn = EEPROM__enWriteMultiAlt( (void*) pu8Data, u32Address, u16Count, 0UL);
    return enReturn;
}
