/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleA_16_Module0.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleA_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleA_16_Module0.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>


void TIMER0A__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=(uint32_t)GPTM0_TA_GPTMTnMIS_R;
    if(u32Reg & (uint32_t)TIMER_enINT_TA_TIMEOUT)
    {
        GPTM0_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_TIMEOUT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_0][(uint32_t)TIMER_enINTERRUPT_TIMEOUT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPTM0_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_0][(uint32_t)TIMER_enINTERRUPT_CAPTURE_MATCH]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPTM0_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_0][(uint32_t)TIMER_enINTERRUPT_CAPTURE_EVENT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_MATCH)
    {
        GPTM0_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_0][(uint32_t)TIMER_enINTERRUPT_MATCH]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TW_RTC)
    {
        GPTM0_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TW_RTC;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_0][(uint32_t)TIMER_enINTERRUPT_RTC]();
    }

}
