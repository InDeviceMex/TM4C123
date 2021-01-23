/**
 *
 * @file UART_RegisterDefines_UARTLCRH.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTLCRH_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTLCRH_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 7 UARTLCRH *********************************************
******************************************************************************************/

/*--------*/
#define UART_UARTLCRH_R_BRK_MASK                ((uint32_t)0x00000001U)
#define UART_UARTLCRH_R_BRK_BIT                    ((uint32_t)0U)
#define UART_UARTLCRH_R_BRK_NORMAL        ((uint32_t)0x00000000U)
#define UART_UARTLCRH_R_BRK_SEND             ((uint32_t)0x00000001U)

#define UART_UARTLCRH_BRK_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTLCRH_BRK_NORMAL         ((uint32_t)0x00000000U)
#define UART_UARTLCRH_BRK_SEND              ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTLCRH_R_PEN_MASK                ((uint32_t)0x00000002U)
#define UART_UARTLCRH_R_PEN_BIT                    ((uint32_t)1U)
#define UART_UARTLCRH_R_PEN_DIS               ((uint32_t)0x00000000U)
#define UART_UARTLCRH_R_PEN_ENA              ((uint32_t)0x00000002U)

#define UART_UARTLCRH_PEN_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTLCRH_PEN_DIS                ((uint32_t)0x00000000U)
#define UART_UARTLCRH_PEN_ENA               ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTLCRH_R_EPS_MASK                ((uint32_t)0x00000004U)
#define UART_UARTLCRH_R_EPS_BIT                    ((uint32_t)2U)
#define UART_UARTLCRH_R_EPS_ODD               ((uint32_t)0x00000000U)
#define UART_UARTLCRH_R_EPS_EVEN              ((uint32_t)0x00000004U)

#define UART_UARTLCRH_EPS_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTLCRH_EPS_ODD                ((uint32_t)0x00000000U)
#define UART_UARTLCRH_EPS_EVEN               ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTLCRH_R_STP2_MASK                ((uint32_t)0x00000008U)
#define UART_UARTLCRH_R_STP2_BIT                    ((uint32_t)3U)
#define UART_UARTLCRH_R_STP2_ONE               ((uint32_t)0x00000000U)
#define UART_UARTLCRH_R_STP2_TWO              ((uint32_t)0x00000008U)

#define UART_UARTLCRH_STP2_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTLCRH_STP2_ONE                ((uint32_t)0x00000000U)
#define UART_UARTLCRH_STP2_TWO               ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTLCRH_R_FEN_MASK         ((uint32_t)0x00000010U)
#define UART_UARTLCRH_R_FEN_BIT             ((uint32_t)4U)
#define UART_UARTLCRH_R_FEN_DIS             ((uint32_t)0x00000000U)
#define UART_UARTLCRH_R_FEN_ENA            ((uint32_t)0x00000010U)

#define UART_UARTLCRH_FEN_MASK          ((uint32_t)0x00000001U)
#define UART_UARTLCRH_FEN_DIS              ((uint32_t)0x00000000U)
#define UART_UARTLCRH_FEN_ENA             ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTLCRH_R_WLEN_MASK             ((uint32_t)0x00000060U)
#define UART_UARTLCRH_R_WLEN_BIT                 ((uint32_t)5U)
#define UART_UARTLCRH_R_WLEN_5BITS             ((uint32_t)0x00000000U)
#define UART_UARTLCRH_R_WLEN_6BITS             ((uint32_t)0x00000020U)
#define UART_UARTLCRH_R_WLEN_7BITS             ((uint32_t)0x00000040U)
#define UART_UARTLCRH_R_WLEN_8BITS             ((uint32_t)0x00000060U)

#define UART_UARTLCRH_WLEN_MASK              ((uint32_t)0x00000003U)
#define UART_UARTLCRH_WLEN_5BITS              ((uint32_t)0x00000000U)
#define UART_UARTLCRH_WLEN_6BITS              ((uint32_t)0x00000001U)
#define UART_UARTLCRH_WLEN_7BITS              ((uint32_t)0x00000002U)
#define UART_UARTLCRH_WLEN_8BITS              ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define UART_UARTLCRH_R_SPS_MASK              ((uint32_t)0x00000080U)
#define UART_UARTLCRH_R_SPS_BIT                  ((uint32_t)7U)
#define UART_UARTLCRH_R_SPS_DIS                 ((uint32_t)0x00000000U)
#define UART_UARTLCRH_R_SPS_ENA                ((uint32_t)0x00000080U)

#define UART_UARTLCRH_SPS_MASK           ((uint32_t)0x00000001U)
#define UART_UARTLCRH_SPS_DIS               ((uint32_t)0x00000000U)
#define UART_UARTLCRH_SPS_ENA              ((uint32_t)0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTLCRH_H_ */
