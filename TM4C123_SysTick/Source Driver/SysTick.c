/*
 * SysTick.c
 *
 *  Created on: 20/03/2020
 *      Author: vyldram
 */



#include <SysTick.h>


volatile uint32_t SysTick_u32CountOv=0;
volatile uint32_t SysTick_u32Count=0;
volatile float SysTick_fUsTick=0.0;
volatile float SysTick_fFrecTick=0.0;
volatile uint32_t SysTick_u32CountTick=0;

volatile uint32_t SysTick_u32FrecBase=0;
volatile float SysTick_fUsBase=0.0;

SysTick_nSTATUS SysTick__enInitTick(uint32_t u32Tick, SCB_nSHPR enPriority, SysTick_nCLKSOURCE enClockSource)
{
    SysTick_nSTATUS enReturn = SysTick_enERROR;
    uint32_t u32SysTickFrequency=0;
    float fSysTickFrequency=0,fSysTickUs=1000000.0;

    SysTick_CSR_R=0;
    SysTick_CSR->CLKSOURCE=(uint8_t)enClockSource;
    if((uint8_t)enClockSource == SysTick_enPIOSC4)
    {
        u32SysTickFrequency=4000000u;
    }
    else
    {
        u32SysTickFrequency=16000000u;//RCC_GetSysClockFreq();
    }

    if(u32Tick !=0 )
    {
        if(u32Tick>(SysTick_VALUEMAX+1))
        {
            u32Tick=(SysTick_VALUEMAX+1);
        }
        SysTick_u32CountOv=0;
        SysTick_u32Count=0;
        SysTick_u32FrecBase=u32SysTickFrequency;
        SysTick_fUsBase=1000000.0/(float)u32SysTickFrequency;

        fSysTickFrequency=(float)u32SysTickFrequency;
        fSysTickFrequency/=(float)u32Tick;
        fSysTickUs/=fSysTickFrequency;

        SysTick_fFrecTick=fSysTickFrequency;
        SysTick_fUsTick=fSysTickUs;
        SysTick_u32CountTick=u32Tick;

        SCB_SHPR3->SYSTICK=(uint8_t)enPriority;
        SysTick_RVR_R=u32Tick-1;
        SysTick_CVR_R=0;
        SysTick_CSR_R|=SysTick_CSR_R_TICKINT_EN|SysTick_CSR_R_ENABLE_EN;

    }
    else
    {
        SysTick_u32CountOv=0;
        SysTick_u32Count=0;
        SysTick_u32FrecBase=0;
        SysTick_fUsBase=0.0;
        SysTick_fUsTick=0.0;
        SysTick_fFrecTick=0-0;
        SysTick_u32CountTick=0;
        enReturn =SysTick_enERROR;
    }

    return enReturn;
}

SysTick_nSTATUS SysTick__enInitFrequency(float fFrequency, SCB_nSHPR enPriority)
{
    SysTick_nSTATUS enReturn = SysTick_enOK;
    uint32_t u32SysTickFrequency=0, u32CountTick=0;
    float fSysTickFrequency=0.0,fSysTickUs=1000000.0, fCountTick=0.0;

    SysTick_CSR_R=0;
    SysTick_CSR->CLKSOURCE=(uint8_t)SysTick_enSYSCLK;
    u32SysTickFrequency=16000000u;//RCC_GetSysClockFreq();

    fSysTickFrequency=(float)u32SysTickFrequency;
    fCountTick=fSysTickFrequency/fFrequency;
    u32CountTick=(uint32_t)fCountTick;

    if(u32CountTick>10)
    {
        if(u32CountTick>(SysTick_VALUEMAX+1))
        {
            SysTick_CSR->CLKSOURCE=SysTick_enPIOSC4;
            u32SysTickFrequency=4000000;
            fSysTickFrequency=(float)u32SysTickFrequency;
            fCountTick=fSysTickFrequency/fFrequency;
            u32CountTick=(uint32_t)fCountTick;
            if(u32CountTick>0x1000000)
            {
                SysTick_u32CountOv=0;
                SysTick_u32Count=0;
                SysTick_u32FrecBase=0;
                SysTick_fUsBase=0.0;
                SysTick_fUsTick=0.0;
                SysTick_fFrecTick=0-0;
                SysTick_u32CountTick=0;
                enReturn =SysTick_enERROR;
            }
        }
        if(enReturn == SysTick_enOK)
        {
            SysTick_u32CountOv=0;
            SysTick_u32Count=0;
            SysTick_u32FrecBase=u32SysTickFrequency;
            SysTick_fUsBase=1000000.0/(float)u32SysTickFrequency;

            fSysTickUs/=fFrequency;

            SysTick_fFrecTick=fFrequency;
            SysTick_fUsTick=fSysTickUs;
            SysTick_u32CountTick=u32CountTick;

            SCB_SHPR3->SYSTICK=(uint8_t)enPriority;
            SysTick_RVR_R=u32CountTick-1;
            SysTick_CVR_R=0;
            SysTick_CSR_R|=SysTick_CSR_R_TICKINT_EN|SysTick_CSR_R_ENABLE_EN;
        }

    }
    else
    {
        SysTick_u32CountOv=0;
        SysTick_u32Count=0;
        SysTick_u32FrecBase=0;
        SysTick_fUsBase=0.0;
        SysTick_fUsTick=0.0;
        SysTick_fFrecTick=0-0;
        SysTick_u32CountTick=0;
        enReturn =SysTick_enERROR;
    }


    return enReturn;
}

SysTick_nSTATUS SysTick__enInitUs(float fTimeUs, SCB_nSHPR enPriority)
{
    SysTick_nSTATUS enReturn = SysTick_enOK;
    uint32_t u32SysTickFrequency=0, u32CountTick=0;
    float fSysTickFrequency=0.0, fCountTick=0.0;

    SysTick_CSR_R=0;
    SysTick_CSR->CLKSOURCE=(uint8_t)SysTick_enSYSCLK;
    u32SysTickFrequency=16000000u;//RCC_GetSysClockFreq();

    fSysTickFrequency=(float)u32SysTickFrequency;
    fSysTickFrequency/=1000000.0;
    fCountTick=fSysTickFrequency*fTimeUs;
    u32CountTick=(uint32_t)fCountTick;

    if(u32CountTick>10)
    {
        if(u32CountTick>(SysTick_VALUEMAX+1))
        {
            SysTick_CSR->CLKSOURCE=SysTick_enPIOSC4;
            u32SysTickFrequency=4000000u;
            fSysTickFrequency=(float)u32SysTickFrequency;
            fSysTickFrequency/=1000000.0;
            fCountTick=fSysTickFrequency*fTimeUs;
            u32CountTick=(uint32_t)fCountTick;

            if(u32CountTick>(SysTick_VALUEMAX+1))
            {
                SysTick_u32CountOv=0;
                SysTick_u32Count=0;
                SysTick_u32FrecBase=0;
                SysTick_fUsBase=0.0;
                SysTick_fUsTick=0.0;
                SysTick_fFrecTick=0-0;
                SysTick_u32CountTick=0;
                enReturn =SysTick_enERROR;
            }
        }
        if(enReturn == SysTick_enOK)
        {
            SysTick_u32CountOv=0;
            SysTick_u32Count=0;
            SysTick_u32FrecBase=u32SysTickFrequency;
            SysTick_fUsBase=1000000.0/(float)u32SysTickFrequency;


            SysTick_fFrecTick=1000000.0/fTimeUs;
            SysTick_fUsTick=fTimeUs;
            SysTick_u32CountTick=u32CountTick;

            SCB_SHPR3->SYSTICK=(uint8_t)enPriority;
            SysTick_RVR_R=u32CountTick-1;
            SysTick_CVR_R=0;
            SysTick_CSR_R|=SysTick_CSR_R_TICKINT_EN|SysTick_CSR_R_ENABLE_EN;
        }

    }
    else
    {
        SysTick_u32CountOv=0;
        SysTick_u32Count=0;
        SysTick_u32FrecBase=0;
        SysTick_fUsBase=0.0;
        SysTick_fUsTick=0.0;
        SysTick_fFrecTick=0-0;
        SysTick_u32CountTick=0;
        enReturn =SysTick_enERROR;
    }


    return enReturn;
}

inline void SysTick__vClearCount(void)
{
    SysTick_u32CountOv=0;
    SysTick_u32Count=0;
}


inline float SysTick__fGetTimeUs(void)
{
    return (float)((float)SysTick_u32Count*SysTick_fUsTick);
}

inline float SysTick__fGetFrequency(void)
{
    return (float)(SysTick_fFrecTick/SysTick_u32Count);
}

inline uint32_t SysTick__u32GetCount(void)
{
    return (uint32_t) SysTick_u32Count;
}

inline uint32_t SysTick__u32GetCurrentTick(void)
{
    uint32_t u32Tick=SysTick_CVR_R;
    return (uint32_t) u32Tick;
}

uint64_t SysTick__u64GetCurrentCountTick(void)
{
    uint64_t u64CountTick= SysTick__u32GetMaxTick();
    u64CountTick*=SysTick_u32Count;
    u64CountTick+= SysTick__u32GetMaxTick() - SysTick__u32GetCurrentTick() -1;
    return (uint64_t) u64CountTick;

}

inline uint32_t SysTick__u32GetMaxTick(void)
{
    return (uint32_t) SysTick_u32CountTick;
}

inline void SysTick__vDelayUs(float fTimeUs)
{
    uint64_t u64CountInitial = SysTick__u64GetCurrentCountTick();
    uint64_t u64CountDelta = 0;
    uint64_t u64CountCurrent = 0;

    volatile float fCount= fTimeUs/SysTick_fUsTick;
    uint64_t u64CountMax= (uint32_t)fCount;
    uint64_t u64Count= 0;
    u64CountMax*=SysTick__u32GetMaxTick();

    u64CountDelta=SysTick__u64GetCurrentCountTick()-u64CountInitial;
    u64CountInitial-=u64CountDelta;
    u64CountCurrent = u64CountInitial;
    while(((uint32_t)u64Count<(uint64_t)u64CountMax))
    {
        u64CountCurrent =SysTick__u64GetCurrentCountTick();
        u64Count=(uint64_t)( u64CountCurrent - u64CountInitial);
    }

}




void SysTickISR(void)
{
    SysTick_u32Count++;
    if(SysTick_u32Count==0)
        SysTick_u32CountOv++;
}


