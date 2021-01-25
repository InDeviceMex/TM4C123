/**
 *
 * @file DMA_CH_TransferSize.c
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
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_TransferSize.h>
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_ControlGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>


void DMA_CH__vSetPrimaryTransferSize(DMA_nCH_MODULE enChannel, uint32_t u32ChannelTransferSize)
{
    u32ChannelTransferSize-=1U;
    DMA_CH__vSetPrimaryControlGeneric(enChannel,DMAALTCH_DMACHCTL_XFERSIZE_MASK,DMAALTCH_DMACHCTL_R_XFERSIZE_BIT,(uint32_t)u32ChannelTransferSize);
}

void DMA_CH__vSetAlternateTransferSize(DMA_nCH_MODULE enChannel, uint32_t u32ChannelTransferSize)
{
    u32ChannelTransferSize-=1U;
    DMA_CH__vSetAlternateControlGeneric(enChannel,DMAALTCH_DMACHCTL_XFERSIZE_MASK,DMAALTCH_DMACHCTL_R_XFERSIZE_BIT,(uint32_t)u32ChannelTransferSize);
}

void DMA_CH__vSetTransferSize(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, uint32_t u32ChannelTransferSize)
{
    u32ChannelTransferSize-=1U;
    DMA_CH__vSetControlGeneric(enChannel, enChannelStructure,DMAALTCH_DMACHCTL_XFERSIZE_MASK,DMAALTCH_DMACHCTL_R_XFERSIZE_BIT, u32ChannelTransferSize);
}

uint32_t DMA_CH__u32GetAlternateTransferSize(DMA_nCH_MODULE enChannel)
{
    uint32_t u32Reg = 0U;
    u32Reg = (uint32_t) DMA_CH__u32GetAlternateControlGeneric(enChannel,DMAALTCH_DMACHCTL_XFERSIZE_MASK, DMAALTCH_DMACHCTL_R_XFERSIZE_BIT);
    u32Reg+=1U;
    return u32Reg;
}

uint32_t DMA_CH__u32GetPrimaryTransferSize(DMA_nCH_MODULE enChannel)
{

    uint32_t u32Reg = 0U;
    u32Reg = (uint32_t)DMA_CH__u32GetPrimaryControlGeneric(enChannel,DMAALTCH_DMACHCTL_XFERSIZE_MASK, DMAALTCH_DMACHCTL_R_XFERSIZE_BIT);
    u32Reg+=1U;
    return u32Reg;
}

uint32_t DMA_CH__u32GetTransferSize(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure)
{
    uint32_t u32Reg = 0U;
    u32Reg = (uint32_t) DMA_CH__u32GetControlGeneric(enChannel,enChannelStructure,DMAALTCH_DMACHCTL_XFERSIZE_MASK,DMAALTCH_DMACHCTL_R_XFERSIZE_BIT);
    u32Reg+=1U;
    return u32Reg;
}


