/**
 *
 * @file DMA_State.c
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
#include <xDriver_MCU/DMA/Driver/xHeader/DMA_State.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>


DMA_nSTATE DMA__enGetModuleState(void)
{
    uint32_t u32Reg=0U;
    DMA_nSTATE enModuleState = DMA_enSTATE_UNDEF;
    DMA_nREADY enReady= DMA_enNOREADY;
    enReady=DMA__enIsReady(DMA_enMODULE_0);

    if(DMA_enREADY == enReady)
    {
        u32Reg=DMA_DMASTAT_R;
        u32Reg>>=DMA_DMASTAT_R_STATE_BIT;
        u32Reg&=DMA_DMASTAT_STATE_MASK;
        enModuleState=(DMA_nSTATE)(u32Reg);
    }
    return enModuleState;
}

uint32_t DMA__u32GetModulechannels(void)
{
    uint32_t u32Reg=0U;
    DMA_nCH_MODULE enModuleChannels = DMA_enCH_MODULE_UNDEF;
    DMA_nREADY enReady= DMA_enNOREADY;
    enReady=DMA__enIsReady(DMA_enMODULE_0);

    if(DMA_enREADY == enReady)
    {
        u32Reg=DMA_DMASTAT_R;
        u32Reg>>=DMA_DMASTAT_R_DMACHANS_BIT;
        u32Reg&=DMA_DMASTAT_DMACHANS_MASK;
        enModuleChannels=(DMA_nCH_MODULE)(u32Reg);
    }
    return enModuleChannels;
}

