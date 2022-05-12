/*MCU Drivers*/
#include <xDriver_MCU/xDriver_MCU.h>
#include <xApplication_MCU/xApplication_MCU.h>
#include <xDriver_MCU/PWM/Peripheral/PWM_Peripheral.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

/*Utils Libraries*/
#include <xUtils/Math/Math.h>
#include <xUtils/Conversion/Conversion.h>

/*Application*/
#include <xCarModules/xCarModules.h>

uint32_t ExecuteCommand (uint8_t* u8Command, uint32_t u32CountData);
uint32_t ReceiveCommand(uint8_t u8Command, uint8_t* pu8Command, uint32_t u32CountData);
void PwmServoLoadIrq(void);
void ResetForInactivity(void);


/*USER SWITCH 1*/
#define USER_SWITCH1_FUNCTION (GPIO_enGPIOF4)
#define USER_SWITCH1_PORT (GPIO_enPORT_F)
#define USER_SWITCH1_PIN (GPIO_enPIN_4)

/*USER SWITCH 2*/
#define USER_SWITCH2_FUNCTION (GPIO_enGPIOF0)
#define USER_SWITCH2_PORT (GPIO_enPORT_F)
#define USER_SWITCH2_PIN (GPIO_enPIN_0)


/*UART BLUETOTH*/

#define START_COMMAND1 (0xFFU)
#define START_COMMAND2 (0xFFU)
#define START_COMMAND3 (0xFFU)
#define START_COMMAND4 (0xFFU)

#define MOTOR_LEFT (1U)
#define MOTOR_RIGHT (2U)
#define MOTOR_BOTH (3U)
#define SERVO_MOTOR (4U)

#define DIR_FORWARD (1UL)
#define DIR_BACKWARD (2UL)
#define DIR_STOP (3UL)
#define PWM_VALUE (4UL)

#define PWM_PERCENTAGE (1UL) /*Bytes size*/

#define END_COMMAND1 (0xFFU)
#define END_COMMAND2 (0xFFU)
#define END_COMMAND3 (0xFFU)
#define END_COMMAND4 (0xFFU)

void ResetForInactivity(void)
{
    boolean_t boServoBusy = FALSE;
    boolean_t boDCMotorBusy = FALSE;
    uint32_t u32ServoPWM = 0UL;
    boServoBusy = ServoMotorController__boIsBusy();
    if(FALSE == boServoBusy)
    {
        u32ServoPWM = ServoMotorController__u32GetCurrentPWMValue();
        if(50UL != u32ServoPWM)
        {
            ServoMotorController__vSet2Zero();
        }
    }

    PWM_Output__vSetEnable(MOTOR_LEFT_ENABLE_MODULE, MOTOR_LEFT_ENABLE_GENERATOR, MOTOR_LEFT_ENABLE_OUTPUT, PWM_enOUTPUT_ENABLE_DIS);
    PWM_Output__vSetEnable(MOTOR_RIGHT_ENABLE_MODULE, MOTOR_RIGHT_ENABLE_GENERATOR, MOTOR_RIGHT_ENABLE_OUTPUT, PWM_enOUTPUT_ENABLE_DIS);
    GPIO__vSetData(MOTOR_LEFT_FORWARD_PORT, (GPIO_nPIN) (MOTOR_LEFT_BACKWARD_PIN | MOTOR_LEFT_FORWARD_PIN), 0UL);
    GPIO__vSetData(MOTOR_RIGHT_FORWARD_PORT, (GPIO_nPIN) (MOTOR_RIGHT_BACKWARD_PIN | MOTOR_RIGHT_FORWARD_PIN), 0UL);
}


char* pcCommands[40UL] =
{
     "SERVO POS: ",
     "MOTOR LEFT DIR: ",
     "MOTOR RIGHT DIR: ",
};


volatile uint32_t RPM = 0UL;
volatile uint32_t RPM2 = 0UL;

void MAIN_vInitSystem(void);
int32_t main (void);

int32_t main(void)

{
    uint32_t u32CountData = 0UL;
    uint8_t u8Command[100UL];

    MAIN_vInitSystem();

    SYSCTL->RCC_Bit.USEPWMDIV = SYSCTL_RCC_USEPWMDIV_PWMDIV;
    SYSCTL->RCC_Bit.PWMDIV = SYSCTL_RCC_PWMDIV_32 ;

    Commands__vInit(BLUETOTH_MODULE, BLUETOTH_BAUDARATE);
    ServoMotorController__vInit();
    DCMotorController__vInit();

    TIMER__vRegisterIRQSourceHandler(&ResetForInactivity, TIMER_enT5W, TIMER_enINTERRUPT_TIMEOUT);
    TIMER__vEnInterruptVector(TIMER_enT5W, (TIMER_nPRIORITY) TIMER_enPRI5);
    TIMER__vSetStall(TIMER_enT5W, TIMER_enSTALL_FREEZE);
    TIMER__enSetMode_ReloadMatch(TIMER_enT5W, TIMER_enMODE_PERIODIC_WIDE_UP,
                                 (20000000UL - 1UL), 0UL);

    TIMER__vClearInterruptSource(TIMER_enT5W, TIMER_enINT_TIMEOUT);
    TIMER__vEnInterruptSource(TIMER_enT5W, TIMER_enINT_TIMEOUT);
    TIMER__vSetEnable(TIMER_enT5W, TIMER_enENABLE_STOP);




    /*Sitch USER1 and USER2*/
    GPIO__enSetDigitalConfig(USER_SWITCH1_FUNCTION, GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLUP);
    GPIO__enSetDigitalConfig(USER_SWITCH2_FUNCTION, GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLUP);
    while(1UL)
    {
        boolean_t boServoBusy = FALSE;
        boServoBusy = ServoMotorController__boIsBusy();
        if(FALSE == boServoBusy)
        {
            u32CountData = ReceiveCommand(0x55UL, u8Command, 11UL);
            ExecuteCommand(u8Command, u32CountData);

        }

        u32CountData = ReceiveCommand(0x22UL, u8Command, 11UL);
        ExecuteCommand(u8Command, u32CountData);
        u32CountData = ReceiveCommand(0xAAUL, u8Command, 10UL);
        ExecuteCommand(u8Command, u32CountData);

        uint32_t u32SpeedValue = 0UL;
        uint32_t u32SpeedValue2 = 0UL;
        QEI__enGetVelocity(QEI_enMODULE_1, &u32SpeedValue);
        QEI__enGetVelocity(QEI_enMODULE_0, &u32SpeedValue2);
        RPM = (u32SpeedValue * 15UL);
        RPM2 = (u32SpeedValue2 * 15UL);
    }
}

uint32_t ReceiveCommand(uint8_t u8Command, uint8_t* pu8Command, uint32_t u32CountData)
{
    uint32_t u3CountDataReceived = 0UL;
    uint32_t u32Timeout = 9000UL;
    uint32_t u32MaxCountData = u32CountData;
    UART__vSetData(BLUETOTH_MODULE, (uint32_t) u8Command);
    do
    {
        uint32_t u32Offset = u3CountDataReceived;
        uint8_t* pu8CommandTemp = pu8Command;
        pu8CommandTemp += u32Offset;
        uint32_t u32CountTemp = UART__u32GetFifoDataByte(BLUETOTH_MODULE, pu8CommandTemp);
        u3CountDataReceived += u32CountTemp;
        u32Timeout--;
    } while ((u3CountDataReceived < u32MaxCountData) && (0UL != u32Timeout));
    return (u3CountDataReceived);
}

uint32_t ExecuteCommand (uint8_t* u8Command, uint32_t u32CountData)
{
    uint32_t u32Return = 0UL;
    if( 8UL < u32CountData)
    {
        uint32_t u32PwmValue = 0UL;
        uint32_t u32PwmServoValue = 0UL;
        if((0xFFU == u8Command[0UL]) && (0xFFU == u8Command[1UL]) && (0xFFU == u8Command[2UL]) && (0xFFU == u8Command[3UL]))
        {
            if((0xFFU == u8Command[u32CountData - 1UL]) && (0xFFU == u8Command[u32CountData - 2UL]) && (0xFFU == u8Command[u32CountData - 3UL]) && (0xFFU == u8Command[u32CountData - 4UL]))
            {

                GPTM5_TW_TnV_R = 0UL;
                u32Return = 1UL;
                u32PwmValue = u8Command[6UL];
                u32PwmServoValue = u32PwmValue;
                if(u32PwmServoValue > 180UL)
                {
                    u32PwmServoValue = 180UL;
                }

                if(u32PwmValue > 100UL)
                {
                    u32PwmValue = 0UL;
                }

                switch(u8Command[4UL])
                {
                case MOTOR_LEFT:
                    switch(u8Command[5UL])
                    {
                    case DIR_FORWARD:
                        DCMotorController__vSetDirection(DCMOTOR_enMOTOR_LEFT, DCMOTOR_enDIRECTION_FORWARD);
                        break;
                    case DIR_BACKWARD:
                        DCMotorController__vSetDirection(DCMOTOR_enMOTOR_LEFT, DCMOTOR_enDIRECTION_BACKWARD);
                        break;
                    case DIR_STOP:
                        DCMotorController__vSetDirection(DCMOTOR_enMOTOR_LEFT, DCMOTOR_enDIRECTION_STOP);
                        break;
                    case PWM_VALUE:
                        DCMotorController__vStartSmoothChange(DCMOTOR_enMOTOR_LEFT, u32PwmValue);
                        break;
                    default:
                        break;
                    }
                    break;
                case MOTOR_RIGHT:
                    switch(u8Command[5UL])
                    {
                    case DIR_FORWARD:
                        DCMotorController__vSetDirection(DCMOTOR_enMOTOR_RIGHT, DCMOTOR_enDIRECTION_FORWARD);
                        break;
                    case DIR_BACKWARD:
                        DCMotorController__vSetDirection(DCMOTOR_enMOTOR_RIGHT, DCMOTOR_enDIRECTION_BACKWARD);
                        break;
                    case DIR_STOP:
                        DCMotorController__vSetDirection(DCMOTOR_enMOTOR_RIGHT, DCMOTOR_enDIRECTION_STOP);
                        break;
                    case PWM_VALUE:
                        DCMotorController__vStartSmoothChange(DCMOTOR_enMOTOR_RIGHT, u32PwmValue);
                        break;
                    default:
                        break;
                    }
                    break;
                case MOTOR_BOTH:
                    switch(u8Command[5UL])
                    {
                    case DIR_FORWARD:
                        DCMotorController__vSetDirection(DCMOTOR_enMOTOR_BOTH, DCMOTOR_enDIRECTION_FORWARD);
                        break;
                    case DIR_BACKWARD:
                        DCMotorController__vSetDirection(DCMOTOR_enMOTOR_BOTH, DCMOTOR_enDIRECTION_BACKWARD);
                        break;
                    case DIR_STOP:
                        DCMotorController__vSetDirection(DCMOTOR_enMOTOR_BOTH, DCMOTOR_enDIRECTION_STOP);
                        break;
                    case PWM_VALUE:
                        DCMotorController__vStartSmoothChange(DCMOTOR_enMOTOR_BOTH, u32PwmValue);
                        break;
                    default:
                        break;
                    }
                    break;
                case SERVO_MOTOR:
                    switch(u8Command[5UL])
                    {
                    case PWM_VALUE:
                        ServoMotorController__vStartSmoothChange(u32PwmServoValue, SERVO_enUPDATETYPE_DEGREE);
                        break;
                    default:
                        break;
                    }
                    break;
                default:
                    break;
                }
            }
        }
    }
    return (u32Return);
}

void MAIN_vInitSystem(void)
{
    uint32_t u32Clock = 0UL;
    MPU__vInit();
    NVIC__vDeInitInterrupts();
    SYSCTL__vDeInitClockGates();
    MCU__enEnGlobalInterrupt();
    SCB__vInit();
    FLASH__enInit();
    SYSEXC__vInit((SYSEXC_nINT) ((uint32_t) SYSEXC_enINT_INVALID | (uint32_t) SYSEXC_enINT_DIV0 | (uint32_t) SYSEXC_enINT_OVERFLOW | (uint32_t) SYSEXC_enINT_UNDERFLOW),SYSEXC_enPRI7);
    SYSCTL__enInit();/* system clock 80MHz*/
#if defined(Opt_Check)
#endif

    SYSCTL__vSetReady(SYSCTL_enEEPROM);
    SYSCTL__vSetReady(SYSCTL_enGPIOA);
    SYSCTL__vSetReady(SYSCTL_enGPIOC);
    SYSCTL__vSetReady(SYSCTL_enGPIOD);
    SYSCTL__vSetReady(SYSCTL_enGPIOF);
    SYSCTL__vSetReady(SYSCTL_enTIMER4);
    SYSCTL__vSetReady(SYSCTL_enTIMER5);
    SYSCTL__vSetReady(SYSCTL_enQEI0);
    SYSCTL__vSetReady(SYSCTL_enQEI1);
    SYSCTL__vSetReady(SYSCTL_enPWM0);
    SYSCTL__vSetReady(SYSCTL_enPWM1);
    EEPROM__enInit();
    u32Clock = SYSCTL__u32GetClock();
    SYSTICK__enInitUs((u32Clock / 8000UL),SYSTICK_enPRI0);
    GPIO__vInit();
    TIMER__vInit();
    UART__vInit();
    QEI__vInit();
}
