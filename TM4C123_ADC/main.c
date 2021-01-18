

/**
 * main.c
 */

/*Standard Libraries*/
#include <xUtils/Standard/Standard.h>
#include "stdlib.h"
#include "stdarg.h"
/*MCU Drivers*/
#include <xDriver_MCU.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

/*Applications Drivers*/
#include <LCD1602/Generic/LCD1602_Generic.h>
#include <xApplication/ServoMotor_SG90/ServoMotor_SG90.h>

/*Utils Libraries*/
#include <xUtils/Conversion/Conversion.h>

/*Local functions*/
int32_t main (void);

void MAIN_vInitGPIO(void);
void MAIN_vInitTIMER(void);
/*ISR Functions*/
void MAIN_SW1_vIRQSourceHandler(void);
void MAIN_SW2_vIRQSourceHandler(void);
void MAIN_vHIB_RTCALTSourceHandler(void);
void MAIN_vADC1_COMP0_SourceHandler(void);
void MAIN_vADC1_COMP1_SourceHandler(void);
void MAIN_vADC1_COMP2_SourceHandler(void);
void MAIN_DMA_CH24_vIRQSourceHandler(void);
void MAIN_TIMER3W_vIRQSourceHandler(void);
uint32_t u32ADCValue = 0u;

uint32_t ADCbuffer[8u]={0};
DMACHCTL_TypeDef enDMAChControl =
{
     DMA_enCH_MODE_PING_PONG,
     DMA_enCH_BURST_OFF,
     8u-1u,
     DMA_enCH_BURST_SIZE_4,
     0,
     DMA_enCH_SRC_SIZE_WORD,
     DMA_enCH_SRC_INC_NO,
     DMA_enCH_DST_SIZE_WORD,
     DMA_enCH_DST_INC_WORD,
};
int32_t main(void)
{
    ADC_SAMPLE_CONFIG_Typedef sADC0SampleConfig =
    {
     ADC_enSEQ_INPUT_0,
     ADC_enSEQ_INPUT_DIFF_DIS,
     ADC_enSEQ_INPUT_ENDED_DIS,
     ADC_enSEQ_INPUT_INT_DIS,
     ADC_enSEQ_INPUT_TEMP_DIS,
     ADC_enSEQ_INPUT_DIR_COMP,
     ADC_en_COMPARATOR_0
    };

    DMA_CONFIG_Typedef enDMAChConfig=
    {
       DMA_enCH_REQTYPE_BOTH,
       DMA_enCH_PERIPHERAL_ENA,
       DMA_enCH_CTL_PRIMARY ,
       DMA_enCH_PRIO_DEFAULT ,
       DMA_enCH_ENCODER_1
    };
    ADC_nSTATE enADCState = ADC_enSTATE_UNDEF;
    __asm(" cpsie i");
    MPU__vInit();
    SCB__vInit();
    FLASH__enInit();
    EEPROM__enInit();
    SYSEXC__vInit((SYSEXC_nINT)((uint32_t)SYSEXC_enINT_INVALID|(uint32_t)SYSEXC_enINT_DIV0|
          (uint32_t)SYSEXC_enINT_OVERFLOW|(uint32_t)SYSEXC_enINT_UNDERFLOW),SYSEXC_enPRI7);
    SYSCTL__enInit();/* system clock 80MHz*/
    MAIN_vInitGPIO();
    HIB__enInit(5u, 0u,&MAIN_vHIB_RTCALTSourceHandler);
    /*WDT__vInit(0xFFFFFFFFu);*/
    SysTick__enInitUs(1000.0f,SCB_enSHPR0);


    DMA__vInit();
    DMA__vRegisterIRQSourceHandler(&MAIN_DMA_CH24_vIRQSourceHandler,DMA_enCH_MODULE_24, DMA_enCH_ENCODER_1 );
    DMA_CH__vSetPrimaryDestEndAddress(DMA_enCH_MODULE_24, (uint32_t) &ADCbuffer[8u-1u]);
    DMA_CH__vSetPrimarySourceEndAddress(DMA_enCH_MODULE_24, (uint32_t) (ADC1_BASE + ADC_ADCSSFIFO0_OFFSET));
    DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_24, enDMAChControl);
    DMA_CH__vSetAlternateDestEndAddress(DMA_enCH_MODULE_24, (uint32_t) &ADCbuffer[8u-1u]);
    DMA_CH__vSetAlternateSourceEndAddress(DMA_enCH_MODULE_24, (uint32_t) (ADC1_BASE + ADC_ADCSSFIFO0_OFFSET));
    DMA_CH__vSetAlternateControlWorld(DMA_enCH_MODULE_24, enDMAChControl);
    DMA_CH__vSetConfigStruct(DMA_enCH_MODULE_24, enDMAChConfig);
    DMA_CH__vSetEnable(DMA_enCH_MODULE_24,DMA_enCH_ENA_ENA);


    /*Configure ADC IN0 in polling MODE*/

    ADC__vRegisterIRQVectorHandler(&ADC1_SS0__vIRQVectorHandler,ADC_enMODULE_1,ADC_enSEQ_0);
    ADC_Comp__vRegisterIRQSourceHandler(&MAIN_vADC1_COMP0_SourceHandler, ADC_enMODULE_1, ADC_enSEQ_0,ADC_en_COMPARATOR_0);
    ADC_Comp__vRegisterIRQSourceHandler(&MAIN_vADC1_COMP1_SourceHandler, ADC_enMODULE_1, ADC_enSEQ_0,ADC_en_COMPARATOR_1);
    ADC_Comp__vRegisterIRQSourceHandler(&MAIN_vADC1_COMP2_SourceHandler, ADC_enMODULE_1, ADC_enSEQ_0,ADC_en_COMPARATOR_2);

    ADC__vSetSampleRate(ADC_enMODULE_1, ADC_enSAMPLE_RATE_125KSPS);
    ADC__vSetClockConfig(ADC_enMODULE_1, ADC_enCLOCK_PIOSC);
    ADC__vSetDither(ADC_enMODULE_1, ADC_enDITHER_EN);
    ADC__vSetAverage(ADC_enMODULE_1, ADC_enAVERAGE_64);

    ADC__vSetSequencerEnable(ADC_enMODULE_1,ADC_enSEQMASK_0,ADC_enSEQ_ENABLE_DIS);
    ADC__vSetSequencerTrigger(ADC_enMODULE_1, ADC_enSEQ_0, ADC_enSEQ_TRIGGER_TIMER);

    /*Dummy*/
    sADC0SampleConfig.enInterrupt = ADC_enSEQ_INPUT_INT_DIS;
    sADC0SampleConfig.enEnded = ADC_enSEQ_INPUT_ENDED_DIS;
    sADC0SampleConfig.enDirection = ADC_enSEQ_INPUT_DIR_SAMPLE;
    sADC0SampleConfig.enComparator = ADC_en_COMPARATOR_0;
    ADC__enSetSampleConfigGpio(ADC_enMODULE_1, ADC_enSEQ_0, ADC_en_MUX_0,&sADC0SampleConfig);


    ADC1_ADCDCCTL0->CIC=0u;
    ADC1_ADCDCCTL0->CIM=1u;

    ADC1_ADCDCCMP0->COMP0 =1000u;
    ADC1_ADCDCCMP0->COMP1 =1000u;

    ADC1_ADCDCCTL1->CIC=3u;
    ADC1_ADCDCCTL1->CIM=1u;

    ADC1_ADCDCCMP1->COMP0 =1800u;
    ADC1_ADCDCCMP1->COMP1 =1800u;

    ADC1_ADCDCCTL2->CIC=3u;
    ADC1_ADCDCCTL2->CIM=1u;

    ADC1_ADCDCCMP2->COMP0 =3500u;
    ADC1_ADCDCCMP2->COMP1 =3500u;

    ADC__vEnInterruptVector(ADC_enMODULE_1,ADC_enSEQ_0,ADC_enPRI7);

    ADC__vEnInterruptComp(ADC_enMODULE_1,ADC_en_COMPARATOR_0);
    ADC__vEnInterruptComp(ADC_enMODULE_1,ADC_en_COMPARATOR_1);
    ADC__vEnInterruptComp(ADC_enMODULE_1,ADC_en_COMPARATOR_2);

    ADC__vEnSeqInterruptSource(ADC_enMODULE_1,ADC_enSEQMASK_0,ADC_enINT_SOURCE_COMP);
    /*ADC__vEnSeqInterruptSource(ADC_enMODULE_1,ADC_enSEQMASK_0,ADC_enINT_SOURCE_SAMPLE);*/
    ADC__vSetSequencerEnable(ADC_enMODULE_1,ADC_enSEQMASK_0,ADC_enSEQ_ENABLE_ENA);

    MAIN_vInitTIMER();


    while(1u)
    {
    }
}

void MAIN_vInitTIMER(void)
{
    TIMER_EXTRAMODE_Typedef psExtraMode;

    TIMER__vInit();

    TIMER__vEnInterruptVector(TIMER_enWT3W,TIMER_enPRI1);

    TIMER__vRegisterIRQSourceHandler(&MAIN_TIMER3W_vIRQSourceHandler,TIMER_enWT3W,TIMER_enINTERRUPT_TIMEOUT);

    psExtraMode.enWaitTrigger=TIMER_enWAIT_NOTRIGGER;
    psExtraMode.enPWMInterrupt=TIMER_enPWM_INT_DIS;
    psExtraMode.enEventInterrupt=TIMER_enEVENT_INT_DIS;
    psExtraMode.enUpdateMatch=TIMER_enUPDATE_MATCH_TIMEOUT;
    psExtraMode.enStall=TIMER_enSTALL_FREEZE;
    psExtraMode.enRTCStall=TIMER_enRTC_STALL_FREEZE;
    psExtraMode.enADCTrigger=TIMER_enADC_TRIGGER_EN;

    TIMER__enSetExtraModeStruct(TIMER_enWT3W,&psExtraMode);

    TIMER__enSetMode_Reload(TIMER_enWT3W,TIMER_enMODE_PERIODIC_INDIVIDUAL_UP,0u,80000000u-1u);

    TIMER__vEnInterruptSource(TIMER_enWT3W,(TIMER_nINT)(TIMER_enINT_TIMEOUT));

    TIMER__vSetEnable(TIMER_enWT3W,TIMER_enENABLE_START);
}

void MAIN_vInitGPIO(void)
{
    GPIO_nPIN enSW2Pin=GPIO_enPIN_0;
    GPIO_nPIN enLedRedPin=GPIO_enPIN_1;
    GPIO_nPIN enLedBluePin=GPIO_enPIN_2;
    GPIO_nPIN enSW1Pin=GPIO_enPIN_4;
    GPIO__vInit();
    GPIO__vRegisterIRQSourceHandler(&MAIN_SW2_vIRQSourceHandler, GPIO_enPORT_F, enSW2Pin);
    GPIO__vRegisterIRQSourceHandler(&MAIN_SW1_vIRQSourceHandler, GPIO_enPORT_F, enSW1Pin);
    GPIO__vEnInterruptVector(GPIO_enPORT_F,GPIO_enPRI7);
    /*GREEN, RED, BlUE LED*/
    GPIO__enSetDigitalConfig(GPIO_enGPIOA7,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF1,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF2,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    /*SW1 SW0*/
    GPIO__enSetDigitalConfig(GPIO_enGPIOF0,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF4,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);

    /*Enable ADC IN0*/
    GPIO__vSetData(GPIO_enPORT_F,(GPIO_nPIN) (enLedRedPin|enLedBluePin), 0u);

    GPIO__vClearInterruptSource(GPIO_enPORT_F,  (GPIO_nPIN)(enSW2Pin|enSW1Pin));
    GPIO__vEnInterruptConfig(GPIO_enPORT_F, (GPIO_nPIN)(enSW2Pin|enSW1Pin), GPIO_enINT_CONFIG_EDGE_BOTH);
}
volatile uint32_t u32Count =0u;
void MAIN_TIMER3W_vIRQSourceHandler(void)
{
    u32Count=0u;
}


void MAIN_DMA_CH24_vIRQSourceHandler(void)
{
    DMA_nCH_CTL enDMAcontrol = DMA_enCH_CTL_UNDEF;
    enDMAcontrol = DMA_CH__enGetControlStructure(DMA_enCH_MODULE_24);
    if(DMA_enCH_CTL_PRIMARY == enDMAcontrol)
    {
        DMA_CH__vSetAlternateControlWorld(DMA_enCH_MODULE_24, enDMAChControl);
    }
    else
    {
        DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_24, enDMAChControl);
    }
    u32Count++;
}

void MAIN_vADC1_COMP0_SourceHandler(void)
{
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_1, 0u);
}

void MAIN_vADC1_COMP1_SourceHandler(void)
{
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_1, GPIO_enPIN_1);
}

void MAIN_vADC1_COMP2_SourceHandler(void)
{
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_1, 0u);
}
void MAIN_vHIB_RTCALTSourceHandler(void)
{
    static uint32_t u32Value=GPIO_enPIN_2;
    HIB__enSetLoad(0u);
    GPIO__vSetData(GPIO_enPORT_F,(GPIO_nPIN) (GPIO_enPIN_2), u32Value);
    u32Value^=GPIO_enPIN_2;

}

void MAIN_SW1_vIRQSourceHandler(void)
{
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_1, GPIO_enPIN_1);
}

void MAIN_SW2_vIRQSourceHandler(void)
{

    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_1, 0u);
}
