/**
 *
 * @file UART_InterruptRegisterIRQVector.c
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <UART/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/UART_InterruptRegisterIRQVector.h>

#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Dependencies.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/UART_InterruptRoutine.h>

void UART__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),UART_nMODULE enModule)
{
    SCB_nVECISR enVector = SCB_enVECISR_UART0;
    uint32_t u32Module = 0UL;
    const SCB_nVECISR SCB_enVECISR_UART[(uint32_t) UART_enMODULE_MAX]=
    {
        SCB_enVECISR_UART0, SCB_enVECISR_UART1, SCB_enVECISR_UART2, SCB_enVECISR_UART3,
        SCB_enVECISR_UART4, SCB_enVECISR_UART5, SCB_enVECISR_UART6, SCB_enVECISR_UART7
    };


    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) UART_enMODULE_MAX);
        enVector = SCB_enVECISR_UART[u32Module];
        SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler, &UART__pvIRQVectorHandler[u32Module], enVector);
    }
}
