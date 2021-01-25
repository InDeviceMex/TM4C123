/**
 *
 * @file HIB_InterruptRegisterIRQVector.c
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
#include <HIB/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/HIB_InterruptRegisterIRQVector.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Dependencies.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Interrupt/InterruptRoutine/HIB_InterruptRoutine.h>

void HIB__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void))
{
    SCB_nVECISR enVector=SCB_enVECISR_HIB;
    uint32_t u32IrqVectorHandler=0;
    if(0u != (uint32_t)pfIrqVectorHandler)
    {
        u32IrqVectorHandler=((uint32_t)pfIrqVectorHandler|(uint32_t)1U);
        HIB__pvIRQVectorHandler=(void (*) (void))u32IrqVectorHandler;
        SCB__vRegisterIRQVectorHandler(HIB__pvIRQVectorHandler,enVector);
    }
}




