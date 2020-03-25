

/**
 * main.c
 */

#include "stdlib.h"
#include "SCB.h"
#include "NVIC.h"
#include "FPU.h"
#include "MPU.h"
#include "SysTick.h"


void main(void)
{
    uint32_t memory=0;
    volatile uint32_t* memalloc;
    FPU__vInit();
    SCB__vInit();
    MPU__vInit();
    SysTick__enInitUs(10,SCB_enSHPR0);

    memalloc =memalign(16,1000);
    __asm(" cpsie i");
    for(memory=0; memory<(1000>>2); memory++)
    {
       *(memalloc+memory)=memory;
    }
    while(1)
    {
        SysTick__vDelayUs(6250);
    }
}
