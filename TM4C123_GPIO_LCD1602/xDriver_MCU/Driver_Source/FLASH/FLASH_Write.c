/*
 * FLASH_Write.c
 *
 *  Created on: 16 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Driver_Header/FLASH/FLASH.h>

FLASH_nSTATUS FLASH__enWriteWorld(uint32_t u32Data, uint32_t u32Address)
{
    FLASH_nSTATUS enReturn =FLASH_enERROR;
    uint32_t *pu32PageDataInitial=0;
    uint32_t *pu32PageData=0;
    uint32_t *pu32Address= 0;
    uint32_t u32Pos=0;
    uint32_t u32OffsetWorld=0;
    uint32_t u32AddressCurrent=0;
    uint32_t u32AddressPage=0;


    u32AddressCurrent=u32Address&~0x3;
    if(u32AddressCurrent<FLASH_ADDRESS_MAX)
    {

        if(FLASH_ERASEWORLD == *((uint32_t*)u32AddressCurrent))
        {
            enReturn= FLASH__enWrite(u32Data,u32Address);

        }
        else
        {
#if defined ( __TI_ARM__ )
            pu32PageDataInitial = (uint32_t*) memalign(4,sizeof(uint8_t)*FLASH_PAGE_SIZE);
#elif defined ( __GNUC__ )
            pu32PageDataInitial = (uint32_t*) malloc(sizeof(uint8_t)*FLASH_PAGE_SIZE);
#endif
            if(0!= pu32PageDataInitial)
            {
                /*Inicio de la pagina de 1KB actual*/
                u32AddressPage=u32AddressCurrent&~(FLASH_PAGE_SIZE-1);
                /*Offset en 32bit world de mi direccion actual*/
                u32OffsetWorld=(u32AddressCurrent&(FLASH_PAGE_SIZE-1))>>2;
                /*Bufferactual = Buffer Incial*/
                pu32PageData=pu32PageDataInitial;
                /*Puntero al inico de la page actual de 1KB*/
                pu32Address=(uint32_t*)u32AddressPage;
                /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                for(u32Pos=0;u32Pos<(FLASH_PAGE_SIZE>>2);u32Pos++)
                {
                    *pu32PageData =*pu32Address;
                    pu32PageData++;
                    pu32Address++;
                }
                pu32PageData=pu32PageDataInitial+u32OffsetWorld;
                *pu32PageData=u32Data;

                FLASH__enPageErase(u32AddressPage);
                pu32PageData=pu32PageDataInitial;
                for(u32Pos=0;u32Pos<8;u32Pos++)
                {
                    enReturn=FLASH__enWriteBuf(pu32PageData,u32AddressPage,32);
                    if(FLASH_enERROR==enReturn)
                    {
                        break;
                    }
                    u32AddressPage+=0x80; //32World = 4Bytes*32 =0x80=128
                    pu32PageData+=32;
                }
                free(pu32PageDataInitial);
            }

        }
    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enWriteHalfWorld(uint16_t u16Data, uint32_t u32Address)
{
    FLASH_nSTATUS enReturn =FLASH_enERROR;
    uint32_t *pu32PageDataInitial=0;
    uint32_t *pu32PageData=0;
    uint32_t *pu32Address= 0;
    uint32_t u32Pos=0;
    uint32_t u32OffsetWorld=0;
    uint32_t u32HalfWorld=(u32Address&2)>>1;
    uint32_t u32AddressCurrent=0;
    uint32_t u32AddressPage=0;
    uint32_t u32DataAux=0;

    u32AddressCurrent=u32Address&~0x3;
    if(u32AddressCurrent<FLASH_ADDRESS_MAX)
    {

        if(FLASH_ERASEHALFWORLD == *((uint16_t*)u32AddressCurrent+u32HalfWorld))
        {
            u32DataAux=*((uint32_t*)u32AddressCurrent);
            *((uint16_t*)&u32DataAux+u32HalfWorld)=u16Data;
            enReturn= FLASH__enWrite(u32DataAux,u32Address);

        }
        else
        {
#if defined ( __TI_ARM__ )
            pu32PageDataInitial = (uint32_t*) memalign(4,sizeof(uint8_t)*FLASH_PAGE_SIZE);
#elif defined ( __GNUC__ )
            pu32PageDataInitial = (uint32_t*) malloc(sizeof(uint8_t)*FLASH_PAGE_SIZE);
#endif
            if(0!= pu32PageDataInitial)
            {
                /*Inicio de la pagina de 1KB actual*/
                u32AddressPage=u32AddressCurrent&~(FLASH_PAGE_SIZE-1);
                /*Offset en 32bit world de mi direccion actual*/
                u32OffsetWorld=(u32AddressCurrent&(FLASH_PAGE_SIZE-1))>>2;
                /*Bufferactual = Buffer Incial*/
                pu32PageData=pu32PageDataInitial;
                /*Puntero al inico de la page actual de 1KB*/
                pu32Address=(uint32_t*)u32AddressPage;
                /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                for(u32Pos=0;u32Pos<(FLASH_PAGE_SIZE>>2);u32Pos++)
                {
                    *pu32PageData =*pu32Address;
                    pu32PageData++;
                    pu32Address++;
                }
                pu32PageData=pu32PageDataInitial+u32OffsetWorld;
                *((uint16_t*)pu32PageData+u32HalfWorld)=u16Data;

                FLASH__enPageErase(u32AddressPage);
                pu32PageData=pu32PageDataInitial;
                for(u32Pos=0;u32Pos<8;u32Pos++)
                {
                    enReturn=FLASH__enWriteBuf(pu32PageData,u32AddressPage,32);
                    if(FLASH_enERROR==enReturn)
                    {
                        break;
                    }
                    u32AddressPage+=0x80; //32World = 4Bytes*32 =0x80=128
                    pu32PageData+=32;
                }
                free(pu32PageDataInitial);
            }

        }
    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enWriteByte(uint8_t u8Data, uint32_t u32Address)
{
    FLASH_nSTATUS enReturn =FLASH_enERROR;
    uint32_t *pu32PageDataInitial=0;
    uint32_t *pu32PageData=0;
    uint32_t *pu32Address= 0;
    uint32_t u32Pos=0;
    uint32_t u32OffsetWorld=0;
    uint32_t u32Byte=(u32Address&3);
    uint32_t u32AddressCurrent=0;
    uint32_t u32AddressPage=0;
    uint32_t u32DataAux=0;

    u32AddressCurrent=u32Address&~0x3;
    if(u32AddressCurrent<FLASH_ADDRESS_MAX)
    {

        if(FLASH_ERASEBYTE == *((uint8_t*)u32AddressCurrent+u32Byte))
        {
            u32DataAux=*((uint32_t*)u32AddressCurrent);
            *((uint8_t*)&u32DataAux+u32Byte)=u8Data;
            enReturn= FLASH__enWrite(u32DataAux,u32Address);

        }
        else
        {
#if defined ( __TI_ARM__ )
            pu32PageDataInitial = (uint32_t*) memalign(4,sizeof(uint8_t)*FLASH_PAGE_SIZE);
#elif defined ( __GNUC__ )
            pu32PageDataInitial = (uint32_t*) malloc(sizeof(uint8_t)*FLASH_PAGE_SIZE);
#endif
            if(0!= pu32PageDataInitial)
            {
                /*Inicio de la pagina de 1KB actual*/
                u32AddressPage=u32AddressCurrent&~(FLASH_PAGE_SIZE-1);
                /*Offset en 32bit world de mi direccion actual*/
                u32OffsetWorld=(u32AddressCurrent&(FLASH_PAGE_SIZE-1))>>2;
                /*Bufferactual = Buffer Incial*/
                pu32PageData=pu32PageDataInitial;
                /*Puntero al inico de la page actual de 1KB*/
                pu32Address=(uint32_t*)u32AddressPage;
                /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                for(u32Pos=0;u32Pos<(FLASH_PAGE_SIZE>>2);u32Pos++)
                {
                    *pu32PageData =*pu32Address;
                    pu32PageData++;
                    pu32Address++;
                }
                pu32PageData=pu32PageDataInitial+u32OffsetWorld;
                *((uint8_t*)pu32PageData+u32Byte)=u8Data;

                FLASH__enPageErase(u32AddressPage);
                pu32PageData=pu32PageDataInitial;
                for(u32Pos=0;u32Pos<8;u32Pos++)
                {
                    enReturn=FLASH__enWriteBuf(pu32PageData,u32AddressPage,32);
                    if(FLASH_enERROR==enReturn)
                    {
                        break;
                    }
                    u32AddressPage+=0x80; //32World = 4Bytes*32 =0x80=128
                    pu32PageData+=32;
                }
                free(pu32PageDataInitial);
            }

        }
    }
    return enReturn;
}


