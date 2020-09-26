/**
 *
 * @file DMA_CH_ControlWorld.c
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
 * @verbatim 21 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_ControlWorld.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>

void DMA_CH__vSetPrimaryControlWorld(DMA_nCH_MODULE enChannel, DMACHCTL_TypeDef sChannelControlWorld)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    volatile uint32_t *pu32Reg = (volatile uint32_t*)&sChannelControlWorld;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    DMACH->DMACh[u32Channel].DMACHCTL=*pu32Reg;
}

void DMA_CH__vSetAlternateControlWorld(DMA_nCH_MODULE enChannel, DMACHCTL_TypeDef sChannelControlWorld)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    volatile uint32_t* pu32Reg = (volatile uint32_t*)&sChannelControlWorld;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    DMAALTCH->DMACh[u32Channel].DMACHCTL=*pu32Reg;
}

void DMA_CH__vSetControlWorld(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, DMACHCTL_TypeDef sChannelControlWorld)
{
    if(DMA_enCH_CTL_PRIMARY ==  enChannelStructure)
    {
        DMA_CH__vSetPrimaryControlWorld(enChannel,sChannelControlWorld);
    }
    else
    {
        DMA_CH__vSetAlternateControlWorld(enChannel,sChannelControlWorld);
    }
}



uint32_t DMA_CH__u32GetAlternateControlWorld(DMA_nCH_MODULE enChannel)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    uint32_t u32Reg = 0u;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    u32Reg = DMACH->DMACh[u32Channel].DMACHCTL;
    return u32Reg;
}

uint32_t DMA_CH__u32GetPrimaryControlWorld(DMA_nCH_MODULE enChannel)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    uint32_t u32Reg = 0u;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    u32Reg = DMAALTCH->DMACh[u32Channel].DMACHCTL;
    return u32Reg;
}

uint32_t DMA_CH__u32GetControlWorld(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure)
{
    uint32_t u32Reg = 0u;
    if(DMA_enCH_CTL_PRIMARY ==  enChannelStructure)
    {
        u32Reg = DMA_CH__u32GetPrimaryControlWorld(enChannel);
    }
    else
    {
        u32Reg =DMA_CH__u32GetAlternateControlWorld(enChannel);
    }
    return u32Reg;
}


void DMA_CH__vGetAlternateControlWorld(DMA_nCH_MODULE enChannel,DMACHCTL_TypeDef* psChannelControlWorld)
{
    uint32_t u32Reg = 0u;
    volatile uint32_t* pu32Reg = (volatile uint32_t*)psChannelControlWorld;
    if(0u != (uint32_t)psChannelControlWorld)
    {
        u32Reg= DMA_CH__u32GetAlternateControlWorld(enChannel);
        *pu32Reg =u32Reg;
    }
}

void DMA_CH__vGetPrimaryControlWorld(DMA_nCH_MODULE enChannel,DMACHCTL_TypeDef* psChannelControlWorld)
{
    uint32_t u32Reg = 0u;
    volatile uint32_t* pu32Reg = (volatile uint32_t*)psChannelControlWorld;
    if(0u != (uint32_t)psChannelControlWorld)
    {
        u32Reg= DMA_CH__u32GetPrimaryControlWorld(enChannel);
        *pu32Reg =u32Reg;
    }
}

void DMA_CH__vGetControlWorld(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure,DMACHCTL_TypeDef* psChannelControlWorld)
{
    if(DMA_enCH_CTL_PRIMARY ==  enChannelStructure)
    {
        DMA_CH__vGetPrimaryControlWorld(enChannel,psChannelControlWorld);
    }
    else
    {
        DMA_CH__vGetAlternateControlWorld(enChannel,psChannelControlWorld);
    }
}

