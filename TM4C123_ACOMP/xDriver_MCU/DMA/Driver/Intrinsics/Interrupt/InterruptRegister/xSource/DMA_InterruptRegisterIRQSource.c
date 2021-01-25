/**
 *
 * @file DMA_InterruptRegisterIRQSource.c
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
 * @verbatim 23 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/DMA_InterruptRegisterIRQSource.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/DMA_InterruptRoutine.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>


void DMA__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),DMA_nCH_MODULE enDMAModule, DMA_nCH_ENCODER enInterruptSourceType)
{
    uint32_t u32IrqSourceHandler=0U;

    if((uint32_t)pfIrqSourceHandler !=0U)
    {
        if(DMA_enCH_MODULE_MAX<enDMAModule)
        {
            enDMAModule=DMA_enCH_MODULE_MAX;
        }

        if(DMA_enCH_ENCODER_MAX<enInterruptSourceType)
        {
            enInterruptSourceType=DMA_enCH_ENCODER_MAX;
        }

        u32IrqSourceHandler=((uint32_t)pfIrqSourceHandler|1U);
        DMA_CH__vIRQSourceHandler[(uint32_t)enInterruptSourceType][enDMAModule]= (void (*) (void))u32IrqSourceHandler;
    }
}


