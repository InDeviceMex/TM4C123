/**
 *
 * @file UART_RegisterDefines_UARTDMACTL.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTDMACTL_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTDMACTL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 14 UARTDMACTL *********************************************
******************************************************************************************/

/*--------*/
#define UART_UARTDMACTL_R_RXDMAE_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTDMACTL_R_RXDMAE_BIT    ((uint32_t) 0UL)
#define UART_UARTDMACTL_R_RXDMAE_DIS    ((uint32_t) 0x00000000UL)
#define UART_UARTDMACTL_R_RXDMAE_ENA    ((uint32_t) 0x00000001UL)

#define UART_UARTDMACTL_RXDMAE_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTDMACTL_RXDMAE_DIS    ((uint32_t) 0x00000000UL)
#define UART_UARTDMACTL_RXDMAE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTDMACTL_R_TXDMAE_MASK    ((uint32_t) 0x00000002UL)
#define UART_UARTDMACTL_R_TXDMAE_BIT    ((uint32_t) 1UL)
#define UART_UARTDMACTL_R_TXDMAE_DIS    ((uint32_t) 0x00000000UL)
#define UART_UARTDMACTL_R_TXDMAE_ENA    ((uint32_t) 0x00000002UL)

#define UART_UARTDMACTL_TXDMAE_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTDMACTL_TXDMAE_DIS    ((uint32_t) 0x00000000UL)
#define UART_UARTDMACTL_TXDMAE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTDMACTL_R_DMAERR_MASK    ((uint32_t) 0x00000002UL)
#define UART_UARTDMACTL_R_DMAERR_BIT    ((uint32_t) 1UL)
#define UART_UARTDMACTL_R_DMAERR_NOERROR    ((uint32_t) 0x00000000UL)
#define UART_UARTDMACTL_R_DMAERR_ERROR    ((uint32_t) 0x00000002UL)

#define UART_UARTDMACTL_DMAERR_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTDMACTL_DMAERR_NOERROR    ((uint32_t) 0x00000000UL)
#define UART_UARTDMACTL_DMAERR_ERROR    ((uint32_t) 0x00000001UL)
/*--------*/


#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTDMACTL_H_ */
