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

EEPROM_nSTATUS EEPROM__enReadMultiAlt (void* pvData, uint32_t u32Address, uint16_t u16Count, uint32_t u32VariableType);

EEPROM_nSTATUS EEPROM__enReadMultiAlt (void* pvData, uint32_t u32Address, uint16_t u16Count, uint32_t u32VariableType)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    EEPROM_nREADY enReady = EEPROM_enNOREADY;
    uint32_t u32MaxAddress = 0UL;
    uint32_t u32Offset = 1UL;

    uint8_t* pu8Data = 0UL;
    uint16_t* pu16Data = 0UL;
    uint32_t* pu32Data = 0UL;

    if(0UL != (uint32_t) pvData)
    {
        enReady = EEPROM__enIsReady();
        if(EEPROM_enREADY == enReady)
        {
            enReturn = EEPROM_enOK;
            u32MaxAddress = EEPROM__u32GetWorldCount();
            u32MaxAddress <<= 2UL;
            u32Offset <<= u32VariableType;
            switch (u32VariableType)
            {
                case 0UL:
                    pu8Data = (uint8_t*) pvData;
                    while((u32MaxAddress > u32Address) && (u16Count> (uint16_t) 0UL) && (EEPROM_enOK == enReturn))
                    {
                        enReturn = EEPROM__enReadByte( pu8Data, u32Address);
                        pu8Data += 1UL;
                        u32Address += u32Offset;
                        u16Count--;
                    }
                break;
                case 1UL:
                    pu16Data = (uint16_t*) pvData;
                    while((u32MaxAddress > u32Address) && (u16Count> (uint16_t) 0UL) && (EEPROM_enOK == enReturn))
                    {
                        enReturn = EEPROM__enReadHalfWorld( pu16Data, u32Address);
                        pu16Data += 1UL;
                        u32Address += u32Offset;
                        u16Count--;
                    }
                break;
                case 2UL:
                    pu32Data = (uint32_t*) pvData;
                    while((u32MaxAddress > u32Address) && (u16Count> (uint16_t) 0UL) && (EEPROM_enOK == enReturn))
                    {
                        enReturn = EEPROM__enReadWorld( pu32Data, u32Address);
                        pu32Data += 1UL;
                        u32Address += u32Offset;
                        u16Count--;
                    }
                break;
                default:
                    enReturn = EEPROM_enERROR;
                break;
            }
        }
    }
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enReadMultiWorld (uint32_t *pu32Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enOK;
    enReturn = EEPROM__enReadMultiAlt ( (void*) pu32Data, u32Address, u16Count, 2UL);
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enReadMultiHalfWorld (uint16_t *pu16Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enOK;
    enReturn = EEPROM__enReadMultiAlt ( (void*) pu16Data, u32Address, u16Count, 1UL);
    return enReturn;
}

EEPROM_nSTATUS EEPROM__enReadMultiByte (uint8_t *pu8Data, uint32_t u32Address, uint16_t u16Count)
{
    EEPROM_nSTATUS enReturn = EEPROM_enOK;
    enReturn = EEPROM__enReadMultiAlt ( (void*) pu8Data, u32Address, u16Count, 0UL);
    return enReturn;
}
