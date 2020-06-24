/**
 *
 * @file SYSCTL_RegisterDefines_PP.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PP_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PP_H_

/******************************************************************************************
************************************26 PPWD *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPWD_R_WDT0_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_PPWD_R_WDT0_BIT          (0u)
#define SYSCTL_PPWD_R_WDT0_NOPRESENT    ((uint32_t)0x00000000u)
#define SYSCTL_PPWD_R_WDT0_PRESENT      ((uint32_t)0x00000001u)

#define SYSCTL_PPWD_WDT0_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_PPWD_WDT0_NOPRESENT      ((uint32_t)0x00000000u)
#define SYSCTL_PPWD_WDT0_PRESENT        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPWD_R_WDT1_MASK         ((uint32_t)0x00000002u)
#define SYSCTL_PPWD_R_WDT1_BIT          (1u)
#define SYSCTL_PPWD_R_WDT1_NOPRESENT    ((uint32_t)0x00000000u)
#define SYSCTL_PPWD_R_WDT1_PRESENT      ((uint32_t)0x00000002u)

#define SYSCTL_PPWD_WDT1_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_PPWD_WDT1_NOPRESENT      ((uint32_t)0x00000000u)
#define SYSCTL_PPWD_WDT1_PRESENT        ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************27 PPTIMER *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPTIMER_R_TIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPTIMER_R_TIMER0_BIT         (0u)
#define SYSCTL_PPTIMER_R_TIMER0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_R_TIMER0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPTIMER_TIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPTIMER_TIMER0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_TIMER0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPTIMER_R_TIMER1_BIT         (1u)
#define SYSCTL_PPTIMER_R_TIMER1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_R_TIMER1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPTIMER_TIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPTIMER_TIMER1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_TIMER1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PPTIMER_R_TIMER2_BIT         (2u)
#define SYSCTL_PPTIMER_R_TIMER2_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_R_TIMER2_PRESENT     ((uint32_t)0x00000004u)

#define SYSCTL_PPTIMER_TIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPTIMER_TIMER2_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_TIMER2_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PPTIMER_R_TIMER3_BIT         (3u)
#define SYSCTL_PPTIMER_R_TIMER3_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_R_TIMER3_PRESENT     ((uint32_t)0x00000008u)

#define SYSCTL_PPTIMER_TIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPTIMER_TIMER3_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_TIMER3_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_PPTIMER_R_TIMER4_BIT         (4u)
#define SYSCTL_PPTIMER_R_TIMER4_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_R_TIMER4_PRESENT     ((uint32_t)0x00000010u)

#define SYSCTL_PPTIMER_TIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPTIMER_TIMER4_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_TIMER4_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPTIMER_R_TIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_PPTIMER_R_TIMER5_BIT         (5u)
#define SYSCTL_PPTIMER_R_TIMER5_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_R_TIMER5_PRESENT     ((uint32_t)0x00000020u)

#define SYSCTL_PPTIMER_TIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPTIMER_TIMER5_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPTIMER_TIMER5_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************28 PPGPIO *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPGPIO_R_GPIOA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_R_GPIOA_BIT         (0u)
#define SYSCTL_PPGPIO_R_GPIOA_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOA_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPGPIO_GPIOA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOA_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOA_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOB_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPGPIO_R_GPIOB_BIT         (1u)
#define SYSCTL_PPGPIO_R_GPIOB_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOB_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPGPIO_GPIOB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOB_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOB_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOC_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PPGPIO_R_GPIOC_BIT         (2u)
#define SYSCTL_PPGPIO_R_GPIOC_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOC_PRESENT     ((uint32_t)0x00000004u)

#define SYSCTL_PPGPIO_GPIOC_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOC_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOC_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOD_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PPGPIO_R_GPIOD_BIT         (3u)
#define SYSCTL_PPGPIO_R_GPIOD_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOD_PRESENT     ((uint32_t)0x00000008u)

#define SYSCTL_PPGPIO_GPIOD_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOD_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOD_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOE_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_PPGPIO_R_GPIOE_BIT         (4u)
#define SYSCTL_PPGPIO_R_GPIOE_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOE_PRESENT     ((uint32_t)0x00000010u)

#define SYSCTL_PPGPIO_GPIOE_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOE_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOE_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOF_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_PPGPIO_R_GPIOF_BIT         (5u)
#define SYSCTL_PPGPIO_R_GPIOF_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOF_PRESENT     ((uint32_t)0x00000020u)

#define SYSCTL_PPGPIO_GPIOF_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOF_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOF_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_PPGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_PPGPIO_R_GPIOG_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOG_PRESENT     ((uint32_t)0x00000040u)

#define SYSCTL_PPGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOG_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOG_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_PPGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_PPGPIO_R_GPIOG_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOG_PRESENT     ((uint32_t)0x00000040u)

#define SYSCTL_PPGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOG_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOG_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOH_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_PPGPIO_R_GPIOH_BIT         (7u)
#define SYSCTL_PPGPIO_R_GPIOH_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOH_PRESENT     ((uint32_t)0x00000080u)

#define SYSCTL_PPGPIO_GPIOH_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOH_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOH_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOJ_MASK        ((uint32_t)0x00000100u)
#define SYSCTL_PPGPIO_R_GPIOJ_BIT         (8u)
#define SYSCTL_PPGPIO_R_GPIOJ_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOJ_PRESENT     ((uint32_t)0x00000100u)

#define SYSCTL_PPGPIO_GPIOJ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOJ_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOJ_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOK_MASK        ((uint32_t)0x00000200u)
#define SYSCTL_PPGPIO_R_GPIOK_BIT         (9u)
#define SYSCTL_PPGPIO_R_GPIOK_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOK_PRESENT     ((uint32_t)0x00000200u)

#define SYSCTL_PPGPIO_GPIOK_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOK_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOK_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOL_MASK        ((uint32_t)0x00000400u)
#define SYSCTL_PPGPIO_R_GPIOL_BIT         (10u)
#define SYSCTL_PPGPIO_R_GPIOL_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOL_PRESENT     ((uint32_t)0x00000400u)

#define SYSCTL_PPGPIO_GPIOL_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOL_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOL_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOM_MASK        ((uint32_t)0x00000800u)
#define SYSCTL_PPGPIO_R_GPIOM_BIT         (11u)
#define SYSCTL_PPGPIO_R_GPIOM_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOM_PRESENT     ((uint32_t)0x00000800u)

#define SYSCTL_PPGPIO_GPIOM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOM_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOM_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPION_MASK        ((uint32_t)0x00001000u)
#define SYSCTL_PPGPIO_R_GPION_BIT         (12u)
#define SYSCTL_PPGPIO_R_GPION_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPION_PRESENT     ((uint32_t)0x00001000u)

#define SYSCTL_PPGPIO_GPION_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPION_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPION_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOP_MASK        ((uint32_t)0x00002000u)
#define SYSCTL_PPGPIO_R_GPIOP_BIT         (13u)
#define SYSCTL_PPGPIO_R_GPIOP_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOP_PRESENT     ((uint32_t)0x00002000u)

#define SYSCTL_PPGPIO_GPIOP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOP_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOP_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPGPIO_R_GPIOQ_MASK        ((uint32_t)0x00004000u)
#define SYSCTL_PPGPIO_R_GPIOQ_BIT         (14u)
#define SYSCTL_PPGPIO_R_GPIOQ_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_R_GPIOQ_PRESENT     ((uint32_t)0x00004000u)

#define SYSCTL_PPGPIO_GPIOQ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPGPIO_GPIOQ_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPGPIO_GPIOQ_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************29 PPDMA *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPDMA_R_UDMA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPDMA_R_UDMA_BIT         (0u)
#define SYSCTL_PPDMA_R_UDMA_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPDMA_R_UDMA_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPDMA_UDMA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPDMA_UDMA_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPDMA_UDMA_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************30 PPHIB *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPHIB_R_HIB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPHIB_R_HIB_BIT         (0u)
#define SYSCTL_PPHIB_R_HIB_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPHIB_R_HIB_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPHIB_HIB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPHIB_HIB_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPHIB_HIB_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************31 PPUART *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPUART_R_UART0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_R_UART0_BIT         (0u)
#define SYSCTL_PPUART_R_UART0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPUART_UART0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPUART_R_UART1_BIT         (1u)
#define SYSCTL_PPUART_R_UART1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPUART_UART1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PPUART_R_UART2_BIT         (2u)
#define SYSCTL_PPUART_R_UART2_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART2_PRESENT     ((uint32_t)0x00000004u)

#define SYSCTL_PPUART_UART2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART2_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART2_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PPUART_R_UART3_BIT         (3u)
#define SYSCTL_PPUART_R_UART3_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART3_PRESENT     ((uint32_t)0x00000008u)

#define SYSCTL_PPUART_UART3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART3_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART3_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_PPUART_R_UART4_BIT         (4u)
#define SYSCTL_PPUART_R_UART4_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART4_PRESENT     ((uint32_t)0x00000010u)

#define SYSCTL_PPUART_UART4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART4_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART4_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_PPUART_R_UART5_BIT         (5u)
#define SYSCTL_PPUART_R_UART5_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART5_PRESENT     ((uint32_t)0x00000020u)

#define SYSCTL_PPUART_UART5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART5_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART5_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART6_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_PPUART_R_UART6_BIT         (6u)
#define SYSCTL_PPUART_R_UART6_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART6_PRESENT     ((uint32_t)0x00000040u)

#define SYSCTL_PPUART_UART6_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART6_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART6_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPUART_R_UART7_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_PPUART_R_UART7_BIT         (7u)
#define SYSCTL_PPUART_R_UART7_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_R_UART7_PRESENT     ((uint32_t)0x00000080u)

#define SYSCTL_PPUART_UART7_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUART_UART7_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUART_UART7_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************32 PPSSI *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPSSI_R_SSI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPSSI_R_SSI0_BIT         (0u)
#define SYSCTL_PPSSI_R_SSI0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_R_SSI0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPSSI_SSI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPSSI_SSI0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_SSI0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPSSI_R_SSI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPSSI_R_SSI1_BIT         (1u)
#define SYSCTL_PPSSI_R_SSI1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_R_SSI1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPSSI_SSI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPSSI_SSI1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_SSI1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPSSI_R_SSI2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PPSSI_R_SSI2_BIT         (2u)
#define SYSCTL_PPSSI_R_SSI2_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_R_SSI2_PRESENT     ((uint32_t)0x00000004u)

#define SYSCTL_PPSSI_SSI2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPSSI_SSI2_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_SSI2_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPSSI_R_SSI3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PPSSI_R_SSI3_BIT         (3u)
#define SYSCTL_PPSSI_R_SSI3_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_R_SSI3_PRESENT     ((uint32_t)0x00000008u)

#define SYSCTL_PPSSI_SSI3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPSSI_SSI3_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPSSI_SSI3_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************33 PPI2C *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPI2C_R_I2C0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPI2C_R_I2C0_BIT         (0u)
#define SYSCTL_PPI2C_R_I2C0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_R_I2C0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPI2C_I2C0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPI2C_I2C0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_I2C0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPI2C_R_I2C1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPI2C_R_I2C1_BIT         (1u)
#define SYSCTL_PPI2C_R_I2C1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_R_I2C1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPI2C_I2C1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPI2C_I2C1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_I2C1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPI2C_R_I2C2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PPI2C_R_I2C2_BIT         (2u)
#define SYSCTL_PPI2C_R_I2C2_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_R_I2C2_PRESENT     ((uint32_t)0x00000004u)

#define SYSCTL_PPI2C_I2C2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPI2C_I2C2_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_I2C2_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPI2C_R_I2C3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PPI2C_R_I2C3_BIT         (3u)
#define SYSCTL_PPI2C_R_I2C3_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_R_I2C3_PRESENT     ((uint32_t)0x00000008u)

#define SYSCTL_PPI2C_I2C3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPI2C_I2C3_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_I2C3_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPI2C_R_I2C4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_PPI2C_R_I2C4_BIT         (4u)
#define SYSCTL_PPI2C_R_I2C4_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_R_I2C4_PRESENT     ((uint32_t)0x00000010u)

#define SYSCTL_PPI2C_I2C4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPI2C_I2C4_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_I2C4_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPI2C_R_I2C5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_PPI2C_R_I2C5_BIT         (5u)
#define SYSCTL_PPI2C_R_I2C5_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_R_I2C5_PRESENT     ((uint32_t)0x00000020u)

#define SYSCTL_PPI2C_I2C5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPI2C_I2C5_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPI2C_I2C5_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************34 PPUSB *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPUSB_R_USB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPUSB_R_USB_BIT         (0u)
#define SYSCTL_PPUSB_R_USB_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPUSB_R_USB_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPUSB_USB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPUSB_USB_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPUSB_USB_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************35 PPCAN *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPCAN_R_CAN0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPCAN_R_CAN0_BIT         (0u)
#define SYSCTL_PPCAN_R_CAN0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPCAN_R_CAN0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPCAN_CAN0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPCAN_CAN0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPCAN_CAN0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPCAN_R_CAN1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPCAN_R_CAN1_BIT         (1u)
#define SYSCTL_PPCAN_R_CAN1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPCAN_R_CAN1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPCAN_CAN1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPCAN_CAN1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPCAN_CAN1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************36 PPADC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPADC_R_ADC0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPADC_R_ADC0_BIT         (0u)
#define SYSCTL_PPADC_R_ADC0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPADC_R_ADC0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPADC_ADC0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPADC_ADC0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPADC_ADC0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPADC_R_ADC1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPADC_R_ADC1_BIT         (1u)
#define SYSCTL_PPADC_R_ADC1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPADC_R_ADC1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPADC_ADC1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPADC_ADC1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPADC_ADC1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************37 PPACMP *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPACMP_R_ACMP_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPACMP_R_ACMP_BIT         (0u)
#define SYSCTL_PPACMP_R_ACMP_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPACMP_R_ACMP_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPACMP_ACMP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPACMP_ACMP_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPACMP_ACMP_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/****************************************************************************************
************************************38 PPPWM *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPPWM_R_PWM0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPPWM_R_PWM0_BIT         (0u)
#define SYSCTL_PPPWM_R_PWM0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPPWM_R_PWM0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPPWM_PWM0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPPWM_PWM0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPPWM_PWM0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPPWM_R_PWM1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPPWM_R_PWM1_BIT         (1u)
#define SYSCTL_PPPWM_R_PWM1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPPWM_R_PWM1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPPWM_PWM1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPPWM_PWM1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPPWM_PWM1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************39 PPQEI *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPQEI_R_QEI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPQEI_R_QEI0_BIT         (0u)
#define SYSCTL_PPQEI_R_QEI0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPQEI_R_QEI0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPQEI_QEI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPQEI_QEI0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPQEI_QEI0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPQEI_R_QEI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPQEI_R_QEI1_BIT         (1u)
#define SYSCTL_PPQEI_R_QEI1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPQEI_R_QEI1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPQEI_QEI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPQEI_QEI1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPQEI_QEI1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************40 PPEEPROM *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPEEPROM_R_EEPROM_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPEEPROM_R_EEPROM_BIT         (0u)
#define SYSCTL_PPEEPROM_R_EEPROM_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPEEPROM_R_EEPROM_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPEEPROM_EEPROM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPEEPROM_EEPROM_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPEEPROM_EEPROM_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/**********************************************************************************
************************************41 PPWTIMER *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PPWTIMER_R_WTIMER0_BIT         (0u)
#define SYSCTL_PPWTIMER_R_WTIMER0_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_R_WTIMER0_PRESENT     ((uint32_t)0x00000001u)

#define SYSCTL_PPWTIMER_WTIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPWTIMER_WTIMER0_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_WTIMER0_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_PPWTIMER_R_WTIMER1_BIT         (1u)
#define SYSCTL_PPWTIMER_R_WTIMER1_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_R_WTIMER1_PRESENT     ((uint32_t)0x00000002u)

#define SYSCTL_PPWTIMER_WTIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPWTIMER_WTIMER1_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_WTIMER1_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_PPWTIMER_R_WTIMER2_BIT         (2u)
#define SYSCTL_PPWTIMER_R_WTIMER2_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_R_WTIMER2_PRESENT     ((uint32_t)0x00000004u)

#define SYSCTL_PPWTIMER_WTIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPWTIMER_WTIMER2_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_WTIMER2_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_PPWTIMER_R_WTIMER3_BIT         (3u)
#define SYSCTL_PPWTIMER_R_WTIMER3_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_R_WTIMER3_PRESENT     ((uint32_t)0x00000008u)

#define SYSCTL_PPWTIMER_WTIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPWTIMER_WTIMER3_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_WTIMER3_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_PPWTIMER_R_WTIMER4_BIT         (4u)
#define SYSCTL_PPWTIMER_R_WTIMER4_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_R_WTIMER4_PRESENT     ((uint32_t)0x00000010u)

#define SYSCTL_PPWTIMER_WTIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPWTIMER_WTIMER4_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_WTIMER4_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PPWTIMER_R_WTIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_PPWTIMER_R_WTIMER5_BIT         (5u)
#define SYSCTL_PPWTIMER_R_WTIMER5_NOPRESENT   ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_R_WTIMER5_PRESENT     ((uint32_t)0x00000020u)

#define SYSCTL_PPWTIMER_WTIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_PPWTIMER_WTIMER5_NOPRESENT     ((uint32_t)0x00000000u)
#define SYSCTL_PPWTIMER_WTIMER5_PRESENT       ((uint32_t)0x00000001u)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PP_H_ */
