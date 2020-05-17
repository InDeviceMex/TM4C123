/*
 * FLASH.c
 *
 *  Created on: 5 feb. 2018
 *      Author: InDev
 */


#include <xDriver_MCU/Driver_Header/FLASH.h>


FLASH_nSTATUS FLASH__enWaitWrite(void)
{
    uint32_t u32TimeOut = 9000000;
    FLASH_nSTATUS enReturn =FLASH_enOK;
    while(FLASH_FMC_R_WRITE_NOCOMPLETE == (FLASH_FMC_R & FLASH_FMC_R_WRITE_MASK))
    {
        u32TimeOut--;
        if(u32TimeOut==0)
        {
            enReturn =FLASH_enERROR;
            break;
        }
    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enWaitBufWrite(void)
{
    uint32_t u32TimeOut = 9000000;
    FLASH_nSTATUS enReturn =FLASH_enOK;
    while(FLASH_FMC2_R_WRBUF_NOCOMPLETE == (FLASH_FMC2_R & FLASH_FMC2_R_WRBUF_MASK))
    {
        u32TimeOut--;
        if(u32TimeOut==0)
        {
            enReturn =FLASH_enERROR;
            break;
        }
    }
    return enReturn;
}
FLASH_nSTATUS FLASH__enWaitPageErase(void)
{
    uint32_t u32TimeOut = 9000000;
    FLASH_nSTATUS enReturn =FLASH_enOK;
    while(FLASH_FMC_R_ERASE_NOCOMPLETE == (FLASH_FMC_R & FLASH_FMC_R_ERASE_MASK))
    {
        u32TimeOut--;
        if(u32TimeOut==0)
        {
            enReturn =FLASH_enERROR;
            break;
        }
    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enWaitMassErase(void)
{
    uint32_t u32TimeOut = 9000000;
    FLASH_nSTATUS enReturn =FLASH_enOK;
    while(FLASH_FMC_R_MERASE_NOCOMPLETE == (FLASH_FMC_R & FLASH_FMC_R_MERASE_MASK))
    {
        u32TimeOut--;
        if(u32TimeOut==0)
        {
            enReturn =FLASH_enERROR;
            break;
        }
    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enPageErase(uint32_t u32Address)
{
    FLASH_nSTATUS enReturn =FLASH_enERROR;
    uint32_t u32Key=SYSCTL_BOOTCFG_R&SYSCTL_BOOTCFG_R_KEY_MASK;
    if(u32Address<FLASH_ADDRESS_MAX)
    {
        FLASH_FMA_R=u32Address;
        switch(u32Key)
        {
        case SYSCTL_BOOTCFG_R_KEY_71D5:
            FLASH_FMC_R=FLASH_FMC_R_WRKEY_KEY2|FLASH_FMC_R_ERASE_ERASE;
            enReturn=FLASH__enWaitPageErase();
            break;
        case SYSCTL_BOOTCFG_R_KEY_A442:
            FLASH_FMC_R=FLASH_FMC_R_WRKEY_KEY1|FLASH_FMC_R_ERASE_ERASE;
            enReturn=FLASH__enWaitPageErase();
            break;
        default:
            break;
        }
    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enPageErasePos(uint32_t u32Page)
{
    FLASH_nSTATUS enReturn =FLASH_enERROR;
    uint32_t u32Address= u32Page*FLASH_PAGE_SIZE;
    uint32_t u32Key=SYSCTL_BOOTCFG_R&SYSCTL_BOOTCFG_R_KEY_MASK;
    if(u32Address<FLASH_ADDRESS_MAX)
    {
        FLASH_FMA_R=u32Address;
        switch(u32Key)
        {
        case SYSCTL_BOOTCFG_R_KEY_71D5:
            FLASH_FMC_R=FLASH_FMC_R_WRKEY_KEY2|FLASH_FMC_R_ERASE_ERASE;
            enReturn=FLASH__enWaitPageErase();
            break;
        case SYSCTL_BOOTCFG_R_KEY_A442:
            FLASH_FMC_R=FLASH_FMC_R_WRKEY_KEY1|FLASH_FMC_R_ERASE_ERASE;
            enReturn=FLASH__enWaitPageErase();
            break;
        default:
            break;
        }
    }
    return enReturn;
}


FLASH_nSTATUS FLASH__enMassErase(void)
{
    FLASH_nSTATUS enReturn =FLASH_enERROR;
    uint32_t u32Key=SYSCTL_BOOTCFG_R&SYSCTL_BOOTCFG_R_KEY_MASK;
    switch(u32Key)
    {
    case SYSCTL_BOOTCFG_R_KEY_71D5:
        FLASH_FMC_R=FLASH_FMC_R_WRKEY_KEY2|FLASH_FMC_R_MERASE_MERASE;
        enReturn=FLASH__enWaitMassErase();
        break;
    case SYSCTL_BOOTCFG_R_KEY_A442:
        FLASH_FMC_R=FLASH_FMC_R_WRKEY_KEY1|FLASH_FMC_R_MERASE_MERASE;
        enReturn=FLASH__enWaitMassErase();
        break;
    default:
        break;
    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enWrite(uint32_t u32Data, uint32_t u32Address)
{
    FLASH_nSTATUS enReturn =FLASH_enERROR;
    uint32_t u32Key=SYSCTL_BOOTCFG_R&SYSCTL_BOOTCFG_R_KEY_MASK;
    uint32_t u32Value=0;
    u32Address&=~0x3;
    if(u32Address<FLASH_ADDRESS_MAX)
    {
        u32Value=*((uint32_t*)u32Address);
        if(0xFFFFFFFF == u32Value)
        {
            FLASH_FMD_R=u32Data;
            FLASH_FMA_R=u32Address;
            switch(u32Key)
            {
            case SYSCTL_BOOTCFG_R_KEY_71D5:
                FLASH_FMC_R=FLASH_FMC_R_WRKEY_KEY2|FLASH_FMC_R_WRITE_WRITE;
                enReturn=FLASH__enWaitWrite();
                break;
            case SYSCTL_BOOTCFG_R_KEY_A442:
                FLASH_FMC_R=FLASH_FMC_R_WRKEY_KEY1|FLASH_FMC_R_WRITE_WRITE;
                enReturn=FLASH__enWaitWrite();
                break;
            default:
                break;
            }
        }
    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enWriteBuf(uint32_t* pu32Data,uint32_t u32Address, uint32_t u32Count)
{
    FLASH_nSTATUS enReturn =FLASH_enERROR;
    uint32_t u32Key=SYSCTL_BOOTCFG_R&SYSCTL_BOOTCFG_R_KEY_MASK;
    uint32_t u32Value=0;
    uint32_t u32CountActual=0;
    uint32_t u32CountMax=0;

    u32CountActual=(u32Address&0x7F)>>2;
    u32CountMax=(u32CountActual)+u32Count;
    u32Address&=~0x7F;
    if(u32Address<FLASH_ADDRESS_MAX)
    {
        if(u32CountMax<=32)
        {
            if(0!= u32Count)
            {
                FLASH_FMA_R=u32Address;
                while(u32Count)
                {
                    u32Value=*((uint32_t*)u32Address+(u32CountActual));
                    if(0xFFFFFFFF== u32Value)
                    {
                        FLASH_FWBn->FWB[u32CountActual]=*pu32Data;
                    }
                    pu32Data++;
                    u32Count--;
                    u32CountActual++;
                }
                switch(u32Key)
                {
                case SYSCTL_BOOTCFG_R_KEY_71D5:
                    FLASH_FMC2_R=FLASH_FMC2_R_WRKEY_KEY2|FLASH_FMC2_R_WRBUF_WRITE;
                    enReturn=FLASH__enWaitBufWrite();
                    break;
                case SYSCTL_BOOTCFG_R_KEY_A442:
                    FLASH_FMC2_R=FLASH_FMC2_R_WRKEY_KEY1|FLASH_FMC2_R_WRBUF_WRITE;
                    enReturn=FLASH__enWaitBufWrite();
                    break;
                default:
                    break;
                }
            }
        }
    }

    return enReturn;
}

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

FLASH_nSTATUS FLASH__enWriteMultiWorld(uint32_t* pu32Data, uint32_t u32Address,uint32_t u32Count)
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


    u32AddressCurrent=u32Address&~0x3;

    if((u32AddressCurrent+(u32Count*4))<=FLASH_ADDRESS_MAX)
    {
        if(0!=u32Count)
        {
#if defined ( __TI_ARM__ )
            pu32PageDataInitial = (uint32_t*) memalign(4,sizeof(uint8_t)*FLASH_PAGE_SIZE);
#elif defined ( __GNUC__ )
            pu32PageDataInitial = (uint32_t*) malloc(sizeof(uint8_t)*FLASH_PAGE_SIZE);
#endif
            if(0!= pu32PageDataInitial)
            {
                do
                {
                    /*Inicio de la pagina de 1KB actual*/
                    u32AddressPage=u32AddressCurrent&~(FLASH_PAGE_SIZE-1);
                    /*Inicio de la pagina sigueinte de 1KB actual*/
                    u32AddressNextPage=u32AddressPage+FLASH_PAGE_SIZE;
                    /*Offset en 32bit world de mi direccion actual*/
                    u32OffsetWorld=(u32AddressCurrent&(FLASH_PAGE_SIZE-1))>>2;
                    /*Bufferactual = Buffer Incial*/
                    pu32PageData=pu32PageDataInitial;
                    /*Diferencia de mi final de pagina con mi direccion actual en 32bit Worlds*/
                    u32DifPage=(u32AddressNextPage-u32AddressCurrent)>>2;
                    /*Puntero al inico de la page actual de 1KB*/
                    pu32Address=(uint32_t*)u32AddressPage;
                    /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                    for(u32Pos=0;u32Pos<(FLASH_PAGE_SIZE>>2);u32Pos++)
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

                    pu32PageData=pu32PageDataInitial+u32OffsetWorld;
                    for(u32Pos=0;u32Pos<u32Dif;u32Pos++)
                    {
                        *pu32PageData =*pu32Data;
                        pu32PageData++;
                        pu32Data++;
                    }

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
                    u32AddressCurrent=u32AddressPage;
                    u32Count-=u32Dif;


                }while(0!=u32Count);
                free(pu32PageDataInitial);
            }
        }

    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enWriteMultiHalfWorld(uint16_t* pu16Data, uint32_t u32Address,uint32_t u32Count)
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


    u32AddressCurrent=u32Address&~0x1;

    if((u32AddressCurrent+(u32Count*2))<=FLASH_ADDRESS_MAX)
    {
        if(0!=u32Count)
        {
#if defined ( __TI_ARM__ )
            pu32PageDataInitial = (uint32_t*) memalign(4,sizeof(uint8_t)*FLASH_PAGE_SIZE);
#elif defined ( __GNUC__ )
            pu32PageDataInitial = (uint32_t*) malloc(sizeof(uint8_t)*FLASH_PAGE_SIZE);
#endif
            if(0!= pu32PageDataInitial)
            {
                do
                {
                    /*Inicio de la pagina de 1KB actual*/
                    u32AddressPage=u32AddressCurrent&~(FLASH_PAGE_SIZE-1);
                    /*Inicio de la pagina sigueinte de 1KB actual*/
                    u32AddressNextPage=u32AddressPage+FLASH_PAGE_SIZE;
                    /*Offset en 16bit world de mi direccion actual*/
                    u32OffsetHalfWorld=(u32AddressCurrent&(FLASH_PAGE_SIZE-1))>>1;
                    /*Bufferactual = Buffer Incial*/
                    pu32PageData=pu32PageDataInitial;
                    /*Diferencia de mi final de pagina con mi direccion actual en 16bit Worlds*/
                    u32DifPage=(u32AddressNextPage-u32AddressCurrent)>>1;
                    /*Puntero al inico de la page actual de 1KB*/
                    pu32Address=(uint32_t*)u32AddressPage;
                    /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                    for(u32Pos=0;u32Pos<(FLASH_PAGE_SIZE>>2);u32Pos++)
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
                    for(u32Pos=0;u32Pos<u32Dif;u32Pos++)
                    {
                        *pu16PageData =*pu16Data;
                        pu16PageData++;
                        pu16Data++;
                    }

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
                    u32AddressCurrent=u32AddressPage;
                    u32Count-=u32Dif;


                }while(0!=u32Count);
                free(pu32PageDataInitial);
            }
        }

    }
    return enReturn;
}


FLASH_nSTATUS FLASH__enWriteMultiByte(uint8_t* pu8Data, uint32_t u32Address,uint32_t u32Count)
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
        if(0!=u32Count)
        {
#if defined ( __TI_ARM__ )
            pu32PageDataInitial = (uint32_t*) memalign(4,sizeof(uint8_t)*FLASH_PAGE_SIZE);
#elif defined ( __GNUC__ )
            pu32PageDataInitial = (uint32_t*) malloc(sizeof(uint8_t)*FLASH_PAGE_SIZE);
#endif
            if(0!= pu32PageDataInitial)
            {
                do
                {
                    /*Inicio de la pagina de 1KB actual*/
                    u32AddressPage=u32AddressCurrent&~(FLASH_PAGE_SIZE-1);
                    /*Inicio de la pagina sigueinte de 1KB actual*/
                    u32AddressNextPage=u32AddressPage+FLASH_PAGE_SIZE;
                    /*Offset en 16bit world de mi direccion actual*/
                    u32OffsetByte=(u32AddressCurrent&(FLASH_PAGE_SIZE-1));
                    /*Bufferactual = Buffer Incial*/
                    pu32PageData=pu32PageDataInitial;
                    /*Diferencia de mi final de pagina con mi direccion actual en 16bit Worlds*/
                    u32DifPage=(u32AddressNextPage-u32AddressCurrent);
                    /*Puntero al inico de la page actual de 1KB*/
                    pu32Address=(uint32_t*)u32AddressPage;
                    /*LLenado de mi buffer auxiliar con la informacion de la page de 1KB actual*/
                    for(u32Pos=0;u32Pos<(FLASH_PAGE_SIZE>>2);u32Pos++)
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

                    pu8PageData=(uint8_t*)pu32PageDataInitial+u32OffsetByte;
                    for(u32Pos=0;u32Pos<u32Dif;u32Pos++)
                    {
                        *pu8PageData =*pu8Data;
                        pu8PageData++;
                        pu8Data++;
                    }

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
                    u32AddressCurrent=u32AddressPage;
                    u32Count-=u32Dif;


                }while(0!=u32Count);
                free(pu32PageDataInitial);
            }
        }

    }
    return enReturn;
}

