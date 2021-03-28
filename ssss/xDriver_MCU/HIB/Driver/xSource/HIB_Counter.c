/*
 * HIB_Counter.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/HIB/Driver/xHeader/HIB_Counter.h>

#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enGetCounter(uint32_t* pu32Counter, uint32_t *pu32SubCounter)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_UNDEF;
    uint32_t u32SecondRead = 0UL;
    if((0UL != (uint32_t) pu32Counter) && (0UL != (uint32_t) pu32SubCounter))
    {
        enReturn = HIB__enReadRegister(HIB_HIBRTCC_OFFSET, pu32Counter, HIB_HIBRTCC_RTCC_MASK, HIB_HIBRTCC_R_RTCC_BIT);

        if(HIB_enSTATUS_OK == enReturn)
        {
            enReturn = HIB_enSTATUS_ERROR;
            HIB__enReadRegister(HIB_HIBRTCSS_OFFSET, pu32SubCounter, HIB_HIBRTCSS_RTCSSC_MASK, HIB_HIBRTCSS_R_RTCSSC_BIT);
            HIB__enReadRegister(HIB_HIBRTCC_OFFSET, &u32SecondRead, HIB_HIBRTCC_RTCC_MASK, HIB_HIBRTCC_R_RTCC_BIT);
            if(*pu32Counter == u32SecondRead)
            {
                enReturn = HIB_enSTATUS_OK;
            }
        }
    }
    return enReturn;
}
