/**
 *
 * @file HIB_PowerCut.c
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
#include <xDriver_MCU/HIB/Driver/Control/xHeader/HIB_PowerCut.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>



HIB_nSTATUS HIB__enSetPowerCut(HIB_nVABORT enVAbort)
{
    return HIB__enSetControlGeneric((uint32_t) enVAbort,HIB_HIBCTL_VABORT_MASK, HIB_HIBCTL_R_VABORT_BIT);
}

HIB_nSTATUS HIB__enGetPowerCut(HIB_nVABORT* enFeatureValue)
{
    return (HIB_nSTATUS) HIB__enGetControlGeneric((uint32_t*) enFeatureValue, HIB_HIBCTL_VABORT_MASK, HIB_HIBCTL_R_VABORT_BIT);
}

HIB_nVABORT HIB__enGetPowerCut(void)
{
    return (HIB_nVABORT) HIB__u32GetControlGeneric(HIB_HIBCTL_VABORT_MASK, HIB_HIBCTL_R_VABORT_BIT);
}
