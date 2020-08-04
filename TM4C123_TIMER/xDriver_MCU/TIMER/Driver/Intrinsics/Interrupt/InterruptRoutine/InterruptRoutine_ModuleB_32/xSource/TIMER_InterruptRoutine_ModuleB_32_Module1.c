/**
 *
 * @file TIMER_InterruptRoutine_ModuleB_32_Module1.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_ModuleB_32/xHeader/TIMER_InterruptRoutine_ModuleB_32_Module1.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Array.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void WTIMER1B__vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=(uint8_t)GPWTM1_TB_GPTMTnMIS_R;
    if(u8Reg & (uint8_t)TIMER_enINT_TB_TIMEOUT)
    {
        GPWTM1_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_TIMEOUT;
        TIMER__vSOURCEISR[1][1][1][0]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPWTM1_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER__vSOURCEISR[1][1][1][1]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPWTM1_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER__vSOURCEISR[1][1][1][2]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TB_MATCH)
    {
        GPWTM1_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_MATCH;
        TIMER__vSOURCEISR[1][1][1][3]();
    }
}


