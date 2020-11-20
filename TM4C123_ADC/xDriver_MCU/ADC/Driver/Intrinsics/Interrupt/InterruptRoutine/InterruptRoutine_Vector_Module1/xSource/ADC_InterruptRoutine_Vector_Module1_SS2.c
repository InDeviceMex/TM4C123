/**
 *
 * @file ADC_InterruptRoutine_Vector_Module1_SS2.c
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
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module1/xHeader/ADC_InterruptRoutine_Vector_Module1_SS2.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ADC_InterruptRoutine_Source.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Dependencies.h>

void ADC1_SS2__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0u;
    volatile uint32_t u32RegCompInterrupt=0u;
    volatile uint32_t u32RegCompSelect=0u;
    volatile uint32_t u32RegCompMux=0u;
    uint32_t u32Pos=0u;
    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        if(DMA_DMACHIS_R_CHIS26_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS26_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET26_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET26_MASK ))
            {
                if(DMA_DMACHMAP3_R_CH26SEL_ADC1_SS2 == (DMA_DMACHMAP3_R & DMA_DMACHMAP3_R_CH26SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_1][26u]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS26_CLEAR;
                }
            }
        }
    }
    u32Reg=ADC1_ADCISC_R;
    u32RegCompInterrupt = ADC1_ADCDCISC_R;
    u32RegCompSelect = ADC1_ADCSSOP2_R;
    if(u32Reg & ((uint32_t)ADC_enSEQ_SOURCE_SAMPLE<<(uint32_t)ADC_enSEQ_2))
    {
        ADC1_ADCISC_R=((uint32_t)ADC_enSEQ_SOURCE_SAMPLE<<(uint32_t)ADC_enSEQ_2);
        ADC_SAMPLE__vIRQSourceHandler[(uint32_t)ADC_enMODULE_1][(uint32_t)ADC_enSEQ_2]();
    }
    if(u32Reg & ((uint32_t)ADC_enSEQ_SOURCE_COMP<<(uint32_t)ADC_enSEQ_2))
     {
         ADC1_ADCISC_R=((uint32_t)ADC_enSEQ_SOURCE_COMP<<(uint32_t)ADC_enSEQ_2);
         for(u32Pos = 0u; u32Pos<=(uint32_t)ADC_en_MUX_3;u32Pos++)
         {
             if(u32RegCompSelect & ((uint32_t)0x1u<<(u32Pos*0x4u)))
             {
                 u32RegCompMux = ADC1_ADCSSDC2_R>>(u32Pos*0x4u);
                 u32RegCompMux&= 0xFu;
                 if(u32RegCompInterrupt & ((uint32_t)1u<<u32RegCompMux))
                 {
                     ADC1_ADCDCISC_R = ((uint32_t)1u<<u32RegCompMux);
                     ADC_COMP__vIRQSourceHandler[(uint32_t)ADC_enMODULE_1][(uint32_t)ADC_enSEQ_2][u32RegCompMux]();
                 }
             }
         }
     }
}


