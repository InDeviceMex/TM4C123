/**
 *
 * @file ADC_InterruptRoutine_Vector_Module1_SS0.c
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
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module1/xHeader/ADC_InterruptRoutine_Vector_Module1_SS0.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ADC_InterruptRoutine_Source.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Dependencies.h>

void ADC1_SS0__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0U;
    volatile uint32_t u32RegCompInterrupt=0U;
    volatile uint32_t u32RegCompSelect=0U;
    volatile uint32_t u32RegCompMux=0U;
    uint32_t u32Pos=0U;
    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        if(DMA_DMACHIS_R_CHIS24_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS24_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET24_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET24_MASK ))
            {
                if(DMA_DMACHMAP3_R_CH24SEL_ADC1_SS0 == (DMA_DMACHMAP3_R & DMA_DMACHMAP3_R_CH24SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_1][24U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS24_CLEAR;
                }
            }
        }
    }
    u32Reg=ADC1_ADCISC_R;
    u32RegCompInterrupt = ADC1_ADCDCISC_R;
    u32RegCompSelect = ADC1_ADCSSOP0_R;
    if(u32Reg & ((uint32_t) ADC_enSEQ_SOURCE_SAMPLE << (uint32_t) ADC_enSEQ_0))
    {
        ADC1_ADCISC_R=((uint32_t) ADC_enSEQ_SOURCE_SAMPLE << (uint32_t) ADC_enSEQ_0);
        ADC_SAMPLE__vIRQSourceHandler[(uint32_t) ADC_enMODULE_1][(uint32_t) ADC_enSEQ_0]();
    }
    if(u32Reg & ((uint32_t) ADC_enSEQ_SOURCE_COMP << (uint32_t) ADC_enSEQ_0))
    {
        ADC1_ADCISC_R=((uint32_t) ADC_enSEQ_SOURCE_COMP << (uint32_t) ADC_enSEQ_0);
        for(u32Pos = 0U; u32Pos <= (uint32_t) ADC_en_MUX_7;u32Pos++)
        {
            if(u32RegCompSelect & ((uint32_t) 0x1UL << (u32Pos*0x4U)))
            {
                u32RegCompMux = ADC1_ADCSSDC0_R >> (u32Pos*0x4U);
                u32RegCompMux &= 0xFU;
                if(u32RegCompInterrupt & ((uint32_t) 1UL << u32RegCompMux))
                {
                    ADC1_ADCDCISC_R = ((uint32_t) 1UL << u32RegCompMux);
                    ADC_COMP__vIRQSourceHandler[(uint32_t) ADC_enMODULE_1][(uint32_t) ADC_enSEQ_0][u32RegCompMux]();
                }
            }
        }
    }
}


