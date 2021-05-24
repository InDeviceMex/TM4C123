/*
 * SYSTICK_Frequency.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_Frequency.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_FreeCount.h>
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_TickFreq.h>

float32_t SysTick__f32GetFrequency(void)
{
    float32_t f32Reg = 0.0f;
    uint32_t u32FreeCount = SysTick__u32GetFreeCount();
    if(0UL != u32FreeCount)
    {
        float32_t f32TickFrec = SysTick__f32GetTickFreq();
        f32Reg = f32TickFrec;
        f32Reg /= (float32_t) u32FreeCount;
    }
    return f32Reg;

}
