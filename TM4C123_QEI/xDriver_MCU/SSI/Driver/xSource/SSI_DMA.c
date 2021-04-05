/**
 *
 * @file SSI_DMA.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/xHeader/SSI_DMA.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vSetDMARx(SSI_nMODULE enModule, SSI_nDMA enDMAEnableArg)
{
    SSI__vWriteRegister(enModule, SSI_SSIDMACTL_OFFSET, (uint32_t) enDMAEnableArg, SSI_SSIDMACTL_RXDMAE_MASK, SSI_SSIDMACTL_R_RXDMAE_BIT);
}

SSI_nDMA SSI__enGetDMARx(SSI_nMODULE enModule)
{
    SSI_nDMA enDMAEnableReg = SSI_enDMA_UNDEF;
    SSI__enReadRegister(enModule, SSI_SSIDMACTL_OFFSET, (uint32_t*) &enDMAEnableReg, SSI_SSIDMACTL_RXDMAE_MASK, SSI_SSIDMACTL_R_RXDMAE_BIT);
    return enDMAEnableReg;
}

void SSI__vSetDMATx(SSI_nMODULE enModule, SSI_nDMA enDMAEnableArg)
{
    SSI__vWriteRegister(enModule, SSI_SSIDMACTL_OFFSET, (uint32_t) enDMAEnableArg, SSI_SSIDMACTL_TXDMAE_MASK, SSI_SSIDMACTL_R_TXDMAE_BIT);
}

SSI_nDMA SSI__enGetDMATx(SSI_nMODULE enModule)
{
    SSI_nDMA enDMAEnableReg = SSI_enDMA_UNDEF;
    SSI__enReadRegister(enModule, SSI_SSIDMACTL_OFFSET, (uint32_t*) &enDMAEnableReg, SSI_SSIDMACTL_TXDMAE_MASK, SSI_SSIDMACTL_R_TXDMAE_BIT);
    return enDMAEnableReg;
}
