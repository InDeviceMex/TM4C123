/**
 *
 * @file OS_Kernel_Launch.c
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
 * @verbatim Mar 23, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 23, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include<xOS/Kernel/xHeader/OS_Kernel_Launch.h>
#include <xApplication_MCU/Core/SYSTICK/SYSTICK.h>

void OS_Kernel_Schedule(void);

void OS_Kernel__vLaunch(uint32_t u32Ticks)
{
    SYSTICK__enInitTickVector(u32Ticks, SYSTICK_enPRI7, SYSTICK_enSYSCLK, &OS_Kernel_Schedule);
}

void OS_Kernel_Schedule(void)
{

}



