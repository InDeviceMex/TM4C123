/*
 * HIB_Counter.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_Counter.h>


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



