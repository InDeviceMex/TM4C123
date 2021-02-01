/**
 *
 * @file UART_FifoTx.c
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
#include <xDriver_MCU/UART/Driver/Flags/xHeader/UART_FifoTx.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nFIFO_EMPTY UART__enIsFifoTransmitEmpty(UART_nMODULE enModule)
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
            u32Reg >>= UART_UARTFR_R_TXFE_BIT;
            u32Reg &= UART_UARTFR_TXFE_MASK;
            enStatus = (UART_nFIFO_EMPTY) u32Reg;
    }
    return enStatus;
}

UART_nFIFO_FULL UART__enIsFifoTransmitFull(UART_nMODULE enModule)
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
            u32Reg >>= UART_UARTFR_R_TXFF_BIT;
            u32Reg &= UART_UARTFR_TXFF_MASK;
            enStatus = (UART_nFIFO_FULL) u32Reg;
    }
    return enStatus;
}



