/*
 * SYSTICK_FreeCount.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Driver/SYSTICK_Intrinsics/SYSTICK_FreeCount.h>

static uint32_t SysTick_u32FreeCountOv=0;
static uint32_t SysTick_u32FreeCount=0;


uint32_t SysTick__u32GetFreeCount(void)
{
    return (uint32_t) SysTick_u32FreeCount;
}

void SysTick__vClearFreeCount(void)
{
    SysTick_u32FreeCount=0;
}

void SysTick__vSetFreeCount(uint32_t u32Count)
{
    SysTick_u32FreeCount = u32Count;
}


uint32_t SysTick__u32GetFreeCountOv(void)
{
    return (uint32_t) SysTick_u32FreeCountOv;
}

void SysTick__vClearFreeCountOv(void)
{
    SysTick_u32FreeCountOv=0;
}

void SysTick__vSetFreeCountOv(uint32_t u32Count)
{
    SysTick_u32FreeCountOv = u32Count;
}
