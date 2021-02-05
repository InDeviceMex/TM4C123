/**
 *
 * @file ServoMotor_SG90_Enable.c
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

#include <xApplication/ServoMotor_SG90/xHeader/ServoMotor_SG90_Enable.h>
#include <xDriver_MCU/TIMER/TIMER.h>

ServoMoto_SG90_nSTATUS ServoMotor_SG90__enEnable(const ServoMoto_SG90_Typedef* const psServoMotor)
{
    ServoMoto_SG90_nSTATUS enServoStatus= ServoMoto_SG90_enERROR;
    TIMER_nMODULE enTimerModuleVar= TIMER_enMODULE_UNDEF;
    if(0UL != psServoMotor)
    {

        enTimerModuleVar= psServoMotor->enTimerModule;
        TIMER__vSetEnable(enTimerModuleVar, TIMER_enENABLE_START);
        enServoStatus=ServoMoto_SG90_enOK;

    }
    return enServoStatus;
}

ServoMoto_SG90_nSTATUS ServoMotor_SG90__enDisable(const ServoMoto_SG90_Typedef* const psServoMotor)
{
    ServoMoto_SG90_nSTATUS enServoStatus= ServoMoto_SG90_enERROR;
    TIMER_nMODULE enTimerModuleVar= TIMER_enMODULE_UNDEF;
    if(0UL != psServoMotor)
    {

      enTimerModuleVar= psServoMotor->enTimerModule;
        TIMER__vSetEnable(enTimerModuleVar, TIMER_enENABLE_STOP);
        enServoStatus=ServoMoto_SG90_enOK;

    }
    return enServoStatus;
}
