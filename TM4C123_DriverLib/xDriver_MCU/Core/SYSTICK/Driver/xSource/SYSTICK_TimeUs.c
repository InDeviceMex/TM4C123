/*
 * SYSTICK_TimeUs.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_TimeUs.h>

#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_FreeCount.h>
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_TickUs.h>

float32_t SysTick__f32GetTimeUs(void)
{
    uint32_t u32FreeCount = SysTick__u32GetFreeCount();
    float32_t f32TickUs = SysTick__f32GetTickUs();
    float32_t f32TimeUs = (float32_t) u32FreeCount;
    f32TimeUs *= f32TickUs;

    return f32TimeUs;
}
