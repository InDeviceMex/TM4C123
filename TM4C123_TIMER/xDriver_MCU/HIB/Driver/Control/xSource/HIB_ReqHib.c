/*
 * HIB_ReqHib.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/HIB/Driver/Control/xHeader/HIB_ReqHib.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>

#include <stdint.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>


HIB_nSTATUS HIB__enReqHibernation(void)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_OK;
    enReturn = HIB__enEnControlGeneric(HIB_HIBCTL_R_HIBREQ_INIT);
    return (HIB_nSTATUS) enReturn;
}
