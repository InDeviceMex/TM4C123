

/**
 * main.c
 */

#include <LCD1602/Generic_Header/LCD1602_Generic.h>
#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM.h>
#include <xDriver_MCU/Driver_Header/FLASH/FLASH.h>
#include <xDriver_MCU/Driver_Header/FPU/FPU.h>
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
void MAIN_vIsrSW1(void);
void MAIN_vIsrSW2(void);

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

uint8_t LCD1602_pu8Buffer1[LCD1602_COLUMN_MAX+1]=" INDEVICE TIVAC ";
uint8_t LCD1602_pu8Buffer2[LCD1602_COLUMN_MAX+1]="  LCD1602 SW:   ";
GPIO_nBUS enBus=GPIO_enAPB;

volatile uint32_t vu32Refresh=0;
int main(void)
{
    volatile char character[32] ={0};
    uint8_t u8Column=0;
    uint8_t u8Row=0;
    uint8_t u8ColumnCurrent=0;
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
    u8ColumnCurrent=0;
    u8Column=0;
    u8Row=0;
    while(1)
    {
        SysTick__vDelayUs(800000);

        if(vu32Refresh == (enSW1Pin|enSW2Pin))
        {
            u8Column=13;
            u8Row=0;
            LCD1602__enWriteStringBufferSection((char*)LCD1602_pu8Buffer2,"BT",&u8Column,&u8Row,&u8Counter,0,15,0,0);
        }
        else if(vu32Refresh == (enSW1Pin))
        {
            u8Column=13;
            u8Row=0;
            LCD1602__enWriteStringBufferSection((char*)LCD1602_pu8Buffer2,"1 ",&u8Column,&u8Row,&u8Counter,0,15,0,0);
        }
        else if(vu32Refresh == (enSW2Pin))
        {
            u8Column=13;
            u8Row=0;
            LCD1602__enWriteStringBufferSection((char*)LCD1602_pu8Buffer2,"2 ",&u8Column,&u8Row,&u8Counter,0,15,0,0);
        }
        else
        {
            u8Column=13;
            u8Row=0;
            LCD1602__enWriteStringBufferSection((char*)LCD1602_pu8Buffer2,"NN",&u8Column,&u8Row,&u8Counter,0,15,0,0);
        }
        u8Column=u8ColumnCurrent;
        u8Row=0;
        LCD1602__enPrintfSection((char*)LCD1602_pu8Buffer1,&u8Column,&u8Row,(uint8_t*)&u8Counter,0,15,0,0);
        u8Column=u8ColumnCurrent;
        u8Row=1;
        LCD1602__enPrintfSection((char*)LCD1602_pu8Buffer2,&u8Column,&u8Row,(uint8_t*)&u8Counter,0,15,1,1);
        if(u8ColumnCurrent>=15)
            u8ColumnCurrent=0;
        else
            u8ColumnCurrent++;

    }
}

void MAIN_vInitGPIO(void)
{
    GPIO__vInit();
    GPIO__vRegisterISR(MAIN_vIsrSW2, GPIO_enPORTF, GPIO_enPIN0);
    GPIO__vRegisterISR(MAIN_vIsrSW1, GPIO_enPORTF, GPIO_enPIN4);
    GPIO__vEnInterruptMODULE(GPIO_enPORTF,GPIO_enPRI7);
    //GREEN, RED, BlUE LED
    GPIO__enSetDigitalConfig(GPIO_enGPIOF1,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF2,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF3,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    //SW1 SW0
    GPIO__enSetDigitalConfig(GPIO_enGPIOF0,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF4,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);

    GPIO__vSetData(GPIO_enPORTF,(GPIO_nPIN) (GPIO_enPIN1|GPIO_enPIN2|GPIO_enPIN3), 0);

    GPIO__vClearInterrupt(GPIO_enPORTF,  (GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4));
    GPIO__vEnInterruptConfig(GPIO_enPORTF, (GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4), GPIO_enINT_CONFIG_EDGE_BOTH);


}

void MAIN_vIsrSW1(void)
{
    if(psSW1->DATA_MASK[enSW1Pin]==0)
    {
        GPIO__vSetData(GPIO_enPORTF,(GPIO_nPIN) (GPIO_enPIN1), GPIO_enPIN1);
        vu32Refresh|=enSW1Pin;
    }
    else
    {

        GPIO__vSetData(GPIO_enPORTF,(GPIO_nPIN) (GPIO_enPIN1), 0);
        vu32Refresh&=~enSW1Pin;
    }
}


void MAIN_vIsrSW2(void)
{

    if(psSW2->DATA_MASK[enSW2Pin]==0)
    {
        GPIO__vSetData(GPIO_enPORTF,(GPIO_nPIN) (GPIO_enPIN2), GPIO_enPIN2);
        vu32Refresh|=enSW2Pin;
    }
    else
    {

        GPIO__vSetData(GPIO_enPORTF,(GPIO_nPIN) (GPIO_enPIN2), GPIO_enPIN0);
        vu32Refresh&=~enSW2Pin;
    }
}
