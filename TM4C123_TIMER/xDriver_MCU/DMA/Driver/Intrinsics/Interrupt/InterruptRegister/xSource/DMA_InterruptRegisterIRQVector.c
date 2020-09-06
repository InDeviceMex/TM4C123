/**
 *
 * @file DMA_InterruptRegisterIRQVector.c
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
 * @verbatim 1 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/DMA_InterruptRegisterIRQVector.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Modules.h>
#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>
#include <xDriver_MCU/Core/SCB/SCB.h>

void DMA__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),DMA_nMODULE enModule)
{
    uint32_t u32IrqVectorHandler=0u;
    SCB_nVECISR enVector=SCB_enVECISR_UDMASOFT;
    if((uint32_t)pfIrqVectorHandler !=0u)
    {
        if(enModule>DMA_enMODULE_MAX)
        {
            enModule=DMA_enMODULE_MAX;
        }
        u32IrqVectorHandler=((uint32_t)pfIrqVectorHandler|(uint32_t)1u);
        DMA__MODULE[(uint32_t)enModule]=(void (*) (void))u32IrqVectorHandler;
        SCB__vRegisterIRQVectorHandler(DMA__MODULE[(uint32_t)enModule],enVector);
    }
}



