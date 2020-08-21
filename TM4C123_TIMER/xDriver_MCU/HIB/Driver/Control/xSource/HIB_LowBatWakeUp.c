/*
 * HIB_LowBatWakeUp.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/HIB/Driver/Control/xHeader/HIB_LowBatWakeUp.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enEnLOWBATWakeUp(void)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_OK;
    enReturn = HIB__enEnControlGeneric(HIB_HIBCTL_R_BATWKEN_EN);
    return (HIB_nSTATUS) enReturn;
}

HIB_nSTATUS HIB__enDisLOWBATWakeUp(void)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_OK;
    enReturn = HIB__enDisControlGeneric(HIB_HIBCTL_R_BATWKEN_EN);
    return (HIB_nSTATUS) enReturn;
}
