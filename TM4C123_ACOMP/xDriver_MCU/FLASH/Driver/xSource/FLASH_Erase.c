/*
 * FLASH_Erase.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Erase.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Wait.h>

static FLASH_nSTATUS FLASH_enInitErase (uint32_t u32Feature, FLASH_nSTATUS (*penCallback)(uint32_t u32RegisterMask));

static FLASH_nSTATUS FLASH_enInitErase (uint32_t u32Feature, FLASH_nSTATUS (*penCallback)(uint32_t u32RegisterMask))
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t u32Key = 0UL;

    u32Key = MCU__u32ReadRegister( SYSCTL_BASE, SYSCTL_BOOTCFG_OFFSET, SYSCTL_BOOTCFG_KEY_MASK, SYSCTL_BOOTCFG_R_KEY_BIT);
    switch(u32Key)
    {
    case SYSCTL_BOOTCFG_KEY_71D5:
        MCU__vWriteRegister( FLASH_BASE, FLASH_FMC_OFFSET, (FLASH_FMC_R_WRKEY_KEY2 | u32Feature), (FLASH_FMC_R_WRKEY_MASK | u32Feature), 0UL);
        enReturn = penCallback(u32Feature);
        break;
    case SYSCTL_BOOTCFG_KEY_A442:
        MCU__vWriteRegister(FLASH_BASE, FLASH_FMC_OFFSET, (FLASH_FMC_R_WRKEY_KEY1 | u32Feature), (FLASH_FMC_R_WRKEY_MASK | u32Feature), 0UL);
        enReturn = penCallback(u32Feature);
        break;
    default:
        break;
    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enPageErase (uint32_t u32Address)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;

    if(u32Address < FLASH_ADDRESS_MAX)
    {
        MCU__vWriteRegister( FLASH_BASE, FLASH_FMA_OFFSET, u32Address, FLASH_FMA_OFFSET_MASK, FLASH_FMA_R_OFFSET_BIT);
        enReturn = FLASH_enInitErase( FLASH_FMC_R_ERASE_MASK, &FLASH__enWaitFMC);
    }
    return enReturn;
}

FLASH_nSTATUS FLASH__enPageErasePos (uint32_t u32Page)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    uint32_t u32Address = u32Page * FLASH_PAGE_SIZE;
    enReturn = FLASH__enPageErase( u32Address);
    return enReturn;
}

FLASH_nSTATUS FLASH__enMassErase (void)
{
    FLASH_nSTATUS enReturn = FLASH_enERROR;
    enReturn = FLASH_enInitErase( FLASH_FMC_R_MERASE_MASK, &FLASH__enWaitFMC);
    return enReturn;
}
