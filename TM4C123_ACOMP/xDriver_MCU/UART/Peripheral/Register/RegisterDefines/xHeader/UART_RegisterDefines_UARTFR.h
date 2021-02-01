/**
 *
 * @file UART_RegisterDefines_UARTFR.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTFR_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTFR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 3 UARTFR *********************************************
******************************************************************************************/

/*--------*/
#define UART_UARTFR_R_CTS_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTFR_R_CTS_BIT    ((uint32_t) 0U)
#define UART_UARTFR_R_CTS_NOASSERTED    ((uint32_t) 0x00000000U)
#define UART_UARTFR_R_CTS_ASSERTED    ((uint32_t) 0x00000001U)

#define UART_UARTFR_CTS_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTFR_CTS_NOASSERTED    ((uint32_t) 0x00000000U)
#define UART_UARTFR_CTS_ASSERTED    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTFR_R_BUSY_MASK    ((uint32_t) 0x00000008U)
#define UART_UARTFR_R_BUSY_BIT    ((uint32_t) 3U)
#define UART_UARTFR_R_BUSY_IDLE    ((uint32_t) 0x00000000U)
#define UART_UARTFR_R_BUSY_BUSY    ((uint32_t) 0x00000008U)

#define UART_UARTFR_BUSY_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTFR_BUSY_IDLE    ((uint32_t) 0x00000000U)
#define UART_UARTFR_BUSY_BUSY    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTFR_R_RXFE_MASK    ((uint32_t) 0x00000010U)
#define UART_UARTFR_R_RXFE_BIT    ((uint32_t) 4U)
#define UART_UARTFR_R_RXFE_NOEMPTY    ((uint32_t) 0x00000000U)
#define UART_UARTFR_R_RXFE_EMPTY    ((uint32_t) 0x00000010U)

#define UART_UARTFR_RXFE_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTFR_RXFE_NOEMPTY    ((uint32_t) 0x00000000U)
#define UART_UARTFR_RXFE_EMPTY    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTFR_R_TXFF_MASK    ((uint32_t) 0x00000020U)
#define UART_UARTFR_R_TXFF_BIT    ((uint32_t) 5U)
#define UART_UARTFR_R_TXFF_NOFULL    ((uint32_t) 0x00000000U)
#define UART_UARTFR_R_TXFF_FULL    ((uint32_t) 0x00000020U)

#define UART_UARTFR_TXFF_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTFR_TXFF_NOFULL    ((uint32_t) 0x00000000U)
#define UART_UARTFR_TXFF_FULL    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTFR_R_RXFF_MASK    ((uint32_t) 0x00000040U)
#define UART_UARTFR_R_RXFF_BIT    ((uint32_t) 6U)
#define UART_UARTFR_R_RXFF_NOFULL    ((uint32_t) 0x00000000U)
#define UART_UARTFR_R_RXFF_FULL    ((uint32_t) 0x00000040U)

#define UART_UARTFR_RXFF_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTFR_RXFF_NOFULL    ((uint32_t) 0x00000000U)
#define UART_UARTFR_RXFF_FULL    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTFR_R_TXFE_MASK    ((uint32_t) 0x00000080U)
#define UART_UARTFR_R_TXFE_BIT    ((uint32_t) 7U)
#define UART_UARTFR_R_TXFE_NOEMPTY    ((uint32_t) 0x00000000U)
#define UART_UARTFR_R_TXFE_EMPTY    ((uint32_t) 0x00000080U)

#define UART_UARTFR_TXFE_MASK    ((uint32_t) 0x00000001U)
#define UART_UARTFR_TXFE_NOEMPTY    ((uint32_t) 0x00000000U)
#define UART_UARTFR_TXFE_EMPTY    ((uint32_t) 0x00000001U)
/*--------*/


#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTFR_H_ */
