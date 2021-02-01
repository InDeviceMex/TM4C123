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
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/xHeader/ADC_InterruptRoutine_Vector_Module0_SS2.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ADC_InterruptRoutine_Source.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Dependencies.h>

void ADC0_SS2__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0U;
    volatile uint32_t u32RegCompInterrupt=0U;
    volatile uint32_t u32RegCompSelect=0U;
    volatile uint32_t u32RegCompMux=0U;
    uint32_t u32Pos=0U;
    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        if(DMA_DMACHIS_R_CHIS16_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS16_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET16_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET16_MASK ))
            {
                if(DMA_DMACHMAP2_R_CH16SEL_ADC0_SS2 == (DMA_DMACHMAP2_R & DMA_DMACHMAP2_R_CH16SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_0][16U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS16_CLEAR;
                }
            }
        }
    }
    u32Reg=ADC0_ADCISC_R;
    u32RegCompInterrupt = ADC0_ADCDCISC_R;
    u32RegCompSelect = ADC0_ADCSSOP2_R;
    if(u32Reg & ((uint32_t) ADC_enSEQ_SOURCE_SAMPLE << (uint32_t) ADC_enSEQ_2))
    {
        ADC0_ADCISC_R=((uint32_t) ADC_enSEQ_SOURCE_SAMPLE << (uint32_t) ADC_enSEQ_2);
        ADC_SAMPLE__vIRQSourceHandler[(uint32_t) ADC_enMODULE_0][(uint32_t) ADC_enSEQ_2]();
    }
    if(u32Reg & ((uint32_t) ADC_enSEQ_SOURCE_COMP << (uint32_t) ADC_enSEQ_2))
     {
         ADC0_ADCISC_R=((uint32_t) ADC_enSEQ_SOURCE_COMP << (uint32_t) ADC_enSEQ_2);
         for(u32Pos = 0U; u32Pos <= (uint32_t) ADC_en_MUX_3;u32Pos++)
         {
             if(u32RegCompSelect & ((uint32_t) 0x1UL << (u32Pos*0x4U)))
             {
                 u32RegCompMux = ADC0_ADCSSDC2_R >> (u32Pos*0x4U);
                 u32RegCompMux &= 0xFU;
                 if(u32RegCompInterrupt & ((uint32_t) 1UL << u32RegCompMux))
                 {
                     ADC0_ADCDCISC_R = ((uint32_t) 1UL << u32RegCompMux);
                     ADC_COMP__vIRQSourceHandler[(uint32_t) ADC_enMODULE_0][(uint32_t) ADC_enSEQ_2][u32RegCompMux]();
                 }
             }
         }
     }
}




