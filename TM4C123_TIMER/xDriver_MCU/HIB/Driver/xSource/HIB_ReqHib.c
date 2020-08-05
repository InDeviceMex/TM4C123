/*
 * HIB_ReqHib.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/HIB/Driver/xHeader/HIB_ReqHib.h>

#include <stdint.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

#define HIB_TIMEOUT_MAX (100000u)

HIB_nSTATUS HIB__enReqHibernation(void)
{
    HIB_nSTATUS enReturn = HIB_enOK;
    uint32_t u32TimeOut= HIB_TIMEOUT_MAX;
    if(HIB_HIBCTL_R_CLK32EN_EN == (HIB_HIBCTL_R & HIB_HIBCTL_R_CLK32EN_MASK))
    {
        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK))
        {
            u32TimeOut--;
            if( (uint32_t)0 == u32TimeOut)
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
    return (HIB_nSTATUS) enReturn;
}