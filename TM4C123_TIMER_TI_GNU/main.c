

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
void TIMER0A_vISR(void);
void TIMER0B_vISR(void);
void TIMER1_vISR(void);
void MAIN_vInitGPIO(void);

//uint32_t pu32Array[14]={0,1,2,3,4,5,6,7,8,9,10,11,0xAA55CFDA,0x11223344};
uint32_t pu32Array[14]={0};
uint32_t pu32Array1[14]={0xBF00,1,2,3,4,5,6,7,8,9,10,11,0xAA55CFDA,0x11223344};

GPIODATA_MASK_TypeDef* psLedRed=GPIOF_AHB_GPIODATA_MASK;
GPIODATA_MASK_TypeDef* psLedGreen=GPIOF_AHB_GPIODATA_MASK;
GPIODATA_MASK_TypeDef* psLedBlue=GPIOF_AHB_GPIODATA_MASK;


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

    psLeds[0]=&psLedRed;
    psLeds[1]=&psLedGreen;
    psLeds[2]=&psLedBlue;

    GPIO_nPIN* enLeds[3]={&enLedRedPin,&enLedGreenPin,&enLedBluePin};

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
        psLedRed=GPIOF_APB_GPIODATA_MASK;
        psLedGreen=GPIOF_APB_GPIODATA_MASK;
        psLedBlue=GPIOF_APB_GPIODATA_MASK;
        psSW1=GPIOF_APB_GPIODATA_MASK;
        psSW2=GPIOF_APB_GPIODATA_MASK;
    }

    psLedRed->DATA_MASK[enLedRedPin] =0;
    psLedBlue->DATA_MASK[enLedBluePin]=0;
    psLedGreen->DATA_MASK[enLedGreenPin]=0;

    u32Memory=0;
    u32Blink=0;


    SYSCTL__vResetPeripheral((SYSCTL_nPERIPHERAL)SYSCTL_enTIMER0);
    SYSCTL__vDisRunModePeripheral((SYSCTL_nPERIPHERAL)SYSCTL_enTIMER0);
    SYSCTL__vEnRunModePeripheral((SYSCTL_nPERIPHERAL)SYSCTL_enTIMER0);

    SYSCTL__vResetPeripheral((SYSCTL_nPERIPHERAL)SYSCTL_enTIMER1);
    SYSCTL__vDisRunModePeripheral((SYSCTL_nPERIPHERAL)SYSCTL_enTIMER1);
    SYSCTL__vEnRunModePeripheral((SYSCTL_nPERIPHERAL)SYSCTL_enTIMER1);

    NVIC__enSetEnableIRQ((NVIC_nSTIR)NVIC_enSTIR_TIMER0A,(NVIC_nPRIORITY)7);
    NVIC__enSetEnableIRQ((NVIC_nSTIR)NVIC_enSTIR_TIMER0B,(NVIC_nPRIORITY)7);
    NVIC__enSetEnableIRQ((NVIC_nSTIR)NVIC_enSTIR_TIMER1A,(NVIC_nPRIORITY)7);

    SCB__vRegisterISR(TIMER0A_vISR,SCB_enVECISR_TIMER0A);
    SCB__vRegisterISR(TIMER0B_vISR,SCB_enVECISR_TIMER0B);
    SCB__vRegisterISR(TIMER1_vISR,SCB_enVECISR_TIMER1A);

    GPTM->CONTROL[0].GPTMCFG=4;

    GPTM->TIMERA[0].GPTMTAMR_Bit.TAMR=2;
    GPTM->TIMERA[0].GPTMTAMR_Bit.TACDIR=0;
    GPTM->TIMERA[0].GPTMACTL_Bit.TASTALL=1;
    if(GPTM->TIMERA[0].GPTMTAMR_Bit.TACDIR ==1)
    {
        GPTM->TIMERA[0].GPTMTAPR=((0x800000-1)>>16)&0xFF;
        GPTM->TIMERA[0].GPTMTAILR=((0x800000)-1)&0xFFFF;
    }
    else
    {
        GPTM->TIMERA[0].GPTMTAPR=((0x800000-1))&0xFF;
        GPTM->TIMERA[0].GPTMTAILR=((0x800000-1)>>8)&0xFFFF;
    }

    GPTM->TIMERB[0].GPTMTBMR_Bit.TBMR=2;
    GPTM->TIMERB[0].GPTMTBMR_Bit.TBCDIR=0;
    GPTM->TIMERB[0].GPTMBCTL_Bit.TBSTALL=1;
    GPTM->TIMERB[0].GPTMTBPR=(((0x1000000)-1)>>16)&0xFF;
    GPTM->TIMERB[0].GPTMTBILR=((0x1000000)-1)&0xFFFF;
    GPTM->TIMERB[0].GPTMTBV=(0x1000000-1);


    GPTM->CONTROL[1].GPTMCFG=0;

    GPTM->TIMERW[1].GPTMTWMR_Bit.TWMR=2;
    GPTM->TIMERW[1].GPTMTWMR_Bit.TWCDIR=0;
    GPTM->TIMERW[1].GPTMWCTL_Bit.TWSTALL=1;
    GPTM->TIMERW[1].GPTMTWILR=((0x2000000)-1);
    GPTM->TIMERW[1].GPTMTWV=(0x2000000-1);


    GPTM->TIMERW[1].GPTMWCTL_Bit.TWEN=1;
    GPTM->TIMERA[0].GPTMACTL_Bit.TAEN=1;
    GPTM->TIMERB[0].GPTMBCTL_Bit.TBEN=1;


    GPTM->TIMERA[0].GPTMAICR_Bit.TATOCINT=1;
    GPTM->TIMERB[0].GPTMBICR_Bit.TBTOCINT=1;
    GPTM->TIMERW[1].GPTMWICR_Bit.TWTOCINT=1;
    GPTM->TIMERA[0].GPTMAIMR_Bit.TATOIM=1;
    GPTM->TIMERB[0].GPTMBIMR_Bit.TBTOIM=1;
    GPTM->TIMERW[1].GPTMWIMR_Bit.TWTOIM=1;

    GPTM->CONTROL[0].GPTMSYNC=(1<<2) |0x3;

    while(1)
    {
        SysTick__vDelayUs(100000);
     /*   u32Blink++;
        if(u32Blink>=10)
        {
            (*psLeds[u32Led])->DATA_MASK[*enLeds[u32Led]]^=*enLeds[u32Led];
            u32Blink=0;
            if((*psLeds[u32Led])->DATA_MASK[*enLeds[u32Led]]==0)
            {
                u32Led++;
                if(u32Led>2)
                {
                    u32Led=0;
                }
            }
        }
*/
        u32Memory++;
        if(u32Memory>=3)
        {

            GPIO__vEnInterrupt(GPIO_enPORTF,(GPIO_nPIN)(enSW2Pin));
            u32Memory=0;
        }
    }
}


void GPIOF4_vISR(void)
{
    uint32_t u32ValueSW=psSW1->DATA_MASK[enSW1Pin];
    if(u32ValueSW !=0)
    {
        psLedRed->DATA_MASK[enLedRedPin]=0;
    }
    else
    {
        psLedRed->DATA_MASK[enLedRedPin]=enLedRedPin;
    }
}

void GPIOF0_vISR(void)
{
    uint32_t u32ValueSW=psSW2->DATA_MASK[enSW2Pin];
    u32Memory=0;
    GPIO__vDisInterrupt(GPIO_enPORTF,(GPIO_nPIN)(enSW2Pin));
    if(u32ValueSW !=0)
    {
        psLedRed->DATA_MASK[enLedBluePin]=0;
    }
    else
    {
        psLedRed->DATA_MASK[enLedBluePin]=enLedBluePin;

    }
}

void TIMER0A_vISR(void)
{
    GPTM->TIMERA[0].GPTMAICR_Bit.TATOCINT=1;
    psLedBlue->DATA_MASK[enLedBluePin]^=enLedBluePin;

}


void TIMER0B_vISR(void)
{
    GPTM->TIMERB[0].GPTMBICR_Bit.TBTOCINT=1;
    psLedRed->DATA_MASK[enLedRedPin]^=enLedRedPin;

}

void TIMER1_vISR(void)
{
    GPTM->TIMERW[1].GPTMWICR_Bit.TWTOCINT=1;
    psLedGreen->DATA_MASK[enLedGreenPin]^=enLedGreenPin;

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

    GPIO__vLock(GPIO_enPORTF, (GPIO_nPIN)(enSW2Pin|enSW1Pin|enLedGreenPin|enLedBluePin|enLedRedPin));
}
