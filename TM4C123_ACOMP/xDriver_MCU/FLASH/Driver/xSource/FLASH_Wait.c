/*
 * FLASH.c
 *
 *  Created on: 5 feb. 2018
 *      Author: InDev
 */


#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Wait.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>
#define FLASH_TIMEOUT_MAX (9000000U)

FLASH_nSTATUS FLASH__enWaitWrite (void)
{
    uint32_t u32TimeOut = FLASH_TIMEOUT_MAX;
    FLASH_nSTATUS enReturn = FLASH_enOK;
    while(FLASH_FMC_R_WRITE_NOCOMPLETE == (FLASH_FMC_R & FLASH_FMC_R_WRITE_MASK))
    {
        u32TimeOut--;
        if(0u == u32TimeOut)
        {
            enReturn = FLASH_enERROR;
            break;
        }
    }
    return (FLASH_nSTATUS) enReturn;
}

FLASH_nSTATUS FLASH__enWaitBufWrite (void)
{
    uint32_t u32TimeOut = FLASH_TIMEOUT_MAX;
    FLASH_nSTATUS enReturn = FLASH_enOK;
    while(FLASH_FMC2_R_WRBUF_NOCOMPLETE == (FLASH_FMC2_R & FLASH_FMC2_R_WRBUF_MASK))
    {
        u32TimeOut--;
        if(0u == u32TimeOut)
        {
            enReturn = FLASH_enERROR;
            break;
        }
    }
    return (FLASH_nSTATUS) enReturn;
}
FLASH_nSTATUS FLASH__enWaitPageErase (void)
{
    uint32_t u32TimeOut = FLASH_TIMEOUT_MAX;
    FLASH_nSTATUS enReturn =FLASH_enOK;
    while(FLASH_FMC_R_ERASE_NOCOMPLETE == (FLASH_FMC_R & FLASH_FMC_R_ERASE_MASK))
    {
        u32TimeOut--;
        if( 0u == u32TimeOut)
        {
            enReturn = FLASH_enERROR;
            break;
        }
    }
    return (FLASH_nSTATUS) enReturn;
}

FLASH_nSTATUS FLASH__enWaitMassErase(void)
{
    uint32_t u32TimeOut = FLASH_TIMEOUT_MAX;
    FLASH_nSTATUS enReturn = FLASH_enOK;
    while(FLASH_FMC_R_MERASE_NOCOMPLETE == (FLASH_FMC_R & FLASH_FMC_R_MERASE_MASK))
    {
        u32TimeOut--;
        if( 0u == u32TimeOut)
        {
            enReturn = FLASH_enERROR;
            break;
        }
    }
    return (FLASH_nSTATUS) enReturn;
}
