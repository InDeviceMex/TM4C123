/*
 * SYSTICK_Frequency.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */





#include <xDriver_MCU/Core/SYSTICK/Header/Driver/SYSTICK_Frequency.h>

#include <stdint.h>
#include <xDriver_MCU/Core/SYSTICK/Header/Driver/Intrinsics/SYSTICK_FreeCount.h>
#include <xDriver_MCU/Core/SYSTICK/Header/Driver/Intrinsics/SYSTICK_TickFreq.h>

float SysTick__fGetFrequency(void)
{
    float fReg=0.0;
    uint32_t u32FreeCount= SysTick__u32GetFreeCount();
    if(u32FreeCount!=0u)
    {
        float fTickFrec = SysTick__fGetTickFreq();
        fReg=fTickFrec;
        fReg/=(float)u32FreeCount;
    }
    return (float)(fReg);

}
