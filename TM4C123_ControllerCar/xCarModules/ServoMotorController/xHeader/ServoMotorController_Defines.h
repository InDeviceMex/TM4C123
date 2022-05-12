/**
 *
 * @file ServoMotorController_Defines.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 16 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XCARMODULES_SERVOMOTORCONTROLLER_XHEADER_SERVOMOTORCONTROLLER_DEFINES_H_
#define XCARMODULES_SERVOMOTORCONTROLLER_XHEADER_SERVOMOTORCONTROLLER_DEFINES_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/xDriver_MCU.h>

/*SERVO MOTOR*/
#define SERVO_MOTOR_ENABLE_NVIC_VECTOR (NVIC_enSTIR_PWM0GEN2)
#define SERVO_MOTOR_ENABLE_SYS_VECTOR (SCB_enVECISR_PWM0GEN2)
#define SERVO_MOTOR_ENABLE_SYS_MODULE (SYSCTL_enPWM0)
#define SERVO_MOTOR_ENABLE_FUNCTION (GPIO_enM0PWM4)
#define SERVO_MOTOR_ENABLE_PORT (GPIO_enPORT_E)
#define SERVO_MOTOR_ENABLE_PIN (GPIO_enPIN_4)
#define SERVO_MOTOR_ENABLE_MODULE (PWM_enMODULE_0)
#define SERVO_MOTOR_ENABLE_OUTPUT (PWM_enOUTPUT_A)
#define SERVO_MOTOR_ENABLE_GENERATOR (PWM_enGEN_2)
#define SERVO_MOTOR_ENABLE_GENMASK (PWM_enGENMASK_2)

#define SERVO_MOTOR_LOAD (50000UL)
#define SERVO_MOTOR_INACTIVE (2500UL)
#define SERVO_MOTOR_ACTIVE (2500UL)
#define SERVO_MOTOR_STEP_PWM (25UL)
#define SERVO_MOTOR_STEP_ANGLE (14UL)

/*SMOOTH SERVO MOTOR HANDLE*/
#define SERVO_MOTOR_SMOOTH_TIMER (TIMER_enT4W)
#define SERVO_MOTOR_SMOOTH_TIMER_MODULE (TIMER_enMODULE_NUM_4)
#define SERVO_MOTOR_SMOOTH_PERIOD (50UL) /*Servo Control frequency in Hz*/


typedef enum
{
    SERVO_enUPDATETYPE_PWM = FALSE,
    SERVO_enUPDATETYPE_DEGREE = TRUE,
}SERVO_nUPDATETYPE;


#endif /* XCARMODULES_SERVOMOTORCONTROLLER_XHEADER_SERVOMOTORCONTROLLER_DEFINES_H_ */
