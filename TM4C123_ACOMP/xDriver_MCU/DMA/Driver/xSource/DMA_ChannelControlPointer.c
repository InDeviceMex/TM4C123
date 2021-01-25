/**
 *
 * @file DMA_ChannelControlPointer.c
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
 * @verbatim 19 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/DMA/Driver/xHeader/DMA_ChannelControlPointer.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>

void DMA__vSetChannelControlPointer(uint32_t u32ControlAddress)
{
    uint32_t u32ControlAddressReg=0U;
    DMA__vSetReady(DMA_enMODULE_0);
    u32ControlAddressReg = u32ControlAddress & DMA_DMACTLBASE_R_ADDR_MASK;
    DMA_DMACTLBASE_R=u32ControlAddressReg;
}

uint32_t DMA__u32GetChannelControlPointer(void)
{
    uint32_t u32Reg=0U;
    DMA_nREADY enReady= DMA_enNOREADY;
    enReady=DMA__enIsReady(DMA_enMODULE_0);

    if(DMA_enREADY == enReady)
    {
        u32Reg=DMA_DMACTLBASE_R;
        u32Reg&=DMA_DMACTLBASE_R_ADDR_MASK;
    }
    return u32Reg;
}


