

/**
 * main.c
 */

#include "SCB.h"
#include "NVIC.h"
#include "FPU.h"

void main(void)
{
    FPU__vInit();
    SCB__vInit();

    __asm(" cpsie i");
    while(1)
    {

    }
}
