/**
 *
 * @file WDT_InterruptRegisterIRQSource.c
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
 * @verbatim 22 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/WDT_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/WDT_InterruptRoutine_Source.h>
#include <xDriver_MCU/Common/MCU_Common.h>

void WDT__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void), WDT_nINT_TYPE enIntTypeParam, WDT_nMODULE enModule)
{
    uint32_t u32IntType = 0UL;
    uint32_t u32Module = 0UL;
    if(0U != (uint32_t) pfIrqSourceHandler )
    {
        u32IntType = MCU__u32CheckParams((uint32_t) enIntTypeParam, (uint32_t) WDT_enINT_TYPE_MAX);
        u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) WDT_enMODULE_MAX);
        MCU__vRegisterIRQSourceHandler(pfIrqSourceHandler, &WDT__vIRQSourceHandler[u32IntType][u32Module], 0UL, 1UL);
    }
}
