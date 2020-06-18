/*
 * SYSTICK_TickCount.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Driver/SYSTICK_Intrinsics/SYSTICK_TickCount.h>


static uint32_t SysTick_u32TickCount=0;

void SysTick__vClearTickCount(void)
{
    SysTick_u32TickCount=0;
}

void SysTick__vSetTickCount(uint32_t u32Tick)
{
    SysTick_u32TickCount=u32Tick;
}

uint32_t SysTick__u32GetTickCount(void)
{
    return SysTick_u32TickCount;
}
