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

#include <xUtils/Standard/Standard.h>
#include <xApplication/ServoMotor_SG90/xHeader/ServoMotor_SG90_Init.h>
#include <xDriver_MCU/SYSCTL/SYSCTL.h>


#define SERVO_FREC (50U) /*20 ms*/
#define SERVO_MAXFREC (1111U) /*900 us*/
#define SERVO_MINFREC (500U) /*2000 us*/

ServoMoto_SG90_nSTATUS ServoMotor_SG90__enInit(ServoMoto_SG90_Typedef* psServoMotor, TIMER_nMODULE enTimerModuleParam, GPIO_nDIGITAL_FUNCTION enGpioDigitalParam, uint32_t u32MinTime, uint32_t u32MaxTime)
{
    ServoMoto_SG90_nSTATUS enServoStatus = ServoMoto_SG90_enERROR;
    GPIO_nSTATUS enGPIOStatus = GPIO_enSTATUS_ERROR;
    TIMER_nSTATUS enTIMERStatus = TIMER_enSTATUS_ERROR;
    TIMER_EXTRAMODE_Typedef psExtraMode;
    uint32_t u32SysFreq = 0U;
    uint32_t u32ServoFreq = 0U;
    uint32_t u32ServoMaxPulse = 0U;
    uint32_t u32ServoMinPulse = 0U;
    uint32_t u32ServoMinCount = 0U;
    uint32_t u32DegreeCountVar = 0U;
    uint32_t u32Reg = 0U;
    uint32_t u32MinFrec = 1000000U;
    uint32_t u32MaxFrec = 1000000U;
    float32_t fDegreeCountVar = 0.0f;

    if((0UL != psServoMotor) && (0UL != u32MinTime) && (0UL != u32MaxTime))
    {
        if(u32MinTime>u32MaxTime)
        {
            u32Reg = u32MinTime;
            u32MinTime = u32MaxTime;
            u32MaxTime = u32Reg;
        }
        u32MaxFrec /= u32MinTime;
        u32MinFrec /= u32MaxTime;
        psServoMotor->enGpioDigital = enGpioDigitalParam;
        psServoMotor->enTimerModule = enTimerModuleParam;

        u32SysFreq = SYSCTL__u32GetClock();
        u32ServoFreq = u32SysFreq/SERVO_FREC;
        u32ServoMaxPulse = u32SysFreq/u32MaxFrec;
        u32ServoMinPulse = u32SysFreq/u32MinFrec;
        u32ServoMinCount = u32ServoFreq-u32ServoMaxPulse;
        psServoMotor->u32MinCount = u32ServoMinCount;
        psServoMotor->u32DeltaCount = u32ServoMinPulse - u32ServoMaxPulse;
        psServoMotor->u32DegreeCount = psServoMotor->u32DeltaCount;
        u32DegreeCountVar = psServoMotor->u32DeltaCount;
        fDegreeCountVar= (float32_t) u32DegreeCountVar;
        psServoMotor->fDegreeCount = fDegreeCountVar;
        psServoMotor->u32DegreeCount /= 180U;
        psServoMotor->fDegreeCount /= 180.0f;

        enGPIOStatus = GPIO__enSetDigitalConfig(enGpioDigitalParam, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
        if(GPIO_enSTATUS_OK == enGPIOStatus)
        {
            psExtraMode.enWaitTrigger = TIMER_enWAIT_NOTRIGGER;
            psExtraMode.enUpdateInterval = TIMER_enUPDATE_INTERVAL_TIMEOUT;
            psExtraMode.enPWMInterrupt = TIMER_enPWM_INT_DIS;
            psExtraMode.enEventInterrupt = TIMER_enEVENT_INT_DIS;
            psExtraMode.enUpdateMatch = TIMER_enUPDATE_MATCH_TIMEOUT;
            psExtraMode.enStall = TIMER_enSTALL_FREEZE;
            psExtraMode.enRTCStall = TIMER_enRTC_STALL_FREEZE;
            psExtraMode.enADCTrigger = TIMER_enADC_TRIGGER_DIS;

            enTIMERStatus = TIMER__enSetExtraModeStruct(enTimerModuleParam, &psExtraMode);
            if(TIMER_enSTATUS_OK == enTIMERStatus)
            {
                enTIMERStatus = TIMER__enSetMode_ReloadMatch(enTimerModuleParam, TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN,(uint64_t) u32ServoFreq,(uint64_t) u32ServoMinCount);
                if(TIMER_enSTATUS_OK == enTIMERStatus)
                {
                    enServoStatus = ServoMoto_SG90_enOK;
                }
            }
        }
    }
    return enServoStatus;
}



