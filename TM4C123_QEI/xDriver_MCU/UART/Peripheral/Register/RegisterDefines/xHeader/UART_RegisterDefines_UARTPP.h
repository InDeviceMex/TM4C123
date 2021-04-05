/**
 *
 * @file UART_RegisterDefines_UARTPP.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTPP_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTPP_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 17 UARTPP *********************************************
******************************************************************************************/

/*--------*/
#define UART_UARTPP_R_SC_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTPP_R_SC_BIT    ((uint32_t) 0UL)
#define UART_UARTPP_R_SC_NONOSUPPORT ((uint32_t) 0x00000000UL)
#define UART_UARTPP_R_SC_ENA    ((uint32_t) 0x00000001UL)

#define UART_UARTPP_SC_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTPP_SC_NONOSUPPORT    ((uint32_t) 0x00000000UL)
#define UART_UARTPP_SC_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTPP_R_NB_MASK    ((uint32_t) 0x00000002UL)
#define UART_UARTPP_R_NB_BIT    ((uint32_t) 1UL)
#define UART_UARTPP_R_NB_NONOSUPPORT    ((uint32_t) 0x00000000UL)
#define UART_UARTPP_R_NB_ENA    ((uint32_t) 0x00000002UL)

#define UART_UARTPP_NB_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTPP_NB_NONOSUPPORT    ((uint32_t) 0x00000000UL)
#define UART_UARTPP_NB_ENA    ((uint32_t) 0x00000001UL)
/*--------*/


#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTPP_H_ */
