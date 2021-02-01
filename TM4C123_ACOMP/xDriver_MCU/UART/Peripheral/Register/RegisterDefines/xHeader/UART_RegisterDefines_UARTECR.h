/**
 *
 * @file UART_RegisterDefines_UARTECR.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTECR_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTECR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 2 UARTECR *********************************************
******************************************************************************************/

/*--------*/
#define UART_UARTECR_R_DATA_MASK    ((uint32_t) 0x000000FFU)
#define UART_UARTECR_R_DATA_BIT    ((uint32_t) 0U)
#define UART_UARTECR_R_DATA_CLEAR    ((uint32_t) 0x000000FFU)

#define UART_UARTECR_DATA_MASK    ((uint32_t) 0x000000FFU)
#define UART_UARTECR_DATA_CLEAR    ((uint32_t) 0x000000FFU)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTECR_H_ */
