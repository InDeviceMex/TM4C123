

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
/*#include "UDMA.h"*/
#include "GPIO.h"
#include "TIMER.h"

/*Local functions*/
void MAIN_vInitGPIO(void);
void MAIN_vInitTIMER(void);
void MAIN_vRGBLedValue(uint8_t u8RedValue, uint8_t u8GreenValue, uint8_t u8BlueValue);
void MAIN_vRGBLedIntPorcentaje(uint8_t u8RedValue, uint8_t u8GreenValue, uint8_t u8BlueValue);
/*ISR Functions*/
void TIMER2W__vISR(void);


GPIO_nPIN enLedRedPin=GPIO_enPIN1;
GPIO_nPIN enLedBluePin=GPIO_enPIN2;
GPIO_nPIN enLedGreenPin=GPIO_enPIN3;

volatile uint32_t u32Update=0;
volatile uint32_t u32Counter=0;
volatile uint32_t u32Priority=0;

int main(void)
{

    __asm(" cpsie i");
    FPU__vInit();
    MPU__vInit();
    SCB__vInit();
    SYSEXC__vInit((SYSEXC_nINTERRUPT)(SYSEXC_enINVALID|SYSEXC_enDIV0|
            SYSEXC_enOVERFLOW|SYSEXC_enUNDERFLOW),SYSEXC_enPRI7);
    SYSCTL__enInit();/* system clock 80MHz*/
    SysTick__enInitUs(10,SCB_enSHPR0);
    EEPROM__enInit();
    MAIN_vInitGPIO();
    MAIN_vInitTIMER();

    while(1u)
    {
        /*SysTick__vDelayUs(100000u);*/
        if(1==u32Update)
        {
            u32Update=0;
            if(u32Priority==0)
            {
                MAIN_vRGBLedValue((u32Counter>>16)&0xFF,(u32Counter>>8)&0xFF,(u32Counter>>0)&0xFFu);
            }
            if(u32Priority==1)
            {
                MAIN_vRGBLedValue((u32Counter>>8)&0xFF,(u32Counter>>16)&0xFF,(u32Counter>>0)&0xFFu);
            }
            if(u32Priority==1)
            {
                MAIN_vRGBLedValue((u32Counter>>16)&0xFF,(u32Counter>>0)&0xFF,(u32Counter>>8)&0xFFu);
            }
            if(u32Priority==2)
            {
                MAIN_vRGBLedValue((u32Counter>>0)&0xFF,(u32Counter>>16)&0xFF,(u32Counter>>8)&0xFFu);
            }
            if(u32Priority==3)
            {
                MAIN_vRGBLedValue((u32Counter>>16)&0xFF,(u32Counter>>0)&0xFF,(u32Counter>>16)&0xFFu);
            }
            if(u32Priority==4)
            {
                MAIN_vRGBLedValue((u32Counter>>0)&0xFF,(u32Counter>>8)&0xFF,(u32Counter>>16)&0xFFu);
            }
        }
    }
}

void MAIN_vRGBLedValue(uint8_t u8RedValue, uint8_t u8GreenValue, uint8_t u8BlueValue)
{
    uint16_t u16RGBRedFinal=0;
    uint16_t u16RGBGreenFinal=0;
    uint16_t u16RGBBlueFinal=0;
    if(u8RedValue==0)
        u16RGBRedFinal=0xFF;
    else if(u8RedValue==0xFFu)
        u16RGBRedFinal=0x100;
    else
        u16RGBRedFinal=0xFF- u8RedValue;

    if(u8GreenValue==0)
        u16RGBGreenFinal=0xFF;
    else if(u8GreenValue==0xFFu)
        u16RGBGreenFinal=0x100;
    else
        u16RGBGreenFinal=0xFF- u8GreenValue;

    if(u8BlueValue==0)
        u16RGBBlueFinal=0xFF;
    else if(u8BlueValue==0xFFu)
        u16RGBBlueFinal=0x100;
    else
        u16RGBBlueFinal=0xFF- u8BlueValue;

    GPTM_UNION->TB[0].GPTMTnMATCHR=u16RGBRedFinal;/*RED*/
    GPTM_UNION->TA[1].GPTMTnMATCHR=u16RGBGreenFinal;/*GREEN*/
    GPTM_UNION->TB[1].GPTMTnMATCHR=u16RGBBlueFinal;/*BLUE*/
}

void MAIN_vRGBLedIntPorcentaje(uint8_t u8RedValue, uint8_t u8GreenValue, uint8_t u8BlueValue)
{
    uint32_t u32RGBRedPorcentaje=0;
    uint32_t u32RGBGreenPorcentaje=0;
    uint32_t u32RGBBluePorcentaje=0;
    uint32_t u32RGBRed=0;
    uint32_t u32RGBGreen=0;
    uint32_t u32RGBBlue=0;

    if(u8RedValue>100)
        u8RedValue=100;
    if(u8GreenValue>100)
        u8GreenValue=100;
    if(u8BlueValue>100)
        u8BlueValue=100;

    u32RGBRedPorcentaje=u8RedValue*0xFF;
    u32RGBRedPorcentaje/=100;

    u32RGBGreenPorcentaje=u8GreenValue*0xFF;
    u32RGBGreenPorcentaje/=100;

    u32RGBBluePorcentaje=u8BlueValue*0xFF;
    u32RGBBluePorcentaje/=100;

    if(u32RGBRedPorcentaje==0)
        u32RGBRed=0xFF;
    else if(u32RGBRedPorcentaje==0xFFu)
        u32RGBRed=0x100;
    else
        u32RGBRed=0xFF- u32RGBRedPorcentaje;

    if(u32RGBGreenPorcentaje==0)
        u32RGBGreen=0xFF;
    else if(u32RGBGreenPorcentaje==0xFFu)
        u32RGBGreen=0x100;
    else
        u32RGBGreen=0xFF- u32RGBGreenPorcentaje;

    if(u32RGBBluePorcentaje==0)
        u32RGBBlue=0xFF;
    else if(u32RGBBluePorcentaje==0xFFu)
        u32RGBBlue=0x100;
    else
        u32RGBBlue=0xFF- u32RGBBluePorcentaje;

    GPTM_UNION->TB[0].GPTMTnMATCHR=u32RGBRed;/*RED*/
    GPTM_UNION->TA[1].GPTMTnMATCHR=u32RGBGreen;/*GREEN*/
    GPTM_UNION->TB[1].GPTMTnMATCHR=u32RGBBlue;/*BLUE*/
}
void TIMER2W__vISR(void)
{
    static uint8_t u8Dir=0;
    u32Update=1;
    if(u8Dir==0){

        if(u32Counter==(0xFFFFFF-1))
        {
            u8Dir=1;
        }
        u32Counter++;
    }
    else
    {
        if(u32Counter==(1u))
        {
            u8Dir=0;
            if(u32Priority==4)
                u32Priority=0;
            else
                u32Priority++;
        }
        u32Counter--;
    }
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

    TIMER__enSetMode_Reload(TIMER_enT2W,TIMER_enMODE_PERIODIC_WIDE_DOWN,0,0xFFu);
    TIMER__enSetMode_ReloadMatch(TIMER_enT0B,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN,0,0xFF,0xFFu);
    TIMER__enSetMode_ReloadMatch(TIMER_enT1A,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN,0,0xFF,0xFFu);
    TIMER__enSetMode_ReloadMatch(TIMER_enT1B,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN,0,0xFF,0xFFu);


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

    /*GREEN, RED, BlUE LED*/
    GPIO__enSetDigitalConfig(GPIO_enT0CCP1_F1,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enT1CCP0_F2,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enT1CCP1_F3,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

}

