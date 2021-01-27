/**
 *
 * @file HIB_InterruptRegisterIRQSource.c
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
#include <xDriver_MCU/HIB/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/HIB_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/HIB_InterruptRoutine_Source.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

void HIB__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void), HIB_nINTERRUPT enInterruptParam)
{
    uint32_t u32Interrupt = 0UL;
    uint32_t u32IrqSourceHandler = 0UL;
    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32Interrupt = MCU__u32CheckPatams( (uint32_t) enInterruptParam, (uint32_t)  HIB_enINTERRUPT_MAX);

        u32IrqSourceHandler = (uint32_t) pfIrqSourceHandler;
        u32IrqSourceHandler |= 1UL;
        HIB__vIRQSourceHandler[u32Interrupt] = (void (*) (void)) u32IrqSourceHandler;
    }
}
