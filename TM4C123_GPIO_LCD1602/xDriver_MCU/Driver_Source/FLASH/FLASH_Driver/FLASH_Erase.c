/*
 * FLASH_Erase.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#include <xDriver_MCU/Driver_Header/FLASH/FLASH_Driver/FLASH_Erase.h>



static FLASH_nSTATUS FLASH_enInitPageErase (uint32_t u32Key);

static FLASH_nSTATUS FLASH_enInitPageErase (uint32_t u32Key)
{

    FLASH_nSTATUS enReturn = FLASH_enERROR;
    switch(u32Key)
    {
    case SYSCTL_BOOTCFG_R_KEY_71D5:
        FLASH_FMC_R = FLASH_FMC_R_WRKEY_KEY2 | FLASH_FMC_R_ERASE_ERASE;
        enReturn = FLASH__enWaitPageErase();
        break;
    case SYSCTL_BOOTCFG_R_KEY_A442:
        FLASH_FMC_R = FLASH_FMC_R_WRKEY_KEY1 | FLASH_FMC_R_ERASE_ERASE;
        enReturn = FLASH__enWaitPageErase();
        break;
    default:
        break;
    }
    return (FLASH_nSTATUS) enReturn;
}



FLASH_nSTATUS FLASH__enPageErase (uint32_t u32Address)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t u32Key = SYSCTL_BOOTCFG_R & SYSCTL_BOOTCFG_R_KEY_MASK;
    if(u32Address < FLASH_ADDRESS_MAX)
    {
        FLASH_FMA_R = u32Address;
        enReturn = FLASH_enInitPageErase(u32Key);
    }
    return (FLASH_nSTATUS) enReturn;
}

FLASH_nSTATUS FLASH__enPageErasePos (uint32_t u32Page)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t u32Address = u32Page * FLASH_PAGE_SIZE;
    enReturn = FLASH__enPageErase(u32Address);
    return (FLASH_nSTATUS) enReturn;
}


FLASH_nSTATUS FLASH__enMassErase (void)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t u32Key = SYSCTL_BOOTCFG_R & SYSCTL_BOOTCFG_R_KEY_MASK;
    switch(u32Key)
    {
    case SYSCTL_BOOTCFG_R_KEY_71D5:
        FLASH_FMC_R = FLASH_FMC_R_WRKEY_KEY2 | FLASH_FMC_R_MERASE_MERASE;
        enReturn = FLASH__enWaitMassErase();
        break;
    case SYSCTL_BOOTCFG_R_KEY_A442:
        FLASH_FMC_R = FLASH_FMC_R_WRKEY_KEY1 | FLASH_FMC_R_MERASE_MERASE;
        enReturn = FLASH__enWaitMassErase();
        break;
    default:
        break;
    }
    return (FLASH_nSTATUS) enReturn;
}

