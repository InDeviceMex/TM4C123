/*
 * SYSTICK_TickFrec.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_TickFreq.h>

static float32_t SysTick_f32TickFreq = 0.0f;

void SysTick__vClearTickFreq(void)
{
    SysTick_f32TickFreq = 0.0f;
}

void SysTick__vSetTickFreq(float32_t f32Tick)
{
    SysTick_f32TickFreq = f32Tick;
}

float32_t SysTick__f32GetTickFreq(void)
{
    return SysTick_f32TickFreq;
}
