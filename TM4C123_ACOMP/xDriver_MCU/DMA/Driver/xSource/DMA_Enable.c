/**
 *
 * @file DMA_Enable.c
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
#include <xDriver_MCU/DMA/Driver/xHeader/DMA_Enable.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>

void DMA__vSetModuleEnable(DMA_nENABLE enModuleEnable)
{
    uint32_t u32Reg=0U;
    uint32_t u32ModuleEnable=0U;
    DMA__vSetReady(DMA_enMODULE_0);
    u32ModuleEnable=(uint32_t)enModuleEnable & DMA_DMACFG_MASTEN_MASK;
    u32ModuleEnable<<=DMA_DMACFG_R_MASTEN_BIT;
    u32Reg=DMA_DMACFG_R;
    u32Reg&= ~DMA_DMACFG_R_MASTEN_MASK;
    u32Reg|=u32ModuleEnable;
    DMA_DMACFG_R=u32Reg;
}

DMA_nENABLE DMA__enGetModuleEnable(void)
{
    uint32_t u32Reg=0U;
    DMA_nENABLE enModuleEnable = DMA_enENABLE_UNDEF;
    DMA_nREADY enReady= DMA_enNOREADY;
    enReady=DMA__enIsReady(DMA_enMODULE_0);

    if(DMA_enREADY == enReady)
    {
        u32Reg=DMA_DMASTAT_R;
        u32Reg>>=DMA_DMASTAT_R_MASTEN_BIT;
        u32Reg&=DMA_DMASTAT_MASTEN_MASK;
        enModuleEnable=(DMA_nENABLE)(u32Reg);
    }
    return enModuleEnable;
}


