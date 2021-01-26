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
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_GPIOBus.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>


void SYSCTL__vSetGPIOBus_AHB(SYSCTL_nGPIOBUS enGPIO)
{
    enGPIO &= SYSCTL_enGPIOBUSALL;
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_GPIOHBCTL_OFFSET, (uint32_t)enGPIO, (uint32_t)enGPIO, 0UL);
}

void SYSCTL__vSetGPIOBus_APB(SYSCTL_nGPIOBUS enGPIO)
{
    enGPIO &= SYSCTL_enGPIOBUSALL;
    MCU__vWriteRegister(SYSCTL_BASE, SYSCTL_GPIOHBCTL_OFFSET, 0UL, (uint32_t)enGPIO, 0UL);
}

SYSCTL_nGPIOBUS_CURRENT SYSCTL__vGetGPIOBus(SYSCTL_nGPIOBUS enGPIO)
{
    SYSCTL_nGPIOBUS_CURRENT enCurrent =SYSCTL_enGPIOBUS_APB;
    uint32_t u32Reg = 0UL;
    enGPIO &= SYSCTL_enGPIOBUSALL;
    u32Reg = MCU__u32ReadRegister(SYSCTL_BASE, SYSCTL_GPIOHBCTL_OFFSET,(uint32_t) enGPIO, 0UL);
    if(0U != u32Reg)
    {
        enCurrent = SYSCTL_enGPIOBUS_AHB;
    }
    return enCurrent;
}


