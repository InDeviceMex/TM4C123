

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
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

/*Utils Libraries*/
#include <xUtils/Conversion/Conversion.h>
#include <xUtils/DataStructure/DataStructure.h>
#include <xApplication/Printf/Printf.h>

/*Applications*/
#include <xApplication/EDUMKII/EDUMKII.h>

char cNokiaBuffer[300] = {0UL};

/*Local functions*/

DMACHCTL_TypeDef enDMAChControl = {
     DMA_enCH_MODE_BASIC,
     DMA_enCH_BURST_ON,
     16UL-1U,
     DMA_enCH_BURST_SIZE_8,
     0,
     DMA_enCH_SRC_SIZE_BYTE,
     DMA_enCH_SRC_INC_BYTE,
     DMA_enCH_DST_SIZE_BYTE,
     DMA_enCH_DST_INC_NO,
};

volatile uint32_t u32InterruptUart = 1UL;
char pcCharacterReceive[16UL] = {0UL};
volatile uint32_t u32State = 0UL;


void MAIN_vTransmiterCount(void);
void MAIN_vReceiverCount(void);
void MAIN_vLineBreak(void);
void MAIN_vUART0Init(void);
int32_t main (void);

uint32_t u32MicrophoneValue = 0UL;
int32_t main(void)
{
    EDUMKII_nJOYSTICK enJoystickSelectValue = (EDUMKII_nJOYSTICK) 0UL;
    EDUMKII_nBUTTON_STATE enButton1State = EDUMKII_enBUTTON_STATE_NOPRESS;
    EDUMKII_nBUTTON_STATE enButton2State = EDUMKII_enBUTTON_STATE_NOPRESS;
    int32_t s32AccelerometerXValue = 0UL;
    int32_t s32AccelerometerYValue = 0UL;
    int32_t s32AccelerometerZValue = 0UL;
    uint32_t u32JoystickXValue = 0UL;
    uint32_t u32JoystickYValue = 0UL;

    char* cNokiaBufferPointer = {0UL};
    volatile uint32_t u32Lengtht = 0UL;

    uint32_t u32Clock = 0UL;
    uint32_t u32PWMRed = 0UL;
    uint32_t u32PWMBlue = 0UL;
    uint32_t u32PWMGreen = 0UL;
    EDUMKII_nBUTTON enButtonState = EDUMKII_enBUTTON_NO;

    MPU__vInit();
    NVIC__vDeInitInterrupts();
    SYSCTL__vDeInitClockGates();
    MCU__vEnGlobalInterrupt();
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
    UART__vInit();

    MAIN_vUART0Init();

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

        SysTick__vDelayUs(10000.0f);
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

        if(1UL == u32InterruptUart)
        {
            u32Lengtht = sprintf__u32User(cNokiaBuffer,
            "%sButton1: %u, Button2: %u\n\r"
            "JoystickX: %u, JoystickY: %u, Select: %u\n\r"
            "AccelX: %d, AccelY: %d, AccelZ: %d \n\r"
            "Microphone %u\n\r"
            "Receive Data: %s\n\r\n\r",
            "\x1B[u\x1B[2J",enButton1State, enButton2State,
            u32JoystickXValue, u32JoystickYValue, enJoystickSelectValue,
            s32AccelerometerXValue, s32AccelerometerYValue, s32AccelerometerZValue,
            u32MicrophoneValue,
            pcCharacterReceive);
            cNokiaBufferPointer = cNokiaBuffer;
            cNokiaBufferPointer += u32Lengtht;
            cNokiaBufferPointer -= 1UL;
            DMA_CH__vSetPrimarySourceEndAddress(DMA_enCH_MODULE_9, (uint32_t) cNokiaBufferPointer);
            enDMAChControl.XFERSIZE = u32Lengtht - 1UL;
            DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_9, enDMAChControl);
            DMA_CH__vSetEnable(DMA_enCH_MODULE_9, DMA_enCH_ENA_ENA);
            u32InterruptUart = 0UL;
        }

    }
}

void MAIN_vUART0Init(void)
{
    UART_CONTROL_TypeDef enUart0Control =
    {
        UART_enEOT_ALL,
        UART_enLOOPBACK_DIS,
        UART_enLINE_EN,
        UART_enLINE_EN,
        UART_enRTS_MODE_SOFT,
        UART_enCTS_MODE_SOFT,
    };
    UART_LINE_CONTROL_TypeDef enUart0LineControl =
    {
     UART_enFIFO_ENA,
     UART_enSTOP_TWO,
     UART_enPARITY_ENA,
     UART_enPARITY_TYPE_EVEN,
     UART_enPARITY_STICK_DIS ,
     UART_enLENGTH_8BITS,
    };

    UART_LINE_TypeDef enUart0Line =
    {
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
     UART_enLINE_SELECT_PRIMARY,
    };

    DMA_CONFIG_Typedef enDMAChConfig= {
        DMA_enCH_REQTYPE_BOTH,
        DMA_enCH_PERIPHERAL_ENA,
        DMA_enCH_CTL_PRIMARY ,
        DMA_enCH_PRIO_HIGH ,
        DMA_enCH_ENCODER_0
    };

    DMA__vRegisterIRQSourceHandler( &MAIN_vTransmiterCount, DMA_enCH_MODULE_9, DMA_enCH_ENCODER_0 );
    DMA_CH__vSetPrimaryDestEndAddress(DMA_enCH_MODULE_9, (uint32_t) (UART0_BASE + UART_UARTDR_OFFSET));
    DMA_CH__vSetPrimarySourceEndAddress(DMA_enCH_MODULE_9, (uint32_t) &cNokiaBuffer[1UL-1U]);
    DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_9, enDMAChControl);

    DMA_CH__vSetConfigStruct(DMA_enCH_MODULE_9, enDMAChConfig);

    UART__vRegisterIRQVectorHandler( &UART0__vIRQVectorHandler, UART_enMODULE_0);
    UART__vRegisterIRQSourceHandler( &MAIN_vReceiverCount, UART_enMODULE_0, UART_enINTERRUPT_RECEIVE);

    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_STOP);
    UART__vSetFifoRxLevel(UART_enMODULE_0, UART_enFIFO_LEVEL_14_16);
    UART__vSetDMATx(UART_enMODULE_0, UART_enDMA_EN);
    UART__enSetConfig(UART_enMODULE_0, UART_enMODE_NORMAL, &enUart0Control, &enUart0LineControl, 1000000UL, &enUart0Line );
    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_START);

    UART__vEnInterruptVector(UART_enMODULE_0, UART_enPRI7);
    UART__vEnInterruptSource(UART_enMODULE_0, UART_enINT_SOURCE_RECEIVE);
}

void MAIN_vTransmiterCount(void)
{
    u32InterruptUart = 1UL;
}

void MAIN_vReceiverCount(void)
{
    uint32_t u32Pos = 0UL;
    u32Pos = UART__u32GetFifoDataByte(UART_enMODULE_0, (uint8_t*) pcCharacterReceive);
    pcCharacterReceive[u32Pos] = '\0';
}
