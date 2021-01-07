/**
 *
 * @file DMA_CH_ControlStruct.c
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
#include <stdlib.h>
#include <xDriver_MCU/DMA/App/CH_Control/xHeader/DMA_CH_ControlStruct.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nSTATUS DMA_CH__enCreateControlStructPointer(uint32_t u32ControlWorld,DMA_CONTROL_Typedef* psControl)
{
    DMA_nSTATUS enDMAStatus = DMA_enERROR;
    if(psControl!=0)
    {
        psControl->enTransferMode = (DMA_nCH_MODE)((u32ControlWorld>>DMAALTCH_DMACHCTL_R_XFERMODE_BIT)&DMAALTCH_DMACHCTL_XFERMODE_MASK);
        psControl->enUseBurst = (DMA_nCH_BURST)((u32ControlWorld>>DMAALTCH_DMACHCTL_R_NXTUSEBURST_BIT)&DMAALTCH_DMACHCTL_NXTUSEBURST_MASK);
        psControl->u32TransferSize = (((u32ControlWorld>>DMAALTCH_DMACHCTL_R_XFERSIZE_BIT)&DMAALTCH_DMACHCTL_XFERSIZE_MASK)+1u);
        psControl->enBurstSize = (DMA_nCH_BURST_SIZE)((u32ControlWorld>>DMAALTCH_DMACHCTL_R_ARBSIZE_BIT)&DMAALTCH_DMACHCTL_ARBSIZE_MASK);
        psControl->enSourceSize = (DMA_nCH_SRC_SIZE)((u32ControlWorld>>DMAALTCH_DMACHCTL_R_SRCSIZE_BIT)&DMAALTCH_DMACHCTL_SRCSIZE_MASK);
        psControl->enSourceInc = (DMA_nCH_SRC_INC)((u32ControlWorld>>DMAALTCH_DMACHCTL_R_SRCINC_BIT)&DMAALTCH_DMACHCTL_SRCINC_MASK);
        psControl->enDestSize =(DMA_nCH_DST_SIZE)((u32ControlWorld>>DMAALTCH_DMACHCTL_R_DSTSIZE_BIT)&DMAALTCH_DMACHCTL_DSTSIZE_MASK);
        psControl->enDestInc = (DMA_nCH_DST_INC)((u32ControlWorld>>DMAALTCH_DMACHCTL_R_DSTINC_BIT)&DMAALTCH_DMACHCTL_DSTINC_MASK);
    }
    return enDMAStatus;
}

DMA_CONTROL_Typedef* DMA_CH__psCreateControlStruct(uint32_t u32ControlWorld)
{
    DMA_CONTROL_Typedef* psControl=0;
    #if defined ( __TI_ARM__ )
    psControl = (DMA_CONTROL_Typedef*) memalign((size_t)4,(size_t)sizeof(DMA_CONTROL_Typedef));
    #elif defined ( __GNUC__ )
    psControl = (DMA_CONTROL_Typedef*) malloc((size_t)sizeof(DMA_CONTROL_Typedef));
    #endif
    DMA_CH__enCreateControlStructPointer(u32ControlWorld,psControl);
    return psControl;
}


