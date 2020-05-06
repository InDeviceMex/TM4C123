

/**
 * main.c
 */

#include "stdlib.h"
#include "SCB.h"
#include "FPU.h"
#include "MPU.h"
#include "SYSTICK.h"
#include "SYSEXC.h"
#include "HIB.h"
#include "SYSCTL.h"
#include "NVIC.h"
#include "EEPROM.h"
#include "FLASH.h"
//#include "UDMA.h"
#include "GPIO.h"
#include "TIMER.h"

void GPIOF0_vISR(void);
void GPIOF4_vISR(void);
void TIMER0B__vISR(void);
void TIMER1A__vISR(void);
void TIMER1B__vISR(void);
void MAIN_vInitGPIO(void);

//uint32_t pu32Array[14]={0,1,2,3,4,5,6,7,8,9,10,11,0xAA55CFDA,0x11223344};
uint32_t pu32Array[14]={0};
uint32_t pu32Array1[14]={0xBF00,1,2,3,4,5,6,7,8,9,10,11,0xAA55CFDA,0x11223344};



GPIODATA_MASK_TypeDef* psSW1=GPIOF_AHB_GPIODATA_MASK;
GPIODATA_MASK_TypeDef* psSW2=GPIOF_AHB_GPIODATA_MASK;

GPIO_nPIN enSW2Pin=GPIO_enPIN0;
GPIO_nPIN enLedRedPin=GPIO_enPIN1;
GPIO_nPIN enLedBluePin=GPIO_enPIN2;
GPIO_nPIN enLedGreenPin=GPIO_enPIN3;
GPIO_nPIN enSW1Pin=GPIO_enPIN4;


GPIO_nBUS enBus=GPIO_enAPB;

volatile uint32_t u32CounterRIS=0;
volatile uint32_t u32CounterFALL=0;

volatile uint32_t u32Memory=0;
volatile GPIODATA_MASK_TypeDef** psLeds[3]={0};
int main(void)
{


    //volatile uint32_t u32ValueSW=0;
    volatile uint32_t u32Blink=0;
    volatile uint32_t u32Led=0;
    __asm(" cpsie i");
    FPU__vInit();
    MPU__vInit();
    SCB__vInit();
    SYSEXC__vInit((SYSEXC_nINTERRUPT)(SYSEXC_enINVALID|SYSEXC_enDIV0|
            SYSEXC_enOVERFLOW|SYSEXC_enUNDERFLOW),SYSEXC_enPRI7);
    SYSCTL__enInit(); // system clock 80MHz
    SysTick__enInitUs(10,SCB_enSHPR0);
    EEPROM__enInit();
    MAIN_vInitGPIO();
    enBus=GPIO__enGetBus(GPIO_enPORTF);
    if(GPIO_enAPB==enBus)
    {
        psSW1=GPIOF_APB_GPIODATA_MASK;
        psSW2=GPIOF_APB_GPIODATA_MASK;
    }

    u32Memory=0;
    u32Blink=0;

    TIMER__vInit();

    TIMER__vEnInterruptMODULE(TIMER_enT0B,TIMER_enPRI7);
    TIMER__vEnInterruptMODULE(TIMER_enT1A,TIMER_enPRI7);
    TIMER__vEnInterruptMODULE(TIMER_enT1B,TIMER_enPRI7);

    TIMER__vRegisterISR(TIMER0B__vISR,TIMER_enT0B,TIMER_enCAPTUREEVENT);
    TIMER__vRegisterISR(TIMER1A__vISR,TIMER_enT1A,TIMER_enCAPTUREEVENT);
    TIMER__vRegisterISR(TIMER1B__vISR,TIMER_enT1B,TIMER_enCAPTUREEVENT);

    TIMER__vSetConfiguration(TIMER_enT0B,TIMER_enCONFIG_INDIVIDUAL);
    TIMER__vSetConfiguration(TIMER_enT1A,TIMER_enCONFIG_INDIVIDUAL);

    GPTM0_TB_GPTMTnMR->TnAMS=1;
    GPTM_UNION->TB[0].GPTMTnMR_Bit.TnCMR=0;
    GPTM_UNION->TB[0].GPTMTnMR_Bit.TnMR=2;
    GPTM_UNION->TB[0].GPTMTnCTL_Bit.TnPWML=0;
    GPTM_UNION->TB[0].GPTMTnPR=(((32*32*32)-1)>>16)&0xFF;

    GPTM_UNION->TB[0].GPTMTnCTL_Bit.TnEVENT=0;
    GPTM_UNION->TB[0].GPTMTnMR_Bit.TnPWMIE=1;
    GPTM_UNION->TB[0].GPTMTnILR=((32*32*32)-1)&0xFFFF;
    GPTM_UNION->TB[0].GPTMTnPMR=(((32*32*32)-2)>>16)&0xFF;
    GPTM_UNION->TB[0].GPTMTnMATCHR=((32*32*32)-2)&0xFFFF;

    GPTM_UNION->TB[0].GPTMTnMR_Bit.TnILD=1;
    GPTM_UNION->TB[0].GPTMTnMR_Bit.TnMRSU=1;
    GPTM_UNION->TB[0].GPTMTnCTL_Bit.TnSTALL=1;


    GPTM_UNION->TA[1].GPTMTnMR_Bit.TnAMS=1;
    GPTM_UNION->TA[1].GPTMTnMR_Bit.TnCMR=0;
    GPTM_UNION->TA[1].GPTMTnMR_Bit.TnMR=2;
    GPTM_UNION->TA[1].GPTMTnCTL_Bit.TnPWML=0;
    GPTM_UNION->TA[1].GPTMTnPR=(((32*32)-1)>>16)&0xFF;

    GPTM_UNION->TA[1].GPTMTnCTL_Bit.TnEVENT=0;
    GPTM_UNION->TA[1].GPTMTnMR_Bit.TnPWMIE=1;
    GPTM_UNION->TA[1].GPTMTnILR=((32*32)-1)&0xFFFF;
    GPTM_UNION->TA[1].GPTMTnPMR=(((32*32)-2)>>16)&0xFF;
    GPTM_UNION->TA[1].GPTMTnMATCHR=((32*32)-2)&0xFFFF;

    GPTM_UNION->TA[1].GPTMTnMR_Bit.TnILD=1;
    GPTM_UNION->TA[1].GPTMTnMR_Bit.TnMRSU=1;
    GPTM_UNION->TA[1].GPTMTnCTL_Bit.TnSTALL=1;

    GPTM_UNION->TB[1].GPTMTnMR_Bit.TnAMS=1;
    GPTM_UNION->TB[1].GPTMTnMR_Bit.TnCMR=0;
    GPTM_UNION->TB[1].GPTMTnMR_Bit.TnMR=2;
    GPTM_UNION->TB[1].GPTMTnCTL_Bit.TnPWML=0;
    GPTM_UNION->TB[1].GPTMTnPR=((32-1)>>16)&0xFF;

    GPTM_UNION->TB[1].GPTMTnCTL_Bit.TnEVENT=0;
    GPTM_UNION->TB[1].GPTMTnMR_Bit.TnPWMIE=1;
    GPTM_UNION->TB[1].GPTMTnILR=((32)-1)&0xFFFF;
    GPTM_UNION->TB[1].GPTMTnPMR=((32-2)>>16)&0xFF;
    GPTM_UNION->TB[1].GPTMTnMATCHR=((32)-2)&0xFFFF;

    GPTM_UNION->TB[1].GPTMTnMR_Bit.TnILD=1;
    GPTM_UNION->TB[1].GPTMTnMR_Bit.TnMRSU=1;
    GPTM_UNION->TB[1].GPTMTnCTL_Bit.TnSTALL=1;


    GPTM_UNION->TB[0].GPTMTnIMR_Bit.CnEIM=1;
    GPTM_UNION->TA[1].GPTMTnIMR_Bit.CnEIM=1;
    GPTM_UNION->TB[1].GPTMTnIMR_Bit.CnEIM=1;


    GPTM_UNION->TB[0].GPTMTnCTL_Bit.TnEN=1;
    GPTM_UNION->TA[1].GPTMTnCTL_Bit.TnEN=1;
    GPTM_UNION->TB[1].GPTMTnCTL_Bit.TnEN=1;



/*
    GPTM_UNION->TA[0].GPTMTAMR_Bit.TAMR=2;
    GPTM_UNION->TA[0].GPTMTAMR_Bit.TACDIR=0;
    GPTM_UNION->TA[0].GPTMACTL_Bit.TASTALL=1;
    if(GPTM_UNION->TA[0].GPTMTAMR_Bit.TACDIR ==1)
    {
        GPTM_UNION->TA[0].GPTMTAPR=((0x80000-1)>>16)&0xFF;
        GPTM_UNION->TA[0].GPTMTAILR=((0x80000)-1)&0xFFFF;
    }
    else
    {
        GPTM_UNION->TA[0].GPTMTAPR=((0x80000-1))&0xFF;
        GPTM_UNION->TA[0].GPTMTAILR=((0x80000-1)>>8)&0xFFFF;
    }

    GPTM1_CTL->GPTMCFG=0;

    GPTM_UNION->TW[1].GPTMTWMR_Bit.TWMR=2;
    GPTM_UNION->TW[1].GPTMTWMR_Bit.TWCDIR=0;
    GPTM_UNION->TW[1].GPTMWCTL_Bit.TWSTALL=1;
    GPTM_UNION->TW[1].GPTMTWILR=((0x100000)-1);

    GPTM_UNION->TA[0].GPTMAICR_Bit.TATOCINT=1;
    GPTM_UNION->TB[0].GPTMBICR_Bit.TBTOCINT=1;
    GPTM_UNION->TW[1].GPTMWICR_Bit.TWTOCINT=1;
    GPTM_UNION->TA[0].GPTMAIMR_Bit.TATOIM=1;
    GPTM_UNION->TB[0].GPTMBIMR_Bit.CBEIM=1;
    GPTM_UNION->TW[1].GPTMWIMR_Bit.TWTOIM=1;


    GPTM_UNION->TW[1].GPTMWCTL_Bit.TWEN=1;
    GPTM_UNION->TA[0].GPTMACTL_Bit.TAEN=1;
    GPTM_UNION->TB[0].GPTMBCTL_Bit.TBEN=1;


    GPTM0_CTL->GPTMSYNC=(1<<2) |0x3;
*/
    while(1)
    {
        SysTick__vDelayUs(100000);
    }
}


void GPIOF4_vISR(void)
{

}

void GPIOF0_vISR(void)
{

}

void TIMER0B__vISR(void)
{
    static uint32_t u32Value= 32*32*32;
    if(u32Value==0)
        u32Value=32*32*32;
    u32Value-=32*32;
    GPTM_UNION->TB[0].GPTMTnPMR=((u32Value)>>16)&0xFF;
    GPTM_UNION->TB[0].GPTMTnMATCHR=((u32Value))&0xFFFF;

}

void TIMER1A__vISR(void)
{
    static uint32_t u32Value= 32*32;
    if(u32Value==0)
        u32Value=32*32;
    u32Value-=32;
    GPTM_UNION->TA[1].GPTMTnPMR=((u32Value)>>16)&0xFF;
    GPTM_UNION->TA[1].GPTMTnMATCHR=((u32Value))&0xFFFF;

}



void TIMER1B__vISR(void)
{
    static uint32_t u32Value= 32;
    if(u32Value==0)
        u32Value=32;
    u32Value--;
    GPTM_UNION->TB[1].GPTMTnPMR=((u32Value)>>16)&0xFF;
    GPTM_UNION->TB[1].GPTMTnMATCHR=((u32Value))&0xFFFF;
}
void MAIN_vInitGPIO(void)
{
    GPIO__vInit();
    GPIO__vRegisterISR(GPIOF0_vISR,GPIO_enPORTF,enSW2Pin);
    GPIO__vRegisterISR(GPIOF4_vISR,GPIO_enPORTF,enSW1Pin);
    GPIO__vEnInterruptMODULE(GPIO_enPORTF,GPIO_enPRI7);

    //GREEN, RED, BlUE LED
    GPIO__vSetDirection(GPIO_enPORTF,(GPIO_nPIN)(enLedGreenPin|enLedBluePin|enLedRedPin),GPIO_enOUTPUT);
    GPIO__vSetDigitalFunction(GPIO_enGPIOF1);
    GPIO__vSetDigitalFunction(GPIO_enGPIOF2);
    GPIO__vSetDigitalFunction(GPIO_enGPIOF3);
    GPIO__vSetDrive(GPIO_enPORTF,(GPIO_nPIN)(enLedGreenPin|enLedBluePin|enLedRedPin),GPIO_enDRIVE_2mA);
    GPIO__vSetOutputMode(GPIO_enPORTF,(GPIO_nPIN)(enLedGreenPin|enLedBluePin|enLedRedPin),GPIO_enOUTMODE_PP);
    GPIO__vSetResistorMode(GPIO_enPORTF,(GPIO_nPIN)(enLedGreenPin|enLedBluePin|enLedRedPin),GPIO_enRESMODE_INACTIVE);


    //SW1 SW0
    GPIO__vSetDirection(GPIO_enPORTF,(GPIO_nPIN)(enSW2Pin|enSW1Pin),GPIO_enINPUT);
    GPIO__vSetDigitalFunction(GPIO_enGPIOF0);
    GPIO__vSetDigitalFunction(GPIO_enGPIOF4);
    GPIO__vSetDrive(GPIO_enPORTF,(GPIO_nPIN)(enSW2Pin|enSW1Pin),GPIO_enDRIVE_2mA);
    GPIO__vSetOutputMode(GPIO_enPORTF,(GPIO_nPIN)(enSW2Pin|enSW1Pin),GPIO_enOUTMODE_OD);
    GPIO__vSetResistorMode(GPIO_enPORTF,(GPIO_nPIN)(enSW2Pin|enSW1Pin),GPIO_enRESMODE_PULLUP);


    GPIO__vSetIntEdge(GPIO_enPORTF,(GPIO_nPIN)(enSW1Pin|enSW2Pin),GPIO_enEDGE_BOTH);
    GPIO__vClearInterrupt(GPIO_enPORTF,(GPIO_nPIN)(enSW2Pin|enSW1Pin));
    GPIO__vEnInterrupt(GPIO_enPORTF,(GPIO_nPIN)(enSW2Pin|enSW1Pin));

    GPIO__vSetDigitalFunction(GPIO_enT0CCP1_F1);
    GPIO__vSetDigitalFunction(GPIO_enT1CCP0_F2);
    GPIO__vSetDigitalFunction(GPIO_enT1CCP1_F3);
    GPIO__vLock(GPIO_enPORTF, (GPIO_nPIN)(enSW2Pin|enSW1Pin|enLedGreenPin|enLedBluePin|enLedRedPin));
}
