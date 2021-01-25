/**
 *
 * @file DMA_RegisterDefines_CHMAP.h
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
 * @verbatim 28 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_CHMAP_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_CHMAP_H_

#include <xUtils/Standard/Standard.h>

/**************************************************************************************
************************************* 23 DMACHMAP0 *************************************
****************************************************************************************/

/*--------*/
#define DMA_DMACHMAP0_R_CH0SEL_MASK         ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP0_R_CH0SEL_BIT          ((uint32_t)0U)
#define DMA_DMACHMAP0_R_CH0SEL_USB0_EP1RX   ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_R_CH0SEL_UART2_RX     ((uint32_t)0x00000001U)
#define DMA_DMACHMAP0_R_CH0SEL_SOFTWARE     ((uint32_t)0x00000002U)
#define DMA_DMACHMAP0_R_CH0SEL_TIMER4A      ((uint32_t)0x00000003U)

#define DMA_DMACHMAP0_CH0SEL_MASK           ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP0_CH0SEL_USB0_EP1RX     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_CH0SEL_UART2_RX       ((uint32_t)0x00000001U)
#define DMA_DMACHMAP0_CH0SEL_SOFTWARE       ((uint32_t)0x00000002U)
#define DMA_DMACHMAP0_CH0SEL_TIMER4A        ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP0_R_CH1SEL_MASK         ((uint32_t)0x000000F0U)
#define DMA_DMACHMAP0_R_CH1SEL_BIT          ((uint32_t)4U)
#define DMA_DMACHMAP0_R_CH1SEL_USB0_EP1TX   ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_R_CH1SEL_UART2_TX     ((uint32_t)0x00000010U)
#define DMA_DMACHMAP0_R_CH1SEL_SOFTWARE     ((uint32_t)0x00000020U)
#define DMA_DMACHMAP0_R_CH1SEL_TIMER4B      ((uint32_t)0x00000030U)

#define DMA_DMACHMAP0_CH1SEL_MASK           ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP0_CH1SEL_USB0_EP1TX     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_CH1SEL_UART2_TX       ((uint32_t)0x00000001U)
#define DMA_DMACHMAP0_CH1SEL_SOFTWARE       ((uint32_t)0x00000002U)
#define DMA_DMACHMAP0_CH1SEL_TIMER4B        ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP0_R_CH2SEL_MASK         ((uint32_t)0x00000F00U)
#define DMA_DMACHMAP0_R_CH2SEL_BIT          ((uint32_t)8U)
#define DMA_DMACHMAP0_R_CH2SEL_USB0_EP2RX   ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_R_CH2SEL_TIMER3A      ((uint32_t)0x00000100U)
#define DMA_DMACHMAP0_R_CH2SEL_SOFTWARE     ((uint32_t)0x00000200U)

#define DMA_DMACHMAP0_CH2SEL_MASK           ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP0_CH2SEL_USB0_EP2RX     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_CH2SEL_TIMER3A        ((uint32_t)0x00000001U)
#define DMA_DMACHMAP0_CH2SEL_SOFTWARE       ((uint32_t)0x00000002U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP0_R_CH3SEL_MASK         ((uint32_t)0x0000F000U)
#define DMA_DMACHMAP0_R_CH3SEL_BIT          ((uint32_t)12U)
#define DMA_DMACHMAP0_R_CH3SEL_USB0_EP2TX   ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_R_CH3SEL_TIMER3B      ((uint32_t)0x00001000U)
#define DMA_DMACHMAP0_R_CH3SEL_SOFTWARE     ((uint32_t)0x00002000U)

#define DMA_DMACHMAP0_CH3SEL_MASK           ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP0_CH3SEL_USB0_EP2TX     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_CH3SEL_TIMER3B        ((uint32_t)0x00000001U)
#define DMA_DMACHMAP0_CH3SEL_SOFTWARE       ((uint32_t)0x00000002U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP0_R_CH4SEL_MASK         ((uint32_t)0x000F0000U)
#define DMA_DMACHMAP0_R_CH4SEL_BIT          ((uint32_t)16U)
#define DMA_DMACHMAP0_R_CH4SEL_USB0_EP3RX   ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_R_CH4SEL_TIMER2A      ((uint32_t)0x00010000U)
#define DMA_DMACHMAP0_R_CH4SEL_SOFTWARE     ((uint32_t)0x00020000U)
#define DMA_DMACHMAP0_R_CH4SEL_GPIOA        ((uint32_t)0x00030000U)

#define DMA_DMACHMAP0_CH4SEL_MASK           ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP0_CH4SEL_USB0_EP3RX     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_CH4SEL_TIMER2A        ((uint32_t)0x00000001U)
#define DMA_DMACHMAP0_CH4SEL_SOFTWARE       ((uint32_t)0x00000002U)
#define DMA_DMACHMAP0_CH4SEL_GPIOA          ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP0_R_CH5SEL_MASK         ((uint32_t)0x00F00000U)
#define DMA_DMACHMAP0_R_CH5SEL_BIT          ((uint32_t)20U)
#define DMA_DMACHMAP0_R_CH5SEL_USB0_EP3TX   ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_R_CH5SEL_TIMER2B      ((uint32_t)0x00100000U)
#define DMA_DMACHMAP0_R_CH5SEL_SOFTWARE     ((uint32_t)0x00200000U)
#define DMA_DMACHMAP0_R_CH5SEL_GPIOB        ((uint32_t)0x00300000U)

#define DMA_DMACHMAP0_CH5SEL_MASK           ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP0_CH5SEL_USB0_EP3TX     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_CH5SEL_TIMER2B        ((uint32_t)0x00000001U)
#define DMA_DMACHMAP0_CH5SEL_SOFTWARE       ((uint32_t)0x00000002U)
#define DMA_DMACHMAP0_CH5SEL_GPIOB          ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP0_R_CH6SEL_MASK         ((uint32_t)0x0F000000U)
#define DMA_DMACHMAP0_R_CH6SEL_BIT          ((uint32_t)24U)
#define DMA_DMACHMAP0_R_CH6SEL_SOFTWARE     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_R_CH6SEL_TIMER2A      ((uint32_t)0x01000000U)
#define DMA_DMACHMAP0_R_CH6SEL_UART5_RX     ((uint32_t)0x02000000U)
#define DMA_DMACHMAP0_R_CH6SEL_GPIOC        ((uint32_t)0x03000000U)

#define DMA_DMACHMAP0_CH6SEL_MASK           ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP0_CH6SEL_SOFTWARE       ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_CH6SEL_TIMER2A        ((uint32_t)0x00000001U)
#define DMA_DMACHMAP0_CH6SEL_UART5_RX       ((uint32_t)0x00000002U)
#define DMA_DMACHMAP0_CH6SEL_GPIOC          ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP0_R_CH7SEL_MASK         ((uint32_t)0xF0000000U)
#define DMA_DMACHMAP0_R_CH7SEL_BIT          ((uint32_t)28U)
#define DMA_DMACHMAP0_R_CH7SEL_SOFTWARE     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_R_CH7SEL_TIMER2B      ((uint32_t)0x10000000U)
#define DMA_DMACHMAP0_R_CH7SEL_UART5_TX     ((uint32_t)0x20000000U)
#define DMA_DMACHMAP0_R_CH7SEL_GPIOD        ((uint32_t)0x30000000U)

#define DMA_DMACHMAP0_CH7SEL_MASK           ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP0_CH7SEL_SOFTWARE       ((uint32_t)0x00000000U)
#define DMA_DMACHMAP0_CH7SEL_TIMER2B        ((uint32_t)0x00000001U)
#define DMA_DMACHMAP0_CH7SEL_UART5_TX       ((uint32_t)0x00000002U)
#define DMA_DMACHMAP0_CH7SEL_GPIOD          ((uint32_t)0x00000003U)
/*--------*/

/**************************************************************************************
************************************* 24 DMACHMAP1 *************************************
****************************************************************************************/

/*--------*/
#define DMA_DMACHMAP1_R_CH8SEL_MASK         ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP1_R_CH8SEL_BIT          ((uint32_t)0U)
#define DMA_DMACHMAP1_R_CH8SEL_UART0_RX     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_R_CH8SEL_UART1_RX     ((uint32_t)0x00000001U)
#define DMA_DMACHMAP1_R_CH8SEL_SOFTWARE     ((uint32_t)0x00000002U)
#define DMA_DMACHMAP1_R_CH8SEL_TIMER5A      ((uint32_t)0x00000003U)

#define DMA_DMACHMAP1_CH8SEL_MASK           ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP1_CH8SEL_UART0_RX       ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_CH8SEL_UART1_RX       ((uint32_t)0x00000001U)
#define DMA_DMACHMAP1_CH8SEL_SOFTWARE       ((uint32_t)0x00000002U)
#define DMA_DMACHMAP1_CH8SEL_TIMER5A        ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP1_R_CH9SEL_MASK         ((uint32_t)0x000000F0U)
#define DMA_DMACHMAP1_R_CH9SEL_BIT          ((uint32_t)4U)
#define DMA_DMACHMAP1_R_CH9SEL_UART0_TX     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_R_CH9SEL_UART1_TX     ((uint32_t)0x00000010U)
#define DMA_DMACHMAP1_R_CH9SEL_SOFTWARE     ((uint32_t)0x00000020U)
#define DMA_DMACHMAP1_R_CH9SEL_TIMER5B      ((uint32_t)0x00000030U)

#define DMA_DMACHMAP1_CH9SEL_MASK           ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP1_CH9SEL_UART0_TX       ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_CH9SEL_UART1_TX       ((uint32_t)0x00000001U)
#define DMA_DMACHMAP1_CH9SEL_SOFTWARE       ((uint32_t)0x00000002U)
#define DMA_DMACHMAP1_CH9SEL_TIMER5B        ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP1_R_CH10SEL_MASK        ((uint32_t)0x00000F00U)
#define DMA_DMACHMAP1_R_CH10SEL_BIT         ((uint32_t)8U)
#define DMA_DMACHMAP1_R_CH10SEL_SSI0_RX     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_R_CH10SEL_SSI1_RX     ((uint32_t)0x00000100U)
#define DMA_DMACHMAP1_R_CH10SEL_UART6_RX    ((uint32_t)0x00000200U)
#define DMA_DMACHMAP1_R_CH10SEL_WTIMER0A    ((uint32_t)0x00000300U)
#define DMA_DMACHMAP1_R_CH10SEL_SOFTWARE    ((uint32_t)0x00000400U)

#define DMA_DMACHMAP1_CH10SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP1_CH10SEL_UART0_RX      ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_CH10SEL_UART1_RX      ((uint32_t)0x00000001U)
#define DMA_DMACHMAP1_CH10SEL_UART6_RX      ((uint32_t)0x00000002U)
#define DMA_DMACHMAP1_CH10SEL_WTIMER0A      ((uint32_t)0x00000003U)
#define DMA_DMACHMAP1_CH10SEL_SOFTWARE      ((uint32_t)0x00000004U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP1_R_CH11SEL_MASK        ((uint32_t)0x0000F000U)
#define DMA_DMACHMAP1_R_CH11SEL_BIT         ((uint32_t)12U)
#define DMA_DMACHMAP1_R_CH11SEL_SSI0_TX     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_R_CH11SEL_SSI1_TX     ((uint32_t)0x00001000U)
#define DMA_DMACHMAP1_R_CH11SEL_UART6_TX    ((uint32_t)0x00002000U)
#define DMA_DMACHMAP1_R_CH11SEL_WTIMER0B    ((uint32_t)0x00003000U)
#define DMA_DMACHMAP1_R_CH11SEL_SOFTWARE    ((uint32_t)0x00004000U)

#define DMA_DMACHMAP1_CH11SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP1_CH11SEL_UART0_TX      ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_CH11SEL_UART1_TX      ((uint32_t)0x00000001U)
#define DMA_DMACHMAP1_CH11SEL_UART6_TX      ((uint32_t)0x00000002U)
#define DMA_DMACHMAP1_CH11SEL_WTIMER0B      ((uint32_t)0x00000003U)
#define DMA_DMACHMAP1_CH11SEL_SOFTWARE      ((uint32_t)0x00000004U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP1_R_CH12SEL_MASK        ((uint32_t)0x000F0000U)
#define DMA_DMACHMAP1_R_CH12SEL_BIT         ((uint32_t)16U)
#define DMA_DMACHMAP1_R_CH12SEL_SOFTWARE    ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_R_CH12SEL_UART2_RX    ((uint32_t)0x00010000U)
#define DMA_DMACHMAP1_R_CH12SEL_SSI2_RX     ((uint32_t)0x00020000U)
#define DMA_DMACHMAP1_R_CH12SEL_WTIMER1A    ((uint32_t)0x00030000U)

#define DMA_DMACHMAP1_CH12SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP1_CH12SEL_SOFTWARE      ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_CH12SEL_UART2_RX      ((uint32_t)0x00000001U)
#define DMA_DMACHMAP1_CH12SEL_SSI2_RX       ((uint32_t)0x00000002U)
#define DMA_DMACHMAP1_CH12SEL_WTIMER1A      ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP1_R_CH13SEL_MASK        ((uint32_t)0x00F00000U)
#define DMA_DMACHMAP1_R_CH13SEL_BIT         ((uint32_t)20U)
#define DMA_DMACHMAP1_R_CH13SEL_SOFTWARE    ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_R_CH13SEL_UART2_TX    ((uint32_t)0x00100000U)
#define DMA_DMACHMAP1_R_CH13SEL_SSI2_TX     ((uint32_t)0x00200000U)
#define DMA_DMACHMAP1_R_CH13SEL_WTIMER1B    ((uint32_t)0x00300000U)

#define DMA_DMACHMAP1_CH13SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP1_CH13SEL_SOFTWARE      ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_CH13SEL_UART2_TX      ((uint32_t)0x00000001U)
#define DMA_DMACHMAP1_CH13SEL_SSI2_TX       ((uint32_t)0x00000002U)
#define DMA_DMACHMAP1_CH13SEL_WTIMER1B      ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP1_R_CH14SEL_MASK        ((uint32_t)0x0F000000U)
#define DMA_DMACHMAP1_R_CH14SEL_BIT         ((uint32_t)24U)
#define DMA_DMACHMAP1_R_CH14SEL_ADC0_SS0    ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_R_CH14SEL_TIMER2A     ((uint32_t)0x01000000U)
#define DMA_DMACHMAP1_R_CH14SEL_SSI3_RX     ((uint32_t)0x02000000U)
#define DMA_DMACHMAP1_R_CH14SEL_GPIOE       ((uint32_t)0x03000000U)
#define DMA_DMACHMAP1_R_CH14SEL_SOFTWARE    ((uint32_t)0x04000000U)

#define DMA_DMACHMAP1_CH14SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP1_CH14SEL_ADC0_SS0      ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_CH14SEL_TIMER2A       ((uint32_t)0x00000001U)
#define DMA_DMACHMAP1_CH14SEL_SSI3_RX       ((uint32_t)0x00000002U)
#define DMA_DMACHMAP1_CH14SEL_GPIOE         ((uint32_t)0x00000003U)
#define DMA_DMACHMAP1_CH14SEL_SOFTWARE      ((uint32_t)0x00000004U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP1_R_CH15SEL_MASK        ((uint32_t)0xF0000000U)
#define DMA_DMACHMAP1_R_CH15SEL_BIT         ((uint32_t)28U)
#define DMA_DMACHMAP1_R_CH15SEL_ADC0_SS1    ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_R_CH15SEL_TIMER2B     ((uint32_t)0x10000000U)
#define DMA_DMACHMAP1_R_CH15SEL_SSI3_TX     ((uint32_t)0x20000000U)
#define DMA_DMACHMAP1_R_CH15SEL_GPIOF       ((uint32_t)0x30000000U)
#define DMA_DMACHMAP1_R_CH15SEL_SOFTWARE    ((uint32_t)0x40000000U)

#define DMA_DMACHMAP1_CH15SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP1_CH15SEL_ADC0_SS1      ((uint32_t)0x00000000U)
#define DMA_DMACHMAP1_CH15SEL_TIMER2B       ((uint32_t)0x00000001U)
#define DMA_DMACHMAP1_CH15SEL_SSI3_TX       ((uint32_t)0x00000002U)
#define DMA_DMACHMAP1_CH15SEL_GPIOF         ((uint32_t)0x00000003U)
#define DMA_DMACHMAP1_CH15SEL_SOFTWARE      ((uint32_t)0x00000004U)
/*--------*/

/**************************************************************************************
************************************* 25 DMACHMAP2 *************************************
****************************************************************************************/

/*--------*/
#define DMA_DMACHMAP2_R_CH16SEL_MASK        ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP2_R_CH16SEL_BIT         ((uint32_t)0U)
#define DMA_DMACHMAP2_R_CH16SEL_ADC0_SS2    ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_R_CH16SEL_SOFTWARE    ((uint32_t)0x00000001U)
#define DMA_DMACHMAP2_R_CH16SEL_UART3_RX    ((uint32_t)0x00000002U)
#define DMA_DMACHMAP2_R_CH16SEL_WTIMER2A    ((uint32_t)0x00000003U)

#define DMA_DMACHMAP2_CH16SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP2_CH16SEL_ADC0_SS2      ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_CH16SEL_SOFTWARE      ((uint32_t)0x00000001U)
#define DMA_DMACHMAP2_CH16SEL_UART3_RX      ((uint32_t)0x00000002U)
#define DMA_DMACHMAP2_CH16SEL_WTIMER2A      ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP2_R_CH17SEL_MASK        ((uint32_t)0x000000F0U)
#define DMA_DMACHMAP2_R_CH17SEL_BIT         ((uint32_t)4U)
#define DMA_DMACHMAP2_R_CH17SEL_ADC0_SS3    ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_R_CH17SEL_SOFTWARE    ((uint32_t)0x00000010U)
#define DMA_DMACHMAP2_R_CH17SEL_UART3_TX    ((uint32_t)0x00000020U)
#define DMA_DMACHMAP2_R_CH17SEL_WTIMER2B    ((uint32_t)0x00000030U)

#define DMA_DMACHMAP2_CH17SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP2_CH17SEL_ADC0_SS3      ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_CH17SEL_SOFTWARE      ((uint32_t)0x00000001U)
#define DMA_DMACHMAP2_CH17SEL_UART3_TX      ((uint32_t)0x00000002U)
#define DMA_DMACHMAP2_CH17SEL_WTIMER2B      ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP2_R_CH18SEL_MASK        ((uint32_t)0x00000F00U)
#define DMA_DMACHMAP2_R_CH18SEL_BIT         ((uint32_t)8U)
#define DMA_DMACHMAP2_R_CH18SEL_TIMER0A     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_R_CH18SEL_TIMER1A     ((uint32_t)0x00000100U)
#define DMA_DMACHMAP2_R_CH18SEL_UART4_RX    ((uint32_t)0x00000200U)
#define DMA_DMACHMAP2_R_CH18SEL_GPIOB       ((uint32_t)0x00000300U)
#define DMA_DMACHMAP2_R_CH18SEL_SOFTWARE    ((uint32_t)0x00000400U)

#define DMA_DMACHMAP2_CH18SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP2_CH18SEL_TIMER0A       ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_CH18SEL_TIMER1A       ((uint32_t)0x00000001U)
#define DMA_DMACHMAP2_CH18SEL_UART4_RX      ((uint32_t)0x00000002U)
#define DMA_DMACHMAP2_CH18SEL_GPIOB         ((uint32_t)0x00000003U)
#define DMA_DMACHMAP2_CH18SEL_SOFTWARE      ((uint32_t)0x00000004U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP2_R_CH19SEL_MASK        ((uint32_t)0x0000F000U)
#define DMA_DMACHMAP2_R_CH19SEL_BIT         ((uint32_t)12U)
#define DMA_DMACHMAP2_R_CH19SEL_TIMER0B     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_R_CH19SEL_TIMER1B     ((uint32_t)0x00001000U)
#define DMA_DMACHMAP2_R_CH19SEL_UART4_TX    ((uint32_t)0x00002000U)
#define DMA_DMACHMAP2_R_CH19SEL_SOFTWARE    ((uint32_t)0x00003000U)

#define DMA_DMACHMAP2_CH19SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP2_CH19SEL_TIMER0B       ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_CH19SEL_TIMER1B       ((uint32_t)0x00000001U)
#define DMA_DMACHMAP2_CH19SEL_UART4_TX      ((uint32_t)0x00000002U)
#define DMA_DMACHMAP2_CH19SEL_SOFTWARE      ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP2_R_CH20SEL_MASK        ((uint32_t)0x000F0000U)
#define DMA_DMACHMAP2_R_CH20SEL_BIT         ((uint32_t)16U)
#define DMA_DMACHMAP2_R_CH20SEL_TIMER1A     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_R_CH20SEL_SOFTWARE    ((uint32_t)0x00010000U)
#define DMA_DMACHMAP2_R_CH20SEL_UART7_RX    ((uint32_t)0x00020000U)

#define DMA_DMACHMAP2_CH20SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP2_CH20SEL_TIMER1A       ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_CH20SEL_SOFTWARE      ((uint32_t)0x00000001U)
#define DMA_DMACHMAP2_CH20SEL_UART7_RX      ((uint32_t)0x00000002U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP2_R_CH21SEL_MASK        ((uint32_t)0x00F00000U)
#define DMA_DMACHMAP2_R_CH21SEL_BIT         ((uint32_t)20U)
#define DMA_DMACHMAP2_R_CH21SEL_TIMER1B     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_R_CH21SEL_SOFTWARE    ((uint32_t)0x00100000U)
#define DMA_DMACHMAP2_R_CH21SEL_UART7_TX    ((uint32_t)0x00200000U)

#define DMA_DMACHMAP2_CH21SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP2_CH21SEL_TIMER1B       ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_CH21SEL_SOFTWARE      ((uint32_t)0x00000001U)
#define DMA_DMACHMAP2_CH21SEL_UART7_TX      ((uint32_t)0x00000002U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP2_R_CH22SEL_MASK        ((uint32_t)0x0F000000U)
#define DMA_DMACHMAP2_R_CH22SEL_BIT         ((uint32_t)24U)
#define DMA_DMACHMAP2_R_CH22SEL_UART1_RX    ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_R_CH22SEL_SOFTWARE    ((uint32_t)0x01000000U)

#define DMA_DMACHMAP2_CH22SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP2_CH22SEL_UART1_RX      ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_CH22SEL_SOFTWARE      ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP2_R_CH23SEL_MASK        ((uint32_t)0xF0000000U)
#define DMA_DMACHMAP2_R_CH23SEL_BIT         ((uint32_t)28U)
#define DMA_DMACHMAP2_R_CH23SEL_UART1_TX    ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_R_CH23SEL_SOFTWARE    ((uint32_t)0x10000000U)

#define DMA_DMACHMAP2_CH23SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP2_CH23SEL_UART1_TX      ((uint32_t)0x00000000U)
#define DMA_DMACHMAP2_CH23SEL_SOFTWARE      ((uint32_t)0x00000001U)
/*--------*/


/**************************************************************************************
************************************* 26 DMACHMAP3 *************************************
****************************************************************************************/

/*--------*/
#define DMA_DMACHMAP3_R_CH24SEL_MASK        ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP3_R_CH24SEL_BIT         ((uint32_t)0U)
#define DMA_DMACHMAP3_R_CH24SEL_SSI1_RX     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP3_R_CH24SEL_ADC1_SS0    ((uint32_t)0x00000001U)
#define DMA_DMACHMAP3_R_CH24SEL_SOFTWARE    ((uint32_t)0x00000002U)
#define DMA_DMACHMAP3_R_CH24SEL_WTIMER3A    ((uint32_t)0x00000003U)

#define DMA_DMACHMAP3_CH24SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP3_CH24SEL_SSI1_RX       ((uint32_t)0x00000000U)
#define DMA_DMACHMAP3_CH24SEL_ADC1_SS0      ((uint32_t)0x00000001U)
#define DMA_DMACHMAP3_CH24SEL_SOFTWARE      ((uint32_t)0x00000002U)
#define DMA_DMACHMAP3_CH24SEL_WTIMER3A      ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP3_R_CH25SEL_MASK        ((uint32_t)0x000000F0U)
#define DMA_DMACHMAP3_R_CH25SEL_BIT         ((uint32_t)4U)
#define DMA_DMACHMAP3_R_CH25SEL_SSI1_TX     ((uint32_t)0x00000000U)
#define DMA_DMACHMAP3_R_CH25SEL_ADC1_SS1    ((uint32_t)0x00000010U)
#define DMA_DMACHMAP3_R_CH25SEL_SOFTWARE    ((uint32_t)0x00000020U)
#define DMA_DMACHMAP3_R_CH25SEL_WTIMER3B    ((uint32_t)0x00000030U)

#define DMA_DMACHMAP3_CH25SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP3_CH25SEL_SSI1_TX       ((uint32_t)0x00000000U)
#define DMA_DMACHMAP3_CH25SEL_ADC1_SS1      ((uint32_t)0x00000001U)
#define DMA_DMACHMAP3_CH25SEL_SOFTWARE      ((uint32_t)0x00000002U)
#define DMA_DMACHMAP3_CH25SEL_WTIMER3B      ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP3_R_CH26SEL_MASK        ((uint32_t)0x00000F00U)
#define DMA_DMACHMAP3_R_CH26SEL_BIT         ((uint32_t)8U)
#define DMA_DMACHMAP3_R_CH26SEL_SOFTWARE    ((uint32_t)0x00000000U)
#define DMA_DMACHMAP3_R_CH26SEL_ADC1_SS2    ((uint32_t)0x00000100U)
#define DMA_DMACHMAP3_R_CH26SEL_WTIMER4A    ((uint32_t)0x00000300U)

#define DMA_DMACHMAP3_CH26SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP3_CH26SEL_SOFTWARE      ((uint32_t)0x00000000U)
#define DMA_DMACHMAP3_CH26SEL_ADC1_SS2      ((uint32_t)0x00000001U)
#define DMA_DMACHMAP3_CH26SEL_WTIMER4A      ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP3_R_CH27SEL_MASK        ((uint32_t)0x0000F000U)
#define DMA_DMACHMAP3_R_CH27SEL_BIT         ((uint32_t)12U)
#define DMA_DMACHMAP3_R_CH27SEL_SOFTWARE    ((uint32_t)0x00000000U)
#define DMA_DMACHMAP3_R_CH27SEL_ADC1_SS3    ((uint32_t)0x00001000U)
#define DMA_DMACHMAP3_R_CH27SEL_WTIMER4B    ((uint32_t)0x00003000U)

#define DMA_DMACHMAP3_CH27SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP3_CH27SEL_SOFTWARE      ((uint32_t)0x00000000U)
#define DMA_DMACHMAP3_CH27SEL_ADC1_SS3      ((uint32_t)0x00000001U)
#define DMA_DMACHMAP3_CH27SEL_WTIMER4B      ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP3_R_CH28SEL_MASK        ((uint32_t)0x000F0000U)
#define DMA_DMACHMAP3_R_CH28SEL_BIT         ((uint32_t)16U)
#define DMA_DMACHMAP3_R_CH28SEL_SOFTWARE    ((uint32_t)0x00000000U)
#define DMA_DMACHMAP3_R_CH28SEL_WTIMER5A    ((uint32_t)0x00030000U)

#define DMA_DMACHMAP3_CH28SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP3_CH28SEL_SOFTWARE      ((uint32_t)0x00000000U)
#define DMA_DMACHMAP3_CH28SEL_WTIMER5A      ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP3_R_CH29SEL_MASK        ((uint32_t)0x00F00000U)
#define DMA_DMACHMAP3_R_CH29SEL_BIT         ((uint32_t)20U)
#define DMA_DMACHMAP3_R_CH29SEL_SOFTWARE    ((uint32_t)0x00000000U)
#define DMA_DMACHMAP3_R_CH29SEL_WTIMER5B    ((uint32_t)0x00300000U)

#define DMA_DMACHMAP3_CH29SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP3_CH29SEL_SOFTWARE      ((uint32_t)0x00000000U)
#define DMA_DMACHMAP3_CH29SEL_WTIMER5B      ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP3_R_CH30SEL_MASK        ((uint32_t)0x0F000000U)
#define DMA_DMACHMAP3_R_CH30SEL_BIT         ((uint32_t)24U)
#define DMA_DMACHMAP3_R_CH30SEL_SOFTWARE    ((uint32_t)0x00000000U)

#define DMA_DMACHMAP3_CH30SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP3_CH30SEL_SOFTWARE      ((uint32_t)0x00000000U)
/*--------*/

/*--------*/
#define DMA_DMACHMAP3_R_CH31SEL_MASK        ((uint32_t)0xF0000000U)
#define DMA_DMACHMAP3_R_CH31SEL_BIT         ((uint32_t)28U)
#define DMA_DMACHMAP3_R_CH31SEL_SOFTWARE    ((uint32_t)0x00000000U)

#define DMA_DMACHMAP3_CH31SEL_MASK          ((uint32_t)0x0000000FU)
#define DMA_DMACHMAP3_CH31SEL_RESERVED      ((uint32_t)0x00000000U)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_CHMAP_H_ */
