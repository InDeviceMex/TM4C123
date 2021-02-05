/**
 *
 * @file UART_AllError.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/UART/Driver/Errors/xHeader/UART_AllError.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

uint32_t UART__u32GetErrorState(UART_nMODULE enModule)
{
    UART_nREADY enReady = UART_enNOREADY;
    uint32_t u32Reg = 0UL;
    UART_TypeDef *uart = 0;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    enReady = UART__enIsReady(enModule);
    if(UART_enREADY == enReady)
    {
            uart = UART_BLOCK[enModule];
            u32Reg = uart->UARTRSR;
            u32Reg &= (UART_UARTRSR_R_BE_MASK | UART_UARTRSR_R_FE_MASK | UART_UARTRSR_R_OE_MASK | UART_UARTRSR_R_PE_MASK);
    }
    return u32Reg;
}

void UART__vClearErrorState(UART_nMODULE enModule)
{
    UART_TypeDef *uart = 0;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    UART__vSetReady(enModule);

    uart = UART_BLOCK[enModule];
    uart->UARTECR = (UART_UARTRSR_R_BE_MASK | UART_UARTRSR_R_FE_MASK | UART_UARTRSR_R_OE_MASK | UART_UARTRSR_R_PE_MASK);
}

