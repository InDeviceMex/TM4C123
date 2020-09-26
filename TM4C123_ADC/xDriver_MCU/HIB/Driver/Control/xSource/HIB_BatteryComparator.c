/**
 *
 * @file HIB_BatteryComparator.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 21 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/HIB/Driver/Control/xHeader/HIB_BatteryComparator.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enSetBatteryComparator(HIB_nBATCOMP enBatComp)
{
    return HIB__enSetControlGeneric((uint32_t) enBatComp,HIB_HIBCTL_VBATSEL_MASK, HIB_HIBCTL_R_VBATSEL_BIT);
}

HIB_nBATCOMP HIB__enGetBatteryComparator(void)
{
    return (HIB_nBATCOMP) HIB__u32GetControlGeneric(HIB_HIBCTL_VBATSEL_MASK, HIB_HIBCTL_R_VBATSEL_BIT);
}
