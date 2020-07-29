/**
 *
 * @file TIMER_Syncronize.c
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
 * @verbatim 15 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Syncronize.h>

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Peripheral.h>

void TIMER__vSetSyncronize(TIMER_nSYNC enSync)
{
    GPTM0_GPTMSYNC_R=(uint32_t)enSync&(uint32_t)TIMER_enSYNC_ALL;
}



