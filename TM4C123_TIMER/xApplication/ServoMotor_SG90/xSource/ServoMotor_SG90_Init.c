/**
 *
 * @file ServoMotor_SG90_Init.c
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
 * @verbatim 6 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <stdint.h>
#include <xApplication/ServoMotor_SG90/xHeader/ServoMotor_SG90_Init.h>
#include <xDriver_MCU/SYSCTL/SYSCTL.h>


#define SERVO_FREC (50u)
#define SERVO_MAXFREC (1000u)

ServoMoto_SG90_nSTATUS ServoMotor_SG90__enInit(ServoMoto_SG90_Typedef* psServoMotor,TIMER_nMODULE enTimerModule,GPIO_nDIGITAL_FUNCTION enGpioDigital)
{
    ServoMoto_SG90_nSTATUS enServoStatus= ServoMoto_SG90_enERROR;
    GPIO_nSTATUS enGPIOStatus= GPIO_enSTATUS_ERROR;
    TIMER_nSTATUS enTIMERStatus= TIMER_enERROR;
    TIMER_EXTRAMODE_Typedef psExtraMode;
    uint32_t u32SysFreq=0u;
    uint32_t u32ServoFreq=0u;
    uint32_t u32ServoMaxPulse=0u;
    uint32_t u32ServoMinCount=0u;
    volatile TIMER_MODE_Typedef psMode;
    volatile TIMER_nMODE enCurrentMode =TIMER_enMODE_UNDEF;

    if(0u != psServoMotor)
    {
        psServoMotor->enGpioDigital=enGpioDigital;
        psServoMotor->enTimerModule=enTimerModule;

        u32SysFreq= SYSCTL__u32GetClock();
        u32ServoFreq=u32SysFreq/SERVO_FREC;
        u32ServoMaxPulse = u32SysFreq/SERVO_MAXFREC;
        u32ServoMinCount = u32ServoFreq-u32ServoMaxPulse;
        psServoMotor->u32MinCount=u32ServoMinCount;
        psServoMotor->u32DeltaCount=u32ServoMaxPulse;

        enGPIOStatus = GPIO__enSetDigitalConfig(enGpioDigital,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
        if(GPIO_enSTATUS_OK == enGPIOStatus)
        {
            psExtraMode.enWaitTrigger=TIMER_enWAIT_NOTRIGGER;
            psExtraMode.enUpdateInterval=TIMER_enUPDATE_INTERVAL_TIMEOUT;
            psExtraMode.enPWMInterrupt=TIMER_enPWM_INT_DIS;
            psExtraMode.enEventInterrupt=TIMER_enEVENT_INT_DIS;
            psExtraMode.enUpdateMatch=TIMER_enUPDATE_MATCH_TIMEOUT;
            psExtraMode.enStall=TIMER_enSTALL_FREEZE;
            psExtraMode.enRTCStall=TIMER_enRTC_STALL_FREEZE;
            psExtraMode.enADCTrigger=TIMER_enADC_TRIGGER_DIS;

            enTIMERStatus = TIMER__enSetExtraModeStruct(enTimerModule,&psExtraMode);
            if(TIMER_enOK == enTIMERStatus)
            {
                enTIMERStatus = TIMER__enSetMode_ReloadMatch(enTimerModule,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN,0u,(uint64_t)u32ServoFreq,(uint64_t)u32ServoMinCount);
                if(TIMER_enOK == enTIMERStatus)
                {
                    enServoStatus=ServoMoto_SG90_enOK;
                }
            }
        }
    }
    return enServoStatus;
}



