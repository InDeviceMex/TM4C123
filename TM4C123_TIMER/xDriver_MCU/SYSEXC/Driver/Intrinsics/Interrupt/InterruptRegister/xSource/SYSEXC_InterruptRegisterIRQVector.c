/**
 *
 * @file SYSEXC_InterruptRegisterIRQVector.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <SYSEXC/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/SYSEXC_InterruptRegisterIRQVector.h>
#include <stdint.h>
#include <xDriver_MCU/Core/SCB/SCB.h>
#include <xDriver_MCU/SYSEXC/Driver/Intrinsics/Interrupt/InterruptRoutine/SYSEXC_InterruptRoutine.h>

void SYSEXC__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void))
{
    SCB_nVECISR enVector=SCB_enVECISR_SYSEXC;
    uint32_t u32IrqVectorHandler=0;
    if(0u != (uint32_t)pfIrqVectorHandler)
    {
        u32IrqVectorHandler=((uint32_t)pfIrqVectorHandler|(uint32_t)1u);
        SYSEXC__pvIRQVectorHandler=(void (*) (void))u32IrqVectorHandler;
        SCB__vRegisterIRQVectorHandler(SYSEXC__pvIRQVectorHandler,enVector);
    }
}




