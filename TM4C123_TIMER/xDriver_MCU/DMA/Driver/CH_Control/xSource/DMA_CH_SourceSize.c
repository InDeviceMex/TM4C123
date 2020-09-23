/**
 *
 * @file DMA_CH_SourceSize.c
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
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_SourceSize.h>
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_ControlGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>


void DMA_CH__vSetPrimarySourceSize(DMA_nCH_MODULE enChannel, DMA_nCH_SRC_SIZE enChannelSourceSize)
{
    DMA_CH__vSetPrimaryControlGeneric(enChannel,DMAALTCH_DMACHCTL_SRCSIZE_MASK,DMAALTCH_DMACHCTL_R_SRCSIZE_BIT,(uint32_t)enChannelSourceSize);
}

void DMA_CH__vSetAlternateSourceSize(DMA_nCH_MODULE enChannel, DMA_nCH_SRC_SIZE enChannelSourceSize)
{
    DMA_CH__vSetAlternateControlGeneric(enChannel,DMAALTCH_DMACHCTL_SRCSIZE_MASK,DMAALTCH_DMACHCTL_R_SRCSIZE_BIT,(uint32_t)enChannelSourceSize);
}

void DMA_CH__vSetSourceSize(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMA_nCH_SRC_SIZE enChannelSourceSize)
{
    DMA_CH__vSetControlGeneric(enChannel, enChannelStructure,DMAALTCH_DMACHCTL_SRCSIZE_MASK,DMAALTCH_DMACHCTL_R_SRCSIZE_BIT, enChannelSourceSize);
}

DMA_nCH_SRC_SIZE DMA_CH__enGetAlternateSourceSize(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_SRC_SIZE enReg = DMA_enCH_SRC_SIZE_UNDEF;
    enReg = (DMA_nCH_SRC_SIZE) DMA_CH__u32GetAlternateControlGeneric(enChannel,DMAALTCH_DMACHCTL_SRCSIZE_MASK, DMAALTCH_DMACHCTL_R_SRCSIZE_BIT);
    return enReg;
}

DMA_nCH_SRC_SIZE DMA_CH__enGetPrimarySourceSize(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_SRC_SIZE enReg = DMA_enCH_SRC_SIZE_UNDEF;
    enReg = (DMA_nCH_SRC_SIZE)DMA_CH__u32GetPrimaryControlGeneric(enChannel,DMAALTCH_DMACHCTL_SRCSIZE_MASK, DMAALTCH_DMACHCTL_R_SRCSIZE_BIT);
    return enReg;
}

DMA_nCH_SRC_SIZE DMA_CH__enGetSourceSize(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure)
{
    DMA_nCH_SRC_SIZE enReg = DMA_enCH_SRC_SIZE_UNDEF;
    enReg = (DMA_nCH_SRC_SIZE) DMA_CH__u32GetControlGeneric(enChannel,enChannelStructure,DMAALTCH_DMACHCTL_SRCSIZE_MASK,DMAALTCH_DMACHCTL_R_SRCSIZE_BIT);
    return enReg;
}



