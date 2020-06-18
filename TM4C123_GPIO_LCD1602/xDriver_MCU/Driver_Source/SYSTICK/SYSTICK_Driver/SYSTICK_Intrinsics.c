/*
 * SYSTICK_Intrinsics.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Driver/SYSTICK_Intrinsics.h>


volatile uint32_t SysTick_u32CountOv=0;
volatile uint32_t SysTick_u32Count=0;
volatile float SysTick_fUsTick=1.0;
volatile float SysTick_fFrecTick=0.0;
volatile uint32_t SysTick_u32CountTick=0;

volatile uint32_t SysTick_u32FrecBase=0;
volatile float SysTick_fUsBase=0.0;

uint32_t SysTick__u32GetCount(void)
{
    return (uint32_t) SysTick_u32Count;
}

uint32_t SysTick__u32GetCountOV(void)
{
    return (uint32_t) SysTick_u32CountOv;
}

void SysTick__vClearCount(void)
{
    SysTick_u32CountOv=0;
    SysTick_u32Count=0;
}

void SysTick__vSetCount(uint32_t u32Count)
{
    SysTick_u32Count = u32Count;
}


void SysTick__vSetCountOV(uint32_t u32Count)
{
    SysTick_u32CountOv = u32Count;
}

void SysTick__vClearUsBase(void)
{
    SysTick_fUsBase=0.0;
}

void SysTick__vSetUsBase(float fBase)
{
    SysTick_fUsBase=fBase;
}


void SysTick__vClearFrecBase(void)
{
    SysTick_u32FrecBase=0;
}

void SysTick__vSetFrecBase(uint32_t u32Base)
{
    SysTick_u32FrecBase=u32Base;
}


void SysTick__vClearUsTick(void)
{
    SysTick_fUsTick=1.0;
}

void SysTick__vSetUsTick(float fTick)
{
    SysTick_fUsTick=fTick;
}

float SysTick__fGetUsTick(void)
{
    return (float)SysTick_fUsTick;
}

void SysTick__vClearFrecTick(void)
{
    SysTick_fFrecTick=0.0;
}

void SysTick__vSetFrecTick(float fTick)
{
    SysTick_fFrecTick=fTick;
}

void SysTick__vClearCountTick(void)
{
    SysTick_u32CountTick=0;
}

void SysTick__vSetCountTick(uint32_t u32Tick)
{
    SysTick_u32CountTick=u32Tick;
}




float SysTick__fGetTimeUs(void)
{
    return (float)((float)SysTick_u32Count*SysTick_fUsTick);
}

float SysTick__fGetFrequency(void)
{
    float fReg=0.0;
    if(SysTick_u32Count!=0)
    {
        fReg=(float)(SysTick_fFrecTick/SysTick_u32Count);
    }
    return (float)(fReg);

}


uint32_t SysTick__u32GetCurrentTick(void)
{
    uint32_t u32Tick=SysTick_CVR_R;
    return (uint32_t) u32Tick;
}

uint64_t SysTick__u64GetCurrentCountTick(void)
{
    uint64_t u64CountTick= SysTick__u32GetMaxTick();
    u64CountTick*=SysTick_u32Count;
    u64CountTick+= SysTick__u32GetMaxTick();
    u64CountTick-=SysTick__u32GetCurrentTick();
    u64CountTick--;
    return (uint64_t) u64CountTick;

}

uint32_t SysTick__u32GetMaxTick(void)
{
    return (uint32_t) SysTick_u32CountTick;
}


