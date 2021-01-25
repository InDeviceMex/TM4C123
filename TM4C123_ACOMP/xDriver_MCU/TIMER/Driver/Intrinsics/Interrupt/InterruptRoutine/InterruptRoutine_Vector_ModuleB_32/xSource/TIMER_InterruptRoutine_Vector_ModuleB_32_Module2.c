/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleB_32_Module2.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleB_32/xHeader/TIMER_InterruptRoutine_Vector_ModuleB_32_Module2.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Dependencies.h>

void WTIMER2B__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=(uint32_t)GPWTM2_TB_GPTMTnMIS_R;
    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        if(DMA_DMACHIS_R_CHIS17_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS17_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET17_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET17_MASK ))
            {
                if(DMA_DMACHMAP2_R_CH17SEL_WTIMER2B == (DMA_DMACHMAP2_R & DMA_DMACHMAP2_R_CH17SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_3][17U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS17_CLEAR;
                }
            }
        }
    }

    if(u32Reg & (uint32_t)TIMER_enINT_TB_TIMEOUT)
    {
        GPWTM2_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_TIMEOUT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en64][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_2][(uint32_t)TIMER_enINTERRUPT_TIMEOUT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPWTM2_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en64][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_2][(uint32_t)TIMER_enINTERRUPT_CAPTURE_MATCH]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPWTM2_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en64][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_2][(uint32_t)TIMER_enINTERRUPT_CAPTURE_EVENT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TB_MATCH)
    {
        GPWTM2_TB_GPTMTnICR_R=(uint32_t)TIMER_enINT_TB_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en64][(uint32_t)TIMER_enB][(uint32_t)TIMER_enMODULE_NUM_2][(uint32_t)TIMER_enINTERRUPT_MATCH]();
    }
}



