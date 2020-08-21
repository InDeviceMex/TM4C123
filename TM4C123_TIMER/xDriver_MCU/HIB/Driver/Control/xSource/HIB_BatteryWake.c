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



HIB_nSTATUS HIB__enEnLOWBATWakeUp(void)
{
    return HIB__enSetControlGeneric((uint32_t) HIB_enBATWAKE_EN,HIB_HIBCTL_BATWKEN_MASK, HIB_HIBCTL_R_BATWKEN_BIT);
}

HIB_nSTATUS HIB__enDisLOWBATWakeUp(void)
{
    return HIB__enSetControlGeneric((uint32_t) HIB_enBATWAKE_DIS,HIB_HIBCTL_BATWKEN_MASK, HIB_HIBCTL_R_BATWKEN_BIT);
}

HIB_nSTATUS HIB__enSetLowBatteryWakeUp(HIB_nBATWAKE enBatWake)
{
    return HIB__enSetControlGeneric((uint32_t) enBatWake,HIB_HIBCTL_BATWKEN_MASK, HIB_HIBCTL_R_BATWKEN_BIT);
}

HIB_nBATWAKE HIB__enGetLowBatteryWakeUp(void)
{
    return (HIB_nBATCOMP) HIB__u32GetControlGeneric(HIB_HIBCTL_BATWKEN_MASK, HIB_HIBCTL_R_BATWKEN_BIT);
}
