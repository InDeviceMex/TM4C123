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
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_FifoStat.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nSEQ_FIFO ADC__enGetSampleFifoStat(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer)
{
    ADC_nSTATUS enStatus = ADC_enSTATUS_UNDEF;
    uint32_t u32RegEmpty = 0UL;
    uint32_t u32RegFull = 0UL;

    ADC_nSEQ_FIFO enFeature = ADC_enSEQ_FIFO_INT_UNDEF;
    uint32_t u32SequencerReg = 0UL;

    u32SequencerReg = MCU__u32CheckParams((uint32_t) enSequencer, (uint32_t) ADC_enSEQ_MAX);

    u32SequencerReg *= ADC_INPUT_REGISTER_NUM; /*Add offset for input sequencer*/
    u32SequencerReg *= 4UL;
    u32SequencerReg += ADC_ADCSSMUX0_OFFSET;
    u32SequencerReg += ADC_ADCSSFSTAT_OFFSET;

    enStatus = ADC__enReadRegister(enModule , u32SequencerReg, &u32RegEmpty, ADC_ADCSSFSTAT_EMPTY_MASK, ADC_ADCSSFSTAT_R_EMPTY_BIT);
    if(ADC_enSTATUS_OK == enStatus)
    {
        ADC__enReadRegister(enModule , u32SequencerReg, &u32RegFull, ADC_ADCSSFSTAT_FULL_MASK, ADC_ADCSSFSTAT_R_FULL_BIT);
        if(1UL == u32RegEmpty)
        {
            enFeature = ADC_enSEQ_FIFO_EMPTY;
        }
        else if (1UL == u32RegFull)
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
    uint32_t u32Reg = 0U;
    uint32_t u32RegAddress = 0U;
    ADC_TypeDef* psAdc = 0U;
    ADCINPUT_Typedef* psAdcSeq = 0U;
    volatile uint32_t* pu32AdcSeq = 0U;

    ADC_nREADY enReady = ADC_enNOREADY;
    uint32_t u32Module = (uint32_t) enModule;
    uint32_t u32Sequencer = (uint32_t) enSequencer;
    uint32_t u32Count = 0U;
    ADC_nSEQ_FIFO enFeature = ADC_enSEQ_FIFO_INT_UNDEF;
    if((uint32_t) ADC_enMODULE_MAX<u32Module)
    {
        u32Module = (uint32_t) ADC_enMODULE_MAX;
    }
    if((uint32_t) ADC_enSEQ_MAX<u32Sequencer)
    {
        u32Sequencer = (uint32_t) ADC_enSEQ_MAX;
    }
    enReady = ADC__enIsReady((ADC_nMODULE)u32Module);
    if((ADC_enREADY == enReady) && ((uint32_t) 0UL != (uint32_t) pu32FifoArray))
    {
        psAdc = ADC_BLOCK[u32Module];
        psAdcSeq = (ADCINPUT_Typedef*) ( &psAdc->ADCINPUT[u32Sequencer]);
        u32RegAddress = (uint32_t) (psAdcSeq)+ADC_ADCSSFIFO_OFFSET;
        pu32AdcSeq = (volatile uint32_t*)u32RegAddress;

        enFeature = ADC__enGetSampleFifoStat((ADC_nMODULE)u32Module, (ADC_nSEQUENCER)u32Sequencer);
        while(ADC_enSEQ_FIFO_EMPTY != enFeature)
        {
            u32Reg = *pu32AdcSeq;
            *pu32FifoArray = u32Reg;
            pu32FifoArray += 0x1U;
            u32Count++;
            enFeature = ADC__enGetSampleFifoStat((ADC_nMODULE)u32Module, (ADC_nSEQUENCER)u32Sequencer);
        }

    }
    return u32Count;
}
