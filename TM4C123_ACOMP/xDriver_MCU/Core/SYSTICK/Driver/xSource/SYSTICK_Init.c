/*
 * SYSTICK_Init.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_Init.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>
#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_InterruptRoutine.h>
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/SYSTICK_Intrinsics.h>

static void SysTick_vClarAllCounter(void);

SysTick_nSTATUS SysTick__enInitTick(uint32_t u32Tick, SCB_nSHPR enPriority, SysTick_nCLKSOURCE enClockSource)
{
    SysTick_nSTATUS enReturn = SysTick_enERROR;
    uint32_t u32SysTickFrequency=0;
    float32_t fSysTickFrequency=0U,fSysTickUs=1000000.0;

    MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, 0UL , 0xFFFFFFFFUL, 0UL);
    MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, (uint32_t)enClockSource, SysTick_CSR_CLKSOURCE_MASK, SysTick_CSR_R_CLKSOURCE_BIT);
    if((uint8_t)(enClockSource&SysTick_CSR_CLKSOURCE_MASK) == (uint8_t)SysTick_enPIOSC4)
    {
        u32SysTickFrequency=SysTick_PIOSC4;
    }
    else
    {
        u32SysTickFrequency=SYSCTL__u32GetClock();
    }

    if(u32Tick >40U )
    {
        if(u32Tick>(SysTick_VALUEMAX+1U))
        {
            u32Tick=(SysTick_VALUEMAX+1U);
        }
        SysTick__vClearFreeCount();
        SysTick__vClearFreeCountOv();
        SysTick__vSetFreqBase(u32SysTickFrequency);
        SysTick__vSetTimeUsBase(1000000.0f/(float32_t)u32SysTickFrequency);

        fSysTickFrequency=(float32_t)u32SysTickFrequency;
        fSysTickFrequency/=(float32_t)u32Tick;
        fSysTickUs/=fSysTickFrequency;

        SysTick__vSetTickFreq(fSysTickFrequency);
        SysTick__vSetTickUs(fSysTickUs);
        SysTick__vSetTickCount(u32Tick);

        SCB__vRegisterIRQVectorHandler(&SysTick__vIRQVectorHandler,SCB_enVECISR_SYSTICK);
        SCB_SysTick__vSetPriority(enPriority);
        MCU__vWriteRegister(SysTick_BASE, SysTick_RVR_OFFSET,u32Tick-1U, SysTick_RVR_RELOAD_MASK, SysTick_RVR_R_RELOAD_BIT);
        MCU__vWriteRegister(SysTick_BASE, SysTick_CVR_OFFSET, 0UL , 0xFFFFFFFFUL, 0UL);
        MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, SysTick_CSR_R_TICKINT_EN|SysTick_CSR_R_ENABLE_EN, SysTick_CSR_R_TICKINT_MASK|SysTick_CSR_R_ENABLE_MASK, 0UL);
    }
    else
    {
        SysTick_vClarAllCounter();
        enReturn =SysTick_enERROR;
    }

    return enReturn;
}

SysTick_nSTATUS SysTick__enInitFrequency(float32_t fFrequency, SCB_nSHPR enPriority)
{
    SysTick_nSTATUS enReturn = SysTick_enOK;
    uint32_t u32SysTickFrequency=0U, u32CountTick=0;
    float32_t fSysTickFrequency=0.0,fSysTickUs=1000000.0, fCountTick=0.0;

    MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, 0UL , 0xFFFFFFFFUL, 0UL);
    MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, (uint32_t)SysTick_enSYSCLK, SysTick_CSR_CLKSOURCE_MASK, SysTick_CSR_R_CLKSOURCE_BIT);
    u32SysTickFrequency=SYSCTL__u32GetClock();

    fSysTickFrequency=(float32_t)u32SysTickFrequency;
    fCountTick=fSysTickFrequency/fFrequency;
    u32CountTick=(uint32_t)fCountTick;

    if(u32CountTick>40U)
    {
        if(u32CountTick>(SysTick_VALUEMAX+1U))
        {
            MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, (uint32_t)SysTick_enPIOSC4, SysTick_CSR_CLKSOURCE_MASK, SysTick_CSR_R_CLKSOURCE_BIT);
            u32SysTickFrequency=SysTick_PIOSC4;
            fSysTickFrequency=(float32_t)u32SysTickFrequency;
            fCountTick=fSysTickFrequency/fFrequency;
            u32CountTick=(uint32_t)fCountTick;
            if(u32CountTick>(SysTick_VALUEMAX+1U))
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
            SysTick__vSetTimeUsBase(1000000.0f/(float32_t)u32SysTickFrequency);

            fSysTickUs/=fFrequency;

            SysTick__vSetTickFreq(fFrequency);
            SysTick__vSetTickUs(fSysTickUs);
            SysTick__vSetTickCount(u32CountTick);

            SCB__vRegisterIRQVectorHandler(&SysTick__vIRQVectorHandler,SCB_enVECISR_SYSTICK);
            SCB_SysTick__vSetPriority(enPriority);
            MCU__vWriteRegister(SysTick_BASE, SysTick_RVR_OFFSET,u32CountTick-1U, SysTick_RVR_RELOAD_MASK, SysTick_RVR_R_RELOAD_BIT);
            MCU__vWriteRegister(SysTick_BASE, SysTick_CVR_OFFSET, 0UL , 0xFFFFFFFFUL, 0UL);
            MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, SysTick_CSR_R_TICKINT_EN|SysTick_CSR_R_ENABLE_EN, SysTick_CSR_R_TICKINT_MASK|SysTick_CSR_R_ENABLE_MASK, 0UL);
        }

    }
    else
    {
        SysTick_vClarAllCounter();
        enReturn =SysTick_enERROR;
    }


    return enReturn;
}

SysTick_nSTATUS SysTick__enInitUs(float32_t fTimeUs, SCB_nSHPR enPriority)
{
    SysTick_nSTATUS enReturn = SysTick_enOK;
    uint32_t u32SysTickFrequency=0U, u32CountTick=0;
    float32_t fSysTickFrequency=0.0, fCountTick=0.0;

    MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, 0UL , 0xFFFFFFFFUL, 0UL);
    MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, (uint32_t)SysTick_enSYSCLK, SysTick_CSR_CLKSOURCE_MASK, SysTick_CSR_R_CLKSOURCE_BIT);
    u32SysTickFrequency=SYSCTL__u32GetClock();

    fSysTickFrequency=(float32_t)u32SysTickFrequency;
    fSysTickFrequency/=1000000.0;
    fCountTick=fSysTickFrequency*fTimeUs;
    u32CountTick=(uint32_t)fCountTick;

    if(u32CountTick>40U)
    {
        if(u32CountTick>(SysTick_VALUEMAX+1U))
        {
            MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, (uint32_t)SysTick_enPIOSC4, SysTick_CSR_CLKSOURCE_MASK, SysTick_CSR_R_CLKSOURCE_BIT);
            u32SysTickFrequency=SysTick_PIOSC4;
            fSysTickFrequency=(float32_t)u32SysTickFrequency;
            fSysTickFrequency/=1000000.0;
            fCountTick=fSysTickFrequency*fTimeUs;
            u32CountTick=(uint32_t)fCountTick;

            if(u32CountTick>(SysTick_VALUEMAX+1U))
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
            if(u32SysTickFrequency!=0U)
            {
                SysTick__vSetTimeUsBase(1000000.0f/(float32_t)u32SysTickFrequency);
            }
            if(fTimeUs>=0.0)
            {
                SysTick__vSetTickFreq(1000000.0f/fTimeUs);
            }
            SysTick__vSetTickUs(fTimeUs);
            SysTick__vSetTickCount(u32CountTick);

            SCB__vRegisterIRQVectorHandler(&SysTick__vIRQVectorHandler,SCB_enVECISR_SYSTICK);
            SCB_SysTick__vSetPriority(enPriority);
            MCU__vWriteRegister(SysTick_BASE, SysTick_RVR_OFFSET,u32CountTick-1U, SysTick_RVR_RELOAD_MASK, SysTick_RVR_R_RELOAD_BIT);
            MCU__vWriteRegister(SysTick_BASE, SysTick_CVR_OFFSET, 0UL , 0xFFFFFFFFUL, 0UL);
            MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, SysTick_CSR_R_TICKINT_EN|SysTick_CSR_R_ENABLE_EN, SysTick_CSR_R_TICKINT_MASK|SysTick_CSR_R_ENABLE_MASK, 0UL);
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
