/**
 *
 * @file TIMER_UpdateMatchMode.c
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

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Mode/TIMER_UpdateMatchMode.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Peripheral.h>
#include <TIMER/TIMER_Driver/TIMER_Intrinsics/TIMER_ModeGeneric.h>

void TIMER__vSetUpdateMatchMode(TIMER_nMODULE enModule, TIMER_nUPDATE_MATCH enUpdateMatchMode)
{
    TIMER__vSetModeGeneric(enModule, (uint32_t) enUpdateMatchMode,GPTM_TA_GPTMTnMR_TnMRSU_MASK, GPTM_TA_GPTMTnMR_R_TnMRSU_BIT);
}

TIMER_nUPDATE_MATCH TIMER__enGetUpdateMatchMode(TIMER_nMODULE enModule)
{
    return (TIMER_nUPDATE_MATCH)TIMER__u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_TnMRSU_MASK, GPTM_TA_GPTMTnMR_R_TnMRSU_BIT);
}
