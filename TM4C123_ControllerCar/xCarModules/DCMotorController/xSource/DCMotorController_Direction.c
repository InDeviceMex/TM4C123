/**
 *
 * @file DCMotorController_Direction.c
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
#include <xCarModules/DCMotorController/xHeader/DCMotorController_Direction.h>

#include <xDriver_MCU/xDriver_MCU.h>
#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

static void DCMotorController_vUpdateHandler(void);

static uint32_t u32CurrentPWMValue_Left = 0UL;
static uint32_t u32NewPWMValue_Left = 0UL;
static uint32_t u32CurrentPWMValue_Right = 0UL;
static uint32_t u32NewPWMValue_Right = 0UL;
static boolean_t boIsSmothChangeInProcess = FALSE;

static GPIO_nPORT DCMotor_enPort[DCMOTOR_enMOTOR_BOTH]=
{
 MOTOR_LEFT_FORWARD_PORT,
 MOTOR_RIGHT_FORWARD_PORT,
};

static GPIO_nPIN DCMotor_enPin[DCMOTOR_enMOTOR_BOTH][DCMOTOR_enDIRECTION_STOP]  =
{
 { MOTOR_LEFT_FORWARD_PIN, MOTOR_LEFT_BACKWARD_PIN},
 { MOTOR_RIGHT_FORWARD_PIN, MOTOR_RIGHT_BACKWARD_PIN }
};

static PWM_nMODULE DCMotor_enPWMModule[DCMOTOR_enMOTOR_BOTH] =
{
 MOTOR_LEFT_ENABLE_MODULE,
 MOTOR_RIGHT_ENABLE_MODULE
};

static PWM_nGENERATOR DCMotor_enPWMGenerator[DCMOTOR_enMOTOR_BOTH] =
{
 MOTOR_LEFT_ENABLE_GENERATOR,
 MOTOR_RIGHT_ENABLE_GENERATOR
};

static PWM_nOUTPUT DCMotor_enPWMOutput[DCMOTOR_enMOTOR_BOTH] =
{
 MOTOR_LEFT_ENABLE_OUTPUT,
 MOTOR_RIGHT_ENABLE_OUTPUT
};



void DCMotorController__vSetEnable(DCMOTOR_nMOTOR enMotorArg, DCMOTOR_nENABLE enEnableArg)
{
    switch(enMotorArg)
    {
    case DCMOTOR_enMOTOR_LEFT:
        PWM_Output__vSetEnable(DCMotor_enPWMModule[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                               DCMotor_enPWMGenerator[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                               DCMotor_enPWMOutput[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                               (PWM_nOUTPUT_ENABLE) enEnableArg);
        break;
    case DCMOTOR_enMOTOR_RIGHT:
        PWM_Output__vSetEnable(DCMotor_enPWMModule[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                               DCMotor_enPWMGenerator[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                               DCMotor_enPWMOutput[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                               (PWM_nOUTPUT_ENABLE) enEnableArg);
        break;
    case DCMOTOR_enMOTOR_BOTH:
        PWM_Output__vSetEnable(DCMotor_enPWMModule[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                               DCMotor_enPWMGenerator[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                               DCMotor_enPWMOutput[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                               (PWM_nOUTPUT_ENABLE) enEnableArg);
        PWM_Output__vSetEnable(DCMotor_enPWMModule[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                               DCMotor_enPWMGenerator[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                               DCMotor_enPWMOutput[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                               (PWM_nOUTPUT_ENABLE) enEnableArg);
        break;
    default:
        break;
    }
}



void DCMotorController__vSetDirection(DCMOTOR_nMOTOR enMotorArg, DCMOTOR_nDIRECTION enDirectionArg)
{

    switch(enMotorArg)
    {
    case DCMOTOR_enMOTOR_LEFT:
        switch(enDirectionArg)
        {
        case DCMOTOR_enDIRECTION_FORWARD:
            GPIO__vSetData(DCMotor_enPort[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                           (GPIO_nPIN) (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD] |
                                        DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]),
                            (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD]));
            break;
        case DCMOTOR_enDIRECTION_BACKWARD:
            GPIO__vSetData(DCMotor_enPort[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                           (GPIO_nPIN) (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD] |
                                        DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]),
                            (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]));
            break;
        case DCMOTOR_enDIRECTION_STOP:
            GPIO__vSetData(DCMotor_enPort[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                           (GPIO_nPIN) (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD] |
                                        DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]),
                            0UL);
            break;
        default:
            break;
        }
        break;
    case DCMOTOR_enMOTOR_RIGHT:
        switch(enDirectionArg)
        {
        case DCMOTOR_enDIRECTION_FORWARD:
            GPIO__vSetData(DCMotor_enPort[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                           (GPIO_nPIN) (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD] |
                                        DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]),
                            (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD]));
            break;
        case DCMOTOR_enDIRECTION_BACKWARD:
            GPIO__vSetData(DCMotor_enPort[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                           (GPIO_nPIN) (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD] |
                                        DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]),
                            (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]));
            break;
        case DCMOTOR_enDIRECTION_STOP:
            GPIO__vSetData(DCMotor_enPort[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                           (GPIO_nPIN) (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD] |
                                        DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]),
                            0UL);
            break;
        default:
            break;
        }
        break;
    case DCMOTOR_enMOTOR_BOTH:
        switch(enDirectionArg)
        {
        case DCMOTOR_enDIRECTION_FORWARD:
            GPIO__vSetData(DCMotor_enPort[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                           (GPIO_nPIN) (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD] |
                                        DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]),
                            (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD]));
            GPIO__vSetData(DCMotor_enPort[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                           (GPIO_nPIN) (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD] |
                                        DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]),
                            (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD]));
            break;
        case DCMOTOR_enDIRECTION_BACKWARD:
            GPIO__vSetData(DCMotor_enPort[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                           (GPIO_nPIN) (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD] |
                                        DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]),
                            (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]));
            GPIO__vSetData(DCMotor_enPort[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                           (GPIO_nPIN) (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD] |
                                        DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]),
                            (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]));
            break;
        case DCMOTOR_enDIRECTION_STOP:
            GPIO__vSetData(DCMotor_enPort[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                           (GPIO_nPIN) (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD] |
                                        DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_LEFT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]),
                            0UL);
            GPIO__vSetData(DCMotor_enPort[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                           (GPIO_nPIN) (DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_FORWARD] |
                                        DCMotor_enPin[(uint32_t) DCMOTOR_enMOTOR_RIGHT][(uint32_t)DCMOTOR_enDIRECTION_BACKWARD]),
                            0UL);
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
}


void DCMotorController__vSetPWMTicks(DCMOTOR_nMOTOR enMotorArg, uint32_t u32PWMValueTicks)
{
    switch(enMotorArg)
    {
    case DCMOTOR_enMOTOR_LEFT:
        PWM_Generator__vSetCompare(DCMotor_enPWMModule[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                                   DCMotor_enPWMGenerator[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                                   DCMotor_enPWMOutput[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                                   u32PWMValueTicks - 1UL);
        break;
    case DCMOTOR_enMOTOR_RIGHT:
        PWM_Generator__vSetCompare(DCMotor_enPWMModule[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                                   DCMotor_enPWMGenerator[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                                   DCMotor_enPWMOutput[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                                   u32PWMValueTicks - 1UL);
        break;
    case DCMOTOR_enMOTOR_BOTH:
        PWM_Generator__vSetCompare(DCMotor_enPWMModule[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                                   DCMotor_enPWMGenerator[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                                   DCMotor_enPWMOutput[(uint32_t) DCMOTOR_enMOTOR_LEFT],
                                   u32PWMValueTicks - 1UL);
        PWM_Generator__vSetCompare(DCMotor_enPWMModule[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                                   DCMotor_enPWMGenerator[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                                   DCMotor_enPWMOutput[(uint32_t) DCMOTOR_enMOTOR_RIGHT],
                                   u32PWMValueTicks - 1UL);
        break;
    default:
        break;
    }
}

void DCMotorController__vStartSmoothChange(DCMOTOR_nMOTOR enMotorArg, uint32_t u32PWMValue)
{
    if(100UL < u32PWMValue)
    {
        u32PWMValue = 100UL;
    }

    switch(enMotorArg)
    {
    case DCMOTOR_enMOTOR_LEFT:
        u32NewPWMValue_Left = u32PWMValue;
        break;
    case DCMOTOR_enMOTOR_RIGHT:
        u32NewPWMValue_Right = u32PWMValue;
        break;
    case DCMOTOR_enMOTOR_BOTH:
        u32NewPWMValue_Left = u32PWMValue;
        u32NewPWMValue_Right = u32PWMValue;
        break;
    default:
        break;
    }

    if(FALSE == boIsSmothChangeInProcess)
    {
        boIsSmothChangeInProcess = TRUE;

        TIMER__vClearInterruptSource(TIMER_enT3W, TIMER_enINT_TIMEOUT);
        TIMER__vEnInterruptSource(TIMER_enT3W, TIMER_enINT_TIMEOUT);
        TIMER__vSetEnable(TIMER_enT3W, TIMER_enENABLE_START);
        /*Habilito interrupciones*/
    }

}

void DCMotorController__vSet2Zero(DCMOTOR_nMOTOR enMotorArg)
{
    DCMotorController__vStartSmoothChange(enMotorArg, 0UL);
}


void (*DCMotorController__pvfGetIRQFunction(void))(void)
{
    void(*pvfReg)(void) = (void(*)(void)) 0UL;
    pvfReg = &DCMotorController_vUpdateHandler;
    return (pvfReg);
}


static void DCMotorController_vUpdateHandler(void)
{
    uint32_t u32PwmTicks = 0UL;
    uint32_t u32PwmTicksPercentage = 0UL;
    uint32_t u32FinishProcess = 0UL;

    if(u32NewPWMValue_Left != u32CurrentPWMValue_Left)
    {
        u32FinishProcess = 1UL;
        if(u32NewPWMValue_Left < u32CurrentPWMValue_Left)
        {
            u32CurrentPWMValue_Left--;
        }
        else if(u32NewPWMValue_Left > u32CurrentPWMValue_Left)
        {
            u32CurrentPWMValue_Left++;
        }
        u32PwmTicks = MOTOR_PERIOD_TICKS;
        u32PwmTicksPercentage = MOTOR_PERIOD_TICKS;

        u32PwmTicksPercentage *= u32CurrentPWMValue_Left;
        u32PwmTicksPercentage /= 100UL;
        u32PwmTicks -= u32PwmTicksPercentage;

        DCMotorController__vSetPWMTicks(DCMOTOR_enMOTOR_LEFT, u32PwmTicks);
        if(0UL == u32CurrentPWMValue_Left)
        {
            DCMotorController__vSetEnable(DCMOTOR_enMOTOR_LEFT, DCMOTOR_enENABLE_DIS);
        }
        else
        {
            DCMotorController__vSetEnable(DCMOTOR_enMOTOR_LEFT, DCMOTOR_enENABLE_ENA);
        }
    }


    if(u32NewPWMValue_Right != u32CurrentPWMValue_Right)
    {
        u32FinishProcess = 1UL;
        if(u32NewPWMValue_Right < u32CurrentPWMValue_Right)
        {
            u32CurrentPWMValue_Right--;
        }
        else if(u32NewPWMValue_Right > u32CurrentPWMValue_Right)
        {
            u32CurrentPWMValue_Right++;
        }
        u32PwmTicks = MOTOR_PERIOD_TICKS;
        u32PwmTicksPercentage = MOTOR_PERIOD_TICKS;

        u32PwmTicksPercentage *= u32CurrentPWMValue_Right;
        u32PwmTicksPercentage /= 100UL;
        u32PwmTicks -= u32PwmTicksPercentage;

        DCMotorController__vSetPWMTicks(DCMOTOR_enMOTOR_RIGHT, u32PwmTicks);
        if(0UL == u32CurrentPWMValue_Right)
        {
            DCMotorController__vSetEnable(DCMOTOR_enMOTOR_RIGHT, DCMOTOR_enENABLE_DIS);
        }
        else
        {
            DCMotorController__vSetEnable(DCMOTOR_enMOTOR_RIGHT, DCMOTOR_enENABLE_ENA);
        }
    }

    if(0UL == u32FinishProcess)
    {
        boIsSmothChangeInProcess = FALSE;
        TIMER__vSetEnable(TIMER_enT3W, TIMER_enENABLE_STOP);
        TIMER__vDisInterruptSource(TIMER_enT3W, TIMER_enINT_TIMEOUT);
        TIMER__vClearInterruptSource(TIMER_enT3W, TIMER_enINT_TIMEOUT);
    }

}

boolean_t DCMotorController__boIsBusy(void)
{
    return (boIsSmothChangeInProcess);
}
