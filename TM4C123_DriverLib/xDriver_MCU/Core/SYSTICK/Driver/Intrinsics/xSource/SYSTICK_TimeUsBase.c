/*
 * SYSTICK_TimeBaseUs.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_TimeUsBase.h>

static float32_t SysTick_f32TimeUsBase = 0.0f;

void SysTick__vClearTimeUsBase(void)
{
    SysTick_f32TimeUsBase = 0.0f;
}

void SysTick__vSetTimeUsBase(float32_t f32Base)
{
    SysTick_f32TimeUsBase = f32Base;
}

float32_t SysTick__f32GetTimeUsBase(void)
{
    return SysTick_f32TimeUsBase;
}
