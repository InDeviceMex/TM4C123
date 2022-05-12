/**
 *
 * @file ServoMotorController_SmoothChange.c
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
#include <xCarModules/ServoMotorController/xHeader/ServoMotorController_SmoothChange.h>

#include <xDriver_MCU/xDriver_MCU.h>
#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

static void ServoMotorController_vSmoothChangeIRQ(void);
static void ServoMotorController_vStopSmoothChange(void);

static uint32_t u32CurrentPWMValue = 0UL;
static uint32_t u32NewPWMValue = 0UL;
static boolean_t boIsSmothChangeInProcess = FALSE;
static SERVO_nUPDATETYPE enUpdateType = SERVO_enUPDATETYPE_PWM; /*FALSE = PWW, TRUE = DEGREE*/

float32_t f32Divisor[2UL] = {100.0f, 180.0f};
static void ServoMotorController_vSmoothChangeIRQ(void)
{
    MCU_nFPU_STATE enState = MCU_enFPU_STATE_INACTIVE;
    enState = MCU__enGetFPUContextActive();
    float32_t f32Value = 0.0f;
    uint32_t u32TicksValue = 0UL;
    uint32_t u32CompValue  = 0UL;
    uint32_t u32TempValue  = 0UL;
    uint32_t u32Tempfloat  = 0UL;
    uint32_t u32IntStatus = PWM->MODULE[PWM_enMODULE_0].GENERATOR[PWM_enGEN_2].ISC_Bit.INTCMPAD;
    if(0UL != u32IntStatus)
    {
        PWM->MODULE[PWM_enMODULE_0].GENERATOR[PWM_enGEN_2].ISC = PWM_GEN_ISC_R_INTCMPAD_MASK;
        u32CurrentPWMValue = u32NewPWMValue;
        u32TicksValue = SERVO_MOTOR_LOAD;
        u32TicksValue -= SERVO_MOTOR_INACTIVE;


        u32TempValue = u32CurrentPWMValue * SERVO_MOTOR_ACTIVE;
        f32Value = (float32_t) u32TempValue;
        f32Value /= f32Divisor[(uint32_t) enUpdateType];
        f32Value += 0.5f;
        u32Tempfloat = (uint32_t) f32Value;

        u32TicksValue -= u32Tempfloat;
        u32CompValue = PWM->MODULE[(uint32_t) SERVO_MOTOR_ENABLE_MODULE].GENERATOR[ (uint32_t)SERVO_MOTOR_ENABLE_GENERATOR].CMPA;
        u32CompValue += 1UL;
        if(u32TicksValue != u32CompValue)
        {
            PWM->MODULE[(uint32_t) SERVO_MOTOR_ENABLE_MODULE].GENERATOR[ (uint32_t)SERVO_MOTOR_ENABLE_GENERATOR].CMPA =
                    u32TicksValue - 1UL;
        }
        else
        {
            ServoMotorController_vStopSmoothChange();
        }
    }
    MCU__vSetFPUContextActive(enState);

}

void (*ServoMotorController__pvfGetIRQFunction(void))(void)
{
    void(*pvfReg)(void) = (void(*)(void)) 0UL;
    pvfReg = &ServoMotorController_vSmoothChangeIRQ;
    return (pvfReg);
}


void ServoMotorController__vStartSmoothChange(uint32_t u32NewValueArg, SERVO_nUPDATETYPE enTypeArg)
{
    MCU_nFPU_STATE enState = MCU_enFPU_STATE_INACTIVE;
    enState = MCU__enGetFPUContextActive();
    float32_t f32Value = 0.0f;
    uint32_t u32TicksValue = 0UL;
    uint32_t u32TempValue  = 0UL;
    uint32_t u32Tempfloat  = 0UL;
    boolean_t boUpdateNeeded  = FALSE;
    if((uint32_t) (f32Divisor[(uint32_t) enTypeArg]) >= u32NewValueArg)
    {
        if(enUpdateType != enTypeArg)
        {
            enUpdateType = enTypeArg;
            boUpdateNeeded = TRUE;
        }
        else
        {
            if(u32NewValueArg != u32CurrentPWMValue)
            {
                boUpdateNeeded = TRUE;
            }
        }

        if(TRUE == boUpdateNeeded)
        {
            u32NewPWMValue = u32NewValueArg;
            if(FALSE == boIsSmothChangeInProcess)
            {
                boIsSmothChangeInProcess = TRUE;
                u32CurrentPWMValue = u32NewPWMValue;
                u32TicksValue = SERVO_MOTOR_LOAD;
                u32TicksValue -= SERVO_MOTOR_INACTIVE;

                u32TempValue = u32CurrentPWMValue * SERVO_MOTOR_ACTIVE;
                f32Value = (float32_t) u32TempValue;
                f32Value /= f32Divisor[(uint32_t) enUpdateType];
                f32Value += 0.5f;
                u32Tempfloat = (uint32_t) f32Value;

                u32TicksValue -= u32Tempfloat;
                PWM->MODULE[(uint32_t) SERVO_MOTOR_ENABLE_MODULE].GENERATOR[ (uint32_t)SERVO_MOTOR_ENABLE_GENERATOR].CMPA =
                        u32TicksValue - 1UL;
                PWM_Output__vSetEnable(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, SERVO_MOTOR_ENABLE_OUTPUT, PWM_enOUTPUT_ENABLE_ENA);
                PWM_Output__vClearInterruptSource(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, PWM_enGEN_INT_SOURCE_CMPA_DOWN);
                PWM_Output__vEnInterruptSource(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, PWM_enGEN_INT_SOURCE_CMPA_DOWN);
            }
        }
    }
    MCU__vSetFPUContextActive(enState);
}

static void ServoMotorController_vStopSmoothChange(void)
{
    boIsSmothChangeInProcess = FALSE;
    PWM_Output__vSetEnable(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, SERVO_MOTOR_ENABLE_OUTPUT, PWM_enOUTPUT_ENABLE_DIS);
    PWM_Output__vDisInterruptSource(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, PWM_enGEN_INT_SOURCE_CMPA_DOWN);
    PWM_Output__vClearInterruptSource(SERVO_MOTOR_ENABLE_MODULE, SERVO_MOTOR_ENABLE_GENERATOR, PWM_enGEN_INT_SOURCE_CMPA_DOWN);
}

void ServoMotorController__vSet2Zero(void)
{
    if(SERVO_enUPDATETYPE_PWM == enUpdateType)
    {
        ServoMotorController__vStartSmoothChange(50UL, SERVO_enUPDATETYPE_PWM);
    }
    else
    {
        ServoMotorController__vStartSmoothChange(90UL, SERVO_enUPDATETYPE_DEGREE);
    }
}


boolean_t ServoMotorController__boIsBusy(void)
{
    return (boIsSmothChangeInProcess);
}

uint32_t ServoMotorController__u32GetCurrentPWMValue(void)
{
    return (u32CurrentPWMValue);
}


void ServoMotorController__vSetCurrentPWMValue(uint32_t u32CurrentPWMCValueArg)
{
    u32CurrentPWMValue = u32CurrentPWMCValueArg;
}


uint32_t ServoMotorController__u32GetNewPWMValue(void)
{
    return (u32NewPWMValue);
}


void ServoMotorController__vSetNewPWMValue(uint32_t u32NewPWMCValueArg)
{
    u32NewPWMValue = u32NewPWMCValueArg;
}
