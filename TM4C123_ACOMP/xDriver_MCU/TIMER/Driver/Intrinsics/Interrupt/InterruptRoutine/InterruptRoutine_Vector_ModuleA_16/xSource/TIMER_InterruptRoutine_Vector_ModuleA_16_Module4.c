/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleA_16_Module4.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleA_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleA_16_Module4.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Dependencies.h>

void TIMER4A__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=(uint32_t)GPTM4_TA_GPTMTnMIS_R;
    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        if(DMA_DMACHIS_R_CHIS0_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS0_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET0_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET0_MASK ))
            {
                if(DMA_DMACHMAP0_R_CH0SEL_TIMER4A == (DMA_DMACHMAP0_R & DMA_DMACHMAP0_R_CH0SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_3][0U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS0_CLEAR;
                }
            }
        }
    }

    if(u32Reg & (uint32_t)TIMER_enINT_TA_TIMEOUT)
    {
        GPTM4_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_TIMEOUT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_4][(uint32_t)TIMER_enINTERRUPT_TIMEOUT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPTM4_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_4][(uint32_t)TIMER_enINTERRUPT_CAPTURE_MATCH]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPTM4_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_4][(uint32_t)TIMER_enINTERRUPT_CAPTURE_EVENT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_MATCH)
    {
        GPTM4_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_4][(uint32_t)TIMER_enINTERRUPT_MATCH]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TW_RTC)
    {
        GPTM4_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TW_RTC;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_4][(uint32_t)TIMER_enINTERRUPT_RTC]();
    }
}




