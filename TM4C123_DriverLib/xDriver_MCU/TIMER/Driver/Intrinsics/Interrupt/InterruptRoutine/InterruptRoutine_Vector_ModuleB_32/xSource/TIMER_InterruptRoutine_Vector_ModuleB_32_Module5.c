/**
 *
 * @file TIMER_InterruptRoutine_Vector_ModuleB_32_Module5.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_ModuleB_32/xHeader/TIMER_InterruptRoutine_Vector_ModuleB_32_Module5.h>

#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Dependencies.h>

#define DMA_SOURCE_BIT    (29UL)
#define DMA_SOURCE_MASK    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT))

void WTIMER5B__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32RegDMAEn = 0UL;
    volatile uint32_t u32RegDMAOccur = 0UL;
    volatile uint32_t u32RegPeriph = 0UL;
    volatile uint32_t u32RegDMASource = 0UL;

    u32RegDMAEn = SYSCTL_RCGCDMA_R;
    u32RegDMAEn &= SYSCTL_RCGCDMA_R_UDMA_EN;
    if(0UL != u32RegDMAEn)
    {
        u32RegDMAOccur = DMA_CHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK;
        if(0UL != u32RegDMAOccur)
        {
            u32RegPeriph = DMA_REQMASKSET_R;
            u32RegPeriph &= DMA_SOURCE_MASK;
            if(0UL == u32RegPeriph)
            {
                u32RegDMASource = DMA_CHMAP3_R;
                u32RegDMASource &= DMA_CHMAP3_R_CH29SEL_MASK;
                if(DMA_CHMAP3_R_CH29SEL_WTIMER5B == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_3][DMA_SOURCE_BIT]();
                    DMA_CHIS_R = DMA_SOURCE_MASK;
                }
            }
        }
    }

    u32Reg = (uint32_t) GPWTM5_TB_TnMIS_R;

    if((uint32_t) TIMER_enINT_TB_TIMEOUT & u32Reg)
    {
        GPWTM5_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_TIMEOUT;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_64][(uint32_t) TIMER_enSUBMODULE_B][(uint32_t) TIMER_enMODULE_NUM_5][(uint32_t) TIMER_enINTERRUPT_TIMEOUT]();
    }
    if((uint32_t) TIMER_enINT_TB_CAPTURE_MATCH & u32Reg)
    {
        GPWTM5_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_64][(uint32_t) TIMER_enSUBMODULE_B][(uint32_t) TIMER_enMODULE_NUM_5][(uint32_t) TIMER_enINTERRUPT_CAPTURE_MATCH]();
    }
    if((uint32_t) TIMER_enINT_TB_CAPTURE_EVENT & u32Reg)
    {
        GPWTM5_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_64][(uint32_t) TIMER_enSUBMODULE_B][(uint32_t) TIMER_enMODULE_NUM_5][(uint32_t) TIMER_enINTERRUPT_CAPTURE_EVENT]();
    }
    if((uint32_t) TIMER_enINT_TB_MATCH & u32Reg)
    {
        GPWTM5_TB_TnICR_R = (uint32_t) TIMER_enINT_TB_MATCH;
        TIMER__vIRQSourceHandler[(uint32_t) TIMER_enSIZE_64][(uint32_t) TIMER_enSUBMODULE_B][(uint32_t) TIMER_enMODULE_NUM_5][(uint32_t) TIMER_enINTERRUPT_MATCH]();
    }
}


