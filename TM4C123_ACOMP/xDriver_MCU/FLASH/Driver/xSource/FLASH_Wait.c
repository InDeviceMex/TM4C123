/*
 * FLASH.c
 *
 *  Created on: 5 feb. 2018
 *      Author: InDev
 */
#include <xDriver_MCU/FLASH/Driver/xHeader/FLASH_Wait.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>

#define FLASH_TIMEOUT_MAX (9000000UL)

FLASH_nSTATUS FLASH__enWait (uint32_t u32FMC, uint32_t u32RegisterMask)
{
    uint32_t u32Reg = 0UL;
    uint32_t u32TimeOut = FLASH_TIMEOUT_MAX;
    FLASH_nSTATUS enReturn = FLASH_enOK;

    do
    {
        u32Reg = MCU__u32ReadRegister( FLASH_BASE, u32FMC, u32RegisterMask, 0UL);
        u32TimeOut--;
        if(0UL == u32TimeOut)
        {
            enReturn = FLASH_enERROR;
            break;
        }
    }while((u32RegisterMask == u32Reg) && (0UL != u32TimeOut));

    return enReturn;
}
