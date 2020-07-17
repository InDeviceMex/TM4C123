/**
 *
 * @file TIMER_InterruptRoutine_ModuleB_16_Module2.c
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
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Intrinsics/TIMER_Interrupt/TIMER_InterruptRoutine/TIMER_InterruptRoutine_ModuleB_16/TIMER_InterruptRoutine_ModuleB_16_Module2.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Intrinsics/TIMER_Interrupt/TIMER_InterruptRoutine/TIMER_InterruptRoutine_Array.h>

void TIMER2B__vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=(uint8_t)GPTM2_TB_GPTMTnMIS_R;
    if(u8Reg & (uint8_t)TIMER_enINT_TB_TIMEOUT)
    {
        GPTM2_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_TIMEOUT;
        TIMER__vSOURCEISR[0][1][2][0]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPTM2_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER__vSOURCEISR[0][1][2][1]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPTM2_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER__vSOURCEISR[0][1][2][2]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TB_MATCH)
    {
        GPTM2_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_MATCH;
        TIMER__vSOURCEISR[0][1][2][3]();
    }
}



