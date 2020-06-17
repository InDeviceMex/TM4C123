/*
 * FLASH.c
 *
 *  Created on: 5 feb. 2018
 *      Author: InDev
 */


#include <xDriver_MCU/Driver_Header/FLASH/FLASH.h>


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
