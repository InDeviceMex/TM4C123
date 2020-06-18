/*
 * HIB_WakeUp.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_WakeUp.h>

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



