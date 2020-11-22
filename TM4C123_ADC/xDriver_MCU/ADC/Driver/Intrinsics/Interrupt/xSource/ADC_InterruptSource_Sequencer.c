/**
 *
 * @file ADC_InterruptSource_Sequencer.c
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
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/xHeader/ADC_InterruptSource_Sequencer.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC_Sequencer__vEnInterruptSource(ADC_nMODULE enModule, ADC_nSEQMASK enSequence, ADC_nINT_SOURCE enSourceInt)
{
    uint32_t u32Reg=0u;
    uint32_t u32SeqBit=0u;
    ADC_TypeDef* psAdcIM=0u;

    uint32_t u32Module= (uint32_t) enModule;
    uint32_t u32Sequence= (uint32_t) enSequence;
    uint32_t u32SourceInt= 16u*(uint32_t)enSourceInt;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    if((uint32_t)ADC_enSEQMASK_MAX<u32Sequence)
    {
        u32Sequence=(uint32_t)ADC_enSEQMASK_MAX;
    }
    ADC__vSetReady((ADC_nMODULE)u32Module);
    psAdcIM=ADC_BLOCK[u32Module];
    u32SeqBit=u32Sequence<<u32SourceInt;

    u32Reg=psAdcIM->ADCIM;
    if((uint32_t)ADC_enSEQ_SOURCE_COMP  == u32SourceInt)
    {
        u32Reg&=~(ADC_enSEQMASK_MAX<<16u);
    }
    u32Reg|=u32SeqBit;
    psAdcIM->ADCIM=u32Reg;
}

void ADC_Sequencer__vDisInterruptSource(ADC_nMODULE enModule, ADC_nSEQMASK enSequence, ADC_nINT_SOURCE enSourceInt)
{
    uint32_t u32Reg=0u;
    uint32_t u32SeqBit=0u;
    ADC_TypeDef* psAdcIM=0u;

    uint32_t u32Module= (uint32_t) enModule;
    uint32_t u32Sequence= (uint32_t) enSequence;
    uint32_t u32SourceInt= 16u*(uint32_t)enSourceInt;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    if((uint32_t)ADC_enSEQMASK_MAX<u32Sequence)
    {
        u32Sequence=(uint32_t)ADC_enSEQMASK_MAX;
    }
    ADC__vSetReady((ADC_nMODULE)u32Module);
    psAdcIM=ADC_BLOCK[u32Module];
    u32SeqBit=u32Sequence<<u32SourceInt;

    u32Reg=psAdcIM->ADCIM;
    u32Reg&=~u32SeqBit;
    psAdcIM->ADCIM=u32Reg;
}

void ADC_Sequencer__vClearInterruptSource(ADC_nMODULE enModule, ADC_nSEQMASK enSequence, ADC_nINT_SOURCE enSourceInt)
{
    uint32_t u32Reg=0u;
    uint32_t u32SeqBit=0u;
    ADC_TypeDef* psAdcISC=0u;

    uint32_t u32Module= (uint32_t) enModule;
    uint32_t u32Sequence= (uint32_t) enSequence;
    uint32_t u32SourceInt= 16u*(uint32_t)enSourceInt;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    if((uint32_t)ADC_enSEQMASK_MAX<u32Sequence)
    {
        u32Sequence=(uint32_t)ADC_enSEQMASK_MAX;
    }
    ADC__vSetReady((ADC_nMODULE)u32Module);
    psAdcISC=ADC_BLOCK[u32Module];
    u32SeqBit=u32Sequence<<u32SourceInt;

    psAdcISC->ADCISC=u32SeqBit;
}

ADC_nSEQ_INT_STATUS ADC_Sequencer__enStatusInterruptSource(ADC_nMODULE enModule, ADC_nSEQMASK enSequence, ADC_nINT_SOURCE enSourceInt)
{
    ADC_nSEQ_INT_STATUS enInt=ADC_enSEQ_INT_STATUS_UNDEF;
    uint32_t u32Reg=0u;
    uint32_t u32SeqBit=0u;
    ADC_nREADY enReady=ADC_enNOREADY;
    uint32_t u32Module= (uint32_t) enModule;
    uint32_t u32Sequence= (uint32_t) enSequence;
    uint32_t u32SourceInt= 16u*(uint32_t)enSourceInt;
    ADC_TypeDef* psAdcRIS=0u;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    if((uint32_t)ADC_enSEQMASK_MAX<u32Sequence)
    {
        u32Sequence=(uint32_t)ADC_enSEQMASK_MAX;
    }
    enReady=ADC__enIsReady((ADC_nMODULE)enModule);

    if(ADC_enREADY == enReady)
    {
        psAdcRIS=ADC_BLOCK[enModule];
        u32SeqBit=u32Sequence<<u32SourceInt;

        u32Reg=psAdcRIS->ADCRIS;
        u32Reg&=u32SeqBit;

        if(0u!=u32Reg)
        {
            enInt=(ADC_nSEQ_INT_STATUS)u32SourceInt;
        }
        else
        {
            enInt=ADC_enSEQ_INT_STATUS_NOOCCUR;
        }
    }
    return enInt;
}
