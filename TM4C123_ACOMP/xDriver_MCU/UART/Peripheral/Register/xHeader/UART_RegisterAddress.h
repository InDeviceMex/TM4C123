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

#define UART_BASE    ((uint32_t) 0x4000C000U)
#define UART0_BASE    ((uint32_t) 0x4000C000U)
#define UART1_BASE    ((uint32_t) 0x4000D000U)
#define UART2_BASE    ((uint32_t) 0x4000E000U)
#define UART3_BASE    ((uint32_t) 0x4000F000U)
#define UART4_BASE    ((uint32_t) 0x40010000U)
#define UART5_BASE    ((uint32_t) 0x40011000U)
#define UART6_BASE    ((uint32_t) 0x40012000U)
#define UART7_BASE    ((uint32_t) 0x40013000U)

#define UART_OFFSET    ((uint32_t) 0x0000C000U)
#define UART0_OFFSET    ((uint32_t) 0x0000C000U)
#define UART1_OFFSET    ((uint32_t) 0x0000D000U)
#define UART2_OFFSET    ((uint32_t) 0x0000E000U)
#define UART3_OFFSET    ((uint32_t) 0x0000F000U)
#define UART4_OFFSET    ((uint32_t) 0x00010000U)
#define UART5_OFFSET    ((uint32_t) 0x00011000U)
#define UART6_OFFSET    ((uint32_t) 0x00012000U)
#define UART7_OFFSET    ((uint32_t) 0x00013000U)

#define UART_BITBANDING_BASE    ((uint32_t) 0x42000000U)

#define UART_UARTDR_OFFSET    ((uint32_t) 0x0000U)
#define UART_UARTRSR_OFFSET    ((uint32_t) 0x0004U)
#define UART_UARTECR_OFFSET    ((uint32_t) 0x0004U)
#define UART_UARTFR_OFFSET    ((uint32_t) 0x0018U)
#define UART_UARTILPR_OFFSET    ((uint32_t) 0x0020U)
#define UART_UARTIBRD_OFFSET    ((uint32_t) 0x0024U)
#define UART_UARTFBRD_OFFSET    ((uint32_t) 0x0028U)
#define UART_UARTLCRH_OFFSET    ((uint32_t) 0x002CU)
#define UART_UARTCTL_OFFSET    ((uint32_t) 0x0030U)
#define UART_UARTIFLS_OFFSET    ((uint32_t) 0x0034U)
#define UART_UARTIM_OFFSET    ((uint32_t) 0x0038U)
#define UART_UARTRIS_OFFSET    ((uint32_t) 0x003CU)
#define UART_UARTMIS_OFFSET    ((uint32_t) 0x0040U)
#define UART_UARTICR_OFFSET    ((uint32_t) 0x0044U)
#define UART_UARTDMACTL_OFFSET    ((uint32_t) 0x0048U)
#define UART_UART9BITADDR_OFFSET    ((uint32_t) 0x00A4U)
#define UART_UART9BITAMASK_OFFSET    ((uint32_t) 0x00A8U)
#define UART_UARTPP_OFFSET    ((uint32_t) 0x0FC0U)
#define UART_UARTCC_OFFSET    ((uint32_t) 0x0FC8U)
#define UART_UARTPeriphID4_OFFSET    ((uint32_t) 0xFD0U)
#define UART_UARTPeriphID5_OFFSET    ((uint32_t) 0xFD4U)
#define UART_UARTPeriphID6_OFFSET    ((uint32_t) 0xFD8U)
#define UART_UARTPeriphID7_OFFSET    ((uint32_t) 0xFDCU)
#define UART_UARTPeriphID0_OFFSET    ((uint32_t) 0xFE0U)
#define UART_UARTPeriphID1_OFFSET    ((uint32_t) 0xFE4U)
#define UART_UARTPeriphID2_OFFSET    ((uint32_t) 0xFE8U)
#define UART_UARTPeriphID3_OFFSET    ((uint32_t) 0xFECU)
#define UART_UARTCellID0_OFFSET    ((uint32_t) 0xFF0U)
#define UART_UARTCellID1_OFFSET    ((uint32_t) 0xFF4U)
#define UART_UARTCellID2_OFFSET    ((uint32_t) 0xFF8U)
#define UART_UARTCellID3_OFFSET    ((uint32_t) 0xFFCU)

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_XHEADER_UART_REGISTERADDRESS_H_ */
