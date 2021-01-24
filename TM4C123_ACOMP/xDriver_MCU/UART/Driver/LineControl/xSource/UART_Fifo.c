/**
 *
 * @file UART_Fifo.c
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
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Fifo.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nFIFO UART__enGetFifoEnable(UART_nMODULE enModule)
{
    UART_nREADY enReady = UART_enNOREADY;
    UART_nFIFO enStatus = UART_enFIFO_UNDEF;
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
            u32Reg = uart->UARTLCRH;
            u32Reg>>= UART_UARTLCRH_R_FEN_BIT;
            u32Reg &= UART_UARTLCRH_FEN_MASK;
            enStatus = (UART_nFIFO) u32Reg;
    }
    return enStatus;
}

void UART__vSetFifoEnable(UART_nMODULE enModule, UART_nFIFO enFifoEnable)
{
    UART_TypeDef *uart = 0;
    uint32_t u32FifoEnable = (uint32_t)enFifoEnable;
    uint32_t u32Reg = 0UL;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    UART__vSetReady(enModule);
    u32FifoEnable &= UART_UARTLCRH_FEN_MASK;
    u32FifoEnable <<= UART_UARTLCRH_R_FEN_BIT;
    uart = UART_BLOCK[enModule];
    u32Reg = uart->UARTLCRH;
    u32Reg &= ~UART_UARTLCRH_R_FEN_MASK;
    u32Reg |= u32FifoEnable;
    uart->UARTLCRH  = u32Reg;

}



