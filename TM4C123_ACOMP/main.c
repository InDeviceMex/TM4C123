

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

uint8_t NokiaBuffer[64*(48/8)] ={0u};
char cNokiaBuffer[64*(48/8)] ={0u};

/*Local functions*/
EDUMKII_nBUTTON_STATE enButton1State = EDUMKII_enBUTTON_STATE_NOPRESS;
EDUMKII_nBUTTON_STATE enButton2State = EDUMKII_enBUTTON_STATE_NOPRESS;
int32_t s32AccelerometerXValue =0UL;
int32_t s32AccelerometerYValue =0UL;
int32_t s32AccelerometerZValue =0UL;
uint32_t u32MicrophoneValue =0UL;
int32_t s32JoystickXValue =0UL;
int32_t s32JoystickYValue =0UL;
EDUMKII_nJOYSTICK enJoystickSelectValue = (EDUMKII_nJOYSTICK)0UL;
uint32_t MAIN_u32MatchSet(const void *pcvKey1, const void *pcvKey2);
void MAIN_vIrqCOMP1_INT1(void);
int32_t main (void);

int32_t main(void)
{
    uint32_t u32PWMRed = 0UL;
    uint32_t u32PWMGreen = 0UL;
    EDUMKII_nBUTTON enButtonState = EDUMKII_enBUTTON_NO;

    MPU__vInit();
    SCB__vInit();
    FLASH__enInit();
    SYSEXC__vInit((SYSEXC_nINT)((uint32_t)SYSEXC_enINT_INVALID|(uint32_t)SYSEXC_enINT_DIV0|
          (uint32_t)SYSEXC_enINT_OVERFLOW|(uint32_t)SYSEXC_enINT_UNDERFLOW),SYSEXC_enPRI7);

    SYSCTL__enInit();/* system clock 80MHz*/
    EEPROM__enInit();
    SysTick__enInitUs(1000.0f,SCB_enSHPR0);
    GPIO__vInit();
    TIMER__vInit();
    DMA__vInit();
    ADC__vRegisterIRQVectorHandler(&ADC0_SS0__vIRQVectorHandler,ADC_enMODULE_0,ADC_enSEQ_0);
    ADC__vRegisterIRQVectorHandler(&ADC0_SS1__vIRQVectorHandler,ADC_enMODULE_0,ADC_enSEQ_1);
    ADC__vRegisterIRQVectorHandler(&ADC0_SS2__vIRQVectorHandler,ADC_enMODULE_0,ADC_enSEQ_2);

    EDUMKII_Button_vInit(EDUMKII_enBUTTON_ALL);
    EDUMKII_Led_vInitPWM(EDUMKII_enLED_ALL);
    EDUMKII_Joystick_vInit();
    EDUMKII_Buzzer_vInit();
    EDUMKII_Accelerometer_vInit();
    EDUMKII_Microphone_vInit();

    while(1u)
    {
        enButtonState =  EDUMKII_Button_enRead(EDUMKII_enBUTTON_ALL);
        enButton1State =(EDUMKII_nBUTTON_STATE)((uint32_t)enButtonState & (uint32_t)EDUMKII_enBUTTON_1);
        enButton2State =(EDUMKII_nBUTTON_STATE)(((uint32_t)enButtonState & (uint32_t)EDUMKII_enBUTTON_2)>>1UL);
        if(  EDUMKII_enBUTTON_STATE_PRESS == enButton1State)
        {
            if(u32PWMRed<1023UL)
            {
                u32PWMRed++;
            }
            else
            {
                u32PWMRed=0UL;
            }
            EDUMKII_Led_vWritePWM(EDUMKII_enLED_RED,(uint32_t)u32PWMRed);
            EDUMKII_Buzzer_vSet(u32PWMRed);
        }

        if( EDUMKII_enBUTTON_STATE_PRESS ==enButton2State)
        {
            if(u32PWMGreen<1023UL)
            {
                u32PWMGreen++;
            }
            else
            {
                u32PWMGreen=0UL;
            }
            EDUMKII_Led_vWritePWM(EDUMKII_enLED_GREEN,(uint32_t)u32PWMGreen);
            EDUMKII_Buzzer_vSet(0UL);
        }

        SysTick__vDelayUs(50000.0f);
        EDUMKII_Joystick_vSample(&s32JoystickXValue,&s32JoystickYValue,&enJoystickSelectValue);
        EDUMKII_Accelerometer_vSample(&s32AccelerometerXValue,&s32AccelerometerYValue,&s32AccelerometerZValue);
        EDUMKII_Microphone_vSample(&u32MicrophoneValue);
    }
}

uint32_t MAIN_u32MatchSet(const void *pcvKey1, const void *pcvKey2)
{
    Set_nSTATUS enComparison = Set_enSTATUS_ERROR;
    uint32_t u32Value1 = (uint32_t)pcvKey1;
    uint32_t u32Value2 = (uint32_t)pcvKey2;

    if(u32Value1 == u32Value2)
    {
        enComparison = Set_enSTATUS_OK;
    }

    return (uint32_t)enComparison;
}

void MAIN_vIrqCOMP1_INT1(void)
{
    uint32_t u32CompState = 0u;

   u32CompState= ACMP_BITBANDING_ACSTAT1_OVAL;
   if(u32CompState == ACMP_ACSTAT_OVAL_HIGH) /*Rising*/
   {
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, GPIO_enPIN_3);
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, 0u);
   }
   else/*Falling*/
   {
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_3, 0U);
       GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_2, GPIO_enPIN_2);
   }
}




