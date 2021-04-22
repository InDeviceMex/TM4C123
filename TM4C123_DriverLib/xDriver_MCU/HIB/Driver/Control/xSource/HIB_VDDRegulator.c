/**
 *
 * @file HIB_VDDRegulator.c
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
#include <xDriver_MCU/HIB/Driver/Control/xHeader/HIB_VDDRegulator.h>

#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enSetVDDRegulator(HIB_nVDD3ON enVDDReg)
{
    return HIB__enSetControlGeneric( (uint32_t) enVDDReg, HIB_CTL_VDD3ON_MASK, HIB_CTL_R_VDD3ON_BIT);
}

HIB_nSTATUS HIB__enGetVDDRegulator(HIB_nVDD3ON* enFeatureValue)
{
    HIB_nSTATUS enStatus = HIB_enSTATUS_UNDEF;
    if(0UL != (uint32_t) enFeatureValue)
    {
        enStatus = HIB__enGetControlGeneric( (uint32_t*) enFeatureValue, HIB_CTL_VDD3ON_MASK, HIB_CTL_R_VDD3ON_BIT);
    }
    return enStatus;
}
