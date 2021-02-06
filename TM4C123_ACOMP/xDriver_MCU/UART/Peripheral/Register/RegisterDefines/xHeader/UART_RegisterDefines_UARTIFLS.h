/**
 *
 * @file UART_RegisterDefines_UARTIFLS.h
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTIFLS_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTIFLS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 9 UARTIFLS *********************************************
******************************************************************************************/

/*--------*/
#define UART_UARTIFLS_R_TXIFLSEL_MASK    ((uint32_t) 0x00000007UL)
#define UART_UARTIFLS_R_TXIFLSEL_BIT    ((uint32_t) 0UL)
#define UART_UARTIFLS_R_TXIFLSEL_7_8    ((uint32_t) 0x00000000UL)
#define UART_UARTIFLS_R_TXIFLSEL_6_8    ((uint32_t) 0x00000001UL)
#define UART_UARTIFLS_R_TXIFLSEL_4_8    ((uint32_t) 0x00000002UL)
#define UART_UARTIFLS_R_TXIFLSEL_2_8    ((uint32_t) 0x00000003UL)
#define UART_UARTIFLS_R_TXIFLSEL_1_8    ((uint32_t) 0x00000004UL)

#define UART_UARTIFLS_TXIFLSEL_MASK    ((uint32_t) 0x00000007UL)
#define UART_UARTIFLS_TXIFLSEL_7_8    ((uint32_t) 0x00000000UL)
#define UART_UARTIFLS_TXIFLSEL_6_8    ((uint32_t) 0x00000001UL)
#define UART_UARTIFLS_TXIFLSEL_4_8    ((uint32_t) 0x00000002UL)
#define UART_UARTIFLS_TXIFLSEL_2_8    ((uint32_t) 0x00000003UL)
#define UART_UARTIFLS_TXIFLSEL_1_8    ((uint32_t) 0x00000004UL)
/*--------*/

/*--------*/
#define UART_UARTIFLS_R_RXIFLSEL_MASK    ((uint32_t) 0x00000038UL)
#define UART_UARTIFLS_R_RXIFLSEL_BIT    ((uint32_t) 3UL)
#define UART_UARTIFLS_R_RXIFLSEL_7_8    ((uint32_t) 0x00000000UL)
#define UART_UARTIFLS_R_RXIFLSEL_6_8    ((uint32_t) 0x00000008UL)
#define UART_UARTIFLS_R_RXIFLSEL_4_8    ((uint32_t) 0x00000010UL)
#define UART_UARTIFLS_R_RXIFLSEL_2_8    ((uint32_t) 0x00000018UL)
#define UART_UARTIFLS_R_RXIFLSEL_1_8    ((uint32_t) 0x00000020UL)

#define UART_UARTIFLS_RXIFLSEL_MASK    ((uint32_t) 0x00000007UL)
#define UART_UARTIFLS_RXIFLSEL_7_8    ((uint32_t) 0x00000000UL)
#define UART_UARTIFLS_RXIFLSEL_6_8    ((uint32_t) 0x00000001UL)
#define UART_UARTIFLS_RXIFLSEL_4_8    ((uint32_t) 0x00000002UL)
#define UART_UARTIFLS_RXIFLSEL_2_8    ((uint32_t) 0x00000003UL)
#define UART_UARTIFLS_RXIFLSEL_1_8    ((uint32_t) 0x00000004UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTIFLS_H_ */
