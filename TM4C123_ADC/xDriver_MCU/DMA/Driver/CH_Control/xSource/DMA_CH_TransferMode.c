/**
 *
 * @file DMA_CH_TransferMode.c
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
 * @verbatim 23 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_TransferMode.h>
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_ControlGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>


void DMA_CH__vSetPrimaryTransferMode(DMA_nCH_MODULE enChannel, DMA_nCH_MODE enChannelTransferMode)
{
    DMA_CH__vSetPrimaryControlGeneric(enChannel,DMAALTCH_DMACHCTL_XFERMODE_MASK,DMAALTCH_DMACHCTL_R_XFERMODE_BIT,(uint32_t)enChannelTransferMode);
}

void DMA_CH__vSetAlternateTransferMode(DMA_nCH_MODULE enChannel, DMA_nCH_MODE enChannelTransferMode)
{
    DMA_CH__vSetAlternateControlGeneric(enChannel,DMAALTCH_DMACHCTL_XFERMODE_MASK,DMAALTCH_DMACHCTL_R_XFERMODE_BIT,(uint32_t)enChannelTransferMode);

}

void DMA_CH__vSetTransferMode(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMA_nCH_MODE enChannelTransferMode)
{
    DMA_CH__vSetControlGeneric(enChannel, enChannelStructure,DMAALTCH_DMACHCTL_XFERMODE_MASK,DMAALTCH_DMACHCTL_R_XFERMODE_BIT, enChannelTransferMode);
}

DMA_nCH_MODE DMA_CH__enGetAlternateTransferMode(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_MODE enReg = DMA_enCH_MODE_UNDEF;
    enReg = (DMA_nCH_MODE) DMA_CH__u32GetAlternateControlGeneric(enChannel,DMAALTCH_DMACHCTL_XFERMODE_MASK, DMAALTCH_DMACHCTL_R_XFERMODE_BIT);
    return enReg;
}

DMA_nCH_MODE DMA_CH__enGetPrimaryTransferMode(DMA_nCH_MODULE enChannel)
{

    DMA_nCH_MODE enReg = DMA_enCH_MODE_UNDEF;
    enReg = (DMA_nCH_MODE)DMA_CH__u32GetPrimaryControlGeneric(enChannel,DMAALTCH_DMACHCTL_XFERMODE_MASK, DMAALTCH_DMACHCTL_R_XFERMODE_BIT);
    return enReg;
}

DMA_nCH_MODE DMA_CH__enGetTransferMode(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure)
{
    DMA_nCH_MODE enReg = DMA_enCH_MODE_UNDEF;
    enReg = (DMA_nCH_MODE) DMA_CH__u32GetControlGeneric(enChannel,enChannelStructure,DMAALTCH_DMACHCTL_XFERMODE_MASK,DMAALTCH_DMACHCTL_R_XFERMODE_BIT);
    return enReg;
}


