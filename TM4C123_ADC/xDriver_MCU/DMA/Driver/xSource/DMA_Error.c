/**
 *
 * @file DMA_Error.c
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
#include <xDriver_MCU/DMA/Driver/xHeader/DMA_Error.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>

void DMA__vClearModuleError(void)
{
    DMA__vSetReady(DMA_enMODULE_0);
    DMA_DMAERRCLR_R=DMA_DMAERRCLR_R_ERRCLR_ERROR;
}

DMA_nERROR DMA__enGetModuleError(void)
{
    uint32_t u32Reg=0u;
    DMA_nERROR enModuleError = DMA_enERROR_UNDEF;
    DMA_nREADY enReady= DMA_enNOREADY;
    enReady=DMA__enIsReady(DMA_enMODULE_0);

    if(DMA_enREADY == enReady)
    {
        u32Reg=DMA_DMAERRCLR_R;
        u32Reg>>=DMA_DMAERRCLR_R_ERRCLR_BIT;
        u32Reg&=DMA_DMAERRCLR_ERRCLR_MASK;
        enModuleError=(DMA_nERROR)(u32Reg);
    }
    return enModuleError;
}
