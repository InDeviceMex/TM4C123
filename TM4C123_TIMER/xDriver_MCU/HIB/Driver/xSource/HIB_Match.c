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
    HIB_nREADY enReady = HIB_enNOREADY;
    volatile uint32_t u32SecondRead= 0;
    enReady = HIB__enIsReady();
    if(HIB_enREADY == enReady)
    {
        enReturn=HIB_enSTATUS_OK;
        *pu32Match =HIB_HIBRTCM0_R;
        *pu32SubMatch= HIB_HIBRTCSS_R;
        *pu32SubMatch&= HIB_HIBRTCSS_R_RTCSSM_MASK;
        *pu32SubMatch>>= HIB_HIBRTCSS_R_RTCSSM_BIT;
    }
    return (HIB_nSTATUS) enReturn;
}


HIB_nSTATUS HIB__enSetMatch(uint32_t u32Match, uint32_t u32SubMatch)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;
    uint32_t u32Reg=0u;
    HIB__vSetReady();

    enReturn =HIB__enWait();
    if(HIB_enSTATUS_OK == enReturn)
    {
        HIB_HIBRTCM0_R=u32Match;
    }

    enReturn =HIB__enWait();
    if(HIB_enSTATUS_OK == enReturn)
    {
        u32SubMatch&=HIB_HIBRTCSS_RTCSSM_MASK;
        u32SubMatch<<=HIB_HIBRTCSS_R_RTCSSM_BIT;
        u32Reg=HIB_HIBRTCSS_R;
        u32Reg&=~HIB_HIBRTCSS_R_RTCSSM_MASK;
        u32Reg|=u32SubMatch;
        HIB_HIBRTCSS_R=u32Reg;
    }
    return (HIB_nSTATUS) enReturn;
}
