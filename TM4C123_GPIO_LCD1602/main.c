

/**
 * main.c
 */

#include <DRIVER.h>
#include <LCD1602/Generic_Header/LCD1602_Generic.h>

#include <xDriver_MCU/Driver_Header/GPIO.h>
#include <xDriver_MCU/Driver_Header/TIMER.h>
#include "stdlib.h"


/*Local functions*/

int main (void);

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

char LCD1602_pu8Buffer1[LCD1602_COLUMN_MAX+1u]=" INDEVICE TIVAC ";
char LCD1602_pu8Buffer2[LCD1602_COLUMN_MAX+1u]="  LCD1602 SW:   ";
GPIO_nBUS enBus=GPIO_enAPB;

volatile uint32_t vu32Refresh=0;


int main(void)
{
    volatile char character[32] ={0};
    float fTimeSystickStart=0.0;
    float fTimeSystickEnd=0.0;
    uint8_t u8Column=0;
    uint8_t u8Row=0;
    uint8_t u8ColumnCurrent=0;
    uint8_t u8Counter=0;
    __asm(" cpsie i");
    MPU__vInit();
    SCB__vInit();
    SYSEXC__vInit((SYSEXC_nINTERRUPT)(SYSEXC_enINVALID|SYSEXC_enDIV0|
            SYSEXC_enOVERFLOW|SYSEXC_enUNDERFLOW),SYSEXC_enPRI7);
    SYSCTL__enInit();/* system clock 80MHz*/
    SysTick__enInitUs(10.0f,SCB_enSHPR0);
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
    u8ColumnCurrent=0u;
    u8Column=0u;
    u8Row=0u;
    while(1u)
    {

        fTimeSystickStart = SysTick__fGetTimeUs();
        if(vu32Refresh == (uint32_t)((uint32_t)enSW1Pin|(uint32_t)enSW2Pin))
        {
            u8Column=13u;
            u8Row=0u;
            LCD1602__enWriteStringBufferSection((char*)LCD1602_pu8Buffer2,(const char*)"BT",&u8Column,&u8Row,&u8Counter,0u,15u,0u,0u);
        }
        else if(vu32Refresh == (enSW1Pin))
        {
            u8Column=13u;
            u8Row=0u;
            LCD1602__enWriteStringBufferSection((char*)LCD1602_pu8Buffer2,(const char*)"1 ",&u8Column,&u8Row,&u8Counter,0u,15u,0u,0u);
        }
        else if(vu32Refresh == (enSW2Pin))
        {
            u8Column=13u;
            u8Row=0u;
            LCD1602__enWriteStringBufferSection((char*)LCD1602_pu8Buffer2,(const char*)"2 ",&u8Column,&u8Row,&u8Counter,0u,15u,0u,0u);
        }
        else
        {
            u8Column=13u;
            u8Row=0u;
            LCD1602__enWriteStringBufferSection((char*)LCD1602_pu8Buffer2,(const char*)"NN",&u8Column,&u8Row,&u8Counter,0u,15u,0u,0u);
        }
        u8Column=u8ColumnCurrent;
        u8Row=0u;
        /*LCD1602__enPrintfSection((char*)LCD1602_pu8Buffer1,&u8Column,&u8Row,(uint8_t*)&u8Counter,0u,15u,0u,0u);*/
        u8Column=u8ColumnCurrent;
        u8Row=1u;
        /*  LCD1602__enPrintfSection((char*)LCD1602_pu8Buffer2,&u8Column,&u8Row,(uint8_t*)&u8Counter,0u,15u,1u,1u);*/
        if(u8ColumnCurrent>=15u)
        {
            u8ColumnCurrent=0u;
        }
        else
        {
            u8ColumnCurrent++;
        }


        fTimeSystickEnd = SysTick__fGetTimeUs();
        fTimeSystickEnd-= fTimeSystickStart;
        fTimeSystickEnd=1000000.0f-fTimeSystickEnd;
        SysTick__vDelayUs(fTimeSystickEnd);

    }
}

void MAIN_vInitGPIO(void)
{
    GPIO__vInit();
    GPIO__vRegisterISR(&MAIN_vIsrSW2, GPIO_enPORTF, GPIO_enPIN0);
    GPIO__vRegisterISR(&MAIN_vIsrSW1, GPIO_enPORTF, GPIO_enPIN4);
    GPIO__vEnInterruptMODULE(GPIO_enPORTF,GPIO_enPRI7);
    /*GREEN, RED, BlUE LED*/
    GPIO__enSetDigitalConfig(GPIO_enGPIOF1,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF2,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF3,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    /*SW1 SW0*/
    GPIO__enSetDigitalConfig(GPIO_enGPIOF0,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF4,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);

    GPIO__vSetData(GPIO_enPORTF,(GPIO_nPIN) (GPIO_enPIN1|GPIO_enPIN2|GPIO_enPIN3), 0u);

    GPIO__vClearInterrupt(GPIO_enPORTF,  (GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4));
    GPIO__vEnInterruptConfig(GPIO_enPORTF, (GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4), GPIO_enINT_CONFIG_EDGE_BOTH);


}

void MAIN_vIsrSW1(void)
{
    if(psSW1->DATA_MASK[enSW1Pin]==0u)
    {
        GPIO__vSetData(GPIO_enPORTF,(GPIO_nPIN) (GPIO_enPIN1), GPIO_enPIN1);
        vu32Refresh|=(uint32_t)enSW1Pin;
    }
    else
    {

        GPIO__vSetData(GPIO_enPORTF,(GPIO_nPIN) (GPIO_enPIN1), 0u);
        vu32Refresh&=~(uint32_t)enSW1Pin;
    }
}


void MAIN_vIsrSW2(void)
{

    if(psSW2->DATA_MASK[(uint32_t)enSW2Pin]==0u)
    {
        GPIO__vSetData(GPIO_enPORTF,(GPIO_nPIN) (GPIO_enPIN2), GPIO_enPIN2);
        vu32Refresh|=(uint32_t)enSW2Pin;
    }
    else
    {

        GPIO__vSetData(GPIO_enPORTF,(GPIO_nPIN) (GPIO_enPIN2), GPIO_enPIN0);
        vu32Refresh&=~(uint32_t)enSW2Pin;
    }
}
