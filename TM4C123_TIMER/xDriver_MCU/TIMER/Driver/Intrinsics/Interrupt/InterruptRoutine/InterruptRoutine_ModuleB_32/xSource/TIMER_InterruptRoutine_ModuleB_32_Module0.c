/**
 *
 * @file TIMER_InterruptRoutine_ModuleB_32_Module0.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_ModuleB_32/xHeader/TIMER_InterruptRoutine_ModuleB_32_Module0.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Array.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void WTIMER0B__vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=(uint8_t)GPWTM0_TB_GPTMTnMIS_R;
    if(u8Reg & (uint8_t)TIMER_enINT_TB_TIMEOUT)
    {
        GPWTM0_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_TIMEOUT;
        TIMER__vSOURCEISR[1][1][0][0]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPWTM0_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER__vSOURCEISR[1][1][0][1]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPWTM0_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER__vSOURCEISR[1][1][0][2]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TB_MATCH)
    {
        GPWTM0_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_MATCH;
        TIMER__vSOURCEISR[1][1][0][3]();
    }
}


