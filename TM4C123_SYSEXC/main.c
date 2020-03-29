

/**
 * main.c
 */

#include "stdlib.h"
#include "SCB.h"
#include "NVIC.h"
#include "FPU.h"
#include "MPU.h"
#include "SYSTICK.h"
#include "SYSCTL.h"
#include "SYSEXC.h"


void main(void)
{
    volatile float a=1.0;
    volatile float b=0.0;
    uint32_t memory=0;
    volatile uint32_t* memalloc;
    __asm(" cpsie i");
    FPU__vInit();
    SYSEXC__vInit((SYSEXC_nINTERRUPT)(SYSEXC_enINVALID|SYSEXC_enDIV0|
            SYSEXC_enINEXACT|SYSEXC_enOVERFLOW|
            SYSEXC_enUNDERFLOW));
    SCB__vInit();
    MPU__vInit();

    //invalid operation NaN
    //a=0.0;
    //b=0.0;
    //a/=b;

    //for(memory=0; memory<1000000; memory++)
    //{
    //    a/=b;
    //}

    //Inexact float
    //a=1005353460.087563466;
    //b=102.034363647463;
    //a/=b;
    //a*=.02242564747;

    //Div 0 float
    //b=0.0;
    //a/=b;

    //overflow float +inf -inf
    //a=1.0;
    //(for(memory=0; memory<1000000; memory++)
    //{
    //    a*=2;
    //}
    //a=-1.0;
    //for(memory=0; memory<1000000; memory++)
    //{
    //    a*=2;
    //}

    //underflow float
    //a=1.0;
    //for(memory=0; memory<1000000; memory++)
    //{
    //    a/=2;
    //}


    SYSCTL__enInit(); // system clock 80MHz
    SysTick__enInitUs(10,SCB_enSHPR0);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enGPIOE);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enUDMA);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enGPIOE);
    memalloc =memalign(16,1000);
    for(memory=0; memory<(1000>>2); memory++)
    {
       *(memalloc+memory)=memory;
    }
    memory=0;
    while(1)
    {
        SysTick__vDelayUs(10000);
        memory++;
        if(memory>=1000)
            __asm(" BKPT #1");
    }
}
