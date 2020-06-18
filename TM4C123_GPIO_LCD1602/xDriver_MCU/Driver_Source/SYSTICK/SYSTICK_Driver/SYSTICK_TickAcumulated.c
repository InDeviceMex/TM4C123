/*
 * SYSTICK_TickAcumulated.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Driver/SYSTICK_TickAccumulated.h>

static uint32_t SysTick_u32GetCurrentRegisterTick(void);

static uint32_t SysTick_u32GetCurrentRegisterTick(void)
{
    uint32_t u32Tick=SysTick_CVR_R;
    return (uint32_t) u32Tick;
}

uint64_t SysTick__u64GetTickAccumulated(void)
{
    uint64_t u64CountTick= SysTick__u32GetTickCount();
    u64CountTick*=SysTick__u32GetFreeCount();

    u64CountTick+= SysTick__u32GetTickCount();
    u64CountTick-=SysTick_u32GetCurrentRegisterTick();
    u64CountTick--;
    return (uint64_t) u64CountTick;
}
