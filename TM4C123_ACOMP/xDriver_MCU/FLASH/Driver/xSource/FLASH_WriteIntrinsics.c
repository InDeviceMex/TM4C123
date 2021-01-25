/*
 * FLASH_WriteIntrinsics.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_WriteIntrinsics.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Wait.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Erase.h>
#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Dependencies.h>

FLASH_nSTATUS FLASH__enWrite(uint32_t u32Data, uint32_t u32Address)
{
    FLASH_nSTATUS enReturn =FLASH_enERROR;
    uint32_t u32Key=SYSCTL_BOOTCFG_R&SYSCTL_BOOTCFG_R_KEY_MASK;
    uint32_t u32Value=0;
    u32Address&=~(uint32_t)0x3U;
    if( u32Address < FLASH_ADDRESS_MAX)
    {
        u32Value=*((uint32_t*)u32Address);
        if((uint32_t)0xFFFFFFFFu == u32Value)
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
    return (FLASH_nSTATUS) enReturn;
}

FLASH_nSTATUS FLASH__enWriteBuf(const uint32_t* pu32Data,uint32_t u32Address, uint32_t u32Count)
{
    FLASH_nSTATUS enReturn =FLASH_enERROR;
    uint32_t u32Key=SYSCTL_BOOTCFG_R&SYSCTL_BOOTCFG_R_KEY_MASK;
    uint32_t u32Value=0;
    uint32_t u32CountActual=0;
    uint32_t u32CountMax=0;
    uint32_t *pu32Address=0U;

    u32CountActual=(u32Address&0x7FU)>>2;
    u32CountMax=(u32CountActual)+u32Count;
    u32Address &= ~(uint32_t)0x7FU;
    if( u32Address < FLASH_ADDRESS_MAX)
    {
        if( u32CountMax <= (uint32_t)32)
        {
            if((uint32_t) 0 != u32Count)
            {
                FLASH_FMA_R=u32Address;
                while(u32Count)
                {
                    pu32Address = (uint32_t*)u32Address;
                    pu32Address += u32CountActual;
                    u32Value=*pu32Address;
                    if( (uint32_t)0xFFFFFFFFu == u32Value)
                    {
                        FLASH_FWBn->FWB[u32CountActual]=*pu32Data;
                    }
                    pu32Data+=1U;
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

    return (FLASH_nSTATUS) enReturn;
}


