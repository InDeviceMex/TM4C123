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
#include <DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/DMA_InterruptRoutine.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/DMA_InterruptRegisterIRQVector.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Dependencies.h>

const SCB_nVECISR SCB_enVECISR_DMA[(uint32_t)DMA_enVECTOR_MAX+1u]={SCB_enVECISR_UDMASOFT,SCB_enVECISR_UDMAERROR};

void DMA__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),DMA_nVECTOR enVector)
{
    uint32_t u32IrqVectorHandler=0u;
    SCB_nVECISR enSCBVector=SCB_enVECISR_UDMASOFT;
    if((uint32_t)pfIrqVectorHandler !=0u)
    {
        if(enVector>DMA_enVECTOR_MAX)
        {
            enVector=DMA_enVECTOR_MAX;
        }
        enSCBVector=SCB_enVECISR_DMA[enVector];
        u32IrqVectorHandler=((uint32_t)pfIrqVectorHandler|(uint32_t)1u);
        DMA__pvIRQVectorHandler[(uint32_t)enVector]=(void (*) (void))u32IrqVectorHandler;
        SCB__vRegisterIRQVectorHandler(DMA__pvIRQVectorHandler[(uint32_t)enVector],enSCBVector);
    }
}
