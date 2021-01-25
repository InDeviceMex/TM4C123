/**
 *
 * @file NVIC_RegisterDefines_STIR.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_STIR_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_STIR_H_

#include <xUtils/Standard/Standard.h>

/********************************************************************************************/
/************************************* STIR ***********************************************/
/******************************************************************************************/

/*----------*/
#define NVIC_STIR_R_INTID_MASK      ((uint32_t)0x000000FFU)
#define NVIC_STIR_R_INTID_BIT       (0U)
#define NVIC_STIR_R_INTID_GPIOA      ((uint32_t)0x00000000U)
#define NVIC_STIR_R_INTID_GPIOB      ((uint32_t)0x00000001U)
#define NVIC_STIR_R_INTID_GPIOC      ((uint32_t)0x00000002U)
#define NVIC_STIR_R_INTID_GPIOD      ((uint32_t)0x00000003U)
#define NVIC_STIR_R_INTID_GPIOE      ((uint32_t)0x00000004U)
#define NVIC_STIR_R_INTID_UART0      ((uint32_t)0x00000005U)
#define NVIC_STIR_R_INTID_UART1      ((uint32_t)0x00000006U)
#define NVIC_STIR_R_INTID_SSI0       ((uint32_t)0x00000007U)
#define NVIC_STIR_R_INTID_I2C0       ((uint32_t)0x00000008U)
#define NVIC_STIR_R_INTID_PWM0FAULT   ((uint32_t)0x00000009U)
#define NVIC_STIR_R_INTID_PWM0GEN0    ((uint32_t)0x0000000AU)
#define NVIC_STIR_R_INTID_PWM0GEN1    ((uint32_t)0x0000000BU)
#define NVIC_STIR_R_INTID_PWM0GEN2    ((uint32_t)0x0000000CU)
#define NVIC_STIR_R_INTID_QEI0       ((uint32_t)0x0000000DU)
#define NVIC_STIR_R_INTID_ADC0SEQ0   ((uint32_t)0x0000000EU)
#define NVIC_STIR_R_INTID_ADC0SEQ1   ((uint32_t)0x0000000FU)
#define NVIC_STIR_R_INTID_ADC0SEQ2   ((uint32_t)0x00000010U)
#define NVIC_STIR_R_INTID_ADC0SEQ3   ((uint32_t)0x00000011U)
#define NVIC_STIR_R_INTID_WDT01      ((uint32_t)0x00000012U)
#define NVIC_STIR_R_INTID_TIMER0A    ((uint32_t)0x00000013U)
#define NVIC_STIR_R_INTID_TIMER0B    ((uint32_t)0x00000014U)
#define NVIC_STIR_R_INTID_TIMER1A    ((uint32_t)0x00000015U)
#define NVIC_STIR_R_INTID_TIMER1B    ((uint32_t)0x00000016U)
#define NVIC_STIR_R_INTID_TIMER2A    ((uint32_t)0x00000017U)
#define NVIC_STIR_R_INTID_TIMER2B    ((uint32_t)0x00000018U)
#define NVIC_STIR_R_INTID_ACOMP0     ((uint32_t)0x00000019U)
#define NVIC_STIR_R_INTID_ACOMP1     ((uint32_t)0x0000001AU)
#define NVIC_STIR_R_INTID_RES43      ((uint32_t)0x0000001BU)
#define NVIC_STIR_R_INTID_SYSCTL     ((uint32_t)0x0000001CU)
#define NVIC_STIR_R_INTID_FLASH      ((uint32_t)0x0000001DU)
#define NVIC_STIR_R_INTID_GPIOF      ((uint32_t)0x0000001EU)
#define NVIC_STIR_R_INTID_RES47      ((uint32_t)0x0000001FU)
#define NVIC_STIR_R_INTID_RES48      ((uint32_t)0x00000020U)
#define NVIC_STIR_R_INTID_UART2      ((uint32_t)0x00000021U)
#define NVIC_STIR_R_INTID_SSI1       ((uint32_t)0x00000022U)
#define NVIC_STIR_R_INTID_TIMER3A    ((uint32_t)0x00000023U)
#define NVIC_STIR_R_INTID_TIMER3B    ((uint32_t)0x00000024U)
#define NVIC_STIR_R_INTID_I2C1       ((uint32_t)0x00000025U)
#define NVIC_STIR_R_INTID_QEI1       ((uint32_t)0x00000026U)
#define NVIC_STIR_R_INTID_CAN0       ((uint32_t)0x00000027U)
#define NVIC_STIR_R_INTID_CAN1       ((uint32_t)0x00000028U)
#define NVIC_STIR_R_INTID_RES57      ((uint32_t)0x00000029U)
#define NVIC_STIR_R_INTID_RES58      ((uint32_t)0x0000002AU)
#define NVIC_STIR_R_INTID_HIB        ((uint32_t)0x0000002BU)
#define NVIC_STIR_R_INTID_USB        ((uint32_t)0x0000002CU)
#define NVIC_STIR_R_INTID_PWM0GEN3   ((uint32_t)0x0000002DU)
#define NVIC_STIR_R_INTID_UDMASOFT   ((uint32_t)0x0000002EU)
#define NVIC_STIR_R_INTID_UDMAERROR  ((uint32_t)0x0000002FU)
#define NVIC_STIR_R_INTID_ADC1SEQ0   ((uint32_t)0x00000030U)
#define NVIC_STIR_R_INTID_ADC1SEQ1   ((uint32_t)0x00000031U)
#define NVIC_STIR_R_INTID_ADC1SEQ2   ((uint32_t)0x00000032U)
#define NVIC_STIR_R_INTID_ADC1SEQ3   ((uint32_t)0x00000033U)
#define NVIC_STIR_R_INTID_RES68      ((uint32_t)0x00000034U)
#define NVIC_STIR_R_INTID_RES69      ((uint32_t)0x00000035U)
#define NVIC_STIR_R_INTID_RES70      ((uint32_t)0x00000036U)
#define NVIC_STIR_R_INTID_RES71      ((uint32_t)0x00000037U)
#define NVIC_STIR_R_INTID_RES72      ((uint32_t)0x00000038U)
#define NVIC_STIR_R_INTID_SSI2       ((uint32_t)0x00000039U)
#define NVIC_STIR_R_INTID_SSI3       ((uint32_t)0x0000003AU)
#define NVIC_STIR_R_INTID_UART3      ((uint32_t)0x0000003BU)
#define NVIC_STIR_R_INTID_UART4      ((uint32_t)0x0000003CU)
#define NVIC_STIR_R_INTID_UART5      ((uint32_t)0x0000003DU)
#define NVIC_STIR_R_INTID_UART6      ((uint32_t)0x0000003EU)
#define NVIC_STIR_R_INTID_UART7      ((uint32_t)0x0000003FU)
#define NVIC_STIR_R_INTID_RES80      ((uint32_t)0x00000040U)
#define NVIC_STIR_R_INTID_RES81      ((uint32_t)0x00000041U)
#define NVIC_STIR_R_INTID_RES82      ((uint32_t)0x00000042U)
#define NVIC_STIR_R_INTID_RES83      ((uint32_t)0x00000043U)
#define NVIC_STIR_R_INTID_I2C2       ((uint32_t)0x00000044U)
#define NVIC_STIR_R_INTID_I2C3       ((uint32_t)0x00000045U)
#define NVIC_STIR_R_INTID_TIMER4A    ((uint32_t)0x00000046U)
#define NVIC_STIR_R_INTID_TIMER4B    ((uint32_t)0x00000047U)
#define NVIC_STIR_R_INTID_RES88      ((uint32_t)0x00000048U)
#define NVIC_STIR_R_INTID_RES89      ((uint32_t)0x00000049U)
#define NVIC_STIR_R_INTID_RES90      ((uint32_t)0x0000004AU)
#define NVIC_STIR_R_INTID_RES91      ((uint32_t)0x0000004BU)
#define NVIC_STIR_R_INTID_RES92      ((uint32_t)0x0000004CU)
#define NVIC_STIR_R_INTID_RES93      ((uint32_t)0x0000004DU)
#define NVIC_STIR_R_INTID_RES94      ((uint32_t)0x0000004EU)
#define NVIC_STIR_R_INTID_RES95      ((uint32_t)0x0000004FU)
#define NVIC_STIR_R_INTID_RES96      ((uint32_t)0x00000050U)
#define NVIC_STIR_R_INTID_RES97      ((uint32_t)0x00000051U)
#define NVIC_STIR_R_INTID_RES98      ((uint32_t)0x00000052U)
#define NVIC_STIR_R_INTID_RES99      ((uint32_t)0x00000053U)
#define NVIC_STIR_R_INTID_RES100     ((uint32_t)0x00000054U)
#define NVIC_STIR_R_INTID_RES101     ((uint32_t)0x00000055U)
#define NVIC_STIR_R_INTID_RES102     ((uint32_t)0x00000056U)
#define NVIC_STIR_R_INTID_RES103     ((uint32_t)0x00000057U)
#define NVIC_STIR_R_INTID_RES104     ((uint32_t)0x00000058U)
#define NVIC_STIR_R_INTID_RES105     ((uint32_t)0x00000059U)
#define NVIC_STIR_R_INTID_RES106     ((uint32_t)0x0000005AU)
#define NVIC_STIR_R_INTID_RES107     ((uint32_t)0x0000005BU)
#define NVIC_STIR_R_INTID_TIMER5A    ((uint32_t)0x0000005CU)
#define NVIC_STIR_R_INTID_TIMER5B    ((uint32_t)0x0000005DU)
#define NVIC_STIR_R_INTID_WTIMER0A   ((uint32_t)0x0000005EU)
#define NVIC_STIR_R_INTID_WTIMER0B   ((uint32_t)0x0000005FU)
#define NVIC_STIR_R_INTID_WTIMER1A   ((uint32_t)0x00000060U)
#define NVIC_STIR_R_INTID_WTIMER1B   ((uint32_t)0x00000061U)
#define NVIC_STIR_R_INTID_WTIMER2A   ((uint32_t)0x00000062U)
#define NVIC_STIR_R_INTID_WTIMER2B   ((uint32_t)0x00000063U)
#define NVIC_STIR_R_INTID_WTIMER3A   ((uint32_t)0x00000064U)
#define NVIC_STIR_R_INTID_WTIMER3B   ((uint32_t)0x00000065U)
#define NVIC_STIR_R_INTID_WTIMER4A   ((uint32_t)0x00000066U)
#define NVIC_STIR_R_INTID_WTIMER4B   ((uint32_t)0x00000067U)
#define NVIC_STIR_R_INTID_WTIMER5A   ((uint32_t)0x00000068U)
#define NVIC_STIR_R_INTID_WTIMER5B   ((uint32_t)0x00000069U)
#define NVIC_STIR_R_INTID_SYSEXC     ((uint32_t)0x0000006AU)
#define NVIC_STIR_R_INTID_RES123     ((uint32_t)0x0000006BU)
#define NVIC_STIR_R_INTID_RES124     ((uint32_t)0x0000006CU)
#define NVIC_STIR_R_INTID_RES125     ((uint32_t)0x0000006DU)
#define NVIC_STIR_R_INTID_RES126     ((uint32_t)0x0000006EU)
#define NVIC_STIR_R_INTID_RES127     ((uint32_t)0x0000006FU)
#define NVIC_STIR_R_INTID_RES128     ((uint32_t)0x00000070U)
#define NVIC_STIR_R_INTID_RES129     ((uint32_t)0x00000071U)
#define NVIC_STIR_R_INTID_RES130     ((uint32_t)0x00000072U)
#define NVIC_STIR_R_INTID_RES131     ((uint32_t)0x00000073U)
#define NVIC_STIR_R_INTID_RES132     ((uint32_t)0x00000074U)
#define NVIC_STIR_R_INTID_RES133     ((uint32_t)0x00000075U)
#define NVIC_STIR_R_INTID_RES134     ((uint32_t)0x00000076U)
#define NVIC_STIR_R_INTID_RES135     ((uint32_t)0x00000077U)
#define NVIC_STIR_R_INTID_RES136     ((uint32_t)0x00000078U)
#define NVIC_STIR_R_INTID_RES137     ((uint32_t)0x00000079U)
#define NVIC_STIR_R_INTID_RES138     ((uint32_t)0x0000007AU)
#define NVIC_STIR_R_INTID_RES139     ((uint32_t)0x0000007BU)
#define NVIC_STIR_R_INTID_RES140     ((uint32_t)0x0000007CU)
#define NVIC_STIR_R_INTID_RES141     ((uint32_t)0x0000007DU)
#define NVIC_STIR_R_INTID_RES142     ((uint32_t)0x0000007EU)
#define NVIC_STIR_R_INTID_RES143     ((uint32_t)0x0000007FU)
#define NVIC_STIR_R_INTID_RES144     ((uint32_t)0x00000080U)
#define NVIC_STIR_R_INTID_RES145     ((uint32_t)0x00000081U)
#define NVIC_STIR_R_INTID_RES146     ((uint32_t)0x00000082U)
#define NVIC_STIR_R_INTID_RES147     ((uint32_t)0x00000083U)
#define NVIC_STIR_R_INTID_RES148     ((uint32_t)0x00000084U)
#define NVIC_STIR_R_INTID_RES149     ((uint32_t)0x00000085U)
#define NVIC_STIR_R_INTID_PWM1GEN0   ((uint32_t)0x00000086U)
#define NVIC_STIR_R_INTID_PWM1GEN1   ((uint32_t)0x00000087U)
#define NVIC_STIR_R_INTID_PWM1GEN2   ((uint32_t)0x00000088U)
#define NVIC_STIR_R_INTID_PWM1GEN3   ((uint32_t)0x00000089U)
#define NVIC_STIR_R_INTID_PWM1FAULT  ((uint32_t)0x0000008AU)

#define NVIC_STIR_INTID_GPIOA     ((uint32_t)0x00000000U)
#define NVIC_STIR_INTID_GPIOB       ((uint32_t)0x00000001U)
#define NVIC_STIR_INTID_GPIOC       ((uint32_t)0x00000002U)
#define NVIC_STIR_INTID_GPIOD     ((uint32_t)0x00000003U)
#define NVIC_STIR_INTID_GPIOE     ((uint32_t)0x00000004U)
#define NVIC_STIR_INTID_UART0     ((uint32_t)0x00000005U)
#define NVIC_STIR_INTID_UART1     ((uint32_t)0x00000006U)
#define NVIC_STIR_INTID_SSI0      ((uint32_t)0x00000007U)
#define NVIC_STIR_INTID_I2C0      ((uint32_t)0x00000008U)
#define NVIC_STIR_INTID_PWM0FAULT  ((uint32_t)0x00000009U)
#define NVIC_STIR_INTID_PWM0GEN0   ((uint32_t)0x0000000AU)
#define NVIC_STIR_INTID_PWM0GEN1   ((uint32_t)0x0000000BU)
#define NVIC_STIR_INTID_PWM0GEN2   ((uint32_t)0x0000000CU)
#define NVIC_STIR_INTID_QEI0      ((uint32_t)0x0000000DU)
#define NVIC_STIR_INTID_ADC0SEQ0  ((uint32_t)0x0000000EU)
#define NVIC_STIR_INTID_ADC0SEQ1  ((uint32_t)0x0000000FU)
#define NVIC_STIR_INTID_ADC0SEQ2  ((uint32_t)0x00000010U)
#define NVIC_STIR_INTID_ADC0SEQ3  ((uint32_t)0x00000011U)
#define NVIC_STIR_INTID_WDT01     ((uint32_t)0x00000012U)
#define NVIC_STIR_INTID_TIMER0A   ((uint32_t)0x00000013U)
#define NVIC_STIR_INTID_TIMER0B   ((uint32_t)0x00000014U)
#define NVIC_STIR_INTID_TIMER1A   ((uint32_t)0x00000015U)
#define NVIC_STIR_INTID_TIMER1B   ((uint32_t)0x00000016U)
#define NVIC_STIR_INTID_TIMER2A   ((uint32_t)0x00000017U)
#define NVIC_STIR_INTID_TIMER2B   ((uint32_t)0x00000018U)
#define NVIC_STIR_INTID_ACOMP0    ((uint32_t)0x00000019U)
#define NVIC_STIR_INTID_ACOMP1  ((uint32_t)0x0000001AU)
#define NVIC_STIR_INTID_RES43     ((uint32_t)0x0000001BU)
#define NVIC_STIR_INTID_SYSCTL    ((uint32_t)0x0000001CU)
#define NVIC_STIR_INTID_FLASH       ((uint32_t)0x0000001DU)
#define NVIC_STIR_INTID_GPIOF     ((uint32_t)0x0000001EU)
#define NVIC_STIR_INTID_RES47     ((uint32_t)0x0000001FU)
#define NVIC_STIR_INTID_RES48       ((uint32_t)0x00000020U)
#define NVIC_STIR_INTID_UART2       ((uint32_t)0x00000021U)
#define NVIC_STIR_INTID_SSI1        ((uint32_t)0x00000022U)
#define NVIC_STIR_INTID_TIMER3A   ((uint32_t)0x00000023U)
#define NVIC_STIR_INTID_TIMER3B   ((uint32_t)0x00000024U)
#define NVIC_STIR_INTID_I2C1      ((uint32_t)0x00000025U)
#define NVIC_STIR_INTID_QEI1      ((uint32_t)0x00000026U)
#define NVIC_STIR_INTID_CAN0      ((uint32_t)0x00000027U)
#define NVIC_STIR_INTID_CAN1        ((uint32_t)0x00000028U)
#define NVIC_STIR_INTID_RES57       ((uint32_t)0x00000029U)
#define NVIC_STIR_INTID_RES58       ((uint32_t)0x0000002AU)
#define NVIC_STIR_INTID_HIB     ((uint32_t)0x0000002BU)
#define NVIC_STIR_INTID_USB     ((uint32_t)0x0000002CU)
#define NVIC_STIR_INTID_PWM0GEN3    ((uint32_t)0x0000002DU)
#define NVIC_STIR_INTID_UDMASOFT  ((uint32_t)0x0000002EU)
#define NVIC_STIR_INTID_UDMAERROR ((uint32_t)0x0000002FU)
#define NVIC_STIR_INTID_ADC1SEQ0  ((uint32_t)0x00000030U)
#define NVIC_STIR_INTID_ADC1SEQ1  ((uint32_t)0x00000031U)
#define NVIC_STIR_INTID_ADC1SEQ2  ((uint32_t)0x00000032U)
#define NVIC_STIR_INTID_ADC1SEQ3  ((uint32_t)0x00000033U)
#define NVIC_STIR_INTID_RES68     ((uint32_t)0x00000034U)
#define NVIC_STIR_INTID_RES69       ((uint32_t)0x00000035U)
#define NVIC_STIR_INTID_RES70       ((uint32_t)0x00000036U)
#define NVIC_STIR_INTID_RES71       ((uint32_t)0x00000037U)
#define NVIC_STIR_INTID_RES72       ((uint32_t)0x00000038U)
#define NVIC_STIR_INTID_SSI2        ((uint32_t)0x00000039U)
#define NVIC_STIR_INTID_SSI3        ((uint32_t)0x0000003AU)
#define NVIC_STIR_INTID_UART3       ((uint32_t)0x0000003BU)
#define NVIC_STIR_INTID_UART4       ((uint32_t)0x0000003CU)
#define NVIC_STIR_INTID_UART5       ((uint32_t)0x0000003DU)
#define NVIC_STIR_INTID_UART6       ((uint32_t)0x0000003EU)
#define NVIC_STIR_INTID_UART7       ((uint32_t)0x0000003FU)
#define NVIC_STIR_INTID_RES80       ((uint32_t)0x00000040U)
#define NVIC_STIR_INTID_RES81       ((uint32_t)0x00000041U)
#define NVIC_STIR_INTID_RES82       ((uint32_t)0x00000042U)
#define NVIC_STIR_INTID_RES83       ((uint32_t)0x00000043U)
#define NVIC_STIR_INTID_I2C2        ((uint32_t)0x00000044U)
#define NVIC_STIR_INTID_I2C3        ((uint32_t)0x00000045U)
#define NVIC_STIR_INTID_TIMER4A   ((uint32_t)0x00000046U)
#define NVIC_STIR_INTID_TIMER4B   ((uint32_t)0x00000047U)
#define NVIC_STIR_INTID_RES88       ((uint32_t)0x00000048U)
#define NVIC_STIR_INTID_RES89       ((uint32_t)0x00000049U)
#define NVIC_STIR_INTID_RES90       ((uint32_t)0x0000004AU)
#define NVIC_STIR_INTID_RES91       ((uint32_t)0x0000004BU)
#define NVIC_STIR_INTID_RES92       ((uint32_t)0x0000004CU)
#define NVIC_STIR_INTID_RES93       ((uint32_t)0x0000004DU)
#define NVIC_STIR_INTID_RES94       ((uint32_t)0x0000004EU)
#define NVIC_STIR_INTID_RES95       ((uint32_t)0x0000004FU)
#define NVIC_STIR_INTID_RES96       ((uint32_t)0x00000050U)
#define NVIC_STIR_INTID_RES97       ((uint32_t)0x00000051U)
#define NVIC_STIR_INTID_RES98       ((uint32_t)0x00000052U)
#define NVIC_STIR_INTID_RES99       ((uint32_t)0x00000053U)
#define NVIC_STIR_INTID_RES100    ((uint32_t)0x00000054U)
#define NVIC_STIR_INTID_RES101    ((uint32_t)0x00000055U)
#define NVIC_STIR_INTID_RES102    ((uint32_t)0x00000056U)
#define NVIC_STIR_INTID_RES103    ((uint32_t)0x00000057U)
#define NVIC_STIR_INTID_RES104    ((uint32_t)0x00000058U)
#define NVIC_STIR_INTID_RES105    ((uint32_t)0x00000059U)
#define NVIC_STIR_INTID_RES106    ((uint32_t)0x0000005AU)
#define NVIC_STIR_INTID_RES107    ((uint32_t)0x0000005BU)
#define NVIC_STIR_INTID_TIMER5A   ((uint32_t)0x0000005CU)
#define NVIC_STIR_INTID_TIMER5B   ((uint32_t)0x0000005DU)
#define NVIC_STIR_INTID_WTIMER0A  ((uint32_t)0x0000005EU)
#define NVIC_STIR_INTID_WTIMER0B  ((uint32_t)0x0000005FU)
#define NVIC_STIR_INTID_WTIMER1A  ((uint32_t)0x00000060U)
#define NVIC_STIR_INTID_WTIMER1B  ((uint32_t)0x00000061U)
#define NVIC_STIR_INTID_WTIMER2A   ((uint32_t)0x00000062U)
#define NVIC_STIR_INTID_WTIMER2B   ((uint32_t)0x00000063U)
#define NVIC_STIR_INTID_WTIMER3A   ((uint32_t)0x00000064U)
#define NVIC_STIR_INTID_WTIMER3B   ((uint32_t)0x00000065U)
#define NVIC_STIR_INTID_WTIMER4A   ((uint32_t)0x00000066U)
#define NVIC_STIR_INTID_WTIMER4B   ((uint32_t)0x00000067U)
#define NVIC_STIR_INTID_WTIMER5A   ((uint32_t)0x00000068U)
#define NVIC_STIR_INTID_WTIMER5B   ((uint32_t)0x00000069U)
#define NVIC_STIR_INTID_SYSEXC     ((uint32_t)0x0000006AU)
#define NVIC_STIR_INTID_RES123     ((uint32_t)0x0000006BU)
#define NVIC_STIR_INTID_RES124     ((uint32_t)0x0000006CU)
#define NVIC_STIR_INTID_RES125     ((uint32_t)0x0000006DU)
#define NVIC_STIR_INTID_RES126     ((uint32_t)0x0000006EU)
#define NVIC_STIR_INTID_RES127     ((uint32_t)0x0000006FU)
#define NVIC_STIR_INTID_RES128     ((uint32_t)0x00000070U)
#define NVIC_STIR_INTID_RES129     ((uint32_t)0x00000071U)
#define NVIC_STIR_INTID_RES130     ((uint32_t)0x00000072U)
#define NVIC_STIR_INTID_RES131     ((uint32_t)0x00000073U)
#define NVIC_STIR_INTID_RES132     ((uint32_t)0x00000074U)
#define NVIC_STIR_INTID_RES133     ((uint32_t)0x00000075U)
#define NVIC_STIR_INTID_RES134     ((uint32_t)0x00000076U)
#define NVIC_STIR_INTID_RES135     ((uint32_t)0x00000077U)
#define NVIC_STIR_INTID_RES136     ((uint32_t)0x00000078U)
#define NVIC_STIR_INTID_RES137     ((uint32_t)0x00000079U)
#define NVIC_STIR_INTID_RES138     ((uint32_t)0x0000007AU)
#define NVIC_STIR_INTID_RES139     ((uint32_t)0x0000007BU)
#define NVIC_STIR_INTID_RES140     ((uint32_t)0x0000007CU)
#define NVIC_STIR_INTID_RES141     ((uint32_t)0x0000007DU)
#define NVIC_STIR_INTID_RES142     ((uint32_t)0x0000007EU)
#define NVIC_STIR_INTID_RES143     ((uint32_t)0x0000007FU)
#define NVIC_STIR_INTID_RES144     ((uint32_t)0x00000080U)
#define NVIC_STIR_INTID_RES145     ((uint32_t)0x00000081U)
#define NVIC_STIR_INTID_RES146     ((uint32_t)0x00000082U)
#define NVIC_STIR_INTID_RES147     ((uint32_t)0x00000083U)
#define NVIC_STIR_INTID_RES148     ((uint32_t)0x00000084U)
#define NVIC_STIR_INTID_RES149     ((uint32_t)0x00000085U)
#define NVIC_STIR_INTID_PWM1GEN0   ((uint32_t)0x00000086U)
#define NVIC_STIR_INTID_PWM1GEN1   ((uint32_t)0x00000087U)
#define NVIC_STIR_INTID_PWM1GEN2   ((uint32_t)0x00000088U)
#define NVIC_STIR_INTID_PWM1GEN3   ((uint32_t)0x00000089U)
#define NVIC_STIR_INTID_PWM1FAULT  ((uint32_t)0x0000008AU)
/*-----------------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_STIR_H_ */
