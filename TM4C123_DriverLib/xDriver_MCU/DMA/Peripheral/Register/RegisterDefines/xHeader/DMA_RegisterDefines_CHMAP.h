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
************************************* 23 CHMAP0 *************************************
****************************************************************************************/

/*--------*/
#define DMA_CHMAP0_R_CH0SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP0_R_CH0SEL_BIT    ((uint32_t) 0UL)
#define DMA_CHMAP0_R_CH0SEL_USB0_EP1RX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_R_CH0SEL_UART2_RX    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP0_R_CH0SEL_SOFTWARE    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP0_R_CH0SEL_TIMER4A    ((uint32_t) 0x00000003UL)

#define DMA_CHMAP0_CH0SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP0_CH0SEL_USB0_EP1RX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_CH0SEL_UART2_RX    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP0_CH0SEL_SOFTWARE    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP0_CH0SEL_TIMER4A    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP0_R_CH1SEL_MASK    ((uint32_t) 0x000000F0UL)
#define DMA_CHMAP0_R_CH1SEL_BIT    ((uint32_t) 4UL)
#define DMA_CHMAP0_R_CH1SEL_USB0_EP1TX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_R_CH1SEL_UART2_TX    ((uint32_t) 0x00000010UL)
#define DMA_CHMAP0_R_CH1SEL_SOFTWARE    ((uint32_t) 0x00000020UL)
#define DMA_CHMAP0_R_CH1SEL_TIMER4B    ((uint32_t) 0x00000030UL)

#define DMA_CHMAP0_CH1SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP0_CH1SEL_USB0_EP1TX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_CH1SEL_UART2_TX    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP0_CH1SEL_SOFTWARE    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP0_CH1SEL_TIMER4B    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP0_R_CH2SEL_MASK    ((uint32_t) 0x00000F00UL)
#define DMA_CHMAP0_R_CH2SEL_BIT    ((uint32_t) 8UL)
#define DMA_CHMAP0_R_CH2SEL_USB0_EP2RX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_R_CH2SEL_TIMER3A    ((uint32_t) 0x00000100UL)
#define DMA_CHMAP0_R_CH2SEL_SOFTWARE    ((uint32_t) 0x00000200UL)

#define DMA_CHMAP0_CH2SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP0_CH2SEL_USB0_EP2RX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_CH2SEL_TIMER3A    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP0_CH2SEL_SOFTWARE    ((uint32_t) 0x00000002UL)
/*--------*/

/*--------*/
#define DMA_CHMAP0_R_CH3SEL_MASK    ((uint32_t) 0x0000F000UL)
#define DMA_CHMAP0_R_CH3SEL_BIT    ((uint32_t) 12UL)
#define DMA_CHMAP0_R_CH3SEL_USB0_EP2TX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_R_CH3SEL_TIMER3B    ((uint32_t) 0x00001000UL)
#define DMA_CHMAP0_R_CH3SEL_SOFTWARE    ((uint32_t) 0x00002000UL)

#define DMA_CHMAP0_CH3SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP0_CH3SEL_USB0_EP2TX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_CH3SEL_TIMER3B    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP0_CH3SEL_SOFTWARE    ((uint32_t) 0x00000002UL)
/*--------*/

/*--------*/
#define DMA_CHMAP0_R_CH4SEL_MASK    ((uint32_t) 0x000F0000UL)
#define DMA_CHMAP0_R_CH4SEL_BIT    ((uint32_t) 16UL)
#define DMA_CHMAP0_R_CH4SEL_USB0_EP3RX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_R_CH4SEL_TIMER2A    ((uint32_t) 0x00010000UL)
#define DMA_CHMAP0_R_CH4SEL_SOFTWARE    ((uint32_t) 0x00020000UL)
#define DMA_CHMAP0_R_CH4SEL_GPIOA    ((uint32_t) 0x00030000UL)

#define DMA_CHMAP0_CH4SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP0_CH4SEL_USB0_EP3RX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_CH4SEL_TIMER2A    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP0_CH4SEL_SOFTWARE    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP0_CH4SEL_GPIOA    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP0_R_CH5SEL_MASK    ((uint32_t) 0x00F00000UL)
#define DMA_CHMAP0_R_CH5SEL_BIT    ((uint32_t) 20UL)
#define DMA_CHMAP0_R_CH5SEL_USB0_EP3TX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_R_CH5SEL_TIMER2B    ((uint32_t) 0x00100000UL)
#define DMA_CHMAP0_R_CH5SEL_SOFTWARE    ((uint32_t) 0x00200000UL)
#define DMA_CHMAP0_R_CH5SEL_GPIOB    ((uint32_t) 0x00300000UL)

#define DMA_CHMAP0_CH5SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP0_CH5SEL_USB0_EP3TX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_CH5SEL_TIMER2B    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP0_CH5SEL_SOFTWARE    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP0_CH5SEL_GPIOB    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP0_R_CH6SEL_MASK    ((uint32_t) 0x0F000000UL)
#define DMA_CHMAP0_R_CH6SEL_BIT    ((uint32_t) 24UL)
#define DMA_CHMAP0_R_CH6SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_R_CH6SEL_TIMER2A    ((uint32_t) 0x01000000UL)
#define DMA_CHMAP0_R_CH6SEL_UART5_RX    ((uint32_t) 0x02000000UL)
#define DMA_CHMAP0_R_CH6SEL_GPIOC    ((uint32_t) 0x03000000UL)

#define DMA_CHMAP0_CH6SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP0_CH6SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_CH6SEL_TIMER2A    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP0_CH6SEL_UART5_RX    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP0_CH6SEL_GPIOC    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP0_R_CH7SEL_MASK    ((uint32_t) 0xF0000000UL)
#define DMA_CHMAP0_R_CH7SEL_BIT    ((uint32_t) 28UL)
#define DMA_CHMAP0_R_CH7SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_R_CH7SEL_TIMER2B    ((uint32_t) 0x10000000UL)
#define DMA_CHMAP0_R_CH7SEL_UART5_TX    ((uint32_t) 0x20000000UL)
#define DMA_CHMAP0_R_CH7SEL_GPIOD    ((uint32_t) 0x30000000UL)

#define DMA_CHMAP0_CH7SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP0_CH7SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP0_CH7SEL_TIMER2B    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP0_CH7SEL_UART5_TX    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP0_CH7SEL_GPIOD    ((uint32_t) 0x00000003UL)
/*--------*/

/**************************************************************************************
************************************* 24 CHMAP1 *************************************
****************************************************************************************/

/*--------*/
#define DMA_CHMAP1_R_CH8SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP1_R_CH8SEL_BIT    ((uint32_t) 0UL)
#define DMA_CHMAP1_R_CH8SEL_UART0_RX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_R_CH8SEL_UART1_RX    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP1_R_CH8SEL_SOFTWARE    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP1_R_CH8SEL_TIMER5A    ((uint32_t) 0x00000003UL)

#define DMA_CHMAP1_CH8SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP1_CH8SEL_UART0_RX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_CH8SEL_UART1_RX    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP1_CH8SEL_SOFTWARE    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP1_CH8SEL_TIMER5A    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP1_R_CH9SEL_MASK    ((uint32_t) 0x000000F0UL)
#define DMA_CHMAP1_R_CH9SEL_BIT    ((uint32_t) 4UL)
#define DMA_CHMAP1_R_CH9SEL_UART0_TX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_R_CH9SEL_UART1_TX    ((uint32_t) 0x00000010UL)
#define DMA_CHMAP1_R_CH9SEL_SOFTWARE    ((uint32_t) 0x00000020UL)
#define DMA_CHMAP1_R_CH9SEL_TIMER5B    ((uint32_t) 0x00000030UL)

#define DMA_CHMAP1_CH9SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP1_CH9SEL_UART0_TX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_CH9SEL_UART1_TX    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP1_CH9SEL_SOFTWARE    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP1_CH9SEL_TIMER5B    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP1_R_CH10SEL_MASK    ((uint32_t) 0x00000F00UL)
#define DMA_CHMAP1_R_CH10SEL_BIT    ((uint32_t) 8UL)
#define DMA_CHMAP1_R_CH10SEL_SSI0_RX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_R_CH10SEL_SSI1_RX    ((uint32_t) 0x00000100UL)
#define DMA_CHMAP1_R_CH10SEL_UART6_RX    ((uint32_t) 0x00000200UL)
#define DMA_CHMAP1_R_CH10SEL_WTIMER0A    ((uint32_t) 0x00000300UL)
#define DMA_CHMAP1_R_CH10SEL_SOFTWARE    ((uint32_t) 0x00000400UL)

#define DMA_CHMAP1_CH10SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP1_CH10SEL_UART0_RX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_CH10SEL_UART1_RX    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP1_CH10SEL_UART6_RX    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP1_CH10SEL_WTIMER0A    ((uint32_t) 0x00000003UL)
#define DMA_CHMAP1_CH10SEL_SOFTWARE    ((uint32_t) 0x00000004UL)
/*--------*/

/*--------*/
#define DMA_CHMAP1_R_CH11SEL_MASK    ((uint32_t) 0x0000F000UL)
#define DMA_CHMAP1_R_CH11SEL_BIT    ((uint32_t) 12UL)
#define DMA_CHMAP1_R_CH11SEL_SSI0_TX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_R_CH11SEL_SSI1_TX    ((uint32_t) 0x00001000UL)
#define DMA_CHMAP1_R_CH11SEL_UART6_TX    ((uint32_t) 0x00002000UL)
#define DMA_CHMAP1_R_CH11SEL_WTIMER0B    ((uint32_t) 0x00003000UL)
#define DMA_CHMAP1_R_CH11SEL_SOFTWARE    ((uint32_t) 0x00004000UL)

#define DMA_CHMAP1_CH11SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP1_CH11SEL_UART0_TX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_CH11SEL_UART1_TX    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP1_CH11SEL_UART6_TX    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP1_CH11SEL_WTIMER0B    ((uint32_t) 0x00000003UL)
#define DMA_CHMAP1_CH11SEL_SOFTWARE    ((uint32_t) 0x00000004UL)
/*--------*/

/*--------*/
#define DMA_CHMAP1_R_CH12SEL_MASK    ((uint32_t) 0x000F0000UL)
#define DMA_CHMAP1_R_CH12SEL_BIT    ((uint32_t) 16UL)
#define DMA_CHMAP1_R_CH12SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_R_CH12SEL_UART2_RX    ((uint32_t) 0x00010000UL)
#define DMA_CHMAP1_R_CH12SEL_SSI2_RX    ((uint32_t) 0x00020000UL)
#define DMA_CHMAP1_R_CH12SEL_WTIMER1A    ((uint32_t) 0x00030000UL)

#define DMA_CHMAP1_CH12SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP1_CH12SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_CH12SEL_UART2_RX    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP1_CH12SEL_SSI2_RX    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP1_CH12SEL_WTIMER1A    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP1_R_CH13SEL_MASK    ((uint32_t) 0x00F00000UL)
#define DMA_CHMAP1_R_CH13SEL_BIT    ((uint32_t) 20UL)
#define DMA_CHMAP1_R_CH13SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_R_CH13SEL_UART2_TX    ((uint32_t) 0x00100000UL)
#define DMA_CHMAP1_R_CH13SEL_SSI2_TX    ((uint32_t) 0x00200000UL)
#define DMA_CHMAP1_R_CH13SEL_WTIMER1B    ((uint32_t) 0x00300000UL)

#define DMA_CHMAP1_CH13SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP1_CH13SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_CH13SEL_UART2_TX    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP1_CH13SEL_SSI2_TX    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP1_CH13SEL_WTIMER1B    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP1_R_CH14SEL_MASK    ((uint32_t) 0x0F000000UL)
#define DMA_CHMAP1_R_CH14SEL_BIT    ((uint32_t) 24UL)
#define DMA_CHMAP1_R_CH14SEL_ADC0_SS0    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_R_CH14SEL_TIMER2A    ((uint32_t) 0x01000000UL)
#define DMA_CHMAP1_R_CH14SEL_SSI3_RX    ((uint32_t) 0x02000000UL)
#define DMA_CHMAP1_R_CH14SEL_GPIOE    ((uint32_t) 0x03000000UL)
#define DMA_CHMAP1_R_CH14SEL_SOFTWARE    ((uint32_t) 0x04000000UL)

#define DMA_CHMAP1_CH14SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP1_CH14SEL_ADC0_SS0    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_CH14SEL_TIMER2A    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP1_CH14SEL_SSI3_RX    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP1_CH14SEL_GPIOE    ((uint32_t) 0x00000003UL)
#define DMA_CHMAP1_CH14SEL_SOFTWARE    ((uint32_t) 0x00000004UL)
/*--------*/

/*--------*/
#define DMA_CHMAP1_R_CH15SEL_MASK    ((uint32_t) 0xF0000000UL)
#define DMA_CHMAP1_R_CH15SEL_BIT    ((uint32_t) 28UL)
#define DMA_CHMAP1_R_CH15SEL_ADC0_SS1    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_R_CH15SEL_TIMER2B    ((uint32_t) 0x10000000UL)
#define DMA_CHMAP1_R_CH15SEL_SSI3_TX    ((uint32_t) 0x20000000UL)
#define DMA_CHMAP1_R_CH15SEL_GPIOF    ((uint32_t) 0x30000000UL)
#define DMA_CHMAP1_R_CH15SEL_SOFTWARE    ((uint32_t) 0x40000000UL)

#define DMA_CHMAP1_CH15SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP1_CH15SEL_ADC0_SS1    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP1_CH15SEL_TIMER2B    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP1_CH15SEL_SSI3_TX    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP1_CH15SEL_GPIOF    ((uint32_t) 0x00000003UL)
#define DMA_CHMAP1_CH15SEL_SOFTWARE    ((uint32_t) 0x00000004UL)
/*--------*/

/**************************************************************************************
************************************* 25 CHMAP2 *************************************
****************************************************************************************/

/*--------*/
#define DMA_CHMAP2_R_CH16SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP2_R_CH16SEL_BIT    ((uint32_t) 0UL)
#define DMA_CHMAP2_R_CH16SEL_ADC0_SS2    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_R_CH16SEL_SOFTWARE    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP2_R_CH16SEL_UART3_RX    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP2_R_CH16SEL_WTIMER2A    ((uint32_t) 0x00000003UL)

#define DMA_CHMAP2_CH16SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP2_CH16SEL_ADC0_SS2    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_CH16SEL_SOFTWARE    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP2_CH16SEL_UART3_RX    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP2_CH16SEL_WTIMER2A    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP2_R_CH17SEL_MASK    ((uint32_t) 0x000000F0UL)
#define DMA_CHMAP2_R_CH17SEL_BIT    ((uint32_t) 4UL)
#define DMA_CHMAP2_R_CH17SEL_ADC0_SS3    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_R_CH17SEL_SOFTWARE    ((uint32_t) 0x00000010UL)
#define DMA_CHMAP2_R_CH17SEL_UART3_TX    ((uint32_t) 0x00000020UL)
#define DMA_CHMAP2_R_CH17SEL_WTIMER2B    ((uint32_t) 0x00000030UL)

#define DMA_CHMAP2_CH17SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP2_CH17SEL_ADC0_SS3    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_CH17SEL_SOFTWARE    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP2_CH17SEL_UART3_TX    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP2_CH17SEL_WTIMER2B    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP2_R_CH18SEL_MASK    ((uint32_t) 0x00000F00UL)
#define DMA_CHMAP2_R_CH18SEL_BIT    ((uint32_t) 8UL)
#define DMA_CHMAP2_R_CH18SEL_TIMER0A    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_R_CH18SEL_TIMER1A    ((uint32_t) 0x00000100UL)
#define DMA_CHMAP2_R_CH18SEL_UART4_RX    ((uint32_t) 0x00000200UL)
#define DMA_CHMAP2_R_CH18SEL_GPIOB    ((uint32_t) 0x00000300UL)
#define DMA_CHMAP2_R_CH18SEL_SOFTWARE    ((uint32_t) 0x00000400UL)

#define DMA_CHMAP2_CH18SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP2_CH18SEL_TIMER0A    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_CH18SEL_TIMER1A    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP2_CH18SEL_UART4_RX    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP2_CH18SEL_GPIOB    ((uint32_t) 0x00000003UL)
#define DMA_CHMAP2_CH18SEL_SOFTWARE    ((uint32_t) 0x00000004UL)
/*--------*/

/*--------*/
#define DMA_CHMAP2_R_CH19SEL_MASK    ((uint32_t) 0x0000F000UL)
#define DMA_CHMAP2_R_CH19SEL_BIT    ((uint32_t) 12UL)
#define DMA_CHMAP2_R_CH19SEL_TIMER0B    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_R_CH19SEL_TIMER1B    ((uint32_t) 0x00001000UL)
#define DMA_CHMAP2_R_CH19SEL_UART4_TX    ((uint32_t) 0x00002000UL)
#define DMA_CHMAP2_R_CH19SEL_SOFTWARE    ((uint32_t) 0x00003000UL)

#define DMA_CHMAP2_CH19SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP2_CH19SEL_TIMER0B    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_CH19SEL_TIMER1B    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP2_CH19SEL_UART4_TX    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP2_CH19SEL_SOFTWARE    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP2_R_CH20SEL_MASK    ((uint32_t) 0x000F0000UL)
#define DMA_CHMAP2_R_CH20SEL_BIT    ((uint32_t) 16UL)
#define DMA_CHMAP2_R_CH20SEL_TIMER1A    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_R_CH20SEL_SOFTWARE    ((uint32_t) 0x00010000UL)
#define DMA_CHMAP2_R_CH20SEL_UART7_RX    ((uint32_t) 0x00020000UL)

#define DMA_CHMAP2_CH20SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP2_CH20SEL_TIMER1A    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_CH20SEL_SOFTWARE    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP2_CH20SEL_UART7_RX    ((uint32_t) 0x00000002UL)
/*--------*/

/*--------*/
#define DMA_CHMAP2_R_CH21SEL_MASK    ((uint32_t) 0x00F00000UL)
#define DMA_CHMAP2_R_CH21SEL_BIT    ((uint32_t) 20UL)
#define DMA_CHMAP2_R_CH21SEL_TIMER1B    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_R_CH21SEL_SOFTWARE    ((uint32_t) 0x00100000UL)
#define DMA_CHMAP2_R_CH21SEL_UART7_TX    ((uint32_t) 0x00200000UL)

#define DMA_CHMAP2_CH21SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP2_CH21SEL_TIMER1B    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_CH21SEL_SOFTWARE    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP2_CH21SEL_UART7_TX    ((uint32_t) 0x00000002UL)
/*--------*/

/*--------*/
#define DMA_CHMAP2_R_CH22SEL_MASK    ((uint32_t) 0x0F000000UL)
#define DMA_CHMAP2_R_CH22SEL_BIT    ((uint32_t) 24UL)
#define DMA_CHMAP2_R_CH22SEL_UART1_RX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_R_CH22SEL_SOFTWARE    ((uint32_t) 0x01000000UL)

#define DMA_CHMAP2_CH22SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP2_CH22SEL_UART1_RX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_CH22SEL_SOFTWARE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define DMA_CHMAP2_R_CH23SEL_MASK    ((uint32_t) 0xF0000000UL)
#define DMA_CHMAP2_R_CH23SEL_BIT    ((uint32_t) 28UL)
#define DMA_CHMAP2_R_CH23SEL_UART1_TX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_R_CH23SEL_SOFTWARE    ((uint32_t) 0x10000000UL)

#define DMA_CHMAP2_CH23SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP2_CH23SEL_UART1_TX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP2_CH23SEL_SOFTWARE    ((uint32_t) 0x00000001UL)
/*--------*/


/**************************************************************************************
************************************* 26 CHMAP3 *************************************
****************************************************************************************/

/*--------*/
#define DMA_CHMAP3_R_CH24SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP3_R_CH24SEL_BIT    ((uint32_t) 0UL)
#define DMA_CHMAP3_R_CH24SEL_SSI1_RX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP3_R_CH24SEL_ADC1_SS0    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP3_R_CH24SEL_SOFTWARE    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP3_R_CH24SEL_WTIMER3A    ((uint32_t) 0x00000003UL)

#define DMA_CHMAP3_CH24SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP3_CH24SEL_SSI1_RX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP3_CH24SEL_ADC1_SS0    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP3_CH24SEL_SOFTWARE    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP3_CH24SEL_WTIMER3A    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP3_R_CH25SEL_MASK    ((uint32_t) 0x000000F0UL)
#define DMA_CHMAP3_R_CH25SEL_BIT    ((uint32_t) 4UL)
#define DMA_CHMAP3_R_CH25SEL_SSI1_TX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP3_R_CH25SEL_ADC1_SS1    ((uint32_t) 0x00000010UL)
#define DMA_CHMAP3_R_CH25SEL_SOFTWARE    ((uint32_t) 0x00000020UL)
#define DMA_CHMAP3_R_CH25SEL_WTIMER3B    ((uint32_t) 0x00000030UL)

#define DMA_CHMAP3_CH25SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP3_CH25SEL_SSI1_TX    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP3_CH25SEL_ADC1_SS1    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP3_CH25SEL_SOFTWARE    ((uint32_t) 0x00000002UL)
#define DMA_CHMAP3_CH25SEL_WTIMER3B    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP3_R_CH26SEL_MASK    ((uint32_t) 0x00000F00UL)
#define DMA_CHMAP3_R_CH26SEL_BIT    ((uint32_t) 8UL)
#define DMA_CHMAP3_R_CH26SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP3_R_CH26SEL_ADC1_SS2    ((uint32_t) 0x00000100UL)
#define DMA_CHMAP3_R_CH26SEL_WTIMER4A    ((uint32_t) 0x00000300UL)

#define DMA_CHMAP3_CH26SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP3_CH26SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP3_CH26SEL_ADC1_SS2    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP3_CH26SEL_WTIMER4A    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP3_R_CH27SEL_MASK    ((uint32_t) 0x0000F000UL)
#define DMA_CHMAP3_R_CH27SEL_BIT    ((uint32_t) 12UL)
#define DMA_CHMAP3_R_CH27SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP3_R_CH27SEL_ADC1_SS3    ((uint32_t) 0x00001000UL)
#define DMA_CHMAP3_R_CH27SEL_WTIMER4B    ((uint32_t) 0x00003000UL)

#define DMA_CHMAP3_CH27SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP3_CH27SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP3_CH27SEL_ADC1_SS3    ((uint32_t) 0x00000001UL)
#define DMA_CHMAP3_CH27SEL_WTIMER4B    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP3_R_CH28SEL_MASK    ((uint32_t) 0x000F0000UL)
#define DMA_CHMAP3_R_CH28SEL_BIT    ((uint32_t) 16UL)
#define DMA_CHMAP3_R_CH28SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP3_R_CH28SEL_WTIMER5A    ((uint32_t) 0x00030000UL)

#define DMA_CHMAP3_CH28SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP3_CH28SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP3_CH28SEL_WTIMER5A    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP3_R_CH29SEL_MASK    ((uint32_t) 0x00F00000UL)
#define DMA_CHMAP3_R_CH29SEL_BIT    ((uint32_t) 20UL)
#define DMA_CHMAP3_R_CH29SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP3_R_CH29SEL_WTIMER5B    ((uint32_t) 0x00300000UL)

#define DMA_CHMAP3_CH29SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP3_CH29SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
#define DMA_CHMAP3_CH29SEL_WTIMER5B    ((uint32_t) 0x00000003UL)
/*--------*/

/*--------*/
#define DMA_CHMAP3_R_CH30SEL_MASK    ((uint32_t) 0x0F000000UL)
#define DMA_CHMAP3_R_CH30SEL_BIT    ((uint32_t) 24UL)
#define DMA_CHMAP3_R_CH30SEL_SOFTWARE    ((uint32_t) 0x00000000UL)

#define DMA_CHMAP3_CH30SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP3_CH30SEL_SOFTWARE    ((uint32_t) 0x00000000UL)
/*--------*/

/*--------*/
#define DMA_CHMAP3_R_CH31SEL_MASK    ((uint32_t) 0xF0000000UL)
#define DMA_CHMAP3_R_CH31SEL_BIT    ((uint32_t) 28UL)
#define DMA_CHMAP3_R_CH31SEL_SOFTWARE    ((uint32_t) 0x00000000UL)

#define DMA_CHMAP3_CH31SEL_MASK    ((uint32_t) 0x0000000FUL)
#define DMA_CHMAP3_CH31SEL_RESERVED    ((uint32_t) 0x00000000UL)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERDEFINES_DMA_REGISTERDEFINES_CHMAP_H_ */
