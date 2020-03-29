/*
 * SYSTICKInterrupt.c
 *
 *  Created on: 22 jun. 2018
 *      Author: InDev
 */


#include "SYSTICK.h"

int32_t SystickState=0;
int32_t SystickOV=0;
void SysTickHandler(void)
{
        SystickState=1;
}



int32_t SysTick_State(void)
{
    if(SystickState)
    {
        SystickState=0;
        return 1;
    }
    return 0;
}

