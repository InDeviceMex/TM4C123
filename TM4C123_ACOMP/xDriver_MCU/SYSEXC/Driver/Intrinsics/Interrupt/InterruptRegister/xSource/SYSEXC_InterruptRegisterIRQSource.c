/**
 *
 * @file SYSEXC_InterruptRegisterIRQSource.c
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
#include <xDriver_MCU/SYSEXC/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/SYSEXC_InterruptRegisterIRQSource.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/SYSEXC/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SYSEXC_InterruptRoutine_Source.h>
#include <xDriver_MCU/SYSEXC/Peripheral/SYSEXC_Peripheral.h>

void SYSEXC__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),SYSEXC_nINTERRUPT enInterruptParam)
{
    uint32_t u32Interrupt = 0UL;
    uint32_t u32IrqSourceHandler = 0UL;

    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        u32Interrupt = MCU__u32CheckPatams( (uint32_t) enInterruptParam, (uint32_t) SYSEXC_enINTERRUPT_MAX);

        u32IrqSourceHandler = (uint32_t)pfIrqSourceHandler;
        u32IrqSourceHandler |= 1UL;
        SYSEXC__vIRQSourceHandler[u32Interrupt] = (void (*) (void)) u32IrqSourceHandler;
    }
}
