/**
 *
 * @file HIB_InterruptSource.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/HIB/Driver/Intrinsics/Interrupt/xHeader/HIB_InterruptSource.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/HIB_Primitives.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enEnInterruptSource(HIB_nINT enInterruptParam)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_OK;
    enInterruptParam &= (uint32_t) HIB_enINT_ALL;
    enReturn = HIB__enWriteRegister(HIB_HIBIM_OFFSET, (uint32_t) enInterruptParam, (uint32_t) enInterruptParam, 0UL);

    return enReturn;
}

HIB_nSTATUS HIB__enDisInterruptSource(HIB_nINT enInterruptParam)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_OK;
    enInterruptParam &= (uint32_t) HIB_enINT_ALL;
    enReturn = HIB__enWriteRegister(HIB_HIBIM_OFFSET, 0UL, (uint32_t) enInterruptParam, 0UL);

    return enReturn;
}

HIB_nSTATUS HIB__enClearInterruptSource(HIB_nINT enInterruptParam)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_OK;
    enInterruptParam &= (uint32_t) HIB_enINT_ALL;
    enReturn = HIB__enWriteRegister(HIB_HIBIC_OFFSET, (uint32_t) enInterruptParam, (uint32_t) enInterruptParam, 0UL);

    return enReturn;
}

HIB_nINT_STATUS HIB__enStatusInterruptSource(HIB_nINT enInterruptParam)
{
    HIB_nSTATUS enStatusRead= HIB_enSTATUS_UNDEF;
    HIB_nINT_STATUS enStatus = HIB_enINT_STATUS_UNDEF;
    uint32_t u32Reg = 0UL;

    enInterruptParam &= (uint32_t) HIB_enINT_ALL;
    enStatusRead = HIB__enReadRegister(HIB_HIBRIS_OFFSET, &u32Reg, (uint32_t) enInterruptParam, 0UL);
    if(HIB_enSTATUS_ERROR != enStatusRead)
    {
        if(0UL != u32Reg)
        {
            enStatus = HIB_enINT_OCCUR;
        }
        else
        {
            enStatus = HIB_enINT_NOOCCUR;
        }
    }
    return enStatus;
}
