/**
 *
 * @file TIMER_Enable.c
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

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Control/TIMER_Enable.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Peripheral.h>
#include <TIMER/TIMER_Driver/TIMER_Intrinsics/TIMER_ControlGeneric.h>

void TIMER__vSetEnable(TIMER_nMODULE enModule, TIMER_nENABLE enEnable)
{
    TIMER__vSetControlGeneric(enModule, (uint32_t) enEnable, GPTM_TA_GPTMTnCTL_TnEN_MASK, GPTM_TA_GPTMTnCTL_R_TnEN_BIT);
}

TIMER_nENABLE TIMER__enGetEnable(TIMER_nMODULE enModule)
{
    return (TIMER_nENABLE)TIMER__u32GetControlGeneric(enModule,GPTM_TA_GPTMTnCTL_TnEN_MASK, GPTM_TA_GPTMTnCTL_R_TnEN_BIT);
}

