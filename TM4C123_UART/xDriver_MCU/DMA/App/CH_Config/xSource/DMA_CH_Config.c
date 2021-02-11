/**
 *
 * @file DMA_CH_Config.c
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
#include <xDriver_MCU/DMA/App/CH_Config/DMA_CH_Config.h>

#include <stdlib.h>
#include <xDriver_MCU/DMA/App/CH_Config/xHeader/DMA_CH_ConfigStruct.h>
#include <xDriver_MCU/DMA/Driver/DMA_Driver.h>

void DMA_CH__vSetConfigStruct(DMA_nCH_MODULE enDMAChannel, DMA_CONFIG_Typedef psConfig)
{
        DMA_CH__vSetControlStructure(enDMAChannel, psConfig.enControlStructure);
        DMA_CH__vSetPriority(enDMAChannel, psConfig.enChannelPriority);
        DMA_CH__vSetEncoder(enDMAChannel, psConfig.enEncoder);
        DMA_CH__vSetPeripheralEnable(enDMAChannel, psConfig.enPeripheralEnable);
        DMA_CH__vSetRequestType(enDMAChannel, psConfig.enReqType);
}

void DMA_CH__vGetConfig(DMA_nCH_MODULE enDMAChannel, DMA_CONFIG_Typedef* psConfig)
{
    psConfig->enControlStructure = DMA_CH__enGetControlStructure(enDMAChannel);
    psConfig->enChannelPriority = DMA_CH__enGetPriority(enDMAChannel);
    psConfig->enEncoder = DMA_CH__enGetEncoder(enDMAChannel);
    psConfig->enPeripheralEnable = DMA_CH__enGetPeripheralEnable(enDMAChannel);
    psConfig->enReqType = DMA_CH__enGetRequestType(enDMAChannel);
}

DMA_CONFIG_Typedef* DMA_CH__psGetConfig(DMA_nCH_MODULE enDMAChannel)
{
    DMA_CONFIG_Typedef* psConfig = 0UL;
    #if defined (__TI_ARM__ )
    psConfig = (DMA_CONFIG_Typedef*) memalign( (size_t) 4, (size_t) sizeof(DMA_CONFIG_Typedef));
    #elif defined (__GNUC__ )
    psConfig = (DMA_CONFIG_Typedef*) malloc(sizeof(DMA_CONFIG_Typedef));
    #endif
    if(0UL != (uint32_t) psConfig)
    {
        psConfig->enControlStructure = DMA_CH__enGetControlStructure(enDMAChannel);
        psConfig->enChannelPriority = DMA_CH__enGetPriority(enDMAChannel);
        psConfig->enEncoder = DMA_CH__enGetEncoder(enDMAChannel);
        psConfig->enPeripheralEnable = DMA_CH__enGetPeripheralEnable(enDMAChannel);
        psConfig->enReqType = DMA_CH__enGetRequestType(enDMAChannel);
    }
    return psConfig;
}

void DMA_CH__vDeleteConfigStruct(DMA_CONFIG_Typedef* psConfig)
{
    free(psConfig);
    psConfig = (DMA_CONFIG_Typedef*) 0UL;
}
