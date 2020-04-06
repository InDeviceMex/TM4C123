

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

void GPIOF0_vISR(void);
void GPIOF4_vISR(void);

//uint32_t pu32Array[14]={0,1,2,3,4,5,6,7,8,9,10,11,0xAA55CFDA,0x11223344};
uint32_t pu32Array[14]={0};
uint32_t pu32Array1[14]={0xBF00,1,2,3,4,5,6,7,8,9,10,11,0xAA55CFDA,0x11223344};
void main(void)
{
    volatile uint32_t memory=0;
    volatile uint32_t u32ValueSW=0;
    volatile uint32_t u32Memory=0;
    volatile uint16_t u16Memory=0;
    volatile uint8_t u8Memory=0;

    __asm(" cpsie i");
    FPU__vInit();
    MPU__vInit();
    SCB__vInit();
    SYSEXC__vInit((SYSEXC_nINTERRUPT)(SYSEXC_enINVALID|SYSEXC_enDIV0|
            SYSEXC_enOVERFLOW|SYSEXC_enUNDERFLOW),SYSEXC_enPRI7);
    SYSCTL__enInit(); // system clock 80MHz
    SysTick__enInitUs(10,SCB_enSHPR0);
    EEPROM__enInit();

    GPIO__vInit();
    GPIO__vRegisterISR(GPIOF0_vISR,GPIO_enPORTF,GPIO_enPIN0);
    GPIO__vRegisterISR(GPIOF4_vISR,GPIO_enPORTF,GPIO_enPIN4);
    GPIO__vEnInterruptMODULE(GPIO_enPORTF,GPIO_enPRI7);
    //GREEN LED
    GPIO__vSetDirection(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN3|GPIO_enPIN2|GPIO_enPIN1),GPIO_enOUTPUT);
    GPIO__vSetDrive(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN3|GPIO_enPIN2|GPIO_enPIN1),GPIO_enDRIVE_2mA);
    GPIO__vEnDigital(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN3|GPIO_enPIN2|GPIO_enPIN1));
    GPIO__vDisAnalog(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN3|GPIO_enPIN2|GPIO_enPIN1));
    GPIO__vSetOutputMode(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN3|GPIO_enPIN2|GPIO_enPIN1),GPIO_enOUTMODE_PP);
    GPIO__vDisAltFunction(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN3|GPIO_enPIN2|GPIO_enPIN1));
    GPIO__vSetResistorMode(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN3|GPIO_enPIN2|GPIO_enPIN1),GPIO_enRESMODE_INACTIVE);


    //SW1
    GPIO__vSetDirection(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4),GPIO_enINPUT);
    GPIO__vSetDrive(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4),GPIO_enDRIVE_2mA);
    GPIO__vEnDigital(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4));
    GPIO__vDisAnalog(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4));
    GPIO__vSetOutputMode(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4),GPIO_enOUTMODE_OD);
    GPIO__vDisAltFunction(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4));
    GPIO__vSetResistorMode(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4),GPIO_enRESMODE_PULLUP);


    GPIO__vSetIntEdge(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4),GPIO_enEDGE_BOTH);
    GPIO__vClearInterrupt(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4));
    GPIO__vEnInterrupt(GPIO_enPORTF,(GPIO_nPIN)(GPIO_enPIN0|GPIO_enPIN4));

    GPIOF_AHB->GPIODATA&=~GPIO_GPIODATA_R_DATA1_MASK;
    GPIO_AHB_BITBANDING->AHB[5].GPIODATA[2]=GPIO_GPIODATA_DATA2_LOW;
    GPIO_AHB->AHB[5].GPIODATA|=GPIO_GPIODATA_R_DATA3_HIGH;
    //HIB__enInit(10,0);
    memory=0;
    while(1)
    {
        SysTick__vDelayUs(1000000);
        memory++;

        if((memory&1)==0)
        {
            GPIO_AHB->AHB[5].GPIODATA_MASK[GPIO_GPIODATA_R_DATA3_MASK]=GPIO_GPIODATA_R_DATA3_LOW;
        }
        else
        {
            GPIO_AHB->AHB[5].GPIODATA_MASK[GPIO_GPIODATA_R_DATA3_MASK]=GPIO_GPIODATA_R_DATA3_HIGH;
        }





    }
}


void GPIOF4_vISR(void)
{
    uint32_t u32ValueSW=GPIOF_AHB_BITBANDING->GPIODATA[4];
    if(u32ValueSW !=0)
    {
        GPIOF_AHB->GPIODATA_MASK[GPIO_GPIODATA_R_DATA1_MASK]=GPIO_GPIODATA_R_DATA1_LOW;
    }
    else
    {
        GPIOF_AHB->GPIODATA_MASK[GPIO_GPIODATA_R_DATA1_MASK]=GPIO_GPIODATA_R_DATA1_HIGH;
    }
}

void GPIOF0_vISR(void)
{
    uint32_t u32ValueSW=GPIOF_AHB_GPIODATA_BITBANDING->DATA0;
    u32ValueSW^=1;
    GPIO_AHB_BITBANDING->AHB[5].GPIODATA[2]=u32ValueSW;
}
