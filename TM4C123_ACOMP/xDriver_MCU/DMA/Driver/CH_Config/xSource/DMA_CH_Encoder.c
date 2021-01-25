/**
 *
 * @file DMA_CH_Encoder.c
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
 * @verbatim 20 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/xHeader/DMA_CH_ConfigGeneric.h>
#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_Encoder.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>

void DMA_CH__vSetEncoder(DMA_nCH_MODULE enChannel, DMA_nCH_ENCODER enChannelEncoder)
{
    uint32_t u32Reg=0U;
    uint32_t u32Channel=(uint32_t)enChannel;
    uint32_t u32ChannelReg=0U;
    uint32_t u32ChannelPos=0U;
    uint32_t u32Encoder=(uint32_t)enChannelEncoder;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    if((uint32_t)DMA_enCH_ENCODER_MAX<u32Encoder)
    {
        u32Encoder = DMA_enCH_MODULE_MAX;
    }
    DMA__vSetReady(DMA_enMODULE_0);

    u32ChannelReg= u32Channel / 8U;
    u32ChannelPos =u32Channel % 8U;
    u32ChannelPos*= 4U;
    u32Encoder<<=u32ChannelPos;
    u32Reg = DMA_DMACHMAP->CHMAP[u32ChannelReg];
    u32Reg&= ~((uint32_t)0xFu << u32ChannelPos);
    u32Reg|=u32Encoder;
    DMA_DMACHMAP->CHMAP[u32ChannelReg] = u32Reg;
}

void DMA_CH__vSetEncoderDefine(DMA_nCHSRC enChannelEncoder)
{
    uint32_t u32Channel=(uint32_t)enChannelEncoder & 0xFFU;
    uint32_t u32Encoder=((uint32_t)enChannelEncoder >> 8U) & 0xFU;

    DMA_CH__vSetEncoder((DMA_nCH_MODULE)u32Channel,(DMA_nCH_ENCODER)u32Encoder);
}

DMA_nCH_ENCODER DMA_CH__enGetEncoder(DMA_nCH_MODULE enChannel)
{
    uint32_t u32Reg=0U;
    uint32_t u32Channel=(uint32_t)enChannel;
    uint32_t u32ChannelReg=0U;
    uint32_t u32ChannelPos=0U;
    DMA_nCH_ENCODER enChannelEncoder=DMA_enCH_ENCODER_UNDEF;
    DMA_nREADY enReady= DMA_enNOREADY;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    enReady=DMA__enIsReady(DMA_enMODULE_0);

    if(DMA_enREADY == enReady)
    {
        u32ChannelReg= u32Channel / 8U;
        u32ChannelPos =u32Channel % 8U;
        u32ChannelPos*= 4U;

        u32Reg=DMA_DMACHMAP->CHMAP[u32ChannelReg];
        u32Reg>>=u32ChannelPos;
        u32Reg&=0xFU;
        enChannelEncoder=(DMA_nCH_ENCODER)(u32Reg);
    }
    return enChannelEncoder;
}


DMA_nCHSRC DMA_CH__enGetEncoderDefine(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_ENCODER enChannelEncoder = DMA_enCH_ENCODER_UNDEF;
    uint32_t u32Encoder = 0;
    DMA_nCHSRC enEncoderChannel=DMA_enCHSRC_UNDEF;
    uint32_t u32EncoderChannel = 0U;

    if((uint32_t)DMA_enCH_MODULE_MAX<(uint32_t)enChannel)
    {
        enChannel = DMA_enCH_MODULE_MAX;
    }
    enChannelEncoder = DMA_CH__enGetEncoder(enChannel);
    u32Encoder =(uint32_t) enChannelEncoder;
    u32Encoder<<= 8U;
    u32EncoderChannel=(uint32_t)enChannel;
    u32EncoderChannel|=u32Encoder;
    enEncoderChannel = (DMA_nCHSRC)u32EncoderChannel;
    return enEncoderChannel;
}


