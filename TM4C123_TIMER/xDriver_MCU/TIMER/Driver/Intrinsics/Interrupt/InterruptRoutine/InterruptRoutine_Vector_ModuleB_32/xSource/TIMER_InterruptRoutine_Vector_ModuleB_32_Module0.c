/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleB_32_Module0.c
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
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleB_32/xHeader/TIMER_InterruptRoutine_Vector_ModuleB_32_Module0.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void WTIMER0B__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=(uint32_t)GPWTM0_TB_GPTMTnMIS_R;
    if(u32Reg & (uint32_t)TIMER_enINT_TB_TIMEOUT)
    {
        GPWTM0_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_TIMEOUT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en64][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_0][(uint32_t)TIMER_enINTERRUPT_TIMEOUT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPWTM0_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en64][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_0][(uint32_t)TIMER_enINTERRUPT_CAPTURE_MATCH]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPWTM0_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en64][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_0][(uint32_t)TIMER_enINTERRUPT_CAPTURE_EVENT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TB_MATCH)
    {
        GPWTM0_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en64][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_0][(uint32_t)TIMER_enINTERRUPT_MATCH]();
    }
}


