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

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/WDT_InterruptRegisterIRQSource.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/WDT_InterruptRoutine_Source.h>
#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

void WDT__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void), WDT_nINT_TYPE enIntTypeParam, WDT_nMODULE enModule)
{
    uint32_t u32IntType = (uint32_t) enIntTypeParam;
    uint32_t u32IrqSourceHandler = 0U;
    if(0U != (uint32_t) pfIrqSourceHandler )
    {
        u32IntType &= (uint32_t) WDT_enINT_TYPE_MAX;
        enModule = (WDT_nMODULE)MCU__u32CheckPatams((uint32_t) enModule, (uint32_t) WDT_enMODULE_MAX);
        u32IrqSourceHandler = ( (uint32_t) pfIrqSourceHandler | (uint32_t) 1U );
        WDT__vIRQSourceHandler[u32IntType][(uint32_t) enModule] = (void (*) (void)) u32IrqSourceHandler;
    }
}


