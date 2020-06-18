/*
 * SYSTICK_Init.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Driver/SYSTICK_Init.h>

static void SysTick_vClarAllCounter(void);

SysTick_nSTATUS SysTick__enInitTick(uint32_t u32Tick, SCB_nSHPR enPriority, SysTick_nCLKSOURCE enClockSource)
{
    SysTick_nSTATUS enReturn = SysTick_enERROR;
    uint32_t u32SysTickFrequency=0;
    float fSysTickFrequency=0,fSysTickUs=1000000.0;

    SysTick_CSR_R=0;
    SysTick_CSR->CLKSOURCE=(uint8_t)enClockSource&SysTick_CSR_CLKSOURCE_MASK;
    if((uint8_t)(enClockSource&SysTick_CSR_CLKSOURCE_MASK) == SysTick_enPIOSC4)
    {
        u32SysTickFrequency=SysTick_PIOSC4;
    }
    else
    {
        u32SysTickFrequency=SYSCTL__u32GetClock();
    }

    if(u32Tick >40 )
    {
        if(u32Tick>(SysTick_VALUEMAX+1))
        {
            u32Tick=(SysTick_VALUEMAX+1);
        }
        SysTick__vClearCount();
        SysTick__vSetFrecBase(u32SysTickFrequency);
        SysTick__vSetUsBase(1000000.0/(float)u32SysTickFrequency);

        fSysTickFrequency=(float)u32SysTickFrequency;
        fSysTickFrequency/=(float)u32Tick;
        fSysTickUs/=fSysTickFrequency;

        SysTick__vSetFrecTick(fSysTickFrequency);
        SysTick__vSetUsTick(fSysTickUs);
        SysTick__vSetCountTick(u32Tick);

        SCB__vRegisterISR(SysTick__vISR,SCB_enVECISR_SYSTICK);
        SCB_SHPR3->SYSTICK=(uint8_t)enPriority&SCB_SHPR3_SYSTICK_MASK;
        SysTick_RVR_R=u32Tick-1;
        SysTick_CVR_R=0;
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
    uint32_t u32SysTickFrequency=0, u32CountTick=0;
    float fSysTickFrequency=0.0,fSysTickUs=1000000.0, fCountTick=0.0;

    SysTick_CSR_R=0;
    SysTick_CSR->CLKSOURCE=(uint8_t)SysTick_enSYSCLK;
    u32SysTickFrequency=SYSCTL__u32GetClock();

    fSysTickFrequency=(float)u32SysTickFrequency;
    fCountTick=fSysTickFrequency/fFrequency;
    u32CountTick=(uint32_t)fCountTick;

    if(u32CountTick>40)
    {
        if(u32CountTick>(SysTick_VALUEMAX+1))
        {
            SysTick_CSR->CLKSOURCE=SysTick_enPIOSC4;
            u32SysTickFrequency=SysTick_PIOSC4;
            fSysTickFrequency=(float)u32SysTickFrequency;
            fCountTick=fSysTickFrequency/fFrequency;
            u32CountTick=(uint32_t)fCountTick;
            if(u32CountTick>(SysTick_VALUEMAX+1))
            {
                SysTick_vClarAllCounter();
                enReturn =SysTick_enERROR;
            }
        }
        if(enReturn == SysTick_enOK)
        {
            SysTick__vClearCount();
            SysTick__vSetFrecBase(u32SysTickFrequency);
            SysTick__vSetUsBase(1000000.0/(float)u32SysTickFrequency);

            fSysTickUs/=fFrequency;

            SysTick__vSetFrecTick(fFrequency);
            SysTick__vSetUsTick(fSysTickUs);
            SysTick__vSetCountTick(u32CountTick);

            SCB__vRegisterISR(SysTick__vISR,SCB_enVECISR_SYSTICK);
            SCB_SHPR3->SYSTICK=(uint8_t)enPriority&SCB_SHPR3_SYSTICK_MASK;
            SysTick_RVR_R=u32CountTick-1;
            SysTick_CVR_R=0;
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
    uint32_t u32SysTickFrequency=0, u32CountTick=0;
    float fSysTickFrequency=0.0, fCountTick=0.0;

    SysTick_CSR_R=0;
    SysTick_CSR->CLKSOURCE=(uint8_t)SysTick_enSYSCLK;
    u32SysTickFrequency=SYSCTL__u32GetClock();

    fSysTickFrequency=(float)u32SysTickFrequency;
    fSysTickFrequency/=1000000.0;
    fCountTick=fSysTickFrequency*fTimeUs;
    u32CountTick=(uint32_t)fCountTick;

    if(u32CountTick>40)
    {
        if(u32CountTick>(SysTick_VALUEMAX+1))
        {
            SysTick_CSR->CLKSOURCE=SysTick_enPIOSC4;
            u32SysTickFrequency=SysTick_PIOSC4;
            fSysTickFrequency=(float)u32SysTickFrequency;
            fSysTickFrequency/=1000000.0;
            fCountTick=fSysTickFrequency*fTimeUs;
            u32CountTick=(uint32_t)fCountTick;

            if(u32CountTick>(SysTick_VALUEMAX+1))
            {
                SysTick_vClarAllCounter();
                enReturn =SysTick_enERROR;
            }
        }
        if(enReturn == SysTick_enOK)
        {
            SysTick__vClearCount();
            SysTick__vSetFrecBase(u32SysTickFrequency);
            if(u32SysTickFrequency!=0)
            {
                SysTick__vSetUsBase(1000000.0/(float)u32SysTickFrequency);
            }
            if(fTimeUs!=0.0)
            {
                SysTick__vSetFrecTick(1000000.0/fTimeUs);
            }
            SysTick__vSetUsTick(fTimeUs);
            SysTick__vSetCountTick(u32CountTick);

            SCB__vRegisterISR(SysTick__vISR,SCB_enVECISR_SYSTICK);
            SCB_SHPR3->SYSTICK=(uint8_t)enPriority&SCB_SHPR3_SYSTICK_MASK;
            SysTick_RVR_R=u32CountTick-1;
            SysTick_CVR_R=0;
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
    SysTick__vClearCount();
    SysTick__vClearFrecBase();
    SysTick__vClearUsBase();
    SysTick__vClearUsTick();
    SysTick__vClearFrecTick();
    SysTick__vClearCountTick();
}
