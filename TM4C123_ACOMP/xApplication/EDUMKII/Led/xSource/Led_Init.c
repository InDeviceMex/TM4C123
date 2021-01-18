/**
 *
 * @file Led_Init.c
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
#include <xApplication/EDUMKII/Led/xHeader/Led_Init.h>
#include <xApplication/EDUMKII/Led/xHeader/Led_Enum.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/GPIO.h>
#include <xDriver_MCU/TIMER/TIMER.h>

void EDUMKII_Led_vInitDigital(EDUMKII_nLED enLedSelect)
{
    if((uint32_t)EDUMKII_enLED_RED == ((uint32_t)enLedSelect & (uint32_t)EDUMKII_enLED_RED))
    {
        GPIO__enSetDigitalConfig(EDUMKII_LED_RED_DIGITAL, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    }

    if((uint32_t)EDUMKII_enLED_GREEN == ((uint32_t)enLedSelect & (uint32_t)EDUMKII_enLED_GREEN))
    {
        GPIO__enSetDigitalConfig(EDUMKII_LED_GREEN_DIGITAL, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    }

    if((uint32_t)EDUMKII_enLED_BLUE == ((uint32_t)enLedSelect & (uint32_t)EDUMKII_enLED_BLUE))
    {
        GPIO__enSetDigitalConfig(EDUMKII_LED_BLUE_DIGITAL, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    }
}

void EDUMKII_Led_vInitPWM(EDUMKII_nLED enLedSelect)
{
    TIMER_EXTRAMODE_Typedef psExtraMode;
    volatile TIMER_MODE_Typedef psMode;
    volatile TIMER_nMODE enCurrentMode =TIMER_enMODE_UNDEF;

    psExtraMode.enWaitTrigger=TIMER_enWAIT_NOTRIGGER;
    psExtraMode.enUpdateInterval=TIMER_enUPDATE_INTERVAL_TIMEOUT;
    psExtraMode.enPWMInterrupt=TIMER_enPWM_INT_DIS;
    psExtraMode.enEventInterrupt=TIMER_enEVENT_INT_DIS;
    psExtraMode.enUpdateMatch=TIMER_enUPDATE_MATCH_TIMEOUT;
    psExtraMode.enStall=TIMER_enSTALL_FREEZE;
    psExtraMode.enRTCStall=TIMER_enRTC_STALL_FREEZE;
    psExtraMode.enADCTrigger=TIMER_enADC_TRIGGER_DIS;

    /*GREEN, RED, BLUE LED*/
    if((uint32_t)EDUMKII_enLED_RED == ((uint32_t)enLedSelect & (uint32_t)EDUMKII_enLED_RED))
    {
        GPIO__enSetDigitalConfig(EDUMKII_LED_RED,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL); /*Timer 1B*/
        TIMER__enSetExtraModeStruct(EDUMKII_LED_RED_TIMER,&psExtraMode);
        TIMER__enSetMode_ReloadMatch(EDUMKII_LED_RED_TIMER,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_NEGATIVE_DOWN,0u,10240U-1U,10240U-1U);
        TIMER__vSetEnable(EDUMKII_LED_RED_TIMER,TIMER_enENABLE_START);
    }
    if((uint32_t)EDUMKII_enLED_GREEN == ((uint32_t)enLedSelect & (uint32_t)EDUMKII_enLED_GREEN))
    {
        GPIO__enSetDigitalConfig(EDUMKII_LED_GREEN,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL); /*Timer 3B*/
        TIMER__enSetExtraModeStruct(EDUMKII_LED_GREEN_TIMER,&psExtraMode);
        TIMER__enSetMode_ReloadMatch(EDUMKII_LED_GREEN_TIMER,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_NEGATIVE_DOWN,0u,10240U-1U,10240U-1U);
        TIMER__vSetEnable(EDUMKII_LED_GREEN_TIMER,TIMER_enENABLE_START);
    }
    if((uint32_t)EDUMKII_enLED_BLUE== ((uint32_t)enLedSelect & (uint32_t)EDUMKII_enLED_BLUE))
    {
        GPIO__enSetDigitalConfig(EDUMKII_LED_BLUE,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL); /*WTimer 0A*/
        TIMER__enSetExtraModeStruct(EDUMKII_LED_BLUE_TIMER,&psExtraMode);
        TIMER__enSetMode_ReloadMatch(EDUMKII_LED_BLUE_TIMER,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_NEGATIVE_DOWN,0u,10240U-1U,10240U-1U);
        TIMER__vSetEnable(EDUMKII_LED_BLUE_TIMER,TIMER_enENABLE_START);
    }
}
