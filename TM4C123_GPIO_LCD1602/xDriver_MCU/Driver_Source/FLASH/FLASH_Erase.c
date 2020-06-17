/*
 * FLASH_Erase.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/Driver_Header/FLASH/FLASH.h>


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

