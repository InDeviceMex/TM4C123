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
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/DMA_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/DMA_InterruptRoutine.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

void DMA__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void), DMA_nCH_MODULE enDMAModule, DMA_nCH_ENCODER enInterruptSourceType)
{
    uint32_t u32Interrupt = 0UL;
    uint32_t u32InterruptMax = 0UL;
    uint32_t u32DMAModule = 0UL;
    uint32_t u32Encoder = 0UL;
    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32DMAModule = MCU__u32CheckParams(enDMAModule, DMA_enCH_MODULE_MAX);
        u32Encoder = MCU__u32CheckParams(enInterruptSourceType, DMA_enCH_ENCODER_MAX);

        u32InterruptMax = (uint32_t) DMA_enCH_ENCODER_MAX;
        u32InterruptMax *= (uint32_t) DMA_enCH_MODULE_MAX;

        u32Interrupt = (uint32_t) DMA_enCH_MODULE_MAX;
        u32Interrupt *= u32Encoder;
        u32Interrupt += u32DMAModule;

        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler, &DMA_CH__vIRQSourceHandler[0UL][0UL], u32Interrupt, u32InterruptMax);
    }
}
