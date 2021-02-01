/**
 *
 * @file UART_Data.c
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
#include <xDriver_MCU/UART/Driver/xHeader/UART_Data.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

inline void UART__vSetData(UART_nMODULE enModule, uint32_t u32Data)
{
    UART_TypeDef *uart = (UART_TypeDef*)0UL;
    uint32_t u32DataReg = u32Data & UART_UARTDR_DATA_MASK;
    u32DataReg <<= UART_UARTDR_R_DATA_BIT;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    UART__vSetReady(enModule);
    uart = UART_BLOCK[(uint32_t) enModule];
    uart->UARTDR = u32DataReg;
}

inline uint32_t UART__u32GetData(UART_nMODULE enModule)
{
    UART_nREADY enReady = UART_enNOREADY;
    uint32_t u32Reg = 0xFFFFFFFF;
    UART_TypeDef *uart = 0;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    enReady = UART__enIsReady(enModule);
    if(UART_enREADY == enReady)
    {
            uart = UART_BLOCK[enModule];
            u32Reg = uart->UARTDR;
            u32Reg >>= UART_UARTDR_R_DATA_BIT;
            u32Reg &= UART_UARTDR_DATA_MASK;
    }
    return u32Reg;
}

inline uint32_t UART__u32GetDataWithStatus(UART_nMODULE enModule)
{
    UART_nREADY enReady = UART_enNOREADY;
    uint32_t u32Reg = 0xFFFFFFFF;
    UART_TypeDef *uart = 0;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    enReady = UART__enIsReady(enModule);
    if(UART_enREADY == enReady)
    {
            uart = UART_BLOCK[enModule];
            u32Reg = uart->UARTDR;
    }
    return u32Reg;
}

