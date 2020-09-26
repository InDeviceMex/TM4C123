/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleA_16_Module2.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleA_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleA_16_Module2.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Source.h>

void TIMER2A__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=(uint32_t)GPTM2_TA_GPTMTnMIS_R;
    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        if(DMA_DMACHIS_R_CHIS4_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS4_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET4_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET4_MASK ))
            {
                if(DMA_DMACHMAP0_R_CH4SEL_TIMER2A == (DMA_DMACHMAP0_R & DMA_DMACHMAP0_R_CH4SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_1][4u]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS4_CLEAR;
                }
            }
        }
        if(DMA_DMACHIS_R_CHIS6_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS6_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET6_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET6_MASK ))
            {
                if(DMA_DMACHMAP0_R_CH6SEL_TIMER2A == (DMA_DMACHMAP0_R & DMA_DMACHMAP0_R_CH6SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_1][6u]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS6_CLEAR;
                }
            }
        }
        if(DMA_DMACHIS_R_CHIS14_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS14_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET14_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET14_MASK ))
            {
                if(DMA_DMACHMAP1_R_CH14SEL_TIMER2A == (DMA_DMACHMAP1_R & DMA_DMACHMAP1_R_CH14SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_1][14u]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS14_CLEAR;
                }
            }
        }
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_TIMEOUT)
    {
        GPTM2_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_TIMEOUT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_2][(uint32_t)TIMER_enINTERRUPT_TIMEOUT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPTM2_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_2][(uint32_t)TIMER_enINTERRUPT_CAPTURE_MATCH]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPTM2_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_2][(uint32_t)TIMER_enINTERRUPT_CAPTURE_EVENT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_MATCH)
    {
        GPTM2_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_2][(uint32_t)TIMER_enINTERRUPT_MATCH]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TW_RTC)
    {
        GPTM2_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TW_RTC;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en32][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_2][(uint32_t)TIMER_enINTERRUPT_RTC]();
    }

}



