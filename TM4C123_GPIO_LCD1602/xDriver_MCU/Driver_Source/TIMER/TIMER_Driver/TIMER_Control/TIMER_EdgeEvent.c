/**
 *
 * @file TIMER_EdgeEvent.c
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
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Control/TIMER_EdgeEvent.h>


void TIMER__vSetEdgeEvent(TIMER_nMODULE enModule, TIMER_nEDGE_EVENT enEdgeEvent)
{
    TIMER__vSetControlGeneric(enModule, (uint32_t) enEdgeEvent, GPTM_TA_GPTMTnCTL_TnEVENT_MASK, GPTM_TA_GPTMTnCTL_R_TnEVENT_BIT);
}

TIMER_nEDGE_EVENT TIMER__enGetEdgeEvent(TIMER_nMODULE enModule)
{
    return (TIMER_nEDGE_EVENT)TIMER__u32GetControlGeneric(enModule,GPTM_TA_GPTMTnCTL_TnEVENT_MASK, GPTM_TA_GPTMTnCTL_R_TnEVENT_BIT);
}

