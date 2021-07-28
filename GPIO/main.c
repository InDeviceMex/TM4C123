

/**
 * main.c
 */

#include <tm4c123gh6pm.h>

void main(void)
{

    SYSCTL_RCGCGPIO_R = SYSCTL_RCGCGPIO_R0;
    while(0UL == (SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R0));
    
    /*1 = output, 0 = input*/
    GPIO_PORTA_DIR_R = 
    while(1UL)
    {

    }
}
