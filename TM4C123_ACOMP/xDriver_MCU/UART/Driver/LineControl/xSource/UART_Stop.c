/**
 *
 * @file UART_Stop.c
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
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Stop.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nSTOP UART__enGetStopBits(UART_nMODULE enModule)
{
    UART_nREADY enReady = UART_enNOREADY;
    UART_nSTOP enStatus = UART_enSTOP_UNDEF;
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
            u32Reg>>= UART_UARTLCRH_R_STP2_BIT;
            u32Reg &= UART_UARTLCRH_STP2_MASK;
            enStatus = (UART_nSTOP) u32Reg;
    }
    return enStatus;
}

void UART__vSetStopBits(UART_nMODULE enModule, UART_nSTOP enStopBitsArg)
{
    UART_TypeDef *uart = 0;
    uint32_t u32StopBitsArg = (uint32_t)enStopBitsArg;
    uint32_t u32Reg = 0UL;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    UART__vSetReady(enModule);
    u32StopBitsArg &= UART_UARTLCRH_STP2_MASK;
    u32StopBitsArg <<= UART_UARTLCRH_R_STP2_BIT;
    uart = UART_BLOCK[enModule];
    u32Reg = uart->UARTLCRH;
    u32Reg &= ~UART_UARTLCRH_R_STP2_MASK;
    u32Reg |= u32StopBitsArg;
    uart->UARTLCRH  = u32Reg;

}



