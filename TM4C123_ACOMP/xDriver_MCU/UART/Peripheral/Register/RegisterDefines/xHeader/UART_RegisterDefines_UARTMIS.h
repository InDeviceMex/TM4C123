/**
 *
 * @file UART_RegisterDefines_UARTMIS.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTMIS_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTMIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 12 UARTMIS *********************************************
******************************************************************************************/

/*--------*/
#define UART_UARTMIS_R_CTSMIS_MASK    ((uint32_t) 0x00000002UL)
#define UART_UARTMIS_R_CTSMIS_BIT    ((uint32_t) 1UL)
#define UART_UARTMIS_R_CTSMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_R_CTSMIS_OCCUR    ((uint32_t) 0x00000002UL)

#define UART_UARTMIS_CTSMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTMIS_CTSMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_CTSMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTMIS_R_RXMIS_MASK    ((uint32_t) 0x00000010UL)
#define UART_UARTMIS_R_RXMIS_BIT    ((uint32_t) 4UL)
#define UART_UARTMIS_R_RXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_R_RXMIS_OCCUR    ((uint32_t) 0x00000010UL)

#define UART_UARTMIS_RXMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTMIS_RXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_RXMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTMIS_R_TXMIS_MASK    ((uint32_t) 0x00000020UL)
#define UART_UARTMIS_R_TXMIS_BIT    ((uint32_t) 5UL)
#define UART_UARTMIS_R_TXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_R_TXMIS_OCCUR    ((uint32_t) 0x00000020UL)

#define UART_UARTMIS_TXMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTMIS_TXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_TXMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTMIS_R_RTMIS_MASK    ((uint32_t) 0x00000040UL)
#define UART_UARTMIS_R_RTMIS_BIT    ((uint32_t) 6UL)
#define UART_UARTMIS_R_RTMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_R_RTMIS_OCCUR    ((uint32_t) 0x00000040UL)

#define UART_UARTMIS_RTMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTMIS_RTMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_RTMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTMIS_R_FEMIS_MASK    ((uint32_t) 0x00000080UL)
#define UART_UARTMIS_R_FEMIS_BIT    ((uint32_t) 7UL)
#define UART_UARTMIS_R_FEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_R_FEMIS_OCCUR    ((uint32_t) 0x00000080UL)

#define UART_UARTMIS_FEMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTMIS_FEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_FEMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTMIS_R_PEMIS_MASK    ((uint32_t) 0x00000100UL)
#define UART_UARTMIS_R_PEMIS_BIT    ((uint32_t) 8UL)
#define UART_UARTMIS_R_PEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_R_PEMIS_OCCUR    ((uint32_t) 0x00000100UL)

#define UART_UARTMIS_PEMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTMIS_PEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_PEMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTMIS_R_BEMIS_MASK    ((uint32_t) 0x00000200UL)
#define UART_UARTMIS_R_BEMIS_BIT    ((uint32_t) 9UL)
#define UART_UARTMIS_R_BEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_R_BEMIS_OCCUR    ((uint32_t) 0x00000200UL)

#define UART_UARTMIS_BEMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTMIS_BEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_BEMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTMIS_R_OEMIS_MASK    ((uint32_t) 0x00000400UL)
#define UART_UARTMIS_R_OEMIS_BIT    ((uint32_t) 10UL)
#define UART_UARTMIS_R_OEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_R_OEMIS_OCCUR    ((uint32_t) 0x00000400UL)

#define UART_UARTMIS_OEMIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTMIS_OEMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_OEMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTMIS_R_BIT9MIS_MASK    ((uint32_t) 0x00008000UL)
#define UART_UARTMIS_R_BIT9MIS_BIT    ((uint32_t) 12UL)
#define UART_UARTMIS_R_BIT9MIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_R_BIT9MIS_OCCUR    ((uint32_t) 0x00008000UL)

#define UART_UARTMIS_BIT9MIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTMIS_BIT9MIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define UART_UARTMIS_BIT9MIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTMIS_H_ */
