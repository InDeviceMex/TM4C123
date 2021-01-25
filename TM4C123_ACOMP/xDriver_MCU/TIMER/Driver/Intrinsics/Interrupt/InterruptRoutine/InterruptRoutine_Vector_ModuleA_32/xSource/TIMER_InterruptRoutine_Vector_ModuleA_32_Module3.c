/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleA_32_Module3.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleA_32/xHeader/TIMER_InterruptRoutine_Vector_ModuleA_32_Module3.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Dependencies.h>

void WTIMER3A__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=GPWTM3_TW_GPTMTnMIS_R;
    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        if(DMA_DMACHIS_R_CHIS24_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS24_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET24_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET24_MASK ))
            {
                if(DMA_DMACHMAP3_R_CH24SEL_WTIMER3A == (DMA_DMACHMAP3_R & DMA_DMACHMAP3_R_CH24SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_3][24U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS24_CLEAR;
                }
            }
        }
    }

    if(u32Reg & (uint32_t)TIMER_enINT_TA_TIMEOUT)
    {
        GPWTM3_TW_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_TIMEOUT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en64][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_3][(uint32_t)TIMER_enINTERRUPT_TIMEOUT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPWTM3_TW_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en64][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_3][(uint32_t)TIMER_enINTERRUPT_CAPTURE_MATCH]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPWTM3_TW_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en64][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_3][(uint32_t)TIMER_enINTERRUPT_CAPTURE_EVENT]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TA_MATCH)
    {
        GPWTM3_TW_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en64][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_3][(uint32_t)TIMER_enINTERRUPT_MATCH]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TW_RTC)
    {
        GPWTM3_TW_GPTMTnICR_R=(uint32_t)TIMER_enINT_TW_RTC;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en64][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_3][(uint32_t)TIMER_enINTERRUPT_RTC]();
    }
    if(u32Reg & (uint32_t)TIMER_enINT_TW_WRITE_UPDATE)
    {
        GPWTM3_TW_GPTMTnICR_R=(uint32_t)TIMER_enINT_TW_WRITE_UPDATE;
        TIMER__vIRQSourceHandler[(uint32_t)TIMER_en64][(uint32_t)TIMER_enA][(uint32_t)TIMER_enMODULE_NUM_3][(uint32_t)TIMER_enINTERRUPT_WRITE_UPDATE]();
    }

}


