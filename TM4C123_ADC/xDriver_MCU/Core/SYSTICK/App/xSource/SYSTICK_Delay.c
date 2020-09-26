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


 void SysTick__vDelayUs(float32_t fTimeUs)
{
    uint64_t u64CountInitial = SysTick__u64GetTickAccumulated();
    float32_t fCount=0.0;
    float32_t fUsTick=0.0;
    uint64_t u64CountDelta = 0;
    uint64_t u64CountCurrent = 0;
    uint64_t u64CountMax=0;
    uint64_t u64Count= 0;

    fUsTick= SysTick__fGetTickUs();
    if(fUsTick>=0.0)
    {
        fCount= fTimeUs/fUsTick;
    }
    u64CountMax= (uint64_t)fCount;
    u64CountMax*=(uint64_t)SysTick__u32GetTickCount();

    u64CountDelta=SysTick__u64GetTickAccumulated();
    u64CountDelta-=u64CountInitial;

    u64CountInitial-=u64CountDelta;
    u64CountCurrent = u64CountInitial;
    while(((uint64_t)u64Count<(uint64_t)u64CountMax))
    {
        u64CountCurrent =SysTick__u64GetTickAccumulated();
        if(u64CountCurrent>=u64CountInitial)
        {
            u64Count=(uint64_t)( u64CountCurrent - u64CountInitial);
        }
        else
        {
            u64Count=(uint64_t)( u64CountInitial - u64CountCurrent);
        }
    }

}
