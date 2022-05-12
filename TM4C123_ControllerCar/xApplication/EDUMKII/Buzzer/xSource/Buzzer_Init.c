/**
 *
 * @file Buzzer_Init.c
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
#include <xApplication/EDUMKII/Buzzer/xHeader/Buzzer_Init.h>
#include <xApplication/EDUMKII/Buzzer/xHeader/Buzzer_Enum.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/GPIO.h>
#include <xDriver_MCU/TIMER/TIMER.h>

void EDUMKII_Buzzer_vInit(void)
{
    TIMER_EXTRAMODE_Typedef pstExtraMode;

    pstExtraMode.enWaitTrigger = TIMER_enWAIT_NOTRIGGER;
    pstExtraMode.enUpdateInterval = TIMER_enUPDATE_INTERVAL_TIMEOUT;
    pstExtraMode.enPWMInterrupt = TIMER_enPWM_INT_DIS;
    pstExtraMode.enEventInterrupt = TIMER_enEVENT_INT_DIS;
    pstExtraMode.enUpdateMatch = TIMER_enUPDATE_MATCH_TIMEOUT;
    pstExtraMode.enStall = TIMER_enSTALL_FREEZE;
    pstExtraMode.enRTCStall = TIMER_enRTC_STALL_FREEZE;
    pstExtraMode.enADCTrigger = TIMER_enADC_TRIGGER_DIS;

    GPIO__enSetDigitalConfig(EDUMKII_BUZZER, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL); /*Timer 1A*/
    TIMER__enSetExtraModeStruct(EDUMKII_BUZZER_TIMER, &pstExtraMode);
    TIMER__enSetMode_ReloadMatch(EDUMKII_BUZZER_TIMER, TIMER_enMODE_PWM_INDIVIDUAL_HIGH_NEGATIVE_DOWN, 10240U-1U, 10240U-1U);
    TIMER__vSetEnable(EDUMKII_BUZZER_TIMER, TIMER_enENABLE_START);
}
