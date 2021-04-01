/**
 *
 * @file ACMP_ReadRegister.c
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
 * @verbatim Mar 31, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 31, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/xHeader/ACMP_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/xHeader/ACMP_Ready.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

ACMP_nSTATUS ACMP__enReadRegister(ACMP_nMODULE enModule, uint32_t u32OffsetRegister, uint32_t* pu32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    ACMP_nSTATUS enStatus = ACMP_enSTATUS_UNDEF;
    ACMP_nREADY enReady = ACMP_enNOREADY;
    uint32_t u32ACMPBase = 0UL;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ACMP_enMODULE_MAX);

    enReady = ACMP__enIsReady((ACMP_nMODULE) u32Module);
    if((ACMP_enREADY == enReady) && (0UL != (uint32_t) pu32FeatureValue))
    {
        enStatus = ACMP_enSTATUS_OK;
        u32ACMPBase = ACMP_BLOCK_ADDRESS [u32Module];
        *pu32FeatureValue = MCU__u32ReadRegister(u32ACMPBase, u32OffsetRegister, u32MaskFeature, u32BitFeature);
    }
    return enStatus;
}



