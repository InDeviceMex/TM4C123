/*
 * SYSTICK_TimeUs.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */




#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Driver/SYSTICK_TimeUs.h>

#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Driver/SYSTICK_Intrinsics/SYSTICK_FreeCount.h>
#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Driver/SYSTICK_Intrinsics/SYSTICK_TickUs.h>


float SysTick__fGetTimeUs(void)
{
    uint32_t u32FreeCount= SysTick__u32GetFreeCount();
    float fTickUs= SysTick__fGetTickUs();
    float fTimeUs= (float)u32FreeCount;
    fTimeUs*=fTickUs;

    return fTimeUs;
}
