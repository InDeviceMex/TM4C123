

/**
 * main.c
 */

#include "stdlib.h"
#include "SCB.h"
#include "FPU.h"
#include "MPU.h"
#include "SYSTICK.h"
#include "SYSEXC.h"
#include "HIB.h"
#include "SYSCTL.h"
#include "NVIC.h"
#include "EEPROM.h"
#include "FLASH.h"
//#include "UDMA.h"
#include "GPIO.h"
#include "TIMER.h"

#include "LCD1602.h"
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

    LCD1602__enPrintf((char*)"INDEVICE TM4C12\n\r%d %u %c%lld %",&u8Column,&u8Row,(uint8_t*)&u8Counter,(int16_t)-10,(int16_t)6,(char)'A',(uint64_t)-11,(char*)" HOLA");

    u8Row=1;
    u8Column=0;
    LCD1602__enWriteStringSection((char*)"LALO",&u8Column,&u8Row,(uint8_t*)&u8Counter,5,9,0,1);
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

    while(1)
    {
        //SysTick__vDelayUs(100000);
        if((psSW1->DATA_MASK[enSW1Pin] == 0) && (psSW2->DATA_MASK[enSW2Pin] == 0))
        {
            u8Column=11;
            u8Row=1;
            LCD1602__enWriteString((char*)" BOTH",&u8Column,&u8Row,(uint8_t*)&u8Counter);
        }
        else if((psSW1->DATA_MASK[enSW1Pin] == 0))
        {
            u8Column=11;
            u8Row=1;
            LCD1602__enWriteString((char*)"  1  ",&u8Column,&u8Row,(uint8_t*)&u8Counter);
        }
        else if((psSW2->DATA_MASK[enSW2Pin] == 0))
        {
            u8Column=11;
            u8Row=1;
            LCD1602__enWriteString((char*)"  2  ",&u8Column,&u8Row,(uint8_t*)&u8Counter);
        }
        else
        {
            u8Column=11;
            u8Row=1;
            LCD1602__enWriteString((char*)" NONE",&u8Column,&u8Row,(uint8_t*)&u8Counter);
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

