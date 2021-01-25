/**
 *
 * @file Accelerometer_Init.c
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
 * @verbatim 17 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/EDUMKII/Accelerometer/xHeader/Accelerometer_Init.h>
#include <xApplication/EDUMKII/Accelerometer/xHeader/Accelerometer_Enum.h>
#include <xApplication/EDUMKII/Accelerometer/xHeader/Accelerometer_Sample.h>
#include <xApplication/EDUMKII/Common/xHeader/Common_Adc.h>
#include <xApplication/EDUMKII/Common/xHeader/Common_Timer.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/GPIO.h>
#include <xDriver_MCU/ADC/ADC.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/DMA/DMA.h>


void EDUMKII_Accelerometer_vInit(void)
{
    ADC_SAMPLE_CONFIG_Typedef sADC0SampleConfig =
    {
     ADC_enSEQ_INPUT_0,
     ADC_enSEQ_INPUT_DIFF_DIS,
     ADC_enSEQ_INPUT_ENDED_DIS,
     ADC_enSEQ_INPUT_INT_DIS,
     ADC_enSEQ_INPUT_TEMP_DIS,
     ADC_enSEQ_INPUT_DIR_SAMPLE,
     ADC_en_COMPARATOR_0
    };

    DMA_CONFIG_Typedef enDMAChConfig=
    {
        DMA_enCH_REQTYPE_BOTH,
        DMA_enCH_PERIPHERAL_ENA,
        DMA_enCH_CTL_PRIMARY ,
        DMA_enCH_PRIO_DEFAULT ,
        DMA_enCH_ENCODER_0
    };

    DMACHCTL_TypeDef enDMAChControl =
    {
         DMA_enCH_MODE_PING_PONG,
         DMA_enCH_BURST_OFF,
         4u-1U,
         DMA_enCH_BURST_SIZE_4,
         0,
         DMA_enCH_SRC_SIZE_WORD,
         DMA_enCH_SRC_INC_NO,
         DMA_enCH_DST_SIZE_WORD,
         DMA_enCH_DST_INC_WORD,
    };


    DMA__vRegisterIRQSourceHandler(&EDUMKII_Accelerometer_vIRQSourceHandler,DMA_enCH_MODULE_16, DMA_enCH_ENCODER_0 );
    DMA_CH__vSetPrimaryDestEndAddress(DMA_enCH_MODULE_16, (uint32_t) &u32AccelerometerFifoArray[4u-1U]);
    DMA_CH__vSetPrimarySourceEndAddress(DMA_enCH_MODULE_16, (uint32_t) (ADC0_BASE + ADC_ADCSSFIFO2_OFFSET));
    DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_16, enDMAChControl);

    DMA_CH__vSetAlternateDestEndAddress(DMA_enCH_MODULE_16, (uint32_t) &u32AccelerometerFifoArray[4u-1U]);
    DMA_CH__vSetAlternateSourceEndAddress(DMA_enCH_MODULE_16, (uint32_t) (ADC0_BASE + ADC_ADCSSFIFO2_OFFSET));
    DMA_CH__vSetAlternateControlWorld(DMA_enCH_MODULE_16, enDMAChControl);

    DMA_CH__vSetConfigStruct(DMA_enCH_MODULE_16, enDMAChConfig);
    DMA_CH__vSetEnable(DMA_enCH_MODULE_16,DMA_enCH_ENA_ENA);

    EDUMKII_Common_vAdcInit();

    GPIO__vSetAnalogFunction(EDUMKII_ACCEL_AXIS_X);
    GPIO__vSetAnalogFunction(EDUMKII_ACCEL_AXIS_Y);
    GPIO__vSetAnalogFunction(EDUMKII_ACCEL_AXIS_Z);

    ADC__vSetSequencerEnable(ADC_enMODULE_0,ADC_enSEQMASK_2,ADC_enSEQ_ENABLE_DIS);
    ADC__vSetSequencerTrigger(ADC_enMODULE_0, ADC_enSEQ_2, ADC_enSEQ_TRIGGER_TIMER);

    sADC0SampleConfig.enInput = EDUMKII_ACCEL_AXIS_X_INPUT;
    ADC__enSetSampleConfigGpio(ADC_enMODULE_0, ADC_enSEQ_2, ADC_en_MUX_0,&sADC0SampleConfig);

    sADC0SampleConfig.enInput = EDUMKII_ACCEL_AXIS_Y_INPUT;
    ADC__enSetSampleConfigGpio(ADC_enMODULE_0, ADC_enSEQ_2, ADC_en_MUX_1,&sADC0SampleConfig);

    sADC0SampleConfig.enInput = EDUMKII_ACCEL_AXIS_Z_INPUT;
    ADC__enSetSampleConfigGpio(ADC_enMODULE_0, ADC_enSEQ_2, ADC_en_MUX_2,&sADC0SampleConfig);

    sADC0SampleConfig.enInput = EDUMKII_ACCEL_AXIS_Z_INPUT;
    sADC0SampleConfig.enInterrupt = ADC_enSEQ_INPUT_INT_EN;
    sADC0SampleConfig.enEnded = ADC_enSEQ_INPUT_ENDED_EN;
    ADC__enSetSampleConfigGpio(ADC_enMODULE_0, ADC_enSEQ_2, ADC_en_MUX_3,&sADC0SampleConfig);

    ADC__vEnInterruptVector(ADC_enMODULE_0,ADC_enSEQ_2,ADC_enPRI7);
    ADC__vSetSequencerEnable(ADC_enMODULE_0,ADC_enSEQMASK_2,ADC_enSEQ_ENABLE_ENA);
    EDUMKII_Common_vTimerInit();
}


