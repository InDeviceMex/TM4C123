/**
 *
 * @file HIB_BatteryCheck.c
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
#include <xDriver_MCU/HIB/Driver/Control/xHeader/HIB_BatteryCheck.h>

#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enInitBatteryStatus(void)
{
    return HIB__enSetControlGeneric( (uint32_t) HIB_enBATCHECK_INIT, HIB_HIBCTL_BATCHK_MASK, HIB_HIBCTL_R_BATCHK_BIT);
}

HIB_nSTATUS HIB__enGetBatteryStatus(HIB_nBATCHECK_STATUS* enFeatureValue)
{
    HIB_nSTATUS enStatus = HIB_enSTATUS_UNDEF;
    if(0UL != (uint32_t) enFeatureValue)
    {
        enStatus = HIB__enGetControlGeneric( (uint32_t*) enFeatureValue, HIB_HIBCTL_BATCHK_MASK, HIB_HIBCTL_R_BATCHK_BIT);
    }
    return enStatus;
}
