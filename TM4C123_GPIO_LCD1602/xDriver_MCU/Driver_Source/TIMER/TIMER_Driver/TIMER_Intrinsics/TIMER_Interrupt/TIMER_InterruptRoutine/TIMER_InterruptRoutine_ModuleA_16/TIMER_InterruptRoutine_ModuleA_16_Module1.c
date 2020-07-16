/**
 *
 * @file TIMER_InterruptRoutine_ModuleA_16_Module1.c
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
 * @verbatim 14 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Intrinsics/TIMER_Interrupt/TIMER_InterruptRoutine/TIMER_InterruptRoutine_ModuleA_16/TIMER_InterruptRoutine_ModuleA_16_Module1.h>

void TIMER1A__vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg= (uint8_t)GPTM1_TA_GPTMTnMIS_R;
    if(u8Reg & (uint8_t) TIMER_enINT_TA_TIMEOUT)
    {
        GPTM1_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_TIMEOUT;
        TIMER__vSOURCEISR[0][0][1][0]();
    }
    if(u8Reg &  (uint8_t)TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPTM1_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER__vSOURCEISR[0][0][1][1]();
    }
    if(u8Reg &  (uint8_t)TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPTM1_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER__vSOURCEISR[0][0][1][2]();
    }
    if(u8Reg &  (uint8_t)TIMER_enINT_TA_MATCH)
    {
        GPTM1_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_MATCH;
        TIMER__vSOURCEISR[0][0][1][3]();
    }
    if(u8Reg &  (uint8_t)TIMER_enINT_TW_RTC)
    {
        GPTM1_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TW_RTC;
        TIMER__vSOURCEISR[0][0][1][4]();
    }

}


