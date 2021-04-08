/**
 *
 * @file QEI_ReadRegister.c
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/xHeader/QEI_ReadRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/xHeader/QEI_Ready.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

QEI_nSTATUS QEI__enReadRegister(QEI_nMODULE enModule, uint32_t u32OffsetRegister, uint32_t* pu32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    QEI_nSTATUS enStatus = QEI_enSTATUS_UNDEF;
    QEI_nREADY enReady = QEI_enNOREADY;
    uint32_t u32QEIBase = 0UL;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) QEI_enMODULE_MAX);

    enReady = QEI__enIsReady((QEI_nMODULE) u32Module);
    if((QEI_enREADY == enReady) && (0UL != (uint32_t) pu32FeatureValue))
    {
        enStatus = QEI_enSTATUS_OK;
        u32QEIBase = QEI_BLOCK_ADDRESS [u32Module];
        *pu32FeatureValue = MCU__u32ReadRegister(u32QEIBase, u32OffsetRegister, u32MaskFeature, u32BitFeature);
    }
    return enStatus;
}




