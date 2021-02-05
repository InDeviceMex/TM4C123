/**
 *
 * @file Common_Timer.c
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
#include <xApplication/EDUMKII/Common/xHeader/Common_Timer.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/TIMER/TIMER.h>



void EDUMKII_Common_vTimerInit(void)
{
    TIMER_EXTRAMODE_Typedef psExtraMode;
    static uint32_t u32Init = 0UL;
    if(0UL == u32Init)
    {
        psExtraMode.enWaitTrigger = TIMER_enWAIT_NOTRIGGER;
        psExtraMode.enPWMInterrupt = TIMER_enPWM_INT_DIS;
        psExtraMode.enEventInterrupt = TIMER_enEVENT_INT_DIS;
        psExtraMode.enUpdateMatch = TIMER_enUPDATE_MATCH_TIMEOUT;
        psExtraMode.enStall = TIMER_enSTALL_FREEZE;
        psExtraMode.enRTCStall = TIMER_enRTC_STALL_FREEZE;
        psExtraMode.enADCTrigger = TIMER_enADC_TRIGGER_EN;

        TIMER__enSetExtraModeStruct(TIMER_enT5A, &psExtraMode);
        TIMER__enSetMode_Reload(TIMER_enT5A, TIMER_enMODE_PERIODIC_INDIVIDUAL_UP, 800000U-1U);
        TIMER__vSetEnable(TIMER_enT5A, TIMER_enENABLE_START);
        u32Init = 1UL;
    }
}


