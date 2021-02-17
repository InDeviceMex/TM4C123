/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleB_16_Module4.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleB_16/xHeader/TIMER_InterruptRoutine_Vector_ModuleB_16_Module4.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Dependencies.h>

#define DMA_SOURCE_BIT    (1UL)
#define DMA_SOURCE_MASK    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT))

void TIMER4B__vIRQVectorHandler(void)
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
                u32RegDMASource &= DMA_DMACHMAP0_R_CH1SEL_MASK;
                if(DMA_DMACHMAP0_R_CH1SEL_TIMER4B == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_3][DMA_SOURCE_BIT]();
                    DMA_DMACHIS_R = DMA_SOURCE_MASK;
                }
            }
        }
    }

    u32Reg = (uint32_t) GPTM4_TB_GPTMTnMIS_R;

    if((uint32_t) TIMER_enINT_TB_TIMEOUT & u32Reg)
    {
        GPTM4_TB_GPTMTnICR_R = (uint32_t) TIMER_enINT_TB_TIMEOUT;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_32][(uint32_t) TIMER_enSUBMODULE_B][(uint32_t) TIMER_enMODULE_NUM_4][(uint32_t) TIMER_enINTERRUPT_TIMEOUT]();
    }
    if((uint32_t) TIMER_enINT_TB_CAPTURE_MATCH & u32Reg)
    {
        GPTM4_TB_GPTMTnICR_R = (uint32_t) TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_32][(uint32_t) TIMER_enSUBMODULE_B][(uint32_t) TIMER_enMODULE_NUM_4][(uint32_t) TIMER_enINTERRUPT_CAPTURE_MATCH]();
    }
    if((uint32_t) TIMER_enINT_TB_CAPTURE_EVENT & u32Reg)
    {
        GPTM4_TB_GPTMTnICR_R = (uint32_t) TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_32][(uint32_t) TIMER_enSUBMODULE_B][(uint32_t) TIMER_enMODULE_NUM_4][(uint32_t) TIMER_enINTERRUPT_CAPTURE_EVENT]();
    }
    if((uint32_t) TIMER_enINT_TB_MATCH & u32Reg)
    {
        GPTM4_TB_GPTMTnICR_R = (uint32_t) TIMER_enINT_TB_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_32][(uint32_t) TIMER_enSUBMODULE_B][(uint32_t) TIMER_enMODULE_NUM_4][(uint32_t) TIMER_enINTERRUPT_MATCH]();
    }
}


