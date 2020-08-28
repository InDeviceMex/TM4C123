/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleB_16_Module1.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleB_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleB_16_Module1.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void TIMER1B__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=(uint32_t)GPTM1_TB_GPTMTnMIS_R;
    if(u32Reg & (uint32_t)TIMER_enINT_TB_TIMEOUT)
    {
        GPTM1_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_TIMEOUT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_1][(uint32_t)TIMER_enINTERRUPT_TIMEOUT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPTM1_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_1][(uint32_t)TIMER_enINTERRUPT_CAPTURE_MATCH]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPTM1_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_1][(uint32_t)TIMER_enINTERRUPT_CAPTURE_EVENT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TB_MATCH)
    {
        GPTM1_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_1][(uint32_t)TIMER_enINTERRUPT_MATCH]();
    }
}


