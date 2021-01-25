/**
 *
 * @file HIB_ControlGeneric.c
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
 * @verbatim 11 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/HIB/Driver/Intrinsics/xHeader/HIB_ControlGeneric.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/HIB_Primitives.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enEnControlGeneric(uint32_t u32Mask)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;
    enReturn = HIB__enWriteRegister(HIB_HIBCTL_OFFSET, u32Mask, u32Mask, 0UL);
    return (HIB_nSTATUS) enReturn;
}

HIB_nSTATUS HIB__enDisControlGeneric(uint32_t u32Mask)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;
    enReturn = HIB__enWriteRegister(HIB_HIBCTL_OFFSET, 0UL, u32Mask, 0UL);
    return (HIB_nSTATUS) enReturn;
}

HIB_nSTATUS HIB__enSetControlGeneric(uint32_t u32ControlGeneric,uint32_t u32Mask, uint32_t u32Bit)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;
    enReturn = HIB__enWriteRegister(HIB_HIBCTL_OFFSET, u32ControlGeneric, u32Mask, u32Bit);
    return (HIB_nSTATUS) enReturn;
}

HIB_nSTATUS HIB__enGetControlGeneric(uint32_t* pu32ControlGeneric, uint32_t u32Mask, uint32_t u32Bit)
{
    HIB_nSTATUS enStatusRead= HIB_enSTATUS_UNDEF;

    enStatusRead = HIB__enReadRegister(HIB_HIBCTL_OFFSET, pu32ControlGeneric, u32Mask, u32Bit);
    return enStatusRead;
}


