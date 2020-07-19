

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

/*Include not allowed, this use directly the Peripheral*/

#include "stdlib.h"


int main(void);
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
    uint32_t u32BlueValue=0u;
    uint32_t u32GreenValue=0u;
    uint32_t u32RedValue=0u;
    __asm(" cpsie i");
    FPU__vInit();
    MPU__vInit();
    SCB__vInit();
    SYSEXC__vInit((SYSEXC_nINTERRUPT)(SYSEXC_enINVALID|SYSEXC_enDIV0|
            SYSEXC_enOVERFLOW|SYSEXC_enUNDERFLOW),SYSEXC_enPRI7);
    SYSCTL__enInit();/* system clock 80MHz*/
    SysTick__enInitUs(10.0f,SCB_enSHPR0);
    EEPROM__enInit();
    MAIN_vInitGPIO();
    MAIN_vInitTIMER();

    while(1u)
    {
        /*SysTick__vDelayUs(100000u);*/
        if(1u==u32Update)
        {
            u32Update=0u;
            if(u32Priority==0u)
            {
                u32RedValue=(u32Counter>>16u);
                u32RedValue&=0xFFu;
                u32GreenValue=(u32Counter>>8u);
                u32GreenValue&=0xFFu;
                u32BlueValue=(u32Counter>>0u);
                u32BlueValue&=0xFFu;
                MAIN_vRGBLedValue((uint8_t)u32RedValue,(uint8_t)u32GreenValue,(uint8_t)u32BlueValue);
            }
            if(u32Priority==1u)
            {
                u32RedValue=(u32Counter>>8u);
                u32RedValue&=0xFFu;
                u32GreenValue=(u32Counter>>16u);
                u32GreenValue&=0xFFu;
                u32BlueValue=(u32Counter>>0u);
                u32BlueValue&=0xFFu;
                MAIN_vRGBLedValue((uint8_t)u32RedValue,(uint8_t)u32GreenValue,(uint8_t)u32BlueValue);
            }
            if(u32Priority==1u)
            {
                u32RedValue=(u32Counter>>16u);
                u32RedValue&=0xFFu;
                u32GreenValue=(u32Counter>>0u);
                u32GreenValue&=0xFFu;
                u32BlueValue=(u32Counter>>8u);
                u32BlueValue&=0xFFu;
                MAIN_vRGBLedValue((uint8_t)u32RedValue,(uint8_t)u32GreenValue,(uint8_t)u32BlueValue);
            }
            if(u32Priority==2u)
            {
                u32RedValue=(u32Counter>>0u);
                u32RedValue&=0xFFu;
                u32GreenValue=(u32Counter>>16u);
                u32GreenValue&=0xFFu;
                u32BlueValue=(u32Counter>>8u);
                u32BlueValue&=0xFFu;
                MAIN_vRGBLedValue((uint8_t)u32RedValue,(uint8_t)u32GreenValue,(uint8_t)u32BlueValue);
            }
            if(u32Priority==3u)
            {
                u32RedValue=(u32Counter>>16u);
                u32RedValue&=0xFFu;
                u32GreenValue=(u32Counter>>0u);
                u32GreenValue&=0xFFu;
                u32BlueValue=(u32Counter>>16u);
                u32BlueValue&=0xFFu;
                MAIN_vRGBLedValue((uint8_t)u32RedValue,(uint8_t)u32GreenValue,(uint8_t)u32BlueValue);
            }
            if(u32Priority==4u)
            {
                u32RedValue=(u32Counter>>0u);
                u32RedValue&=0xFFu;
                u32GreenValue=(u32Counter>>8u);
                u32GreenValue&=0xFFu;
                u32BlueValue=(u32Counter>>16u);
                u32BlueValue&=0xFFu;
                MAIN_vRGBLedValue((uint8_t)u32RedValue,(uint8_t)u32GreenValue,(uint8_t)u32BlueValue);
            }
        }
    }
}

void MAIN_vRGBLedValue(uint8_t u8RedValue, uint8_t u8GreenValue, uint8_t u8BlueValue)
{
    uint16_t u16RGBRedFinal=0;
    uint16_t u16RGBGreenFinal=0;
    uint16_t u16RGBBlueFinal=0;
    if(u8RedValue==0u)
    {
        u16RGBRedFinal=0xFFu;
    }
    else if(u8RedValue==0xFFu)
    {
        u16RGBRedFinal=0x100u;
    }
    else
    {
        u16RGBRedFinal=0xFFu- (uint16_t)u8RedValue;
    }

    if(u8GreenValue==0u)
    {
        u16RGBGreenFinal=0xFFu;
    }
    else if(u8GreenValue==0xFFu)
    {
        u16RGBGreenFinal=0x100u;
    }
    else
    {
        u16RGBGreenFinal=0xFFu- (uint16_t)u8GreenValue;
    }

    if(u8BlueValue==0u)
    {
        u16RGBBlueFinal=0xFFu;
    }
    else if(u8BlueValue==0xFFu)
    {
        u16RGBBlueFinal=0x100u;
    }
    else
    {
        u16RGBBlueFinal=0xFFu-(uint16_t) u8BlueValue;
    }

    TIMER__vSetMatch(TIMER_enT0B,(uint64_t) u16RGBRedFinal);
    TIMER__vSetMatch(TIMER_enT1A,(uint64_t) u16RGBGreenFinal);
    TIMER__vSetMatch(TIMER_enT1B,(uint64_t) u16RGBBlueFinal);
}

void MAIN_vRGBLedIntPorcentaje(uint8_t u8RedValue, uint8_t u8GreenValue, uint8_t u8BlueValue)
{
    uint32_t u32RGBRedPorcentaje=0;
    uint32_t u32RGBGreenPorcentaje=0;
    uint32_t u32RGBBluePorcentaje=0;
    uint32_t u32RGBRed=0;
    uint32_t u32RGBGreen=0;
    uint32_t u32RGBBlue=0;

    if(u8RedValue>100u)
    {
        u8RedValue=100u;
    }
    else{}
    if(u8GreenValue>100u)
    {
        u8GreenValue=100u;
    }
    else{}
    if(u8BlueValue>100u)
    {
        u8BlueValue=100u;
    }
    else{}

    u32RGBRedPorcentaje=(uint32_t)u8RedValue*0xFFu;
    u32RGBRedPorcentaje/=100u;

    u32RGBGreenPorcentaje=(uint32_t)u8GreenValue*0xFFu;
    u32RGBGreenPorcentaje/=100u;

    u32RGBBluePorcentaje=(uint32_t)u8BlueValue*0xFFu;
    u32RGBBluePorcentaje/=100u;

    if(u32RGBRedPorcentaje==0u)
    {
        u32RGBRed=0xFFu;
    }
    else if(u32RGBRedPorcentaje==0xFFu)
    {
        u32RGBRed=0x100u;
    }
    else
    {
        u32RGBRed=0xFFu- u32RGBRedPorcentaje;
    }

    if(u32RGBGreenPorcentaje==0u)
    {
        u32RGBGreen=0xFFu;
    }
    else if(u32RGBGreenPorcentaje==0xFFu)
    {
        u32RGBGreen=0x100u;
    }
    else
    {
        u32RGBGreen=0xFFu- u32RGBGreenPorcentaje;
    }

    if(u32RGBBluePorcentaje==0u)
    {
        u32RGBBlue=0xFFu;
    }
    else if(u32RGBBluePorcentaje==0xFFu)
    {
        u32RGBBlue=0x100u;
    }
    else
    {
        u32RGBBlue=0xFFu- u32RGBBluePorcentaje;
    }

    TIMER__vSetMatch(TIMER_enT0B,(uint64_t) u32RGBRed);
    TIMER__vSetMatch(TIMER_enT1A,(uint64_t) u32RGBGreen);
    TIMER__vSetMatch(TIMER_enT1B,(uint64_t) u32RGBBlue);
}
void TIMER2W__vISR(void)
{
    static uint8_t u8Dir=0;
    u32Update=1u;
    if(u8Dir==0u){

        if(u32Counter==(0xFFFFFFu-1u))
        {
            u8Dir=1u;
        }
        else{}
        u32Counter++;
    }
    else
    {
        if(u32Counter==(1u))
        {
            u8Dir=0u;
            if(u32Priority==4u)
            {
                u32Priority=0u;
            }
            else
            {
                u32Priority++;
            }
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
    TIMER__vRegisterISR(&TIMER2W__vISR,TIMER_enT2W,TIMER_enINTERRUPT_TIMEOUT);


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

    TIMER__enSetMode_Reload(TIMER_enT2W,TIMER_enMODE_PERIODIC_WIDE_DOWN,0u,0xFFu);
    TIMER__enSetMode_ReloadMatch(TIMER_enT0B,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN,0u,0xFFu,0xFFu);
    TIMER__enSetMode_ReloadMatch(TIMER_enT1A,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN,0u,0xFFu,0xFFu);
    TIMER__enSetMode_ReloadMatch(TIMER_enT1B,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN,0u,0xFFu,0xFFu);


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
