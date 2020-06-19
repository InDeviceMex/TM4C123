/*
 * HIB_Interrupt.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_Interrupt.h>

#define HIB_TIMEOUT_MAX (100000u)


HIB_nSTATUS HIB__enEnInterrupt(HIB_nINTERRUPT enInterrupt)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= HIB_TIMEOUT_MAX;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if( 0u == u32TimeOut)
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
    return (HIB_nSTATUS) enReturn;
}

HIB_nSTATUS HIB__enDisInterrupt(HIB_nINTERRUPT enInterrupt)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= HIB_TIMEOUT_MAX;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if( 0u == u32TimeOut)
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
    return (HIB_nSTATUS) enReturn;
}

HIB_nSTATUS HIB__enClearInterrupt(HIB_nINTERRUPT enInterrupt)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= HIB_TIMEOUT_MAX;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if( 0u == u32TimeOut)
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
    return (HIB_nSTATUS) enReturn;
}
