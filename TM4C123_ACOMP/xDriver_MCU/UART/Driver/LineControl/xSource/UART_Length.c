/**
 *
 * @file UART_Length.c
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
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Length.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

UART_nLENGTH UART__enGetDataLength(UART_nMODULE enModule)
{
    UART_nREADY enReady = UART_enNOREADY;
    UART_nLENGTH enStatus = UART_enLENGTH_UNDEF;
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
            u32Reg >>= UART_UARTLCRH_R_WLEN_BIT;
            u32Reg &= UART_UARTLCRH_WLEN_MASK;
            enStatus = (UART_nLENGTH) u32Reg;
    }
    return enStatus;
}

void UART__vSetDataLength(UART_nMODULE enModule, UART_nLENGTH enDataLength)
{
    UART_TypeDef *uart = 0;
    uint32_t u32DataLength = (uint32_t) enDataLength;
    uint32_t u32Reg = 0UL;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    UART__vSetReady(enModule);
    u32DataLength &= UART_UARTLCRH_WLEN_MASK;
    u32DataLength <<= UART_UARTLCRH_R_WLEN_BIT;
    uart = UART_BLOCK[enModule];
    u32Reg = uart->UARTLCRH;
    u32Reg &= ~UART_UARTLCRH_R_WLEN_MASK;
    u32Reg |= u32DataLength;
    uart->UARTLCRH = u32Reg;

}


