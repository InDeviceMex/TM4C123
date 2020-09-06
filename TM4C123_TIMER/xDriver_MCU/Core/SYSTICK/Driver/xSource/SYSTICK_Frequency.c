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

float32_t SysTick__fGetFrequency(void)
{
    float32_t fReg=0.0;
    uint32_t u32FreeCount= SysTick__u32GetFreeCount();
    if(u32FreeCount!=0u)
    {
        float32_t fTickFrec = SysTick__fGetTickFreq();
        fReg=fTickFrec;
        fReg/=(float32_t)u32FreeCount;
    }
    return (float32_t)(fReg);

}
