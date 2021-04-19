/**
 *
 * @file UART_Printf.h
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
 * @verbatim 11 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_APP_XHEADER_UART_PRINTF_H_
#define XDRIVER_MCU_UART_APP_XHEADER_UART_PRINTF_H_

#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>
#include <xUtils/Standard/Standard.h>
#include <stdarg.h>

uint32_t UART__u32Printf(UART_nMODULE enModule,const char* pcFormat, ... );
uint32_t UART__u32vsPrintf(UART_nMODULE enModule,const char* pcFormat, va_list vaList);
#endif /* XDRIVER_MCU_UART_APP_XHEADER_UART_PRINTF_H_ */
