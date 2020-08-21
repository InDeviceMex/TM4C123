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
    HIB_nREADY enReady = HIB_enNOREADY;
    volatile uint32_t u32SecondRead= 0;
    enReady = HIB__enIsReady();
    if(HIB_enREADY == enReady)
    {
        enReturn=HIB_enSTATUS_ERROR;
        *pu32Counter =HIB_HIBRTCC_R;
        *pu32SubCounter= HIB_HIBRTCSS_R;
        *pu32SubCounter&= HIB_HIBRTCSS_R_RTCSSC_MASK;
        *pu32SubCounter>>= HIB_HIBRTCSS_R_RTCSSC_BIT;
        u32SecondRead= HIB_HIBRTCC_R;
        if(*pu32Counter == u32SecondRead)
        {
            enReturn = HIB_enSTATUS_OK;
        }
    }
    return (HIB_nSTATUS) enReturn;
}





