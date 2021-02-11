/**
 *
 * @file HIB_Match.c
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
#include <xDriver_MCU/HIB/Driver/xHeader/HIB_Match.h>

#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enGetMatch(uint32_t* pu32Match, uint32_t *pu32SubMatch)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_UNDEF;
    if((0UL != (uint32_t) pu32Match) && (0UL != (uint32_t) pu32SubMatch))
    {
        enReturn = HIB__enReadRegister(HIB_HIBRTCM0_OFFSET, pu32Match, HIB_HIBRTCM0_RTCM0_MASK, HIB_HIBRTCM0_R_RTCM0_BIT);
        if(HIB_enSTATUS_OK == enReturn)
        {
            enReturn = HIB__enReadRegister(HIB_HIBRTCSS_OFFSET, pu32SubMatch, HIB_HIBRTCSS_RTCSSM_MASK, HIB_HIBRTCSS_R_RTCSSM_BIT);
        }
    }
    return enReturn;
}

HIB_nSTATUS HIB__enSetMatch(uint32_t u32Match, uint32_t u32SubMatch)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;
    enReturn = HIB__enWriteRegister(HIB_HIBRTCM0_OFFSET, u32Match, HIB_HIBRTCM0_RTCM0_MASK, HIB_HIBRTCM0_R_RTCM0_BIT);
    if(HIB_enSTATUS_OK == enReturn)
    {
        enReturn = HIB__enWriteRegister(HIB_HIBRTCSS_OFFSET, u32SubMatch, HIB_HIBRTCSS_RTCSSM_MASK, HIB_HIBRTCSS_R_RTCSSM_BIT);
    }
    return enReturn;
}
