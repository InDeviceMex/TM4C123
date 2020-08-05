

/**
 * main.c
 */

#include <LCD1602/Generic/LCD1602_Generic.h>

/*Include not allowed, this use directly the PeripheralRegisters*/
#include <float.h>
#include <stdint.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU.h>
#include "stdlib.h"


/*Local functions*/

int main (void);

void MAIN_vInitGPIO(void);
void MAIN_vPWMServoInit(void);
void MAIN_vPWMPos(int8_t s8Angle);
/*ISR Functions*/
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
    float fTimeSystickStart_Task1=0.0;
    float fTimeSystickEnd_Task1=0.0;
    float fTimeSystickStart_Task2=0.0;
    float fTimeSystickEnd_Task2=0.0;
    uint8_t u8Column=0;
    uint8_t u8Row=0;
    uint8_t u8ColumnCurrent=0;
    uint8_t u8Counter=0;
    uint8_t u8Dir=0;
    int16_t s16AngleAbosulte=0;
    __asm(" cpsie i");
    MPU__vInit();
    SCB__vInit();
    SYSEXC__vInit((SYSEXC_nINTERRUPT)(SYSEXC_enINVALID|SYSEXC_enDIV0|
            SYSEXC_enOVERFLOW|SYSEXC_enUNDERFLOW),SYSEXC_enPRI7);
    SYSCTL__enInit();/* system clock 80MHz*/
    WDT__vInit(0xFFFFFFFFu);
    SysTick__enInitUs(10.0f,SCB_enSHPR0);
    EEPROM__enInit();
    MAIN_vInitGPIO();
    LCD1602__enInit();
    enBus=GPIO__enGetBus(GPIO_enPORTF);

    DMA__vSetReady(DMA_enMODULE_0);

    if(GPIO_enAPB==enBus)
    {
        psLedRed=GPIOF_APB_GPIODATA_MASK;
        psLedGreen=GPIOF_APB_GPIODATA_MASK;
        psLedBlue=GPIOF_APB_GPIODATA_MASK;
        psSW1=GPIOF_APB_GPIODATA_MASK;
        psSW2=GPIOF_APB_GPIODATA_MASK;
    }
    LCD1602__enReloadScreenDirect();
    MAIN_vPWMServoInit();
    u8ColumnCurrent=0u;
    u8Column=0u;
    u8Row=0u;
    fTimeSystickStart_Task1 = SysTick__fGetTimeUs();
    fTimeSystickStart_Task2 = SysTick__fGetTimeUs();
    MAIN_vPWMPos((int8_t)(s16AngleAbosulte-90));
    while(1u)
    {
        fTimeSystickEnd_Task1 = SysTick__fGetTimeUs();
        if(fTimeSystickEnd_Task1>=fTimeSystickStart_Task1)
        {
            fTimeSystickEnd_Task1=( fTimeSystickEnd_Task1 - fTimeSystickStart_Task1);
        }
        else
        {
            fTimeSystickEnd_Task1=( fTimeSystickStart_Task1 - fTimeSystickEnd_Task1);
        }
        if(fTimeSystickEnd_Task1>50000.0f)
        {
#ifdef __DEBUG__
            WDT__vSetLoad(WDT_enMODULE_0, 4600000u);
#else
            WDT__vSetLoad(WDT_enMODULE_0, 4003000u);
#endif

            fTimeSystickStart_Task1 = SysTick__fGetTimeUs();
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
            /*LCD1602__enPrintfSection((char*)LCD1602_pu8Buffer2,&u8Column,&u8Row,(uint8_t*)&u8Counter,0u,15u,1u,1u);*/
        }




        fTimeSystickEnd_Task2 = SysTick__fGetTimeUs();
        if(fTimeSystickEnd_Task2>=fTimeSystickStart_Task2)
        {

            fTimeSystickEnd_Task2=( fTimeSystickEnd_Task2 - fTimeSystickStart_Task2);
        }
        else
        {
            fTimeSystickEnd_Task2=( fTimeSystickStart_Task2 - fTimeSystickEnd_Task2);
        }
        if(fTimeSystickEnd_Task2>2000000.0f)
        {
            fTimeSystickStart_Task2 = SysTick__fGetTimeUs();
            if( u8Dir == 0u)
            {
                if(s16AngleAbosulte<=170)
                {
                    s16AngleAbosulte+=10;
                }
                else
                {
                    u8Dir=1u;
                }
            }
            else
            {
                if(s16AngleAbosulte>=10)
                {
                    s16AngleAbosulte-=10;
                }
                else
                {
                    u8Dir=0u;
                }
            }
            MAIN_vPWMPos((int8_t)(s16AngleAbosulte-90));
            if(u8ColumnCurrent>=15u)
            {
                u8ColumnCurrent=0u;
            }
            else
            {
                u8ColumnCurrent++;
            }

        }
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
    GPIO__enSetDigitalConfig(GPIO_enT1CCP1_F3,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    /*SW1 SW0*/
    GPIO__enSetDigitalConfig(GPIO_enGPIOF0,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF4,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);

    GPIO__vSetData(GPIO_enPORTF,(GPIO_nPIN) (GPIO_enPIN1|GPIO_enPIN2), 0u);

    GPIO__vClearInterrupt(GPIO_enPORTF,  (GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4));
    GPIO__vEnInterruptConfig(GPIO_enPORTF, (GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4), GPIO_enINT_CONFIG_EDGE_BOTH);


}

#define SERVO_DEGREEVALUE (444u)
void MAIN_vPWMPos(int8_t s8Angle)
{
    uint32_t u32Count=1600000u-80000u; /*1 ms min value*/
    int32_t s32AngleAbsolute=90; /*Center*/
    if((s8Angle>=-90) && (s8Angle <=90))
    {
        s32AngleAbsolute+=(int32_t)s8Angle;
        s32AngleAbsolute*=444;
        u32Count-=(uint32_t)s32AngleAbsolute;
        TIMER__vSetMatch(TIMER_enT1B,(uint64_t)u32Count);
    }
}

void MAIN_vPWMServoInit(void)
{
    TIMER_EXTRAMODE_Typedef psExtraMode;
    volatile TIMER_MODE_Typedef psMode;
    volatile TIMER_nMODE enCurrentMode =TIMER_enMODE_UNDEF;

    TIMER__vInit();

    psExtraMode.enWaitTrigger=TIMER_enWAIT_NOTRIGGER;
    psExtraMode.enUpdateInterval=TIMER_enUPDATE_INTERVAL_TIMEOUT;
    psExtraMode.enPWMInterrupt=TIMER_enPWM_INT_DIS;
    psExtraMode.enEventInterrupt=TIMER_enEVENT_INT_DIS;
    psExtraMode.enUpdateMatch=TIMER_enUPDATE_MATCH_TIMEOUT;
    psExtraMode.enStall=TIMER_enSTALL_FREEZE;
    psExtraMode.enRTCStall=TIMER_enRTC_STALL_FREEZE;
    psExtraMode.enADCTrigger=TIMER_enADC_TRIGGER_DIS;

    TIMER__enSetExtraModeStruct(TIMER_enT1B,&psExtraMode);
    TIMER__enSetMode_ReloadMatch(TIMER_enT1B,TIMER_enMODE_PWM_INDIVIDUAL_HIGH_POSITIVE_DOWN,0u,1600000u,1600000u-80000u-(800u*0u));
    TIMER__vSetEnable(TIMER_enT1B,TIMER_enENABLE_START);
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

        GPIO__vSetData(GPIO_enPORTF,(GPIO_nPIN) (GPIO_enPIN2), 0u);
        vu32Refresh&=~(uint32_t)enSW2Pin;
    }
}
