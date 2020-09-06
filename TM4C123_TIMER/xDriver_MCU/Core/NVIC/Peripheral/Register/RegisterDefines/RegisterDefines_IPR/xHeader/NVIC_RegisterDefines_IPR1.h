/**
 *
 * @file NVIC_RegisterDefines_IPR1.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_IPR_NVIC_REGISTERDEFINES_IPR1_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_IPR_NVIC_REGISTERDEFINES_IPR1_H_

#include <xUtils/Standard/Standard.h>

/********************************************************************************************/
/************************************* IPR1 ***********************************************/
/******************************************************************************************/

/*----------*/
#define NVIC_IPR1_R_NVIC_GPIOE_MASK     ((uint32_t)0x000000E0u)
#define NVIC_IPR1_R_NVIC_GPIOE_BIT      (5u)
#define NVIC_IPR1_R_NVIC_GPIOE_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR1_R_NVIC_GPIOE_IP1      ((uint32_t)0x00000020u)
#define NVIC_IPR1_R_NVIC_GPIOE_IP2      ((uint32_t)0x00000040u)
#define NVIC_IPR1_R_NVIC_GPIOE_IP3      ((uint32_t)0x00000060u)
#define NVIC_IPR1_R_NVIC_GPIOE_IP4      ((uint32_t)0x00000080u)
#define NVIC_IPR1_R_NVIC_GPIOE_IP5      ((uint32_t)0x000000A0u)
#define NVIC_IPR1_R_NVIC_GPIOE_IP6      ((uint32_t)0x000000C0u)
#define NVIC_IPR1_R_NVIC_GPIOE_IP7      ((uint32_t)0x000000E0u)

#define NVIC_IPR1_NVIC_GPIOE_MASK       ((uint32_t)0x00000007u)
#define NVIC_IPR1_NVIC_GPIOE_IP0        ((uint32_t)0x00000000u)
#define NVIC_IPR1_NVIC_GPIOE_IP1        ((uint32_t)0x00000001u)
#define NVIC_IPR1_NVIC_GPIOE_IP2        ((uint32_t)0x00000002u)
#define NVIC_IPR1_NVIC_GPIOE_IP3        ((uint32_t)0x00000003u)
#define NVIC_IPR1_NVIC_GPIOE_IP4        ((uint32_t)0x00000004u)
#define NVIC_IPR1_NVIC_GPIOE_IP5        ((uint32_t)0x00000005u)
#define NVIC_IPR1_NVIC_GPIOE_IP6        ((uint32_t)0x00000006u)
#define NVIC_IPR1_NVIC_GPIOE_IP7        ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR1_R_NVIC_UART0_MASK     ((uint32_t)0x0000E000u)
#define NVIC_IPR1_R_NVIC_UART0_BIT      (13u)
#define NVIC_IPR1_R_NVIC_UART0_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR1_R_NVIC_UART0_IP1      ((uint32_t)0x00002000u)
#define NVIC_IPR1_R_NVIC_UART0_IP2      ((uint32_t)0x00004000u)
#define NVIC_IPR1_R_NVIC_UART0_IP3      ((uint32_t)0x00006000u)
#define NVIC_IPR1_R_NVIC_UART0_IP4      ((uint32_t)0x00008000u)
#define NVIC_IPR1_R_NVIC_UART0_IP5      ((uint32_t)0x0000A000u)
#define NVIC_IPR1_R_NVIC_UART0_IP6      ((uint32_t)0x0000C000u)
#define NVIC_IPR1_R_NVIC_UART0_IP7      ((uint32_t)0x0000E000u)

#define NVIC_IPR1_NVIC_UART0_MASK       ((uint32_t)0x00000007u)
#define NVIC_IPR1_NVIC_UART0_IP0        ((uint32_t)0x00000000u)
#define NVIC_IPR1_NVIC_UART0_IP1        ((uint32_t)0x00000001u)
#define NVIC_IPR1_NVIC_UART0_IP2        ((uint32_t)0x00000002u)
#define NVIC_IPR1_NVIC_UART0_IP3        ((uint32_t)0x00000003u)
#define NVIC_IPR1_NVIC_UART0_IP4        ((uint32_t)0x00000004u)
#define NVIC_IPR1_NVIC_UART0_IP5        ((uint32_t)0x00000005u)
#define NVIC_IPR1_NVIC_UART0_IP6        ((uint32_t)0x00000006u)
#define NVIC_IPR1_NVIC_UART0_IP7        ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR1_R_NVIC_UART1_MASK     ((uint32_t)0x00E00000u)
#define NVIC_IPR1_R_NVIC_UART1_BIT      (21u)
#define NVIC_IPR1_R_NVIC_UART1_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR1_R_NVIC_UART1_IP1      ((uint32_t)0x00200000u)
#define NVIC_IPR1_R_NVIC_UART1_IP2      ((uint32_t)0x00400000u)
#define NVIC_IPR1_R_NVIC_UART1_IP3      ((uint32_t)0x00600000u)
#define NVIC_IPR1_R_NVIC_UART1_IP4      ((uint32_t)0x00800000u)
#define NVIC_IPR1_R_NVIC_UART1_IP5      ((uint32_t)0x00A00000u)
#define NVIC_IPR1_R_NVIC_UART1_IP6      ((uint32_t)0x00C00000u)
#define NVIC_IPR1_R_NVIC_UART1_IP7      ((uint32_t)0x00E00000u)

#define NVIC_IPR1_NVIC_UART1_MASK       ((uint32_t)0x00000007u)
#define NVIC_IPR1_NVIC_UART1_IP0        ((uint32_t)0x00000000u)
#define NVIC_IPR1_NVIC_UART1_IP1        ((uint32_t)0x00000001u)
#define NVIC_IPR1_NVIC_UART1_IP2        ((uint32_t)0x00000002u)
#define NVIC_IPR1_NVIC_UART1_IP3        ((uint32_t)0x00000003u)
#define NVIC_IPR1_NVIC_UART1_IP4        ((uint32_t)0x00000004u)
#define NVIC_IPR1_NVIC_UART1_IP5        ((uint32_t)0x00000005u)
#define NVIC_IPR1_NVIC_UART1_IP6        ((uint32_t)0x00000006u)
#define NVIC_IPR1_NVIC_UART1_IP7        ((uint32_t)0x00000007u)
/*----------*/

/*-------*/
#define NVIC_IPR1_R_NVIC_SSI0_MASK      ((uint32_t)0xE0000000u)
#define NVIC_IPR1_R_NVIC_SSI0_BIT       (29u)
#define NVIC_IPR1_R_NVIC_SSI0_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR1_R_NVIC_SSI0_IP1       ((uint32_t)0x20000000u)
#define NVIC_IPR1_R_NVIC_SSI0_IP2       ((uint32_t)0x40000000u)
#define NVIC_IPR1_R_NVIC_SSI0_IP3       ((uint32_t)0x60000000u)
#define NVIC_IPR1_R_NVIC_SSI0_IP4       ((uint32_t)0x80000000u)
#define NVIC_IPR1_R_NVIC_SSI0_IP5       ((uint32_t)0xA0000000u)
#define NVIC_IPR1_R_NVIC_SSI0_IP6       ((uint32_t)0xC0000000u)
#define NVIC_IPR1_R_NVIC_SSI0_IP7       ((uint32_t)0xE0000000u)

#define NVIC_IPR1_NVIC_SSI0_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR1_NVIC_SSI0_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR1_NVIC_SSI0_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR1_NVIC_SSI0_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR1_NVIC_SSI0_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR1_NVIC_SSI0_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR1_NVIC_SSI0_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR1_NVIC_SSI0_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR1_NVIC_SSI0_IP7         ((uint32_t)0x00000007u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_IPR_NVIC_REGISTERDEFINES_IPR1_H_ */
