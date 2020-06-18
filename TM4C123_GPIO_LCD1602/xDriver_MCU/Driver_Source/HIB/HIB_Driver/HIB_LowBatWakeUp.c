/*
 * HIB_LowBatWakeUp.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_LowBatWakeUp.h>

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
