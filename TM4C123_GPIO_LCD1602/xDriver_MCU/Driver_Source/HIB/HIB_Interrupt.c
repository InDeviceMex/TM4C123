/*
 * HIB_Interrupt.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_Interrupt.h>



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
