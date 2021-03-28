/**
 *
 * @file HIB_WriteReg.c
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
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/xHeader/HIB_WriteReg.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/xHeader/HIB_Ready.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/xHeader/HIB_Wait.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

HIB_nSTATUS HIB__enWriteRegister(uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    HIB_nSTATUS enReturn = HIB_enSTATUS_ERROR;
    HIB__vSetReady();
    enReturn = HIB__enWait();
    if(HIB_enSTATUS_OK == enReturn)
    {
        MCU__vWriteRegister(HIB_BASE, u32OffsetRegister, u32FeatureValue, u32MaskFeature, u32BitFeature);
    }
    return enReturn;
}

