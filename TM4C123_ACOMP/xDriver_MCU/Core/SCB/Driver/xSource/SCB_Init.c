/**
 *
 * @file SCB_Init.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_Init.h>

#include <xDriver_MCU/Core/SCB/Driver/Exception/SCB_Exception.h>
#include <xDriver_MCU/Core/SCB/Driver/InterruptRoutine/SCB_InterruptRoutine.h>

#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_VectorOffset.h>
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_Traps.h>
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_PriorityGroup.h>
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_StackAligment.h>
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_RegisterIRQVector.h>

inline void SCB__vInit(void)
{
    SCB__vSetVectorOffset( (uint32_t) &SCB__pfnVectors);
    SCB__vRegisterIRQVectorHandler( &NMI__vIRQVectorHandler, (void (**) (void)) 0UL, SCB_enVECISR_NMI);
    SCB__vRegisterIRQVectorHandler( &PendSV__vIRQVectorHandler, (void (**) (void)) 0UL, SCB_enVECISR_PENDSV);
    SCB__vRegisterIRQVectorHandler( &UsageFault__vIRQVectorHandler, (void (**) (void)) 0UL, SCB_enVECISR_USAGEFAULT);
    SCB__vRegisterIRQVectorHandler( &BusFault__vIRQVectorHandler, (void (**) (void)) 0UL, SCB_enVECISR_BUSFAULT);
    SCB__vRegisterIRQVectorHandler( &MemoryFault__vIRQVectorHandler, (void (**) (void)) 0UL, SCB_enVECISR_MEMMANAGE);
    SCB__vRegisterIRQVectorHandler( &HardFault__vIRQVectorHandler, (void (**) (void)) 0UL, SCB_enVECISR_HARDFAULT);
    SCB__vRegisterIRQVectorHandler( &SVCall__vIRQVectorHandler, (void (**) (void)) 0UL,SCB_enVECISR_SVCALL);
    SCB__vEnableTraps();
    SCB__vEnableExceptions();
    SCB__vSetPriorityGroup(SCB_enPRIGROUP_XXX);
    SCB__vSetStackAligment(SCB_enALIGN_4BYTE);
}
