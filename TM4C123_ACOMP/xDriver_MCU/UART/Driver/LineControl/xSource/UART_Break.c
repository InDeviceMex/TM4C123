/**
 *
 * @file UART_Break.c
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
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Break.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nBREAK UART__enGetBreak(UART_nMODULE enModule)
{
    UART_nREADY enReady = UART_enNOREADY;
    UART_nBREAK enStatus = UART_enBREAK_UNDEF;
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
            u32Reg>>= UART_UARTLCRH_R_BRK_BIT;
            u32Reg &= UART_UARTLCRH_BRK_MASK;
            enStatus = (UART_nBREAK) u32Reg;
    }
    return enStatus;
}

void UART__vSetBreak(UART_nMODULE enModule, UART_nBREAK enBreakArg)
{
    UART_TypeDef *uart = 0;
    uint32_t u32BreakArg = (uint32_t)enBreakArg;
    uint32_t u32Reg = 0UL;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    UART__vSetReady(enModule);
    u32BreakArg &= UART_UARTLCRH_BRK_MASK;
    u32BreakArg <<= UART_UARTLCRH_R_BRK_BIT;
    uart = UART_BLOCK[enModule];
    u32Reg = uart->UARTLCRH;
    u32Reg &= ~UART_UARTLCRH_R_BRK_MASK;
    u32Reg |= u32BreakArg;
    uart->UARTLCRH  = u32Reg;

}

void UART__vSendBreak(UART_nMODULE enModule)
{
    UART__vSetBreak(enModule,UART_enBREAK_ACTIVE);
}

void UART__vStopBreak(UART_nMODULE enModule)
{
    UART__vSetBreak(enModule,UART_enBREAK_DIS);
}

