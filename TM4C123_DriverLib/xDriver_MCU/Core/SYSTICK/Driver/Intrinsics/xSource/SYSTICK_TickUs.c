/*
 * SYSTICK_TickUs.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_TickUs.h>

static  float32_t SysTick_f32UsTick = 1.0f;

void SysTick__vClearTickUs(void)
{
    SysTick_f32UsTick = 1.0f;
}

void SysTick__vSetTickUs(float32_t f32Tick)
{
    SysTick_f32UsTick = f32Tick;
}

float32_t SysTick__f32GetTickUs(void)
{
    return (float32_t) SysTick_f32UsTick;
}
