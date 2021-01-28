/*
 * SYSTICK_TimeBaseUs.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_TimeUsBase.h>

static float32_t SysTick_fTimeUsBase = 0.0f;

void SysTick__vClearTimeUsBase(void)
{
    SysTick_fTimeUsBase = 0.0f;
}

void SysTick__vSetTimeUsBase(float32_t fBase)
{
    SysTick_fTimeUsBase = fBase;
}

float32_t SysTick__fGetTimeUsBase(void)
{
    return SysTick_fTimeUsBase;
}
