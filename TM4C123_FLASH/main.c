

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

//uint32_t pu32Array[14]={0,1,2,3,4,5,6,7,8,9,10,11,0xAA55CFDA,0x11223344};
uint32_t pu32Array[14]={0};
uint32_t pu32Array1[14]={0xBF00,1,2,3,4,5,6,7,8,9,10,11,0xAA55CFDA,0x11223344};
void main(void)
{
    volatile uint32_t memory=0;
    volatile uint32_t u32Memory=0;
    volatile uint16_t u16Memory=0;
    volatile uint8_t u8Memory=0;

    __asm(" cpsie i");
    FPU__vInit();
    SYSEXC__vInit((SYSEXC_nINTERRUPT)(SYSEXC_enINVALID|SYSEXC_enDIV0|
            SYSEXC_enOVERFLOW|SYSEXC_enUNDERFLOW));
    SCB__vInit();
    MPU__vInit();
    SYSCTL__enInit(); // system clock 80MHz
    SysTick__enInitUs(10,SCB_enSHPR0);
    //HIB__enInit(10,0);
    EEPROM__enInit();
    //EEPROM__enWriteMultiWorld(pu32Array1,0,14);
    //EEPROM__enReadMultiWorld((uint32_t*)pu32Array,0,14);
    //EEPROM__enReadHalfWorld((uint16_t*)&u16Memory,12*4);
    EEPROM__enReadByte((uint8_t*)&u8Memory,(12*4)+2);
    FLASH__enWrite(0x33333333,0x10401);
    FLASH__enWrite(0x88888888,0x107FC);
    //FLASH__enWriteMultiWorld((uint32_t*)0x0,0x20080,40);
    //FLASH__enWriteMultiWorld((uint32_t*)0,0x20180,0x100);
    FLASH__enWriteMultiByte((uint8_t*)3,0x20181,0x435);
    FLASH__enWriteMultiByte((uint8_t*)7,0x20165,10);
    FLASH__enWriteMultiByte((uint8_t*)7,0x205bA,40);

    //FLASH__enWriteByte(0xBF,0x2DE4+1);
    while(1)
    {
        SysTick__vDelayUs(10000);
        memory++;

        if(memory == 1100)
        {
            __asm(" BKPT #1");
        }
    }
}
