/**
 *
 * @file TIMER_InterruptRoutine_ModuleA_16_Module0.c
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

#include <stdint.h>
#include <xDriver_MCU/TIMER/Header/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_ModuleA_16/TIMER_InterruptRoutine_ModuleA_16_Module0.h>
#include <xDriver_MCU/TIMER/Header/Driver/Intrinsics/Interrupt/InterruptRoutine/TIMER_InterruptRoutine_Array.h>
#include <xDriver_MCU/TIMER/Header/Peripheral/TIMER_Peripheral.h>


void TIMER0A__vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=(uint8_t)GPTM0_TA_GPTMTnMIS_R;
    if(u8Reg & (uint8_t)TIMER_enINT_TA_TIMEOUT)
    {
        GPTM0_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_TIMEOUT;
        TIMER__vSOURCEISR[0][0][0][0]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPTM0_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER__vSOURCEISR[0][0][0][1]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPTM0_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER__vSOURCEISR[0][0][0][2]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TA_MATCH)
    {
        GPTM0_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_MATCH;
        TIMER__vSOURCEISR[0][0][0][3]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TW_RTC)
    {
        GPTM0_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TW_RTC;
        TIMER__vSOURCEISR[0][0][0][4]();
    }

}
