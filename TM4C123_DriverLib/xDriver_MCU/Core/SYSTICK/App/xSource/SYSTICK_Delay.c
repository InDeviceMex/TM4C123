/*
 * SYSTICK_Delay.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/SYSTICK/App/xHeader/SYSTICK_Delay.h>

#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_TickUs.h>
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_TickCount.h>
#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_TickAccumulated.h>

 void SysTick__vDelayUs(float32_t f32TimeUs)
{
    uint64_t u64CountInitial = SysTick__u64GetTickAccumulated();
    float32_t f32Count = 0.0f;
    float32_t f32UsTick = 0.0f;
    uint64_t u64CountDelta = 0ULL;
    uint64_t u64CountCurrent = 0ULL;
    uint64_t u64CountMax = 0ULL;
    uint64_t u64Count = 0ULL;

    f32UsTick = SysTick__f32GetTickUs();
    if(f32UsTick >= 0.0f)
    {
        f32Count = f32TimeUs / f32UsTick;
    }
    u64CountMax = (uint64_t) f32Count;
    u64CountMax *= (uint64_t) SysTick__u32GetTickCount();

    u64CountDelta = SysTick__u64GetTickAccumulated();
    u64CountDelta -= u64CountInitial;

    u64CountInitial -= u64CountDelta;
    u64CountCurrent = u64CountInitial;
    while(((uint64_t) u64Count < (uint64_t) u64CountMax))
    {
        u64CountCurrent = SysTick__u64GetTickAccumulated();
        if(u64CountCurrent >= u64CountInitial)
        {
            u64Count = (uint64_t) u64CountCurrent;
            u64Count -= (uint64_t) u64CountInitial;
        }
        else
        {
            u64Count = (uint64_t) u64CountInitial;
            u64Count -= (uint64_t) u64CountCurrent;
        }
    }
}
