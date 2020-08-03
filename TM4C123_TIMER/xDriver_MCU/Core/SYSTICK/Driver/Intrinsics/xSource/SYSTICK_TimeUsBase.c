/*
 * SYSTICK_TimeBaseUs.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_TimeUsBase.h>


static float SysTick_fTimeUsBase=0.0;


void SysTick__vClearTimeUsBase(void)
{
    SysTick_fTimeUsBase=0.0f;
}

void SysTick__vSetTimeUsBase(float fBase)
{
    SysTick_fTimeUsBase=fBase;
}

float SysTick__fGetTimeUsBase(void)
{
    return (float)SysTick_fTimeUsBase;
}
