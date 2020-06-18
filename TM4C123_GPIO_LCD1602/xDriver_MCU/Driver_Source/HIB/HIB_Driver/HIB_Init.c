/*
 * HIB_Init.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_Init.h>

HIB_nSTATUS HIB__enInit(uint32_t u32Match, uint32_t u32SubMatch)
{
    volatile HIB_nSTATUS enReturn = HIB_enERROR;
    volatile uint32_t u32TimeOut= 12000000;
    volatile HIB_nREADY enReady= HIB_enBUSY;

    SCB__vRegisterISR(HIB__vISR,SCB_enVECISR_HIB);
    SYSCTL__vResetPeripheral(SYSCTL_enHIB);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enHIB);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enHIB);
    NVIC__enSetEnableIRQ(NVIC_enSTIR_HIB,NVIC_enPRI0);

    HIB_HIBCTL_R=HIB_HIBCTL_R_RTCEN_EN;
    HIB_HIBIC_R=HIB_HIBIC_R_WC_CLEAR;
    HIB_HIBIM_R=HIB_HIBIM_R_WC_EN;
    HIB_HIBCTL_R|=HIB_HIBCTL_R_CLK32EN_EN;

    do
    {
        enReady=HIB__enGetGlobalStatus();
        if(HIB_enBUSY!=enReady)
        {
            enReturn = HIB_enOK;
        }
        u32TimeOut--;
    }while((HIB_enBUSY == enReady) && (0!= u32TimeOut));


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


