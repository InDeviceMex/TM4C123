/**
 *
 * @file UART_InterruptRegisterIRQSource.c
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
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/UART_InterruptRegisterIRQSource.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Source.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),UART_nMODULE enModule, UART_nINTERRUPT enInterruptSource)
{
    uint32_t u32IrqSourceHandler=0U;
    uint32_t u32Module = (uint32_t) enModule;
    uint32_t u32InterruptSource = (uint32_t) enInterruptSource;
    if((uint32_t) pfIrqSourceHandler != 0U)
    {
        if(u32Module>(uint32_t) UART_enMODULE_MAX)
        {
            u32Module = (uint32_t) UART_enMODULE_MAX;
        }
        if(u32InterruptSource>(uint32_t) UART_enINTERRUPT_MAX)
        {
            u32InterruptSource = (uint32_t) UART_enINTERRUPT_MAX;
        }
        u32IrqSourceHandler=((uint32_t) pfIrqSourceHandler | (uint32_t) 1U);
        UART__vIRQSourceHandler[u32Module][u32InterruptSource] =(void (*) (void))u32IrqSourceHandler;
    }
}



