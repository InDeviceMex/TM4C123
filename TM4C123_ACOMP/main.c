

/**
 * main.c
 */

/*Standard Libraries*/
#include <xUtils/Standard/Standard.h>
#include "stdlib.h"
#include "stdarg.h"
/*MCU Drivers*/
#include <xDriver_MCU.h>


/*Utils Libraries*/
#include <xUtils/Conversion/Conversion.h>

/*Local functions*/
int32_t main (void);

int32_t main(void)
{
    volatile uint32_t u32CompState = 0u;
    SYSCTL__enInit();/* system clock 80MHz*/
    EEPROM__enInit();
    SysTick__enInitUs(1000.0f,SCB_enSHPR0);

    SYSCTL__vSetReady(SYSCTL_enACMP);
    GPIO__vSetAnalogFunction(GPIO_enC0P);
    GPIO__vSetAnalogFunction(GPIO_enC0M);

    GPIO__enSetDigitalConfig(GPIO_enC0o,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    ACMP->ACREFCTL = 0x0000030CU;
    ACMP->ACCTL0 =0x0000040CU;
    SysTick__vDelayUs(1000.0f);
    u32CompState = ACMP->ACSTAT0;
    while(1u)
    {
    }
}
