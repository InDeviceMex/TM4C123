

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

void MAIN_vInitGPIO(void);

/*ISR Functions*/
void MAIN_SW1_vIRQSourceHandler(void);
void MAIN_SW2_vIRQSourceHandler(void);
void MAIN_DMA_CH30_vIRQSourceHandler(void);
void MAIN_DMA_CH15_vIRQSourceHandler(void);

/*Global Variables*/

uint8_t pu8DMASourceBufferCh0[100u] = {0u};
uint8_t pu8DMADestBufferCh0[100u] = {0u};

DMACHCTL_TypeDef enDMACh0Control =
{
     1u,
     0,
     100u-1u,
     7u,
     0,
     0,
     0,
     0,
     0,
};

int32_t main(void)
{
    uint32_t u32Pos= 0u;

    DMA_CONFIG_Typedef enDMACh0Config=
    {
       DMA_enCH_REQTYPE_BOTH,
       DMA_enCH_PERIPHERAL_ENA,
       DMA_enCH_CTL_PRIMARY ,
       DMA_enCH_PRIO_DEFAULT ,
       DMA_enCH_ENCODER_3
    };
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

    for(u32Pos =0u; u32Pos<100u; u32Pos++)
    {
        pu8DMASourceBufferCh0[u32Pos] =(uint8_t)u32Pos;
    }
    DMA__vInit();
    DMA__vEnInterruptSourceVector(DMA_enVECTOR_SW,DMA_enPRI3);
    DMA__vRegisterIRQSourceHandler(&MAIN_DMA_CH30_vIRQSourceHandler,DMA_enCH_MODULE_15, DMA_enCH_ENCODER_4 );
    DMA__vRegisterIRQSourceHandler(&MAIN_DMA_CH15_vIRQSourceHandler,DMA_enCH_MODULE_15, DMA_enCH_ENCODER_3);
    DMA_CH__vSetPrimaryDestEndAddress(DMA_enCH_MODULE_15, (uint32_t) &pu8DMADestBufferCh0[100-1]);
    DMA_CH__vSetPrimarySourceEndAddress(DMA_enCH_MODULE_15, (uint32_t) &pu8DMASourceBufferCh0[100-1]);
    DMA_CH__vSetConfigStruct(DMA_enCH_MODULE_15, enDMACh0Config);
    DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_15, enDMACh0Control);
    DMA_CH__vSetEnable(DMA_enCH_MODULE_15,DMA_enCH_ENA_ENA);
    DMA_CH__vSetSoftwareRequest(DMA_enCH_MODULE_15);

/*
    DMA__vRegisterIRQSourceHandler(&MAIN_DMA_CH30_vIRQSourceHandler,DMA_enCH_MODULE_5, DMA_enCH_ENCODER_4 );
    DMA_CH__vSetPrimaryDestEndAddress(DMA_enCH_MODULE_5, (uint32_t) &pu8DMASourceBufferCh0[100-1]);
    DMA_CH__vSetPrimarySourceEndAddress(DMA_enCH_MODULE_5, (uint32_t) &pu8DMADestBufferCh0[100-1]);
    DMA_CH__vSetConfigStruct(DMA_enCH_MODULE_5, enDMACh0Config);
    DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_5, enDMACh0Control);
    DMA_CH__vSetEnable(DMA_enCH_MODULE_5,DMA_enCH_ENA_ENA);
*/
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

    /*GPIO__vEnDMATrigger(GPIO_enPORT_F,(GPIO_nPIN)(enSW2Pin));*/
    GPIO__vClearInterruptSource(GPIO_enPORT_F,  (GPIO_nPIN)(enSW2Pin|enSW1Pin));
    GPIO__vEnInterruptConfig(GPIO_enPORT_F, (GPIO_nPIN)(enSW2Pin|enSW1Pin), GPIO_enINT_CONFIG_EDGE_BOTH);
    /*GPIO__vDisInterruptSource(GPIO_enPORT_F,(GPIO_nPIN)(enSW2Pin|enSW1Pin));*/

}


void MAIN_SW1_vIRQSourceHandler(void)
{
    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_1, GPIO_enPIN_1);
}
void MAIN_DMA_CH15_vIRQSourceHandler(void)
{
    /*DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_15, enDMACh0Control);*/
    /*DMA_CH__vSetEnable(DMA_enCH_MODULE_15,DMA_enCH_ENA_ENA);*/
}

void MAIN_DMA_CH30_vIRQSourceHandler(void)
{
    /*DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_15, enDMACh0Control);*/
    /*DMA_CH__vSetEnable(DMA_enCH_MODULE_15,DMA_enCH_ENA_ENA);*/
}

void MAIN_SW2_vIRQSourceHandler(void)
{

    GPIO__vSetData(GPIO_enPORT_F, GPIO_enPIN_1, 0u);
}
