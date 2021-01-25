/**
 *
 * @file HIB_PinWake.c
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
#include <xDriver_MCU/HIB/Driver/Control/xHeader/HIB_PinWake.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>


HIB_nSTATUS HIB__enEnPinWakeUp(void)
{
    return HIB__enSetControlGeneric((uint32_t) HIB_enPINWAKE_EN,HIB_HIBCTL_PINWEN_MASK, HIB_HIBCTL_R_PINWEN_BIT);
}

HIB_nSTATUS HIB__enDisPinWakeUp(void)
{
    return HIB__enSetControlGeneric((uint32_t) HIB_enPINWAKE_DIS,HIB_HIBCTL_PINWEN_MASK, HIB_HIBCTL_R_PINWEN_BIT);
}

HIB_nSTATUS HIB__enSetPinWakeUp(HIB_nPINWAKE enPinWake)
{
    return HIB__enSetControlGeneric((uint32_t) enPinWake,HIB_HIBCTL_PINWEN_MASK, HIB_HIBCTL_R_PINWEN_BIT);
}

HIB_nSTATUS HIB__enGetPinWakeUp(HIB_nPINWAKE* enFeatureValue)
{
    return (HIB_nSTATUS) HIB__enGetControlGeneric((uint32_t*) enFeatureValue, HIB_HIBCTL_PINWEN_MASK, HIB_HIBCTL_R_PINWEN_BIT);
}
