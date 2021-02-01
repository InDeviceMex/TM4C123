/**
 *
 * @file WDT_InterruptRegisterIRQVector.c
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
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/WDT_InterruptRegisterIRQVector.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Dependencies.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/WDT_InterruptRoutine.h>
#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

void WDT__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void), WDT_nINT_TYPE enIntTypeParam)
{
    uint32_t u32IrqVectorHandler = 0UL;
    uint32_t u32IntType = (uint32_t) enIntTypeParam;

    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32IntType &= (uint32_t) WDT_enINT_TYPE_MAX;
        if((uint32_t) WDT_enINT_TYPE_STANDARD == u32IntType)
        {
            SCB__vRegisterIRQVectorHandler( pfIrqVectorHandler, &WDT__vIRQVectorHandler[u32IntType], SCB_enVECISR_WDT01);
        }
        else
        {
            u32IrqVectorHandler = (uint32_t) pfIrqVectorHandler;
            u32IrqVectorHandler |= 1UL;
            WDT__vIRQVectorHandler[u32IntType] = (void (*) (void)) u32IrqVectorHandler;
        }
    }
}
