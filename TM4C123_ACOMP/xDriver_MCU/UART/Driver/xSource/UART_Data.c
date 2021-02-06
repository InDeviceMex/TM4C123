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
#include <xDriver_MCU/UART/Driver/xHeader/UART_Data.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

inline void UART__vSetData(UART_nMODULE enModule, uint32_t u32Data)
{
    UART__vWriteRegister(enModule, UART_UARTDR_OFFSET, u32Data, 0xFFFFFFFFUL, 0UL);
}

inline uint32_t UART__u32GetData(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_UARTDR_OFFSET, &u32Reg, UART_UARTDR_DATA_MASK, 0UL);
    return u32Reg;
}

inline uint32_t UART__u32GetDataWithStatus(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_UARTDR_OFFSET, &u32Reg, 0xFFFFFFFFUL, 0UL);
    return u32Reg;
}
