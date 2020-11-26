/**
 *
 * @file ADC_Sample_Generic.c
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
 * @verbatim 23 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

static const uint32_t ADC_u32MuxMax[(uint32_t)ADC_enSEQ_MAX+0x1u] = {(uint32_t)ADC_en_MUX_7, (uint32_t)ADC_en_MUX_3,(uint32_t) ADC_en_MUX_3,(uint32_t)ADC_en_MUX_0};

void ADC__vSetSampleGeneric(uint32_t u32Module, uint32_t  u32Sequencer, uint32_t u32OffsetRegister, uint32_t u32MuxInput, uint32_t u32Feature, uint32_t u32FeatureMask, uint32_t u32FeatureBitAdd)
{
    uint32_t u32Reg=0u;
    uint32_t u32RegAddress=0u;
    ADC_TypeDef* psAdc=0u;
    ADCINPUT_Typedef* psAdcSeq=0u;
    volatile uint32_t* pu32AdcSeq =0u;

    uint32_t u32MuxMax= 0u;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    if((uint32_t)ADC_enSEQ_MAX<u32Sequencer)
    {
        u32Sequencer=(uint32_t)ADC_enSEQ_MAX;
    }
    u32MuxMax = ADC_u32MuxMax[u32Sequencer];
    if(u32MuxMax<u32MuxInput)
    {
        u32MuxInput=(uint32_t)u32MuxMax;
    }
    ADC__vSetReady((ADC_nMODULE)u32Module);
    psAdc=ADC_BLOCK[u32Module];
    psAdcSeq =(ADCINPUT_Typedef*) (&psAdc->ADCINPUT[u32Sequencer]);
    u32RegAddress=(uint32_t)(psAdcSeq)+u32OffsetRegister;
    pu32AdcSeq = (volatile uint32_t*)u32RegAddress;
    u32Reg=*pu32AdcSeq;

    u32MuxInput*=4u;
    u32MuxInput+=u32FeatureBitAdd;
    u32Reg&=~(u32FeatureMask<<u32MuxInput);
    u32Reg|=(u32Feature<<u32MuxInput);
    *pu32AdcSeq=u32Reg;
}

uint32_t ADC__u32GetSampleGeneric(uint32_t u32Module, uint32_t  u32Sequencer, uint32_t u32OffsetRegister, uint32_t u32MuxInput, uint32_t u32FeatureMask, uint32_t u32FeatureBitAdd)
{
    uint32_t u32Reg=0u;
    uint32_t u32RegAddress=0u;
    ADC_TypeDef* psAdc=0u;
    ADCINPUT_Typedef* psAdcSeq=0u;
    volatile uint32_t* pu32AdcSeq =0u;

    ADC_nREADY enReady= ADC_enNOREADY;
    uint32_t u32MuxMax= 0u;
    uint32_t u32Feature = 0xFFFFFFFFu;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    if((uint32_t)ADC_enSEQ_MAX<u32Sequencer)
    {
        u32Sequencer=(uint32_t)ADC_enSEQ_MAX;
    }
    u32MuxMax = ADC_u32MuxMax[u32Sequencer];
    if(u32MuxMax<u32MuxInput)
    {
        u32MuxInput=(uint32_t)u32MuxMax;
    }
    enReady=ADC__enIsReady((ADC_nMODULE)u32Module);
    if(ADC_enREADY == enReady)
    {
        psAdc=ADC_BLOCK[u32Module];
        psAdcSeq =(ADCINPUT_Typedef*) (&psAdc->ADCINPUT[u32Sequencer]);
        u32RegAddress=(uint32_t)(psAdcSeq)+u32OffsetRegister;
        pu32AdcSeq = (volatile uint32_t*)u32RegAddress;
        u32Reg=*pu32AdcSeq;

        u32MuxInput*=4u;
        u32MuxInput+=u32FeatureBitAdd;
        u32Reg>>=u32MuxInput;
        u32Reg&=u32FeatureMask;
        u32Feature = u32Reg;
    }
    return u32Feature;
}
