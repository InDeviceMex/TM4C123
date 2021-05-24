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

SysTick_nSTATUS SysTick__enInitTickVector(uint32_t u32Tick, SCB_nSHPR enPriority,
                                          SysTick_nCLKSOURCE enClockSource, void(*pfvVector) (void))
{
    SysTick_nSTATUS enReturn = SysTick_enERROR;
    uint32_t u32SysTickFrequency = 0UL;
    float32_t f32SysTickFrequency = 0.0f;
    float32_t f32SysTickUs = 1000000.0f;
    uint32_t u32Reg = 0UL;
    float32_t  f32Reg = 0.0f;

    MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, 0UL, 0xFFFFFFFFUL, 0UL);
    MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, (uint32_t) enClockSource,
                        SysTick_CSR_CLKSOURCE_MASK, SysTick_CSR_R_CLKSOURCE_BIT);
    u32Reg = MCU__u32ReadRegister(SysTick_BASE, SysTick_CSR_OFFSET, SysTick_CSR_CLKSOURCE_MASK,
                                  SysTick_CSR_R_CLKSOURCE_BIT);

    if((uint32_t) SysTick_enPIOSC4 == u32Reg)
    {
        u32SysTickFrequency = SysTick_PIOSC4;
    }
    else
    {
        u32SysTickFrequency = SYSCTL__u32GetClock();
    }

    if(40UL <= u32Tick)
    {
        if(SysTick_VALUEMAX < u32Tick)
        {
            u32Tick = SysTick_VALUEMAX;
        }
        f32Reg = 1000000.0f;
        f32Reg /= (float32_t) u32SysTickFrequency;
        SysTick__vClearFreeCount();
        SysTick__vClearFreeCountOv();
        SysTick__vSetFreqBase(u32SysTickFrequency);
        SysTick__vSetTimeUsBase(f32Reg);

        f32SysTickFrequency = (float32_t) u32SysTickFrequency;
        f32SysTickFrequency /= (float32_t) u32Tick;
        f32SysTickUs /= f32SysTickFrequency;

        SysTick__vSetTickFreq(f32SysTickFrequency);
        SysTick__vSetTickUs(f32SysTickUs);
        SysTick__vSetTickCount(u32Tick);

        SCB__vRegisterIRQVectorHandler( pfvVector, (void (**) (void)) 0UL, SCB_enVECISR_SYSTICK);
        SCB_SysTick__vSetPriority(enPriority);
        MCU__vWriteRegister(SysTick_BASE, SysTick_RVR_OFFSET, u32Tick-1U, SysTick_RVR_RELOAD_MASK,
                            SysTick_RVR_R_RELOAD_BIT);
        MCU__vWriteRegister(SysTick_BASE, SysTick_CVR_OFFSET, 0UL, 0xFFFFFFFFUL, 0UL);
        MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, SysTick_CSR_R_TICKINT_ENA | SysTick_CSR_R_ENABLE_ENA,
                            SysTick_CSR_R_TICKINT_MASK | SysTick_CSR_R_ENABLE_MASK, 0UL);
    }
    else
    {
        SysTick_vClarAllCounter();
        enReturn = SysTick_enERROR;
    }
    return enReturn;
}

SysTick_nSTATUS SysTick__enInitTick(uint32_t u32Tick, SCB_nSHPR enPriority, SysTick_nCLKSOURCE enClockSource)
{
    return SysTick__enInitTickVector(u32Tick, enPriority, enClockSource,&SysTick__vIRQVectorHandler);
}


SysTick_nSTATUS SysTick__enInitFrequency(float32_t f32Frequency, SCB_nSHPR enPriority)
{
    SysTick_nSTATUS enReturn = SysTick_enOK;
    uint32_t u32SysTickFrequency = 0UL;
    uint32_t u32CountTick = 0UL;
    float32_t f32SysTickFrequency = 0.0f;
    float32_t f32SysTickUs = 1000000.0f;
    float32_t f32CountTick = 0.0f;
    float32_t f32Reg = 0.0f;

    MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, 0UL, 0xFFFFFFFFUL, 0UL);
    MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, (uint32_t) SysTick_enSYSCLK, SysTick_CSR_CLKSOURCE_MASK,
                        SysTick_CSR_R_CLKSOURCE_BIT);
    u32SysTickFrequency = SYSCTL__u32GetClock();

    f32SysTickFrequency = (float32_t) u32SysTickFrequency;
    f32CountTick = f32SysTickFrequency;
    f32CountTick /= f32Frequency;
    u32CountTick = (uint32_t) f32CountTick;

    if(40U <= u32CountTick)
    {
        if(SysTick_VALUEMAX < u32CountTick)
        {
            MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, (uint32_t) SysTick_enPIOSC4, SysTick_CSR_CLKSOURCE_MASK,
                                SysTick_CSR_R_CLKSOURCE_BIT);
            u32SysTickFrequency = SysTick_PIOSC4;
            f32SysTickFrequency = (float32_t) u32SysTickFrequency;
            f32CountTick = f32SysTickFrequency;
            f32CountTick /= f32Frequency;
            u32CountTick = (uint32_t) f32CountTick;
            if(SysTick_VALUEMAX < u32CountTick)
            {
                SysTick_vClarAllCounter();
                enReturn = SysTick_enERROR;
            }
        }
        if(SysTick_enOK == enReturn)
        {
            f32Reg = 1000000.0f;
            f32Reg /= (float32_t) u32SysTickFrequency;
            SysTick__vClearFreeCount();
            SysTick__vClearFreeCountOv();
            SysTick__vSetFreqBase(u32SysTickFrequency);
            SysTick__vSetTimeUsBase(f32Reg);

            f32SysTickUs /= f32Frequency;

            SysTick__vSetTickFreq(f32Frequency);
            SysTick__vSetTickUs(f32SysTickUs);
            SysTick__vSetTickCount(u32CountTick);

            SCB__vRegisterIRQVectorHandler( &SysTick__vIRQVectorHandler, (void (**) (void)) 0UL, SCB_enVECISR_SYSTICK);
            SCB_SysTick__vSetPriority(enPriority);
            MCU__vWriteRegister(SysTick_BASE, SysTick_RVR_OFFSET, u32CountTick - 1U, SysTick_RVR_RELOAD_MASK,
                                SysTick_RVR_R_RELOAD_BIT);
            MCU__vWriteRegister(SysTick_BASE, SysTick_CVR_OFFSET, 0UL, 0xFFFFFFFFUL, 0UL);
            MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, SysTick_CSR_R_TICKINT_ENA | SysTick_CSR_R_ENABLE_ENA,
                                SysTick_CSR_R_TICKINT_MASK | SysTick_CSR_R_ENABLE_MASK, 0UL);
        }
    }
    else
    {
        SysTick_vClarAllCounter();
        enReturn = SysTick_enERROR;
    }
    return enReturn;
}

SysTick_nSTATUS SysTick__enInitUs(float32_t f32TimeUs, SCB_nSHPR enPriority)
{
    SysTick_nSTATUS enReturn = SysTick_enOK;
    uint32_t u32SysTickFrequency = 0UL;
    uint32_t u32CountTick = 0UL;
    float32_t f32SysTickFrequency = 0.0f;
    float32_t f32CountTick = 0.0f;
    float32_t f32Reg = 0.0f;

    MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, 0UL, 0xFFFFFFFFUL, 0UL);
    MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, (uint32_t) SysTick_enSYSCLK, SysTick_CSR_CLKSOURCE_MASK,
                        SysTick_CSR_R_CLKSOURCE_BIT);
    u32SysTickFrequency = SYSCTL__u32GetClock();

    f32SysTickFrequency = (float32_t) u32SysTickFrequency;
    f32SysTickFrequency /= 1000000.0;
    f32CountTick = f32SysTickFrequency;
    f32CountTick *= f32TimeUs;
    u32CountTick = (uint32_t) f32CountTick;

    if(40U <= u32CountTick)
    {
        if(SysTick_VALUEMAX < u32CountTick)
        {
            MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, (uint32_t) SysTick_enPIOSC4, SysTick_CSR_CLKSOURCE_MASK,
                                SysTick_CSR_R_CLKSOURCE_BIT);
            u32SysTickFrequency = SysTick_PIOSC4;
            f32SysTickFrequency = (float32_t) u32SysTickFrequency;
            f32SysTickFrequency /= 1000000.0;
            f32CountTick = f32SysTickFrequency;
            f32CountTick *= f32TimeUs;
            u32CountTick = (uint32_t) f32CountTick;

            if(SysTick_VALUEMAX < u32CountTick)
            {
                SysTick_vClarAllCounter();
                enReturn = SysTick_enERROR;
            }
        }
        if(enReturn == SysTick_enOK)
        {
            SysTick__vClearFreeCount();
            SysTick__vClearFreeCountOv();
            SysTick__vSetFreqBase(u32SysTickFrequency);
            if(0UL != u32SysTickFrequency)
            {
                SysTick__vSetTimeUsBase(1000000.0f/(float32_t) u32SysTickFrequency);
            }
            if(f32TimeUs >= 0.0)
            {
                f32Reg = 1000000.0f;
                f32Reg /= f32TimeUs;
                SysTick__vSetTickFreq(f32Reg);
            }
            SysTick__vSetTickUs(f32TimeUs);
            SysTick__vSetTickCount(u32CountTick);

            SCB__vRegisterIRQVectorHandler( &SysTick__vIRQVectorHandler, (void (**) (void)) 0UL, SCB_enVECISR_SYSTICK);
            SCB_SysTick__vSetPriority(enPriority);
            MCU__vWriteRegister(SysTick_BASE, SysTick_RVR_OFFSET, u32CountTick - 1UL, SysTick_RVR_RELOAD_MASK,
                                SysTick_RVR_R_RELOAD_BIT);
            MCU__vWriteRegister(SysTick_BASE, SysTick_CVR_OFFSET, 0UL, 0xFFFFFFFFUL, 0UL);
            MCU__vWriteRegister(SysTick_BASE, SysTick_CSR_OFFSET, SysTick_CSR_R_TICKINT_ENA | SysTick_CSR_R_ENABLE_ENA,
                                SysTick_CSR_R_TICKINT_MASK | SysTick_CSR_R_ENABLE_MASK, 0UL);
        }
    }
    else
    {
        SysTick_vClarAllCounter();
        enReturn = SysTick_enERROR;
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
