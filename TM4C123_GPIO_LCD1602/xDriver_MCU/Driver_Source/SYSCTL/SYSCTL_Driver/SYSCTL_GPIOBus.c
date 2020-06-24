/**
 *
 * @file SYSCTL_GPIOBus.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_Driver/SYSCTL_GPIOBus.h>

void SYSCTL__vSetGPIOBus_AHB(SYSCTL_nGPIOBUS enGPIO)
{
    SYSCTL_GPIOHBCTL_R|=enGPIO;
}

void SYSCTL__vSetGPIOBus_APB(SYSCTL_nGPIOBUS enGPIO)
{
    SYSCTL_GPIOHBCTL_R&=~((uint32_t)enGPIO);
}

SYSCTL_nGPIOBUS_CURRENT SYSCTL__vGetGPIOBus(SYSCTL_nGPIOBUS enGPIO)
{
    SYSCTL_nGPIOBUS_CURRENT enCurrent =SYSCTL_enGPIOBUS_APB;
    uint32_t u32Reg=SYSCTL_GPIOHBCTL_R;
    u32Reg&=enGPIO;
    if(0u!=u32Reg)
    {
        enCurrent=SYSCTL_enGPIOBUS_AHB;
    }
    return enCurrent;
}


