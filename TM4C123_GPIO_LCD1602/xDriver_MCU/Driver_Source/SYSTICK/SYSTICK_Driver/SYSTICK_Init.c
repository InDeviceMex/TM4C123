/*
 * SYSTICK_Init.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Driver/SYSTICK_Init.h>


#include <xDriver_MCU/Driver_Header/SCB/SCB.h>
#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL.h>

#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Peripheral/SYSTICK_Peripheral.h>
#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Driver/SYSTICK_InterruptRoutine.h>
#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Driver/SYSTICK_Intrinsics/SYSTICK_Intrinsics.h>

static void SysTick_vClarAllCounter(void);

SysTick_nSTATUS SysTick__enInitTick(uint32_t u32Tick, SCB_nSHPR enPriority, SysTick_nCLKSOURCE enClockSource)
{
    SysTick_nSTATUS enReturn = SysTick_enERROR;
    uint32_t u32SysTickFrequency=0;
    float fSysTickFrequency=0u,fSysTickUs=1000000.0;

    SysTick_CSR_R=0u;
    SysTick_CSR->CLKSOURCE=(uint32_t)enClockSource&SysTick_CSR_CLKSOURCE_MASK;
    if((uint8_t)(enClockSource&SysTick_CSR_CLKSOURCE_MASK) == SysTick_enPIOSC4)
    {
        u32SysTickFrequency=SysTick_PIOSC4;
    }
    else
    {
        u32SysTickFrequency=SYSCTL__u32GetClock();
    }

    if(u32Tick >40u )
    {
        if(u32Tick>(SysTick_VALUEMAX+1u))
        {
            u32Tick=(SysTick_VALUEMAX+1u);
        }
        SysTick__vClearFreeCount();
        SysTick__vClearFreeCountOv();
        SysTick__vSetFreqBase(u32SysTickFrequency);
        SysTick__vSetTimeUsBase(1000000.0f/(float)u32SysTickFrequency);

        fSysTickFrequency=(float)u32SysTickFrequency;
        fSysTickFrequency/=(float)u32Tick;
        fSysTickUs/=fSysTickFrequency;

        SysTick__vSetTickFreq(fSysTickFrequency);
        SysTick__vSetTickUs(fSysTickUs);
        SysTick__vSetTickCount(u32Tick);

        SCB__vRegisterISR(&SysTick__vISR,SCB_enVECISR_SYSTICK);
        SCB_SysTick__vSetPriority(enPriority);
        SysTick_RVR_R=u32Tick-1u;
        SysTick_CVR_R=0u;
        SysTick_CSR_R|=SysTick_CSR_R_TICKINT_EN|SysTick_CSR_R_ENABLE_EN;

    }
    else
    {
        SysTick_vClarAllCounter();
        enReturn =SysTick_enERROR;
    }

    return enReturn;
}

SysTick_nSTATUS SysTick__enInitFrequency(float fFrequency, SCB_nSHPR enPriority)
{
    SysTick_nSTATUS enReturn = SysTick_enOK;
    uint32_t u32SysTickFrequency=0u, u32CountTick=0;
    float fSysTickFrequency=0.0,fSysTickUs=1000000.0, fCountTick=0.0;

    SysTick_CSR_R=0u;
    SysTick_CSR->CLKSOURCE=(uint8_t)SysTick_enSYSCLK;
    u32SysTickFrequency=SYSCTL__u32GetClock();

    fSysTickFrequency=(float)u32SysTickFrequency;
    fCountTick=fSysTickFrequency/fFrequency;
    u32CountTick=(uint32_t)fCountTick;

    if(u32CountTick>40u)
    {
        if(u32CountTick>(SysTick_VALUEMAX+1u))
        {
            SysTick_CSR->CLKSOURCE=SysTick_enPIOSC4;
            u32SysTickFrequency=SysTick_PIOSC4;
            fSysTickFrequency=(float)u32SysTickFrequency;
            fCountTick=fSysTickFrequency/fFrequency;
            u32CountTick=(uint32_t)fCountTick;
            if(u32CountTick>(SysTick_VALUEMAX+1u))
            {
                SysTick_vClarAllCounter();
                enReturn =SysTick_enERROR;
            }
        }
        if(enReturn == SysTick_enOK)
        {
            SysTick__vClearFreeCount();
            SysTick__vClearFreeCountOv();
            SysTick__vSetFreqBase(u32SysTickFrequency);
            SysTick__vSetTimeUsBase(1000000.0f/(float)u32SysTickFrequency);

            fSysTickUs/=fFrequency;

            SysTick__vSetTickFreq(fFrequency);
            SysTick__vSetTickUs(fSysTickUs);
            SysTick__vSetTickCount(u32CountTick);

            SCB__vRegisterISR(&SysTick__vISR,SCB_enVECISR_SYSTICK);
            SCB_SysTick__vSetPriority(enPriority);
            SysTick_RVR_R=u32CountTick-1u;
            SysTick_CVR_R=0u;
            SysTick_CSR_R|=SysTick_CSR_R_TICKINT_EN|SysTick_CSR_R_ENABLE_EN;
        }

    }
    else
    {
        SysTick_vClarAllCounter();
        enReturn =SysTick_enERROR;
    }


    return enReturn;
}

SysTick_nSTATUS SysTick__enInitUs(float fTimeUs, SCB_nSHPR enPriority)
{
    SysTick_nSTATUS enReturn = SysTick_enOK;
    uint32_t u32SysTickFrequency=0u, u32CountTick=0;
    float fSysTickFrequency=0.0, fCountTick=0.0;

    SysTick_CSR_R=0u;
    SysTick_CSR->CLKSOURCE=(uint8_t)SysTick_enSYSCLK;
    u32SysTickFrequency=SYSCTL__u32GetClock();

    fSysTickFrequency=(float)u32SysTickFrequency;
    fSysTickFrequency/=1000000.0;
    fCountTick=fSysTickFrequency*fTimeUs;
    u32CountTick=(uint32_t)fCountTick;

    if(u32CountTick>40u)
    {
        if(u32CountTick>(SysTick_VALUEMAX+1u))
        {
            SysTick_CSR->CLKSOURCE=SysTick_enPIOSC4;
            u32SysTickFrequency=SysTick_PIOSC4;
            fSysTickFrequency=(float)u32SysTickFrequency;
            fSysTickFrequency/=1000000.0;
            fCountTick=fSysTickFrequency*fTimeUs;
            u32CountTick=(uint32_t)fCountTick;

            if(u32CountTick>(SysTick_VALUEMAX+1u))
            {
                SysTick_vClarAllCounter();
                enReturn =SysTick_enERROR;
            }
        }
        if(enReturn == SysTick_enOK)
        {
            SysTick__vClearFreeCount();
            SysTick__vClearFreeCountOv();
            SysTick__vSetFreqBase(u32SysTickFrequency);
            if(u32SysTickFrequency!=0u)
            {
                SysTick__vSetTimeUsBase(1000000.0f/(float)u32SysTickFrequency);
            }
            if(fTimeUs>=0.0)
            {
                SysTick__vSetTickFreq(1000000.0f/fTimeUs);
            }
            SysTick__vSetTickUs(fTimeUs);
            SysTick__vSetTickCount(u32CountTick);

            SCB__vRegisterISR(&SysTick__vISR,SCB_enVECISR_SYSTICK);
            SCB_SysTick__vSetPriority(enPriority);
            SysTick_RVR_R=u32CountTick-1u;
            SysTick_CVR_R=0u;
            SysTick_CSR_R|=SysTick_CSR_R_TICKINT_EN|SysTick_CSR_R_ENABLE_EN;
        }

    }
    else
    {
        SysTick_vClarAllCounter();
        enReturn =SysTick_enERROR;
    }


    return enReturn;
}



static void SysTick_vClarAllCounter(void)
{
    SysTick__vClearFreeCount();
    SysTick__vClearFreeCountOv();
    SysTick__vClearFreqBase();
    SysTick__vClearTimeUsBase();
    SysTick__vClearTickUs();
    SysTick__vClearTickFreq();
    SysTick__vClearTickCount();
}
