/**
 *
 * @file UART_RegisterDefines_UART9BITADDR.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UART9BITADDR_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UART9BITADDR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 15 UART9BITADDR *********************************************
******************************************************************************************/
/*--------*/
#define UART_UART9BITADDR_R_ADDR_MASK      ((uint32_t)0x000000FFU)
#define UART_UART9BITADDR_R_ADDR_BIT          ((uint32_t)0U)

#define UART_UART9BITADDR_ADDR_MASK        ((uint32_t)0x000000FFU)
/*--------*/

/*--------*/
#define UART_UART9BITADDR_R_BIT9EN_MASK           ((uint32_t)0x00008000U)
#define UART_UART9BITADDR_R_BIT9EN_BIT               ((uint32_t)15U)
#define UART_UART9BITADDR_R_BIT9EN_DIS               ((uint32_t)0x00000000U)
#define UART_UART9BITADDR_R_BIT9EN_ENA              ((uint32_t)0x00008000U)

#define UART_UART9BITADDR_BIT9EN_MASK                 ((uint32_t)0x00000001U)
#define UART_UART9BITADDR_BIT9EN_DIS                     ((uint32_t)0x00000000U)
#define UART_UART9BITADDR_BIT9EN_ENA                   ((uint32_t)0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UART9BITADDR_H_ */
