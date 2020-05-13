/*
 * HIB.c
 *
 *  Created on: 29/03/2020
 *      Author: vyldram
 */

#include "HIB.h"
#include "GPIO.h"
volatile HIB_nREADY HIB_enStatus =HIB_enBUSY;
HIB_nREADY HIB_enCount=HIB_enBUSY;

void HIB_vISR(void);

HIB_nSTATUS HIB__enInit(uint32_t u32Match, uint32_t u32SubMatch)
{
    volatile HIB_nSTATUS enReturn = HIB_enOK;
    volatile uint32_t u32TimeOut= 12000000;


    SCB__vRegisterISR(HIB_vISR,SCB_enVECISR_HIB);
    SYSCTL__vResetPeripheral(SYSCTL_enHIB);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enHIB);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enHIB);
    NVIC__enSetEnableIRQ(NVIC_enSTIR_HIB,NVIC_enPRI0);

    HIB_HIBCTL_R=HIB_HIBCTL_R_RTCEN_EN;
    HIB_HIBIC_R=HIB_HIBIC_R_WC_CLEAR;
    HIB_HIBIM_R=HIB_HIBIM_R_WC_EN;
    HIB_HIBCTL_R|=HIB_HIBCTL_R_CLK32EN_EN;
    while(HIB_enBUSY == HIB_enStatus)
    {
        u32TimeOut--;
        if(u32TimeOut==0)
        {
            enReturn = HIB_enERROR;
            break;
        }
    }

    HIB_HIBIM_R=HIB_HIBIM_R_WC_DIS;
    if(HIB_enOK == enReturn)
    {
        enReturn= HIB__enSetMatch(u32Match,u32SubMatch);
    }
    if(HIB_enOK == enReturn)
    {
        enReturn= HIB__enSetCounter(0);
    }

    if(HIB_enOK == enReturn)
    {
        enReturn= HIB__enClearInterrupt(HIB_enALL);
    }

    if(HIB_enOK == enReturn)
    {
        enReturn= HIB__enEnInterrupt(HIB_enRTCALT);
    }

    u32TimeOut= 12000000;
    while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
    {
        u32TimeOut--;
        if(u32TimeOut==0)
        {
            enReturn = HIB_enERROR;
            break;
        }
    }
    if(HIB_enOK == enReturn)
    {
        HIB_HIBCTL_R|=HIB_HIBCTL_R_RTCEN_EN|HIB_HIBCTL_R_VABORT_EN;
    }
    return enReturn;
}



HIB_nSTATUS HIB__enReadCounter(uint32_t* pu32Counter, uint32_t *pu32SubCounter)
{
    HIB_nSTATUS enReturn = HIB_enERROR;
    uint32_t u32SecondRead= 0;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        *pu32Counter =HIB_HIBRTCC_R;
        *pu32SubCounter= HIB_HIBRTCSS_R & HIB_HIBRTCSS_R_RTCSSC_MASK;
        u32SecondRead= HIB_HIBRTCC_R;
        if(*pu32Counter ==u32SecondRead)
        {
            enReturn = HIB_enOK;
        }
    }

    return enReturn;


}

HIB_nSTATUS HIB__enSetCounter(uint32_t u32Counter)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= 100000;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }
        if(HIB_enOK == enReturn)
        {
            HIB_HIBRTCLD_R=u32Counter;
        }
    }
    else
    {
        enReturn = HIB_enERROR;
    }
    return enReturn;
}

HIB_nSTATUS HIB__enEnInterrupt(HIB_nINTERRUPT enInterrupt)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= 1000000;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }
        if(HIB_enOK == enReturn)
        {
            HIB_HIBIM_R|=(uint32_t)enInterrupt;
        }
    }
    else
    {
        enReturn = HIB_enERROR;
    }
    return enReturn;
}

HIB_nSTATUS HIB__enDisInterrupt(HIB_nINTERRUPT enInterrupt)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= 100000;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }
        if(HIB_enOK == enReturn)
        {
            HIB_HIBIM_R&=~(uint32_t)enInterrupt;
        }
    }
    else
    {
        enReturn = HIB_enERROR;
    }
    return enReturn;
}

HIB_nSTATUS HIB__enClearInterrupt(HIB_nINTERRUPT enInterrupt)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= 100000;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }
        if(HIB_enOK == enReturn)
        {
            HIB_HIBIC_R=(uint32_t)enInterrupt;
        }
    }
    else
    {
        enReturn = HIB_enERROR;
    }
    return enReturn;
}

HIB_nSTATUS HIB__enEnPinWakeUp(void)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= 100000;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }
        if(HIB_enOK == enReturn)
        {
            HIB_HIBCTL_R|=HIB_HIBCTL_R_PINWEN_EN;
        }
    }
    else
    {
        enReturn = HIB_enERROR;
    }
    return enReturn;
}

HIB_nSTATUS HIB__enDisPinWakeUp(void)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= 100000;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }
        if(HIB_enOK == enReturn)
        {
            HIB_HIBCTL_R&=~HIB_HIBCTL_R_PINWEN_EN;
        }
    }
    else
    {
        enReturn = HIB_enERROR;
    }
    return enReturn;
}

HIB_nSTATUS HIB__enEnRTCWakeUp(void)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= 100000;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }
        if(HIB_enOK == enReturn)
        {
            HIB_HIBCTL_R|=HIB_HIBCTL_R_RTCWEN_EN;
        }
    }
    else
    {
        enReturn = HIB_enERROR;
    }
    return enReturn;
}

HIB_nSTATUS HIB__enDisRTCWakeUp(void)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= 100000;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }
        if(HIB_enOK == enReturn)
        {
            HIB_HIBCTL_R&=~HIB_HIBCTL_R_RTCWEN_EN;
        }
    }
    else
    {
        enReturn = HIB_enERROR;
    }
    return enReturn;
}


HIB_nSTATUS HIB__enEnLOWBATWakeUp(void)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= 100000;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }
        if(HIB_enOK == enReturn)
        {
            HIB_HIBCTL_R|=HIB_HIBCTL_R_BATWKEN_EN;
        }
    }
    else
    {
        enReturn = HIB_enERROR;
    }
    return enReturn;
}

HIB_nSTATUS HIB__enDisLOWBATWakeUp(void)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= 100000;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }
        if(HIB_enOK == enReturn)
        {
            HIB_HIBCTL_R&=~HIB_HIBCTL_R_BATWKEN_EN;
        }
    }
    else
    {
        enReturn = HIB_enERROR;
    }
    return enReturn;
}
HIB_nSTATUS HIB__enEnModule(void)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= 100000;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }
        if(HIB_enOK == enReturn)
        {
            HIB_HIBCTL_R|=HIB_HIBCTL_R_RTCEN_EN;
        }
    }
    else
    {
        enReturn = HIB_enERROR;
    }
    return enReturn;
}

HIB_nSTATUS HIB__enDisModule(void)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= 100000;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }
        if(HIB_enOK == enReturn)
        {
            HIB_HIBCTL_R&=~HIB_HIBCTL_R_RTCEN_EN;
        }
    }
    else
    {
        enReturn = HIB_enERROR;
    }
    return enReturn;
}
HIB_nSTATUS HIB__enReqHibernation(void)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= 100000;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }
        if(HIB_enOK == enReturn)
        {
            HIB_HIBCTL_R|=HIB_HIBCTL_R_HIBREQ_INIT;
        }
    }
    else
    {
        enReturn = HIB_enERROR;
    }
    return enReturn;
}


HIB_nSTATUS HIB__enSetMatch(uint32_t u32Counter, uint32_t u32SubCounter)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= 100000;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }
        if(HIB_enOK == enReturn)
        {
            HIB_HIBRTCM0_R=u32Counter;
        }

        u32TimeOut= 100000;
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }
        if(HIB_enOK == enReturn)
        {
            u32SubCounter&=HIB_HIBRTCSS_R_RTCSSC_MASK;
            u32SubCounter<<=HIB_HIBRTCSS_R_RTCSSM_BIT;
            HIB_HIBRTCSS_R&=~HIB_HIBRTCSS_R_RTCSSM_MASK;
        }

        u32TimeOut= 100000;
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if(u32TimeOut==0)
            {
                enReturn = HIB_enERROR;
                break;
            }
        }

        if(HIB_enOK == enReturn)
        {
            HIB_HIBRTCSS_R |=u32SubCounter;
        }
    }
    else
    {
        enReturn = HIB_enERROR;
    }
    return enReturn;
}


void HIB_vISR(void)
{
    volatile uint32_t u32Reg= HIB_HIBMIS_R;

    if(HIB_HIBMIS_R_WC_OCCUR == (u32Reg &HIB_HIBMIS_R_WC_MASK))
    {
        HIB_HIBIC_R=HIB_HIBIC_R_WC_CLEAR;
        HIB_enStatus = HIB_enREADY;
    }

    if(HIB_HIBMIS_R_RTCALT0_OCCUR == (u32Reg &HIB_HIBMIS_R_RTCALT0_MASK))
    {
        do
        {
            u32Reg = HIB_HIBRTCC_R;
        }while (u32Reg != HIB_HIBRTCC_R);

        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK));
        HIB_HIBRTCM0_R=u32Reg+10;
        HIB_HIBIC_R=HIB_HIBIC_R_RTCALT0_CLEAR;
        HIB_enCount=HIB_enREADY;
        GPIOF_AHB->GPIODATA^=GPIO_GPIODATA_R_DATA1_MASK;

    }
}
