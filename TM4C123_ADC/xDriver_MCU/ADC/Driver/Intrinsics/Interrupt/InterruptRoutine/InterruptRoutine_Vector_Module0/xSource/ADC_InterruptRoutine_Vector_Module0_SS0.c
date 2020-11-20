/**
 *
 * @file ADC_InterruptRoutine_Vector_Module0_SS0.c
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
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/xHeader/ADC_InterruptRoutine_Vector_Module0_SS0.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ADC_InterruptRoutine_Source.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Dependencies.h>

void ADC0_SS0__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0u;
    volatile uint32_t u32RegComp=0u;
    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        if(DMA_DMACHIS_R_CHIS14_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS14_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET14_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET14_MASK ))
            {
                if(DMA_DMACHMAP1_R_CH14SEL_ADC0_SS0 == (DMA_DMACHMAP1_R & DMA_DMACHMAP1_R_CH14SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_0][14u]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS14_CLEAR;
                }
            }
        }
    }
    u32Reg=ADC0_ADCISC_R;
    u32RegComp = ADC0_ADCDCRIC_R;
    if(u32Reg & ((uint32_t)ADC_enSEQ_SOURCE_SAMPLE<<(uint32_t)ADC_enSEQ_0))
    {
        ADC0_ADCISC_R=((uint32_t)ADC_enSEQ_SOURCE_SAMPLE<<(uint32_t)ADC_enSEQ_0);
        ADC_SAMPLE__vIRQSourceHandler[(uint32_t)ADC_enMODULE_0][(uint32_t)ADC_enSEQ_0]();
    }
    if(u32Reg & ((uint32_t)ADC_enSEQ_SOURCE_COMP<<(uint32_t)ADC_enSEQ_0))
    {
        ADC0_ADCISC_R=((uint32_t)ADC_enSEQ_SOURCE_COMP<<(uint32_t)ADC_enSEQ_0);
        if(u32RegComp & ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_0))
        {
            ADC0_ADCDCRIC_R = ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_0);
            ADC_COMP__vIRQSourceHandler[(uint32_t)ADC_enMODULE_0][(uint32_t)ADC_enSEQ_0][(uint32_t)ADC_en_COMPARATOR_0]();
        }
        if(u32RegComp & ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_1))
        {
            ADC0_ADCDCRIC_R = ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_1);
            ADC_COMP__vIRQSourceHandler[(uint32_t)ADC_enMODULE_0][(uint32_t)ADC_enSEQ_0][(uint32_t)ADC_en_COMPARATOR_1]();
        }
        if(u32RegComp & ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_2))
        {
            ADC0_ADCDCRIC_R = ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_2);
            ADC_COMP__vIRQSourceHandler[(uint32_t)ADC_enMODULE_0][(uint32_t)ADC_enSEQ_0][(uint32_t)ADC_en_COMPARATOR_2]();
        }
        if(u32RegComp & ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_3))
        {
            ADC0_ADCDCRIC_R = ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_3);
            ADC_COMP__vIRQSourceHandler[(uint32_t)ADC_enMODULE_0][(uint32_t)ADC_enSEQ_0][(uint32_t)ADC_en_COMPARATOR_3]();
        }
        if(u32RegComp & ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_4))
        {
            ADC0_ADCDCRIC_R = ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_4);
            ADC_COMP__vIRQSourceHandler[(uint32_t)ADC_enMODULE_0][(uint32_t)ADC_enSEQ_0][(uint32_t)ADC_en_COMPARATOR_4]();
        }
        if(u32RegComp & ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_5))
        {
            ADC0_ADCDCRIC_R = ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_5);
            ADC_COMP__vIRQSourceHandler[(uint32_t)ADC_enMODULE_0][(uint32_t)ADC_enSEQ_0][(uint32_t)ADC_en_COMPARATOR_5]();
        }
        if(u32RegComp & ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_6))
        {
            ADC0_ADCDCRIC_R = ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_6);
            ADC_COMP__vIRQSourceHandler[(uint32_t)ADC_enMODULE_0][(uint32_t)ADC_enSEQ_0][(uint32_t)ADC_en_COMPARATOR_6]();
        }
        if(u32RegComp & ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_7))
        {
            ADC0_ADCDCRIC_R = ((uint32_t)1u<<(uint32_t)ADC_en_COMPARATOR_7);
            ADC_COMP__vIRQSourceHandler[(uint32_t)ADC_enMODULE_0][(uint32_t)ADC_enSEQ_0][(uint32_t)ADC_en_COMPARATOR_7]();
        }
    }
}



