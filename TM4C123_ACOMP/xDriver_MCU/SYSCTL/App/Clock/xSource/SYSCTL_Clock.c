/**
 *
 * @file SYSCTL_Clock.c
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
#include <xDriver_MCU/SYSCTL/App/Clock/SYSCTL_Clock.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/SYSCTL/App/Clock/xHeader/SYSCTL_Clock_RCC.h>
#include <xDriver_MCU/SYSCTL/App/Clock/xHeader/SYSCTL_Clock_RCC2.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

uint32_t SYSCTL__u32GetClock(void)
{
    uint32_t u32RegRCC2 = 0UL;
    uint32_t u32Frequency = 0UL;

    u32RegRCC2 = MCU__u32ReadRegister( SYSCTL_BASE, SYSCTL_RCC2_OFFSET, SYSCTL_RCC2_USERCC2_MASK, SYSCTL_RCC2_R_USERCC2_BIT);
    /*Identify if RCC2 is priority*/
    if(SYSCTL_RCC2_USERCC2_RCC2 == u32RegRCC2)
    {
        u32Frequency = SYSCTL__u32GetClock_RCC2();
    }
    else
    {
        u32Frequency = SYSCTL__u32GetClock_RCC();
    }
    return u32Frequency;
}
