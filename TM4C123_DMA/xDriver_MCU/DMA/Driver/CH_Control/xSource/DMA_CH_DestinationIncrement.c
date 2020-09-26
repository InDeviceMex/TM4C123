/**
 *
 * @file DMA_CH_DestinationIncrement.c
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
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_DestinationIncrement.h>
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_ControlGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>


void DMA_CH__vSetPrimaryDestinationIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_DST_INC enChannelDestinationIncrement)
{
    DMA_CH__vSetPrimaryControlGeneric(enChannel,DMAALTCH_DMACHCTL_DSTINC_MASK,DMAALTCH_DMACHCTL_R_DSTINC_BIT,(uint32_t)enChannelDestinationIncrement);
}

void DMA_CH__vSetAlternateDestinationIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_DST_INC enChannelDestinationIncrement)
{
    DMA_CH__vSetAlternateControlGeneric(enChannel,DMAALTCH_DMACHCTL_DSTINC_MASK,DMAALTCH_DMACHCTL_R_DSTINC_BIT,(uint32_t)enChannelDestinationIncrement);
}

void DMA_CH__vSetDestinationIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMA_nCH_DST_INC enChannelDestinationIncrement)
{
    DMA_CH__vSetControlGeneric(enChannel, enChannelStructure,DMAALTCH_DMACHCTL_DSTINC_MASK,DMAALTCH_DMACHCTL_R_DSTINC_BIT, enChannelDestinationIncrement);
}

DMA_nCH_DST_INC DMA_CH__enGetAlternateDestinationIncrement(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_DST_INC enReg = DMA_enCH_DST_INC_UNDEF;
    enReg = (DMA_nCH_DST_INC) DMA_CH__u32GetAlternateControlGeneric(enChannel,DMAALTCH_DMACHCTL_DSTINC_MASK, DMAALTCH_DMACHCTL_R_DSTINC_BIT);
    return enReg;
}

DMA_nCH_DST_INC DMA_CH__enGetPrimaryDestinationIncrement(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_DST_INC enReg = DMA_enCH_DST_INC_UNDEF;
    enReg = (DMA_nCH_DST_INC)DMA_CH__u32GetPrimaryControlGeneric(enChannel,DMAALTCH_DMACHCTL_DSTINC_MASK, DMAALTCH_DMACHCTL_R_DSTINC_BIT);
    return enReg;
}

DMA_nCH_DST_INC DMA_CH__enGetDestinationIncrement(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure)
{
    DMA_nCH_DST_INC enReg = DMA_enCH_DST_INC_UNDEF;
    enReg = (DMA_nCH_DST_INC) DMA_CH__u32GetControlGeneric(enChannel,enChannelStructure,DMAALTCH_DMACHCTL_DSTINC_MASK,DMAALTCH_DMACHCTL_R_DSTINC_BIT);
    return enReg;
}



