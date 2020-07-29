/**
 *
 * @file TIMER_InterruptRoutine_ModuleB_32_Module5.c
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
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Intrinsics/TIMER_Interrupt/TIMER_InterruptRoutine/TIMER_InterruptRoutine_ModuleB_32/TIMER_InterruptRoutine_ModuleB_32_Module5.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Intrinsics/TIMER_Interrupt/TIMER_InterruptRoutine/TIMER_InterruptRoutine_Array.h>

void WTIMER5B__vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=(uint8_t)GPWTM5_TB_GPTMTnMIS_R;
    if(u8Reg & (uint8_t)TIMER_enINT_TB_TIMEOUT)
    {
        GPWTM5_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_TIMEOUT;
        TIMER__vSOURCEISR[1][1][5][0]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPWTM5_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER__vSOURCEISR[1][1][5][1]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPWTM5_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER__vSOURCEISR[1][1][5][2]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TB_MATCH)
    {
        GPWTM5_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_MATCH;
        TIMER__vSOURCEISR[1][1][5][3]();
    }
}


