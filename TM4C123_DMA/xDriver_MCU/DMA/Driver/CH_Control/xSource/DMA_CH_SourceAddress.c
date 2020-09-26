/**
 *
 * @file DMA_CH_SourceAddress.c
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
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_SourceAddress.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/DMA/Driver/CH_Control/xHeader/DMA_CH_SourceAddress.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>

void DMA_CH__vSetPrimarySourceEndAddress(DMA_nCH_MODULE enChannel, uint32_t u32SourceAddress)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    DMACH->DMACh[u32Channel].DMASRCENDP=u32SourceAddress;
}

void DMA_CH__vSetAlternateSourceEndAddress(DMA_nCH_MODULE enChannel, uint32_t u32SourceAddress)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    DMAALTCH->DMACh[u32Channel].DMASRCENDP=u32SourceAddress;
}

void DMA_CH__vSetSourceEndAddress(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, uint32_t u32SourceAddress)
{
    if(DMA_enCH_CTL_PRIMARY ==  enChannelStructure)
    {
        DMA_CH__vSetPrimarySourceEndAddress(enChannel,u32SourceAddress);
    }
    else
    {
        DMA_CH__vSetAlternateSourceEndAddress(enChannel,u32SourceAddress);
    }
}

uint32_t DMA_CH__u32GetPrimarySourceEndAddress(DMA_nCH_MODULE enChannel)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    return DMACH->DMACh[u32Channel].DMASRCENDP;
}

uint32_t DMA_CH__u32GetAlternateSourceEndAddress(DMA_nCH_MODULE enChannel)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    return DMAALTCH->DMACh[u32Channel].DMASRCENDP;
}

uint32_t DMA_CH__u32GetSourceEndAddress(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure)
{
    uint32_t u32Reg=0u;
    if(DMA_enCH_CTL_PRIMARY ==  enChannelStructure)
    {
        u32Reg = DMA_CH__u32GetPrimarySourceEndAddress(enChannel);
    }
    else
    {
        u32Reg = DMA_CH__u32GetAlternateSourceEndAddress(enChannel);
    }
    return u32Reg;
}


