/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleB_16_Module2.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleB_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleB_16_Module2.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Dependencies.h>

void TIMER2B__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=(uint32_t)GPTM2_TB_GPTMTnMIS_R;
    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        if(DMA_DMACHIS_R_CHIS5_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS5_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET5_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET5_MASK ))
            {
                if(DMA_DMACHMAP0_R_CH5SEL_TIMER2B == (DMA_DMACHMAP0_R & DMA_DMACHMAP0_R_CH5SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_1][5U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS5_CLEAR;
                }
            }
        }
        if(DMA_DMACHIS_R_CHIS6_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS6_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET7_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET7_MASK ))
            {
                if(DMA_DMACHMAP0_R_CH7SEL_TIMER2B == (DMA_DMACHMAP0_R & DMA_DMACHMAP0_R_CH7SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_1][7U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS7_CLEAR;
                }
            }
        }
        if(DMA_DMACHIS_R_CHIS15_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS15_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET15_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET15_MASK ))
            {
                if(DMA_DMACHMAP1_R_CH15SEL_TIMER2B == (DMA_DMACHMAP1_R & DMA_DMACHMAP1_R_CH15SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_1][15U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS15_CLEAR;
                }
            }
        }
    }

    if(u32Reg & (uint32_t)TIMER_enINT_TB_TIMEOUT)
    {
        GPTM2_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_TIMEOUT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_2][(uint32_t)TIMER_enINTERRUPT_TIMEOUT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPTM2_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_2][(uint32_t)TIMER_enINTERRUPT_CAPTURE_MATCH]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPTM2_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_2][(uint32_t)TIMER_enINTERRUPT_CAPTURE_EVENT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TB_MATCH)
    {
        GPTM2_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_2][(uint32_t)TIMER_enINTERRUPT_MATCH]();
    }
}



