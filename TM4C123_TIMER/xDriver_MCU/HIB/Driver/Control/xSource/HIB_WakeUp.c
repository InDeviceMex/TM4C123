/*
 * HIB_WakeUp.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/HIB/Driver/Control/xHeader/HIB_WakeUp.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>

#include <stdint.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enEnPinWakeUp(void)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_OK;
    enReturn = HIB__enEnControlGeneric(HIB_HIBCTL_R_PINWEN_EN);
    return (HIB_nSTATUS) enReturn;
}

HIB_nSTATUS HIB__enDisPinWakeUp(void)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_OK;
    enReturn = HIB__enDisControlGeneric(HIB_HIBCTL_R_PINWEN_EN);
    return (HIB_nSTATUS) enReturn;
}



