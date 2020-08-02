/*
 * SYSTICK_TickFrec.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Core/SYSTICK/Header/Driver/Intrinsics/SYSTICK_TickFreq.h>


static float SysTick_fTickFreq=0.0f;


void SysTick__vClearTickFreq(void)
{
    SysTick_fTickFreq=0.0f;
}

void SysTick__vSetTickFreq(float fTick)
{
    SysTick_fTickFreq=fTick;
}

float SysTick__fGetTickFreq(void)
{
    return SysTick_fTickFreq;
}
