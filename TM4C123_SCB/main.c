

/**
 * main.c
 */

#include "SCB.h"

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

    /* Exceptions example*/

    //example 1 NMI
    //SCB_NMI__vSetPending();

    //example 2 PendSV
    //SCB_PENDSV__vSetPending();

    //example 3 UsageFault SetPending
    //SCB_UsageFault__vSetPending();


    //example 4 UsageFault DIV0
    //number2/=number1;

    //example 5 UsageFault UNALIGMENT SCB
    //(*((volatile uint32_t *)(SCB_BASE+SCB_FAULTSTAT_OFFSET+1)))=number2;

    //example 6 UsageFault NOCP
    (*((volatile uint32_t*)((0xE000E000)+(0x0D88))))=0; //FPU Coprocessor disable
    fnumber1*=fnumber2;

    //example 7 UsageFault INVPC

    //example 8 UsageFault INVSTATE

    //example 9 UsageFault UNDEF
    while(1)
    {

    }
}
