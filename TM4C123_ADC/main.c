

/**
 * main.c
 */

/*Standard Libraries*/
#include <xUtils/Standard/Standard.h>
#include "stdlib.h"
#include "stdarg.h"
/*MCU Drivers*/
#include <xDriver_MCU.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

/*Applications Drivers*/
#include <LCD1602/Generic/LCD1602_Generic.h>
#include <xApplication/ServoMotor_SG90/ServoMotor_SG90.h>

/*Utils Libraries*/
#include <xUtils/Conversion/Conversion.h>

/*Local functions*/
int32_t main (void);

void MAIN_vInitGPIO(void);

/*ISR Functions*/
void MAIN_SW1_vIRQSourceHandler(void);
void MAIN_SW2_vIRQSourceHandler(void);
void MAIN_vHIB_RTCALTSourceHandler(void);

int32_t main(void)
{
    __asm(" cpsie i");
    MPU__vInit();
    SCB__vInit();
    FLASH__enInit();
    EEPROM__enInit();
    SYSEXC__vInit((SYSEXC_nINT)((uint32_t)SYSEXC_enINT_INVALID|(uint32_t)SYSEXC_enINT_DIV0|
          (uint32_t)SYSEXC_enINT_OVERFLOW|(uint32_t)SYSEXC_enINT_UNDERFLOW),SYSEXC_enPRI7);
    SYSCTL__enInit();/* system clock 80MHz*/
    MAIN_vInitGPIO();
    HIB__enInit(5u, 0u,&MAIN_vHIB_RTCALTSourceHandler);
    /*WDT__vInit(0xFFFFFFFFu);*/
    SysTick__enInitUs(100.0f,SCB_enSHPR0);

    while(1u)
    {
    }
}

void MAIN_vInitGPIO(void)
{
    GPIO_nPIN enSW2Pin=GPIO_enPIN_0;
    GPIO_nPIN enLedRedPin=GPIO_enPIN_1;
    GPIO_nPIN enLedBluePin=GPIO_enPIN_2;
    GPIO_nPIN enSW1Pin=GPIO_enPIN_4;
    GPIO__vInit();
    GPIO__vRegisterIRQSourceHandler(&MAIN_SW2_vIRQSourceHandler, GPIO_enPORT_F, enSW2Pin);
    GPIO__vRegisterIRQSourceHandler(&MAIN_SW1_vIRQSourceHandler, GPIO_enPORT_F, enSW1Pin);
    GPIO__vEnInterruptVector(GPIO_enPORT_F,GPIO_enPRI7);
    /*GREEN, RED, BlUE LED*/
    GPIO__enSetDigitalConfig(GPIO_enGPIOA7,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF1,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF2,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    /*SW1 SW0*/
    GPIO__enSetDigitalConfig(GPIO_enGPIOF0,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF4,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);

    GPIO__vSetData(GPIO_enPORT_F,(GPIO_nPIN) (enLedRedPin|enLedBluePin), 0u);

    GPIO__vClearInterruptSource(GPIO_enPORT_F,  (GPIO_nPIN)(enSW2Pin|enSW1Pin));
    GPIO__vEnInterruptConfig(GPIO_enPORT_F, (GPIO_nPIN)(enSW2Pin|enSW1Pin), GPIO_enINT_CONFIG_EDGE_BOTH);
}


void MAIN_vHIB_RTCALTSourceHandler(void)
{
    static uint32_t u32Value=GPIO_enPIN_2;
    HIB__enSetLoad(0u);
    GPIO__vSetData(GPIO_enPORT_F,(GPIO_nPIN) (GPIO_enPIN_2), u32Value);
    u32Value^=GPIO_enPIN_2;

}

void MAIN_SW1_vIRQSourceHandler(void)
{
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_1, GPIO_enPIN_1);
}

void MAIN_SW2_vIRQSourceHandler(void)
{

    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_1, 0u);
}
