/**
 *
 * @file HIB_ModuleClock.c
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
#include <xDriver_MCU/HIB/Driver/Control/xHeader/HIB_ModuleClock.h>

#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enEnModuleClock(void)
{
    return HIB__enSetControlGeneric( (uint32_t) HIB_enCLOCK_EN, HIB_HIBCTL_CLK32EN_MASK, HIB_HIBCTL_R_CLK32EN_BIT);
}

HIB_nSTATUS HIB__enDisModuleClock(void)
{
    return HIB__enSetControlGeneric( (uint32_t) HIB_enCLOCK_DIS, HIB_HIBCTL_CLK32EN_MASK, HIB_HIBCTL_R_CLK32EN_BIT);
}

HIB_nSTATUS HIB__enSetModuleClock(HIB_nCLOCK enClock)
{
    return HIB__enSetControlGeneric( (uint32_t) enClock, HIB_HIBCTL_CLK32EN_MASK, HIB_HIBCTL_R_CLK32EN_BIT);
}

HIB_nSTATUS HIB__enGetModuleClock(HIB_nCLOCK* enFeatureValue)
{
    HIB_nSTATUS enStatus = HIB_enSTATUS_UNDEF;
    if(0UL != (uint32_t) enFeatureValue)
    {
        enStatus = HIB__enGetControlGeneric( (uint32_t*) enFeatureValue, HIB_HIBCTL_CLK32EN_MASK, HIB_HIBCTL_R_CLK32EN_BIT);
    }
    return enStatus;
}
