/**
 *
 * @file UART_RegisterDefines_UARTRSR.h
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
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTRSR_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTRSR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 2 UARTRSR *********************************************
******************************************************************************************/

/*--------*/
#define UART_UARTRSR_R_FE_MASK                ((uint32_t)0x00000001U)
#define UART_UARTRSR_R_FE_BIT                    ((uint32_t)0U)
#define UART_UARTRSR_R_FE_NOOCCUR        ((uint32_t)0x00000000U)
#define UART_UARTRSR_R_FE_OCCUR              ((uint32_t)0x00000001U)

#define UART_UARTRSR_FE_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTRSR_FE_NOOCCUR         ((uint32_t)0x00000000U)
#define UART_UARTRSR_FE_OCCUR              ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTRSR_R_PE_MASK                ((uint32_t)0x00000002U)
#define UART_UARTRSR_R_PE_BIT                    ((uint32_t)1U)
#define UART_UARTRSR_R_PE_NOOCCUR        ((uint32_t)0x00000000U)
#define UART_UARTRSR_R_PE_OCCUR              ((uint32_t)0x00000002U)

#define UART_UARTRSR_PE_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTRSR_PE_NOOCCUR         ((uint32_t)0x00000000U)
#define UART_UARTRSR_PE_OCCUR              ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTRSR_R_BE_MASK                ((uint32_t)0x00000004U)
#define UART_UARTRSR_R_BE_BIT                    ((uint32_t)2U)
#define UART_UARTRSR_R_BE_NOOCCUR        ((uint32_t)0x00000000U)
#define UART_UARTRSR_R_BE_OCCUR              ((uint32_t)0x00000004U)

#define UART_UARTRSR_BE_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTRSR_BE_NOOCCUR         ((uint32_t)0x00000000U)
#define UART_UARTRSR_BE_OCCUR              ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define UART_UARTRSR_R_OE_MASK                ((uint32_t)0x00000008U)
#define UART_UARTRSR_R_OE_BIT                    ((uint32_t)3U)
#define UART_UARTRSR_R_OE_NOOCCUR        ((uint32_t)0x00000000U)
#define UART_UARTRSR_R_OE_OCCUR              ((uint32_t)0x00000008U)

#define UART_UARTRSR_OE_MASK                 ((uint32_t)0x00000001U)
#define UART_UARTRSR_OE_NOOCCUR         ((uint32_t)0x00000000U)
#define UART_UARTRSR_OE_OCCUR              ((uint32_t)0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_UARTRSR_H_ */
