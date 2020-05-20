

/**
 * main.c
 */

#include <LCD1602/Generic_Header/LCD1602_Generic.h>
#include <xDriver_MCU/Driver_Header/EEPROM.h>
#include <xDriver_MCU/Driver_Header/FLASH.h>
#include <xDriver_MCU/Driver_Header/FPU.h>
#include <xDriver_MCU/Driver_Header/GPIO.h>
#include <xDriver_MCU/Driver_Header/HIB.h>
#include <xDriver_MCU/Driver_Header/MPU.h>
#include <xDriver_MCU/Driver_Header/NVIC.h>
#include <xDriver_MCU/Driver_Header/SCB.h>
#include <xDriver_MCU/Driver_Header/SYSCTL.h>
#include <xDriver_MCU/Driver_Header/SYSEXC.h>
#include <xDriver_MCU/Driver_Header/SYSTICK.h>
#include <xDriver_MCU/Driver_Header/TIMER.h>
#include "stdlib.h"
/*Local functions*/
void MAIN_vInitGPIO(void);
void MAIN_vInitTIMER(void);
void MAIN_vRGBLedValue(uint8_t u8RedValue, uint8_t u8GreenValue, uint8_t u8BlueValue);
void MAIN_vRGBLedIntPorcentaje(uint8_t u8RedValue, uint8_t u8GreenValue, uint8_t u8BlueValue);
/*ISR Functions*/
void TIMER2W__vISR(void);


GPIODATA_MASK_TypeDef* psLedRed=GPIOF_AHB_GPIODATA_MASK;
GPIODATA_MASK_TypeDef* psLedGreen=GPIOF_AHB_GPIODATA_MASK;
GPIODATA_MASK_TypeDef* psLedBlue=GPIOF_AHB_GPIODATA_MASK;


GPIODATA_MASK_TypeDef* psSW1=GPIOF_AHB_GPIODATA_MASK;
GPIODATA_MASK_TypeDef* psSW2=GPIOF_AHB_GPIODATA_MASK;

GPIO_nPIN enSW2Pin=GPIO_enPIN0;
GPIO_nPIN enLedRedPin=GPIO_enPIN1;
GPIO_nPIN enLedBluePin=GPIO_enPIN2;
GPIO_nPIN enLedGreenPin=GPIO_enPIN3;
GPIO_nPIN enSW1Pin=GPIO_enPIN4;

volatile uint32_t u32Update=0;
volatile uint32_t u32Counter=0;
volatile uint32_t u32Priority=0;

GPIO_nBUS enBus=GPIO_enAPB;
int main(void)
{
    volatile char character[32] ={0};
    uint8_t u8Column=0;
    uint8_t u8Row=0;
    uint8_t u8Counter=0;
    __asm(" cpsie i");
    FPU__vInit();
    MPU__vInit();
    SCB__vInit();
    SYSEXC__vInit((SYSEXC_nINTERRUPT)(SYSEXC_enINVALID|SYSEXC_enDIV0|
            SYSEXC_enOVERFLOW|SYSEXC_enUNDERFLOW),SYSEXC_enPRI7);
    SYSCTL__enInit(); // system clock 80MHz
    SysTick__enInitUs(10,SCB_enSHPR0);
    EEPROM__enInit();
    MAIN_vInitGPIO();
    LCD1602__enInit();

    LCD1602__enPrintfSection((char*)"\n\r\"\x12?\\\x15\x16\x17ñ TM4C123",&u8Column,&u8Row,(uint8_t*)&u8Counter,0,15,0,1);

    LCD1602__enReadString((char*)character,0,0,32);

    enBus=GPIO__enGetBus(GPIO_enPORTF);
    if(GPIO_enAPB==enBus)
    {
        psLedRed=GPIOF_APB_GPIODATA_MASK;
        psLedGreen=GPIOF_APB_GPIODATA_MASK;
        psLedBlue=GPIOF_APB_GPIODATA_MASK;
        psSW1=GPIOF_APB_GPIODATA_MASK;
        psSW2=GPIOF_APB_GPIODATA_MASK;
    }
    LCD1602__enReloadScreenDirect();
    LCD1602__enClearScreenSectionDirect(5,9,0,1);
    while(1)
    {
        //SysTick__vDelayUs(100000);
        if((psSW1->DATA_MASK[enSW1Pin] == 0) && (psSW2->DATA_MASK[enSW2Pin] == 0))
        {
            u8Column=11;
            u8Row=1;
            LCD1602__enPrintfSection((char*)" BOTH",&u8Column,&u8Row,(uint8_t*)&u8Counter,0,15,0,1);
        }
        else if((psSW1->DATA_MASK[enSW1Pin] == 0))
        {
            u8Column=11;
            u8Row=1;
            LCD1602__enWriteStringScreen(0,(char*)"  1  ",&u8Column,&u8Row,(uint8_t*)&u8Counter);
        }
        else if((psSW2->DATA_MASK[enSW2Pin] == 0))
        {
            u8Column=11;
            u8Row=1;
            LCD1602__enWriteStringScreen(0,(char*)"  2  ",&u8Column,&u8Row,(uint8_t*)&u8Counter);
        }
        else
        {
            u8Column=11;
            u8Row=1;
            LCD1602__enWriteStringScreen(0,(char*)" NONE",&u8Column,&u8Row,(uint8_t*)&u8Counter);
        }
    }
}

void MAIN_vInitGPIO(void)
{
    GPIO__vInit();

    //GREEN, RED, BlUE LED
    GPIO__enSetDigitalConfig(GPIO_enT0CCP1_F1,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enT1CCP0_F2,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enT1CCP1_F3,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    //SW1 SW0
    GPIO__enSetDigitalConfig(GPIO_enGPIOF0,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF4,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);


}

