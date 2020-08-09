/*
 * SYSTICK_InterruptRoutine.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_InterruptRoutine.h>

#include <stdint.h>
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_FreeCount.h>

void SysTick__vIRQVectorHandler(void)
{
    uint32_t u32Count= SysTick__u32GetFreeCount();
    u32Count++;
    SysTick__vSetFreeCount(u32Count);
    if(u32Count==0u)
    {
        uint32_t u32CountOv = SysTick__u32GetFreeCountOv();
        u32CountOv++;
        SysTick__vSetFreeCountOv(u32CountOv);
    }
}
