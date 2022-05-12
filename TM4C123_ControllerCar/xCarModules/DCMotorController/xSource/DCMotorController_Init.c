/**
 *
 * @file DCMotorController_Init.c
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
#include <xCarModules/DCMotorController/xHeader/DCMotorController_Init.h>
#include <xCarModules/DCMotorController/xHeader/DCMotorController_Direction.h>

#include <xDriver_MCU/xDriver_MCU.h>
#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

void QEI__vIRQTimer(void);

void QEI__vIRQTimer(void)
{
    static volatile uint32_t u32Count = 0UL;

    u32Count++;
}

void DCMotorController__vInit(void)
{
    const QEI_CONTROL_TypeDef enQeiControl =
    {
        QEI_enSWAP_DIS,
        QEI_enMODE_QUADRATURE,
        QEI_enCAPTURE_BOTH,
        QEI_enRESET_MAXPOS,
        QEI_enVELOCITY_ENA,
        QEI_enVELOCITY_PREDIV_1,
        QEI_enINPUT_FILTER_ENA,
        QEI_enINPUT_FILTER_COUNT_5,
        QEI_enSTALL_FREEZE,
        QEI_enENABLE_START
    };

    const QEI_SIGNAL_TypeDef enQeiSignal =
    {
        QEI_enINVERT_DIS,
        QEI_enINVERT_DIS,
        QEI_enINVERT_DIS,
        QEI_enSIGNAL_SELECT_PRIMARY,
        QEI_enSIGNAL_SELECT_PRIMARY,
        QEI_enSIGNAL_SELECT_PRIMARY,
    };
    void (*IRQReg) (void) = (void (*) (void)) 0UL;


    GPIO__enSetDigitalConfig(MOTOR_RIGHT_PHASEA_FUNCTION, GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
    GPIO__enSetDigitalConfig(MOTOR_RIGHT_PHASEB_FUNCTION, GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
    GPIO__enSetDigitalConfig(MOTOR_LEFT_PHASEA_FUNCTION, GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);
    GPIO__enSetDigitalConfig(MOTOR_LEFT_PHASEB_FUNCTION, GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);

    QEI__vRegisterIRQSourceHandler(&QEI__vIRQTimer, QEI_enMODULE_1, QEI_enINTERRUPT_TIMER);
    QEI__vEnInterruptVector(QEI_enMODULE_1, QEI_enPRI3);
    QEI__vEnInterruptSource(QEI_enMODULE_1, QEI_enINT_SOURCE_TIMER);

    QEI__enSetConfig(QEI_enMODULE_0, &enQeiControl, &enQeiSignal, 0UL, 512UL, 625000UL - 1UL);
    QEI__enSetConfig(QEI_enMODULE_1, &enQeiControl, &enQeiSignal, 0UL, 512UL, 625000UL - 1UL);


    IRQReg = DCMotorController__pvfGetIRQFunction();

    TIMER__vRegisterIRQSourceHandler(IRQReg, TIMER_enT3W, TIMER_enINTERRUPT_TIMEOUT);
    TIMER__vEnInterruptVector(TIMER_enT3W, (TIMER_nPRIORITY) TIMER_enPRI5);
    TIMER__vSetStall(TIMER_enT3W, TIMER_enSTALL_FREEZE);
    TIMER__enSetMode_ReloadMatch(TIMER_enT3W, TIMER_enMODE_PERIODIC_WIDE_UP,
                                 (80000UL - 1UL), 0UL);

    TIMER__vClearInterruptSource(TIMER_enT3W, TIMER_enINT_TIMEOUT);
    TIMER__vDisInterruptSource(TIMER_enT3W, TIMER_enINT_TIMEOUT);
    TIMER__vSetEnable(TIMER_enT3W, TIMER_enENABLE_STOP);


    /*MOTOR RIGHT*/
    GPIO__enSetDigitalConfig(MOTOR_RIGHT_ENABLE_FUNCTION, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(MOTOR_RIGHT_FORWARD_FUNCTION, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(MOTOR_RIGHT_BACKWARD_FUNCTION, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    /*MOTOR RIGHT ENABLE*/
    PWM_Generator__vSetLoad(MOTOR_RIGHT_ENABLE_MODULE, MOTOR_RIGHT_ENABLE_GENERATOR, MOTOR_PERIOD_TICKS - 1UL);
    PWM_Generator__vSetDirection(MOTOR_RIGHT_ENABLE_MODULE, MOTOR_RIGHT_ENABLE_GENERATOR, PWM_enDIRECTION_DOWN);
    PWM_Generator__vSetLoadUpdate(MOTOR_RIGHT_ENABLE_MODULE, MOTOR_RIGHT_ENABLE_GENERATOR, PWM_enGENERATOR_UPDATE_LOCAL);
    PWM_Generator__vSetStall(MOTOR_RIGHT_ENABLE_MODULE, MOTOR_RIGHT_ENABLE_GENERATOR, PWM_enSTALL_CONTINUE);

    PWM_Generator__vSetCompare(MOTOR_RIGHT_ENABLE_MODULE, MOTOR_RIGHT_ENABLE_GENERATOR, MOTOR_RIGHT_ENABLE_OUTPUT, MOTOR_PERIOD_TICKS - 1UL);
    PWM_Generator__vSetOutputAction(MOTOR_RIGHT_ENABLE_MODULE, MOTOR_RIGHT_ENABLE_GENERATOR, MOTOR_RIGHT_ENABLE_OUTPUT, PWM_enEVENT_ZERO, PWM_enACTION_HIGH);
    PWM_Generator__vSetOutputAction(MOTOR_RIGHT_ENABLE_MODULE, MOTOR_RIGHT_ENABLE_GENERATOR, MOTOR_RIGHT_ENABLE_OUTPUT, PWM_enEVENT_LOAD, PWM_enACTION_NOTHING);
    PWM_Generator__vSetOutputAction(MOTOR_RIGHT_ENABLE_MODULE, MOTOR_RIGHT_ENABLE_GENERATOR, MOTOR_RIGHT_ENABLE_OUTPUT, PWM_enEVENT_COMPA_DOWN, PWM_enACTION_LOW);

    PWM_Output__vSetEnableUpdate(MOTOR_RIGHT_ENABLE_MODULE, MOTOR_RIGHT_ENABLE_GENERATOR, MOTOR_RIGHT_ENABLE_OUTPUT, PWM_enOUTPUT_UPDATE_LOCAL);
    PWM_Output__vSetFaultCondition(MOTOR_RIGHT_ENABLE_MODULE, MOTOR_RIGHT_ENABLE_GENERATOR, MOTOR_RIGHT_ENABLE_OUTPUT, PWM_enOUTPUT_ENABLE_DIS);
    PWM_Output__vSetInvert(MOTOR_RIGHT_ENABLE_MODULE, MOTOR_RIGHT_ENABLE_GENERATOR, MOTOR_RIGHT_ENABLE_OUTPUT, PWM_enOUTPUT_ENABLE_DIS);

    /*MOTOR RIGHT DIR1*/
    GPIO__vSetData(MOTOR_RIGHT_FORWARD_PORT, MOTOR_RIGHT_FORWARD_PIN, 0UL);

    /*MOTOR RIGHT DIR1*/
    GPIO__vSetData(MOTOR_RIGHT_BACKWARD_PORT, MOTOR_RIGHT_BACKWARD_PIN, 0UL);


    /*MOTOR LEFT*/
    GPIO__enSetDigitalConfig(MOTOR_LEFT_ENABLE_FUNCTION, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(MOTOR_LEFT_FORWARD_FUNCTION, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(MOTOR_LEFT_BACKWARD_FUNCTION, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    /*MOTOR LEFT ENABLE*/
    PWM_Generator__vSetCompare(MOTOR_LEFT_ENABLE_MODULE, MOTOR_LEFT_ENABLE_GENERATOR, MOTOR_LEFT_ENABLE_OUTPUT, MOTOR_PERIOD_TICKS - 1UL);
    PWM_Generator__vSetOutputAction(MOTOR_LEFT_ENABLE_MODULE, MOTOR_LEFT_ENABLE_GENERATOR, MOTOR_LEFT_ENABLE_OUTPUT, PWM_enEVENT_ZERO, PWM_enACTION_HIGH);
    PWM_Generator__vSetOutputAction(MOTOR_LEFT_ENABLE_MODULE, MOTOR_LEFT_ENABLE_GENERATOR, MOTOR_LEFT_ENABLE_OUTPUT, PWM_enEVENT_LOAD, PWM_enACTION_NOTHING);
    PWM_Generator__vSetOutputAction(MOTOR_LEFT_ENABLE_MODULE, MOTOR_LEFT_ENABLE_GENERATOR, MOTOR_LEFT_ENABLE_OUTPUT, PWM_enEVENT_COMPB_DOWN, PWM_enACTION_LOW);

    PWM_Output__vSetEnableUpdate(MOTOR_LEFT_ENABLE_MODULE, MOTOR_LEFT_ENABLE_GENERATOR, MOTOR_LEFT_ENABLE_OUTPUT, PWM_enOUTPUT_UPDATE_LOCAL);
    PWM_Output__vSetFaultCondition(MOTOR_LEFT_ENABLE_MODULE, MOTOR_LEFT_ENABLE_GENERATOR, MOTOR_LEFT_ENABLE_OUTPUT, PWM_enOUTPUT_ENABLE_DIS);
    PWM_Output__vSetInvert(MOTOR_LEFT_ENABLE_MODULE, MOTOR_LEFT_ENABLE_GENERATOR, MOTOR_LEFT_ENABLE_OUTPUT, PWM_enOUTPUT_ENABLE_DIS);


    PWM_Output__vSetEnable(MOTOR_LEFT_ENABLE_MODULE, MOTOR_LEFT_ENABLE_GENERATOR, MOTOR_LEFT_ENABLE_OUTPUT, PWM_enOUTPUT_ENABLE_DIS);
    PWM_Output__vSetEnable(MOTOR_RIGHT_ENABLE_MODULE, MOTOR_RIGHT_ENABLE_GENERATOR, MOTOR_RIGHT_ENABLE_OUTPUT, PWM_enOUTPUT_ENABLE_DIS);
    PWM_Generator__vSetEnable(MOTOR_LEFT_ENABLE_MODULE, MOTOR_LEFT_ENABLE_GENERATOR, PWM_enGENERATOR_ENABLE_ENA);
    PWM_Generator__vSetClearCount(MOTOR_LEFT_ENABLE_MODULE, (PWM_nGENMASK) (MOTOR_RIGHT_ENABLE_GENMASK | MOTOR_LEFT_ENABLE_GENMASK));

    /*MOTOR LEFT DIR1*/
    GPIO__vSetData(MOTOR_LEFT_FORWARD_PORT, MOTOR_LEFT_FORWARD_PIN, 0UL);

    /*MOTOR LEFT DIR1*/
    GPIO__vSetData(MOTOR_LEFT_BACKWARD_PORT, MOTOR_LEFT_BACKWARD_PIN, 0UL);




}
