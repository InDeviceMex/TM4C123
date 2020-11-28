/*
 * FLASH_Write.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Write.h>

#include <xUtils/Standard/Standard.h>
#include <stdlib.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Erase.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_WriteIntrinsics.h>

FLASH_nSTATUS FLASH__enWriteWorld (uint32_t u32Data, uint32_t u32Address)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t *pu32PageDataInitial = 0;
    uint32_t *pu32PageData = 0;
    uint32_t *pu32Address = 0;
    uint32_t u32Pos = 0;
    uint32_t u32OffsetWorld = 0;
    uint32_t u32AddressCurrent = 0;
    uint32_t u32AddressPage = 0;

    u32AddressCurrent = u32Address & ~(uint32_t)0x3u;
    if(u32AddressCurrent < FLASH_ADDRESS_MAX)
    {
        if(FLASH_ERASEWORLD == *((uint32_t*)u32AddressCurrent))
        {
            enReturn = FLASH__enWrite(u32Data, u32Address);

        }
        else
        {
#if defined ( __TI_ARM__ )
            pu32PageDataInitial = (uint32_t*) memalign((size_t)4u, (size_t)(sizeof(uint8_t) * FLASH_PAGE_SIZE));
#elif defined ( __GNUC__ )
            pu32PageDataInitial = (uint32_t*) malloc((size_t)(sizeof(uint8_t) * FLASH_PAGE_SIZE));
#endif
            if(0 != pu32PageDataInitial)
            {
                /*Inicio de la pagina de 1KB actual*/
                u32AddressPage = u32AddressCurrent&~(FLASH_PAGE_SIZE-(uint32_t)1u);
                /*Offset en 32bit world de mi direccion actual*/
                u32OffsetWorld = (u32AddressCurrent&(FLASH_PAGE_SIZE-(uint32_t)1u))>>(uint32_t)2u;
                /*Bufferactual = Buffer Incial*/
                pu32PageData = pu32PageDataInitial;
                /*Puntero al inico de la page actual de 1KB*/
                pu32Address = (uint32_t*) u32AddressPage;
                /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                for(u32Pos = (uint32_t)0; u32Pos < (FLASH_PAGE_SIZE >> (uint32_t)2u); u32Pos++)
                {
                    *pu32PageData = *pu32Address;
                    pu32PageData+=1u;
                    pu32Address+=1u;
                }
                pu32PageData = pu32PageDataInitial;
                pu32PageData+=u32OffsetWorld;
                *pu32PageData = u32Data;

                FLASH__enPageErase(u32AddressPage);
                pu32PageData = pu32PageDataInitial;
                for(u32Pos =(uint32_t) 0; u32Pos <(uint32_t) 8; u32Pos++)
                {
                    enReturn = FLASH__enWriteBuf(pu32PageData, u32AddressPage, (uint32_t)32u);
                    if(FLASH_enERROR == enReturn)
                    {
                        break;
                    }
                    u32AddressPage +=(uint32_t) 0x80u;/*32World = 4Bytes*32 =0x80=128*/
                    pu32PageData += 32;
                }
                free(pu32PageDataInitial);
            }
        }
    }
    return (FLASH_nSTATUS) enReturn;
}

FLASH_nSTATUS FLASH__enWriteHalfWorld (uint16_t u16Data, uint32_t u32Address)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t *pu32PageDataInitial = 0;
    uint32_t *pu32PageData = 0;
    uint16_t *pu16PageDataAux= 0;
    uint32_t *pu32PageDataAux= 0;
    uint32_t *pu32Address = 0;
    uint32_t u32Pos = 0;
    uint32_t u32OffsetWorld = 0;
    uint32_t u32HalfWorld = (u32Address & (uint32_t)2u) >> (uint32_t)1u;
    uint32_t u32AddressCurrent = 0;
    uint32_t u32AddressPage = 0;
    static uint32_t u32DataAux = 0;

    u32AddressCurrent = u32Address & ~(uint32_t)0x3u;
    if(u32AddressCurrent < FLASH_ADDRESS_MAX)
    {
      pu16PageDataAux=(uint16_t*) u32AddressCurrent;
      pu16PageDataAux+=u32HalfWorld;
        if( (uint16_t)FLASH_ERASEHALFWORLD == *(pu16PageDataAux))
        {
            u32DataAux = *((uint32_t*) u32AddressCurrent);
            pu32PageDataAux = (uint32_t*) &u32DataAux;
            pu16PageDataAux= (uint16_t*) pu32PageDataAux;
            pu16PageDataAux+=u32HalfWorld;
            *(pu16PageDataAux) = u16Data;
            enReturn = FLASH__enWrite(u32DataAux, u32Address);
        }
        else
        {
#if defined ( __TI_ARM__ )
            pu32PageDataInitial = (uint32_t*) memalign((size_t)4,(size_t)(sizeof(uint8_t)*FLASH_PAGE_SIZE));
#elif defined ( __GNUC__ )
            pu32PageDataInitial = (uint32_t*) malloc((size_t)sizeof(uint8_t)*FLASH_PAGE_SIZE);
#endif
            if( 0 != pu32PageDataInitial)
            {
                /*Inicio de la pagina de 1KB actual*/
                u32AddressPage = u32AddressCurrent & ~(FLASH_PAGE_SIZE - (uint32_t)1u);
                /*Offset en 32bit world de mi direccion actual*/
                u32OffsetWorld = (u32AddressCurrent & (FLASH_PAGE_SIZE - (uint32_t)1u)) >> (uint32_t)2u;
                /*Bufferactual = Buffer Incial*/
                pu32PageData = pu32PageDataInitial;
                /*Puntero al inico de la page actual de 1KB*/
                pu32Address = (uint32_t*) u32AddressPage;
                /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                for(u32Pos = (uint32_t)0; u32Pos < (FLASH_PAGE_SIZE >> (uint32_t)2u); u32Pos++)
                {
                    *pu32PageData = *pu32Address;
                    pu32PageData+=1u;
                    pu32Address+=1u;
                }
                pu32PageData = pu32PageDataInitial;
                pu32PageData+= u32OffsetWorld;
                pu16PageDataAux=(uint16_t*)pu32PageData;
                pu16PageDataAux+=u32HalfWorld;
                *(pu16PageDataAux) = u16Data;

                FLASH__enPageErase(u32AddressPage);
                pu32PageData = pu32PageDataInitial;
                for(u32Pos = (uint32_t)0; u32Pos <(uint32_t) 8; u32Pos++)
                {
                    enReturn = FLASH__enWriteBuf(pu32PageData, u32AddressPage, (uint32_t)32u);
                    if( FLASH_enERROR == enReturn)
                    {
                        break;
                    }
                    u32AddressPage += (uint32_t)0x80u;/*32World = 4Bytes*32 =0x80=128*/
                    pu32PageData += 32;
                }
                free(pu32PageDataInitial);
            }

        }
    }
    return (FLASH_nSTATUS) enReturn;
}

FLASH_nSTATUS FLASH__enWriteByte (uint8_t u8Data, uint32_t u32Address)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t *pu32PageDataInitial = 0u;
    uint32_t *pu32PageData = 0u;
    uint32_t *pu32PageDataAux = 0u;
    uint8_t *pu8PageDataAux = 0u;
    uint32_t *pu32Address = 0;
    uint32_t u32Pos = 0;
    uint32_t u32OffsetWorld = 0;
    uint32_t u32Byte = (u32Address & (uint32_t)3u);
    uint32_t u32AddressCurrent = 0;
    uint32_t u32AddressPage = 0;
    static uint32_t u32DataAux = 0;

    u32AddressCurrent = u32Address & (~(uint32_t)0x3u);
    if( u32AddressCurrent < FLASH_ADDRESS_MAX)
    {
        pu8PageDataAux = (uint8_t*) u32AddressCurrent;
        pu8PageDataAux+=u32Byte;
        if((uint8_t)FLASH_ERASEBYTE == *(pu8PageDataAux))
        {
            u32DataAux = *((uint32_t*) u32AddressCurrent);
            pu32PageDataAux =(uint32_t*)&u32DataAux;
            pu8PageDataAux=(uint8_t*) (pu32PageDataAux);
            pu8PageDataAux+=u32Byte;
            *(pu8PageDataAux) = u8Data;
            enReturn = FLASH__enWrite(u32DataAux, u32Address);
        }
        else
        {
#if defined ( __TI_ARM__ )
            pu32PageDataInitial = (uint32_t*) memalign((size_t)4,(size_t)(sizeof(uint8_t)*FLASH_PAGE_SIZE));
#elif defined ( __GNUC__ )
            pu32PageDataInitial = (uint32_t*) malloc((size_t)sizeof(uint8_t)*FLASH_PAGE_SIZE);
#endif
            if( 0 != pu32PageDataInitial)
            {
                /*Inicio de la pagina de 1KB actual*/
                u32AddressPage=u32AddressCurrent&~(FLASH_PAGE_SIZE-(uint32_t)1u);
                /*Offset en 32bit world de mi direccion actual*/
                u32OffsetWorld=(u32AddressCurrent&(FLASH_PAGE_SIZE-(uint32_t)1u))>>(uint32_t)2u;
                /*Bufferactual = Buffer Incial*/
                pu32PageData=pu32PageDataInitial;
                /*Puntero al inico de la page actual de 1KB*/
                pu32Address=(uint32_t*)u32AddressPage;
                /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                for(u32Pos=(uint32_t)0;u32Pos<((uint32_t)FLASH_PAGE_SIZE>>(uint32_t)2u);u32Pos++)
                {
                    *pu32PageData =*pu32Address;
                    pu32PageData+=1u;
                    pu32Address+=1u;
                }
                pu32PageDataAux=pu32PageDataInitial;
                pu32PageDataAux+=u32OffsetWorld;
                pu32PageData=pu32PageDataAux;
                pu8PageDataAux = (uint8_t*)pu32PageData;
                pu8PageDataAux+= u32Byte;
                *(pu8PageDataAux)=u8Data;

                FLASH__enPageErase(u32AddressPage);
                pu32PageData=pu32PageDataInitial;
                for(u32Pos=(uint32_t)0;u32Pos<(uint32_t)8;u32Pos++)
                {
                    enReturn=FLASH__enWriteBuf(pu32PageData,u32AddressPage,(uint32_t)32u);
                    if( FLASH_enERROR == enReturn)
                    {
                        break;
                    }
                    u32AddressPage+=(uint32_t)0x80u;/*32World = 4Bytes*32 =0x80=128*/
                    pu32PageData+=(uint32_t)32u;
                }
                free(pu32PageDataInitial);
            }

        }
    }
    return (FLASH_nSTATUS) enReturn;
}


