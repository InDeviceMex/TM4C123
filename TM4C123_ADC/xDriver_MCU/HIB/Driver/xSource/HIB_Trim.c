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
    HIB_nREADY enReady = HIB_enNOREADY;
    enReady = HIB__enIsReady();
    if(HIB_enREADY == enReady)
    {
        enReturn=HIB_enSTATUS_OK;
        *pu32Trim =HIB_HIBRTCT_R;
        *pu32Trim &=HIB_HIBRTCT_R_TRIM_MASK;
        *pu32Trim >>=HIB_HIBRTCT_R_TRIM_BIT;

    }
    return (HIB_nSTATUS) enReturn;
}


HIB_nSTATUS HIB__enSetTrim(uint32_t u32Trim)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;
    HIB__vSetReady();

    enReturn =HIB__enWait();
    if(HIB_enSTATUS_OK == enReturn)
    {
        u32Trim&=HIB_HIBRTCT_TRIM_MASK;
        u32Trim<<=HIB_HIBRTCT_R_TRIM_BIT;
        HIB_HIBRTCT_R=u32Trim;
    }
    return (HIB_nSTATUS) enReturn;
}


