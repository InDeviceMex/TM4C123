/**
 *
 * @file SYSCTL_RegisterDefines_SR.h
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_SR_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_SR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************42 SRWD *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SRWD_R_WDT0_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_SRWD_R_WDT0_BIT          (0u)
#define SYSCTL_SRWD_R_WDT0_NORESET    ((uint32_t)0x00000000u)
#define SYSCTL_SRWD_R_WDT0_RESET      ((uint32_t)0x00000001u)

#define SYSCTL_SRWD_WDT0_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_SRWD_WDT0_NORESET      ((uint32_t)0x00000000u)
#define SYSCTL_SRWD_WDT0_RESET        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRWD_R_WDT1_MASK         ((uint32_t)0x00000002u)
#define SYSCTL_SRWD_R_WDT1_BIT          (1u)
#define SYSCTL_SRWD_R_WDT1_NORESET    ((uint32_t)0x00000000u)
#define SYSCTL_SRWD_R_WDT1_RESET      ((uint32_t)0x00000002u)

#define SYSCTL_SRWD_WDT1_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_SRWD_WDT1_NORESET      ((uint32_t)0x00000000u)
#define SYSCTL_SRWD_WDT1_RESET        ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************43 SRTIMER *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SRTIMER_R_TIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRTIMER_R_TIMER0_BIT         (0u)
#define SYSCTL_SRTIMER_R_TIMER0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_R_TIMER0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRTIMER_TIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRTIMER_TIMER0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_TIMER0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRTIMER_R_TIMER1_BIT         (1u)
#define SYSCTL_SRTIMER_R_TIMER1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_R_TIMER1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRTIMER_TIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRTIMER_TIMER1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_TIMER1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SRTIMER_R_TIMER2_BIT         (2u)
#define SYSCTL_SRTIMER_R_TIMER2_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_R_TIMER2_RESET     ((uint32_t)0x00000004u)

#define SYSCTL_SRTIMER_TIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRTIMER_TIMER2_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_TIMER2_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SRTIMER_R_TIMER3_BIT         (3u)
#define SYSCTL_SRTIMER_R_TIMER3_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_R_TIMER3_RESET     ((uint32_t)0x00000008u)

#define SYSCTL_SRTIMER_TIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRTIMER_TIMER3_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_TIMER3_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SRTIMER_R_TIMER4_BIT         (4u)
#define SYSCTL_SRTIMER_R_TIMER4_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_R_TIMER4_RESET     ((uint32_t)0x00000010u)

#define SYSCTL_SRTIMER_TIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRTIMER_TIMER4_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_TIMER4_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRTIMER_R_TIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SRTIMER_R_TIMER5_BIT         (5u)
#define SYSCTL_SRTIMER_R_TIMER5_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_R_TIMER5_RESET     ((uint32_t)0x00000020u)

#define SYSCTL_SRTIMER_TIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRTIMER_TIMER5_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRTIMER_TIMER5_RESET       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************44 SRGPIO *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SRGPIO_R_GPIOA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_R_GPIOA_BIT         (0u)
#define SYSCTL_SRGPIO_R_GPIOA_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOA_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRGPIO_GPIOA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOA_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOA_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOB_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRGPIO_R_GPIOB_BIT         (1u)
#define SYSCTL_SRGPIO_R_GPIOB_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOB_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRGPIO_GPIOB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOB_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOB_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOC_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SRGPIO_R_GPIOC_BIT         (2u)
#define SYSCTL_SRGPIO_R_GPIOC_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOC_RESET     ((uint32_t)0x00000004u)

#define SYSCTL_SRGPIO_GPIOC_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOC_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOC_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOD_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SRGPIO_R_GPIOD_BIT         (3u)
#define SYSCTL_SRGPIO_R_GPIOD_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOD_RESET     ((uint32_t)0x00000008u)

#define SYSCTL_SRGPIO_GPIOD_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOD_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOD_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOE_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SRGPIO_R_GPIOE_BIT         (4u)
#define SYSCTL_SRGPIO_R_GPIOE_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOE_RESET     ((uint32_t)0x00000010u)

#define SYSCTL_SRGPIO_GPIOE_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOE_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOE_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOF_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SRGPIO_R_GPIOF_BIT         (5u)
#define SYSCTL_SRGPIO_R_GPIOF_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOF_RESET     ((uint32_t)0x00000020u)

#define SYSCTL_SRGPIO_GPIOF_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOF_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOF_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_SRGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_SRGPIO_R_GPIOG_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOG_RESET     ((uint32_t)0x00000040u)

#define SYSCTL_SRGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOG_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOG_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_SRGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_SRGPIO_R_GPIOG_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOG_RESET     ((uint32_t)0x00000040u)

#define SYSCTL_SRGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOG_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOG_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOH_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_SRGPIO_R_GPIOH_BIT         (7u)
#define SYSCTL_SRGPIO_R_GPIOH_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOH_RESET     ((uint32_t)0x00000080u)

#define SYSCTL_SRGPIO_GPIOH_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOH_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOH_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOJ_MASK        ((uint32_t)0x00000100u)
#define SYSCTL_SRGPIO_R_GPIOJ_BIT         (8u)
#define SYSCTL_SRGPIO_R_GPIOJ_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOJ_RESET     ((uint32_t)0x00000100u)

#define SYSCTL_SRGPIO_GPIOJ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOJ_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOJ_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOK_MASK        ((uint32_t)0x00000200u)
#define SYSCTL_SRGPIO_R_GPIOK_BIT         (9u)
#define SYSCTL_SRGPIO_R_GPIOK_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOK_RESET     ((uint32_t)0x00000200u)

#define SYSCTL_SRGPIO_GPIOK_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOK_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOK_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOL_MASK        ((uint32_t)0x00000400u)
#define SYSCTL_SRGPIO_R_GPIOL_BIT         (10u)
#define SYSCTL_SRGPIO_R_GPIOL_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOL_RESET     ((uint32_t)0x00000400u)

#define SYSCTL_SRGPIO_GPIOL_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOL_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOL_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOM_MASK        ((uint32_t)0x00000800u)
#define SYSCTL_SRGPIO_R_GPIOM_BIT         (11u)
#define SYSCTL_SRGPIO_R_GPIOM_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOM_RESET     ((uint32_t)0x00000800u)

#define SYSCTL_SRGPIO_GPIOM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOM_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOM_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPION_MASK        ((uint32_t)0x00001000u)
#define SYSCTL_SRGPIO_R_GPION_BIT         (12u)
#define SYSCTL_SRGPIO_R_GPION_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPION_RESET     ((uint32_t)0x00001000u)

#define SYSCTL_SRGPIO_GPION_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPION_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPION_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOP_MASK        ((uint32_t)0x00002000u)
#define SYSCTL_SRGPIO_R_GPIOP_BIT         (13u)
#define SYSCTL_SRGPIO_R_GPIOP_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOP_RESET     ((uint32_t)0x00002000u)

#define SYSCTL_SRGPIO_GPIOP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOP_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOP_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRGPIO_R_GPIOQ_MASK        ((uint32_t)0x00004000u)
#define SYSCTL_SRGPIO_R_GPIOQ_BIT         (14u)
#define SYSCTL_SRGPIO_R_GPIOQ_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_R_GPIOQ_RESET     ((uint32_t)0x00004000u)

#define SYSCTL_SRGPIO_GPIOQ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRGPIO_GPIOQ_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRGPIO_GPIOQ_RESET       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************45 SRDMA *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SRDMA_R_UDMA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRDMA_R_UDMA_BIT         (0u)
#define SYSCTL_SRDMA_R_UDMA_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRDMA_R_UDMA_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRDMA_UDMA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRDMA_UDMA_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRDMA_UDMA_RESET       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************46 SRHIB *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SRHIB_R_HIB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRHIB_R_HIB_BIT         (0u)
#define SYSCTL_SRHIB_R_HIB_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRHIB_R_HIB_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRHIB_HIB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRHIB_HIB_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRHIB_HIB_RESET       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************47 SRUART *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SRUART_R_UART0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_R_UART0_BIT         (0u)
#define SYSCTL_SRUART_R_UART0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRUART_UART0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRUART_R_UART1_BIT         (1u)
#define SYSCTL_SRUART_R_UART1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRUART_UART1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SRUART_R_UART2_BIT         (2u)
#define SYSCTL_SRUART_R_UART2_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART2_RESET     ((uint32_t)0x00000004u)

#define SYSCTL_SRUART_UART2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART2_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART2_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SRUART_R_UART3_BIT         (3u)
#define SYSCTL_SRUART_R_UART3_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART3_RESET     ((uint32_t)0x00000008u)

#define SYSCTL_SRUART_UART3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART3_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART3_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SRUART_R_UART4_BIT         (4u)
#define SYSCTL_SRUART_R_UART4_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART4_RESET     ((uint32_t)0x00000010u)

#define SYSCTL_SRUART_UART4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART4_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART4_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SRUART_R_UART5_BIT         (5u)
#define SYSCTL_SRUART_R_UART5_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART5_RESET     ((uint32_t)0x00000020u)

#define SYSCTL_SRUART_UART5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART5_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART5_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART6_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_SRUART_R_UART6_BIT         (6u)
#define SYSCTL_SRUART_R_UART6_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART6_RESET     ((uint32_t)0x00000040u)

#define SYSCTL_SRUART_UART6_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART6_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART6_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRUART_R_UART7_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_SRUART_R_UART7_BIT         (7u)
#define SYSCTL_SRUART_R_UART7_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_R_UART7_RESET     ((uint32_t)0x00000080u)

#define SYSCTL_SRUART_UART7_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUART_UART7_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUART_UART7_RESET       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************48 SRSSI *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SRSSI_R_SSI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRSSI_R_SSI0_BIT         (0u)
#define SYSCTL_SRSSI_R_SSI0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_R_SSI0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRSSI_SSI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRSSI_SSI0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_SSI0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRSSI_R_SSI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRSSI_R_SSI1_BIT         (1u)
#define SYSCTL_SRSSI_R_SSI1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_R_SSI1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRSSI_SSI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRSSI_SSI1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_SSI1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRSSI_R_SSI2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SRSSI_R_SSI2_BIT         (2u)
#define SYSCTL_SRSSI_R_SSI2_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_R_SSI2_RESET     ((uint32_t)0x00000004u)

#define SYSCTL_SRSSI_SSI2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRSSI_SSI2_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_SSI2_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRSSI_R_SSI3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SRSSI_R_SSI3_BIT         (3u)
#define SYSCTL_SRSSI_R_SSI3_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_R_SSI3_RESET     ((uint32_t)0x00000008u)

#define SYSCTL_SRSSI_SSI3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRSSI_SSI3_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRSSI_SSI3_RESET       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************49 SRI2C *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SRI2C_R_I2C0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRI2C_R_I2C0_BIT         (0u)
#define SYSCTL_SRI2C_R_I2C0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_R_I2C0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRI2C_I2C0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRI2C_I2C0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_I2C0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRI2C_R_I2C1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRI2C_R_I2C1_BIT         (1u)
#define SYSCTL_SRI2C_R_I2C1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_R_I2C1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRI2C_I2C1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRI2C_I2C1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_I2C1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRI2C_R_I2C2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SRI2C_R_I2C2_BIT         (2u)
#define SYSCTL_SRI2C_R_I2C2_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_R_I2C2_RESET     ((uint32_t)0x00000004u)

#define SYSCTL_SRI2C_I2C2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRI2C_I2C2_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_I2C2_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRI2C_R_I2C3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SRI2C_R_I2C3_BIT         (3u)
#define SYSCTL_SRI2C_R_I2C3_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_R_I2C3_RESET     ((uint32_t)0x00000008u)

#define SYSCTL_SRI2C_I2C3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRI2C_I2C3_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_I2C3_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRI2C_R_I2C4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SRI2C_R_I2C4_BIT         (4u)
#define SYSCTL_SRI2C_R_I2C4_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_R_I2C4_RESET     ((uint32_t)0x00000010u)

#define SYSCTL_SRI2C_I2C4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRI2C_I2C4_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_I2C4_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRI2C_R_I2C5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SRI2C_R_I2C5_BIT         (5u)
#define SYSCTL_SRI2C_R_I2C5_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_R_I2C5_RESET     ((uint32_t)0x00000020u)

#define SYSCTL_SRI2C_I2C5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRI2C_I2C5_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRI2C_I2C5_RESET       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************50 SRUSB *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SRUSB_R_USB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRUSB_R_USB_BIT         (0u)
#define SYSCTL_SRUSB_R_USB_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRUSB_R_USB_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRUSB_USB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRUSB_USB_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRUSB_USB_RESET       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************51 SRCAN *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SRCAN_R_CAN0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRCAN_R_CAN0_BIT         (0u)
#define SYSCTL_SRCAN_R_CAN0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRCAN_R_CAN0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRCAN_CAN0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRCAN_CAN0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRCAN_CAN0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRCAN_R_CAN1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRCAN_R_CAN1_BIT         (1u)
#define SYSCTL_SRCAN_R_CAN1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRCAN_R_CAN1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRCAN_CAN1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRCAN_CAN1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRCAN_CAN1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************52 SRADC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SRADC_R_ADC0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRADC_R_ADC0_BIT         (0u)
#define SYSCTL_SRADC_R_ADC0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRADC_R_ADC0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRADC_ADC0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRADC_ADC0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRADC_ADC0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRADC_R_ADC1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRADC_R_ADC1_BIT         (1u)
#define SYSCTL_SRADC_R_ADC1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRADC_R_ADC1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRADC_ADC1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRADC_ADC1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRADC_ADC1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************53 SRACMP *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SRACMP_R_ACMP_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRACMP_R_ACMP_BIT         (0u)
#define SYSCTL_SRACMP_R_ACMP_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRACMP_R_ACMP_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRACMP_ACMP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRACMP_ACMP_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRACMP_ACMP_RESET       ((uint32_t)0x00000001u)
/*--------*/

/****************************************************************************************
************************************54 SRPWM *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SRPWM_R_PWM0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRPWM_R_PWM0_BIT         (0u)
#define SYSCTL_SRPWM_R_PWM0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRPWM_R_PWM0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRPWM_PWM0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRPWM_PWM0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRPWM_PWM0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRPWM_R_PWM1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRPWM_R_PWM1_BIT         (1u)
#define SYSCTL_SRPWM_R_PWM1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRPWM_R_PWM1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRPWM_PWM1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRPWM_PWM1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRPWM_PWM1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************55 SRQEI *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SRQEI_R_QEI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRQEI_R_QEI0_BIT         (0u)
#define SYSCTL_SRQEI_R_QEI0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRQEI_R_QEI0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRQEI_QEI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRQEI_QEI0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRQEI_QEI0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRQEI_R_QEI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRQEI_R_QEI1_BIT         (1u)
#define SYSCTL_SRQEI_R_QEI1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRQEI_R_QEI1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRQEI_QEI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRQEI_QEI1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRQEI_QEI1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************56 SREEPROM *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SREEPROM_R_EEPROM_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SREEPROM_R_EEPROM_BIT         (0u)
#define SYSCTL_SREEPROM_R_EEPROM_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SREEPROM_R_EEPROM_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SREEPROM_EEPROM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SREEPROM_EEPROM_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SREEPROM_EEPROM_RESET       ((uint32_t)0x00000001u)
/*--------*/

/**********************************************************************************
************************************57 SRWTIMER *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SRWTIMER_R_WTIMER0_BIT         (0u)
#define SYSCTL_SRWTIMER_R_WTIMER0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_R_WTIMER0_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_SRWTIMER_WTIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRWTIMER_WTIMER0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_WTIMER0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SRWTIMER_R_WTIMER1_BIT         (1u)
#define SYSCTL_SRWTIMER_R_WTIMER1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_R_WTIMER1_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_SRWTIMER_WTIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRWTIMER_WTIMER1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_WTIMER1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SRWTIMER_R_WTIMER2_BIT         (2u)
#define SYSCTL_SRWTIMER_R_WTIMER2_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_R_WTIMER2_RESET     ((uint32_t)0x00000004u)

#define SYSCTL_SRWTIMER_WTIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRWTIMER_WTIMER2_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_WTIMER2_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SRWTIMER_R_WTIMER3_BIT         (3u)
#define SYSCTL_SRWTIMER_R_WTIMER3_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_R_WTIMER3_RESET     ((uint32_t)0x00000008u)

#define SYSCTL_SRWTIMER_WTIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRWTIMER_WTIMER3_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_WTIMER3_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SRWTIMER_R_WTIMER4_BIT         (4u)
#define SYSCTL_SRWTIMER_R_WTIMER4_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_R_WTIMER4_RESET     ((uint32_t)0x00000010u)

#define SYSCTL_SRWTIMER_WTIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRWTIMER_WTIMER4_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_WTIMER4_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SRWTIMER_R_WTIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SRWTIMER_R_WTIMER5_BIT         (5u)
#define SYSCTL_SRWTIMER_R_WTIMER5_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_R_WTIMER5_RESET     ((uint32_t)0x00000020u)

#define SYSCTL_SRWTIMER_WTIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SRWTIMER_WTIMER5_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_SRWTIMER_WTIMER5_RESET       ((uint32_t)0x00000001u)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_SR_H_ */
