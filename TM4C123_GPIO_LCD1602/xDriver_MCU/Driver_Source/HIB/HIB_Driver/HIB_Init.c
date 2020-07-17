/*
 * HIB_Init.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_Init.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/NVIC/NVIC.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB.h>
#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL.h>

#include <xDriver_MCU/Driver_Header/HIB/HIB_Peripheral/HIB_Peripheral.h>
#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_Interrupt.h>
#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_Intrinsics.h>
#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_InterruptRoutine.h>
#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_Counter.h>

#define HIB_TIMEOUT_MAX (12000000u)

HIB_nSTATUS HIB__enInit(uint32_t u32Match, uint32_t u32SubMatch)
{
    volatile HIB_nSTATUS enReturn = HIB_enERROR;
    uint32_t u32TimeOut= HIB_TIMEOUT_MAX;
    HIB_nREADY enReady= HIB_enBUSY;

    SCB__vRegisterISR(&HIB__vISR,SCB_enVECISR_HIB);
    SYSCTL__vResetPeripheral(SYSCTL_enHIB);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enHIB);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enHIB);
    NVIC__enSetEnableIRQ(NVIC_enSTIR_HIB,NVIC_enPRI0);

    HIB_HIBCTL_R=HIB_HIBCTL_R_RTCEN_EN;
    HIB_HIBIC_R=HIB_HIBIC_R_WC_CLEAR;
    HIB_HIBIM_R=HIB_HIBIM_R_WC_EN;
    HIB_HIBCTL_R|=HIB_HIBCTL_R_CLK32EN_EN;

    while((HIB_enBUSY == enReady) && (0u != u32TimeOut))
    {
        enReady = HIB__enGetGlobalStatus();
        u32TimeOut--;
    }

    if(HIB_enBUSY != enReady)
    {
        enReturn = HIB_enOK;
    }

    HIB_HIBIM_R=HIB_HIBIM_R_WC_DIS;
    if(HIB_enOK == enReturn)
    {
        enReturn= HIB__enSetMatch(u32Match,u32SubMatch);
    }
    if(HIB_enOK == enReturn)
    {
        enReturn= HIB__enSetCounter(0u);
    }

    if(HIB_enOK == enReturn)
    {
        enReturn= HIB__enClearInterrupt(HIB_enALL);
    }

    if(HIB_enOK == enReturn)
    {
        enReturn= HIB__enEnInterrupt(HIB_enRTCALT);
    }

    u32TimeOut= HIB_TIMEOUT_MAX;
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
        HIB_HIBCTL_R|=HIB_HIBCTL_R_RTCEN_EN|HIB_HIBCTL_R_VABORT_EN;
    }
    return enReturn;
}


