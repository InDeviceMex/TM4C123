/*
 * SYSTICK_InterruptRoutine.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Driver/SYSTICK_InterruptRoutine.h>


void SysTick__vISR(void)
{
    uint32_t u32Count= SysTick__u32GetFreeCount();
    u32Count++;
    SysTick__vSetFreeCount(u32Count);
    if(u32Count==0)
    {
        uint32_t u32CountOv = SysTick__u32GetFreeCountOv();
        u32CountOv++;
        SysTick__vSetFreeCountOv(u32CountOv);
    }
}
