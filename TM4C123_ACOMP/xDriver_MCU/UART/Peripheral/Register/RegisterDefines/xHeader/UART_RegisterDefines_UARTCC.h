/**
 *
 * @file UART_RegisterDefines_UARTCC.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTCC_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTCC_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 18 UARTCC *********************************************
******************************************************************************************/
/*--------*/
#define UART_UARTCC_R_CS_MASK      ((uint32_t)0x0000000Fu)
#define UART_UARTCC_R_CS_BIT       ((uint32_t)0u)
#define UART_UARTCC_R_CS_SYSCLK       ((uint32_t)0x00000000u)
#define UART_UARTCC_R_CS_PIOSC     ((uint32_t)0x00000005u)

#define UART_UARTCC_CS_MASK        ((uint32_t)0x0000000Fu)
#define UART_UARTCC_CS_SYSCLK         ((uint32_t)0x00000000u)
#define UART_UARTCC_CS_PIOSC       ((uint32_t)0x00000005u)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTCC_H_ */
