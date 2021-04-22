/**
 *
 * @file HIB_OscillatorDrive.c
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
#include <xDriver_MCU/HIB/Driver/Control/xHeader/HIB_OscillatorDrive.h>

#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enSetOscillatorDrive(HIB_nOSCDRIVE enOscDrive)
{
    return HIB__enSetControlGeneric( (uint32_t) enOscDrive, HIB_CTL_OSCDRV_MASK, HIB_CTL_R_OSCDRV_BIT);
}

HIB_nSTATUS HIB__enGetOscillatorDrive(HIB_nOSCDRIVE* enFeatureValue)
{
    HIB_nSTATUS enStatus = HIB_enSTATUS_UNDEF;
    if(0UL != (uint32_t) enFeatureValue)
    {
        enStatus = HIB__enGetControlGeneric( (uint32_t*) enFeatureValue, HIB_CTL_OSCDRV_MASK, HIB_CTL_R_OSCDRV_BIT);
    }
    return enStatus;
}
