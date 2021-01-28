/**
 *
 * @file HIB_Trim.c
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
 * @verbatim 22 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/HIB/Driver/xHeader/HIB_Trim.h>

#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enGetTrim(uint32_t* pu32Trim)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_UNDEF;
    if(0UL != (uint32_t) pu32Trim)
    {
        enReturn = HIB__enReadRegister( HIB_HIBRTCT_OFFSET, pu32Trim, HIB_HIBRTCT_TRIM_MASK, HIB_HIBRTCT_R_TRIM_BIT);
    }
    return enReturn;
}

HIB_nSTATUS HIB__enSetTrim(uint32_t u32Trim)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;
    enReturn = HIB__enWriteRegister( HIB_HIBRTCT_OFFSET, u32Trim, HIB_HIBRTCT_TRIM_MASK, HIB_HIBRTCT_R_TRIM_BIT);
    return enReturn;
}
