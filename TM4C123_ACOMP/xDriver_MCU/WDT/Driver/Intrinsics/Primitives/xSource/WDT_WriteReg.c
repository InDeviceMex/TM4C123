/**
 *
 * @file WDT_WriteReg.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_WriteReg.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_Ready.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_Wait.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>


void WDT__vWriteRegister(WDT_nMODULE enModule, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    enModule = (WDT_nMODULE)MCU__u32CheckPatams((uint32_t) enModule, (uint32_t) WDT_enMODULE_MAX);
    WDT__vSetReady(enModule);
    MCU__vWriteRegister(WDT_BLOCK_ADDRESS[(uint32_t) enModule], u32OffsetRegister, u32FeatureValue, u32MaskFeature, u32BitFeature);
    WDT__vWaitWrite(enModule);
}
