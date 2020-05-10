

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

/*Local functions*/
void MAIN_vInitGPIO(void);
void MAIN_vInitTIMER(void);

/*ISR Functions*/
void TIMER2W__vISR(void);


GPIO_nPIN enLedRedPin=GPIO_enPIN1;
GPIO_nPIN enLedBluePin=GPIO_enPIN2;
GPIO_nPIN enLedGreenPin=GPIO_enPIN3;



int main(void)
{

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
    MAIN_vInitTIMER();

    while(1)
    {
        SysTick__vDelayUs(100000);
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

    TIMER__enSetMode_Reload(TIMER_enT2W,TIMER_enMODE_PERIODIC_WIDE_DOWN,0,0xFFFFF);
    TIMER__enSetMode_ReloadMatch(TIMER_enT0B,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN,0,0xF,0xF);
    TIMER__enSetMode_ReloadMatch(TIMER_enT1A,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN,0,0x3F,0x3F);
    TIMER__enSetMode_ReloadMatch(TIMER_enT1B,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN,0,0xFF,0xFF);
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

    //GREEN, RED, BlUE LED
    GPIO__enSetDigitalConfig(GPIO_enT0CCP1_F1,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enT1CCP0_F2,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enT1CCP1_F3,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

}



void TIMER2W__vISR(void)
{
    static uint32_t u32Value0B= (0xF+1);
    static uint32_t u32Value1A= (0x3F+1);
    static uint32_t u32Value1B= (0xFF+1);

    if(u32Value0B==(0))
    {
        GPTM_BITBANDING_UNION->TB[0].GPTMTnCTL_Bit.TnEN=0;
        GPTM_BITBANDING_UNION->TB[0].GPTMTnCTL_Bit.TnPWML ^=1;
        GPTM_BITBANDING_UNION->TB[0].GPTMTnCTL_Bit.TnEN=1;
        u32Value0B=(0xF+1);
    }

    if(u32Value1A==(0))
    {
        GPTM_BITBANDING_UNION->TA[1].GPTMTnCTL_Bit.TnEN=0;
        GPTM_BITBANDING_UNION->TA[1].GPTMTnCTL_Bit.TnPWML ^=1;
        GPTM_BITBANDING_UNION->TA[1].GPTMTnCTL_Bit.TnEN=1;
        u32Value0B=(0x3F+1);
    }

    if(u32Value1B==(0))
    {
        GPTM_BITBANDING_UNION->TB[1].GPTMTnCTL_Bit.TnEN=0;
        GPTM_BITBANDING_UNION->TB[1].GPTMTnCTL_Bit.TnPWML ^=1;
        GPTM_BITBANDING_UNION->TB[1].GPTMTnCTL_Bit.TnEN=1;
        u32Value0B=(0xFF+1);
    }
    u32Value0B--;
    u32Value1A--;
    u32Value1B--;

    GPTM_UNION->TA[1].GPTMTnMATCHR=((u32Value1A))&0xFF;
    GPTM_UNION->TB[1].GPTMTnMATCHR=((u32Value1B))&0xFF;
    GPTM_UNION->TB[0].GPTMTnMATCHR=((u32Value0B))&0xFF;
}
