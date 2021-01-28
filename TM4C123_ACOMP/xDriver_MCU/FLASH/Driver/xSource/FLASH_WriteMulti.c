/*
 * FLASH_Read.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_WriteMulti.h>

#include <xUtils/Standard/Standard.h>
#include <stdlib.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Erase.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_WriteIntrinsics.h>

FLASH_nSTATUS FLASH__enWriteMultiWorld(const uint32_t* pu32Data, uint32_t u32Address, uint32_t u32Count)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t *pu32PageDataInitial = 0UL;
    uint32_t *pu32PageData = 0UL;
    uint32_t *pu32Address = 0UL;
    uint32_t u32Pos = 0UL;
    uint32_t u32Dif = 0UL;
    uint32_t u32DifPage = 0UL;
    uint32_t u32OffsetWorld = 0UL;
    uint32_t u32AddressCurrent = 0UL;
    uint32_t u32Offset = 0UL;
    uint32_t u32AddressTotal = 0UL;
    uint32_t u32AddressPage = 0UL;
    uint32_t u32AddressNextPage = 0UL;
    uint32_t u32TempValue= 0UL;

    u32AddressCurrent = u32Address;
    u32AddressCurrent&= ~(uint32_t) 0x3UL;

    u32Offset = u32Count;
    u32Offset *= 4UL;
    u32AddressTotal = u32AddressCurrent;
    u32AddressTotal += u32Offset;

    if((u32AddressTotal <= FLASH_ADDRESS_MAX) && (0UL != u32Count))
    {
#if defined ( __TI_ARM__ )
        pu32PageDataInitial = (uint32_t*) memalign( (size_t) 4UL, (size_t) (sizeof(uint8_t) * FLASH_PAGE_SIZE));
#elif defined ( __GNUC__ )
        pu32PageDataInitial = (uint32_t*) malloc( (size_t) sizeof(uint8_t) * FLASH_PAGE_SIZE);
#endif
        if(0UL != (uint32_t) pu32PageDataInitial)
        {
            do
            {
                u32TempValue = FLASH_PAGE_SIZE;
                u32TempValue -= 1UL;

                /*Inicio de la pagina de 1KB actual*/
                u32AddressPage = u32AddressCurrent;
                u32AddressPage &= ~u32TempValue;
                /*Inicio de la pagina sigueinte de 1KB actual*/
                u32AddressNextPage = u32AddressPage;
                u32AddressNextPage += FLASH_PAGE_SIZE;
                /*Offset en 32bit world de mi direccion actual*/
                u32OffsetWorld = u32AddressCurrent;
                u32OffsetWorld &= u32TempValue;
                u32OffsetWorld >>= 2UL;
                /*Bufferactual = Buffer Incial*/
                pu32PageData = pu32PageDataInitial;
                /*Diferencia de mi final de pagina con mi direccion actual en 32bit Worlds*/
                u32DifPage = u32AddressNextPage;
                u32DifPage -= u32AddressCurrent;
                u32DifPage >>= 2UL;
                /*Puntero al inico de la page actual de 1KB*/
                pu32Address = (uint32_t*) u32AddressPage;
                /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                u32TempValue = FLASH_PAGE_SIZE;
                u32TempValue >>= 2UL;
                for(u32Pos = 0UL; u32Pos < u32TempValue; u32Pos++)
                {
                    *pu32PageData = *pu32Address;
                    pu32PageData += 1UL;
                    pu32Address += 1UL;
                }
                /*Identificar si el contador actual sigue sienod mayor al limite de mi pagina o se
                 * delimita en la pagina
                 */
                if( u32Count > u32DifPage)
                {
                    u32Dif = u32DifPage;
                }
                else
                {
                    u32Dif = u32Count;
                }

                pu32PageData = pu32PageDataInitial;
                pu32PageData += u32OffsetWorld;
                for(u32Pos = 0UL; u32Pos < u32Dif; u32Pos++)
                {
                    *pu32PageData = *pu32Data;
                    pu32PageData += 1UL;
                    pu32Data += 1UL;
                }

                FLASH__enPageErase( u32AddressPage);
                pu32PageData = pu32PageDataInitial;
                for(u32Pos = 0UL; u32Pos < 8UL; u32Pos++)
                {
                    enReturn = FLASH__enWriteBuf( pu32PageData, u32AddressPage, 32UL);
                    if( FLASH_enERROR == enReturn)
                    {
                        break;
                    }
                    u32AddressPage += 0x80UL;/*32World = 4Bytes*32 =0x80=128*/
                    pu32PageData += 32UL;
                }
                u32AddressCurrent = u32AddressPage;
                u32Count -= u32Dif;
            }while(0UL != u32Count);

            free( pu32PageDataInitial);
            pu32PageDataInitial = (uint32_t*) 0UL;
        }
    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enWriteMultiHalfWorld(const uint16_t* pu16Data, uint32_t u32Address, uint32_t u32Count)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t *pu32PageDataInitial = 0UL;
    uint32_t *pu32PageData = 0UL;
    uint16_t *pu16PageData = 0UL;
    uint32_t *pu32Address = 0UL;
    uint32_t u32Pos = 0UL;
    uint32_t u32Dif = 0UL;
    uint32_t u32DifPage = 0UL;
    uint32_t u32OffsetHalfWorld = 0UL;
    uint32_t u32AddressCurrent = 0UL;
    uint32_t u32AddressTotal= 0UL;
    uint32_t u32Offset = 0UL;
    uint32_t u32AddressPage = 0UL;
    uint32_t u32AddressNextPage = 0UL;
    uint32_t u32TempValue= 0UL;

    u32AddressCurrent = u32Address;
    u32AddressCurrent &= ~(uint32_t) 0x1UL;

    u32Offset = u32Count;
    u32Offset *= 4UL;
    u32AddressTotal = u32AddressCurrent;
    u32AddressTotal += u32Offset;

    if((u32AddressTotal <= FLASH_ADDRESS_MAX) && (0UL != u32Count))
    {
#if defined ( __TI_ARM__ )
        pu32PageDataInitial = (uint32_t*) memalign( (size_t) 4UL, (size_t) (sizeof(uint8_t) * FLASH_PAGE_SIZE));
#elif defined ( __GNUC__ )
        pu32PageDataInitial = (uint32_t*) malloc( (size_t) (sizeof(uint8_t) * FLASH_PAGE_SIZE));
#endif
        if(0UL != (uint32_t) pu32PageDataInitial)
        {
            do
            {
                u32TempValue = FLASH_PAGE_SIZE;
                u32TempValue -= 1UL;

                /*Inicio de la pagina de 1KB actual*/
                u32AddressPage = u32AddressCurrent;
                u32AddressPage &= ~u32TempValue;
                /*Inicio de la pagina sigueinte de 1KB actual*/
                u32AddressNextPage = u32AddressPage;
                u32AddressNextPage += FLASH_PAGE_SIZE;
                /*Offset en 16bit world de mi direccion actual*/
                u32OffsetHalfWorld = u32AddressCurrent;
                u32OffsetHalfWorld &= u32TempValue;
                u32OffsetHalfWorld >>= 1UL;
                /*Bufferactual = Buffer Incial*/
                pu32PageData = pu32PageDataInitial;
                /*Diferencia de mi final de pagina con mi direccion actual en 16bit Worlds*/
                u32DifPage = u32AddressNextPage;
                u32DifPage -= u32AddressCurrent;
                u32DifPage >>= 1UL;
                /*Puntero al inico de la page actual de 1KB*/
                pu32Address = (uint32_t*) u32AddressPage;
                /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                u32TempValue = FLASH_PAGE_SIZE;
                u32TempValue >>= 2UL;
                for(u32Pos = 0UL; u32Pos < u32TempValue; u32Pos++)
                {
                    *pu32PageData = *pu32Address;
                    pu32PageData += 1UL;
                    pu32Address += 1UL;
                }
                /*Identificar si el contador actual sigue sienod mayor al limite de mi pagina o se
                 * delimita en la pagina
                 */
                if(u32Count > u32DifPage)
                {
                    u32Dif = u32DifPage;
                }
                else
                {
                    u32Dif = u32Count;
                }

                pu16PageData = (uint16_t*) pu32PageDataInitial;
                pu16PageData += u32OffsetHalfWorld;
                for(u32Pos = 0UL; u32Pos < u32Dif; u32Pos++)
                {
                    *pu16PageData = *pu16Data;
                    pu16PageData += 1UL;
                    pu16Data += 1UL;
                }

                FLASH__enPageErase( u32AddressPage);
                pu32PageData = pu32PageDataInitial;
                for(u32Pos = 0UL; u32Pos < 8UL; u32Pos++)
                {
                    enReturn = FLASH__enWriteBuf( pu32PageData, u32AddressPage, 32UL);
                    if(FLASH_enERROR == enReturn)
                    {
                        break;
                    }
                    u32AddressPage += 0x80UL;/*32World = 4Bytes*32 =0x80=128*/
                    pu32PageData += 32UL;
                }
                u32AddressCurrent = u32AddressPage;
                u32Count -= u32Dif;
            }while(0UL != u32Count);
            free( pu32PageDataInitial);
            pu32PageDataInitial = (uint32_t*) 0UL;
        }
    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enWriteMultiByte(const uint8_t* pu8Data, uint32_t u32Address, uint32_t u32Count)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t *pu32PageDataInitial = 0UL;
    uint32_t *pu32PageData = 0UL;
    uint8_t *pu8PageData = 0UL;
    uint32_t *pu32Address = 0UL;
    uint32_t u32Pos = 0UL;
    uint32_t u32Dif = 0UL;
    uint32_t u32DifPage = 0UL;
    uint32_t u32OffsetByte = 0UL;
    uint32_t u32AddressCurrent = 0UL;
    uint32_t u32AddressTotal= 0UL;
    uint32_t u32AddressPage = 0UL;
    uint32_t u32AddressNextPage = 0UL;
    uint32_t u32TempValue= 0UL;

    u32AddressCurrent = u32Address;

    u32AddressTotal = u32AddressCurrent;
    u32AddressTotal += u32Count;
    if((u32AddressTotal <= FLASH_ADDRESS_MAX) && (0UL != u32Count))
    {
#if defined ( __TI_ARM__ )
        pu32PageDataInitial = (uint32_t*) memalign( (size_t) 4UL, (size_t) (sizeof(uint8_t) * FLASH_PAGE_SIZE));
#elif defined ( __GNUC__ )
        pu32PageDataInitial = (uint32_t*) malloc( (size_t) (sizeof(uint8_t) * FLASH_PAGE_SIZE));
#endif
        if( 0UL != (uint32_t) pu32PageDataInitial)
        {
            do
            {
                u32TempValue = FLASH_PAGE_SIZE;
                u32TempValue -= 1UL;

                /*Inicio de la pagina de 1KB actual*/
                u32AddressPage = u32AddressCurrent;
                u32AddressPage &= ~u32TempValue;
                /*Inicio de la pagina sigueinte de 1KB actual*/
                u32AddressNextPage = u32AddressPage;
                u32AddressNextPage += FLASH_PAGE_SIZE;
                /*Offset en 16bit world de mi direccion actual*/
                u32OffsetByte = u32AddressCurrent;
                u32OffsetByte &= u32TempValue;
                /*Bufferactual = Buffer Incial*/
                pu32PageData = pu32PageDataInitial;
                /*Diferencia de mi final de pagina con mi direccion actual en 16bit Worlds*/
                u32DifPage = u32AddressNextPage;
                u32DifPage -= u32AddressCurrent;
                /*Puntero al inico de la page actual de 1KB*/
                pu32Address = (uint32_t*) u32AddressPage;
                /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                u32TempValue = FLASH_PAGE_SIZE;
                u32TempValue >>= 2UL;
                for(u32Pos = 0UL; u32Pos < u32TempValue; u32Pos++)
                {
                    *pu32PageData = *pu32Address;
                    pu32PageData += 1U;
                    pu32Address += 1U;
                }
                /*Identificar si el contador actual sigue sienod mayor al limite de mi pagina o se
                 * delimita en la pagina
                 */
                if(u32Count > u32DifPage)
                {
                    u32Dif = u32DifPage;
                }
                else
                {
                    u32Dif = u32Count;
                }

                pu8PageData = (uint8_t*) pu32PageDataInitial;
                pu8PageData += u32OffsetByte;
                for(u32Pos = 0UL ;u32Pos < u32Dif; u32Pos++)
                {
                    *pu8PageData = *pu8Data;
                    pu8PageData += 1U;
                    pu8Data += 1U;
                }

                FLASH__enPageErase( u32AddressPage);
                pu32PageData = pu32PageDataInitial;
                for(u32Pos = 0UL; u32Pos < 8UL; u32Pos++)
                {
                    enReturn = FLASH__enWriteBuf( pu32PageData, u32AddressPage, 32UL);
                    if( FLASH_enERROR == enReturn)
                    {
                        break;
                    }
                    u32AddressPage += 0x80UL;/*32World = 4Bytes*32 =0x80=128*/
                    pu32PageData += 32UL;
                }
                u32AddressCurrent = u32AddressPage;
                u32Count -= u32Dif;
            }while(0UL != u32Count);

            free( pu32PageDataInitial);
            pu32PageDataInitial = (uint32_t*) 0UL;
        }
    }
    return enReturn;
}
