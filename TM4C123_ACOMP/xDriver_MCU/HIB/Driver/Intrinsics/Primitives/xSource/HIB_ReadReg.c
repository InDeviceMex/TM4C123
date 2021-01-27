/**
 *
 * @file HIB_ReadReg.c
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
 * @verbatim 25 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/xHeader/HIB_ReadReg.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/xHeader/HIB_Ready.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/xHeader/HIB_Wait.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enReadRegister(uint32_t u32OffsetRegister, uint32_t* pu32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    HIB_nSTATUS enStatus = HIB_enSTATUS_UNDEF;
    HIB_nREADY enReady = HIB_enNOREADY;
    enReady = HIB__enIsReady();

    if( (HIB_enREADY == enReady) && (0UL != (uint32_t) pu32FeatureValue))
    {
        enStatus = HIB_enSTATUS_OK;
        *pu32FeatureValue = MCU__u32ReadRegister( HIB_BASE, u32OffsetRegister, u32MaskFeature, u32BitFeature);
    }
    return enStatus;
}
