/*
 * SYSTICK_Delay.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_App/SYSTICK_Delay.h>




 void SysTick__vDelayUs(float fTimeUs)
{
    volatile uint64_t u64CountInitial = SysTick__u64GetTickAccumulated();
    volatile float fCount=0.0;
    volatile float fUsTick=0.0;
    volatile uint64_t u64CountDelta = 0;
    volatile uint64_t u64CountCurrent = 0;
    volatile uint64_t u64CountMax=0;
    volatile uint64_t u64Count= 0;

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