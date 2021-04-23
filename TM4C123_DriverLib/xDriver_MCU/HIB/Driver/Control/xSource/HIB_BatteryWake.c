/**
 *
 * @file HIB_BatteryWake.c
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
#include <xDriver_MCU/HIB/Driver/Control/xHeader/HIB_BatteryWake.h>

#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enEnLowBatteryWakeUp(void)
{
    return HIB__enSetControlGeneric( (uint32_t) HIB_enBATWAKE_ENA, HIB_CTL_BATWKEN_MASK, HIB_CTL_R_BATWKEN_BIT);
}

HIB_nSTATUS HIB__enDisLowBatteryWakeUp(void)
{
    return HIB__enSetControlGeneric( (uint32_t) HIB_enBATWAKE_DIS, HIB_CTL_BATWKEN_MASK, HIB_CTL_R_BATWKEN_BIT);
}

HIB_nSTATUS HIB__enSetLowBatteryWakeUp(HIB_nBATWAKE enBatWake)
{
    return HIB__enSetControlGeneric( (uint32_t) enBatWake, HIB_CTL_BATWKEN_MASK, HIB_CTL_R_BATWKEN_BIT);
}

HIB_nSTATUS HIB__enGetLowBatteryWakeUp(HIB_nBATWAKE* enFeatureValue)
{
    HIB_nSTATUS enStatus = HIB_enSTATUS_UNDEF;
    if(0UL != (uint32_t) enFeatureValue)
    {
        enStatus = HIB__enGetControlGeneric( (uint32_t*) enFeatureValue, HIB_CTL_BATWKEN_MASK, HIB_CTL_R_BATWKEN_BIT);
    }
    return enStatus;
}
