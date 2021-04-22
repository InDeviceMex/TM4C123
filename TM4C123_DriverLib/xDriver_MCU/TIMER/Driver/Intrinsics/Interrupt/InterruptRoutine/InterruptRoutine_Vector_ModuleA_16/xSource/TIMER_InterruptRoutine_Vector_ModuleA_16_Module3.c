/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleA_16_Module3.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleA_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleA_16_Module3.h>

#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Dependencies.h>

#define DMA_SOURCE_BIT    (2UL)
#define DMA_SOURCE_MASK    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT))

void TIMER3A__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32RegDMAEn = 0UL;
    volatile uint32_t u32RegDMAOccur = 0UL;
    volatile uint32_t u32RegDMAPeriph = 0UL;
    volatile uint32_t u32RegDMASource = 0UL;

    u32RegDMAEn = SYSCTL_RCGCDMA_R;
    u32RegDMAEn &= SYSCTL_RCGCDMA_R_UDMA_EN;
    if(0UL != u32RegDMAEn)
    {
        u32RegDMAOccur = DMA_DMACHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK;
        if(0UL != u32RegDMAOccur)
        {
            u32RegDMAPeriph = DMA_DMAREQMASKSET_R;
            u32RegDMAPeriph &= DMA_SOURCE_MASK;
            if(0UL == u32RegDMAPeriph)
            {
                u32RegDMASource = DMA_DMACHMAP0_R;
                u32RegDMASource &= DMA_DMACHMAP0_R_CH2SEL_MASK;
                if(DMA_DMACHMAP0_R_CH2SEL_TIMER3A == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_1][DMA_SOURCE_BIT]();
                    DMA_DMACHIS_R = DMA_SOURCE_MASK;
                }
            }
        }
    }

    u32Reg = (uint32_t) GPTM3_TA_TnMIS_R;

    if((uint32_t) TIMER_enINT_TA_TIMEOUT & u32Reg)
    {
        GPTM3_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_TIMEOUT;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_32][(uint32_t) TIMER_enSUBMODULE_A][(uint32_t) TIMER_enMODULE_NUM_3][(uint32_t) TIMER_enINTERRUPT_TIMEOUT]();
    }
    if((uint32_t) TIMER_enINT_TA_CAPTURE_MATCH & u32Reg)
    {
        GPTM3_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_32][(uint32_t) TIMER_enSUBMODULE_A][(uint32_t) TIMER_enMODULE_NUM_3][(uint32_t) TIMER_enINTERRUPT_CAPTURE_MATCH]();
    }
    if((uint32_t) TIMER_enINT_TA_CAPTURE_EVENT & u32Reg)
    {
        GPTM3_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_32][(uint32_t) TIMER_enSUBMODULE_A][(uint32_t) TIMER_enMODULE_NUM_3][(uint32_t) TIMER_enINTERRUPT_CAPTURE_EVENT]();
    }
    if((uint32_t) TIMER_enINT_TA_MATCH & u32Reg)
    {
        GPTM3_TA_TnICR_R = (uint32_t) TIMER_enINT_TA_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_32][(uint32_t) TIMER_enSUBMODULE_A][(uint32_t) TIMER_enMODULE_NUM_3][(uint32_t) TIMER_enINTERRUPT_MATCH]();
    }
    if((uint32_t) TIMER_enINT_TW_RTC & u32Reg)
    {
        GPTM3_TA_TnICR_R = (uint32_t) TIMER_enINT_TW_RTC;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_32][(uint32_t) TIMER_enSUBMODULE_A][(uint32_t) TIMER_enMODULE_NUM_3][(uint32_t) TIMER_enINTERRUPT_RTC]();
    }

}




