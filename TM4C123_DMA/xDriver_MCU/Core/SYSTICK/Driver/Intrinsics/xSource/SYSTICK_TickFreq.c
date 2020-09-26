/*
 * SYSTICK_TickFrec.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_TickFreq.h>


static float32_t SysTick_fTickFreq=0.0f;


void SysTick__vClearTickFreq(void)
{
    SysTick_fTickFreq=0.0f;
}

void SysTick__vSetTickFreq(float32_t fTick)
{
    SysTick_fTickFreq=fTick;
}

float32_t SysTick__fGetTickFreq(void)
{
    return SysTick_fTickFreq;
}
