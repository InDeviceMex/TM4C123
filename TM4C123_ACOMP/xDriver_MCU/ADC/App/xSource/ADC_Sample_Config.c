/**
 *
 * @file ADC_Sample_Config.c
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
 * @verbatim 24 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/App/xHeader/ADC_Sample_Config.h>
#include <xDriver_MCU/ADC/Driver/ADC_Driver.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Dependencies.h>

ADC_nSTATUS ADC__enSetSampleConfigGpio(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux, const ADC_SAMPLE_CONFIG_Typedef* psSampleConfig)
{
    ADC_nSEQ_INPUT_GPIO enAdcGpioInput [ADC_enSEQ_INPUT_MAX + 1U]=
    {
    ADC_enSEQ_INPUT_GPIO_0,ADC_enSEQ_INPUT_GPIO_1,ADC_enSEQ_INPUT_GPIO_2,ADC_enSEQ_INPUT_GPIO_3,ADC_enSEQ_INPUT_GPIO_4,ADC_enSEQ_INPUT_GPIO_5,
    ADC_enSEQ_INPUT_GPIO_6,ADC_enSEQ_INPUT_GPIO_7,ADC_enSEQ_INPUT_GPIO_8,ADC_enSEQ_INPUT_GPIO_9,ADC_enSEQ_INPUT_GPIO_10,ADC_enSEQ_INPUT_GPIO_11
    };
    ADC_nSTATUS enReturn=ADC_enERROR;
    if(psSampleConfig!=0)
    {
        GPIO__vSetAnalogFunction((GPIO_nANALOG_FUNCTION)enAdcGpioInput[(uint32_t) psSampleConfig->enInput]);
        ADC__vSetSampleInputSelection(enModule, enSequencer, enMux, psSampleConfig->enInput);
        ADC__vSetSampleTempSelection(enModule, enSequencer, enMux, psSampleConfig->enTempSensor);
        ADC__vSetSampleEndSequence(enModule, enSequencer, enMux, psSampleConfig->enEnded);
        ADC__vSetSampleDifferential(enModule, enSequencer, enMux, psSampleConfig->enDifferential);
        ADC__vSetSampleDirection(enModule, enSequencer, enMux, psSampleConfig->enDirection);
        ADC__vSetSampleCompSelection(enModule, enSequencer, enMux, psSampleConfig->enComparator);
        if( ADC_enSEQ_INPUT_INT_EN == psSampleConfig->enInterrupt)
        {
            ADC__vEnSeqInterruptSample(enModule, enSequencer, enMux);
        }
        else
        {
            ADC__vDisSeqInterruptSample(enModule, enSequencer, enMux);
        }
        enReturn = ADC_enOK;
    }
    return enReturn;
}

ADC_nSTATUS ADC__enSetSampleConfig(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux, const ADC_SAMPLE_CONFIG_Typedef* psSampleConfig)
{
    ADC_nSTATUS enReturn=ADC_enERROR;
    if(psSampleConfig!=0)
    {
        ADC__vSetSampleInputSelection(enModule, enSequencer, enMux, psSampleConfig->enInput);
        ADC__vSetSampleTempSelection(enModule, enSequencer, enMux, psSampleConfig->enTempSensor);
        ADC__vSetSampleEndSequence(enModule, enSequencer, enMux, psSampleConfig->enEnded);
        ADC__vSetSampleDifferential(enModule, enSequencer, enMux, psSampleConfig->enDifferential);
        ADC__vSetSampleDirection(enModule, enSequencer, enMux, psSampleConfig->enDirection);
        ADC__vSetSampleCompSelection(enModule, enSequencer, enMux, psSampleConfig->enComparator);
        if( ADC_enSEQ_INPUT_INT_EN == psSampleConfig->enInterrupt)
        {
            ADC__vEnSeqInterruptSample(enModule, enSequencer, enMux);
        }
        else
        {
            ADC__vDisSeqInterruptSample(enModule, enSequencer, enMux);
        }
        enReturn = ADC_enOK;
    }
    return enReturn;
}

ADC_nSTATUS ADC__enGetSampleConfig(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux, ADC_SAMPLE_CONFIG_Typedef* psSampleConfig)
{
    ADC_nSTATUS enReturn=ADC_enERROR;
    if(psSampleConfig!=0)
    {
        psSampleConfig->enInput = ADC__enGetSampleInputSelection(enModule, enSequencer, enMux);
        psSampleConfig->enTempSensor = ADC__enGetSampleTempSelection(enModule, enSequencer, enMux);
        psSampleConfig->enEnded = ADC__enGetSampleEndSequence(enModule, enSequencer, enMux);
        psSampleConfig->enDifferential = ADC__enGetSampleDifferential(enModule, enSequencer, enMux);
        psSampleConfig->enDirection = ADC__enGetSampleDirection(enModule, enSequencer, enMux);
        psSampleConfig->enComparator = ADC__enGetSampleCompSelection(enModule, enSequencer, enMux);
        psSampleConfig->enInterrupt = ADC__enGetSeqInterruptSample(enModule, enSequencer, enMux);
        enReturn = ADC_enOK;
    }
    return enReturn;


}
