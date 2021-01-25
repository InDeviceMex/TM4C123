/**
 *
 * @file DMA_CH_ControlGeneric.c
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
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_ControlGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>

void DMA_CH__vSetPrimaryControlGeneric(DMA_nCH_MODULE enChannel, uint32_t u32Mask, uint32_t u32bit, uint32_t u32Value)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    uint32_t u32Reg = 0U;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    u32Reg =  DMACH->DMACh[u32Channel].DMACHCTL;
    u32Reg&= ~(u32Mask<<u32bit);
    u32Reg|=(u32Value<<u32bit);
    DMACH->DMACh[u32Channel].DMACHCTL=u32Reg;
}

void DMA_CH__vSetAlternateControlGeneric(DMA_nCH_MODULE enChannel, uint32_t u32Mask, uint32_t u32bit, uint32_t u32Value)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    uint32_t u32Reg = 0U;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    u32Reg =  DMAALTCH->DMACh[u32Channel].DMACHCTL;
    u32Reg&= ~(u32Mask<<u32bit);
    u32Reg|=(u32Value<<u32bit);
    DMAALTCH->DMACh[u32Channel].DMACHCTL=u32Reg;
}

void DMA_CH__vSetControlGeneric(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, uint32_t u32Mask, uint32_t u32bit, uint32_t u32Value)
{
    if(DMA_enCH_CTL_PRIMARY ==  enChannelStructure)
    {
        DMA_CH__vSetPrimaryControlGeneric(enChannel, u32Mask, u32bit, u32Value);
    }
    else
    {
        DMA_CH__vSetAlternateControlGeneric(enChannel, u32Mask, u32bit, u32Value);
    }
}

uint32_t DMA_CH__u32GetAlternateControlGeneric(DMA_nCH_MODULE enChannel, uint32_t u32Mask, uint32_t u32bit)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    uint32_t u32Reg = 0U;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    u32Reg = DMACH->DMACh[u32Channel].DMACHCTL;
    u32Reg&=(u32Mask<<u32bit);
    u32Reg>>=u32bit;
    return u32Reg;
}

uint32_t DMA_CH__u32GetPrimaryControlGeneric(DMA_nCH_MODULE enChannel, uint32_t u32Mask, uint32_t u32bit)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    uint32_t u32Reg = 0U;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    u32Reg = DMAALTCH->DMACh[u32Channel].DMACHCTL;
    u32Reg&=(u32Mask<<u32bit);
    u32Reg>>=u32bit;
    return u32Reg;
}

uint32_t DMA_CH__u32GetControlGeneric(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, uint32_t u32Mask, uint32_t u32bit)
{
    uint32_t u32Reg = 0U;
    if(DMA_enCH_CTL_PRIMARY ==  enChannelStructure)
    {
        u32Reg = DMA_CH__u32GetPrimaryControlGeneric(enChannel,u32Mask,u32bit);
    }
    else
    {
        u32Reg = DMA_CH__u32GetAlternateControlGeneric(enChannel,u32Mask,u32bit);
    }
    return u32Reg;
}
