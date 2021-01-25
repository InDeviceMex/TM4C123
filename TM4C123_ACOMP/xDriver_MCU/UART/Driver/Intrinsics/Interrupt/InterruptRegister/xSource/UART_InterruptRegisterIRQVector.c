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
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Dependencies.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/UART_InterruptRoutine.h>

const SCB_nVECISR SCB_enVECISR_UART[(uint32_t)UART_enMODULE_MAX+ 1U]=
{
    SCB_enVECISR_UART0,SCB_enVECISR_UART1,SCB_enVECISR_UART2,SCB_enVECISR_UART3,
    SCB_enVECISR_UART4,SCB_enVECISR_UART5,SCB_enVECISR_UART6,SCB_enVECISR_UART7
};
void UART__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),UART_nMODULE enModule)
{
    SCB_nVECISR enVector=SCB_enVECISR_UART0;
    uint32_t u32IrqVectorHandler=0U;
    uint32_t u32Module=(uint32_t)enModule;
    if(0u != (uint32_t)pfIrqVectorHandler)
    {
        if(u32Module>(uint32_t)UART_enMODULE_MAX)
        {
            u32Module=(uint32_t)UART_enMODULE_MAX;
        }
        enVector=SCB_enVECISR_UART[u32Module];
        u32IrqVectorHandler=((uint32_t)pfIrqVectorHandler|(uint32_t)1U);
        UART__pvIRQVectorHandler[u32Module]=(void (*) (void))u32IrqVectorHandler;
        SCB__vRegisterIRQVectorHandler(UART__pvIRQVectorHandler[u32Module],enVector);
    }
}



