	/*
 * SYSTICK.c
 *
 *  Created on: 1 jun. 2018
 *      Author: InDev
 */


#include "SYSTICK.h"

uint32_t CPUFrecus=0;

int32_t SysTick_Init_us(float time, uint32_t priority)
{
    uint32_t CPUClock=0,count=0;
    float CPUClockF=0,countF=0;

    SysTick_STCTRL->INTEN=SysTick_STCTRL_INTEN_DIS;
    SysTick_STCTRL->ENABLE=SysTick_STCTRL_ENABLE_DIS;
    SysTick_STCTRL->CLK_SRC=SysTick_STCTRL_CLK_SRC_SYSCLK;

    CPUClock=SYSCTL_ClockGet();
    CPUClockF=(float)CPUClock;
    CPUClockF/=1000000;
    CPUFrecus=CPUClockF;
    countF=CPUClockF*time;
    count=(uint32_t)countF;
    if(count>0xFFFFFF)
    {
        SysTick_STCTRL->CLK_SRC=SysTick_STCTRL_CLK_SRC_PIOSC;
        CPUClockF=4;
        countF=CPUClockF*time;
        count=(uint32_t)countF;
        if(count>0xFFFFFF)
            return 0;
    }
    if(count==0)
        return 0;

    SysTick_STRELOAD->RELOAD=count-1;
    SCB_SYSPRI3->TICK=priority;

    SysTick_STCTRL->INTEN=SysTick_STCTRL_INTEN_EN;
    SysTick_STCTRL->ENABLE=SysTick_STCTRL_ENABLE_EN;
    return 1;
}


int32_t SysTick_ChangeTime_us(float time)
{
    uint32_t count=0;
    float CPUClockF=0,countF=0;

    SysTick_STCTRL->INTEN=SysTick_STCTRL_INTEN_DIS;
    SysTick_STCTRL->ENABLE=SysTick_STCTRL_ENABLE_DIS;

    SysTick_STCTRL->CLK_SRC=SysTick_STCTRL_CLK_SRC_SYSCLK;
    countF=CPUFrecus*time;
    count=(uint32_t)countF;
    if(count>0xFFFFFF)
    {
        SysTick_STCTRL->CLK_SRC=SysTick_STCTRL_CLK_SRC_PIOSC;
        CPUClockF=4;
        countF=CPUClockF*time;
        count=(uint32_t)countF;
        if(count>0xFFFFFF)
            return 0;
    }
    if(count==0)
        return 0;

    SysTick_STRELOAD->RELOAD=count-1;

    SysTick_STCTRL->INTEN=SysTick_STCTRL_INTEN_EN;
    SysTick_STCTRL->ENABLE=SysTick_STCTRL_ENABLE_EN;
    return 1;
}
