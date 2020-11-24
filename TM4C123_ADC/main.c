

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

/*ISR Functions*/
void MAIN_SW1_vIRQSourceHandler(void);
void MAIN_SW2_vIRQSourceHandler(void);
void MAIN_vHIB_RTCALTSourceHandler(void);
void MAIN_vADC0_COMP0_SourceHandler(void);
void MAIN_vADC0_COMP1_SourceHandler(void);
void MAIN_vADC0_COMP2_SourceHandler(void);
uint32_t u32ADCValue = 0u;

int32_t main(void)
{
    ADC_nSTATE enADC0State = ADC_enSTATE_UNDEF;
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
    SysTick__enInitUs(100.0f,SCB_enSHPR0);

    /*Configure ADC IN0 in polling MODE*/

    ADC__vRegisterIRQVectorHandler(&ADC0_SS2__vIRQVectorHandler,ADC_enMODULE_0,ADC_enSEQ_2);
    ADC_Comp__vRegisterIRQSourceHandler(&MAIN_vADC0_COMP0_SourceHandler, ADC_enMODULE_0, ADC_enSEQ_2,ADC_en_COMPARATOR_0);
    ADC_Comp__vRegisterIRQSourceHandler(&MAIN_vADC0_COMP1_SourceHandler, ADC_enMODULE_0, ADC_enSEQ_2,ADC_en_COMPARATOR_1);
    ADC_Comp__vRegisterIRQSourceHandler(&MAIN_vADC0_COMP2_SourceHandler, ADC_enMODULE_0, ADC_enSEQ_2,ADC_en_COMPARATOR_2);

    ADC__vSetSampleRate(ADC_enMODULE_0, ADC_enSAMPLE_RATE_125KSPS);
    ADC__vSetClockConfig(ADC_enMODULE_0, ADC_enCLOCK_PIOSC);
    ADC__vSetAverage(ADC_enMODULE_0, ADC_enAVERAGE_64);
    ADC__vSetDither(ADC_enMODULE_0, ADC_enDITHER_EN);

    ADC__vSetSequencerEnable(ADC_enMODULE_0,ADC_enSEQMASK_2,ADC_enSEQ_ENABLE_DIS);
    ADC__vSetSequencerTrigger(ADC_enMODULE_0, ADC_enSEQ_2, ADC_enSEQ_TRIGGER_SOFTWARE);
    /*Low Band*/
    ADC__vSetSampleInputSelection(ADC_enMODULE_0, ADC_enSEQ_2, ADC_en_MUX_0, ADC_enSEQ_INPUT_0);
    ADC__vSetSampleInputSelection(ADC_enMODULE_0, ADC_enSEQ_2, ADC_en_MUX_1, ADC_enSEQ_INPUT_0);
    ADC__vSetSampleInputSelection(ADC_enMODULE_0, ADC_enSEQ_2, ADC_en_MUX_2, ADC_enSEQ_INPUT_0);
    ADC__vSetSampleInputSelection(ADC_enMODULE_0, ADC_enSEQ_2, ADC_en_MUX_3, ADC_enSEQ_INPUT_0);
    ADC0_ADCSSMUX2->MUX0 = 0u;
    ADC0_ADCSSCTL2->D0= 0u;
    ADC0_ADCSSCTL2->END0= 0u;
    ADC0_ADCSSCTL2->IE0= 0u;
    ADC0_ADCSSCTL2->TS0= 0u;
    ADC0_ADCSSOP2->S0DCOP=1u;
    ADC0_ADCSSDC2->S0DCSEL=0u;
    /*High Band*/
    ADC0_ADCSSMUX2->MUX1 = 0u;
    ADC0_ADCSSCTL2->D1= 0u;
    ADC0_ADCSSCTL2->END1= 0u;
    ADC0_ADCSSCTL2->IE1= 0u;
    ADC0_ADCSSCTL2->TS1= 0u;
    ADC0_ADCSSOP2->S1DCOP=1u;
    ADC0_ADCSSDC2->S1DCSEL=0u;
    /*Dummy*/
    ADC0_ADCSSMUX2->MUX2 = 0u;
    ADC0_ADCSSCTL2->D2= 0u;
    ADC0_ADCSSCTL2->END2= 0u;
    ADC0_ADCSSCTL2->IE2= 0u;
    ADC0_ADCSSCTL2->TS2= 0u;
    ADC0_ADCSSOP2->S2DCOP=1u;
    ADC0_ADCSSDC2->S2DCSEL=1u;

    /*Dummy*/
    ADC0_ADCSSMUX2->MUX3 = 0u;
    ADC0_ADCSSCTL2->D3= 0u;
    ADC0_ADCSSCTL2->END3= 1u;
    ADC0_ADCSSCTL2->IE3= 0u;
    ADC0_ADCSSCTL2->TS3= 0u;
    ADC0_ADCSSOP2->S3DCOP=1u;
    ADC0_ADCSSDC2->S3DCSEL=2u;

    ADC0_ADCDCCTL0->CIC=0u;
    ADC0_ADCDCCTL0->CIM=1u;

    ADC0_ADCDCCMP0->COMP0 =1000u;
    ADC0_ADCDCCMP0->COMP1 =1000u;

    ADC0_ADCDCCTL1->CIC=3u;
    ADC0_ADCDCCTL1->CIM=1u;

    ADC0_ADCDCCMP1->COMP0 =1800u;
    ADC0_ADCDCCMP1->COMP1 =1800u;

    ADC0_ADCDCCTL2->CIC=3u;
    ADC0_ADCDCCTL2->CIM=1u;

    ADC0_ADCDCCMP2->COMP0 =3500u;
    ADC0_ADCDCCMP2->COMP1 =3500u;

    ADC__vEnInterruptVector(ADC_enMODULE_0,ADC_enSEQ_2,ADC_enPRI7);
    ADC__vEnInterruptComp(ADC_enMODULE_0,ADC_en_COMPARATOR_0);
    ADC__vEnInterruptComp(ADC_enMODULE_0,ADC_en_COMPARATOR_1);
    ADC__vEnInterruptComp(ADC_enMODULE_0,ADC_en_COMPARATOR_2);
    ADC__vEnSeqInterruptSource(ADC_enMODULE_0,ADC_enSEQMASK_2,ADC_enINT_SOURCE_COMP);
    ADC__vSetSequencerEnable(ADC_enMODULE_0,ADC_enSEQMASK_2,ADC_enSEQ_ENABLE_ENA);
    while(1u)
    {
        ADC__vSetSequencerInitConv(ADC_enMODULE_0, ADC_enSEQMASK_2);
        do{
            enADC0State = ADC__enGetState(ADC_enMODULE_0);
        }while(ADC_enSTATE_BUSY == enADC0State);
        u32ADCValue = ADC0_ADCSSFIFO2_R;
    }
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
    GPIO__vSetAnalogFunction(GPIO_enAIN0);

    GPIO__vSetData(GPIO_enPORT_F,(GPIO_nPIN) (enLedRedPin|enLedBluePin), 0u);

    GPIO__vClearInterruptSource(GPIO_enPORT_F,  (GPIO_nPIN)(enSW2Pin|enSW1Pin));
    GPIO__vEnInterruptConfig(GPIO_enPORT_F, (GPIO_nPIN)(enSW2Pin|enSW1Pin), GPIO_enINT_CONFIG_EDGE_BOTH);
}

void MAIN_vADC0_COMP0_SourceHandler(void)
{
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_1, 0u);
}

void MAIN_vADC0_COMP1_SourceHandler(void)
{
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_1, GPIO_enPIN_1);
}

void MAIN_vADC0_COMP2_SourceHandler(void)
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
