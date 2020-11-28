/**
 *
 * @file ADC_Sample_FifoStat.c
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
 * @verbatim 26 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_FifoStat.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>


ADC_nSEQ_FIFO ADC__enGetSampleFifoStat(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer)
{
    uint32_t u32Reg=0u;
    uint32_t u32RegEmpty=0u;
    uint32_t u32RegFull=0u;
    uint32_t u32RegAddress=0u;
    ADC_TypeDef* psAdc=0u;
    ADCINPUT_Typedef* psAdcSeq=0u;
    volatile uint32_t* pu32AdcSeq =0u;

    ADC_nREADY enReady= ADC_enNOREADY;
    uint32_t u32Module = (uint32_t)enModule;
    uint32_t u32Sequencer = (uint32_t)enSequencer;
    ADC_nSEQ_FIFO enFeature = ADC_enSEQ_FIFO_INT_UNDEF;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    if((uint32_t)ADC_enSEQ_MAX<u32Sequencer)
    {
        u32Sequencer=(uint32_t)ADC_enSEQ_MAX;
    }
    enReady=ADC__enIsReady((ADC_nMODULE)u32Module);
    if(ADC_enREADY == enReady)
    {
        psAdc=ADC_BLOCK[u32Module];
        psAdcSeq =(ADCINPUT_Typedef*) (&psAdc->ADCINPUT[u32Sequencer]);
        u32RegAddress=(uint32_t)(psAdcSeq)+ADC_ADCSSFSTAT_OFFSET;
        pu32AdcSeq = (volatile uint32_t*)u32RegAddress;
        u32Reg=*pu32AdcSeq;

        u32RegEmpty = u32Reg;
        u32RegEmpty>>=ADC_ADCSSFSTAT_R_EMPTY_BIT;
        u32RegEmpty&=ADC_ADCSSFSTAT_EMPTY_MASK;

        u32RegFull = u32Reg;
        u32RegFull>>=ADC_ADCSSFSTAT_R_FULL_BIT;
        u32RegFull&=ADC_ADCSSFSTAT_FULL_MASK;

        if(1u == u32RegEmpty)
        {
            enFeature = ADC_enSEQ_FIFO_EMPTY;
        }
        else if (1u == u32RegFull)
        {
            enFeature = ADC_enSEQ_FIFO_FULL;
        }
        else
        {
            enFeature = ADC_enSEQ_FIFO_VALUES;
        }
    }
    return enFeature;
}


uint32_t ADC__u32GetSampleFifoValue(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, uint32_t* pu32FifoArray)
{
    uint32_t u32Reg=0u;
    uint32_t u32RegAddress=0u;
    ADC_TypeDef* psAdc=0u;
    ADCINPUT_Typedef* psAdcSeq=0u;
    volatile uint32_t* pu32AdcSeq =0u;

    ADC_nREADY enReady= ADC_enNOREADY;
    uint32_t u32Module = (uint32_t)enModule;
    uint32_t u32Sequencer = (uint32_t)enSequencer;
    uint32_t u32Count =0u;
    ADC_nSEQ_FIFO enFeature = ADC_enSEQ_FIFO_INT_UNDEF;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    if((uint32_t)ADC_enSEQ_MAX<u32Sequencer)
    {
        u32Sequencer=(uint32_t)ADC_enSEQ_MAX;
    }
    enReady=ADC__enIsReady((ADC_nMODULE)u32Module);
    if((ADC_enREADY == enReady) && ((uint32_t)0u != (uint32_t)pu32FifoArray))
    {
        psAdc=ADC_BLOCK[u32Module];
        psAdcSeq =(ADCINPUT_Typedef*) (&psAdc->ADCINPUT[u32Sequencer]);
        u32RegAddress=(uint32_t)(psAdcSeq)+ADC_ADCSSFIFO_OFFSET;
        pu32AdcSeq = (volatile uint32_t*)u32RegAddress;

        enFeature = ADC__enGetSampleFifoStat((ADC_nMODULE)u32Module,(ADC_nSEQUENCER)u32Sequencer);
        while( ADC_enSEQ_FIFO_EMPTY != enFeature)
        {
            u32Reg = *pu32AdcSeq;
            *pu32FifoArray = u32Reg;
            pu32FifoArray+= 0x1u;
            u32Count++;
            enFeature = ADC__enGetSampleFifoStat((ADC_nMODULE)u32Module,(ADC_nSEQUENCER)u32Sequencer);
        }

    }
    return u32Count;
}
