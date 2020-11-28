/**
 *
 * @file DMA_CH_DestinationAddress.c
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
#include <DMA/Driver/CH_Control/xHeader/DMA_CH_DestinationAddress.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>

void DMA_CH__vSetPrimaryDestEndAddress(DMA_nCH_MODULE enChannel, uint32_t u32DestAddress)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    DMACH->DMACh[u32Channel].DMADSTENDP=u32DestAddress;
}

void DMA_CH__vSetAlternateDestEndAddress(DMA_nCH_MODULE enChannel, uint32_t u32DestAddress)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    DMAALTCH->DMACh[u32Channel].DMADSTENDP=u32DestAddress;
}

void DMA_CH__vSetDestEndAddress(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure, uint32_t u32DestAddress)
{
    if(DMA_enCH_CTL_PRIMARY ==  enChannelStructure)
    {
        DMA_CH__vSetPrimaryDestEndAddress(enChannel,u32DestAddress);
    }
    else
    {
        DMA_CH__vSetAlternateDestEndAddress(enChannel,u32DestAddress);
    }
}

uint32_t DMA_CH__u32GetPrimaryDestEndAddress(DMA_nCH_MODULE enChannel)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    return DMACH->DMACh[u32Channel].DMADSTENDP;
}

uint32_t DMA_CH__u32GetAlternateDestEndAddress(DMA_nCH_MODULE enChannel)
{
    uint32_t u32Channel=(uint32_t)enChannel;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    return DMAALTCH->DMACh[u32Channel].DMADSTENDP;
}

uint32_t DMA_CH__u32GetDestEndAddress(DMA_nCH_MODULE enChannel, DMA_nCH_CTL enChannelStructure)
{
    uint32_t u32Reg=0u;
    if(DMA_enCH_CTL_PRIMARY ==  enChannelStructure)
    {
        u32Reg = DMA_CH__u32GetPrimaryDestEndAddress(enChannel);
    }
    else
    {
        u32Reg = DMA_CH__u32GetAlternateDestEndAddress(enChannel);
    }
    return u32Reg;
}
