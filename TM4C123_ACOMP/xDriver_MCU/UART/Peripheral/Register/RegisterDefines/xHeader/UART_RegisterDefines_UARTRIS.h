/**
 *
 * @file UART_RegisterDefines_UARTRIS.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTRIS_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTRIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 11 UARTRIS *********************************************
******************************************************************************************/

/*--------*/
#define UART_UARTRIS_R_CTSRIS_MASK                ((uint32_t)0x00000002U)
#define UART_UARTRIS_R_CTSRIS_BIT                    ((uint32_t)1U)
#define UART_UARTRIS_R_CTSRIS_NOACTIVE        ((uint32_t)0x00000000U)
#define UART_UARTRIS_R_CTSRIS_ACTIVE             ((uint32_t)0x00000002U)

#define UART_UARTRIS_CTSRIS_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTRIS_CTSRIS_NOACTIVE         ((uint32_t)0x00000000U)
#define UART_UARTRIS_CTSRIS_ACTIVE               ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTRIS_R_RXRIS_MASK                ((uint32_t)0x00000010U)
#define UART_UARTRIS_R_RXRIS_BIT                    ((uint32_t)4U)
#define UART_UARTRIS_R_RXRIS_NOACTIVE        ((uint32_t)0x00000000U)
#define UART_UARTRIS_R_RXRIS_ACTIVE              ((uint32_t)0x00000010U)

#define UART_UARTRIS_RXRIS_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTRIS_RXRIS_NOACTIVE         ((uint32_t)0x00000000U)
#define UART_UARTRIS_RXRIS_ACTIVE               ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTRIS_R_TXRIS_MASK                ((uint32_t)0x00000020U)
#define UART_UARTRIS_R_TXRIS_BIT                    ((uint32_t)5U)
#define UART_UARTRIS_R_TXRIS_NOACTIVE        ((uint32_t)0x00000000U)
#define UART_UARTRIS_R_TXRIS_ACTIVE              ((uint32_t)0x00000020U)

#define UART_UARTRIS_TXRIS_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTRIS_TXRIS_NOACTIVE         ((uint32_t)0x00000000U)
#define UART_UARTRIS_TXRIS_ACTIVE               ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTRIS_R_RTRIS_MASK                ((uint32_t)0x00000040U)
#define UART_UARTRIS_R_RTRIS_BIT                    ((uint32_t)6U)
#define UART_UARTRIS_R_RTRIS_NOACTIVE        ((uint32_t)0x00000000U)
#define UART_UARTRIS_R_RTRIS_ACTIVE             ((uint32_t)0x00000040U)

#define UART_UARTRIS_RTRIS_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTRIS_RTRIS_NOACTIVE         ((uint32_t)0x00000000U)
#define UART_UARTRIS_RTRIS_ACTIVE               ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTRIS_R_FERIS_MASK          ((uint32_t)0x00000080U)
#define UART_UARTRIS_R_FERIS_BIT              ((uint32_t)7U)
#define UART_UARTRIS_R_FERIS_NOACTIVE  ((uint32_t)0x00000000U)
#define UART_UARTRIS_R_FERIS_ACTIVE        ((uint32_t)0x00000080U)

#define UART_UARTRIS_FERIS_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTRIS_FERIS_NOACTIVE         ((uint32_t)0x00000000U)
#define UART_UARTRIS_FERIS_ACTIVE               ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTRIS_R_PERIS_MASK          ((uint32_t)0x00000100U)
#define UART_UARTRIS_R_PERIS_BIT              ((uint32_t)8U)
#define UART_UARTRIS_R_PERIS_NOACTIVE  ((uint32_t)0x00000000U)
#define UART_UARTRIS_R_PERIS_ACTIVE        ((uint32_t)0x00000100U)

#define UART_UARTRIS_PERIS_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTRIS_PERIS_NOACTIVE         ((uint32_t)0x00000000U)
#define UART_UARTRIS_PERIS_ACTIVE               ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTRIS_R_BERIS_MASK          ((uint32_t)0x00000200U)
#define UART_UARTRIS_R_BERIS_BIT              ((uint32_t)9U)
#define UART_UARTRIS_R_BERIS_NOACTIVE  ((uint32_t)0x00000000U)
#define UART_UARTRIS_R_BERIS_ACTIVE        ((uint32_t)0x00000200U)

#define UART_UARTRIS_BERIS_MASK              ((uint32_t)0x00000001U)
#define UART_UARTRIS_BERIS_NOACTIVE      ((uint32_t)0x00000000U)
#define UART_UARTRIS_BERIS_ACTIVE            ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTRIS_R_OERIS_MASK          ((uint32_t)0x00000400U)
#define UART_UARTRIS_R_OERIS_BIT              ((uint32_t)10U)
#define UART_UARTRIS_R_OERIS_NOACTIVE  ((uint32_t)0x00000000U)
#define UART_UARTRIS_R_OERIS_ACTIVE        ((uint32_t)0x00000400U)

#define UART_UARTRIS_OERIS_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTRIS_OERIS_NOACTIVE         ((uint32_t)0x00000000U)
#define UART_UARTRIS_OERIS_ACTIVE               ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTRIS_R_BIT9RIS_MASK          ((uint32_t)0x00008000U)
#define UART_UARTRIS_R_BIT9RIS_BIT              ((uint32_t)12U)
#define UART_UARTRIS_R_BIT9RIS_NOACTIVE  ((uint32_t)0x00000000U)
#define UART_UARTRIS_R_BIT9RIS_ACTIVE        ((uint32_t)0x00008000U)

#define UART_UARTRIS_BIT9RIS_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTRIS_BIT9RIS_NOACTIVE         ((uint32_t)0x00000000U)
#define UART_UARTRIS_BIT9RIS_ACTIVE               ((uint32_t)0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTRIS_H_ */
