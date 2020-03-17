

/**
 * main.c
 */

#include "stdlib.h"
#include "SCB.h"
#include "NVIC.h"
#include "FPU.h"
#include "MPU.h"

volatile uint32_t Variable1 = 100;
volatile const uint32_t Variable2 = 100;

void main(void)
{
    FPU__vInit();
    SCB__vInit();
    MPU__vInit();
    uint32_t memory=0;
    volatile uint32_t* memalloc;

    memalloc =memalign(16,1000);
    __asm(" cpsie i");
    for(memory=0; memory<(1000>>2); memory++)
    {
       *(memalloc+memory)=memory;
    }
    while(1)
    {
        Variable1+=Variable2;
    }
}
