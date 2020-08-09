/*
 * SCBInterrupt.c
 *
 *  Created on: 23 jun. 2018
 *      Author: InDev
 */


#include "SCB.h"


void PendSVHandler(void)
{
    if(SCB_INTCTRL->PENDSV)
    {
        SCB_INTCTRL->UNPENDSV=SCB_INTCTRL_UNPENDSV_REMOVE;
    }
}


void UsageFaultHandler(void)
{
    if(SCB_SYSHNDCTRL->USAGEP)
    {
        SCB_SYSHNDCTRL->USAGEP=SCB_SYSHNDCTRL_USAGEP_NOPEND;
    }

}

void BusFaultHandler(void)
{
    //FAULTSTAT
    volatile unsigned long address=0;
    if(SCB_SYSHNDCTRL->BUSP)
    {
        SCB_SYSHNDCTRL->BUSP=SCB_SYSHNDCTRL_BUSP_NOPEND;
        address=SCB_FAULTADDR_R;
    }

}

void MPUFaultHandler(void)
{
    //FAULTSTAT
    volatile unsigned long address=0;
    if(SCB_SYSHNDCTRL->MEMP)
    {
        SCB_SYSHNDCTRL->MEMP=SCB_SYSHNDCTRL_MEMP_NOPEND;
        address=SCB_MMADDR_R;
    }

}




void FaultISR(void)
{

    if(SCB_HFAULTSTAT->FORCED)
    {
        switch(SCB_INTCTRL->VECPEND)
        {

        case SCB_INTCTRL_R_VECACT_MEMMANAGE:
            break;
        case SCB_INTCTRL_R_VECACT_BUSFAULT :
            break;
        case SCB_INTCTRL_R_VECACT_USAGEFAULT:
            break;
        case SCB_INTCTRL_R_VECACT_SVCALL:
            break;
        case SCB_INTCTRL_R_VECACT_DEBUGMON:
            break;
        case SCB_INTCTRL_R_VECACT_PENDSV:
            break;
        case SCB_INTCTRL_R_VECACT_SYSTICK:
            break;
        default:
            break;
        }

    }
    //
    // Enter an infinite loop.
    //
    while(1)
    {
    }
}
