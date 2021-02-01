

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

uint8_t NokiaBuffer[64 * (48 / 8)] = {0UL};
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

volatile uint32_t u32InterruptUart=0UL;
volatile uint32_t u32InterruptRUart=0UL;
volatile uint32_t u32Lengtht=0UL;
volatile uint32_t u32State=0UL;
volatile char cCharacterReceive=0UL;

EDUMKII_nJOYSTICK enJoystickSelectValue = (EDUMKII_nJOYSTICK)0UL;

uint32_t MAIN_u32MatchSet(const void *pcvKey1, const void *pcvKey2);
void MAIN_vIrqCOMP1_INT1(void);
void MAIN_vTransmiterCount(void);
void MAIN_vReceiverCount(void);
int32_t main (void);

int32_t main(void)
{

    uint32_t u32Clock = 0UL;
    uint32_t u32PWMRed = 0UL;
    uint32_t u32PWMBlue = 0UL;
    uint32_t u32PWMGreen = 0UL;
    EDUMKII_nBUTTON enButtonState = EDUMKII_enBUTTON_NO;
    UART_nFIFO_FULL enTransmitFullState = UART_enFIFO_FULL_NO;
    UART_LINE_CONTROL_TypeDef sUARTControlLine = {
        UART_enFIFO_ENA,
        UART_enSTOP_ONE,
        UART_enPARITY_DIS,
        UART_enPARITY_TYPE_ODD,
        UART_enPARITY_STICK_DIS,
        UART_enLENGTH_8BITS,
    };

    MPU__vInit();
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


    GPIO__enSetDigitalConfig(GPIO_enU0Tx, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enU0Rx, GPIO_enCONFIG_INPUT_2MA_PUSHPULL);

    UART0->UARTCTL &= ~UART_UARTCTL_R_UARTEN_MASK;
    UART0->UARTIBRD = 10UL;
    UART0->UARTFBRD = 55UL;
    UART__vSetLineControlStructPointer(UART_enMODULE_0, &sUARTControlLine);
    UART0->UARTCC &= ~UART_UARTCC_R_CS_MASK;
    UART0->UARTCTL |= UART_UARTCTL_R_UARTEN_ENA | UART_UARTCTL_R_HSE_DIV8;

    UART__vEnInterruptVector(UART_enMODULE_0, UART_enPRI7);
    UART__vEnInterruptSource(UART_enMODULE_0, UART_enINT_TRANSMIT);
    UART__vEnInterruptSource(UART_enMODULE_0, UART_enINT_RECEIVE);

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
        if(  EDUMKII_enBUTTON_STATE_PRESS == enButton1State)
        {
            u32PWMRed++;
            if( u32PWMRed > 50UL)
            {
                u32PWMRed = 0UL;
            }
        }

        if( EDUMKII_enBUTTON_STATE_PRESS ==enButton2State)
        {
            u32PWMRed = 0UL;
            EDUMKII_Led_vWritePWM(EDUMKII_enLED_RED, 0UL);
        }

        EDUMKII_Joystick_vSample( &u32JoystickXValue, &u32JoystickYValue, &enJoystickSelectValue);
        EDUMKII_Accelerometer_vSample( &s32AccelerometerXValue, &s32AccelerometerYValue, &s32AccelerometerZValue);
        EDUMKII_Microphone_vSample( &u32MicrophoneValue);

        if(EDUMKII_enJOYSTICK_PRESS == enJoystickSelectValue)
        {
            EDUMKII_Led_vWritePWM(EDUMKII_enLED_RED,(uint32_t) u32PWMRed);
        }
        else
        {
            EDUMKII_Led_vWritePWM(EDUMKII_enLED_RED,(uint32_t) 0UL);
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


       SysTick__vDelayUs(100000.0f);
        u32Lengtht = sprintf__u32User(cNokiaBuffer, "Button1: %u, Button2: %u\n\rJoystickX: %u, JoystickY: %u, Select: %u\n\rAccelX: %d, AccelY: %d, AccelZ: %d \n\rMicrophone %u\n\r\n\r",
                         enButton1State,enButton2State,u32JoystickXValue,u32JoystickYValue,enJoystickSelectValue,s32AccelerometerXValue,s32AccelerometerYValue,s32AccelerometerZValue,
                         u32MicrophoneValue);
        cNokiaBufferPointer = cNokiaBuffer;
        while('\0' != *cNokiaBufferPointer)
        {
            enTransmitFullState = UART__enIsFifoTransmitFull(UART_enMODULE_0);
            if( UART_enFIFO_FULL_NO == enTransmitFullState)
            {
                UART__vSetData(UART_enMODULE_0, (uint32_t) (*cNokiaBufferPointer));
                cNokiaBufferPointer += 1U;
            }
        }
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
    u32InterruptRUart++;
    cCharacterReceive = (char)UART__u32GetData(UART_enMODULE_0);
}


uint32_t MAIN_u32MatchSet(const void *pcvKey1, const void *pcvKey2)
{
    Set_nSTATUS enComparison = Set_enSTATUS_ERROR;
    uint32_t u32Value1 = (uint32_t) pcvKey1;
    uint32_t u32Value2 = (uint32_t) pcvKey2;

    if(u32Value1 == u32Value2)
    {
        enComparison = Set_enSTATUS_OK;
    }

    return (uint32_t) enComparison;
}

void MAIN_vIrqCOMP1_INT1(void)
{
    uint32_t u32CompState = 0U;

   u32CompState= ACMP_BITBANDING_ACSTAT1_OVAL;
   if(u32CompState == ACMP_ACSTAT_OVAL_HIGH) /*Rising*/
   {
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, GPIO_enPIN_3);
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, 0U);
   }
   else/*Falling*/
   {
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, 0U);
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, GPIO_enPIN_2);
   }
}




