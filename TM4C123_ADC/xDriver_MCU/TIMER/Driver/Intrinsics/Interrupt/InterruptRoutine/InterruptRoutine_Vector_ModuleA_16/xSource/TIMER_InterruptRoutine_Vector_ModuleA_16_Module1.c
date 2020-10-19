/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleA_16_Module1.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleA_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleA_16_Module1.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Dependencies.h>

void TIMER1A__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg= (uint32_t)GPTM1_TA_GPTMTnMIS_R;
    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        if(DMA_DMACHIS_R_CHIS18_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS18_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET18_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET18_MASK ))
            {
                if(DMA_DMACHMAP2_R_CH18SEL_TIMER1A == (DMA_DMACHMAP2_R & DMA_DMACHMAP2_R_CH18SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_1][18u]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS18_CLEAR;
                }
            }
        }
        if(DMA_DMACHIS_R_CHIS20_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS20_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET20_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET20_MASK ))
            {
                if(DMA_DMACHMAP2_R_CH20SEL_TIMER1A == (DMA_DMACHMAP2_R & DMA_DMACHMAP2_R_CH20SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_0][20u]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS20_CLEAR;
                }
            }
        }
    }

    if(u32Reg & (uint32_t) TIMER_enINT_TA_TIMEOUT)
    {
        GPTM1_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_TIMEOUT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_1][(uint32_t)TIMER_enINTERRUPT_TIMEOUT]();
    }
    if(u32Reg &  (uint32_t)TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPTM1_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_1][(uint32_t)TIMER_enINTERRUPT_CAPTURE_MATCH]();
    }
    if(u32Reg &  (uint32_t)TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPTM1_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_1][(uint32_t)TIMER_enINTERRUPT_CAPTURE_EVENT]();
    }
    if(u32Reg &  (uint32_t)TIMER_enINT_TA_MATCH)
    {
        GPTM1_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_1][(uint32_t)TIMER_enINTERRUPT_MATCH]();
    }
    if(u32Reg &  (uint32_t)TIMER_enINT_TW_RTC)
    {
        GPTM1_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TW_RTC;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_1][(uint32_t)TIMER_enINTERRUPT_RTC]();
    }

}


