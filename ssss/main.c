

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
#include <xUtils/Math/Math.h>
#include <xUtils/Conversion/Conversion.h>
#include <xUtils/Colors/Colors.h>
#include <xUtils/DataStructure/DataStructure.h>
#include <xApplication/Printf/Printf.h>

/*Applications*/
#include <xApplication/EDUMKII/EDUMKII.h>
#include <xApplication/ST7735/ST7735.h>
#include <xApplication/GameShip/GameShip.h>

#define ASTEROID_CANT (5UL)

void MAIN_vUART0Init(void);
void MAIN_vInitEDUMKII(void);
void MAIN_vInitSystem(void);
int32_t main (void);

uint32_t u32MicrophoneValue = 0UL;

int32_t main(void)
{
    EDUMKII_nJOYSTICK enJoystickSelectValue = (EDUMKII_nJOYSTICK) 0UL;
    EDUMKII_nBUTTON enButtonState = EDUMKII_enBUTTON_NO;
    EDUMKII_nBUTTON_STATE enButton1State = EDUMKII_enBUTTON_STATE_NOPRESS;
    EDUMKII_nBUTTON_STATE enButton2State = EDUMKII_enBUTTON_STATE_NOPRESS;
    int32_t s32AccelerometerXValue = 0UL;
    int32_t s32AccelerometerYValue = 0UL;
    int32_t s32AccelerometerZValue = 0UL;
    uint32_t u32JoystickXValue = 0UL;
    uint32_t u32JoystickYValue = 0UL;
    uint32_t u32LcdPosX= 0UL;
    uint32_t u32LcdPosY = 0UL;
    uint32_t u32LcdPosXCurrent= 0UL;
    uint32_t u32LcdPosYCurrent = 0UL;

    uint32_t u32ColorPos = 0UL;

    MAIN_vInitSystem();
    MAIN_vInitEDUMKII();
    ST7735__vInitRModel(ST7735_enINITFLAGS_GREEN);
    GraphTerm__vClearScreen(UART_enMODULE_0);
    GraphTerm__vHideCursor(UART_enMODULE_0);
    /*GraphTerm__vSetFontColor(UART_enMODULE_0, 0xFFUL, 0UL,0UL );*/
    GraphTerm__u32Printf(UART_enMODULE_0, 0UL, 0UL,
     "Button1:  , Button2:  \n\r"
     "JoystickX:     , JoystickY:     , Select:  \n\r"
     "AccelX:      , AccelY:      , AccelZ:      \n\r"
     "Microphone:     \n\r\n\r");

    while(1UL)
    {
        SysTick__vDelayUs(10000.0f);

        enButtonState = EDUMKII_Button_enRead(EDUMKII_enBUTTON_ALL);
        EDUMKII_Joystick_vSample( &u32JoystickXValue, &u32JoystickYValue, &enJoystickSelectValue);
        u32LcdPosXCurrent = Math__u32Map(u32JoystickXValue, 4096UL, 0UL, 128UL - 5UL, 5UL);
        u32LcdPosYCurrent = (uint32_t) Math__s32Map((int32_t) u32JoystickYValue, 4096, 0, 5, 128 - 5);
        EDUMKII_Accelerometer_vSample( &s32AccelerometerXValue, &s32AccelerometerYValue, &s32AccelerometerZValue);
        EDUMKII_Microphone_vSample( &u32MicrophoneValue);


        enButton1State = (EDUMKII_nBUTTON_STATE) ((uint32_t) enButtonState & (uint32_t) EDUMKII_enBUTTON_1);
        enButton2State = (EDUMKII_nBUTTON_STATE) (((uint32_t) enButtonState & (uint32_t) EDUMKII_enBUTTON_2) >> 1UL);

        GraphTerm__u32Printf(UART_enMODULE_0, 9UL, 0UL,"%1u", enButton1State);
        GraphTerm__u32Printf(UART_enMODULE_0, 21UL, 0UL,"%1u", enButton2State);
        GraphTerm__u32Printf(UART_enMODULE_0, 11UL, 1UL,"%4u", u32JoystickXValue);
        GraphTerm__u32Printf(UART_enMODULE_0, 28UL, 1UL,"%4u", u32JoystickYValue);
        GraphTerm__u32Printf(UART_enMODULE_0, 42UL, 1UL,"%1u", enJoystickSelectValue);
        GraphTerm__u32Printf(UART_enMODULE_0, 8UL, 2UL,"%+5d", s32AccelerometerXValue);
        GraphTerm__u32Printf(UART_enMODULE_0, 22UL, 2UL,"%+5d", s32AccelerometerYValue);
        GraphTerm__u32Printf(UART_enMODULE_0, 36UL, 2UL,"%+5d", s32AccelerometerZValue);
        GraphTerm__u32Printf(UART_enMODULE_0, 12UL, 3UL,"%4u", u32MicrophoneValue);

        ST7735__vFillRect(u32LcdPosX - 5UL, u32LcdPosY - 5UL, 10UL, 10UL, COLORS_enBLACK);
        ST7735__vFillRect(u32LcdPosXCurrent - 5UL, u32LcdPosYCurrent - 5UL, 10UL, 10UL, COLORS_enAQUAMARINE);
        u32LcdPosX = u32LcdPosXCurrent;
        u32LcdPosY = u32LcdPosYCurrent;
        if(u32ColorPos < 140UL)
        {
            u32ColorPos++;
        }
        else
        {
            u32ColorPos = 0UL;
        }
    }
}

void MAIN_vInitSystem(void)
{
    uint32_t u32Clock = 0UL;
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
    SSI__vInit();

    MAIN_vUART0Init();
}

void MAIN_vInitEDUMKII(void)
{
    EDUMKII_Button_vInit(EDUMKII_enBUTTON_ALL);
    EDUMKII_Led_vInitPWM(EDUMKII_enLED_ALL);
    EDUMKII_Joystick_vInit();
    EDUMKII_Buzzer_vInit();
    EDUMKII_Accelerometer_vInit();
    EDUMKII_Microphone_vInit();
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

    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_STOP);
    UART__enSetConfig(UART_enMODULE_0, UART_enMODE_NORMAL, &enUart0Control, &enUart0LineControl, 1000000UL, &enUart0Line );
    UART__vSetEnable(UART_enMODULE_0, UART_enENABLE_START);
}
