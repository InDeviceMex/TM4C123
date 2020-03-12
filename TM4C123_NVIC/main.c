

/**
 * main.c
 */

#include "SCB.h"
#include "NVIC.h"

void main(void)
{
    volatile int number1=0;
    volatile int number2=1;
    float fnumber1=0.1;
    float fnumber2=2.0;
    //SCB__vReqSysReset();
    SCB__vEnableTraps();
    SCB__vEnableExceptions();
    SCB__enSetPriorityGroup(SCB_enPRIGROUP_XXX);
    SCB__enSetStackAligment(SCB_enALIGN_4BYTE);


    while(1)
    {

    }
}
