/*
 * WDT.c
 *
 *  Created on: 20 abr. 2018
 *      Author: InDev
 */

#include "WDT.h"


int32_t WDT0_Init(void)
{

    SYSCTL_RCGCWD_RCGCWDT0_BB=1;
    SYSCTL_RCGCWD_RCGCWDT1_BB=1;
    WDT0_WDTLOAD_R=0x00300000;
    WDT0_WDTTEST_STALL_BB=1;
    WDT0_WDTCTL_INTTYPE_BB=0;
    WDT0_WDTCTL_RESEN_BB=0;
    WDT0_WDTCTL_INTEN_BB=1;

   // WDT0_WDTLOCK_R= WDT0_WDTLOCK_KEY;


    NVIC_EN0->NVIC_WDT01=1;
    NVIC_PRI4->NVIC_WDT01=4;

    return 1;
}

