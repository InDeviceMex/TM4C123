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

#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_App/SYSCTL_Clock/SYSCTL_Clock.h>


uint32_t SYSCTL__u32GetClock(void)
{
    uint32_t u32RegRCC2=SYSCTL_RCC2_R;
    uint32_t u32Frequency=0;

    /*Identify if RCC2 is priority*/
    if(SYSCTL_RCC2_R_USERCC2_RCC2==(u32RegRCC2&SYSCTL_RCC2_R_USERCC2_MASK))
    {
        u32Frequency= SYSCTL__u32GetClock_RCC2();
    }
    else
    {
        u32Frequency = SYSCTL__u32GetClock_RCC();
    }
    return u32Frequency;
}

