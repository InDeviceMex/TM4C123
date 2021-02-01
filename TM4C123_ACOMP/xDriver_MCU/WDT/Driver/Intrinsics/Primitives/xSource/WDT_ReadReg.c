/**
 *
 * @file WDT_ReadReg.c
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

#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_ReadReg.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_Ready.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_Wait.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

WDT_nSTATUS WDT__enReadRegister(WDT_nMODULE enModule, uint32_t* u32FeatureValue, uint32_t u32OffsetRegister, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    WDT_nSTATUS enStatus = WDT_enSTATUS_UNDEF;
    WDT_nREADY enReady = WDT_enNOREADY;
    enModule = (WDT_nMODULE)MCU__u32CheckPatams((uint32_t) enModule, (uint32_t) WDT_enMODULE_MAX);
    enReady = WDT__enIsReady(enModule);

    if(WDT_enREADY == enReady)
    {
        enStatus = WDT_enSTATUS_OK;
        *u32FeatureValue = MCU__u32ReadRegister(WDT_BLOCK_ADDRESS[(uint32_t) enModule], u32OffsetRegister, u32MaskFeature, u32BitFeature);
    }
    return enStatus;
}
