

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
void TIMER2W__vISR(void);
void MAIN_vInitGPIO(void);
void MAIN_vInitTIMER(void);

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

    MAIN_vInitTIMER();
    u32Memory=0;
    u32Blink=0;

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


void MAIN_vInitTIMER(void)
{


    TIMER_EXTRAMODE_Typedef psExtraMode;
    volatile TIMER_MODE_Typedef psMode;
    volatile TIMER_nMODE enCurrentMode =TIMER_enMODE_UNDEF;

    TIMER__vInit();

    TIMER__vEnInterruptMODULE(TIMER_enT2W,TIMER_enPRI7);
    TIMER__vRegisterISR(TIMER2W__vISR,TIMER_enT2W,TIMER_enINTERRUPT_TIMEOUT);


    psExtraMode.enWaitTrigger=TIMER_enWAIT_NOTRIGGER;
    psExtraMode.enUpdateInterval=TIMER_enUPDATE_INTERVAL_TIMEOUT;
    psExtraMode.enPWMInterrupt=TIMER_enPWM_INT_DIS;
    psExtraMode.enEventInterrupt=TIMER_enEVENT_INT_DIS;
    psExtraMode.enUpdateMatch=TIMER_enUPDATE_MATCH_TIMEOUT;
    psExtraMode.enStall=TIMER_enSTALL_FREEZE;
    psExtraMode.enRTCStall=TIMER_enRTC_STALL_FREEZE;
    psExtraMode.enADCTrigger=TIMER_enADC_TRIGGER_DIS;

    TIMER__enSetExtraModeStruct(TIMER_enT2W,&psExtraMode);
    TIMER__enSetExtraModeStruct(TIMER_enT0B,&psExtraMode);
    TIMER__enSetExtraModeStruct(TIMER_enT1A,&psExtraMode);
    TIMER__enSetExtraModeStruct(TIMER_enT1B,&psExtraMode);
    TIMER__enSetExtraModeStruct(TIMER_enT3A,&psExtraMode);

    TIMER__enSetMode_Reload(TIMER_enT2W,TIMER_enMODE_PERIODIC_WIDE_DOWN,0,0xFFFFF);
    TIMER__enSetMode_ReloadMatch(TIMER_enT0B,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN,0,0xF,0xF);
    TIMER__enSetMode_ReloadMatch(TIMER_enT1A,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN,0,0xF,0xF);
    TIMER__enSetMode_ReloadMatch(TIMER_enT1B,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN,0,0xF,0xF);
    TIMER__enSetMode_Reload(TIMER_enWT3B,TIMER_enMODE_PERIODIC_INDIVIDUAL_UP,0,0x554433221100);


    TIMER__vSetEnable(TIMER_enT2W,TIMER_enENABLE_START);
    TIMER__vSetEnable(TIMER_enT0B,TIMER_enENABLE_START);
    TIMER__vSetEnable(TIMER_enT1A,TIMER_enENABLE_START);
    TIMER__vSetEnable(TIMER_enT1B,TIMER_enENABLE_START);

    TIMER__vEnInterrupt(TIMER_enT2W,(TIMER_nINT)(TIMER_enINT_TIMEOUT));
    TIMER__vSetSyncronize((TIMER_nSYNC)(TIMER_enSYNC_T2W|TIMER_enSYNC_T0B|TIMER_enSYNC_T1A|TIMER_enSYNC_T1B));

}

void MAIN_vInitGPIO(void)
{
    GPIO__vInit();
    GPIO__vRegisterISR(GPIOF0_vISR,GPIO_enPORTF,enSW2Pin);
    GPIO__vRegisterISR(GPIOF4_vISR,GPIO_enPORTF,enSW1Pin);
    GPIO__vEnInterruptMODULE(GPIO_enPORTF,GPIO_enPRI7);

    //GREEN, RED, BlUE LED
    GPIO__enSetDigitalConfig(GPIO_enGPIOF1,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF2,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF3,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    //SW1 SW0
    GPIO__enSetDigitalConfig(GPIO_enGPIOF0,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF4,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);

    GPIO__vClearInterrupt(GPIO_enPORTF,(GPIO_nPIN)(enSW2Pin|enSW1Pin));
    GPIO__vEnInterruptConfig(GPIO_enPORTF,(GPIO_nPIN)(enSW1Pin|enSW2Pin),GPIO_enINT_CONFIG_EDGE_BOTH);

    GPIO__vSetDigitalFunction(GPIO_enT0CCP1_F1);
    GPIO__vSetDigitalFunction(GPIO_enT1CCP0_F2);
    GPIO__vSetDigitalFunction(GPIO_enT1CCP1_F3);
    GPIO__vLock(GPIO_enPORTF, (GPIO_nPIN)(enSW2Pin|enSW1Pin|enLedGreenPin|enLedBluePin|enLedRedPin));
}


void TIMER2W__vISR(void)
{
    static uint32_t u32Value0B= (16);
    static uint32_t u32Value1A= (16);
    static uint32_t u32Value1B= (16);

    if(u32Value0B==(0))
    {
        GPTM_BITBANDING_UNION->TB[0].GPTMTnCTL_Bit.TnEN=0;
        GPTM_BITBANDING_UNION->TB[0].GPTMTnCTL_Bit.TnPWML ^=1;
        GPTM_BITBANDING_UNION->TB[0].GPTMTnCTL_Bit.TnEN=1;
        u32Value0B=(16)-1;

        if(u32Value1B==(0))
        {
            GPTM_BITBANDING_UNION->TB[1].GPTMTnCTL_Bit.TnEN=0;
            GPTM_BITBANDING_UNION->TB[1].GPTMTnCTL_Bit.TnPWML^=1;
            GPTM_BITBANDING_UNION->TB[1].GPTMTnCTL_Bit.TnEN=1;
            u32Value1B=(16)-1;

            if(u32Value1A==(0))
            {
                GPTM_BITBANDING_UNION->TA[1].GPTMTnCTL_Bit.TnEN =0;
                GPTM_BITBANDING_UNION->TA[1].GPTMTnCTL_Bit.TnPWML^=1;
                GPTM_BITBANDING_UNION->TA[1].GPTMTnCTL_Bit.TnEN=1;
                u32Value1B=(16)-1;
            }
            else
            {
                u32Value1A--;
            }
            GPTM_UNION->TA[1].GPTMTnPMR=((u32Value1A)>>16)&0xFF;
            GPTM_UNION->TA[1].GPTMTnMATCHR=((u32Value1A))&0xFFFF;

        }
        else
        {
            u32Value1B--;
        }
        GPTM_UNION->TB[1].GPTMTnPMR=((u32Value1B)>>16)&0xFF;
        GPTM_UNION->TB[1].GPTMTnMATCHR=((u32Value1B))&0xFFFF;

    }
    else
    {
        u32Value0B--;
    }
    GPTM_UNION->TB[0].GPTMTnPMR=((u32Value0B)>>16)&0xFF;
    GPTM_UNION->TB[0].GPTMTnMATCHR=((u32Value0B))&0xFFFF;


}
