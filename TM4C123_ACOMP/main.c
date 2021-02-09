

/**
 * main.c
 */

/*Standard Libraries*/
#include <xUtils/Standard/Standard.h>
#include "stdlib.h"
#include "stdarg.h"
#include "math.h"
#include <string.h>

/*MCU Drivers*/
#include <xDriver_MCU.h>

/*Utils Libraries*/
#include <xUtils/Conversion/Conversion.h>
#include <xUtils/DataStructure/DataStructure.h>
#include <xApplication/Printf/Generic/xHeader/Printf.h>

/*Applications*/
#include <xApplication/EDUMKII/EDUMKII.h>

char cNokiaBuffer[64 * (48 / 8)] = {0UL};
char* cNokiaBufferPointer = {0UL};

/*Local functions*/
EDUMKII_nBUTTON_STATE enButton1State = EDUMKII_enBUTTON_STATE_NOPRESS;
EDUMKII_nBUTTON_STATE enButton2State = EDUMKII_enBUTTON_STATE_NOPRESS;
int32_t s32AccelerometerXValue = 0UL;
int32_t s32AccelerometerYValue = 0UL;
int32_t s32AccelerometerZValue = 0UL;
uint32_t u32MicrophoneValue = 0UL;
uint32_t u32JoystickXValue = 0UL;
uint32_t u32JoystickYValue = 0UL;
uint32_t u32LineBreak = 0UL;

char* pcLineBreak[2UL] = {"Line Break Not Received", "Line Break Received"};
volatile uint32_t u32InterruptUart = 0UL;
volatile uint32_t u32InterruptRUart = 0UL;
volatile uint32_t u32Lengtht = 0UL;
volatile uint32_t u32State = 0UL;
char pcCharacterReceive[16UL] = {0UL};

EDUMKII_nJOYSTICK enJoystickSelectValue = (EDUMKII_nJOYSTICK) 0UL;

void MAIN_vTransmiterCount(void);
void MAIN_vReceiverCount(void);
void MAIN_vLineBreak(void);
int32_t main (void);

int32_t main(void)
{
    uint32_t u32Clock = 0UL;
    uint32_t u32PWMRed = 0UL;
    uint32_t u32PWMBlue = 0UL;
    uint32_t u32PWMGreen = 0UL;
    EDUMKII_nBUTTON enButtonState = EDUMKII_enBUTTON_NO;
    UART_LINE_CONTROL_TypeDef sUARTControlLine = {
        UART_enFIFO_ENA, UART_enSTOP_ONE, UART_enPARITY_DIS, UART_enPARITY_TYPE_ODD, UART_enPARITY_STICK_DIS, UART_enLENGTH_8BITS,
    };

    MPU__vInit();
    NVIC__vDeInitInterrupts();
    SYSCTL__vDeInitClockGates();
    {__asm(" cpsie i");}
    SCB__vInit();
    FLASH__enInit();
    SYSEXC__vInit((SYSEXC_nINT) ((uint32_t) SYSEXC_enINT_INVALID | (uint32_t) SYSEXC_enINT_DIV0 | (uint32_t) SYSEXC_enINT_OVERFLOW | (uint32_t) SYSEXC_enINT_UNDERFLOW),SYSEXC_enPRI7);
    SYSCTL__enInit();/* system clock 80MHz*/
    EEPROM__enInit();
    u32Clock = SYSCTL__u32GetClock();
    SysTick__enInitUs(((float32_t) u32Clock / 80000.0f),SCB_enSHPR0);
    GPIO__vInit();
    TIMER__vInit();
    DMA__vInit();
    ADC__vInit();

    UART__vSetReady(UART_enMODULE_0);

    UART__vRegisterIRQVectorHandler( &UART0__vIRQVectorHandler, UART_enMODULE_0);
    UART__vRegisterIRQSourceHandler( &MAIN_vTransmiterCount, UART_enMODULE_0, UART_enINTERRUPT_TRANSMIT);
    UART__vRegisterIRQSourceHandler( &MAIN_vReceiverCount, UART_enMODULE_0, UART_enINTERRUPT_RECEIVE);
    UART__vRegisterIRQSourceHandler( &MAIN_vReceiverCount, UART_enMODULE_0, UART_enINTERRUPT_RECEIVE_TIMEOUT);
    UART__vRegisterIRQSourceHandler( &MAIN_vLineBreak, UART_enMODULE_0, UART_enINTERRUPT_BREAK_ERROR);


    GPIO__enSetDigitalConfig(GPIO_enU0Tx, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enU0Rx, GPIO_enCONFIG_INPUT_2MA_PUSHPULL);

    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_STOP);
    UART__vSetClockConfig(UART_enMODULE_0, UART_enCLOCK_SYSCLK);
    UART__enSetBaudRateAndLineControlStructPointer(UART_enMODULE_0, &sUARTControlLine, 2000000UL);
    UART__vSetFifoRxLevel(UART_enMODULE_0, UART_enFIFO_LEVEL_14_16);
    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_START);

    UART__vEnInterruptVector(UART_enMODULE_0, UART_enPRI7);
    UART__vEnInterruptSource(UART_enMODULE_0, UART_enINT_SOURCE_TRANSMIT);
    UART__vEnInterruptSource(UART_enMODULE_0, UART_enINT_SOURCE_RECEIVE);
    /*UART__vEnInterruptSource(UART_enMODULE_0, UART_enINT_SOURCE_RECEIVE_TIMEOUT);*/
    UART__vEnInterruptSource(UART_enMODULE_0, UART_enINT_SOURCE_BREAK_ERROR);

    EDUMKII_Button_vInit(EDUMKII_enBUTTON_ALL);
    EDUMKII_Led_vInitPWM(EDUMKII_enLED_ALL);
    EDUMKII_Joystick_vInit();
    EDUMKII_Buzzer_vInit();
    EDUMKII_Accelerometer_vInit();
    EDUMKII_Microphone_vInit();

    while(1U)
    {

        enButtonState = EDUMKII_Button_enRead(EDUMKII_enBUTTON_ALL);
        enButton1State = (EDUMKII_nBUTTON_STATE) ((uint32_t) enButtonState & (uint32_t) EDUMKII_enBUTTON_1);
        enButton2State = (EDUMKII_nBUTTON_STATE) (((uint32_t) enButtonState & (uint32_t) EDUMKII_enBUTTON_2) >> 1UL);
        if(EDUMKII_enBUTTON_STATE_PRESS == enButton1State)
        {
            u32PWMRed++;
            if(u32PWMRed > 50UL)
            {
                u32PWMRed = 0UL;
            }
        }

        if(EDUMKII_enBUTTON_STATE_PRESS == enButton2State)
        {
            u32PWMRed = 0UL;
            EDUMKII_Led_vWritePWM(EDUMKII_enLED_RED, 0UL);
        }

        SysTick__vDelayUs(150000.0f);
        EDUMKII_Joystick_vSample( &u32JoystickXValue, &u32JoystickYValue, &enJoystickSelectValue);
        EDUMKII_Accelerometer_vSample( &s32AccelerometerXValue, &s32AccelerometerYValue, &s32AccelerometerZValue);
        EDUMKII_Microphone_vSample( &u32MicrophoneValue);

        if(EDUMKII_enJOYSTICK_PRESS == enJoystickSelectValue)
        {
            EDUMKII_Led_vWritePWM(EDUMKII_enLED_RED, (uint32_t) u32PWMRed);
        }
        else
        {
            EDUMKII_Led_vWritePWM(EDUMKII_enLED_RED, (uint32_t) 0UL);
        }

        if(u32JoystickXValue <= 1700UL)
        {
            u32PWMGreen = u32JoystickXValue;
            u32PWMGreen -= 0UL;
            u32PWMGreen *= 50UL;
            u32PWMGreen /= (1700UL - 0UL);
            u32PWMGreen = 50UL - u32PWMGreen;
            EDUMKII_Led_vWritePWM(EDUMKII_enLED_GREEN, (uint32_t) u32PWMGreen );
        }
        else if((u32JoystickXValue >= 2400UL) && (u32JoystickXValue <= 4096UL))
        {
            u32PWMGreen = u32JoystickXValue;
            u32PWMGreen -= 2400UL;
            u32PWMGreen *= 50UL;
            u32PWMGreen /= (4096UL - 2400UL);
            u32PWMGreen = u32PWMGreen;
            EDUMKII_Led_vWritePWM(EDUMKII_enLED_GREEN, (uint32_t) u32PWMGreen );
        }
        else
        {
            EDUMKII_Led_vWritePWM(EDUMKII_enLED_GREEN, (uint32_t) 0UL );
        }

        if(u32JoystickYValue <= 1700UL)
        {
            u32PWMBlue = u32JoystickYValue;
            u32PWMBlue -= 0UL;
            u32PWMBlue *= 50UL;
            u32PWMBlue /= (1700UL - 0UL);
            u32PWMBlue = 50UL - u32PWMBlue;
            EDUMKII_Led_vWritePWM(EDUMKII_enLED_BLUE, (uint32_t) u32PWMBlue );
        }
        else if((u32JoystickYValue >= 2400UL) && (u32JoystickYValue <= 4096UL))
        {
            u32PWMBlue = u32JoystickYValue;
            u32PWMBlue -= 2400UL;
            u32PWMBlue *= 50UL;
            u32PWMBlue /= (4096UL - 2400UL);
            u32PWMBlue = u32PWMBlue;
            EDUMKII_Led_vWritePWM(EDUMKII_enLED_BLUE, (uint32_t) u32PWMBlue );
        }
        else
        {
            EDUMKII_Led_vWritePWM(EDUMKII_enLED_BLUE, (uint32_t) 0UL );
        }


        u32Lengtht = sprintf__u32User(cNokiaBuffer,
        "Button1: %u, Button2: %u\n\r"
        "JoystickX: %u, JoystickY: %u, Select: %u\n\r"
        "AccelX: %d, AccelY: %d, AccelZ: %d \n\r"
        "Microphone %u\n\r"
        "Receive Data: %s\n\r"
        "%s\n\r\n\r",
        enButton1State, enButton2State,
        u32JoystickXValue, u32JoystickYValue, enJoystickSelectValue,
        s32AccelerometerXValue, s32AccelerometerYValue, s32AccelerometerZValue,
        u32MicrophoneValue,
        pcCharacterReceive,
        pcLineBreak[u32LineBreak]);
        cNokiaBufferPointer = cNokiaBuffer;

        if(1UL == u32LineBreak)
        {
            u32LineBreak = 0UL;
        }
        UART__u32SetFifoDataByte(UART_enMODULE_0, (uint8_t*) cNokiaBufferPointer,u32Lengtht);

        if(u32Lengtht == u32InterruptUart)
        {
            u32State = 1UL;
        }
        else
        {
            u32State = 0UL;
        }
        u32InterruptUart = 0UL;
    }
}

void MAIN_vTransmiterCount(void)
{
    u32InterruptUart++;
}

void MAIN_vReceiverCount(void)
{
    uint32_t u32Pos = 0UL;
    u32InterruptRUart++;
    u32Pos = UART__u32GetFifoDataByte(UART_enMODULE_0, (uint8_t*) pcCharacterReceive);
    pcCharacterReceive[u32Pos] = '\0';
}

void MAIN_vLineBreak(void)
{
    u32LineBreak = 1UL;
}
