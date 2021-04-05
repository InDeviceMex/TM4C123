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
    return HIB__enSetControlGeneric( (uint32_t) enBatComp, HIB_HIBCTL_VBATSEL_MASK, HIB_HIBCTL_R_VBATSEL_BIT);
}

HIB_nSTATUS HIB__enGetBatteryComparator(HIB_nBATCOMP* enFeatureValue)
{
    HIB_nSTATUS enStatus = HIB_enSTATUS_UNDEF;
    if(0UL != (uint32_t) enFeatureValue)
    {
        enStatus = HIB__enGetControlGeneric( (uint32_t*) enFeatureValue, HIB_HIBCTL_VBATSEL_MASK, HIB_HIBCTL_R_VBATSEL_BIT);
    }
    return enStatus;
}
