/**
 *
 * @file ADC_Sequencer_Generic.c
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
#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC__vSetSequencerGeneric(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32Sequence, uint32_t u32Feature)
{
    uint32_t u32Reg = 0U;
    uint32_t u32RegAddress = 0U;
    volatile uint32_t* pu32Adc = 0U;

    if((uint32_t) ADC_enMODULE_MAX<u32Module)
    {
        u32Module = (uint32_t) ADC_enMODULE_MAX;
    }
    if((uint32_t) ADC_enSEQMASK_MAX<u32Sequence)
    {
        u32Sequence = (uint32_t) ADC_enSEQMASK_MAX;
    }
    ADC__vSetReady((ADC_nMODULE)u32Module);
    u32RegAddress = ADC_BLOCK_ADDRESS[u32Module];
    u32RegAddress += u32OffsetRegister;
    pu32Adc=(volatile uint32_t*) (u32RegAddress);
    u32Reg = *pu32Adc;
    if(0UL == u32Feature)
    {
        u32Reg &= ~((uint32_t) u32Sequence);
    }
    else
    {
        u32Reg |= ((uint32_t) u32Sequence);
    }
    *pu32Adc = u32Reg;
}

void ADC__vSetSequencerGenericBit(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32Sequence, uint32_t u32Feature, uint32_t u32FeatureMask, uint32_t u32FeatureBitMult, uint32_t u32FeatureBitAdd)
{
    uint32_t u32Reg = 0U;
    uint32_t u32RegAddress = 0U;
    volatile uint32_t* pu32Adc = 0U;

    u32Feature &= u32FeatureMask;
    if((uint32_t) ADC_enMODULE_MAX<u32Module)
    {
        u32Module = (uint32_t) ADC_enMODULE_MAX;
    }
    if((uint32_t) ADC_enSEQ_MAX<u32Sequence)
    {
        u32Sequence = (uint32_t) ADC_enSEQ_MAX;
    }
    ADC__vSetReady((ADC_nMODULE)u32Module);
    u32RegAddress = ADC_BLOCK_ADDRESS[u32Module];
    u32RegAddress += u32OffsetRegister;
    pu32Adc=(volatile uint32_t*) (u32RegAddress);
    u32Sequence *= u32FeatureBitMult;
    u32Sequence += u32FeatureBitAdd;
    u32Reg = *pu32Adc;
    u32Reg &= ~(u32FeatureMask << u32Sequence);
    u32Reg |= (u32Feature << u32Sequence);
    *pu32Adc = u32Reg;
}

uint32_t ADC__u32GetSequencerGeneric(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32Sequence)
{
    uint32_t u32Reg = 0U;
    uint32_t u32RegAddress = 0U;
    volatile uint32_t* pu32Adc = 0U;

    ADC_nREADY enReady = ADC_enNOREADY;
    uint32_t u32Feature = 0xFFFFFFFFU;
    if((uint32_t) ADC_enMODULE_MAX<u32Module)
    {
        u32Module = (uint32_t) ADC_enMODULE_MAX;
    }
    if((uint32_t) ADC_enSEQMASK_MAX<u32Sequence)
    {
        u32Sequence = (uint32_t) ADC_enSEQMASK_MAX;
    }

    enReady = ADC__enIsReady((ADC_nMODULE)u32Module);
    if(ADC_enREADY == enReady)
    {
        u32RegAddress = ADC_BLOCK_ADDRESS[u32Module];
        u32RegAddress += u32OffsetRegister;
        pu32Adc=(volatile uint32_t*) (u32RegAddress);
        u32Reg = *pu32Adc;
        u32Reg &= u32Sequence;
        if(0UL != u32Reg)
        {
            u32Feature = 1U;
        }
        else
        {
            u32Feature = 0U;
        }
    }
    return u32Feature;
}
uint32_t ADC__u32GetSequencerGenericBit(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32Sequence, uint32_t u32FeatureMask, uint32_t u32FeatureBitMult, uint32_t u32FeatureBitAdd)
{
    uint32_t u32Reg = 0U;
    uint32_t u32RegAddress = 0U;
    volatile uint32_t* pu32Adc = 0U;

    ADC_nREADY enReady = ADC_enNOREADY;
    uint32_t u32Feature = 0xFFFFFFFFU;
    if((uint32_t) ADC_enMODULE_MAX<u32Module)
    {
        u32Module = (uint32_t) ADC_enMODULE_MAX;
    }
    if((uint32_t) ADC_enSEQ_MAX<u32Sequence)
    {
        u32Sequence = (uint32_t) ADC_enSEQ_MAX;
    }

    enReady = ADC__enIsReady((ADC_nMODULE)u32Module);
    if(ADC_enREADY == enReady)
    {
        u32RegAddress = ADC_BLOCK_ADDRESS[u32Module];
        u32RegAddress += u32OffsetRegister;
        pu32Adc=(volatile uint32_t*) (u32RegAddress);
        u32Sequence *= u32FeatureBitMult;
        u32Sequence += u32FeatureBitAdd;
        u32Reg = *pu32Adc;
        u32Reg >>= u32Sequence;
        u32Reg &= u32FeatureMask;
        u32Feature = u32Reg;
    }
    return u32Feature;
}

