/**
 *
 * @file ADC_InterruptRoutine_Vector_Module1_SS1.c
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
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module1/xHeader/ADC_InterruptRoutine_Vector_Module1_SS1.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ADC_InterruptRoutine_Source.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Dependencies.h>

#define DMA_SOURCE_BIT    (25UL)
#define DMA_SOURCE_MASK    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT))

void ADC1_SS1__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32RegCompInterrupt = 0UL;
    volatile uint32_t u32RegCompSelect = 0UL;
    volatile uint32_t u32RegCompMux = 0UL;
    uint32_t u32Pos = 0UL;
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
                u32RegDMASource = DMA_DMACHMAP3_R;
                u32RegDMASource &= DMA_DMACHMAP3_R_CH25SEL_MASK;
                if(DMA_DMACHMAP3_R_CH25SEL_ADC1_SS1 == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_1][DMA_SOURCE_BIT]();
                    DMA_DMACHIS_R = DMA_SOURCE_MASK;
                }
            }
        }
    }

    u32Reg = ADC1_ADCISC_R;
    u32RegCompInterrupt = ADC1_ADCDCISC_R;
    u32RegCompSelect = ADC1_ADCSSOP1_R;
    if(u32Reg & ((uint32_t) ADC_enSEQ_SOURCE_SAMPLE << (uint32_t) ADC_enSEQ_1))
    {
        ADC1_ADCISC_R = ((uint32_t) ADC_enSEQ_SOURCE_SAMPLE << (uint32_t) ADC_enSEQ_1);
        ADC_SAMPLE__vIRQSourceHandler[(uint32_t) ADC_enMODULE_1][(uint32_t) ADC_enSEQ_1]();
    }
    if(u32Reg & ((uint32_t) ADC_enSEQ_SOURCE_COMP << (uint32_t) ADC_enSEQ_1))
     {
         ADC1_ADCISC_R = ((uint32_t) ADC_enSEQ_SOURCE_COMP << (uint32_t) ADC_enSEQ_1);
         for(u32Pos = 0UL; u32Pos <= (uint32_t) ADC_en_MUX_3; u32Pos++)
         {
             if(u32RegCompSelect & ((uint32_t) 0x1UL << (u32Pos * 0x4UL)))
             {
                 u32RegCompMux = ADC1_ADCSSDC1_R >> (u32Pos * 0x4UL);
                 u32RegCompMux &= 0xFUL;
                 if(u32RegCompInterrupt & ((uint32_t) 1UL << u32RegCompMux))
                 {
                     ADC1_ADCDCISC_R = ((uint32_t) 1UL << u32RegCompMux);
                     ADC_COMP__vIRQSourceHandler[(uint32_t) ADC_enMODULE_1][(uint32_t) ADC_enSEQ_1][u32RegCompMux]();
                 }
             }
         }
     }
}


