/**
 *
 * @file UART_RegisterAddress.h
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
 * @verbatim 22 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_XHEADER_UART_REGISTERADDRESS_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_XHEADER_UART_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define UART_BASE    ((uint32_t) 0x4000C000UL)
#define UART0_BASE    ((uint32_t) 0x4000C000UL)
#define UART1_BASE    ((uint32_t) 0x4000D000UL)
#define UART2_BASE    ((uint32_t) 0x4000E000UL)
#define UART3_BASE    ((uint32_t) 0x4000F000UL)
#define UART4_BASE    ((uint32_t) 0x40010000UL)
#define UART5_BASE    ((uint32_t) 0x40011000UL)
#define UART6_BASE    ((uint32_t) 0x40012000UL)
#define UART7_BASE    ((uint32_t) 0x40013000UL)

#define UART_OFFSET    ((uint32_t) 0x0000C000UL)
#define UART0_OFFSET    ((uint32_t) 0x0000C000UL)
#define UART1_OFFSET    ((uint32_t) 0x0000D000UL)
#define UART2_OFFSET    ((uint32_t) 0x0000E000UL)
#define UART3_OFFSET    ((uint32_t) 0x0000F000UL)
#define UART4_OFFSET    ((uint32_t) 0x00010000UL)
#define UART5_OFFSET    ((uint32_t) 0x00011000UL)
#define UART6_OFFSET    ((uint32_t) 0x00012000UL)
#define UART7_OFFSET    ((uint32_t) 0x00013000UL)

#define UART_BITBANDING_BASE    ((uint32_t) 0x42000000UL)

#define UART_UARTDR_OFFSET    ((uint32_t) 0x0000UL)
#define UART_UARTRSR_OFFSET    ((uint32_t) 0x0004UL)
#define UART_UARTECR_OFFSET    ((uint32_t) 0x0004UL)
#define UART_UARTFR_OFFSET    ((uint32_t) 0x0018UL)
#define UART_UARTILPR_OFFSET    ((uint32_t) 0x0020UL)
#define UART_UARTIBRD_OFFSET    ((uint32_t) 0x0024UL)
#define UART_UARTFBRD_OFFSET    ((uint32_t) 0x0028UL)
#define UART_UARTLCRH_OFFSET    ((uint32_t) 0x002CUL)
#define UART_UARTCTL_OFFSET    ((uint32_t) 0x0030UL)
#define UART_UARTIFLS_OFFSET    ((uint32_t) 0x0034UL)
#define UART_UARTIM_OFFSET    ((uint32_t) 0x0038UL)
#define UART_UARTRIS_OFFSET    ((uint32_t) 0x003CUL)
#define UART_UARTMIS_OFFSET    ((uint32_t) 0x0040UL)
#define UART_UARTICR_OFFSET    ((uint32_t) 0x0044UL)
#define UART_UARTDMACTL_OFFSET    ((uint32_t) 0x0048UL)
#define UART_UART9BITADDR_OFFSET    ((uint32_t) 0x00A4UL)
#define UART_UART9BITAMASK_OFFSET    ((uint32_t) 0x00A8UL)
#define UART_UARTPP_OFFSET    ((uint32_t) 0x0FC0UL)
#define UART_UARTCC_OFFSET    ((uint32_t) 0x0FC8UL)
#define UART_UARTPeriphID4_OFFSET    ((uint32_t) 0xFD0UL)
#define UART_UARTPeriphID5_OFFSET    ((uint32_t) 0xFD4UL)
#define UART_UARTPeriphID6_OFFSET    ((uint32_t) 0xFD8UL)
#define UART_UARTPeriphID7_OFFSET    ((uint32_t) 0xFDCUL)
#define UART_UARTPeriphID0_OFFSET    ((uint32_t) 0xFE0UL)
#define UART_UARTPeriphID1_OFFSET    ((uint32_t) 0xFE4UL)
#define UART_UARTPeriphID2_OFFSET    ((uint32_t) 0xFE8UL)
#define UART_UARTPeriphID3_OFFSET    ((uint32_t) 0xFECUL)
#define UART_UARTCellID0_OFFSET    ((uint32_t) 0xFF0UL)
#define UART_UARTCellID1_OFFSET    ((uint32_t) 0xFF4UL)
#define UART_UARTCellID2_OFFSET    ((uint32_t) 0xFF8UL)
#define UART_UARTCellID3_OFFSET    ((uint32_t) 0xFFCUL)

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_XHEADER_UART_REGISTERADDRESS_H_ */
