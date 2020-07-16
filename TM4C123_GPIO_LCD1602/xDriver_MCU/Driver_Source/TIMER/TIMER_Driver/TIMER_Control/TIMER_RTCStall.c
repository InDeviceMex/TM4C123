/**
 *
 * @file TIMER_RTCStall.c
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
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Control/TIMER_RTCStall.h>

void TIMER__vSetRTCStall(TIMER_nMODULE enModule, TIMER_nRTC_STALL enRTCStall)
{
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x3u;
    if(TIMER_enW == u32Letter)
    {
        TIMER__vSetControlGeneric(enModule, (uint32_t) enRTCStall, GPTM_TW_GPTMTnCTL_RTCEN_MASK, GPTM_TW_GPTMTnCTL_R_RTCEN_BIT);
    }
}

TIMER_nRTC_STALL TIMER__enGetRTCStall(TIMER_nMODULE enModule)
{
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x3u;
    TIMER_nRTC_STALL enReturn = TIMER_enRTC_STALL_UNDEF;
    if(TIMER_enW == u32Letter)
    {
        enReturn = (TIMER_nRTC_STALL)TIMER__u32GetControlGeneric(enModule,GPTM_TW_GPTMTnCTL_RTCEN_MASK, GPTM_TW_GPTMTnCTL_R_RTCEN_BIT);
    }
    return enReturn;
}


