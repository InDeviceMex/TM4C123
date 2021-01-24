/**
 *
 * @file UART_FifoRx.c
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
#include <xDriver_MCU/UART/Driver/Flags/xHeader/UART_FifoRx.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nFIFO_EMPTY UART__enIsFifoReceiveEmpty(UART_nMODULE enModule)
{
    UART_nREADY enReady = UART_enNOREADY;
    UART_nFIFO_EMPTY enStatus = UART_enFIFO_EMPTY_UNDEF;
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
            u32Reg = uart->UARTFR;
            u32Reg>>= UART_UARTFR_R_RXFE_BIT;
            u32Reg &= UART_UARTFR_RXFE_MASK;
            enStatus = (UART_nFIFO_EMPTY) u32Reg;
    }
    return enStatus;
}

UART_nFIFO_FULL UART__enIsFifoReceiveFull(UART_nMODULE enModule)
{
    UART_nREADY enReady = UART_enNOREADY;
    UART_nFIFO_FULL enStatus = UART_enFIFO_FULL_UNDEF;
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
            u32Reg = uart->UARTFR;
            u32Reg>>= UART_UARTFR_R_RXFF_BIT;
            u32Reg &= UART_UARTFR_RXFF_MASK;
            enStatus = (UART_nFIFO_FULL) u32Reg;
    }
    return enStatus;
}

