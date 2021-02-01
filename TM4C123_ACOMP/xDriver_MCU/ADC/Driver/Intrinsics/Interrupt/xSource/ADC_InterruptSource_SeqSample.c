/**
 *
 * @file ADC_InterruptSource_SeqSample.c
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
 * @verbatim 22 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/xHeader/ADC_InterruptSource_SeqSample.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

static const uint32_t ADC_u32MuxMax[(uint32_t) ADC_enSEQ_MAX+0x1U] = {(uint32_t) ADC_en_MUX_7, (uint32_t) ADC_en_MUX_3,(uint32_t) ADC_en_MUX_3,(uint32_t) ADC_en_MUX_0};

void ADC__vEnSeqInterruptSample(ADC_nMODULE enModule, ADC_nSEQUENCER  enSequencer, ADC_nMUX enMuxInput)
{
    uint32_t u32Reg=0U;
    ADC_TypeDef* psAdc=0U;

    uint32_t u32Module = (uint32_t) enModule;
    uint32_t u32Sequencer = (uint32_t) enSequencer;
    uint32_t u32MuxInput = (uint32_t) enMuxInput;
    uint32_t u32MuxMax= 0U;
    if((uint32_t) ADC_enMODULE_MAX<u32Module)
    {
        u32Module = (uint32_t) ADC_enMODULE_MAX;
    }
    if((uint32_t) ADC_enSEQ_MAX<u32Sequencer)
    {
        u32Sequencer = (uint32_t) ADC_enSEQ_MAX;
    }
    u32MuxMax = ADC_u32MuxMax[u32Sequencer];
    if(u32MuxMax<u32MuxInput)
    {
        u32MuxInput = (uint32_t) u32MuxMax;
    }
    ADC__vSetReady((ADC_nMODULE)u32Module);
    psAdc=ADC_BLOCK[u32Module];

    u32Reg=psAdc->ADCINPUT[u32Sequencer].ADCSSCTL;
    u32Reg |= (ADC_ADCSSCTL_R_IE0_EN << (u32MuxInput*4U));
    psAdc->ADCINPUT[u32Sequencer].ADCSSCTL=u32Reg;
}

void ADC__vDisSeqInterruptSample(ADC_nMODULE enModule, ADC_nSEQUENCER  enSequencer, ADC_nMUX enMuxInput)
{
    uint32_t u32Reg=0U;
    ADC_TypeDef* psAdc=0U;

    uint32_t u32Module = (uint32_t) enModule;
    uint32_t u32Sequencer = (uint32_t) enSequencer;
    uint32_t u32MuxInput = (uint32_t) enMuxInput;
    uint32_t u32MuxMax= 0U;
    if((uint32_t) ADC_enMODULE_MAX<u32Module)
    {
        u32Module = (uint32_t) ADC_enMODULE_MAX;
    }
    if((uint32_t) ADC_enSEQ_MAX<u32Sequencer)
    {
        u32Sequencer = (uint32_t) ADC_enSEQ_MAX;
    }
    u32MuxMax = ADC_u32MuxMax[u32Sequencer];
    if(u32MuxMax<u32MuxInput)
    {
        u32MuxInput = (uint32_t) u32MuxMax;
    }
    ADC__vSetReady((ADC_nMODULE)u32Module);
    psAdc=ADC_BLOCK[u32Module];

    u32Reg=psAdc->ADCINPUT[u32Sequencer].ADCSSCTL;
    u32Reg &= ~(ADC_ADCSSCTL_R_IE0_EN << (u32MuxInput*4U));
    psAdc->ADCINPUT[u32Sequencer].ADCSSCTL=u32Reg;
}

ADC_nSEQ_INPUT_INT ADC__enGetSeqInterruptSample(ADC_nMODULE enModule, ADC_nSEQUENCER  enSequencer, ADC_nMUX enMuxInput)
{
    uint32_t u32Reg=0U;
    ADC_TypeDef* psAdc=0U;
    ADC_nSEQ_INPUT_INT enIntInputState = ADC_enSEQ_INPUT_INT_UNDEF;
    ADC_nREADY enReady = ADC_enNOREADY;
    uint32_t u32Module = (uint32_t) enModule;
    uint32_t u32Sequencer = (uint32_t) enSequencer;
    uint32_t u32MuxInput = (uint32_t) enMuxInput;
    uint32_t u32MuxMax= 0U;
    if((uint32_t) ADC_enMODULE_MAX<u32Module)
    {
        u32Module = (uint32_t) ADC_enMODULE_MAX;
    }
    if((uint32_t) ADC_enSEQ_MAX<u32Sequencer)
    {
        u32Sequencer = (uint32_t) ADC_enSEQ_MAX;
    }
    u32MuxMax = ADC_u32MuxMax[u32Sequencer];
    if(u32MuxMax<u32MuxInput)
    {
        u32MuxInput = (uint32_t) u32MuxMax;
    }
    enReady = ADC__enIsReady((ADC_nMODULE)u32Module);
    if(ADC_enREADY == enReady)
    {
        psAdc=ADC_BLOCK[u32Module];
        u32Reg=psAdc->ADCINPUT[u32Sequencer].ADCSSCTL;
        u32Reg >>= (u32MuxInput*4U);
        u32Reg &= (ADC_ADCSSCTL_IE0_MASK);
        enIntInputState = (ADC_nSEQ_INPUT_INT)u32Reg;
    }
    return enIntInputState;
}

