/**
 *
 * @file DMA_ChannelControlAltPointer.c
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
#include <xDriver_MCU/DMA/Driver/xHeader/DMA_ChannelControlAltPointer.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>

uint32_t DMA__u32GetChannelControlAltPointer(void)
{
    uint32_t u32Reg=0U;
    DMA_nREADY enReady= DMA_enNOREADY;
    enReady=DMA__enIsReady(DMA_enMODULE_0);

    if(DMA_enREADY == enReady)
    {
        u32Reg=DMA_DMAALTBASE_R;
        u32Reg&=DMA_DMAALTBASE_R_ADDR_MASK;
    }
    return u32Reg;
}



