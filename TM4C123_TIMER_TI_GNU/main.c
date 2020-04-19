

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
void TIMER0B_vISR(void);
void TIMER1A_vISR(void);
void TIMER1B_vISR(void);
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


    SYSCTL__vResetPeripheral((SYSCTL_nPERIPHERAL)SYSCTL_enTIMER0);
    SYSCTL__vResetPeripheral((SYSCTL_nPERIPHERAL)SYSCTL_enTIMER1);
    SYSCTL__vDisRunModePeripheral((SYSCTL_nPERIPHERAL)SYSCTL_enTIMER0);
    SYSCTL__vDisRunModePeripheral((SYSCTL_nPERIPHERAL)SYSCTL_enTIMER1);
    SYSCTL__vEnRunModePeripheral((SYSCTL_nPERIPHERAL)SYSCTL_enTIMER0);
    SYSCTL__vEnRunModePeripheral((SYSCTL_nPERIPHERAL)SYSCTL_enTIMER1);

    NVIC__enSetEnableIRQ((NVIC_nSTIR)NVIC_enSTIR_TIMER0B,(NVIC_nPRIORITY)7);
    NVIC__enSetEnableIRQ((NVIC_nSTIR)NVIC_enSTIR_TIMER1A,(NVIC_nPRIORITY)7);
    NVIC__enSetEnableIRQ((NVIC_nSTIR)NVIC_enSTIR_TIMER1B,(NVIC_nPRIORITY)7);

    SCB__vRegisterISR(TIMER0B_vISR,SCB_enVECISR_TIMER0B);
    SCB__vRegisterISR(TIMER1A_vISR,SCB_enVECISR_TIMER1A);
    SCB__vRegisterISR(TIMER1B_vISR,SCB_enVECISR_TIMER1B);

    GPTM->CONTROL[0].GPTMCFG=4;

    GPTM->TIMERB[0].GPTMTBMR_Bit.TBAMS=1;
    GPTM->TIMERB[0].GPTMTBMR_Bit.TBCMR=0;
    GPTM->TIMERB[0].GPTMTBMR_Bit.TBMR=2;
    GPTM->TIMERB[0].GPTMBCTL_Bit.TBPWML=0;
    GPTM->TIMERB[0].GPTMTBPR=(((32*32*32)-1)>>16)&0xFF;

    GPTM->TIMERB[0].GPTMBCTL_Bit.TBEVENT=0;
    GPTM->TIMERB[0].GPTMTBMR_Bit.TBPWMIE=1;
    GPTM->TIMERB[0].GPTMTBILR=((32*32*32)-1)&0xFFFF;
    GPTM->TIMERB[0].GPTMTBPMR=(((32*32*32)-2)>>16)&0xFF;
    GPTM->TIMERB[0].GPTMTBMATCHR=((32*32*32)-2)&0xFFFF;

    GPTM->TIMERB[0].GPTMTBMR_Bit.TBILD=1;
    GPTM->TIMERB[0].GPTMTBMR_Bit.TBMRSU=1;
    GPTM->TIMERB[0].GPTMBCTL_Bit.TBSTALL=1;



    GPTM->CONTROL[1].GPTMCFG=4;

    GPTM->TIMERA[1].GPTMTAMR_Bit.TAAMS=1;
    GPTM->TIMERA[1].GPTMTAMR_Bit.TACMR=0;
    GPTM->TIMERA[1].GPTMTAMR_Bit.TAMR=2;
    GPTM->TIMERA[1].GPTMACTL_Bit.TAPWML=0;
    GPTM->TIMERA[1].GPTMTAPR=(((32*32)-1)>>16)&0xFF;

    GPTM->TIMERA[1].GPTMACTL_Bit.TAEVENT=0;
    GPTM->TIMERA[1].GPTMTAMR_Bit.TAPWMIE=1;
    GPTM->TIMERA[1].GPTMTAILR=((32*32)-1)&0xFFFF;
    GPTM->TIMERA[1].GPTMTAPMR=(((32*32)-2)>>16)&0xFF;
    GPTM->TIMERA[1].GPTMTAMATCHR=((32*32)-2)&0xFFFF;

    GPTM->TIMERA[1].GPTMTAMR_Bit.TAILD=1;
    GPTM->TIMERA[1].GPTMTAMR_Bit.TAMRSU=1;
    GPTM->TIMERA[1].GPTMACTL_Bit.TASTALL=1;

    GPTM->TIMERB[1].GPTMTBMR_Bit.TBAMS=1;
    GPTM->TIMERB[1].GPTMTBMR_Bit.TBCMR=0;
    GPTM->TIMERB[1].GPTMTBMR_Bit.TBMR=2;
    GPTM->TIMERB[1].GPTMBCTL_Bit.TBPWML=0;
    GPTM->TIMERB[1].GPTMTBPR=((32-1)>>16)&0xFF;

    GPTM->TIMERB[1].GPTMBCTL_Bit.TBEVENT=0;
    GPTM->TIMERB[1].GPTMTBMR_Bit.TBPWMIE=1;
    GPTM->TIMERB[1].GPTMTBILR=((32)-1)&0xFFFF;
    GPTM->TIMERB[1].GPTMTBPMR=((32-2)>>16)&0xFF;
    GPTM->TIMERB[1].GPTMTBMATCHR=((32)-2)&0xFFFF;

    GPTM->TIMERB[1].GPTMTBMR_Bit.TBILD=1;
    GPTM->TIMERB[1].GPTMTBMR_Bit.TBMRSU=1;
    GPTM->TIMERB[1].GPTMBCTL_Bit.TBSTALL=1;


    GPTM->TIMERB[0].GPTMBIMR_Bit.CBEIM=1;
    GPTM->TIMERA[1].GPTMAIMR_Bit.CAEIM=1;
    GPTM->TIMERB[1].GPTMBIMR_Bit.CBEIM=1;


    GPTM->TIMERB[0].GPTMBCTL_Bit.TBEN=1;
    GPTM->TIMERA[1].GPTMACTL_Bit.TAEN=1;
    GPTM->TIMERB[1].GPTMBCTL_Bit.TBEN=1;


    //GPTM->CONTROL[0].GPTMSYNC=(3<<2) |0x2;

/*
    GPTM->TIMERA[0].GPTMTAMR_Bit.TAMR=2;
    GPTM->TIMERA[0].GPTMTAMR_Bit.TACDIR=0;
    GPTM->TIMERA[0].GPTMACTL_Bit.TASTALL=1;
    if(GPTM->TIMERA[0].GPTMTAMR_Bit.TACDIR ==1)
    {
        GPTM->TIMERA[0].GPTMTAPR=((0x80000-1)>>16)&0xFF;
        GPTM->TIMERA[0].GPTMTAILR=((0x80000)-1)&0xFFFF;
    }
    else
    {
        GPTM->TIMERA[0].GPTMTAPR=((0x80000-1))&0xFF;
        GPTM->TIMERA[0].GPTMTAILR=((0x80000-1)>>8)&0xFFFF;
    }

    GPTM->CONTROL[1].GPTMCFG=0;

    GPTM->TIMERW[1].GPTMTWMR_Bit.TWMR=2;
    GPTM->TIMERW[1].GPTMTWMR_Bit.TWCDIR=0;
    GPTM->TIMERW[1].GPTMWCTL_Bit.TWSTALL=1;
    GPTM->TIMERW[1].GPTMTWILR=((0x100000)-1);

    GPTM->TIMERA[0].GPTMAICR_Bit.TATOCINT=1;
    GPTM->TIMERB[0].GPTMBICR_Bit.TBTOCINT=1;
    GPTM->TIMERW[1].GPTMWICR_Bit.TWTOCINT=1;
    GPTM->TIMERA[0].GPTMAIMR_Bit.TATOIM=1;
    GPTM->TIMERB[0].GPTMBIMR_Bit.CBEIM=1;
    GPTM->TIMERW[1].GPTMWIMR_Bit.TWTOIM=1;


    GPTM->TIMERW[1].GPTMWCTL_Bit.TWEN=1;
    GPTM->TIMERA[0].GPTMACTL_Bit.TAEN=1;
    GPTM->TIMERB[0].GPTMBCTL_Bit.TBEN=1;


    GPTM->CONTROL[0].GPTMSYNC=(1<<2) |0x3;
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

void TIMER0B_vISR(void)
{
    static uint32_t u32Value= 32*32*32;
    GPTM->TIMERB[0].GPTMBICR_Bit.CBECINT=1;
    if(u32Value==0)
        u32Value=32*32*32;
    u32Value-=1;
    GPTM->TIMERB[0].GPTMTBPMR=((u32Value)>>16)&0xFF;
    GPTM->TIMERB[0].GPTMTBMATCHR=((u32Value))&0xFFFF;

}

void TIMER1A_vISR(void)
{
    static uint32_t u32Value= 32*32;
    GPTM->TIMERA[1].GPTMAICR_Bit.CAECINT=1;
    if(u32Value==0)
        u32Value=32*32;
    u32Value-=1;
    GPTM->TIMERA[1].GPTMTAPMR=((u32Value)>>16)&0xFF;
    GPTM->TIMERA[1].GPTMTAMATCHR=((u32Value))&0xFFFF;

}



void TIMER1B_vISR(void)
{
    static uint32_t u32Value= 32;
    GPTM->TIMERB[1].GPTMBICR_Bit.CBECINT=1;
    if(u32Value==0)
        u32Value=32;
    u32Value--;
    GPTM->TIMERB[1].GPTMTBPMR=((u32Value)>>16)&0xFF;
    GPTM->TIMERB[1].GPTMTBMATCHR=((u32Value))&0xFFFF;
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
