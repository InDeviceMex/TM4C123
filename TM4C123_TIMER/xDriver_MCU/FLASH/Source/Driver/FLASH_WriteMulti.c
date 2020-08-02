/*
 * FLASH_Read.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/FLASH/Header/Driver/FLASH_WriteMulti.h>

#include <stdint.h>
#include <stdlib.h>
#include <xDriver_MCU/FLASH/Header/Peripheral/FLASH_Peripheral.h>
#include <xDriver_MCU/FLASH/Header/Driver/FLASH_Erase.h>
#include <xDriver_MCU/FLASH/Header/Driver/FLASH_WriteIntrinsics.h>

FLASH_nSTATUS FLASH__enWriteMultiWorld(const uint32_t* pu32Data, uint32_t u32Address,uint32_t u32Count)
{
    FLASH_nSTATUS enReturn =FLASH_enERROR;
    uint32_t *pu32PageDataInitial=0;
    uint32_t *pu32PageData=0;
    uint32_t *pu32Address= 0;
    uint32_t u32Pos=0;
    uint32_t u32Dif=0;
    uint32_t u32DifPage=0;
    uint32_t u32OffsetWorld=0;
    uint32_t u32AddressCurrent=0;
    uint32_t u32AddressPage=0;
    uint32_t u32AddressNextPage=0;


    u32AddressCurrent=u32Address&~(uint32_t)0x3u;

    if((u32AddressCurrent+(u32Count*(uint32_t)4u))<=FLASH_ADDRESS_MAX)
    {
        if( (uint32_t)0 != u32Count)
        {
#if defined ( __TI_ARM__ )
            pu32PageDataInitial = (uint32_t*) memalign((size_t)4,(size_t)(sizeof(uint8_t)*FLASH_PAGE_SIZE));
#elif defined ( __GNUC__ )
            pu32PageDataInitial = (uint32_t*) malloc((size_t)sizeof(uint8_t)*FLASH_PAGE_SIZE);
#endif
            if( (uint32_t)0u != (uint32_t)pu32PageDataInitial)
            {
                do
                {
                    /*Inicio de la pagina de 1KB actual*/
                    u32AddressPage=u32AddressCurrent&~(FLASH_PAGE_SIZE-(uint32_t)1u);
                    /*Inicio de la pagina sigueinte de 1KB actual*/
                    u32AddressNextPage=u32AddressPage+FLASH_PAGE_SIZE;
                    /*Offset en 32bit world de mi direccion actual*/
                    u32OffsetWorld=(u32AddressCurrent&(FLASH_PAGE_SIZE-(uint32_t)1u))>>(uint32_t)2u;
                    /*Bufferactual = Buffer Incial*/
                    pu32PageData=pu32PageDataInitial;
                    /*Diferencia de mi final de pagina con mi direccion actual en 32bit Worlds*/
                    u32DifPage=(u32AddressNextPage-u32AddressCurrent)>>2;
                    /*Puntero al inico de la page actual de 1KB*/
                    pu32Address=(uint32_t*)u32AddressPage;
                    /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                    for(u32Pos=(uint32_t)0;u32Pos<(uint32_t)(FLASH_PAGE_SIZE>>(uint32_t)2u);u32Pos++)
                    {
                        *pu32PageData =*pu32Address;
                        pu32PageData++;
                        pu32Address++;
                    }
                    /*Identificar si el contador actual sigue sienod mayor al limite de mi pagina o se
                     * delimita en la pagina
                     */
                    if( u32Count > u32DifPage)
                    {
                        u32Dif=u32DifPage;
                    }
                    else
                    {
                        u32Dif=u32Count;
                    }

                    pu32PageData=pu32PageDataInitial+u32OffsetWorld;
                    for(u32Pos=(uint32_t)0;u32Pos<u32Dif;u32Pos++)
                    {
                        *pu32PageData =*pu32Data;
                        pu32PageData++;
                        pu32Data++;
                    }

                    FLASH__enPageErase(u32AddressPage);
                    pu32PageData=pu32PageDataInitial;
                    for(u32Pos=(uint32_t)0u;u32Pos<(uint32_t)8u;u32Pos++)
                    {
                        enReturn=FLASH__enWriteBuf(pu32PageData,u32AddressPage,(uint32_t)32u);
                        if( FLASH_enERROR == enReturn)
                        {
                            break;
                        }
                        u32AddressPage+=(uint32_t)0x80u;/*32World = 4Bytes*32 =0x80=128*/
                        pu32PageData+=(uint32_t)32u;
                    }
                    u32AddressCurrent=u32AddressPage;
                    u32Count-=u32Dif;


                }while((uint32_t)0!=u32Count);
                free(pu32PageDataInitial);
            }
        }

    }
    return (FLASH_nSTATUS) enReturn;
}

FLASH_nSTATUS FLASH__enWriteMultiHalfWorld(const uint16_t* pu16Data, uint32_t u32Address,uint32_t u32Count)
{
    FLASH_nSTATUS enReturn =FLASH_enERROR;
    uint32_t *pu32PageDataInitial=0;
    uint32_t *pu32PageData=0;
    uint16_t *pu16PageData=0;
    uint32_t *pu32Address= 0;
    uint32_t u32Pos=0;
    uint32_t u32Dif=0;
    uint32_t u32DifPage=0;
    uint32_t u32OffsetHalfWorld=0;
    uint32_t u32AddressCurrent=0;
    uint32_t u32AddressPage=0;
    uint32_t u32AddressNextPage=0;


    u32AddressCurrent=u32Address&~(uint32_t)0x1u;

    if((u32AddressCurrent+(u32Count*(uint32_t)2u))<=FLASH_ADDRESS_MAX)
    {
        if( (uint32_t)0 != u32Count)
        {
#if defined ( __TI_ARM__ )
            pu32PageDataInitial = (uint32_t*) memalign((size_t)4,(size_t)(sizeof(uint8_t)*FLASH_PAGE_SIZE));
#elif defined ( __GNUC__ )
            pu32PageDataInitial = (uint32_t*) malloc((size_t)(sizeof(uint8_t)*FLASH_PAGE_SIZE));
#endif
            if( (uint32_t)0u != (uint32_t)pu32PageDataInitial)
            {
                do
                {
                    /*Inicio de la pagina de 1KB actual*/
                    u32AddressPage=u32AddressCurrent&~(FLASH_PAGE_SIZE-(uint32_t)1u);
                    /*Inicio de la pagina sigueinte de 1KB actual*/
                    u32AddressNextPage=u32AddressPage+FLASH_PAGE_SIZE;
                    /*Offset en 16bit world de mi direccion actual*/
                    u32OffsetHalfWorld=(u32AddressCurrent&(FLASH_PAGE_SIZE-(uint32_t)1u))>>(uint32_t)1u;
                    /*Bufferactual = Buffer Incial*/
                    pu32PageData=pu32PageDataInitial;
                    /*Diferencia de mi final de pagina con mi direccion actual en 16bit Worlds*/
                    u32DifPage=(u32AddressNextPage-u32AddressCurrent)>>1;
                    /*Puntero al inico de la page actual de 1KB*/
                    pu32Address=(uint32_t*)u32AddressPage;
                    /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                    for(u32Pos=(uint32_t)0;u32Pos<(uint32_t)(FLASH_PAGE_SIZE>>(uint32_t)2u);u32Pos++)
                    {
                        *pu32PageData =*pu32Address;
                        pu32PageData++;
                        pu32Address++;
                    }
                    /*Identificar si el contador actual sigue sienod mayor al limite de mi pagina o se
                     * delimita en la pagina
                     */
                    if(u32Count>u32DifPage)
                    {
                        u32Dif=u32DifPage;
                    }
                    else
                    {
                        u32Dif=u32Count;
                    }

                    pu16PageData=(uint16_t*)pu32PageDataInitial+u32OffsetHalfWorld;
                    for(u32Pos=(uint32_t)0u;u32Pos<u32Dif;u32Pos++)
                    {
                        *pu16PageData =*pu16Data;
                        pu16PageData++;
                        pu16Data++;
                    }

                    FLASH__enPageErase(u32AddressPage);
                    pu32PageData=pu32PageDataInitial;
                    for(u32Pos=(uint32_t)0u;u32Pos<(uint32_t)8u;u32Pos++)
                    {
                        enReturn=FLASH__enWriteBuf(pu32PageData,u32AddressPage,(uint32_t)32u);
                        if(FLASH_enERROR==enReturn)
                        {
                            break;
                        }
                        u32AddressPage+=(uint32_t)0x80u;/*32World = 4Bytes*32 =0x80=128*/
                        pu32PageData+=(uint32_t)32u;
                    }
                    u32AddressCurrent=u32AddressPage;
                    u32Count-=u32Dif;


                }while((uint32_t)0!=u32Count);
                free(pu32PageDataInitial);
            }
        }

    }
    return (FLASH_nSTATUS) enReturn;
}


FLASH_nSTATUS FLASH__enWriteMultiByte(const uint8_t* pu8Data, uint32_t u32Address,uint32_t u32Count)
{
    FLASH_nSTATUS enReturn =FLASH_enERROR;
    uint32_t *pu32PageDataInitial=0;
    uint32_t *pu32PageData=0;
    uint8_t *pu8PageData=0;
    uint32_t *pu32Address= 0;
    uint32_t u32Pos=0;
    uint32_t u32Dif=0;
    uint32_t u32DifPage=0;
    uint32_t u32OffsetByte=0;
    uint32_t u32AddressCurrent=0;
    uint32_t u32AddressPage=0;
    uint32_t u32AddressNextPage=0;


    u32AddressCurrent=u32Address;

    if((u32AddressCurrent+(u32Count))<=FLASH_ADDRESS_MAX)
    {
        if((uint32_t) 0 != u32Count)
        {
#if defined ( __TI_ARM__ )
            pu32PageDataInitial = (uint32_t*) memalign((size_t)4,(size_t)(sizeof(uint8_t)*FLASH_PAGE_SIZE));
#elif defined ( __GNUC__ )
            pu32PageDataInitial = (uint32_t*) malloc((size_t)(sizeof(uint8_t)*FLASH_PAGE_SIZE));
#endif
            if( (uint32_t)0u != (uint32_t)pu32PageDataInitial)
            {
                do
                {
                    /*Inicio de la pagina de 1KB actual*/
                    u32AddressPage=u32AddressCurrent&~(FLASH_PAGE_SIZE-(uint32_t)1u);
                    /*Inicio de la pagina sigueinte de 1KB actual*/
                    u32AddressNextPage=u32AddressPage+FLASH_PAGE_SIZE;
                    /*Offset en 16bit world de mi direccion actual*/
                    u32OffsetByte=(u32AddressCurrent&(FLASH_PAGE_SIZE-(uint32_t)1u));
                    /*Bufferactual = Buffer Incial*/
                    pu32PageData=pu32PageDataInitial;
                    /*Diferencia de mi final de pagina con mi direccion actual en 16bit Worlds*/
                    u32DifPage=(u32AddressNextPage-u32AddressCurrent);
                    /*Puntero al inico de la page actual de 1KB*/
                    pu32Address=(uint32_t*)u32AddressPage;
                    /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                    for(u32Pos=(uint32_t)0;u32Pos<(uint32_t)(FLASH_PAGE_SIZE>>(uint32_t)2u);u32Pos++)
                    {
                        *pu32PageData =*pu32Address;
                        pu32PageData++;
                        pu32Address++;
                    }
                    /*Identificar si el contador actual sigue sienod mayor al limite de mi pagina o se
                     * delimita en la pagina
                     */
                    if(u32Count > u32DifPage)
                    {
                        u32Dif=u32DifPage;
                    }
                    else
                    {
                        u32Dif=u32Count;
                    }

                    pu8PageData=(uint8_t*)pu32PageDataInitial+u32OffsetByte;
                    for(u32Pos=(uint32_t)0;u32Pos<u32Dif;u32Pos++)
                    {
                        *pu8PageData =*pu8Data;
                        pu8PageData++;
                        pu8Data++;
                    }

                    FLASH__enPageErase(u32AddressPage);
                    pu32PageData=pu32PageDataInitial;
                    for(u32Pos=(uint32_t)0;u32Pos<(uint32_t)8u;u32Pos++)
                    {
                        enReturn=FLASH__enWriteBuf(pu32PageData,u32AddressPage,(uint32_t)32u);
                        if( FLASH_enERROR == enReturn)
                        {
                            break;
                        }
                        u32AddressPage+=(uint32_t)0x80u;/*32World = 4Bytes*32 =0x80=128*/
                        pu32PageData+=(uint32_t)32u;
                    }
                    u32AddressCurrent=u32AddressPage;
                    u32Count-=u32Dif;


                }while((uint32_t) 0 != u32Count);
                free(pu32PageDataInitial);
            }
        }

    }
    return (FLASH_nSTATUS) enReturn;
}



