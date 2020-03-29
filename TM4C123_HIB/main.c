

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


void main(void)
{
    volatile uint32_t memory=0;
    __asm(" cpsie i");
    FPU__vInit();
    SYSEXC__vInit((SYSEXC_nINTERRUPT)(SYSEXC_enINVALID|SYSEXC_enDIV0|
            SYSEXC_enOVERFLOW|SYSEXC_enUNDERFLOW));
    SCB__vInit();
    MPU__vInit();

    SYSCTL__enInit(); // system clock 80MHz
    SysTick__enInitUs(10,SCB_enSHPR0);
    HIB__enInit(10,0);
    while(1)
    {
        SysTick__vDelayUs(10000);
        memory++;

        if(memory == 1000)
        {
            __asm(" BKPT #1");
        }
    }
}
