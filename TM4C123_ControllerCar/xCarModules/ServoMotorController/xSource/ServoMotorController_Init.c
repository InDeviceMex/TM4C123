/**
 *
 * @file ServoMotorController_Init.c
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
 * @verbatim 18 ene. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 ene. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xCarModules/ServoMotorController/xHeader/ServoMotorController_Init.h>

#include <xCarModules/ServoMotorController/xHeader/ServoMotorController_SmoothChange.h>
#include <xDriver_MCU/xDriver_MCU.h>
#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void ServoMotorController__vInit(void)
{
    uint32_t u32CompareValue = 0UL;
    void (*IRQReg) (void) = (void (*) (void)) 0UL;

    SYSCTL__vSetReady(SERVO_MOTOR_ENABLE_SYS_MODULE);
    GPIO__vSetReady(SERVO_MOTOR_ENABLE_PORT);

    /*SERVO MOTOR*/
    GPIO__enSetDigitalConfig(SERVO_MOTOR_ENABLE_FUNCTION, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    PWM_Generator__vSetLoad(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, SERVO_MOTOR_LOAD - 1UL);
    PWM_Generator__vSetDirection(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, PWM_enDIRECTION_DOWN);
    PWM_Generator__vSetLoadUpdate(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, PWM_enGENERATOR_UPDATE_LOCAL);
    PWM_Generator__vSetStall(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, PWM_enSTALL_CONTINUE);

    u32CompareValue = SERVO_MOTOR_LOAD;
    u32CompareValue -= SERVO_MOTOR_INACTIVE;
    u32CompareValue -= (SERVO_MOTOR_STEP_PWM * 50U);

    ServoMotorController__vSetCurrentPWMValue(50U);
    ServoMotorController__vSetNewPWMValue(50U);

    IRQReg = ServoMotorController__pvfGetIRQFunction();
    SCB__vRegisterIRQVectorHandler(IRQReg, (void(**)(void)) 0UL, SERVO_MOTOR_ENABLE_SYS_VECTOR);
    NVIC__vSetEnableIRQ(SERVO_MOTOR_ENABLE_NVIC_VECTOR, (NVIC_nPRIORITY) NVIC_enPRI3);

    PWM_Generator__vSetCompare(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, SERVO_MOTOR_ENABLE_OUTPUT,  u32CompareValue - 1UL);
    PWM_Generator__vSetOutputAction(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, SERVO_MOTOR_ENABLE_OUTPUT, PWM_enEVENT_ZERO, PWM_enACTION_HIGH);
    PWM_Generator__vSetOutputAction(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, SERVO_MOTOR_ENABLE_OUTPUT, PWM_enEVENT_LOAD, PWM_enACTION_NOTHING);
    PWM_Generator__vSetOutputAction(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, SERVO_MOTOR_ENABLE_OUTPUT, PWM_enEVENT_COMPA_DOWN, PWM_enACTION_LOW);

    PWM_Output__vSetEnableUpdate(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, SERVO_MOTOR_ENABLE_OUTPUT, PWM_enOUTPUT_UPDATE_LOCAL);
    PWM_Output__vSetFaultCondition(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, SERVO_MOTOR_ENABLE_OUTPUT, PWM_enOUTPUT_ENABLE_DIS);
    PWM_Output__vSetInvert(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, SERVO_MOTOR_ENABLE_OUTPUT, PWM_enOUTPUT_ENABLE_DIS);

    PWM_Output__vSetEnable(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, SERVO_MOTOR_ENABLE_OUTPUT, PWM_enOUTPUT_ENABLE_DIS);

    PWM_Generator__vEnInterrupt(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENMASK);
    PWM_Output__vClearInterruptSource(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, PWM_enGEN_INT_SOURCE_CMPA_DOWN);
    PWM_Output__vDisInterruptSource(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, PWM_enGEN_INT_SOURCE_CMPA_DOWN);

    PWM_Generator__vSetEnable(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, PWM_enGENERATOR_ENABLE_ENA);
}

