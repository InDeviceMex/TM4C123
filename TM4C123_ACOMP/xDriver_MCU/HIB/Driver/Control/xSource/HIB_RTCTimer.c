/**
 *
 * @file HIB_RTCTimer.c
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
#include <xDriver_MCU/HIB/Driver/Control/xHeader/HIB_RTCTimer.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>


HIB_nSTATUS HIB__enEnRTCTimer(void)
{
    return HIB__enSetControlGeneric((uint32_t) HIB_enRTC_EN,HIB_HIBCTL_RTCEN_MASK, HIB_HIBCTL_R_RTCEN_BIT);
}

HIB_nSTATUS HIB__enDisRTCTimer(void)
{
    return HIB__enSetControlGeneric((uint32_t) HIB_enRTC_EN,HIB_HIBCTL_RTCEN_MASK, HIB_HIBCTL_R_RTCEN_BIT);
}

HIB_nSTATUS HIB__enSetRTCTimer(HIB_nRTC enRTC)
{
    return HIB__enSetControlGeneric((uint32_t) enRTC,HIB_HIBCTL_RTCEN_MASK, HIB_HIBCTL_R_RTCEN_BIT);
}

HIB_nSTATUS HIB__enGetRTCTimer(HIB_nRTC* enFeatureValue)
{
    return (HIB_nSTATUS) HIB__enGetControlGeneric((uint32_t*) enFeatureValue, HIB_HIBCTL_RTCEN_MASK, HIB_HIBCTL_R_RTCEN_BIT);
}


