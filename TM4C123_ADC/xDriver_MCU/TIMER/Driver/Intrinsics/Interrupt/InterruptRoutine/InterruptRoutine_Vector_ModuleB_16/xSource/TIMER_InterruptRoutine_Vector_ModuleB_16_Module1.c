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
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleB_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleB_16_Module1.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Source.h>

void TIMER1B__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=(uint32_t)GPTM1_TB_GPTMTnMIS_R;
    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        if(DMA_DMACHIS_R_CHIS19_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS19_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET19_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET19_MASK ))
            {
                if(DMA_DMACHMAP2_R_CH19SEL_TIMER1B == (DMA_DMACHMAP2_R & DMA_DMACHMAP2_R_CH19SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_1][19u]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS19_CLEAR;
                }
            }
        }
        if(DMA_DMACHIS_R_CHIS21_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS21_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET21_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET21_MASK ))
            {
                if(DMA_DMACHMAP2_R_CH21SEL_TIMER1B == (DMA_DMACHMAP2_R & DMA_DMACHMAP2_R_CH21SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_0][21u]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS21_CLEAR;
                }
            }
        }
    }

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


