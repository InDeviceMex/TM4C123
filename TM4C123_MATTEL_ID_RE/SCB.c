/*
 * SCB.c
 *
 *  Created on: 23 jun. 2018
 *      Author: InDev
 */

#include "SCB.h"



int32_t SCB_PENDSV_Trigger(void)
{
    SCB_INTCTRL->PENDSV=SCB_INTCTRL_PENDSV_SET;
    return 1;
}


int32_t SCB_SysTick_Trigger(void)
{
    SCB_INTCTRL->PENDSTSET=SCB_INTCTRL_PENDSTSET_SET;
    return 1;
}


int32_t SCB_NMI_Trigger(void)
{
    SCB_INTCTRL->NMISET=SCB_INTCTRL_NMISET_SET;
    return 1;
}





int32_t SCB_UsageFault_En(void)
{
    SCB_SYSHNDCTRL->USAGE=SCB_SYSHNDCTRL_USAGE_EN;
    return 1;
}

int32_t SCB_BusFault_Dis(void)
{
    SCB_SYSHNDCTRL->USAGE=SCB_SYSHNDCTRL_USAGE_DIS;
    return 1;
}

int32_t SCB_BusFault_En(void)
{
    SCB_SYSHNDCTRL->BUS=SCB_SYSHNDCTRL_BUS_EN;
    return 1;
}

int32_t SCB_UsageFault_Dis(void)
{
    SCB_SYSHNDCTRL->BUS=SCB_SYSHNDCTRL_BUS_DIS;
    return 1;
}

int32_t SCB_MPUFault_En(void)
{
    SCB_SYSHNDCTRL->MEM=SCB_SYSHNDCTRL_MEM_EN;
    return 1;
}

int32_t SCB_MPUFault_Dis(void)
{
    SCB_SYSHNDCTRL->MEM=SCB_SYSHNDCTRL_MEM_DIS;
    return 1;
}


int32_t SCB_SWTRIGGER_EN(void)
{
    SCB_CFGCTRL->MAINPEND=SCB_CFGCTRL_MAINPEND_EN;
    return 1;
}



int32_t SCB_SleepMode(uint32_t sleepMode)
{
    int32_t returned=0;
    switch(sleepMode)
    {
        case SCB_SLEEPDEEP_SLEEP:
            SCB_SYSCTRL->SLEEPDEEP=SCB_SYSCTRL_SLEEPDEEP_SLEEP;
            returned=1;
            break;
        case SCB_SLEEPDEEP_DEEPSLEEP:
            SCB_SYSCTRL->SLEEPDEEP=SCB_SYSCTRL_SLEEPDEEP_DEEPSLEEP;
            returned=1;
            break;
        default:
            returned=0;
            break;
    }

    return returned;
}


int32_t SCB_SysResetReq(void)
{
    SCB_APINT_R=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_SYSRESREQ_RESET;
    return 1;
}


int32_t SCB_PriGroup(uint32_t group)
{
    int32_t returned=0;
    switch(group)
    {
        case SCB_PRIGROUP_XXX:
            SCB_APINT_R=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_PRIGROUP_XXX;
            returned=1;
            break;
        case SCB_PRIGROUP_XXY:
            SCB_APINT_R=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_PRIGROUP_XXY;
            returned=1;
            break;
        case SCB_PRIGROUP_XYY:
            SCB_APINT_R=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_PRIGROUP_XYY;
            returned=1;
            break;
        case SCB_PRIGROUP_YYY:
            SCB_APINT_R=SCB_APINT_R_VECTKEY_WRITE|SCB_APINT_R_PRIGROUP_YYY;
            returned=1;
            break;
        default:
            returned=0;
            break;
    }
    return returned;
}



