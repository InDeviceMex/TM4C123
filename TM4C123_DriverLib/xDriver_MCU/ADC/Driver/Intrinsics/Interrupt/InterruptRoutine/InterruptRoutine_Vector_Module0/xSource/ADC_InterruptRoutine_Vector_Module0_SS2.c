/**
 *
 * @file ADC_InterruptRoutine_Vector_Module0_SS2.c
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
 * @verbatim 20 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/xHeader/ADC_InterruptRoutine_Vector_Module0_SS2.h>

#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ADC_InterruptRoutine_Source.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Dependencies.h>

#define DMA_SOURCE_BIT    (16UL)
#define DMA_SOURCE_MASK    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT))

void ADC0_SS2__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32RegCompInterrupt = 0UL;
    volatile uint32_t u32RegCompSelect = 0UL;
    volatile uint32_t u32RegCompMux = 0UL;
    uint32_t u32Pos = 0UL;
    volatile uint32_t u32RegDMAEn = 0UL;
    volatile uint32_t u32RegDMAOccur = 0UL;
    volatile uint32_t u32RegPeriph = 0UL;
    volatile uint32_t u32RegDMASource = 0UL;

    u32RegDMAEn = SYSCTL_RCGCDMA_R;
    u32RegDMAEn &= SYSCTL_RCGCDMA_R_UDMA_ENA;
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
                u32RegDMASource = DMA_CHMAP2_R;
                u32RegDMASource &= DMA_CHMAP2_R_CH16SEL_MASK;
                if(DMA_CHMAP2_R_CH16SEL_ADC0_SS2 == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_0][DMA_SOURCE_BIT]();
                    DMA_CHIS_R = DMA_SOURCE_MASK;
                }
            }
        }
    }

    u32Reg = ADC0_ISC_R;
    u32RegCompInterrupt = ADC0_DCISC_R;
    u32RegCompSelect = ADC0_SSOP2_R;
    if(u32Reg & ((uint32_t) ADC_enSEQ_SOURCE_SAMPLE << (uint32_t) ADC_enSEQ_2))
    {
        ADC0_ISC_R = ((uint32_t) ADC_enSEQ_SOURCE_SAMPLE << (uint32_t) ADC_enSEQ_2);
        ADC_SAMPLE__vIRQSourceHandler[(uint32_t) ADC_enMODULE_0][(uint32_t) ADC_enSEQ_2]();
    }
    if(u32Reg & ((uint32_t) ADC_enSEQ_SOURCE_COMP << (uint32_t) ADC_enSEQ_2))
     {
         ADC0_ISC_R = ((uint32_t) ADC_enSEQ_SOURCE_COMP << (uint32_t) ADC_enSEQ_2);
         for(u32Pos = 0UL; u32Pos <= (uint32_t) ADC_en_MUX_3; u32Pos++)
         {
             if(u32RegCompSelect & ((uint32_t) 0x1UL << (u32Pos * 0x4UL)))
             {
                 u32RegCompMux = ADC0_SSDC2_R >> (u32Pos * 0x4UL);
                 u32RegCompMux &= 0xFUL;
                 if(u32RegCompInterrupt & ((uint32_t) 1UL << u32RegCompMux))
                 {
                     ADC0_DCISC_R = ((uint32_t) 1UL << u32RegCompMux);
                     ADC_COMP__vIRQSourceHandler[(uint32_t) ADC_enMODULE_0][(uint32_t) ADC_enSEQ_2][u32RegCompMux]();
                 }
             }
         }
     }
}




