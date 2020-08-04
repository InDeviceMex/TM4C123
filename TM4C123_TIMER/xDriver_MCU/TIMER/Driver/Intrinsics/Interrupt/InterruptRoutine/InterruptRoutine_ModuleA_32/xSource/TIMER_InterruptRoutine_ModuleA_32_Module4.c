/**
 *
 * @file TIMER_InterruptRoutine_ModuleA_32_Module4.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_ModuleA_32/xHeader/TIMER_InterruptRoutine_ModuleA_32_Module4.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Array.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void WTIMER4A__vISR(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=GPWTM4_TW_GPTMTnMIS_R;
    if(u32Reg & (uint32_t)TIMER_enINT_TA_TIMEOUT)
    {
        GPWTM4_TW_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_TIMEOUT;
        TIMER__vSOURCEISR[1][0][4][0]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPWTM4_TW_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER__vSOURCEISR[1][0][4][1]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPWTM4_TW_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER__vSOURCEISR[1][0][4][2]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_MATCH)
    {
        GPWTM4_TW_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_MATCH;
        TIMER__vSOURCEISR[1][0][4][3]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TW_RTC)
    {
        GPWTM4_TW_GPTMTnICR_R=(uint32_t)TIMER_enINT_TW_RTC;
        TIMER__vSOURCEISR[1][0][4][4]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TW_WRITE_UPDATE)
    {
        GPWTM4_TW_GPTMTnICR_R=(uint32_t)TIMER_enINT_TW_WRITE_UPDATE;
        TIMER__vSOURCEISR[1][0][4][5]();
    }

}



