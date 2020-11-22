

/**
 * main.c
 */

/*Standard Libraries*/
#include <xUtils/Standard/Standard.h>
#include "stdlib.h"

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

void MAIN_vTaskLCDUpdate(void);
void MAIN_vTaskServo(void);
void MAIN_vTaskLCDReInit(void);
void MAIN_vTaskUltrasonic(void);

void MAIN_vInitGPIO(void);
void MAIN_vInitTIMER(void);

/*ISR Functions*/
void MAIN_SW1_vIRQSourceHandler(void);
void MAIN_SW2_vIRQSourceHandler(void);
void MAIN_TIMER3A_vIRQSourceHandler(void);
void MAIN_TIMER3B_vIRQSourceHandler(void);

/*Global Variables*/
static uint64_t MAIN_u64Valueus=0u;

static ServoMoto_SG90_Typedef MAIN_sServoMotor1={0};
static ServoMoto_SG90_Typedef MAIN_sServoMotor2={0};
static ServoMoto_SG90_nENABLE MAIN_enServoEnable=ServoMoto_SG90_enDISABLE;

char pu8Buffer2[LCD1602_COLUMN_MAX+1u]="DISTANCE:       ";
static float32_t fAngleAbosulte=0.0f;


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
    HIB__enInit(5u, 0u);
    /*WDT__vInit(0xFFFFFFFFu);*/
    SysTick__enInitUs(100.0f,SCB_enSHPR0);
    LCD1602__enInit();
    LCD1602__enReloadScreenDirect();

    ServoMotor_SG90__enInit(&MAIN_sServoMotor1,TIMER_enT1B,GPIO_enT1CCP1_F3,550u,2500u);
    ServoMotor_SG90__enInit(&MAIN_sServoMotor2,TIMER_enT0B,GPIO_enT0CCP1,800u,2000u);
    ServoMotor_SG90__enSetAngleAbsoluteFloat(&MAIN_sServoMotor1,(fAngleAbosulte));
    ServoMotor_SG90__enSetAngleAbsoluteFloat(&MAIN_sServoMotor2,(fAngleAbosulte));
    MAIN_vInitTIMER();
    while(1u)
    {
        MAIN_vTaskLCDUpdate();
        MAIN_vTaskServo();
        MAIN_vTaskUltrasonic();
        MAIN_vTaskLCDReInit();
    }
}

void MAIN_vTaskLCDUpdate(void)
{
    static float32_t fTimeSystickStart_Task1=0.0f;
    static float32_t fTimeSystickEnd_Task1=0.0f;
    uint8_t u8Column=0u;
    uint8_t u8Row=0u;
    float32_t fValueus=0.0f;
    uint8_t u8Counter=0u;
    char pcBuffer[LCD1602_COLUMN_MAX+1u] = {0};
    fTimeSystickEnd_Task1 = SysTick__fGetTimeUs();
    if(fTimeSystickEnd_Task1>=fTimeSystickStart_Task1)
    {
        fTimeSystickEnd_Task1=( fTimeSystickEnd_Task1 - fTimeSystickStart_Task1);
    }
    else
    {
        fTimeSystickEnd_Task1=( fTimeSystickStart_Task1 - fTimeSystickEnd_Task1);
    }
    if(fTimeSystickEnd_Task1>750000.0f)
    {
        fTimeSystickStart_Task1 = SysTick__fGetTimeUs();

        u8Column=11u;
        u8Row=0u;
        LCD1602__enWriteStringBufferSection((char*)pu8Buffer2,(const char*)"     ",&u8Column,&u8Row,&u8Counter,0u,15u,0u,0u);
        fValueus= (float32_t) MAIN_u64Valueus;
        /*v = 331m/s + 0.6m/s/C * T*/
        fValueus/=58.0f;
        CONV__u8Float2String((float64_t)fValueus,0u,3u,3,1,pcBuffer);

        u8Column=11u;
        u8Row=0u;
        LCD1602__enWriteStringBufferSection((char*)pu8Buffer2,(const char*)pcBuffer,&u8Column,&u8Row,&u8Counter,0u,15u,0u,0u);

        u8Column=0u;
        u8Row=1u;
        LCD1602__enWriteStringScreenSectionDirect_Secure((char*)pu8Buffer2,&u8Column,&u8Row,(uint8_t*)&u8Counter,0u,15u,1u,1u, 16u);
    }
}

void MAIN_vTaskServo(void)
{
    static float32_t fTimeSystickStart_Task2=0.0f;
    static float32_t fTimeSystickEnd_Task2=0.0f;
    static uint8_t u8Dir=0u;
    fTimeSystickEnd_Task2 = SysTick__fGetTimeUs();
    if(fTimeSystickEnd_Task2>=fTimeSystickStart_Task2)
    {
        fTimeSystickEnd_Task2=( fTimeSystickEnd_Task2 - fTimeSystickStart_Task2);
    }
    else
    {
        fTimeSystickEnd_Task2=( fTimeSystickStart_Task2 - fTimeSystickEnd_Task2);
    }
    if(fTimeSystickEnd_Task2>120000.0f)
    {
    fTimeSystickStart_Task2 = SysTick__fGetTimeUs();

    if(ServoMoto_SG90_enENABLE == MAIN_enServoEnable)
    {
        if( u8Dir == 0u)
        {
          if(fAngleAbosulte<=176.0f)
          {
              fAngleAbosulte+=4.0f;
          }
          else
          {
              u8Dir=1u;
          }
        }
        else
        {
          if(fAngleAbosulte>=4.0f)
          {
              fAngleAbosulte-=4.0f;
          }
          else
          {
              u8Dir=0u;
          }
        }
        ServoMotor_SG90__enSetAngleAbsoluteFloat(&MAIN_sServoMotor2,(fAngleAbosulte));
        ServoMotor_SG90__enSetAngleAbsoluteFloat(&MAIN_sServoMotor1,(fAngleAbosulte));
        }
    }

}


void MAIN_vTaskLCDReInit(void)
{
    static float32_t fTimeSystickStart_Task3=0.0f;
    static float32_t fTimeSystickEnd_Task3=0.0f;
    static uint8_t u8Reprint = 0u;

    char pu8Buffer_Compare[2u*(LCD1602_COLUMN_MAX+1u)]={0};
    uint8_t u8Column=0u;
    uint8_t u8Row=0u;
    uint8_t u8Pos=0u;
    uint8_t u8Counter=0;
    fTimeSystickEnd_Task3 = SysTick__fGetTimeUs();
    if(fTimeSystickEnd_Task3>=fTimeSystickStart_Task3)
    {
        fTimeSystickEnd_Task3=( fTimeSystickEnd_Task3 - fTimeSystickStart_Task3);
    }
    else
    {
        fTimeSystickEnd_Task3=( fTimeSystickStart_Task3 - fTimeSystickEnd_Task3);
    }
    if(fTimeSystickEnd_Task3>2000000.0f)
    {
        fTimeSystickStart_Task3 = SysTick__fGetTimeUs();
        u8Column=0u;
        u8Row=1u;
        for(u8Pos = 0u; u8Pos<LCD1602_COLUMN_MAX;u8Pos++)
        {
            LCD1602__enReadScreenDirect(&pu8Buffer_Compare[u8Pos], &u8Column, &u8Row) ;
            if(pu8Buffer_Compare[u8Pos] != pu8Buffer2[u8Pos])
            {
                u8Reprint =1u;
                break;
            }
            u8Column++;
        }
        if(1u == u8Reprint)
        {
            u8Reprint = 0u;
            LCD1602__enInit();
            LCD1602__enReloadScreenDirect();
            u8Column=0u;
            u8Row=1u;
            LCD1602__enWriteStringScreenSectionDirect_Secure((char*)pu8Buffer2,&u8Column,&u8Row,(uint8_t*)&u8Counter,0u,15u,1u,1u, 16u);
        }
    }
}

void MAIN_vInitTIMER(void)
{
    TIMER_EXTRAMODE_Typedef psExtraMode;

    TIMER__vInit();

    TIMER__vEnInterruptVector(TIMER_enT3A,TIMER_enPRI1);
    TIMER__vEnInterruptVector(TIMER_enT3B,TIMER_enPRI1);

    TIMER__vRegisterIRQSourceHandler(&MAIN_TIMER3A_vIRQSourceHandler,TIMER_enT3A,TIMER_enINTERRUPT_TIMEOUT);
    TIMER__vRegisterIRQSourceHandler(&MAIN_TIMER3B_vIRQSourceHandler,TIMER_enT3B,TIMER_enINTERRUPT_CAPTURE_EVENT);


    psExtraMode.enWaitTrigger=TIMER_enWAIT_NOTRIGGER;
    psExtraMode.enPWMInterrupt=TIMER_enPWM_INT_DIS;
    psExtraMode.enEventInterrupt=TIMER_enEVENT_INT_DIS;
    psExtraMode.enUpdateMatch=TIMER_enUPDATE_MATCH_TIMEOUT;
    psExtraMode.enStall=TIMER_enSTALL_FREEZE;
    psExtraMode.enRTCStall=TIMER_enRTC_STALL_FREEZE;
    psExtraMode.enADCTrigger=TIMER_enADC_TRIGGER_DIS;

    TIMER__enSetExtraModeStruct(TIMER_enT3A,&psExtraMode);

    psExtraMode.enUpdateInterval=TIMER_enUPDATE_INTERVAL_CYCLE;
    psExtraMode.enWaitTrigger=TIMER_enWAIT_DAISY;
    TIMER__enSetExtraModeStruct(TIMER_enT3B,&psExtraMode);

    TIMER__enSetMode_Reload(TIMER_enT3A,TIMER_enMODE_ONE_SHOT_INDIVIDUAL_UP,0u,8000u);
    TIMER__enSetMode_Reload(TIMER_enT3B,TIMER_enMODE_EDGE_TIME_POSITIVE_INDIVIDUAL_DOWN,0u,0xFFFFFFu);

    GPIO__enSetDigitalConfig(GPIO_enT3CCP1,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN);

    TIMER__vEnInterruptSource(TIMER_enT3A,(TIMER_nINT)(TIMER_enINT_TIMEOUT));
    TIMER__vClearInterruptSource(TIMER_enT3B,(TIMER_nINT)(TIMER_enINT_CAPTURE_EVENT));
    TIMER__vEnInterruptSource(TIMER_enT3B,(TIMER_nINT)(TIMER_enINT_CAPTURE_EVENT));
}



void MAIN_vTaskUltrasonic(void)
{
    static float32_t fTimeSystickStart_Task4=0.0f;
    static float32_t fTimeSystickEnd_Task4=0.0f;
    fTimeSystickEnd_Task4 = SysTick__fGetTimeUs();
    if(fTimeSystickEnd_Task4>=fTimeSystickStart_Task4)
    {
        fTimeSystickEnd_Task4=( fTimeSystickEnd_Task4 - fTimeSystickStart_Task4);
    }
    else
    {
        fTimeSystickEnd_Task4=( fTimeSystickStart_Task4 - fTimeSystickEnd_Task4);
    }
    if(fTimeSystickEnd_Task4>500000.0f)
    {
        fTimeSystickStart_Task4 = SysTick__fGetTimeUs();

        /*Capture Timer for Sound*/
        TIMER__vSetEdgeEvent(TIMER_enT3B,TIMER_enEDGE_EVENT_POSITIVE);
        TIMER__vClearInterruptSource(TIMER_enT3B,(TIMER_nINT)(TIMER_enINT_CAPTURE_EVENT));
        TIMER__vSetReload(TIMER_enT3B, 0u, 3040000u);
        TIMER__vSetEnable(TIMER_enT3B,TIMER_enENABLE_START);

        /*Trigger Pin to HC-SR04*/
        GPIO__vSetData(GPIO_enPORT_A,(GPIO_nPIN) GPIO_enPIN_7, GPIO_enPIN_7);
        /*Start OneShot timer in order to know when stop trigger signal*/
        TIMER__vSetEnable(TIMER_enT3A,TIMER_enENABLE_START);
    }
}

void MAIN_vInitGPIO(void)
{
    GPIO_nPIN enSW2Pin=GPIO_enPIN_0;
    GPIO__vInit();
    GPIO__vRegisterIRQSourceHandler(&MAIN_SW2_vIRQSourceHandler, GPIO_enPORT_F, enSW2Pin);
    GPIO__vRegisterIRQSourceHandler(&MAIN_SW1_vIRQSourceHandler, GPIO_enPORT_F, GPIO_enPIN_4);
    GPIO__vEnInterruptVector(GPIO_enPORT_F,GPIO_enPRI7);
    /*GREEN, RED, BlUE LED*/
    GPIO__enSetDigitalConfig(GPIO_enGPIOA7,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF1,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF2,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    /*SW1 SW0*/
    GPIO__enSetDigitalConfig(GPIO_enGPIOF0,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF4,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);

    GPIO__vSetData(GPIO_enPORT_F,(GPIO_nPIN) (GPIO_enPIN_1|GPIO_enPIN_4), 0u);
    GPIO__vSetData(GPIO_enPORT_A,(GPIO_nPIN) GPIO_enPIN_7, 0u);

    GPIO__vClearInterruptSource(GPIO_enPORT_F,  (GPIO_nPIN)(enSW2Pin|GPIO_enPIN_4));
    GPIO__vEnInterruptConfig(GPIO_enPORT_F, (GPIO_nPIN)(enSW2Pin|GPIO_enPIN_4), GPIO_enINT_CONFIG_EDGE_BOTH);


}

void MAIN_TIMER3A_vIRQSourceHandler(void)
{
    GPIO__vSetData(GPIO_enPORT_A,(GPIO_nPIN) GPIO_enPIN_7, 0u);
}

void MAIN_TIMER3B_vIRQSourceHandler(void)
{
    static uint64_t u64Rising = 0u;
    static uint64_t u64Falling = 0u;
    TIMER_nEDGE_EVENT enEvent=TIMER_enEDGE_EVENT_UNDEF;
    enEvent = TIMER__enGetEdgeEvent(TIMER_enT3B);
    if(enEvent == TIMER_enEDGE_EVENT_POSITIVE)
    {
        TIMER__vSetEdgeEvent(TIMER_enT3B,TIMER_enEDGE_EVENT_NEGATIVE);
        TIMER__enGetCount(TIMER_enT3B, &u64Rising);
    }
    else
    {
        TIMER__enGetCount(TIMER_enT3B, &u64Falling);
        TIMER__vSetEnable(TIMER_enT3B,TIMER_enENABLE_STOP);
        if(u64Falling>u64Rising)
        {
            MAIN_u64Valueus = u64Falling - u64Rising;
        }
        else
        {
            MAIN_u64Valueus = u64Rising;
            MAIN_u64Valueus -= u64Falling;
        }
        MAIN_u64Valueus/=80U;
    }
}

void MAIN_SW1_vIRQSourceHandler(void)
{
    ServoMotor_SG90__enEnable(&MAIN_sServoMotor1);
    ServoMotor_SG90__enEnable(&MAIN_sServoMotor2);
    MAIN_enServoEnable= ServoMoto_SG90_enENABLE;

}

void MAIN_SW2_vIRQSourceHandler(void)
{
    ServoMotor_SG90__enDisable(&MAIN_sServoMotor1);
    ServoMotor_SG90__enDisable(&MAIN_sServoMotor2);

    MAIN_enServoEnable= ServoMoto_SG90_enDISABLE;
}
