/**
 *
 * @file HIB_Load.c
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
#include <xDriver_MCU/HIB/Driver/xHeader/HIB_Load.h>

#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enGetLoad(uint32_t* pu32Load)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_UNDEF;
    if(0UL != (uint32_t) pu32Load)
    {
        enReturn = HIB__enReadRegister(HIB_RTCLD_OFFSET, pu32Load, HIB_RTCLD_RTCLD_MASK, HIB_RTCLD_R_RTCLD_BIT);
    }
    return enReturn;
}

HIB_nSTATUS HIB__enSetLoad(uint32_t u32Load)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;
    enReturn = HIB__enWriteRegister(HIB_RTCLD_OFFSET, u32Load, HIB_RTCLD_RTCLD_MASK, HIB_RTCLD_R_RTCLD_BIT);
    return enReturn;
}
