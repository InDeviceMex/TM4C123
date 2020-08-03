/*
 * SYSTICK_TickUs.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */




#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_TickUs.h>


static  float SysTick_fUsTick=1.0;

void SysTick__vClearTickUs(void)
{
    SysTick_fUsTick=1.0f;
}

void SysTick__vSetTickUs(float fTick)
{
    SysTick_fUsTick=fTick;
}

float SysTick__fGetTickUs(void)
{
    return (float)SysTick_fUsTick;
}
