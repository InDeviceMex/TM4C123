/**
 *
 * @file UART_RegisterDefines_UARTICR.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTICR_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTICR_H_


#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 13 UARTICR *********************************************
******************************************************************************************/

/*--------*/
#define UART_UARTICR_R_CTSIC_MASK    ((uint32_t) 0x00000002UL)
#define UART_UARTICR_R_CTSIC_BIT    ((uint32_t) 1UL)
#define UART_UARTICR_R_CTSIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_R_CTSIC_CLEAR    ((uint32_t) 0x00000002UL)

#define UART_UARTICR_CTSIC_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTICR_CTSIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_CTSIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTICR_R_RXIC_MASK    ((uint32_t) 0x00000010UL)
#define UART_UARTICR_R_RXIC_BIT    ((uint32_t) 4UL)
#define UART_UARTICR_R_RXIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_R_RXIC_CLEAR    ((uint32_t) 0x00000010UL)

#define UART_UARTICR_RXIC_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTICR_RXIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_RXIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTICR_R_TXIC_MASK    ((uint32_t) 0x00000020UL)
#define UART_UARTICR_R_TXIC_BIT    ((uint32_t) 5UL)
#define UART_UARTICR_R_TXIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_R_TXIC_CLEAR    ((uint32_t) 0x00000020UL)

#define UART_UARTICR_TXIC_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTICR_TXIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_TXIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTICR_R_RTIC_MASK    ((uint32_t) 0x00000040UL)
#define UART_UARTICR_R_RTIC_BIT    ((uint32_t) 6UL)
#define UART_UARTICR_R_RTIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_R_RTIC_CLEAR    ((uint32_t) 0x00000040UL)

#define UART_UARTICR_RTIC_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTICR_RTIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_RTIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTICR_R_FEIC_MASK    ((uint32_t) 0x00000080UL)
#define UART_UARTICR_R_FEIC_BIT    ((uint32_t) 7UL)
#define UART_UARTICR_R_FEIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_R_FEIC_CLEAR    ((uint32_t) 0x00000080UL)

#define UART_UARTICR_FEIC_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTICR_FEIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_FEIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTICR_R_PEIC_MASK    ((uint32_t) 0x00000100UL)
#define UART_UARTICR_R_PEIC_BIT    ((uint32_t) 8UL)
#define UART_UARTICR_R_PEIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_R_PEIC_CLEAR    ((uint32_t) 0x00000100UL)

#define UART_UARTICR_PEIC_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTICR_PEIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_PEIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTICR_R_BEIC_MASK    ((uint32_t) 0x00000200UL)
#define UART_UARTICR_R_BEIC_BIT    ((uint32_t) 9UL)
#define UART_UARTICR_R_BEIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_R_BEIC_CLEAR    ((uint32_t) 0x00000200UL)

#define UART_UARTICR_BEIC_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTICR_BEIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_BEIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTICR_R_OEIC_MASK    ((uint32_t) 0x00000400UL)
#define UART_UARTICR_R_OEIC_BIT    ((uint32_t) 10UL)
#define UART_UARTICR_R_OEIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_R_OEIC_CLEAR    ((uint32_t) 0x00000400UL)

#define UART_UARTICR_OEIC_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTICR_OEIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_OEIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_UARTICR_R_BIT9IC_MASK    ((uint32_t) 0x00008000UL)
#define UART_UARTICR_R_BIT9IC_BIT    ((uint32_t) 12UL)
#define UART_UARTICR_R_BIT9IC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_R_BIT9IC_CLEAR    ((uint32_t) 0x00008000UL)

#define UART_UARTICR_BIT9IC_MASK    ((uint32_t) 0x00000001UL)
#define UART_UARTICR_BIT9IC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define UART_UARTICR_BIT9IC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/




#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTICR_H_ */
