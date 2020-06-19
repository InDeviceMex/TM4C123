/*
 * NVIC.h
 *
 *  Created on: 19 jul. 2018
 *      Author: InDev
 */

#ifndef NVIC_H_
#define NVIC_H_

#include <stdint.h>                      		/* standard types definitions                      */


#define NVIC_BASE            ((uint32_t)0xE000E000UL)
#define NVIC_OFFSET          ((uint32_t)0x00000100UL)

#define NVIC_IRQ_MAX		(138)
#define NVIC_MAX			(3)
#define NVIC_PRI_MAX        (7)
#define NVIC_PRI_MASK        (7)
#define NVIC_IPR_MAX		(34)
/*
enum
{
    NVIC_PRIORITY_RES106        =1u,
    NVIC_PRIORITY_SSI2 =1u,
    NVIC_PRIORITY_RES105        =2u,

    NVIC_PRIORITY_RES94         =2u,
    NVIC_PRIORITY_RES104        =3u,
    NVIC_PRIORITY_ADC0SEQ0      =4u,

    NVIC_PRIORITY_UART2         =5u,
    NVIC_PRIORITY_SSI1          =5u,
    NVIC_PRIORITY_RES72         =6u,
    NVIC_PRIORITY_ADC1SEQ0      =7u,



      NVIC_PRIORITY_GPIOA       =7u,
      NVIC_PRIORITY_GPIOB       =7u,
      NVIC_PRIORITY_GPIOC 		=7u,
      NVIC_PRIORITY_GPIOD       =7u,
      NVIC_PRIORITY_GPIOE       =7u,
      NVIC_PRIORITY_UART0       =7u,
      NVIC_PRIORITY_UART1       =7u,
      NVIC_PRIORITY_SSI0        =7u,
      NVIC_PRIORITY_I2C0        =7u,
      NVIC_PRIORITY_PWM0FAULT    =7u,
      NVIC_PRIORITY_PWM0GEN0     =7u,
      NVIC_PRIORITY_PWM0GEN1  	=7u,
      NVIC_PRIORITY_PWM0GEN2		=7u,
      NVIC_PRIORITY_QEI0  	    =7u,
      NVIC_PRIORITY_ADC0SEQ1    =7u,
      NVIC_PRIORITY_ADC0SEQ2    =7u,
      NVIC_PRIORITY_ADC0SEQ3    =7u,
      NVIC_PRIORITY_WDT01       =7u,
      NVIC_PRIORITY_TIMER0A     =7u,
      NVIC_PRIORITY_TIMER0B     =7u,
      NVIC_PRIORITY_TIMER1A     =7u,
      NVIC_PRIORITY_TIMER1B     =7u,
      NVIC_PRIORITY_TIMER2A     =7u,
      NVIC_PRIORITY_TIMER2B 	=7u,
      NVIC_PRIORITY_ACOMP0	    =7u,
      NVIC_PRIORITY_ACOMP1      =7u,
      NVIC_PRIORITY_RES43       =7u,
      NVIC_PRIORITY_SYSCTL      =7u,
      NVIC_PRIORITY_FLASH       =7u,
      NVIC_PRIORITY_GPIOF       =7u,
      NVIC_PRIORITY_RES47       =7u,
      NVIC_PRIORITY_RES48       =7u,
      NVIC_PRIORITY_TIMER3A     =7u,
      NVIC_PRIORITY_TIMER3B     =7u,
      NVIC_PRIORITY_I2C1        =7u,
      NVIC_PRIORITY_QEI1        =7u,
      NVIC_PRIORITY_CAN0        =7u,
      NVIC_PRIORITY_CAN1        =7u,
      NVIC_PRIORITY_RES57       =7u,
      NVIC_PRIORITY_RES58       =7u,
      NVIC_PRIORITY_HIB         =7u,
      NVIC_PRIORITY_USB         =7u,
      NVIC_PRIORITY_PWM0GEN3    =7u,
      NVIC_PRIORITY_UDMASOFT    =7u,
      NVIC_PRIORITY_UDMAERROR    =7u,
      NVIC_PRIORITY_ADC1SEQ2    =7u,
      NVIC_PRIORITY_ADC1SEQ3    =7u,
      NVIC_PRIORITY_RES68       =7u,
      NVIC_PRIORITY_RES69       =7u,
      NVIC_PRIORITY_RES70       =7u,
      NVIC_PRIORITY_RES71       =7u,
      NVIC_PRIORITY_SSI3        =7u,
      NVIC_PRIORITY_UART3       =7u,
      NVIC_PRIORITY_UART4       =7u,
      NVIC_PRIORITY_UART5       =7u,
      NVIC_PRIORITY_UART6       =7u,
      NVIC_PRIORITY_UART7       =7u,
      NVIC_PRIORITY_RES80       =7u,
      NVIC_PRIORITY_RES81       =7u,
      NVIC_PRIORITY_RES82       =7u,
      NVIC_PRIORITY_RES83       =7u,
      NVIC_PRIORITY_I2C2        =7u,
      NVIC_PRIORITY_I2C3        =7u,
      NVIC_PRIORITY_TIMER4A     =7u,
      NVIC_PRIORITY_TIMER4B     =7u,
      NVIC_PRIORITY_RES88       =7u,
      NVIC_PRIORITY_RES89       =7u,
      NVIC_PRIORITY_RES90       =7u,
      NVIC_PRIORITY_RES91       =7u,
      NVIC_PRIORITY_RES92       =7u,
      NVIC_PRIORITY_RES93       =7u,
      NVIC_PRIORITY_RES96       =7u,
      NVIC_PRIORITY_RES97       =7u,
      NVIC_PRIORITY_RES98       =7u,
      NVIC_PRIORITY_RES99       =7u,
      NVIC_PRIORITY_RES100      =7u,
      NVIC_PRIORITY_RES101      =7u,
      NVIC_PRIORITY_RES102      =7u,
      NVIC_PRIORITY_RES103      =7u,
      NVIC_PRIORITY_RES107      =7u,
      NVIC_PRIORITY_TIMER5A     =7u,
      NVIC_PRIORITY_TIMER5B     =7u,
      NVIC_PRIORITY_WTIMER0A    =7u,
      NVIC_PRIORITY_WTIMER0B    =7u,
      NVIC_PRIORITY_WTIMER1A    =7u,
      NVIC_PRIORITY_WTIMER1B    =7u,
}NVIC_IPR_Priority;
*/

typedef volatile struct
{
    volatile uint32_t NVIC_GPIOA    :1;
    volatile uint32_t NVIC_GPIOB    :1;
    volatile uint32_t NVIC_GPIOC    :1;
    volatile uint32_t NVIC_GPIOD    :1;
    volatile uint32_t NVIC_GPIOE    :1;
    volatile uint32_t NVIC_UART0    :1;
    volatile uint32_t NVIC_UART1    :1;
    volatile uint32_t NVIC_SSI0     :1;
    volatile uint32_t NVIC_I2C0     :1;
    volatile uint32_t NVIC_PWM0FAULT :1;
    volatile uint32_t NVIC_PWM0GEN0  :1;
    volatile uint32_t NVIC_PWM0GEN1  :1;
    volatile uint32_t NVIC_PWM0GEN2  :1;
    volatile uint32_t NVIC_QEI0  	:1;
    volatile uint32_t NVIC_ADC0SEQ0 :1;
    volatile uint32_t NVIC_ADC0SEQ1 :1;
    volatile uint32_t NVIC_ADC0SEQ2 :1;
    volatile uint32_t NVIC_ADC0SEQ3 :1;
    volatile uint32_t NVIC_WDT01    :1;
    volatile uint32_t NVIC_TIMER0A  :1;
    volatile uint32_t NVIC_TIMER0B  :1;
    volatile uint32_t NVIC_TIMER1A  :1;
    volatile uint32_t NVIC_TIMER1B  :1;
    volatile uint32_t NVIC_TIMER2A  :1;
    volatile uint32_t NVIC_TIMER2B	:1;
    volatile uint32_t NVIC_ACOMP0	:1;
    volatile uint32_t NVIC_ACOMP1   :1;
    volatile uint32_t NVIC_RES43    :1;
    volatile uint32_t NVIC_SYSCTL   :1;
    volatile uint32_t NVIC_FLASH    :1;
    volatile uint32_t NVIC_GPIOF    :1;
    volatile uint32_t NVIC_RES47    :1;
}NVIC0_TypeDef;

typedef volatile struct
{
    volatile uint32_t NVIC_RES48    :1;
    volatile uint32_t NVIC_UART2    :1;
    volatile uint32_t NVIC_SSI1     :1;
    volatile uint32_t NVIC_TIMER3A  :1;
    volatile uint32_t NVIC_TIMER3B  :1;
    volatile uint32_t NVIC_I2C1     :1;
    volatile uint32_t NVIC_QEI1     :1;
    volatile uint32_t NVIC_CAN0     :1;
    volatile uint32_t NVIC_CAN1     :1;
    volatile uint32_t NVIC_RES57    :1;
    volatile uint32_t NVIC_RES58    :1;
    volatile uint32_t NVIC_HIB      :1;
    volatile uint32_t NVIC_USB      :1;
    volatile uint32_t NVIC_PWM0GEN3 :1;
    volatile uint32_t NVIC_UDMASOFT :1;
    volatile uint32_t NVIC_UDMAERROR:1;
    volatile uint32_t NVIC_ADC1SEQ0 :1;
    volatile uint32_t NVIC_ADC0SEQ1 :1;
    volatile uint32_t NVIC_ADC1SEQ2 :1;
    volatile uint32_t NVIC_ADC1SEQ3 :1;
    volatile uint32_t NVIC_RES68    :1;
    volatile uint32_t NVIC_RES69    :1;
    volatile uint32_t NVIC_RES70    :1;
    volatile uint32_t NVIC_RES71    :1;
    volatile uint32_t NVIC_RES72    :1;
    volatile uint32_t NVIC_SSI2     :1;
    volatile uint32_t NVIC_SSI3     :1;
    volatile uint32_t NVIC_UART3    :1;
    volatile uint32_t NVIC_UART4    :1;
    volatile uint32_t NVIC_UART5    :1;
    volatile uint32_t NVIC_UART6    :1;
    volatile uint32_t NVIC_UART7    :1;
}NVIC1_TypeDef;


typedef volatile struct
{
    volatile uint32_t NVIC_RES80    :1;
    volatile uint32_t NVIC_RES81    :1;
    volatile uint32_t NVIC_RES82    :1;
    volatile uint32_t NVIC_RES83    :1;
    volatile uint32_t NVIC_I2C2     :1;
    volatile uint32_t NVIC_I2C3     :1;
    volatile uint32_t NVIC_TIMER4A  :1;
    volatile uint32_t NVIC_TIMER4B  :1;
    volatile uint32_t NVIC_RES88    :1;
    volatile uint32_t NVIC_RES89    :1;
    volatile uint32_t NVIC_RES90    :1;
    volatile uint32_t NVIC_RES91    :1;
    volatile uint32_t NVIC_RES92    :1;
    volatile uint32_t NVIC_RES93    :1;
    volatile uint32_t NVIC_RES94    :1;
    volatile uint32_t NVIC_RES95    :1;
    volatile uint32_t NVIC_RES96    :1;
    volatile uint32_t NVIC_RES97    :1;
    volatile uint32_t NVIC_RES98    :1;
    volatile uint32_t NVIC_RES99    :1;
    volatile uint32_t NVIC_RES100   :1;
    volatile uint32_t NVIC_RES101   :1;
    volatile uint32_t NVIC_RES102   :1;
    volatile uint32_t NVIC_RES103   :1;
    volatile uint32_t NVIC_RES104   :1;
    volatile uint32_t NVIC_RES105   :1;
    volatile uint32_t NVIC_RES106   :1;
    volatile uint32_t NVIC_RES107   :1;
    volatile uint32_t NVIC_TIMER5A  :1;
    volatile uint32_t NVIC_TIMER5B  :1;
    volatile uint32_t NVIC_WTIMER0A :1;
    volatile uint32_t NVIC_WTIMER0B :1;
}NVIC2_TypeDef;


typedef volatile struct
{
    volatile uint32_t NVIC_WTIMER1A :1;
    volatile uint32_t NVIC_WTIMER1B :1;
    volatile uint32_t NVIC_WTIMER2A :1;
    volatile uint32_t NVIC_WTIMER2B :1;
    volatile uint32_t NVIC_WTIMER3A :1;
    volatile uint32_t NVIC_WTIMER3B :1;
    volatile uint32_t NVIC_WTIMER4A :1;
    volatile uint32_t NVIC_WTIMER4B :1;
    volatile uint32_t NVIC_WTIMER5A :1;
    volatile uint32_t NVIC_WTIMER5B :1;
    volatile uint32_t NVIC_SYSEXC   :1;
    volatile uint32_t NVIC_RES123   :1;
    volatile uint32_t NVIC_RES124   :1;
    volatile uint32_t NVIC_RES125   :1;
    volatile uint32_t NVIC_RES126   :1;
    volatile uint32_t NVIC_RES127   :1;
    volatile uint32_t NVIC_RES128   :1;
    volatile uint32_t NVIC_RES129   :1;
    volatile uint32_t NVIC_RES130   :1;
    volatile uint32_t NVIC_RES131   :1;
    volatile uint32_t NVIC_RES132   :1;
    volatile uint32_t NVIC_RES133   :1;
    volatile uint32_t NVIC_RES134   :1;
    volatile uint32_t NVIC_RES135   :1;
    volatile uint32_t NVIC_RES136   :1;
    volatile uint32_t NVIC_RES137   :1;
    volatile uint32_t NVIC_RES138   :1;
    volatile uint32_t NVIC_RES139   :1;
    volatile uint32_t NVIC_RES140   :1;
    volatile uint32_t NVIC_RES141   :1;
    volatile uint32_t NVIC_RES142   :1;
    volatile uint32_t NVIC_RES143   :1;
}NVIC3_TypeDef;


typedef volatile struct
{
    volatile uint32_t NVIC_RES144   :1;
    volatile uint32_t NVIC_RES145   :1;
    volatile uint32_t NVIC_RES146   :1;
    volatile uint32_t NVIC_RES147   :1;
    volatile uint32_t NVIC_RES148   :1;
    volatile uint32_t NVIC_RES149   :1;
    volatile uint32_t NVIC_PWM1GEN0 :1;
    volatile uint32_t NVIC_PWM1GEN1 :1;
    volatile uint32_t NVIC_PWM1GEN2 :1;
    volatile uint32_t NVIC_PWM1GEN3 :1;
    volatile uint32_t NVIC_PWM1FAULT:1;
    const uint32_t reserved         :21;
}NVIC4_TypeDef;


typedef volatile struct
{
    const uint32_t reserved 		:5;
    volatile uint32_t NVIC_GPIOA    :3;/*0*/
    const uint32_t reserved1		:5;
    volatile uint32_t NVIC_GPIOB    :3;/*1*/
    const uint32_t reserved2		:5;
    volatile uint32_t NVIC_GPIOC  	:3;/*2*/
    const uint32_t reserved3		:5;
    volatile uint32_t NVIC_GPIOD 	:3;/*3*/
}IPR0_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 		:5;
    volatile uint32_t NVIC_GPIOE    :3;/*4*/
    const uint32_t reserved1		:5;
    volatile uint32_t NVIC_UART0    :3;/*5*/
    const uint32_t reserved2		:5;
    volatile uint32_t NVIC_UART1    :3;/*6*/
    const uint32_t reserved3		:5;
    volatile uint32_t NVIC_SSI0	 	:3;/*7*/
}IPR1_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 		:5;
    volatile uint32_t NVIC_I2C0     :3;/*8*/
    const uint32_t reserved1		:5;
    volatile uint32_t NVIC_PWM0FAULT :3;/*9*/
    const uint32_t reserved2		:5;
    volatile uint32_t NVIC_PWM0GEN0  :3;/*10*/
    const uint32_t reserved3		:5;
    volatile uint32_t NVIC_PWM0GEN1	:3;/*11*/
}IPR2_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_PWM0GEN2	:3;/*12*/
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_QEI0     :3;/*13*/
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_ADC0SEQ0 :3;/*14*/
    const uint32_t reserved3        :5;
    volatile uint32_t NVIC_ADC0SEQ1 :3;/*15*/
}IPR3_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_ADC0SEQ2 :3;/*16*/
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_ADC0SEQ3 :3;/*17*/
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_WDT01    :3;/*18*/
    const uint32_t reserved3        :5;
    volatile uint32_t NVIC_TIMER0A  :3;/*19*/
}IPR4_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_TIMER0B		:3;/*20*/
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_TIMER1A		:3;/*21*/
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_TIMER1B	  	:3;/*22*/
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_TIMER2A	 	:3;/*23*/
}IPR5_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_TIMER2B  :3;/*24*/
    const uint32_t reserved1	    :5;
    volatile uint32_t NVIC_ACOMP0   :3;/*25*/
    const uint32_t reserved2	    :5;
    volatile uint32_t NVIC_ACOMP1   :3;/*26*/
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_RES43    :3;/*27*/
}IPR6_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_SYSCTL   :3;/*28*/
    const uint32_t reserved1	    :5;
    volatile uint32_t NVIC_FLASH    :3;/*29*/
    const uint32_t reserved2	    :5;
    volatile uint32_t NVIC_GPIOF    :3;/*30*/
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_RES47    :3;/*31*/
}IPR7_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_RES48		:3;/*32*/
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_UART2		:3;/*33*/
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_SSI1	  	    :3;/*34*/
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_TIMER3A	    :3;/*35*/
}IPR8_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_TIMER3B  :3;/*36*/
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_I2C1		:3;/*37*/
    const uint32_t reserved2	    :5;
    volatile uint32_t NVIC_QEI1	  	:3;/*38*/
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_CAN0	 	:3;/*39*/
}IPR9_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_CAN1	    :3;/*40*/
    const uint32_t reserved1	    :5;
    volatile uint32_t NVIC_RES57	:3;/*41*/
    const uint32_t reserved2	    :5;
    volatile uint32_t NVIC_RES58 	:3;/*42*/
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_HIB      :3;/*43*/
}IPR10_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_USB      :3;/*44*/
    const uint32_t reserved1	    :5;
    volatile uint32_t NVIC_PWM0GEN3 :3;/*45*/
    const uint32_t reserved2	    :5;
    volatile uint32_t NVIC_UDMASOFT :3;/*46*/
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_UDMAERROR:3;/*47*/
}IPR11_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_ADC1SEQ0 :3;/*48*/
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_ADC1SEQ1 :3;/*49*/
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_ADC1SEQ2 :3;/*50*/
    const uint32_t reserved3	    :5;
    volatile uint32_t NVIC_ADC1SEQ3 :3;/*51*/
}IPR12_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_RES68		:3;/*52*/
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_RES69		:3;/*53*/
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_RES70	 	:3;/*54*/
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_RES71		:3;/*55*/
}IPR13_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_RES72        :3;/*56*/
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_SSI2         :3;/*57*/
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_SSI3         :3;/*58*/
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_UART3        :3;/*59*/
}IPR14_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_UART4        :3;/*60*/
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_UART5      	:3;/*61*/
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_UART6 	    :3;/*62*/
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_UART7  	    :3;/*63*/
}IPR15_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_RES80		:3;/*64*/
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_RES81		:3;/*65*/
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_RES82 	    :3;/*66*/
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_RES83	 	:3;/*67*/
}IPR16_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_I2C2	        :3;/*68*/
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_I2C3         :3;/*69*/
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_TIMER4A      :3;/*70*/
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_TIMER4B	 	:3;/*71*/
}IPR17_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_RES88		:3;/*72*/
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_RES89		:3;/*73*/
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_RES90        :3;/*74*/
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_RES91        :3;/*75*/
}IPR18_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_RES92        :3;/*76*/
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_RES93		:3;/*77*/
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_RES94		:3;/*78*/
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_RES95	 	:3;/*79*/
}IPR19_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_RES96	    :3;/*80*/
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_RES97		:3;/*81*/
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_RES98		:3;/*82*/
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_RES99	 	:3;/*83*/
}IPR20_TypeDef;


typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_RES100 		:3;/*84*/
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_RES101 		:3;/*85*/
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_RES102 		:3;/*86*/
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_RES103 	 	:3;/*87*/
}IPR21_TypeDef;


typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_RES104 		:3;/*88*/
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_RES105 		:3;/*89*/
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_RES106    	:3;/*90*/
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_RES107 	 	:3;/*91*/
}IPR22_TypeDef;


typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_TIMER5A 		:3;/*92*/
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_TIMER5B 		:3;/*93*/
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_WTIMER0A     :3;/*94*/
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_WTIMER0B 	:3;/*95*/
}IPR23_TypeDef;

typedef volatile struct
{
    const uint32_t reserved 			:5;
    volatile uint32_t NVIC_WTIMER1A		:3;/*96*/
    const uint32_t reserved1			:5;
    volatile uint32_t NVIC_WTIMER1B 	:3;/*97*/
    const uint32_t reserved2			:5;
    volatile uint32_t NVIC_WTIMER2A   	:3;/*98*/
    const uint32_t reserved3			:5;
    volatile uint32_t NVIC_WTIMER2B 	:3;/*99*/
}IPR24_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_WTIMER3A     :3;/*100*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_WTIMER3B     :3;/*101*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_WTIMER4A     :3;/*102*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_WTIMER4B     :3;/*103*/
}IPR25_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_WTIMER5A     :3;/*104*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_WTIMER5B     :3;/*105*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_SYSEXC       :3;/*106*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES123       :3;/*107*/
}IPR26_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES124       :3;/*108*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES125       :3;/*109*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_RES126       :3;/*110*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES127       :3;/*111*/
}IPR27_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES128       :3;/*112*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES129       :3;/*113*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_RES130       :3;/*114*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES131       :3;/*115*/
}IPR28_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES132       :3;/*116*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES133       :3;/*117*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_RES134       :3;/*118*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES135       :3;/*119*/
}IPR29_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES136       :3;/*120*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES137       :3;/*121*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_RES138       :3;/*122*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES139       :3;/*123*/
}IPR30_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES140       :3;/*124*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES141       :3;/*125*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_RES142       :3;/*126*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES143       :3;/*127*/
}IPR31_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES144       :3;/*128*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES145       :3;/*129*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_RES146       :3;/*130*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES147       :3;/*131*/
}IPR32_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES148       :3;/*132*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES149       :3;/*133*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_PWM1GEN0     :3;/*134*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_PWM1GEN1     :3;/*135*/
}IPR33_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_PWM1GEN2     :3;/*136*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_PWM1GEN3     :3;/*137*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_PWM1FAULT    :3;/*138*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES155       :3;/*139*/
}IPR34_TypeDef;



typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t IP0  	:3;/*0*/
    const uint32_t reserved1:5;
    volatile uint32_t IP1   :3;/*1*/
    const uint32_t reserved2:5;
    volatile uint32_t IP2  	:3;/*2*/
    const uint32_t reserved3:5;
    volatile uint32_t IP3   :3;/*3*/
}IPRw_TypeDef;

typedef volatile struct
{
     const uint8_t reserved    :5;
     volatile uint8_t IP    	:3;/*0*/
}IPRb_TypeDef;




typedef volatile struct
{
    IPRb_TypeDef IPR[240];
}IPRb__TypeDef;

typedef volatile struct
{
    IPRw_TypeDef IPR[60];
}IPRw__TypeDef;




typedef volatile struct
{
    volatile uint32_t INTID     :8;
    const uint32_t reserved     :24;
}STIR_TypeDef;




typedef volatile struct
{
    volatile uint32_t   ISER[5U];                 /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register           */
    const uint32_t      reserved0[27U];
    volatile uint32_t   ICER[5U];                 /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register         */
    const uint32_t      reserved1[27U];
    volatile uint32_t   ISPR[5U];                 /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register          */
    const uint32_t      reserved2[27U];
    volatile uint32_t   ICPR[5U];                 /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register        */
    const uint32_t      reserved3[27U];
    volatile uint32_t   IABR[5U];                 /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register           */
    const uint32_t      reserved4[59U];
    volatile uint8_t    IP[240U];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
    const uint32_t      reserved5[644U];
    volatile  uint32_t  STIR;                    /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register     */
}  NVICb_TypeDef;


typedef volatile struct
{
    volatile uint32_t   ISER[5U];                 /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register           */
    const uint32_t      reserved0[27U];
    volatile uint32_t   ICER[5U];                 /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register         */
    const uint32_t      reserved1[27U];
    volatile uint32_t   ISPR[5U];                 /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register          */
    const uint32_t      reserved2[27U];
    volatile uint32_t   ICPR[5U];                 /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register        */
    const uint32_t      reserved3[27U];
    volatile uint32_t   IABR[5U];                 /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register           */
    const uint32_t      reserved4[59U];
    volatile uint32_t   IP[60];                 /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
    const uint32_t      reserved5[644U];
    volatile  uint32_t  STIR;                    /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register     */
}  NVICw_TypeDef;



typedef volatile struct
{
    union
    {
        volatile uint32_t  		ISER0;
        NVIC0_TypeDef           ISER0_Bit;
    };
    union
    {
        volatile uint32_t  		ISER1;
        NVIC1_TypeDef           ISER1_Bit;
    };
    union
    {
        volatile uint32_t  		ISER2;
        NVIC2_TypeDef           ISER2_Bit;
    };
    union
    {
        volatile uint32_t  		ISER3;
        NVIC3_TypeDef           ISER3_Bit;
    };
    union
    {
        volatile uint32_t       ISER4;
        NVIC4_TypeDef           ISER4_Bit;
    };

    uint32_t                    reserved[27U];

    union
    {
        volatile uint32_t  		ICER0;
        NVIC0_TypeDef           ICER0_Bit;
    };
    union
    {
        volatile uint32_t  		ICER1;
        NVIC1_TypeDef           ICER1_Bit;
    };
    union
    {
        volatile uint32_t  		ICER2;
        NVIC2_TypeDef           ICER2_Bit;
    };
    union
    {
        volatile uint32_t  		ICER3;
        NVIC3_TypeDef           ICER3_Bit;
    };
    union
    {
        volatile uint32_t       ICER4;
        NVIC4_TypeDef           ICER4_Bit;
    };

    uint32_t  				    reserved1[27U];

    union
    {
        volatile uint32_t  		ISPR0;
        NVIC0_TypeDef           ISPR0_Bit;
    };
    union
    {
        volatile uint32_t  		ISPR1;
        NVIC1_TypeDef           ISPR1_Bit;
    };
    union
    {
        volatile uint32_t  		ISPR2;
        NVIC2_TypeDef           ISPR2_Bit;
    };
    union
    {
        volatile uint32_t  		ISPR3;
        NVIC3_TypeDef           ISPR3_Bit;
    };
    union
    {
        volatile uint32_t       ISPR4;
        NVIC4_TypeDef           ISPR4_Bit;
    };

    uint32_t  				reserved2[27U];

    union
    {
        volatile uint32_t  		ICPR0;
        NVIC0_TypeDef           ICPR0_Bit;
    };
    union
    {
        volatile uint32_t  		ICPR1;
        NVIC1_TypeDef           ICPR1_Bit;
    };
    union
    {
        volatile uint32_t  		ICPR2;
        NVIC2_TypeDef           ICPR2_Bit;
    };
    union
    {
        volatile uint32_t  		ICPR3;
        NVIC3_TypeDef           ICPR3_Bit;
    };
    union
    {
        volatile uint32_t       ICPR4;
        NVIC4_TypeDef           ICPR4_Bit;
    };

    uint32_t  				reserved3[27U];

    union
    {
        volatile uint32_t  		IABR0;
        NVIC0_TypeDef           IABR0_Bit;
    };
    union
    {
        volatile uint32_t  		IABR1;
        NVIC1_TypeDef           IABR1_Bit;
    };
    union
    {
        volatile uint32_t  		IABR2;
        NVIC2_TypeDef           IABR2_Bit;
    };
    union
    {
        volatile uint32_t  		IABR3;
        NVIC3_TypeDef           IABR3_Bit;
    };
    union
    {
        volatile uint32_t       IABR4;
        NVIC4_TypeDef           IABR4_Bit;
    };

    uint32_t  				reserved4[59U];

    union
    {
        volatile uint8_t  		IPR0b[4];
        IPRb_TypeDef  		    IPR0b_Bit[4];
        volatile uint32_t  		IPR0w;
        IPRw_TypeDef  		    IPR0w_Bit;
        volatile uint32_t 		IPR0;
        IPR0_TypeDef            IPR0_Bit;
    };
    union
    {
        volatile uint8_t  		IPR1b[4];
        IPRb_TypeDef  		    IPR1b_Bit[4];
        volatile uint32_t  		IPR1w;
        IPRw_TypeDef  		    IPR1w_Bit;
        volatile uint32_t 		IPR1;
        IPR1_TypeDef            IPR1_Bit;
    };
    union
    {
        volatile uint8_t  		IPR2b[4];
        IPRb_TypeDef  		    IPR2b_Bit[4];
        volatile uint32_t  		IPR2w;
        IPRw_TypeDef  		    IPR2w_Bit;
        volatile uint32_t 		IPR2;
        IPR2_TypeDef            IPR2_Bit;
    };
    union
    {
        volatile uint8_t  		IPR3b[4];
        IPRb_TypeDef  		    IPR3b_Bit[4];
        volatile uint32_t  		IPR3w;
        IPRw_TypeDef  		    IPR3w_Bit;
        volatile uint32_t 		IPR3;
        IPR3_TypeDef            IPR3_Bit;
    };
    union
    {
        volatile uint8_t  		IPR4b[4];
        IPRb_TypeDef  		    IPR4b_Bit[4];
        volatile uint32_t  		IPR4w;
        IPRw_TypeDef  		    IPR4w_Bit;
        volatile uint32_t 		IPR4;
        IPR4_TypeDef            IPR4_Bit;
    };
    union
    {
        volatile uint8_t  		IPR5b[4];
        IPRb_TypeDef  		    IPR5b_Bit[4];
        volatile uint32_t  		IPR5w;
        IPRw_TypeDef  		    IPR5w_Bit;
        volatile uint32_t 		IPR5;
        IPR5_TypeDef            IPR5_Bit;
    };
    union
    {
        volatile uint8_t  		IPR6b[4];
        IPRb_TypeDef  		    IPR6b_Bit[4];
        volatile uint32_t  		IPR6w;
        IPRw_TypeDef  		    IPR6w_Bit;
        volatile uint32_t 		IPR6;
        IPR6_TypeDef            IPR6_Bit;
    };
    union
    {
        volatile uint8_t  		IPR7b[4];
        IPRb_TypeDef  		    IPR7b_Bit[4];
        volatile uint32_t  		IPR7w;
        IPRw_TypeDef  		    IPR7w_Bit;
        volatile uint32_t 		IPR7;
        IPR7_TypeDef            IPR7_Bit;
    };
    union
    {
        volatile uint8_t  		IPR8b[4];
        IPRb_TypeDef  		    IPR8b_Bit[4];
        volatile uint32_t  		IPR8w;
        IPRw_TypeDef  		    IPR8w_Bit;
        volatile uint32_t 		IPR8;
        IPR8_TypeDef            IPR8_Bit;
    };
    union
    {
        volatile uint8_t  		IPR9b[4];
        IPRb_TypeDef  		    IPR9b_Bit[4];
        volatile uint32_t  		IPR9w;
        IPRw_TypeDef  		    IPR9w_Bit;
        volatile uint32_t 		IPR9;
        IPR9_TypeDef            IPR9_Bit;
    };
    union
    {
        volatile uint8_t  		IPR10b[4];
        IPRb_TypeDef  		    IPR10b_Bit[4];
        volatile uint32_t  		IPR10w;
        IPRw_TypeDef  		    IPR10w_Bit;
        volatile uint32_t 		IPR10;
        IPR10_TypeDef           IPR10_Bit;
    };
    union
    {
        volatile uint8_t  		IPR11b[4];
        IPRb_TypeDef  		    IPR11b_Bit[4];
        volatile uint32_t  		IPR11w;
        IPRw_TypeDef  		    IPR11w_Bit;
        volatile uint32_t 		IPR11;
        IPR11_TypeDef           IPR11_Bit;
    };
    union
    {
        volatile uint8_t  		IPR12b[4];
        IPRb_TypeDef  		    IPR12b_Bit[4];
        volatile uint32_t  		IPR12w;
        IPRw_TypeDef  		    IPR12w_Bit;
        volatile uint32_t 		IPR12;
        IPR12_TypeDef           IPR12_Bit;
    };
    union
    {
        volatile uint8_t  		IPR13b[4];
        IPRb_TypeDef  		    IPR13b_Bit[4];
        volatile uint32_t  		IPR13w;
        IPRw_TypeDef  		    IPR13w_Bit;
        volatile uint32_t 		IPR13;
        IPR13_TypeDef           IPR13_Bit;
    };
    union
    {
        volatile uint8_t  		IPR14b[4];
        IPRb_TypeDef  		    IPR14b_Bit[4];
        volatile uint32_t  		IPR14w;
        IPRw_TypeDef  		    IPR14w_Bit;
        volatile uint32_t 		IPR14;
        IPR14_TypeDef           IPR14_Bit;
    };
    union
    {
        volatile uint8_t  		IPR15b[4];
        IPRb_TypeDef  		    IPR15b_Bit[4];
        volatile uint32_t  		IPR15w;
        IPRw_TypeDef  		    IPR15w_Bit;
        volatile uint32_t 		IPR15;
        IPR15_TypeDef           IPR15_Bit;
    };
    union
    {
        volatile uint8_t  		IPR16b[4];
        IPRb_TypeDef  		    IPR16b_Bit[4];
        volatile uint32_t  		IPR16w;
        IPRw_TypeDef  		    IPR16w_Bit;
        volatile uint32_t 		IPR16;
        IPR16_TypeDef           IPR16_Bit;
    };
    union
    {
        volatile uint8_t  		IPR17b[4];
        IPRb_TypeDef  		    IPR17b_Bit[4];
        volatile uint32_t  		IPR17w;
        IPRw_TypeDef  		    IPR17w_Bit;
        volatile uint32_t 		IPR17;
        IPR17_TypeDef           IPR17_Bit;
    };
    union
    {
        volatile uint8_t  		IPR18b[4];
        IPRb_TypeDef  		    IPR18b_Bit[4];
        volatile uint32_t  		IPR18w;
        IPRw_TypeDef  		    IPR18w_Bit;
        volatile uint32_t 		IPR18;
        IPR18_TypeDef           IPR18_Bit;
    };
    union
    {
        volatile uint8_t  		IPR19b[4];
        IPRb_TypeDef  		    IPR19b_Bit[4];
        volatile uint32_t  		IPR19w;
        IPRw_TypeDef  		    IPR19w_Bit;
        volatile uint32_t 		IPR19;
        IPR19_TypeDef           IPR19_Bit;
    };
    union
    {
        volatile uint8_t  		IPR20b[4];
        IPRb_TypeDef  		    IPR20b_Bit[4];
        volatile uint32_t  		IPR20w;
        IPRw_TypeDef  		    IPR20w_Bit;
        volatile uint32_t 		IPR20;
        IPR20_TypeDef           IPR20_Bit;
    };
    union
    {
        volatile uint8_t  		IPR21b[4];
        IPRb_TypeDef  		    IPR21b_Bit[4];
        volatile uint32_t  		IPR21w;
        IPRw_TypeDef  		    IPR21w_Bit;
        volatile uint32_t 		IPR21;
        IPR21_TypeDef           IPR21_Bit;
    };
    union
    {
        volatile uint8_t  		IPR22b[4];
        IPRb_TypeDef  		    IPR22b_Bit[4];
        volatile uint32_t  		IPR22w;
        IPRw_TypeDef  		    IPR22w_Bit;
        volatile uint32_t 		IPR22;
        IPR22_TypeDef           IPR22_Bit;
    };

    union
    {
        volatile uint8_t  		IPR23b[4];
        IPRb_TypeDef  		    IPR23b_Bit[4];
        volatile uint32_t  		IPR23w;
        IPRw_TypeDef  		    IPR23w_Bit;
        volatile uint32_t 		IPR23;
        IPR23_TypeDef           IPR23_Bit;
    };

    union
    {
        volatile uint8_t  		IPR24b[4];
        IPRb_TypeDef  		    IPR24b_Bit[4];
        volatile uint32_t  		IPR24w;
        IPRw_TypeDef  		    IPR24w_Bit;
        volatile uint32_t 		IPR24;
        IPR24_TypeDef           IPR24_Bit;
    };

    union
    {
        volatile uint8_t        IPR25b[4];
        IPRb_TypeDef            IPR25b_Bit[4];
        volatile uint32_t       IPR25w;
        IPRw_TypeDef            IPR25w_Bit;
        volatile uint32_t       IPR25;
        IPR25_TypeDef           IPR25_Bit;
    };

    union
    {
        volatile uint8_t        IPR26b[4];
        IPRb_TypeDef            IPR26b_Bit[4];
        volatile uint32_t       IPR26w;
        IPRw_TypeDef            IPR26w_Bit;
        volatile uint32_t       IPR26;
        IPR26_TypeDef           IPR26_Bit;
    };

    union
    {
        volatile uint8_t        IPR27b[4];
        IPRb_TypeDef            IPR27b_Bit[4];
        volatile uint32_t       IPR27w;
        IPRw_TypeDef            IPR27w_Bit;
        volatile uint32_t       IPR27;
        IPR27_TypeDef           IPR27_Bit;
    };

    union
    {
        volatile uint8_t        IPR28b[4];
        IPRb_TypeDef            IPR28b_Bit[4];
        volatile uint32_t       IPR28w;
        IPRw_TypeDef            IPR28w_Bit;
        volatile uint32_t       IPR28;
        IPR28_TypeDef           IPR28_Bit;
    };

    union
    {
        volatile uint8_t        IPR29b[4];
        IPRb_TypeDef            IPR29b_Bit[4];
        volatile uint32_t       IPR29w;
        IPRw_TypeDef            IPR29w_Bit;
        volatile uint32_t       IPR29;
        IPR29_TypeDef           IPR29_Bit;
    };

    union
    {
        volatile uint8_t        IPR30b[4];
        IPRb_TypeDef            IPR30b_Bit[4];
        volatile uint32_t       IPR30w;
        IPRw_TypeDef            IPR30w_Bit;
        volatile uint32_t       IPR30;
        IPR30_TypeDef           IPR30_Bit;
    };

    union
    {
        volatile uint8_t        IPR31b[4];
        IPRb_TypeDef            IPR31b_Bit[4];
        volatile uint32_t       IPR31w;
        IPRw_TypeDef            IPR31w_Bit;
        volatile uint32_t       IPR31;
        IPR31_TypeDef           IPR31_Bit;
    };

    union
    {
        volatile uint8_t        IPR32b[4];
        IPRb_TypeDef            IPR32b_Bit[4];
        volatile uint32_t       IPR32w;
        IPRw_TypeDef            IPR32w_Bit;
        volatile uint32_t       IPR32;
        IPR32_TypeDef           IPR32_Bit;
    };

    union
    {
        volatile uint8_t        IPR33b[4];
        IPRb_TypeDef            IPR33b_Bit[4];
        volatile uint32_t       IPR33w;
        IPRw_TypeDef            IPR33w_Bit;
        volatile uint32_t       IPR33;
        IPR33_TypeDef           IPR33_Bit;
    };

    union
    {
        volatile uint8_t        IPR34b[4];
        IPRb_TypeDef            IPR34b_Bit[4];
        volatile uint32_t       IPR34w;
        IPRw_TypeDef            IPR34w_Bit;
        volatile uint32_t       IPR34;
        IPR34_TypeDef           IPR34_Bit;
    };

    uint32_t  				reserved5[659U];

    union
    {
        volatile uint32_t  		STIR;
        STIR_TypeDef        STIR_Bit;
    };

}NVIC_TypeDef;

#define NVIC                ((NVIC_TypeDef*)(NVIC_BASE +NVIC_OFFSET))   /*!< NVIC configuration struct          */
#define NVICw               ((NVICw_TypeDef*)(NVIC_BASE +NVIC_OFFSET))   /*!< NVIC configuration struct          */
#define NVICb               ((NVICb_TypeDef*)(NVIC_BASE +NVIC_OFFSET))   /*!< NVIC configuration struct          */


#define NVIC_ISER0_OFFSET       ((uint32_t)0x0100u)
#define NVIC_ICER0_OFFSET       ((uint32_t)0x0180u)
#define NVIC_ISPR0_OFFSET       ((uint32_t)0x0200u)
#define NVIC_ICPR0_OFFSET       ((uint32_t)0x0280u)
#define NVIC_IABR0_OFFSET       ((uint32_t)0x0300u)
#define NVIC_ISER1_OFFSET       ((uint32_t)0x0104u)
#define NVIC_ICER1_OFFSET       ((uint32_t)0x0184u)
#define NVIC_ISPR1_OFFSET       ((uint32_t)0x0204u)
#define NVIC_ICPR1_OFFSET       ((uint32_t)0x0284u)
#define NVIC_IABR1_OFFSET       ((uint32_t)0x0304u)
#define NVIC_ISER2_OFFSET       ((uint32_t)0x0108u)
#define NVIC_ICER2_OFFSET       ((uint32_t)0x0188u)
#define NVIC_ISPR2_OFFSET       ((uint32_t)0x0208u)
#define NVIC_ICPR2_OFFSET       ((uint32_t)0x0288u)
#define NVIC_IABR2_OFFSET       ((uint32_t)0x0308u)
#define NVIC_ISER3_OFFSET       ((uint32_t)0x010Cu)
#define NVIC_ICER3_OFFSET       ((uint32_t)0x018Cu)
#define NVIC_ISPR3_OFFSET       ((uint32_t)0x020Cu)
#define NVIC_ICPR3_OFFSET       ((uint32_t)0x028Cu)
#define NVIC_IABR3_OFFSET       ((uint32_t)0x030Cu)
#define NVIC_ISER4_OFFSET       ((uint32_t)0x0110u)
#define NVIC_ICER4_OFFSET       ((uint32_t)0x0190u)
#define NVIC_ISPR4_OFFSET       ((uint32_t)0x0210u)
#define NVIC_ICPR4_OFFSET       ((uint32_t)0x0290u)
#define NVIC_IABR4_OFFSET       ((uint32_t)0x0310u)
#define NVIC_IPR0_OFFSET        ((uint32_t)0x0400u)
#define NVIC_IPR1_OFFSET        ((uint32_t)0x0404u)
#define NVIC_IPR2_OFFSET        ((uint32_t)0x0408u)
#define NVIC_IPR3_OFFSET        ((uint32_t)0x040Cu)
#define NVIC_IPR4_OFFSET        ((uint32_t)0x0410u)
#define NVIC_IPR5_OFFSET        ((uint32_t)0x0414u)
#define NVIC_IPR6_OFFSET        ((uint32_t)0x0418u)
#define NVIC_IPR7_OFFSET        ((uint32_t)0x041Cu)
#define NVIC_IPR8_OFFSET        ((uint32_t)0x0420u)
#define NVIC_IPR9_OFFSET        ((uint32_t)0x0424u)
#define NVIC_IPR10_OFFSET       ((uint32_t)0x0428u)
#define NVIC_IPR11_OFFSET       ((uint32_t)0x042Cu)
#define NVIC_IPR12_OFFSET       ((uint32_t)0x0430u)
#define NVIC_IPR13_OFFSET       ((uint32_t)0x0434u)
#define NVIC_IPR14_OFFSET       ((uint32_t)0x0438u)
#define NVIC_IPR15_OFFSET       ((uint32_t)0x043Cu)
#define NVIC_IPR16_OFFSET       ((uint32_t)0x0440u)
#define NVIC_IPR17_OFFSET       ((uint32_t)0x0444u)
#define NVIC_IPR18_OFFSET       ((uint32_t)0x0448u)
#define NVIC_IPR19_OFFSET       ((uint32_t)0x044Cu)
#define NVIC_IPR20_OFFSET       ((uint32_t)0x0450u)
#define NVIC_IPR21_OFFSET       ((uint32_t)0x0454u)
#define NVIC_IPR22_OFFSET       ((uint32_t)0x0458u)
#define NVIC_IPR23_OFFSET       ((uint32_t)0x045Cu)
#define NVIC_IPR24_OFFSET       ((uint32_t)0x0460u)
#define NVIC_IPR25_OFFSET       ((uint32_t)0x0464u)
#define NVIC_IPR26_OFFSET       ((uint32_t)0x0468u)
#define NVIC_IPR27_OFFSET       ((uint32_t)0x046Cu)
#define NVIC_IPR28_OFFSET       ((uint32_t)0x0470u)
#define NVIC_IPR29_OFFSET       ((uint32_t)0x0474u)
#define NVIC_IPR30_OFFSET       ((uint32_t)0x0478u)
#define NVIC_IPR31_OFFSET       ((uint32_t)0x047Cu)
#define NVIC_IPR32_OFFSET       ((uint32_t)0x0480u)
#define NVIC_IPR33_OFFSET       ((uint32_t)0x0484u)
#define NVIC_IPR34_OFFSET       ((uint32_t)0x0488u)
#define NVIC_STIR_OFFSET        ((uint32_t)0x0F00u)


/********************************************************************************************/
/************************************* ISER0 ***********************************************/
/********************************************************************************************/

#define NVIC_ISER0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ISER0_OFFSET)))
#define NVIC_ISER0_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISER0_OFFSET)))


/*----------*/
#define NVIC_ISER0_R_NVIC_GPIOA_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER0_R_NVIC_GPIOA_BIT     (0)
#define NVIC_ISER0_R_NVIC_GPIOA_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_GPIOA_EN      ((uint32_t)0x00000001u)

#define NVIC_ISER0_NVIC_GPIOA_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_GPIOA_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_GPIOA_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_GPIOB_MASK    ((uint32_t)0x00000002u)
#define NVIC_ISER0_R_NVIC_GPIOB_BIT     (1)
#define NVIC_ISER0_R_NVIC_GPIOB_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_GPIOB_EN      ((uint32_t)0x00000002u)

#define NVIC_ISER0_NVIC_GPIOB_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_GPIOB_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_GPIOB_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_GPIOC_MASK    ((uint32_t)0x00000004u)
#define NVIC_ISER0_R_NVIC_GPIOC_BIT     (2)
#define NVIC_ISER0_R_NVIC_GPIOC_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_GPIOC_EN      ((uint32_t)0x00000004u)

#define NVIC_ISER0_NVIC_GPIOC_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_GPIOC_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_GPIOC_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISER0_R_NVIC_GPIOD_MASK    ((uint32_t)0x00000008u)
#define NVIC_ISER0_R_NVIC_GPIOD_BIT     (3)
#define NVIC_ISER0_R_NVIC_GPIOD_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_GPIOD_EN      ((uint32_t)0x00000008u)

#define NVIC_ISER0_NVIC_GPIOD_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_GPIOD_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_GPIOD_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_GPIOE_MASK    ((uint32_t)0x00000010u)
#define NVIC_ISER0_R_NVIC_GPIOE_BIT     (4)
#define NVIC_ISER0_R_NVIC_GPIOE_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_GPIOE_EN      ((uint32_t)0x00000010u)

#define NVIC_ISER0_NVIC_GPIOE_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_GPIOE_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_GPIOE_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_UART0_MASK    ((uint32_t)0x00000020u)
#define NVIC_ISER0_R_NVIC_UART0_BIT     (5)
#define NVIC_ISER0_R_NVIC_UART0_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_UART0_EN      ((uint32_t)0x00000020u)

#define NVIC_ISER0_NVIC_UART0_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_UART0_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_UART0_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_UART1_MASK    ((uint32_t)0x00000040u)
#define NVIC_ISER0_R_NVIC_UART1_BIT     (6)
#define NVIC_ISER0_R_NVIC_UART1_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_UART1_EN      ((uint32_t)0x00000040u)

#define NVIC_ISER0_NVIC_UART1_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_UART1_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_UART1_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_SSI0_MASK     ((uint32_t)0x00000080u)
#define NVIC_ISER0_R_NVIC_SSI0_BIT      (7)
#define NVIC_ISER0_R_NVIC_SSI0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_SSI0_EN       ((uint32_t)0x00000080u)

#define NVIC_ISER0_NVIC_SSI0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_SSI0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_SSI0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_I2C0_MASK     ((uint32_t)0x00000100u)
#define NVIC_ISER0_R_NVIC_I2C0_BIT      (8)
#define NVIC_ISER0_R_NVIC_I2C0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_I2C0_EN       ((uint32_t)0x00000100u)

#define NVIC_ISER0_NVIC_I2C0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_I2C0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_I2C0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_PWM0FAULT_MASK ((uint32_t)0x00000200u)
#define NVIC_ISER0_R_NVIC_PWM0FAULT_BIT  (9)
#define NVIC_ISER0_R_NVIC_PWM0FAULT_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_PWM0FAULT_EN   ((uint32_t)0x00000200u)

#define NVIC_ISER0_NVIC_PWM0FAULT_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_PWM0FAULT_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_PWM0FAULT_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_PWM0GEN0_MASK  ((uint32_t)0x00000400u)
#define NVIC_ISER0_R_NVIC_PWM0GEN0_BIT   (10)
#define NVIC_ISER0_R_NVIC_PWM0GEN0_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_PWM0GEN0_EN    ((uint32_t)0x00000400u)

#define NVIC_ISER0_NVIC_PWM0GEN0_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_PWM0GEN0_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_PWM0GEN0_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_PWM0GEN1_MASK  ((uint32_t)0x00000800u)
#define NVIC_ISER0_R_NVIC_PWM0GEN1_BIT   (11)
#define NVIC_ISER0_R_NVIC_PWM0GEN1_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_PWM0GEN1_EN    ((uint32_t)0x00000800u)

#define NVIC_ISER0_NVIC_PWM0GEN1_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_PWM0GEN1_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_PWM0GEN1_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_PWM0GEN2_MASK  ((uint32_t)0x00001000u)
#define NVIC_ISER0_R_NVIC_PWM0GEN2_BIT   (12)
#define NVIC_ISER0_R_NVIC_PWM0GEN2_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_PWM0GEN2_EN    ((uint32_t)0x00001000u)

#define NVIC_ISER0_NVIC_PWM0GEN2_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_PWM0GEN2_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_PWM0GEN2_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_QEI0_MASK     ((uint32_t)0x00002000u)
#define NVIC_ISER0_R_NVIC_QEI0_BIT      (13)
#define NVIC_ISER0_R_NVIC_QEI0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_QEI0_EN       ((uint32_t)0x00002000u)

#define NVIC_ISER0_NVIC_QEI0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_QEI0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_QEI0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_ADC0SEQ0_MASK ((uint32_t)0x00004000u)
#define NVIC_ISER0_R_NVIC_ADC0SEQ0_BIT  (14)
#define NVIC_ISER0_R_NVIC_ADC0SEQ0_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_ADC0SEQ0_EN   ((uint32_t)0x00004000u)

#define NVIC_ISER0_NVIC_ADC0SEQ0_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_ADC0SEQ0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_ADC0SEQ0_EN ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_ADC0SEQ1_MASK ((uint32_t)0x00008000u)
#define NVIC_ISER0_R_NVIC_ADC0SEQ1_BIT  (15)
#define NVIC_ISER0_R_NVIC_ADC0SEQ1_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_ADC0SEQ1_EN   ((uint32_t)0x00008000u)

#define NVIC_ISER0_NVIC_ADC0SEQ1_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_ADC0SEQ1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_ADC0SEQ1_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_ADC0SEQ2_MASK ((uint32_t)0x00010000u)
#define NVIC_ISER0_R_NVIC_ADC0SEQ2_BIT  (16)
#define NVIC_ISER0_R_NVIC_ADC0SEQ2_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_ADC0SEQ2_EN   ((uint32_t)0x00010000u)

#define NVIC_ISER0_NVIC_ADC0SEQ2_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_ADC0SEQ2_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_ADC0SEQ2_EN ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_ADC0SEQ3_MASK ((uint32_t)0x00020000u)
#define NVIC_ISER0_R_NVIC_ADC0SEQ3_BIT  (17)
#define NVIC_ISER0_R_NVIC_ADC0SEQ3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_ADC0SEQ3_EN   ((uint32_t)0x00020000u)

#define NVIC_ISER0_NVIC_ADC0SEQ3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_ADC0SEQ3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_ADC0SEQ3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_WDT01_MASK    ((uint32_t)0x00040000u)
#define NVIC_ISER0_R_NVIC_WDT01_BIT     (18)
#define NVIC_ISER0_R_NVIC_WDT01_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_WDT01_EN      ((uint32_t)0x00040000u)

#define NVIC_ISER0_NVIC_WDT01_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_WDT01_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_WDT01_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_TIMER0A_MASK  ((uint32_t)0x00080000u)
#define NVIC_ISER0_R_NVIC_TIMER0A_BIT   (19)
#define NVIC_ISER0_R_NVIC_TIMER0A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_TIMER0A_EN    ((uint32_t)0x00080000u)

#define NVIC_ISER0_NVIC_TIMER0A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_TIMER0A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_TIMER0A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_TIMER0B_MASK  ((uint32_t)0x00100000u)
#define NVIC_ISER0_R_NVIC_TIMER0B_BIT   (20)
#define NVIC_ISER0_R_NVIC_TIMER0B_DI    ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_TIMER0B_EN    ((uint32_t)0x00100000u)

#define NVIC_ISER0_NVIC_TIMER0B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_TIMER0B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_TIMER0B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_TIMER1A_MASK  ((uint32_t)0x00200000u)
#define NVIC_ISER0_R_NVIC_TIMER1A_BIT   (21)
#define NVIC_ISER0_R_NVIC_TIMER1A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_TIMER1A_EN    ((uint32_t)0x00200000u)

#define NVIC_ISER0_NVIC_TIMER1A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_TIMER1A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_TIMER1A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_TIMER1B_MASK  ((uint32_t)0x00400000u)
#define NVIC_ISER0_R_NVIC_TIMER1B_BIT   (22)
#define NVIC_ISER0_R_NVIC_TIMER1B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_TIMER1B_EN    ((uint32_t)0x00400000u)

#define NVIC_ISER0_NVIC_TIMER1B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_TIMER1B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_TIMER1B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_TIMER2A_MASK  ((uint32_t)0x00800000u)
#define NVIC_ISER0_R_NVIC_TIMER2A_BIT   (23)
#define NVIC_ISER0_R_NVIC_TIMER2A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_TIMER2A_EN    ((uint32_t)0x00800000u)

#define NVIC_ISER0_NVIC_TIMER2A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_TIMER2A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_TIMER2A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_TIMER2B_MASK  ((uint32_t)0x01000000u)
#define NVIC_ISER0_R_NVIC_TIMER2B_BIT   (24)
#define NVIC_ISER0_R_NVIC_TIMER2B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_TIMER2B_EN    ((uint32_t)0x01000000u)

#define NVIC_ISER0_NVIC_TIMER2B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_TIMER2B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_TIMER2B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_ACOMP0_MASK   ((uint32_t)0x02000000u)
#define NVIC_ISER0_R_NVIC_ACOMP0_BIT    (25)
#define NVIC_ISER0_R_NVIC_ACOMP0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_ACOMP0_EN     ((uint32_t)0x02000000u)

#define NVIC_ISER0_NVIC_ACOMP0_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_ACOMP0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_ACOMP0_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_ACOMP1_MASK   ((uint32_t)0x04000000u)
#define NVIC_ISER0_R_NVIC_ACOMP1_BIT    (26)
#define NVIC_ISER0_R_NVIC_ACOMP1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_ACOMP1_EN     ((uint32_t)0x04000000u)

#define NVIC_ISER0_NVIC_ACOMP1_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_ACOMP1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_ACOMP1_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_RES43_MASK    ((uint32_t)0x08000000u)
#define NVIC_ISER0_R_NVIC_RES43_BIT     (27)
#define NVIC_ISER0_R_NVIC_RES43_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_RES43_EN      ((uint32_t)0x08000000u)

#define NVIC_ISER0_NVIC_RES43_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_RES43_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_RES43_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_SYSCTL_MASK   ((uint32_t)0x10000000u)
#define NVIC_ISER0_R_NVIC_SYSCTL_BIT    (28)
#define NVIC_ISER0_R_NVIC_SYSCTL_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_SYSCTL_EN     ((uint32_t)0x10000000u)

#define NVIC_ISER0_NVIC_SYSCTL_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_SYSCTL_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_SYSCTL_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_FLASH_MASK    ((uint32_t)0x20000000u)
#define NVIC_ISER0_R_NVIC_FLASH_BIT     (29)
#define NVIC_ISER0_R_NVIC_FLASH_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_FLASH_EN      ((uint32_t)0x20000000u)

#define NVIC_ISER0_NVIC_FLASH_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_FLASH_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_FLASH_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_GPIOF_MASK    ((uint32_t)0x40000000u)
#define NVIC_ISER0_R_NVIC_GPIOF_BIT     (30)
#define NVIC_ISER0_R_NVIC_GPIOF_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_GPIOF_EN      ((uint32_t)0x40000000u)

#define NVIC_ISER0_NVIC_GPIOF_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_GPIOF_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_GPIOF_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER0_R_NVIC_RES47_MASK    ((uint32_t)0x80000000u)
#define NVIC_ISER0_R_NVIC_RES47_BIT     (31)
#define NVIC_ISER0_R_NVIC_RES47_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER0_R_NVIC_RES47_EN      ((uint32_t)0x80000000u)

#define NVIC_ISER0_NVIC_RES47_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER0_NVIC_RES47_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER0_NVIC_RES47_EN        ((uint32_t)0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* ICER0 ***********************************************/
/********************************************************************************************/

#define NVIC_ICER0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ICER0_OFFSET)))
#define NVIC_ICER0_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICER0_OFFSET)))


/*----------*/
#define NVIC_ICER0_R_NVIC_GPIOA_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER0_R_NVIC_GPIOA_BIT     (0)
#define NVIC_ICER0_R_NVIC_GPIOA_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_GPIOA_EN      ((uint32_t)0x00000001u)

#define NVIC_ICER0_NVIC_GPIOA_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_GPIOA_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_GPIOA_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_GPIOB_MASK    ((uint32_t)0x00000002u)
#define NVIC_ICER0_R_NVIC_GPIOB_BIT     (1)
#define NVIC_ICER0_R_NVIC_GPIOB_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_GPIOB_EN      ((uint32_t)0x00000002u)

#define NVIC_ICER0_NVIC_GPIOB_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_GPIOB_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_GPIOB_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_GPIOC_MASK    ((uint32_t)0x00000004u)
#define NVIC_ICER0_R_NVIC_GPIOC_BIT     (2)
#define NVIC_ICER0_R_NVIC_GPIOC_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_GPIOC_EN      ((uint32_t)0x00000004u)

#define NVIC_ICER0_NVIC_GPIOC_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_GPIOC_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_GPIOC_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICER0_R_NVIC_GPIOD_MASK    ((uint32_t)0x00000008u)
#define NVIC_ICER0_R_NVIC_GPIOD_BIT     (3)
#define NVIC_ICER0_R_NVIC_GPIOD_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_GPIOD_EN      ((uint32_t)0x00000008u)

#define NVIC_ICER0_NVIC_GPIOD_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_GPIOD_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_GPIOD_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_GPIOE_MASK    ((uint32_t)0x00000010u)
#define NVIC_ICER0_R_NVIC_GPIOE_BIT     (4)
#define NVIC_ICER0_R_NVIC_GPIOE_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_GPIOE_EN      ((uint32_t)0x00000010u)

#define NVIC_ICER0_NVIC_GPIOE_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_GPIOE_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_GPIOE_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_UART0_MASK    ((uint32_t)0x00000020u)
#define NVIC_ICER0_R_NVIC_UART0_BIT     (5)
#define NVIC_ICER0_R_NVIC_UART0_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_UART0_EN      ((uint32_t)0x00000020u)

#define NVIC_ICER0_NVIC_UART0_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_UART0_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_UART0_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_UART1_MASK    ((uint32_t)0x00000040u)
#define NVIC_ICER0_R_NVIC_UART1_BIT     (6)
#define NVIC_ICER0_R_NVIC_UART1_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_UART1_EN      ((uint32_t)0x00000040u)

#define NVIC_ICER0_NVIC_UART1_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_UART1_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_UART1_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_SSI0_MASK     ((uint32_t)0x00000080u)
#define NVIC_ICER0_R_NVIC_SSI0_BIT      (7)
#define NVIC_ICER0_R_NVIC_SSI0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_SSI0_EN       ((uint32_t)0x00000080u)

#define NVIC_ICER0_NVIC_SSI0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_SSI0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_SSI0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_I2C0_MASK     ((uint32_t)0x00000100u)
#define NVIC_ICER0_R_NVIC_I2C0_BIT      (8)
#define NVIC_ICER0_R_NVIC_I2C0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_I2C0_EN       ((uint32_t)0x00000100u)

#define NVIC_ICER0_NVIC_I2C0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_I2C0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_I2C0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_PWM0FAULT_MASK ((uint32_t)0x00000200u)
#define NVIC_ICER0_R_NVIC_PWM0FAULT_BIT  (9)
#define NVIC_ICER0_R_NVIC_PWM0FAULT_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_PWM0FAULT_EN   ((uint32_t)0x00000200u)

#define NVIC_ICER0_NVIC_PWM0FAULT_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_PWM0FAULT_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_PWM0FAULT_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_PWM0GEN0_MASK  ((uint32_t)0x00000400u)
#define NVIC_ICER0_R_NVIC_PWM0GEN0_BIT   (10)
#define NVIC_ICER0_R_NVIC_PWM0GEN0_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_PWM0GEN0_EN    ((uint32_t)0x00000400u)

#define NVIC_ICER0_NVIC_PWM0GEN0_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_PWM0GEN0_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_PWM0GEN0_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_PWM0GEN1_MASK  ((uint32_t)0x00000800u)
#define NVIC_ICER0_R_NVIC_PWM0GEN1_BIT   (11)
#define NVIC_ICER0_R_NVIC_PWM0GEN1_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_PWM0GEN1_EN    ((uint32_t)0x00000800u)

#define NVIC_ICER0_NVIC_PWM0GEN1_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_PWM0GEN1_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_PWM0GEN1_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_PWM0GEN2_MASK  ((uint32_t)0x00001000u)
#define NVIC_ICER0_R_NVIC_PWM0GEN2_BIT   (12)
#define NVIC_ICER0_R_NVIC_PWM0GEN2_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_PWM0GEN2_EN    ((uint32_t)0x00001000u)

#define NVIC_ICER0_NVIC_PWM0GEN2_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_PWM0GEN2_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_PWM0GEN2_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_QEI0_MASK     ((uint32_t)0x00002000u)
#define NVIC_ICER0_R_NVIC_QEI0_BIT      (13)
#define NVIC_ICER0_R_NVIC_QEI0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_QEI0_EN       ((uint32_t)0x00002000u)

#define NVIC_ICER0_NVIC_QEI0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_QEI0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_QEI0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_ADC0SEQ0_MASK ((uint32_t)0x00004000u)
#define NVIC_ICER0_R_NVIC_ADC0SEQ0_BIT  (14)
#define NVIC_ICER0_R_NVIC_ADC0SEQ0_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_ADC0SEQ0_EN   ((uint32_t)0x00004000u)

#define NVIC_ICER0_NVIC_ADC0SEQ0_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_ADC0SEQ0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_ADC0SEQ0_EN ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_ADC0SEQ1_MASK ((uint32_t)0x00008000u)
#define NVIC_ICER0_R_NVIC_ADC0SEQ1_BIT  (15)
#define NVIC_ICER0_R_NVIC_ADC0SEQ1_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_ADC0SEQ1_EN   ((uint32_t)0x00008000u)

#define NVIC_ICER0_NVIC_ADC0SEQ1_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_ADC0SEQ1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_ADC0SEQ1_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_ADC0SEQ2_MASK ((uint32_t)0x00010000u)
#define NVIC_ICER0_R_NVIC_ADC0SEQ2_BIT  (16)
#define NVIC_ICER0_R_NVIC_ADC0SEQ2_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_ADC0SEQ2_EN   ((uint32_t)0x00010000u)

#define NVIC_ICER0_NVIC_ADC0SEQ2_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_ADC0SEQ2_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_ADC0SEQ2_EN ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_ADC0SEQ3_MASK ((uint32_t)0x00020000u)
#define NVIC_ICER0_R_NVIC_ADC0SEQ3_BIT  (17)
#define NVIC_ICER0_R_NVIC_ADC0SEQ3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_ADC0SEQ3_EN   ((uint32_t)0x00020000u)

#define NVIC_ICER0_NVIC_ADC0SEQ3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_ADC0SEQ3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_ADC0SEQ3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_WDT01_MASK    ((uint32_t)0x00040000u)
#define NVIC_ICER0_R_NVIC_WDT01_BIT     (18)
#define NVIC_ICER0_R_NVIC_WDT01_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_WDT01_EN      ((uint32_t)0x00040000u)

#define NVIC_ICER0_NVIC_WDT01_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_WDT01_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_WDT01_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_TIMER0A_MASK  ((uint32_t)0x00080000u)
#define NVIC_ICER0_R_NVIC_TIMER0A_BIT   (19)
#define NVIC_ICER0_R_NVIC_TIMER0A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_TIMER0A_EN    ((uint32_t)0x00080000u)

#define NVIC_ICER0_NVIC_TIMER0A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_TIMER0A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_TIMER0A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_TIMER0B_MASK  ((uint32_t)0x00100000u)
#define NVIC_ICER0_R_NVIC_TIMER0B_BIT   (20)
#define NVIC_ICER0_R_NVIC_TIMER0B_DI    ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_TIMER0B_EN    ((uint32_t)0x00100000u)

#define NVIC_ICER0_NVIC_TIMER0B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_TIMER0B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_TIMER0B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_TIMER1A_MASK  ((uint32_t)0x00200000u)
#define NVIC_ICER0_R_NVIC_TIMER1A_BIT   (21)
#define NVIC_ICER0_R_NVIC_TIMER1A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_TIMER1A_EN    ((uint32_t)0x00200000u)

#define NVIC_ICER0_NVIC_TIMER1A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_TIMER1A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_TIMER1A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_TIMER1B_MASK  ((uint32_t)0x00400000u)
#define NVIC_ICER0_R_NVIC_TIMER1B_BIT   (22)
#define NVIC_ICER0_R_NVIC_TIMER1B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_TIMER1B_EN    ((uint32_t)0x00400000u)

#define NVIC_ICER0_NVIC_TIMER1B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_TIMER1B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_TIMER1B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_TIMER2A_MASK  ((uint32_t)0x00800000u)
#define NVIC_ICER0_R_NVIC_TIMER2A_BIT   (23)
#define NVIC_ICER0_R_NVIC_TIMER2A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_TIMER2A_EN    ((uint32_t)0x00800000u)

#define NVIC_ICER0_NVIC_TIMER2A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_TIMER2A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_TIMER2A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_TIMER2B_MASK  ((uint32_t)0x01000000u)
#define NVIC_ICER0_R_NVIC_TIMER2B_BIT   (24)
#define NVIC_ICER0_R_NVIC_TIMER2B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_TIMER2B_EN    ((uint32_t)0x01000000u)

#define NVIC_ICER0_NVIC_TIMER2B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_TIMER2B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_TIMER2B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_ACOMP0_MASK   ((uint32_t)0x02000000u)
#define NVIC_ICER0_R_NVIC_ACOMP0_BIT    (25)
#define NVIC_ICER0_R_NVIC_ACOMP0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_ACOMP0_EN     ((uint32_t)0x02000000u)

#define NVIC_ICER0_NVIC_ACOMP0_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_ACOMP0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_ACOMP0_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_ACOMP1_MASK   ((uint32_t)0x04000000u)
#define NVIC_ICER0_R_NVIC_ACOMP1_BIT    (26)
#define NVIC_ICER0_R_NVIC_ACOMP1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_ACOMP1_EN     ((uint32_t)0x04000000u)

#define NVIC_ICER0_NVIC_ACOMP1_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_ACOMP1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_ACOMP1_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_RES43_MASK    ((uint32_t)0x08000000u)
#define NVIC_ICER0_R_NVIC_RES43_BIT     (27)
#define NVIC_ICER0_R_NVIC_RES43_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_RES43_EN      ((uint32_t)0x08000000u)

#define NVIC_ICER0_NVIC_RES43_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_RES43_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_RES43_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_SYSCTL_MASK   ((uint32_t)0x10000000u)
#define NVIC_ICER0_R_NVIC_SYSCTL_BIT    (28)
#define NVIC_ICER0_R_NVIC_SYSCTL_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_SYSCTL_EN     ((uint32_t)0x10000000u)

#define NVIC_ICER0_NVIC_SYSCTL_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_SYSCTL_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_SYSCTL_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_FLASH_MASK    ((uint32_t)0x20000000u)
#define NVIC_ICER0_R_NVIC_FLASH_BIT     (29)
#define NVIC_ICER0_R_NVIC_FLASH_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_FLASH_EN      ((uint32_t)0x20000000u)

#define NVIC_ICER0_NVIC_FLASH_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_FLASH_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_FLASH_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_GPIOF_MASK    ((uint32_t)0x40000000u)
#define NVIC_ICER0_R_NVIC_GPIOF_BIT     (30)
#define NVIC_ICER0_R_NVIC_GPIOF_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_GPIOF_EN      ((uint32_t)0x40000000u)

#define NVIC_ICER0_NVIC_GPIOF_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_GPIOF_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_GPIOF_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER0_R_NVIC_RES47_MASK    ((uint32_t)0x80000000u)
#define NVIC_ICER0_R_NVIC_RES47_BIT     (31)
#define NVIC_ICER0_R_NVIC_RES47_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER0_R_NVIC_RES47_EN      ((uint32_t)0x80000000u)

#define NVIC_ICER0_NVIC_RES47_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER0_NVIC_RES47_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER0_NVIC_RES47_EN        ((uint32_t)0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* ISPR0 ***********************************************/
/********************************************************************************************/

#define NVIC_ISPR0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ISPR0_OFFSET)))
#define NVIC_ISPR0_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISPR0_OFFSET)))


/*----------*/
#define NVIC_ISPR0_R_NVIC_GPIOA_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR0_R_NVIC_GPIOA_BIT     (0)
#define NVIC_ISPR0_R_NVIC_GPIOA_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_GPIOA_EN      ((uint32_t)0x00000001u)

#define NVIC_ISPR0_NVIC_GPIOA_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_GPIOA_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_GPIOA_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_GPIOB_MASK    ((uint32_t)0x00000002u)
#define NVIC_ISPR0_R_NVIC_GPIOB_BIT     (1)
#define NVIC_ISPR0_R_NVIC_GPIOB_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_GPIOB_EN      ((uint32_t)0x00000002u)

#define NVIC_ISPR0_NVIC_GPIOB_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_GPIOB_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_GPIOB_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_GPIOC_MASK    ((uint32_t)0x00000004u)
#define NVIC_ISPR0_R_NVIC_GPIOC_BIT     (2)
#define NVIC_ISPR0_R_NVIC_GPIOC_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_GPIOC_EN      ((uint32_t)0x00000004u)

#define NVIC_ISPR0_NVIC_GPIOC_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_GPIOC_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_GPIOC_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISPR0_R_NVIC_GPIOD_MASK    ((uint32_t)0x00000008u)
#define NVIC_ISPR0_R_NVIC_GPIOD_BIT     (3)
#define NVIC_ISPR0_R_NVIC_GPIOD_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_GPIOD_EN      ((uint32_t)0x00000008u)

#define NVIC_ISPR0_NVIC_GPIOD_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_GPIOD_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_GPIOD_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_GPIOE_MASK    ((uint32_t)0x00000010u)
#define NVIC_ISPR0_R_NVIC_GPIOE_BIT     (4)
#define NVIC_ISPR0_R_NVIC_GPIOE_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_GPIOE_EN      ((uint32_t)0x00000010u)

#define NVIC_ISPR0_NVIC_GPIOE_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_GPIOE_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_GPIOE_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_UART0_MASK    ((uint32_t)0x00000020u)
#define NVIC_ISPR0_R_NVIC_UART0_BIT     (5)
#define NVIC_ISPR0_R_NVIC_UART0_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_UART0_EN      ((uint32_t)0x00000020u)

#define NVIC_ISPR0_NVIC_UART0_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_UART0_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_UART0_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_UART1_MASK    ((uint32_t)0x00000040u)
#define NVIC_ISPR0_R_NVIC_UART1_BIT     (6)
#define NVIC_ISPR0_R_NVIC_UART1_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_UART1_EN      ((uint32_t)0x00000040u)

#define NVIC_ISPR0_NVIC_UART1_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_UART1_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_UART1_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_SSI0_MASK     ((uint32_t)0x00000080u)
#define NVIC_ISPR0_R_NVIC_SSI0_BIT      (7)
#define NVIC_ISPR0_R_NVIC_SSI0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_SSI0_EN       ((uint32_t)0x00000080u)

#define NVIC_ISPR0_NVIC_SSI0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_SSI0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_SSI0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_I2C0_MASK     ((uint32_t)0x00000100u)
#define NVIC_ISPR0_R_NVIC_I2C0_BIT      (8)
#define NVIC_ISPR0_R_NVIC_I2C0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_I2C0_EN       ((uint32_t)0x00000100u)

#define NVIC_ISPR0_NVIC_I2C0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_I2C0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_I2C0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_PWM0FAULT_MASK ((uint32_t)0x00000200u)
#define NVIC_ISPR0_R_NVIC_PWM0FAULT_BIT  (9)
#define NVIC_ISPR0_R_NVIC_PWM0FAULT_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_PWM0FAULT_EN   ((uint32_t)0x00000200u)

#define NVIC_ISPR0_NVIC_PWM0FAULT_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_PWM0FAULT_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_PWM0FAULT_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_PWM0GEN0_MASK  ((uint32_t)0x00000400u)
#define NVIC_ISPR0_R_NVIC_PWM0GEN0_BIT   (10)
#define NVIC_ISPR0_R_NVIC_PWM0GEN0_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_PWM0GEN0_EN    ((uint32_t)0x00000400u)

#define NVIC_ISPR0_NVIC_PWM0GEN0_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_PWM0GEN0_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_PWM0GEN0_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_PWM0GEN1_MASK  ((uint32_t)0x00000800u)
#define NVIC_ISPR0_R_NVIC_PWM0GEN1_BIT   (11)
#define NVIC_ISPR0_R_NVIC_PWM0GEN1_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_PWM0GEN1_EN    ((uint32_t)0x00000800u)

#define NVIC_ISPR0_NVIC_PWM0GEN1_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_PWM0GEN1_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_PWM0GEN1_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_PWM0GEN2_MASK  ((uint32_t)0x00001000u)
#define NVIC_ISPR0_R_NVIC_PWM0GEN2_BIT   (12)
#define NVIC_ISPR0_R_NVIC_PWM0GEN2_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_PWM0GEN2_EN    ((uint32_t)0x00001000u)

#define NVIC_ISPR0_NVIC_PWM0GEN2_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_PWM0GEN2_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_PWM0GEN2_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_QEI0_MASK     ((uint32_t)0x00002000u)
#define NVIC_ISPR0_R_NVIC_QEI0_BIT      (13)
#define NVIC_ISPR0_R_NVIC_QEI0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_QEI0_EN       ((uint32_t)0x00002000u)

#define NVIC_ISPR0_NVIC_QEI0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_QEI0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_QEI0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_ADC0SEQ0_MASK ((uint32_t)0x00004000u)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ0_BIT  (14)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ0_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ0_EN   ((uint32_t)0x00004000u)

#define NVIC_ISPR0_NVIC_ADC0SEQ0_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_ADC0SEQ0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_ADC0SEQ0_EN ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_ADC0SEQ1_MASK ((uint32_t)0x00008000u)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ1_BIT  (15)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ1_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ1_EN   ((uint32_t)0x00008000u)

#define NVIC_ISPR0_NVIC_ADC0SEQ1_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_ADC0SEQ1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_ADC0SEQ1_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_ADC0SEQ2_MASK ((uint32_t)0x00010000u)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ2_BIT  (16)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ2_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ2_EN   ((uint32_t)0x00010000u)

#define NVIC_ISPR0_NVIC_ADC0SEQ2_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_ADC0SEQ2_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_ADC0SEQ2_EN ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_ADC0SEQ3_MASK ((uint32_t)0x00020000u)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ3_BIT  (17)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_ADC0SEQ3_EN   ((uint32_t)0x00020000u)

#define NVIC_ISPR0_NVIC_ADC0SEQ3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_ADC0SEQ3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_ADC0SEQ3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_WDT01_MASK    ((uint32_t)0x00040000u)
#define NVIC_ISPR0_R_NVIC_WDT01_BIT     (18)
#define NVIC_ISPR0_R_NVIC_WDT01_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_WDT01_EN      ((uint32_t)0x00040000u)

#define NVIC_ISPR0_NVIC_WDT01_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_WDT01_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_WDT01_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_TIMER0A_MASK  ((uint32_t)0x00080000u)
#define NVIC_ISPR0_R_NVIC_TIMER0A_BIT   (19)
#define NVIC_ISPR0_R_NVIC_TIMER0A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_TIMER0A_EN    ((uint32_t)0x00080000u)

#define NVIC_ISPR0_NVIC_TIMER0A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_TIMER0A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_TIMER0A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_TIMER0B_MASK  ((uint32_t)0x00100000u)
#define NVIC_ISPR0_R_NVIC_TIMER0B_BIT   (20)
#define NVIC_ISPR0_R_NVIC_TIMER0B_DI    ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_TIMER0B_EN    ((uint32_t)0x00100000u)

#define NVIC_ISPR0_NVIC_TIMER0B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_TIMER0B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_TIMER0B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_TIMER1A_MASK  ((uint32_t)0x00200000u)
#define NVIC_ISPR0_R_NVIC_TIMER1A_BIT   (21)
#define NVIC_ISPR0_R_NVIC_TIMER1A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_TIMER1A_EN    ((uint32_t)0x00200000u)

#define NVIC_ISPR0_NVIC_TIMER1A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_TIMER1A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_TIMER1A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_TIMER1B_MASK  ((uint32_t)0x00400000u)
#define NVIC_ISPR0_R_NVIC_TIMER1B_BIT   (22)
#define NVIC_ISPR0_R_NVIC_TIMER1B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_TIMER1B_EN    ((uint32_t)0x00400000u)

#define NVIC_ISPR0_NVIC_TIMER1B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_TIMER1B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_TIMER1B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_TIMER2A_MASK  ((uint32_t)0x00800000u)
#define NVIC_ISPR0_R_NVIC_TIMER2A_BIT   (23)
#define NVIC_ISPR0_R_NVIC_TIMER2A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_TIMER2A_EN    ((uint32_t)0x00800000u)

#define NVIC_ISPR0_NVIC_TIMER2A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_TIMER2A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_TIMER2A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_TIMER2B_MASK  ((uint32_t)0x01000000u)
#define NVIC_ISPR0_R_NVIC_TIMER2B_BIT   (24)
#define NVIC_ISPR0_R_NVIC_TIMER2B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_TIMER2B_EN    ((uint32_t)0x01000000u)

#define NVIC_ISPR0_NVIC_TIMER2B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_TIMER2B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_TIMER2B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_ACOMP0_MASK   ((uint32_t)0x02000000u)
#define NVIC_ISPR0_R_NVIC_ACOMP0_BIT    (25)
#define NVIC_ISPR0_R_NVIC_ACOMP0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_ACOMP0_EN     ((uint32_t)0x02000000u)

#define NVIC_ISPR0_NVIC_ACOMP0_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_ACOMP0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_ACOMP0_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_ACOMP1_MASK   ((uint32_t)0x04000000u)
#define NVIC_ISPR0_R_NVIC_ACOMP1_BIT    (26)
#define NVIC_ISPR0_R_NVIC_ACOMP1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_ACOMP1_EN     ((uint32_t)0x04000000u)

#define NVIC_ISPR0_NVIC_ACOMP1_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_ACOMP1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_ACOMP1_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_RES43_MASK    ((uint32_t)0x08000000u)
#define NVIC_ISPR0_R_NVIC_RES43_BIT     (27)
#define NVIC_ISPR0_R_NVIC_RES43_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_RES43_EN      ((uint32_t)0x08000000u)

#define NVIC_ISPR0_NVIC_RES43_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_RES43_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_RES43_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_SYSCTL_MASK   ((uint32_t)0x10000000u)
#define NVIC_ISPR0_R_NVIC_SYSCTL_BIT    (28)
#define NVIC_ISPR0_R_NVIC_SYSCTL_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_SYSCTL_EN     ((uint32_t)0x10000000u)

#define NVIC_ISPR0_NVIC_SYSCTL_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_SYSCTL_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_SYSCTL_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_FLASH_MASK    ((uint32_t)0x20000000u)
#define NVIC_ISPR0_R_NVIC_FLASH_BIT     (29)
#define NVIC_ISPR0_R_NVIC_FLASH_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_FLASH_EN      ((uint32_t)0x20000000u)

#define NVIC_ISPR0_NVIC_FLASH_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_FLASH_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_FLASH_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_GPIOF_MASK    ((uint32_t)0x40000000u)
#define NVIC_ISPR0_R_NVIC_GPIOF_BIT     (30)
#define NVIC_ISPR0_R_NVIC_GPIOF_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_GPIOF_EN      ((uint32_t)0x40000000u)

#define NVIC_ISPR0_NVIC_GPIOF_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_GPIOF_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_GPIOF_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR0_R_NVIC_RES47_MASK    ((uint32_t)0x80000000u)
#define NVIC_ISPR0_R_NVIC_RES47_BIT     (31)
#define NVIC_ISPR0_R_NVIC_RES47_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR0_R_NVIC_RES47_EN      ((uint32_t)0x80000000u)

#define NVIC_ISPR0_NVIC_RES47_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR0_NVIC_RES47_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR0_NVIC_RES47_EN        ((uint32_t)0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* ICPR0 ***********************************************/
/********************************************************************************************/

#define NVIC_ICPR0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ICPR0_OFFSET)))
#define NVIC_ICPR0_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICPR0_OFFSET)))



/*----------*/
#define NVIC_ICPR0_R_NVIC_GPIOA_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR0_R_NVIC_GPIOA_BIT     (0)
#define NVIC_ICPR0_R_NVIC_GPIOA_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_GPIOA_EN      ((uint32_t)0x00000001u)

#define NVIC_ICPR0_NVIC_GPIOA_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_GPIOA_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_GPIOA_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_GPIOB_MASK    ((uint32_t)0x00000002u)
#define NVIC_ICPR0_R_NVIC_GPIOB_BIT     (1)
#define NVIC_ICPR0_R_NVIC_GPIOB_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_GPIOB_EN      ((uint32_t)0x00000002u)

#define NVIC_ICPR0_NVIC_GPIOB_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_GPIOB_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_GPIOB_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_GPIOC_MASK    ((uint32_t)0x00000004u)
#define NVIC_ICPR0_R_NVIC_GPIOC_BIT     (2)
#define NVIC_ICPR0_R_NVIC_GPIOC_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_GPIOC_EN      ((uint32_t)0x00000004u)

#define NVIC_ICPR0_NVIC_GPIOC_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_GPIOC_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_GPIOC_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICPR0_R_NVIC_GPIOD_MASK    ((uint32_t)0x00000008u)
#define NVIC_ICPR0_R_NVIC_GPIOD_BIT     (3)
#define NVIC_ICPR0_R_NVIC_GPIOD_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_GPIOD_EN      ((uint32_t)0x00000008u)

#define NVIC_ICPR0_NVIC_GPIOD_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_GPIOD_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_GPIOD_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_GPIOE_MASK    ((uint32_t)0x00000010u)
#define NVIC_ICPR0_R_NVIC_GPIOE_BIT     (4)
#define NVIC_ICPR0_R_NVIC_GPIOE_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_GPIOE_EN      ((uint32_t)0x00000010u)

#define NVIC_ICPR0_NVIC_GPIOE_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_GPIOE_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_GPIOE_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_UART0_MASK    ((uint32_t)0x00000020u)
#define NVIC_ICPR0_R_NVIC_UART0_BIT     (5)
#define NVIC_ICPR0_R_NVIC_UART0_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_UART0_EN      ((uint32_t)0x00000020u)

#define NVIC_ICPR0_NVIC_UART0_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_UART0_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_UART0_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_UART1_MASK    ((uint32_t)0x00000040u)
#define NVIC_ICPR0_R_NVIC_UART1_BIT     (6)
#define NVIC_ICPR0_R_NVIC_UART1_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_UART1_EN      ((uint32_t)0x00000040u)

#define NVIC_ICPR0_NVIC_UART1_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_UART1_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_UART1_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_SSI0_MASK     ((uint32_t)0x00000080u)
#define NVIC_ICPR0_R_NVIC_SSI0_BIT      (7)
#define NVIC_ICPR0_R_NVIC_SSI0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_SSI0_EN       ((uint32_t)0x00000080u)

#define NVIC_ICPR0_NVIC_SSI0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_SSI0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_SSI0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_I2C0_MASK     ((uint32_t)0x00000100u)
#define NVIC_ICPR0_R_NVIC_I2C0_BIT      (8)
#define NVIC_ICPR0_R_NVIC_I2C0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_I2C0_EN       ((uint32_t)0x00000100u)

#define NVIC_ICPR0_NVIC_I2C0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_I2C0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_I2C0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_PWM0FAULT_MASK ((uint32_t)0x00000200u)
#define NVIC_ICPR0_R_NVIC_PWM0FAULT_BIT  (9)
#define NVIC_ICPR0_R_NVIC_PWM0FAULT_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_PWM0FAULT_EN   ((uint32_t)0x00000200u)

#define NVIC_ICPR0_NVIC_PWM0FAULT_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_PWM0FAULT_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_PWM0FAULT_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_PWM0GEN0_MASK  ((uint32_t)0x00000400u)
#define NVIC_ICPR0_R_NVIC_PWM0GEN0_BIT   (10)
#define NVIC_ICPR0_R_NVIC_PWM0GEN0_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_PWM0GEN0_EN    ((uint32_t)0x00000400u)

#define NVIC_ICPR0_NVIC_PWM0GEN0_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_PWM0GEN0_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_PWM0GEN0_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_PWM0GEN1_MASK  ((uint32_t)0x00000800u)
#define NVIC_ICPR0_R_NVIC_PWM0GEN1_BIT   (11)
#define NVIC_ICPR0_R_NVIC_PWM0GEN1_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_PWM0GEN1_EN    ((uint32_t)0x00000800u)

#define NVIC_ICPR0_NVIC_PWM0GEN1_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_PWM0GEN1_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_PWM0GEN1_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_PWM0GEN2_MASK  ((uint32_t)0x00001000u)
#define NVIC_ICPR0_R_NVIC_PWM0GEN2_BIT   (12)
#define NVIC_ICPR0_R_NVIC_PWM0GEN2_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_PWM0GEN2_EN    ((uint32_t)0x00001000u)

#define NVIC_ICPR0_NVIC_PWM0GEN2_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_PWM0GEN2_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_PWM0GEN2_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_QEI0_MASK     ((uint32_t)0x00002000u)
#define NVIC_ICPR0_R_NVIC_QEI0_BIT      (13)
#define NVIC_ICPR0_R_NVIC_QEI0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_QEI0_EN       ((uint32_t)0x00002000u)

#define NVIC_ICPR0_NVIC_QEI0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_QEI0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_QEI0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_ADC0SEQ0_MASK ((uint32_t)0x00004000u)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ0_BIT  (14)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ0_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ0_EN   ((uint32_t)0x00004000u)

#define NVIC_ICPR0_NVIC_ADC0SEQ0_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_ADC0SEQ0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_ADC0SEQ0_EN ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_ADC0SEQ1_MASK ((uint32_t)0x00008000u)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ1_BIT  (15)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ1_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ1_EN   ((uint32_t)0x00008000u)

#define NVIC_ICPR0_NVIC_ADC0SEQ1_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_ADC0SEQ1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_ADC0SEQ1_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_ADC0SEQ2_MASK ((uint32_t)0x00010000u)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ2_BIT  (16)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ2_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ2_EN   ((uint32_t)0x00010000u)

#define NVIC_ICPR0_NVIC_ADC0SEQ2_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_ADC0SEQ2_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_ADC0SEQ2_EN ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_ADC0SEQ3_MASK ((uint32_t)0x00020000u)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ3_BIT  (17)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_ADC0SEQ3_EN   ((uint32_t)0x00020000u)

#define NVIC_ICPR0_NVIC_ADC0SEQ3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_ADC0SEQ3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_ADC0SEQ3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_WDT01_MASK    ((uint32_t)0x00040000u)
#define NVIC_ICPR0_R_NVIC_WDT01_BIT     (18)
#define NVIC_ICPR0_R_NVIC_WDT01_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_WDT01_EN      ((uint32_t)0x00040000u)

#define NVIC_ICPR0_NVIC_WDT01_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_WDT01_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_WDT01_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_TIMER0A_MASK  ((uint32_t)0x00080000u)
#define NVIC_ICPR0_R_NVIC_TIMER0A_BIT   (19)
#define NVIC_ICPR0_R_NVIC_TIMER0A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_TIMER0A_EN    ((uint32_t)0x00080000u)

#define NVIC_ICPR0_NVIC_TIMER0A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_TIMER0A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_TIMER0A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_TIMER0B_MASK  ((uint32_t)0x00100000u)
#define NVIC_ICPR0_R_NVIC_TIMER0B_BIT   (20)
#define NVIC_ICPR0_R_NVIC_TIMER0B_DI    ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_TIMER0B_EN    ((uint32_t)0x00100000u)

#define NVIC_ICPR0_NVIC_TIMER0B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_TIMER0B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_TIMER0B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_TIMER1A_MASK  ((uint32_t)0x00200000u)
#define NVIC_ICPR0_R_NVIC_TIMER1A_BIT   (21)
#define NVIC_ICPR0_R_NVIC_TIMER1A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_TIMER1A_EN    ((uint32_t)0x00200000u)

#define NVIC_ICPR0_NVIC_TIMER1A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_TIMER1A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_TIMER1A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_TIMER1B_MASK  ((uint32_t)0x00400000u)
#define NVIC_ICPR0_R_NVIC_TIMER1B_BIT   (22)
#define NVIC_ICPR0_R_NVIC_TIMER1B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_TIMER1B_EN    ((uint32_t)0x00400000u)

#define NVIC_ICPR0_NVIC_TIMER1B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_TIMER1B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_TIMER1B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_TIMER2A_MASK  ((uint32_t)0x00800000u)
#define NVIC_ICPR0_R_NVIC_TIMER2A_BIT   (23)
#define NVIC_ICPR0_R_NVIC_TIMER2A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_TIMER2A_EN    ((uint32_t)0x00800000u)

#define NVIC_ICPR0_NVIC_TIMER2A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_TIMER2A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_TIMER2A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_TIMER2B_MASK  ((uint32_t)0x01000000u)
#define NVIC_ICPR0_R_NVIC_TIMER2B_BIT   (24)
#define NVIC_ICPR0_R_NVIC_TIMER2B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_TIMER2B_EN    ((uint32_t)0x01000000u)

#define NVIC_ICPR0_NVIC_TIMER2B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_TIMER2B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_TIMER2B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_ACOMP0_MASK   ((uint32_t)0x02000000u)
#define NVIC_ICPR0_R_NVIC_ACOMP0_BIT    (25)
#define NVIC_ICPR0_R_NVIC_ACOMP0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_ACOMP0_EN     ((uint32_t)0x02000000u)

#define NVIC_ICPR0_NVIC_ACOMP0_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_ACOMP0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_ACOMP0_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_ACOMP1_MASK   ((uint32_t)0x04000000u)
#define NVIC_ICPR0_R_NVIC_ACOMP1_BIT    (26)
#define NVIC_ICPR0_R_NVIC_ACOMP1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_ACOMP1_EN     ((uint32_t)0x04000000u)

#define NVIC_ICPR0_NVIC_ACOMP1_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_ACOMP1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_ACOMP1_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_RES43_MASK    ((uint32_t)0x08000000u)
#define NVIC_ICPR0_R_NVIC_RES43_BIT     (27)
#define NVIC_ICPR0_R_NVIC_RES43_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_RES43_EN      ((uint32_t)0x08000000u)

#define NVIC_ICPR0_NVIC_RES43_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_RES43_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_RES43_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_SYSCTL_MASK   ((uint32_t)0x10000000u)
#define NVIC_ICPR0_R_NVIC_SYSCTL_BIT    (28)
#define NVIC_ICPR0_R_NVIC_SYSCTL_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_SYSCTL_EN     ((uint32_t)0x10000000u)

#define NVIC_ICPR0_NVIC_SYSCTL_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_SYSCTL_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_SYSCTL_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_FLASH_MASK    ((uint32_t)0x20000000u)
#define NVIC_ICPR0_R_NVIC_FLASH_BIT     (29)
#define NVIC_ICPR0_R_NVIC_FLASH_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_FLASH_EN      ((uint32_t)0x20000000u)

#define NVIC_ICPR0_NVIC_FLASH_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_FLASH_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_FLASH_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_GPIOF_MASK    ((uint32_t)0x40000000u)
#define NVIC_ICPR0_R_NVIC_GPIOF_BIT     (30)
#define NVIC_ICPR0_R_NVIC_GPIOF_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_GPIOF_EN      ((uint32_t)0x40000000u)

#define NVIC_ICPR0_NVIC_GPIOF_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_GPIOF_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_GPIOF_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR0_R_NVIC_RES47_MASK    ((uint32_t)0x80000000u)
#define NVIC_ICPR0_R_NVIC_RES47_BIT     (31)
#define NVIC_ICPR0_R_NVIC_RES47_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR0_R_NVIC_RES47_EN      ((uint32_t)0x80000000u)

#define NVIC_ICPR0_NVIC_RES47_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR0_NVIC_RES47_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR0_NVIC_RES47_EN        ((uint32_t)0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* IABR0 ***********************************************/
/********************************************************************************************/

#define NVIC_IABR0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_IABR0_OFFSET)))
#define NVIC_IABR0_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_IABR0_OFFSET)))


/*----------*/
#define NVIC_IABR0_R_NVIC_GPIOA_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR0_R_NVIC_GPIOA_BIT     (0)
#define NVIC_IABR0_R_NVIC_GPIOA_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_GPIOA_EN      ((uint32_t)0x00000001u)

#define NVIC_IABR0_NVIC_GPIOA_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_GPIOA_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_GPIOA_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_GPIOB_MASK    ((uint32_t)0x00000002u)
#define NVIC_IABR0_R_NVIC_GPIOB_BIT     (1)
#define NVIC_IABR0_R_NVIC_GPIOB_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_GPIOB_EN      ((uint32_t)0x00000002u)

#define NVIC_IABR0_NVIC_GPIOB_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_GPIOB_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_GPIOB_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_GPIOC_MASK    ((uint32_t)0x00000004u)
#define NVIC_IABR0_R_NVIC_GPIOC_BIT     (2)
#define NVIC_IABR0_R_NVIC_GPIOC_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_GPIOC_EN      ((uint32_t)0x00000004u)

#define NVIC_IABR0_NVIC_GPIOC_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_GPIOC_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_GPIOC_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_IABR0_R_NVIC_GPIOD_MASK    ((uint32_t)0x00000008u)
#define NVIC_IABR0_R_NVIC_GPIOD_BIT     (3)
#define NVIC_IABR0_R_NVIC_GPIOD_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_GPIOD_EN      ((uint32_t)0x00000008u)

#define NVIC_IABR0_NVIC_GPIOD_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_GPIOD_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_GPIOD_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_GPIOE_MASK    ((uint32_t)0x00000010u)
#define NVIC_IABR0_R_NVIC_GPIOE_BIT     (4)
#define NVIC_IABR0_R_NVIC_GPIOE_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_GPIOE_EN      ((uint32_t)0x00000010u)

#define NVIC_IABR0_NVIC_GPIOE_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_GPIOE_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_GPIOE_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_UART0_MASK    ((uint32_t)0x00000020u)
#define NVIC_IABR0_R_NVIC_UART0_BIT     (5)
#define NVIC_IABR0_R_NVIC_UART0_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_UART0_EN      ((uint32_t)0x00000020u)

#define NVIC_IABR0_NVIC_UART0_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_UART0_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_UART0_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_UART1_MASK    ((uint32_t)0x00000040u)
#define NVIC_IABR0_R_NVIC_UART1_BIT     (6)
#define NVIC_IABR0_R_NVIC_UART1_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_UART1_EN      ((uint32_t)0x00000040u)

#define NVIC_IABR0_NVIC_UART1_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_UART1_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_UART1_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_SSI0_MASK     ((uint32_t)0x00000080u)
#define NVIC_IABR0_R_NVIC_SSI0_BIT      (7)
#define NVIC_IABR0_R_NVIC_SSI0_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_SSI0_EN       ((uint32_t)0x00000080u)

#define NVIC_IABR0_NVIC_SSI0_MASK       ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_SSI0_DIS        ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_SSI0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_I2C0_MASK     ((uint32_t)0x00000100u)
#define NVIC_IABR0_R_NVIC_I2C0_BIT      (8)
#define NVIC_IABR0_R_NVIC_I2C0_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_I2C0_EN       ((uint32_t)0x00000100u)

#define NVIC_IABR0_NVIC_I2C0_MASK       ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_I2C0_DIS        ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_I2C0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_PWM0FAULT_MASK ((uint32_t)0x00000200u)
#define NVIC_IABR0_R_NVIC_PWM0FAULT_BIT  (9)
#define NVIC_IABR0_R_NVIC_PWM0FAULT_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_PWM0FAULT_EN   ((uint32_t)0x00000200u)

#define NVIC_IABR0_NVIC_PWM0FAULT_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_PWM0FAULT_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_PWM0FAULT_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_PWM0GEN0_MASK  ((uint32_t)0x00000400u)
#define NVIC_IABR0_R_NVIC_PWM0GEN0_BIT   (10)
#define NVIC_IABR0_R_NVIC_PWM0GEN0_DIS   ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_PWM0GEN0_EN    ((uint32_t)0x00000400u)

#define NVIC_IABR0_NVIC_PWM0GEN0_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_PWM0GEN0_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_PWM0GEN0_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_PWM0GEN1_MASK  ((uint32_t)0x00000800u)
#define NVIC_IABR0_R_NVIC_PWM0GEN1_BIT   (11)
#define NVIC_IABR0_R_NVIC_PWM0GEN1_DIS   ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_PWM0GEN1_EN    ((uint32_t)0x00000800u)

#define NVIC_IABR0_NVIC_PWM0GEN1_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_PWM0GEN1_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_PWM0GEN1_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_PWM0GEN2_MASK  ((uint32_t)0x00001000u)
#define NVIC_IABR0_R_NVIC_PWM0GEN2_BIT   (12)
#define NVIC_IABR0_R_NVIC_PWM0GEN2_DIS   ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_PWM0GEN2_EN    ((uint32_t)0x00001000u)

#define NVIC_IABR0_NVIC_PWM0GEN2_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_PWM0GEN2_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_PWM0GEN2_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_QEI0_MASK     ((uint32_t)0x00002000u)
#define NVIC_IABR0_R_NVIC_QEI0_BIT      (13)
#define NVIC_IABR0_R_NVIC_QEI0_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_QEI0_EN       ((uint32_t)0x00002000u)

#define NVIC_IABR0_NVIC_QEI0_MASK       ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_QEI0_DIS        ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_QEI0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_ADC0SEQ0_MASK ((uint32_t)0x00004000u)
#define NVIC_IABR0_R_NVIC_ADC0SEQ0_BIT  (14)
#define NVIC_IABR0_R_NVIC_ADC0SEQ0_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_ADC0SEQ0_EN   ((uint32_t)0x00004000u)

#define NVIC_IABR0_NVIC_ADC0SEQ0_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_ADC0SEQ0_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_ADC0SEQ0_EN ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_ADC0SEQ1_MASK ((uint32_t)0x00008000u)
#define NVIC_IABR0_R_NVIC_ADC0SEQ1_BIT  (15)
#define NVIC_IABR0_R_NVIC_ADC0SEQ1_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_ADC0SEQ1_EN   ((uint32_t)0x00008000u)

#define NVIC_IABR0_NVIC_ADC0SEQ1_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_ADC0SEQ1_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_ADC0SEQ1_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_ADC0SEQ2_MASK ((uint32_t)0x00010000u)
#define NVIC_IABR0_R_NVIC_ADC0SEQ2_BIT  (16)
#define NVIC_IABR0_R_NVIC_ADC0SEQ2_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_ADC0SEQ2_EN   ((uint32_t)0x00010000u)

#define NVIC_IABR0_NVIC_ADC0SEQ2_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_ADC0SEQ2_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_ADC0SEQ2_EN ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_ADC0SEQ3_MASK ((uint32_t)0x00020000u)
#define NVIC_IABR0_R_NVIC_ADC0SEQ3_BIT  (17)
#define NVIC_IABR0_R_NVIC_ADC0SEQ3_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_ADC0SEQ3_EN   ((uint32_t)0x00020000u)

#define NVIC_IABR0_NVIC_ADC0SEQ3_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_ADC0SEQ3_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_ADC0SEQ3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_WDT01_MASK    ((uint32_t)0x00040000u)
#define NVIC_IABR0_R_NVIC_WDT01_BIT     (18)
#define NVIC_IABR0_R_NVIC_WDT01_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_WDT01_EN      ((uint32_t)0x00040000u)

#define NVIC_IABR0_NVIC_WDT01_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_WDT01_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_WDT01_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_TIMER0A_MASK  ((uint32_t)0x00080000u)
#define NVIC_IABR0_R_NVIC_TIMER0A_BIT   (19)
#define NVIC_IABR0_R_NVIC_TIMER0A_DIS   ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_TIMER0A_EN    ((uint32_t)0x00080000u)

#define NVIC_IABR0_NVIC_TIMER0A_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_TIMER0A_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_TIMER0A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_TIMER0B_MASK  ((uint32_t)0x00100000u)
#define NVIC_IABR0_R_NVIC_TIMER0B_BIT   (20)
#define NVIC_IABR0_R_NVIC_TIMER0B_DI    ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_TIMER0B_EN    ((uint32_t)0x00100000u)

#define NVIC_IABR0_NVIC_TIMER0B_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_TIMER0B_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_TIMER0B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_TIMER1A_MASK  ((uint32_t)0x00200000u)
#define NVIC_IABR0_R_NVIC_TIMER1A_BIT   (21)
#define NVIC_IABR0_R_NVIC_TIMER1A_DIS   ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_TIMER1A_EN    ((uint32_t)0x00200000u)

#define NVIC_IABR0_NVIC_TIMER1A_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_TIMER1A_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_TIMER1A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_TIMER1B_MASK  ((uint32_t)0x00400000u)
#define NVIC_IABR0_R_NVIC_TIMER1B_BIT   (22)
#define NVIC_IABR0_R_NVIC_TIMER1B_DIS   ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_TIMER1B_EN    ((uint32_t)0x00400000u)

#define NVIC_IABR0_NVIC_TIMER1B_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_TIMER1B_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_TIMER1B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_TIMER2A_MASK  ((uint32_t)0x00800000u)
#define NVIC_IABR0_R_NVIC_TIMER2A_BIT   (23)
#define NVIC_IABR0_R_NVIC_TIMER2A_DIS   ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_TIMER2A_EN    ((uint32_t)0x00800000u)

#define NVIC_IABR0_NVIC_TIMER2A_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_TIMER2A_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_TIMER2A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_TIMER2B_MASK  ((uint32_t)0x01000000u)
#define NVIC_IABR0_R_NVIC_TIMER2B_BIT   (24)
#define NVIC_IABR0_R_NVIC_TIMER2B_DIS   ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_TIMER2B_EN    ((uint32_t)0x01000000u)

#define NVIC_IABR0_NVIC_TIMER2B_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_TIMER2B_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_TIMER2B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_ACOMP0_MASK   ((uint32_t)0x02000000u)
#define NVIC_IABR0_R_NVIC_ACOMP0_BIT    (25)
#define NVIC_IABR0_R_NVIC_ACOMP0_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_ACOMP0_EN     ((uint32_t)0x02000000u)

#define NVIC_IABR0_NVIC_ACOMP0_MASK     ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_ACOMP0_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_ACOMP0_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_ACOMP1_MASK   ((uint32_t)0x04000000u)
#define NVIC_IABR0_R_NVIC_ACOMP1_BIT    (26)
#define NVIC_IABR0_R_NVIC_ACOMP1_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_ACOMP1_EN     ((uint32_t)0x04000000u)

#define NVIC_IABR0_NVIC_ACOMP1_MASK     ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_ACOMP1_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_ACOMP1_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_RES43_MASK    ((uint32_t)0x08000000u)
#define NVIC_IABR0_R_NVIC_RES43_BIT     (27)
#define NVIC_IABR0_R_NVIC_RES43_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_RES43_EN      ((uint32_t)0x08000000u)

#define NVIC_IABR0_NVIC_RES43_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_RES43_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_RES43_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_SYSCTL_MASK   ((uint32_t)0x10000000u)
#define NVIC_IABR0_R_NVIC_SYSCTL_BIT    (28)
#define NVIC_IABR0_R_NVIC_SYSCTL_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_SYSCTL_EN     ((uint32_t)0x10000000u)

#define NVIC_IABR0_NVIC_SYSCTL_MASK     ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_SYSCTL_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_SYSCTL_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_FLASH_MASK    ((uint32_t)0x20000000u)
#define NVIC_IABR0_R_NVIC_FLASH_BIT     (29)
#define NVIC_IABR0_R_NVIC_FLASH_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_FLASH_EN      ((uint32_t)0x20000000u)

#define NVIC_IABR0_NVIC_FLASH_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_FLASH_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_FLASH_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_GPIOF_MASK    ((uint32_t)0x40000000u)
#define NVIC_IABR0_R_NVIC_GPIOF_BIT     (30)
#define NVIC_IABR0_R_NVIC_GPIOF_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_GPIOF_EN      ((uint32_t)0x40000000u)

#define NVIC_IABR0_NVIC_GPIOF_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_GPIOF_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_GPIOF_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR0_R_NVIC_RES47_MASK    ((uint32_t)0x80000000u)
#define NVIC_IABR0_R_NVIC_RES47_BIT     (31)
#define NVIC_IABR0_R_NVIC_RES47_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR0_R_NVIC_RES47_EN      ((uint32_t)0x80000000u)

#define NVIC_IABR0_NVIC_RES47_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR0_NVIC_RES47_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR0_NVIC_RES47_EN        ((uint32_t)0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* ISER1 ***********************************************/
/********************************************************************************************/

#define NVIC_ISER1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ISER1_OFFSET)))
#define NVIC_ISER1_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISER1_OFFSET)))


/*----------*/
#define NVIC_ISER1_R_NVIC_RES48_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER1_R_NVIC_RES48_BIT     (0)
#define NVIC_ISER1_R_NVIC_RES48_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_RES48_EN      ((uint32_t)0x00000001u)

#define NVIC_ISER1_NVIC_RES48_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_RES48_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_RES48_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_UART2_MASK    ((uint32_t)0x00000002u)
#define NVIC_ISER1_R_NVIC_UART2_BIT     (1)
#define NVIC_ISER1_R_NVIC_UART2_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_UART2_EN      ((uint32_t)0x00000002u)

#define NVIC_ISER1_NVIC_UART2_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_UART2_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_UART2_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_SSI1_MASK     ((uint32_t)0x00000004u)
#define NVIC_ISER1_R_NVIC_SSI1_BIT      (2)
#define NVIC_ISER1_R_NVIC_SSI1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_SSI1_EN       ((uint32_t)0x00000004u)

#define NVIC_ISER1_NVIC_SSI1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_SSI1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_SSI1_EN         ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISER1_R_NVIC_TIMER3A_MASK  ((uint32_t)0x00000008u)
#define NVIC_ISER1_R_NVIC_TIMER3A_BIT   (3)
#define NVIC_ISER1_R_NVIC_TIMER3A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_TIMER3A_EN    ((uint32_t)0x00000008u)

#define NVIC_ISER1_NVIC_TIMER3A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_TIMER3A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_TIMER3A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_TIMER3B_MASK  ((uint32_t)0x00000010u)
#define NVIC_ISER1_R_NVIC_TIMER3B_BIT   (4)
#define NVIC_ISER1_R_NVIC_TIMER3B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_TIMER3B_EN    ((uint32_t)0x00000010u)

#define NVIC_ISER1_NVIC_TIMER3B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_TIMER3B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_TIMER3B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_I2C1_MASK     ((uint32_t)0x00000020u)
#define NVIC_ISER1_R_NVIC_I2C1_BIT      (5)
#define NVIC_ISER1_R_NVIC_I2C1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_I2C1_EN       ((uint32_t)0x00000020u)

#define NVIC_ISER1_NVIC_I2C1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_I2C1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_I2C1_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_QEI1_MASK     ((uint32_t)0x00000040u)
#define NVIC_ISER1_R_NVIC_QEI1_BIT      (6)
#define NVIC_ISER1_R_NVIC_QEI1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_QEI1_EN       ((uint32_t)0x00000040u)

#define NVIC_ISER1_NVIC_QEI1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_QEI1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_QEI1_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_CAN0_MASK     ((uint32_t)0x00000080u)
#define NVIC_ISER1_R_NVIC_CAN0_BIT      (7)
#define NVIC_ISER1_R_NVIC_CAN0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_CAN0_EN       ((uint32_t)0x00000080u)

#define NVIC_ISER1_NVIC_CAN0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_CAN0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_CAN0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_CAN1_MASK     ((uint32_t)0x00000100u)
#define NVIC_ISER1_R_NVIC_CAN1_BIT      (8)
#define NVIC_ISER1_R_NVIC_CAN1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_CAN1_EN       ((uint32_t)0x00000100u)

#define NVIC_ISER1_NVIC_CAN1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_CAN1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_CAN1_EN         ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISER1_R_NVIC_RES57_MASK    ((uint32_t)0x00000200u)
#define NVIC_ISER1_R_NVIC_RES57_BIT     (9)
#define NVIC_ISER1_R_NVIC_RES57_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_RES57_EN      ((uint32_t)0x00000200u)

#define NVIC_ISER1_NVIC_RES57_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_RES57_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_RES57_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISER1_R_NVIC_RES58_MASK    ((uint32_t)0x00000400u)
#define NVIC_ISER1_R_NVIC_RES58_BIT     (10)
#define NVIC_ISER1_R_NVIC_RES58_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_RES58_EN      ((uint32_t)0x00000400u)

#define NVIC_ISER1_NVIC_RES58_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_RES58_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_RES58_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_HIB_MASK      ((uint32_t)0x00000800u)
#define NVIC_ISER1_R_NVIC_HIB_BIT       (11)
#define NVIC_ISER1_R_NVIC_HIB_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_HIB_EN        ((uint32_t)0x00000800u)

#define NVIC_ISER1_NVIC_HIB_MASK      	((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_HIB_DIS       	((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_HIB_EN        	((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_USB_MASK      ((uint32_t)0x00001000u)
#define NVIC_ISER1_R_NVIC_USB_BIT       (12)
#define NVIC_ISER1_R_NVIC_USB_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_USB_EN        ((uint32_t)0x00001000u)

#define NVIC_ISER1_NVIC_USB_MASK      	((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_USB_DIS       	((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_USB_EN        	((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISER1_R_NVIC_PWM0GEN3_MASK ((uint32_t)0x00002000u)
#define NVIC_ISER1_R_NVIC_PWM0GEN3_BIT  (13)
#define NVIC_ISER1_R_NVIC_PWM0GEN3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_PWM0GEN3_EN   ((uint32_t)0x00002000u)

#define NVIC_ISER1_NVIC_PWM0GEN3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_PWM0GEN3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_PWM0GEN3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_UDMASOFT_MASK ((uint32_t)0x00004000u)
#define NVIC_ISER1_R_NVIC_UDMASOFT_BIT  (14)
#define NVIC_ISER1_R_NVIC_UDMASOFT_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_UDMASOFT_EN   ((uint32_t)0x00004000u)

#define NVIC_ISER1_NVIC_UDMASOFT_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_UDMASOFT_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_UDMASOFT_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_UDMAERROR_MASK ((uint32_t)0x00008000u)
#define NVIC_ISER1_R_NVIC_UDMAERROR_BIT (15)
#define NVIC_ISER1_R_NVIC_UDMAERROR_DIS ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_UDMAERROR_EN  ((uint32_t)0x00008000u)

#define NVIC_ISER1_NVIC_UDMAERROR_MASK  ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_UDMAERROR_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_UDMAERROR_EN    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_ADC1SEQ0_MASK ((uint32_t)0x00010000u)
#define NVIC_ISER1_R_NVIC_ADC1SEQ0_BIT  (16)
#define NVIC_ISER1_R_NVIC_ADC1SEQ0_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_ADC1SEQ0_EN   ((uint32_t)0x00010000u)

#define NVIC_ISER1_NVIC_ADC1SEQ0_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_ADC1SEQ0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_ADC1SEQ0_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_ADC1SEQ1_MASK ((uint32_t)0x00020000u)
#define NVIC_ISER1_R_NVIC_ADC1SEQ1_BIT  (17)
#define NVIC_ISER1_R_NVIC_ADC1SEQ1_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_ADC1SEQ1_EN   ((uint32_t)0x00020000u)

#define NVIC_ISER1_NVIC_ADC1SEQ1_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_ADC1SEQ1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_ADC1SEQ1_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_ADC1SEQ2_MASK ((uint32_t)0x00040000u)
#define NVIC_ISER1_R_NVIC_ADC1SEQ2_BIT  (18)
#define NVIC_ISER1_R_NVIC_ADC1SEQ2_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_ADC1SEQ2_EN   ((uint32_t)0x00040000u)

#define NVIC_ISER1_NVIC_ADC1SEQ2_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_ADC1SEQ2_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_ADC1SEQ2_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_ADC1SEQ3_MASK ((uint32_t)0x00080000u)
#define NVIC_ISER1_R_NVIC_ADC1SEQ3_BIT  (19)
#define NVIC_ISER1_R_NVIC_ADC1SEQ3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_ADC1SEQ3_EN   ((uint32_t)0x00080000u)

#define NVIC_ISER1_NVIC_ADC1SEQ3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_ADC1SEQ3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_ADC1SEQ3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_RES68_MASK    ((uint32_t)0x00100000u)
#define NVIC_ISER1_R_NVIC_RES68_BIT     (20)
#define NVIC_ISER1_R_NVIC_RES68_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_RES68_EN      ((uint32_t)0x00100000u)

#define NVIC_ISER1_NVIC_RES68_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_RES68_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_RES68_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_RES69_MASK    ((uint32_t)0x00200000u)
#define NVIC_ISER1_R_NVIC_RES69_BIT     (21)
#define NVIC_ISER1_R_NVIC_RES69_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_RES69_EN      ((uint32_t)0x00200000u)

#define NVIC_ISER1_NVIC_RES69_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_RES69_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_RES69_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_RES70_MASK    ((uint32_t)0x00400000u)
#define NVIC_ISER1_R_NVIC_RES70_BIT     (22)
#define NVIC_ISER1_R_NVIC_RES70_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_RES70_EN      ((uint32_t)0x00400000u)

#define NVIC_ISER1_NVIC_RES70_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_RES70_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_RES70_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISER1_R_NVIC_RES71_MASK    ((uint32_t)0x00800000u)
#define NVIC_ISER1_R_NVIC_RES71_BIT     (23)
#define NVIC_ISER1_R_NVIC_RES71_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_RES71_EN      ((uint32_t)0x00800000u)

#define NVIC_ISER1_NVIC_RES71_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_RES71_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_RES71_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_RES72_MASK    ((uint32_t)0x01000000u)
#define NVIC_ISER1_R_NVIC_RES72_BIT     (24)
#define NVIC_ISER1_R_NVIC_RES72_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_RES72_EN      ((uint32_t)0x01000000u)

#define NVIC_ISER1_NVIC_RES72_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_RES72_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_RES72_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_SSI2_MASK     ((uint32_t)0x02000000u)
#define NVIC_ISER1_R_NVIC_SSI2_BIT      (25)
#define NVIC_ISER1_R_NVIC_SSI2_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_SSI2_EN       ((uint32_t)0x02000000u)

#define NVIC_ISER1_NVIC_SSI2_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_SSI2_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_SSI2_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_SSI3_MASK     ((uint32_t)0x04000000u)
#define NVIC_ISER1_R_NVIC_SSI3_BIT      (26)
#define NVIC_ISER1_R_NVIC_SSI3_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_SSI3_EN       ((uint32_t)0x04000000u)

#define NVIC_ISER1_NVIC_SSI3_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_SSI3_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_SSI3_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_UART3_MASK    ((uint32_t)0x08000000u)
#define NVIC_ISER1_R_NVIC_UART3_BIT     (27)
#define NVIC_ISER1_R_NVIC_UART3_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_UART3_EN      ((uint32_t)0x08000000u)

#define NVIC_ISER1_NVIC_UART3_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_UART3_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_UART3_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_UART4_MASK    ((uint32_t)0x10000000u)
#define NVIC_ISER1_R_NVIC_UART4_BIT     (28)
#define NVIC_ISER1_R_NVIC_UART4_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_UART4_EN      ((uint32_t)0x10000000u)

#define NVIC_ISER1_NVIC_UART4_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_UART4_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_UART4_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_UART5_MASK    ((uint32_t)0x20000000u)
#define NVIC_ISER1_R_NVIC_UART5_BIT     (29)
#define NVIC_ISER1_R_NVIC_UART5_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_UART5_EN      ((uint32_t)0x20000000u)

#define NVIC_ISER1_NVIC_UART5_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_UART5_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_UART5_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_UART6_MASK    ((uint32_t)0x40000000u)
#define NVIC_ISER1_R_NVIC_UART6_BIT     (30)
#define NVIC_ISER1_R_NVIC_UART6_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_UART6_EN      ((uint32_t)0x40000000u)

#define NVIC_ISER1_NVIC_UART6_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_UART6_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_UART6_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER1_R_NVIC_UART7_MASK    ((uint32_t)0x80000000u)
#define NVIC_ISER1_R_NVIC_UART7_BIT     (31)
#define NVIC_ISER1_R_NVIC_UART7_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER1_R_NVIC_UART7_EN      ((uint32_t)0x80000000u)

#define NVIC_ISER1_NVIC_UART7_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER1_NVIC_UART7_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER1_NVIC_UART7_EN        ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* ICER1 ***********************************************/
/********************************************************************************************/

#define NVIC_ICER1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ICER1_OFFSET)))
#define NVIC_ICER1_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICER1_OFFSET)))

/*----------*/
#define NVIC_ICER1_R_NVIC_RES48_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER1_R_NVIC_RES48_BIT     (0)
#define NVIC_ICER1_R_NVIC_RES48_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_RES48_EN      ((uint32_t)0x00000001u)

#define NVIC_ICER1_NVIC_RES48_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_RES48_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_RES48_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_UART2_MASK    ((uint32_t)0x00000002u)
#define NVIC_ICER1_R_NVIC_UART2_BIT     (1)
#define NVIC_ICER1_R_NVIC_UART2_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_UART2_EN      ((uint32_t)0x00000002u)

#define NVIC_ICER1_NVIC_UART2_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_UART2_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_UART2_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_SSI1_MASK     ((uint32_t)0x00000004u)
#define NVIC_ICER1_R_NVIC_SSI1_BIT      (2)
#define NVIC_ICER1_R_NVIC_SSI1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_SSI1_EN       ((uint32_t)0x00000004u)

#define NVIC_ICER1_NVIC_SSI1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_SSI1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_SSI1_EN         ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICER1_R_NVIC_TIMER3A_MASK  ((uint32_t)0x00000008u)
#define NVIC_ICER1_R_NVIC_TIMER3A_BIT   (3)
#define NVIC_ICER1_R_NVIC_TIMER3A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_TIMER3A_EN    ((uint32_t)0x00000008u)

#define NVIC_ICER1_NVIC_TIMER3A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_TIMER3A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_TIMER3A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_TIMER3B_MASK  ((uint32_t)0x00000010u)
#define NVIC_ICER1_R_NVIC_TIMER3B_BIT   (4)
#define NVIC_ICER1_R_NVIC_TIMER3B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_TIMER3B_EN    ((uint32_t)0x00000010u)

#define NVIC_ICER1_NVIC_TIMER3B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_TIMER3B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_TIMER3B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_I2C1_MASK     ((uint32_t)0x00000020u)
#define NVIC_ICER1_R_NVIC_I2C1_BIT      (5)
#define NVIC_ICER1_R_NVIC_I2C1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_I2C1_EN       ((uint32_t)0x00000020u)

#define NVIC_ICER1_NVIC_I2C1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_I2C1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_I2C1_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_QEI1_MASK     ((uint32_t)0x00000040u)
#define NVIC_ICER1_R_NVIC_QEI1_BIT      (6)
#define NVIC_ICER1_R_NVIC_QEI1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_QEI1_EN       ((uint32_t)0x00000040u)

#define NVIC_ICER1_NVIC_QEI1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_QEI1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_QEI1_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_CAN0_MASK     ((uint32_t)0x00000080u)
#define NVIC_ICER1_R_NVIC_CAN0_BIT      (7)
#define NVIC_ICER1_R_NVIC_CAN0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_CAN0_EN       ((uint32_t)0x00000080u)

#define NVIC_ICER1_NVIC_CAN0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_CAN0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_CAN0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_CAN1_MASK     ((uint32_t)0x00000100u)
#define NVIC_ICER1_R_NVIC_CAN1_BIT      (8)
#define NVIC_ICER1_R_NVIC_CAN1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_CAN1_EN       ((uint32_t)0x00000100u)

#define NVIC_ICER1_NVIC_CAN1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_CAN1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_CAN1_EN         ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICER1_R_NVIC_RES57_MASK    ((uint32_t)0x00000200u)
#define NVIC_ICER1_R_NVIC_RES57_BIT     (9)
#define NVIC_ICER1_R_NVIC_RES57_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_RES57_EN      ((uint32_t)0x00000200u)

#define NVIC_ICER1_NVIC_RES57_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_RES57_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_RES57_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICER1_R_NVIC_RES58_MASK    ((uint32_t)0x00000400u)
#define NVIC_ICER1_R_NVIC_RES58_BIT     (10)
#define NVIC_ICER1_R_NVIC_RES58_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_RES58_EN      ((uint32_t)0x00000400u)

#define NVIC_ICER1_NVIC_RES58_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_RES58_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_RES58_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_HIB_MASK      ((uint32_t)0x00000800u)
#define NVIC_ICER1_R_NVIC_HIB_BIT       (11)
#define NVIC_ICER1_R_NVIC_HIB_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_HIB_EN        ((uint32_t)0x00000800u)

#define NVIC_ICER1_NVIC_HIB_MASK        ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_HIB_DIS         ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_HIB_EN          ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_USB_MASK      ((uint32_t)0x00001000u)
#define NVIC_ICER1_R_NVIC_USB_BIT       (12)
#define NVIC_ICER1_R_NVIC_USB_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_USB_EN        ((uint32_t)0x00001000u)

#define NVIC_ICER1_NVIC_USB_MASK        ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_USB_DIS         ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_USB_EN          ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICER1_R_NVIC_PWM0GEN3_MASK ((uint32_t)0x00002000u)
#define NVIC_ICER1_R_NVIC_PWM0GEN3_BIT  (13)
#define NVIC_ICER1_R_NVIC_PWM0GEN3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_PWM0GEN3_EN   ((uint32_t)0x00002000u)

#define NVIC_ICER1_NVIC_PWM0GEN3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_PWM0GEN3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_PWM0GEN3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_UDMASOFT_MASK ((uint32_t)0x00004000u)
#define NVIC_ICER1_R_NVIC_UDMASOFT_BIT  (14)
#define NVIC_ICER1_R_NVIC_UDMASOFT_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_UDMASOFT_EN   ((uint32_t)0x00004000u)

#define NVIC_ICER1_NVIC_UDMASOFT_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_UDMASOFT_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_UDMASOFT_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_UDMAERROR_MASK ((uint32_t)0x00008000u)
#define NVIC_ICER1_R_NVIC_UDMAERROR_BIT (15)
#define NVIC_ICER1_R_NVIC_UDMAERROR_DIS ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_UDMAERROR_EN  ((uint32_t)0x00008000u)

#define NVIC_ICER1_NVIC_UDMAERROR_MASK  ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_UDMAERROR_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_UDMAERROR_EN    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_ADC1SEQ0_MASK ((uint32_t)0x00010000u)
#define NVIC_ICER1_R_NVIC_ADC1SEQ0_BIT  (16)
#define NVIC_ICER1_R_NVIC_ADC1SEQ0_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_ADC1SEQ0_EN   ((uint32_t)0x00010000u)

#define NVIC_ICER1_NVIC_ADC1SEQ0_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_ADC1SEQ0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_ADC1SEQ0_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_ADC1SEQ1_MASK ((uint32_t)0x00020000u)
#define NVIC_ICER1_R_NVIC_ADC1SEQ1_BIT  (17)
#define NVIC_ICER1_R_NVIC_ADC1SEQ1_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_ADC1SEQ1_EN   ((uint32_t)0x00020000u)

#define NVIC_ICER1_NVIC_ADC1SEQ1_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_ADC1SEQ1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_ADC1SEQ1_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_ADC1SEQ2_MASK ((uint32_t)0x00040000u)
#define NVIC_ICER1_R_NVIC_ADC1SEQ2_BIT  (18)
#define NVIC_ICER1_R_NVIC_ADC1SEQ2_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_ADC1SEQ2_EN   ((uint32_t)0x00040000u)

#define NVIC_ICER1_NVIC_ADC1SEQ2_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_ADC1SEQ2_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_ADC1SEQ2_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_ADC1SEQ3_MASK ((uint32_t)0x00080000u)
#define NVIC_ICER1_R_NVIC_ADC1SEQ3_BIT  (19)
#define NVIC_ICER1_R_NVIC_ADC1SEQ3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_ADC1SEQ3_EN   ((uint32_t)0x00080000u)

#define NVIC_ICER1_NVIC_ADC1SEQ3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_ADC1SEQ3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_ADC1SEQ3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_RES68_MASK    ((uint32_t)0x00100000u)
#define NVIC_ICER1_R_NVIC_RES68_BIT     (20)
#define NVIC_ICER1_R_NVIC_RES68_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_RES68_EN      ((uint32_t)0x00100000u)

#define NVIC_ICER1_NVIC_RES68_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_RES68_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_RES68_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_RES69_MASK    ((uint32_t)0x00200000u)
#define NVIC_ICER1_R_NVIC_RES69_BIT     (21)
#define NVIC_ICER1_R_NVIC_RES69_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_RES69_EN      ((uint32_t)0x00200000u)

#define NVIC_ICER1_NVIC_RES69_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_RES69_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_RES69_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_RES70_MASK    ((uint32_t)0x00400000u)
#define NVIC_ICER1_R_NVIC_RES70_BIT     (22)
#define NVIC_ICER1_R_NVIC_RES70_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_RES70_EN      ((uint32_t)0x00400000u)

#define NVIC_ICER1_NVIC_RES70_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_RES70_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_RES70_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICER1_R_NVIC_RES71_MASK    ((uint32_t)0x00800000u)
#define NVIC_ICER1_R_NVIC_RES71_BIT     (23)
#define NVIC_ICER1_R_NVIC_RES71_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_RES71_EN      ((uint32_t)0x00800000u)

#define NVIC_ICER1_NVIC_RES71_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_RES71_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_RES71_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_RES72_MASK    ((uint32_t)0x01000000u)
#define NVIC_ICER1_R_NVIC_RES72_BIT     (24)
#define NVIC_ICER1_R_NVIC_RES72_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_RES72_EN      ((uint32_t)0x01000000u)

#define NVIC_ICER1_NVIC_RES72_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_RES72_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_RES72_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_SSI2_MASK     ((uint32_t)0x02000000u)
#define NVIC_ICER1_R_NVIC_SSI2_BIT      (25)
#define NVIC_ICER1_R_NVIC_SSI2_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_SSI2_EN       ((uint32_t)0x02000000u)

#define NVIC_ICER1_NVIC_SSI2_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_SSI2_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_SSI2_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_SSI3_MASK     ((uint32_t)0x04000000u)
#define NVIC_ICER1_R_NVIC_SSI3_BIT      (26)
#define NVIC_ICER1_R_NVIC_SSI3_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_SSI3_EN       ((uint32_t)0x04000000u)

#define NVIC_ICER1_NVIC_SSI3_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_SSI3_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_SSI3_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_UART3_MASK    ((uint32_t)0x08000000u)
#define NVIC_ICER1_R_NVIC_UART3_BIT     (27)
#define NVIC_ICER1_R_NVIC_UART3_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_UART3_EN      ((uint32_t)0x08000000u)

#define NVIC_ICER1_NVIC_UART3_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_UART3_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_UART3_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_UART4_MASK    ((uint32_t)0x10000000u)
#define NVIC_ICER1_R_NVIC_UART4_BIT     (28)
#define NVIC_ICER1_R_NVIC_UART4_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_UART4_EN      ((uint32_t)0x10000000u)

#define NVIC_ICER1_NVIC_UART4_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_UART4_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_UART4_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_UART5_MASK    ((uint32_t)0x20000000u)
#define NVIC_ICER1_R_NVIC_UART5_BIT     (29)
#define NVIC_ICER1_R_NVIC_UART5_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_UART5_EN      ((uint32_t)0x20000000u)

#define NVIC_ICER1_NVIC_UART5_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_UART5_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_UART5_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_UART6_MASK    ((uint32_t)0x40000000u)
#define NVIC_ICER1_R_NVIC_UART6_BIT     (30)
#define NVIC_ICER1_R_NVIC_UART6_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_UART6_EN      ((uint32_t)0x40000000u)

#define NVIC_ICER1_NVIC_UART6_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_UART6_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_UART6_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER1_R_NVIC_UART7_MASK    ((uint32_t)0x80000000u)
#define NVIC_ICER1_R_NVIC_UART7_BIT     (31)
#define NVIC_ICER1_R_NVIC_UART7_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER1_R_NVIC_UART7_EN      ((uint32_t)0x80000000u)

#define NVIC_ICER1_NVIC_UART7_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER1_NVIC_UART7_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER1_NVIC_UART7_EN        ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* ISPR1 ***********************************************/
/********************************************************************************************/

#define NVIC_ISPR1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ISPR1_OFFSET)))
#define NVIC_ISPR1_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISPR1_OFFSET)))


/*----------*/
#define NVIC_ISPR1_R_NVIC_RES48_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR1_R_NVIC_RES48_BIT     (0)
#define NVIC_ISPR1_R_NVIC_RES48_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_RES48_EN      ((uint32_t)0x00000001u)

#define NVIC_ISPR1_NVIC_RES48_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_RES48_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_RES48_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UART2_MASK    ((uint32_t)0x00000002u)
#define NVIC_ISPR1_R_NVIC_UART2_BIT     (1)
#define NVIC_ISPR1_R_NVIC_UART2_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_UART2_EN      ((uint32_t)0x00000002u)

#define NVIC_ISPR1_NVIC_UART2_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_UART2_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_UART2_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_SSI1_MASK     ((uint32_t)0x00000004u)
#define NVIC_ISPR1_R_NVIC_SSI1_BIT      (2)
#define NVIC_ISPR1_R_NVIC_SSI1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_SSI1_EN       ((uint32_t)0x00000004u)

#define NVIC_ISPR1_NVIC_SSI1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_SSI1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_SSI1_EN         ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISPR1_R_NVIC_TIMER3A_MASK  ((uint32_t)0x00000008u)
#define NVIC_ISPR1_R_NVIC_TIMER3A_BIT   (3)
#define NVIC_ISPR1_R_NVIC_TIMER3A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_TIMER3A_EN    ((uint32_t)0x00000008u)

#define NVIC_ISPR1_NVIC_TIMER3A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_TIMER3A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_TIMER3A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_TIMER3B_MASK  ((uint32_t)0x00000010u)
#define NVIC_ISPR1_R_NVIC_TIMER3B_BIT   (4)
#define NVIC_ISPR1_R_NVIC_TIMER3B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_TIMER3B_EN    ((uint32_t)0x00000010u)

#define NVIC_ISPR1_NVIC_TIMER3B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_TIMER3B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_TIMER3B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_I2C1_MASK     ((uint32_t)0x00000020u)
#define NVIC_ISPR1_R_NVIC_I2C1_BIT      (5)
#define NVIC_ISPR1_R_NVIC_I2C1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_I2C1_EN       ((uint32_t)0x00000020u)

#define NVIC_ISPR1_NVIC_I2C1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_I2C1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_I2C1_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_QEI1_MASK     ((uint32_t)0x00000040u)
#define NVIC_ISPR1_R_NVIC_QEI1_BIT      (6)
#define NVIC_ISPR1_R_NVIC_QEI1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_QEI1_EN       ((uint32_t)0x00000040u)

#define NVIC_ISPR1_NVIC_QEI1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_QEI1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_QEI1_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_CAN0_MASK     ((uint32_t)0x00000080u)
#define NVIC_ISPR1_R_NVIC_CAN0_BIT      (7)
#define NVIC_ISPR1_R_NVIC_CAN0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_CAN0_EN       ((uint32_t)0x00000080u)

#define NVIC_ISPR1_NVIC_CAN0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_CAN0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_CAN0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_CAN1_MASK     ((uint32_t)0x00000100u)
#define NVIC_ISPR1_R_NVIC_CAN1_BIT      (8)
#define NVIC_ISPR1_R_NVIC_CAN1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_CAN1_EN       ((uint32_t)0x00000100u)

#define NVIC_ISPR1_NVIC_CAN1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_CAN1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_CAN1_EN         ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISPR1_R_NVIC_RES57_MASK    ((uint32_t)0x00000200u)
#define NVIC_ISPR1_R_NVIC_RES57_BIT     (9)
#define NVIC_ISPR1_R_NVIC_RES57_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_RES57_EN      ((uint32_t)0x00000200u)

#define NVIC_ISPR1_NVIC_RES57_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_RES57_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_RES57_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISPR1_R_NVIC_RES58_MASK    ((uint32_t)0x00000400u)
#define NVIC_ISPR1_R_NVIC_RES58_BIT     (10)
#define NVIC_ISPR1_R_NVIC_RES58_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_RES58_EN      ((uint32_t)0x00000400u)

#define NVIC_ISPR1_NVIC_RES58_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_RES58_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_RES58_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_HIB_MASK      ((uint32_t)0x00000800u)
#define NVIC_ISPR1_R_NVIC_HIB_BIT       (11)
#define NVIC_ISPR1_R_NVIC_HIB_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_HIB_EN        ((uint32_t)0x00000800u)

#define NVIC_ISPR1_NVIC_HIB_MASK        ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_HIB_DIS         ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_HIB_EN          ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_USB_MASK      ((uint32_t)0x00001000u)
#define NVIC_ISPR1_R_NVIC_USB_BIT       (12)
#define NVIC_ISPR1_R_NVIC_USB_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_USB_EN        ((uint32_t)0x00001000u)

#define NVIC_ISPR1_NVIC_USB_MASK        ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_USB_DIS         ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_USB_EN          ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISPR1_R_NVIC_PWM0GEN3_MASK ((uint32_t)0x00002000u)
#define NVIC_ISPR1_R_NVIC_PWM0GEN3_BIT  (13)
#define NVIC_ISPR1_R_NVIC_PWM0GEN3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_PWM0GEN3_EN   ((uint32_t)0x00002000u)

#define NVIC_ISPR1_NVIC_PWM0GEN3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_PWM0GEN3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_PWM0GEN3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UDMASOFT_MASK ((uint32_t)0x00004000u)
#define NVIC_ISPR1_R_NVIC_UDMASOFT_BIT  (14)
#define NVIC_ISPR1_R_NVIC_UDMASOFT_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_UDMASOFT_EN   ((uint32_t)0x00004000u)

#define NVIC_ISPR1_NVIC_UDMASOFT_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_UDMASOFT_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_UDMASOFT_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UDMAERROR_MASK ((uint32_t)0x00008000u)
#define NVIC_ISPR1_R_NVIC_UDMAERROR_BIT (15)
#define NVIC_ISPR1_R_NVIC_UDMAERROR_DIS ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_UDMAERROR_EN  ((uint32_t)0x00008000u)

#define NVIC_ISPR1_NVIC_UDMAERROR_MASK  ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_UDMAERROR_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_UDMAERROR_EN    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_ADC1SEQ0_MASK ((uint32_t)0x00010000u)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ0_BIT  (16)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ0_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ0_EN   ((uint32_t)0x00010000u)

#define NVIC_ISPR1_NVIC_ADC1SEQ0_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_ADC1SEQ0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_ADC1SEQ0_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_ADC1SEQ1_MASK ((uint32_t)0x00020000u)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ1_BIT  (17)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ1_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ1_EN   ((uint32_t)0x00020000u)

#define NVIC_ISPR1_NVIC_ADC1SEQ1_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_ADC1SEQ1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_ADC1SEQ1_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_ADC1SEQ2_MASK ((uint32_t)0x00040000u)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ2_BIT  (18)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ2_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ2_EN   ((uint32_t)0x00040000u)

#define NVIC_ISPR1_NVIC_ADC1SEQ2_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_ADC1SEQ2_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_ADC1SEQ2_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_ADC1SEQ3_MASK ((uint32_t)0x00080000u)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ3_BIT  (19)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_ADC1SEQ3_EN   ((uint32_t)0x00080000u)

#define NVIC_ISPR1_NVIC_ADC1SEQ3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_ADC1SEQ3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_ADC1SEQ3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_RES68_MASK    ((uint32_t)0x00100000u)
#define NVIC_ISPR1_R_NVIC_RES68_BIT     (20)
#define NVIC_ISPR1_R_NVIC_RES68_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_RES68_EN      ((uint32_t)0x00100000u)

#define NVIC_ISPR1_NVIC_RES68_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_RES68_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_RES68_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_RES69_MASK    ((uint32_t)0x00200000u)
#define NVIC_ISPR1_R_NVIC_RES69_BIT     (21)
#define NVIC_ISPR1_R_NVIC_RES69_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_RES69_EN      ((uint32_t)0x00200000u)

#define NVIC_ISPR1_NVIC_RES69_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_RES69_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_RES69_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_RES70_MASK    ((uint32_t)0x00400000u)
#define NVIC_ISPR1_R_NVIC_RES70_BIT     (22)
#define NVIC_ISPR1_R_NVIC_RES70_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_RES70_EN      ((uint32_t)0x00400000u)

#define NVIC_ISPR1_NVIC_RES70_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_RES70_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_RES70_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISPR1_R_NVIC_RES71_MASK    ((uint32_t)0x00800000u)
#define NVIC_ISPR1_R_NVIC_RES71_BIT     (23)
#define NVIC_ISPR1_R_NVIC_RES71_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_RES71_EN      ((uint32_t)0x00800000u)

#define NVIC_ISPR1_NVIC_RES71_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_RES71_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_RES71_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_RES72_MASK    ((uint32_t)0x01000000u)
#define NVIC_ISPR1_R_NVIC_RES72_BIT     (24)
#define NVIC_ISPR1_R_NVIC_RES72_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_RES72_EN      ((uint32_t)0x01000000u)

#define NVIC_ISPR1_NVIC_RES72_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_RES72_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_RES72_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_SSI2_MASK     ((uint32_t)0x02000000u)
#define NVIC_ISPR1_R_NVIC_SSI2_BIT      (25)
#define NVIC_ISPR1_R_NVIC_SSI2_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_SSI2_EN       ((uint32_t)0x02000000u)

#define NVIC_ISPR1_NVIC_SSI2_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_SSI2_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_SSI2_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_SSI3_MASK     ((uint32_t)0x04000000u)
#define NVIC_ISPR1_R_NVIC_SSI3_BIT      (26)
#define NVIC_ISPR1_R_NVIC_SSI3_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_SSI3_EN       ((uint32_t)0x04000000u)

#define NVIC_ISPR1_NVIC_SSI3_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_SSI3_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_SSI3_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UART3_MASK    ((uint32_t)0x08000000u)
#define NVIC_ISPR1_R_NVIC_UART3_BIT     (27)
#define NVIC_ISPR1_R_NVIC_UART3_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_UART3_EN      ((uint32_t)0x08000000u)

#define NVIC_ISPR1_NVIC_UART3_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_UART3_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_UART3_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UART4_MASK    ((uint32_t)0x10000000u)
#define NVIC_ISPR1_R_NVIC_UART4_BIT     (28)
#define NVIC_ISPR1_R_NVIC_UART4_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_UART4_EN      ((uint32_t)0x10000000u)

#define NVIC_ISPR1_NVIC_UART4_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_UART4_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_UART4_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UART5_MASK    ((uint32_t)0x20000000u)
#define NVIC_ISPR1_R_NVIC_UART5_BIT     (29)
#define NVIC_ISPR1_R_NVIC_UART5_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_UART5_EN      ((uint32_t)0x20000000u)

#define NVIC_ISPR1_NVIC_UART5_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_UART5_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_UART5_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UART6_MASK    ((uint32_t)0x40000000u)
#define NVIC_ISPR1_R_NVIC_UART6_BIT     (30)
#define NVIC_ISPR1_R_NVIC_UART6_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_UART6_EN      ((uint32_t)0x40000000u)

#define NVIC_ISPR1_NVIC_UART6_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_UART6_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_UART6_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR1_R_NVIC_UART7_MASK    ((uint32_t)0x80000000u)
#define NVIC_ISPR1_R_NVIC_UART7_BIT     (31)
#define NVIC_ISPR1_R_NVIC_UART7_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR1_R_NVIC_UART7_EN      ((uint32_t)0x80000000u)

#define NVIC_ISPR1_NVIC_UART7_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR1_NVIC_UART7_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR1_NVIC_UART7_EN        ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* ICPR1 ***********************************************/
/********************************************************************************************/

#define NVIC_ICPR1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ICPR1_OFFSET)))
#define NVIC_ICPR1_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICPR1_OFFSET)))

/*----------*/
#define NVIC_ICPR1_R_NVIC_RES48_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR1_R_NVIC_RES48_BIT     (0)
#define NVIC_ICPR1_R_NVIC_RES48_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_RES48_EN      ((uint32_t)0x00000001u)

#define NVIC_ICPR1_NVIC_RES48_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_RES48_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_RES48_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_UART2_MASK    ((uint32_t)0x00000002u)
#define NVIC_ICPR1_R_NVIC_UART2_BIT     (1)
#define NVIC_ICPR1_R_NVIC_UART2_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_UART2_EN      ((uint32_t)0x00000002u)

#define NVIC_ICPR1_NVIC_UART2_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_UART2_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_UART2_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_SSI1_MASK     ((uint32_t)0x00000004u)
#define NVIC_ICPR1_R_NVIC_SSI1_BIT      (2)
#define NVIC_ICPR1_R_NVIC_SSI1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_SSI1_EN       ((uint32_t)0x00000004u)

#define NVIC_ICPR1_NVIC_SSI1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_SSI1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_SSI1_EN         ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICPR1_R_NVIC_TIMER3A_MASK  ((uint32_t)0x00000008u)
#define NVIC_ICPR1_R_NVIC_TIMER3A_BIT   (3)
#define NVIC_ICPR1_R_NVIC_TIMER3A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_TIMER3A_EN    ((uint32_t)0x00000008u)

#define NVIC_ICPR1_NVIC_TIMER3A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_TIMER3A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_TIMER3A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_TIMER3B_MASK  ((uint32_t)0x00000010u)
#define NVIC_ICPR1_R_NVIC_TIMER3B_BIT   (4)
#define NVIC_ICPR1_R_NVIC_TIMER3B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_TIMER3B_EN    ((uint32_t)0x00000010u)

#define NVIC_ICPR1_NVIC_TIMER3B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_TIMER3B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_TIMER3B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_I2C1_MASK     ((uint32_t)0x00000020u)
#define NVIC_ICPR1_R_NVIC_I2C1_BIT      (5)
#define NVIC_ICPR1_R_NVIC_I2C1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_I2C1_EN       ((uint32_t)0x00000020u)

#define NVIC_ICPR1_NVIC_I2C1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_I2C1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_I2C1_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_QEI1_MASK     ((uint32_t)0x00000040u)
#define NVIC_ICPR1_R_NVIC_QEI1_BIT      (6)
#define NVIC_ICPR1_R_NVIC_QEI1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_QEI1_EN       ((uint32_t)0x00000040u)

#define NVIC_ICPR1_NVIC_QEI1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_QEI1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_QEI1_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_CAN0_MASK     ((uint32_t)0x00000080u)
#define NVIC_ICPR1_R_NVIC_CAN0_BIT      (7)
#define NVIC_ICPR1_R_NVIC_CAN0_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_CAN0_EN       ((uint32_t)0x00000080u)

#define NVIC_ICPR1_NVIC_CAN0_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_CAN0_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_CAN0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_CAN1_MASK     ((uint32_t)0x00000100u)
#define NVIC_ICPR1_R_NVIC_CAN1_BIT      (8)
#define NVIC_ICPR1_R_NVIC_CAN1_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_CAN1_EN       ((uint32_t)0x00000100u)

#define NVIC_ICPR1_NVIC_CAN1_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_CAN1_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_CAN1_EN         ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICPR1_R_NVIC_RES57_MASK    ((uint32_t)0x00000200u)
#define NVIC_ICPR1_R_NVIC_RES57_BIT     (9)
#define NVIC_ICPR1_R_NVIC_RES57_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_RES57_EN      ((uint32_t)0x00000200u)

#define NVIC_ICPR1_NVIC_RES57_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_RES57_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_RES57_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICPR1_R_NVIC_RES58_MASK    ((uint32_t)0x00000400u)
#define NVIC_ICPR1_R_NVIC_RES58_BIT     (10)
#define NVIC_ICPR1_R_NVIC_RES58_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_RES58_EN      ((uint32_t)0x00000400u)

#define NVIC_ICPR1_NVIC_RES58_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_RES58_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_RES58_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_HIB_MASK      ((uint32_t)0x00000800u)
#define NVIC_ICPR1_R_NVIC_HIB_BIT       (11)
#define NVIC_ICPR1_R_NVIC_HIB_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_HIB_EN        ((uint32_t)0x00000800u)

#define NVIC_ICPR1_NVIC_HIB_MASK        ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_HIB_DIS         ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_HIB_EN          ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_USB_MASK      ((uint32_t)0x00001000u)
#define NVIC_ICPR1_R_NVIC_USB_BIT       (12)
#define NVIC_ICPR1_R_NVIC_USB_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_USB_EN        ((uint32_t)0x00001000u)

#define NVIC_ICPR1_NVIC_USB_MASK        ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_USB_DIS         ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_USB_EN          ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICPR1_R_NVIC_PWM0GEN3_MASK ((uint32_t)0x00002000u)
#define NVIC_ICPR1_R_NVIC_PWM0GEN3_BIT  (13)
#define NVIC_ICPR1_R_NVIC_PWM0GEN3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_PWM0GEN3_EN   ((uint32_t)0x00002000u)

#define NVIC_ICPR1_NVIC_PWM0GEN3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_PWM0GEN3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_PWM0GEN3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_UDMASOFT_MASK ((uint32_t)0x00004000u)
#define NVIC_ICPR1_R_NVIC_UDMASOFT_BIT  (14)
#define NVIC_ICPR1_R_NVIC_UDMASOFT_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_UDMASOFT_EN   ((uint32_t)0x00004000u)

#define NVIC_ICPR1_NVIC_UDMASOFT_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_UDMASOFT_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_UDMASOFT_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_UDMAERROR_MASK ((uint32_t)0x00008000u)
#define NVIC_ICPR1_R_NVIC_UDMAERROR_BIT (15)
#define NVIC_ICPR1_R_NVIC_UDMAERROR_DIS ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_UDMAERROR_EN  ((uint32_t)0x00008000u)

#define NVIC_ICPR1_NVIC_UDMAERROR_MASK  ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_UDMAERROR_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_UDMAERROR_EN    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_ADC1SEQ0_MASK ((uint32_t)0x00010000u)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ0_BIT  (16)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ0_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ0_EN   ((uint32_t)0x00010000u)

#define NVIC_ICPR1_NVIC_ADC1SEQ0_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_ADC1SEQ0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_ADC1SEQ0_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_ADC1SEQ1_MASK ((uint32_t)0x00020000u)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ1_BIT  (17)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ1_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ1_EN   ((uint32_t)0x00020000u)

#define NVIC_ICPR1_NVIC_ADC1SEQ1_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_ADC1SEQ1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_ADC1SEQ1_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_ADC1SEQ2_MASK ((uint32_t)0x00040000u)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ2_BIT  (18)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ2_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ2_EN   ((uint32_t)0x00040000u)

#define NVIC_ICPR1_NVIC_ADC1SEQ2_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_ADC1SEQ2_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_ADC1SEQ2_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_ADC1SEQ3_MASK ((uint32_t)0x00080000u)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ3_BIT  (19)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_ADC1SEQ3_EN   ((uint32_t)0x00080000u)

#define NVIC_ICPR1_NVIC_ADC1SEQ3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_ADC1SEQ3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_ADC1SEQ3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_RES68_MASK    ((uint32_t)0x00100000u)
#define NVIC_ICPR1_R_NVIC_RES68_BIT     (20)
#define NVIC_ICPR1_R_NVIC_RES68_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_RES68_EN      ((uint32_t)0x00100000u)

#define NVIC_ICPR1_NVIC_RES68_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_RES68_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_RES68_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_RES69_MASK    ((uint32_t)0x00200000u)
#define NVIC_ICPR1_R_NVIC_RES69_BIT     (21)
#define NVIC_ICPR1_R_NVIC_RES69_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_RES69_EN      ((uint32_t)0x00200000u)

#define NVIC_ICPR1_NVIC_RES69_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_RES69_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_RES69_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_RES70_MASK    ((uint32_t)0x00400000u)
#define NVIC_ICPR1_R_NVIC_RES70_BIT     (22)
#define NVIC_ICPR1_R_NVIC_RES70_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_RES70_EN      ((uint32_t)0x00400000u)

#define NVIC_ICPR1_NVIC_RES70_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_RES70_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_RES70_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICPR1_R_NVIC_RES71_MASK    ((uint32_t)0x00800000u)
#define NVIC_ICPR1_R_NVIC_RES71_BIT     (23)
#define NVIC_ICPR1_R_NVIC_RES71_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_RES71_EN      ((uint32_t)0x00800000u)

#define NVIC_ICPR1_NVIC_RES71_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_RES71_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_RES71_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_RES72_MASK    ((uint32_t)0x01000000u)
#define NVIC_ICPR1_R_NVIC_RES72_BIT     (24)
#define NVIC_ICPR1_R_NVIC_RES72_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_RES72_EN      ((uint32_t)0x01000000u)

#define NVIC_ICPR1_NVIC_RES72_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_RES72_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_RES72_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_SSI2_MASK     ((uint32_t)0x02000000u)
#define NVIC_ICPR1_R_NVIC_SSI2_BIT      (25)
#define NVIC_ICPR1_R_NVIC_SSI2_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_SSI2_EN       ((uint32_t)0x02000000u)

#define NVIC_ICPR1_NVIC_SSI2_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_SSI2_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_SSI2_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_SSI3_MASK     ((uint32_t)0x04000000u)
#define NVIC_ICPR1_R_NVIC_SSI3_BIT      (26)
#define NVIC_ICPR1_R_NVIC_SSI3_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_SSI3_EN       ((uint32_t)0x04000000u)

#define NVIC_ICPR1_NVIC_SSI3_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_SSI3_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_SSI3_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_UART3_MASK    ((uint32_t)0x08000000u)
#define NVIC_ICPR1_R_NVIC_UART3_BIT     (27)
#define NVIC_ICPR1_R_NVIC_UART3_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_UART3_EN      ((uint32_t)0x08000000u)

#define NVIC_ICPR1_NVIC_UART3_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_UART3_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_UART3_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_UART4_MASK    ((uint32_t)0x10000000u)
#define NVIC_ICPR1_R_NVIC_UART4_BIT     (28)
#define NVIC_ICPR1_R_NVIC_UART4_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_UART4_EN      ((uint32_t)0x10000000u)

#define NVIC_ICPR1_NVIC_UART4_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_UART4_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_UART4_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_UART5_MASK    ((uint32_t)0x20000000u)
#define NVIC_ICPR1_R_NVIC_UART5_BIT     (29)
#define NVIC_ICPR1_R_NVIC_UART5_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_UART5_EN      ((uint32_t)0x20000000u)

#define NVIC_ICPR1_NVIC_UART5_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_UART5_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_UART5_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_UART6_MASK    ((uint32_t)0x40000000u)
#define NVIC_ICPR1_R_NVIC_UART6_BIT     (30)
#define NVIC_ICPR1_R_NVIC_UART6_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_UART6_EN      ((uint32_t)0x40000000u)

#define NVIC_ICPR1_NVIC_UART6_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_UART6_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_UART6_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR1_R_NVIC_UART7_MASK    ((uint32_t)0x80000000u)
#define NVIC_ICPR1_R_NVIC_UART7_BIT     (31)
#define NVIC_ICPR1_R_NVIC_UART7_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR1_R_NVIC_UART7_EN      ((uint32_t)0x80000000u)

#define NVIC_ICPR1_NVIC_UART7_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR1_NVIC_UART7_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR1_NVIC_UART7_EN        ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* IABR1 ***********************************************/
/********************************************************************************************/

#define NVIC_IABR1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_IABR1_OFFSET)))
#define NVIC_IABR1_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_IABR1_OFFSET)))


/*----------*/
#define NVIC_IABR1_R_NVIC_RES48_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR1_R_NVIC_RES48_BIT     (0)
#define NVIC_IABR1_R_NVIC_RES48_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_RES48_EN      ((uint32_t)0x00000001u)

#define NVIC_IABR1_NVIC_RES48_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_RES48_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_RES48_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UART2_MASK    ((uint32_t)0x00000002u)
#define NVIC_IABR1_R_NVIC_UART2_BIT     (1)
#define NVIC_IABR1_R_NVIC_UART2_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_UART2_EN      ((uint32_t)0x00000002u)

#define NVIC_IABR1_NVIC_UART2_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_UART2_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_UART2_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_SSI1_MASK     ((uint32_t)0x00000004u)
#define NVIC_IABR1_R_NVIC_SSI1_BIT      (2)
#define NVIC_IABR1_R_NVIC_SSI1_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_SSI1_EN       ((uint32_t)0x00000004u)

#define NVIC_IABR1_NVIC_SSI1_MASK       ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_SSI1_DIS        ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_SSI1_EN         ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_IABR1_R_NVIC_TIMER3A_MASK  ((uint32_t)0x00000008u)
#define NVIC_IABR1_R_NVIC_TIMER3A_BIT   (3)
#define NVIC_IABR1_R_NVIC_TIMER3A_DIS   ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_TIMER3A_EN    ((uint32_t)0x00000008u)

#define NVIC_IABR1_NVIC_TIMER3A_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_TIMER3A_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_TIMER3A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_TIMER3B_MASK  ((uint32_t)0x00000010u)
#define NVIC_IABR1_R_NVIC_TIMER3B_BIT   (4)
#define NVIC_IABR1_R_NVIC_TIMER3B_DIS   ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_TIMER3B_EN    ((uint32_t)0x00000010u)

#define NVIC_IABR1_NVIC_TIMER3B_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_TIMER3B_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_TIMER3B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_I2C1_MASK     ((uint32_t)0x00000020u)
#define NVIC_IABR1_R_NVIC_I2C1_BIT      (5)
#define NVIC_IABR1_R_NVIC_I2C1_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_I2C1_EN       ((uint32_t)0x00000020u)

#define NVIC_IABR1_NVIC_I2C1_MASK       ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_I2C1_DIS        ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_I2C1_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_QEI1_MASK     ((uint32_t)0x00000040u)
#define NVIC_IABR1_R_NVIC_QEI1_BIT      (6)
#define NVIC_IABR1_R_NVIC_QEI1_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_QEI1_EN       ((uint32_t)0x00000040u)

#define NVIC_IABR1_NVIC_QEI1_MASK       ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_QEI1_DIS        ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_QEI1_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_CAN0_MASK     ((uint32_t)0x00000080u)
#define NVIC_IABR1_R_NVIC_CAN0_BIT      (7)
#define NVIC_IABR1_R_NVIC_CAN0_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_CAN0_EN       ((uint32_t)0x00000080u)

#define NVIC_IABR1_NVIC_CAN0_MASK       ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_CAN0_DIS        ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_CAN0_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_CAN1_MASK     ((uint32_t)0x00000100u)
#define NVIC_IABR1_R_NVIC_CAN1_BIT      (8)
#define NVIC_IABR1_R_NVIC_CAN1_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_CAN1_EN       ((uint32_t)0x00000100u)

#define NVIC_IABR1_NVIC_CAN1_MASK       ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_CAN1_DIS        ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_CAN1_EN         ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_IABR1_R_NVIC_RES57_MASK    ((uint32_t)0x00000200u)
#define NVIC_IABR1_R_NVIC_RES57_BIT     (9)
#define NVIC_IABR1_R_NVIC_RES57_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_RES57_EN      ((uint32_t)0x00000200u)

#define NVIC_IABR1_NVIC_RES57_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_RES57_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_RES57_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_IABR1_R_NVIC_RES58_MASK    ((uint32_t)0x00000400u)
#define NVIC_IABR1_R_NVIC_RES58_BIT     (10)
#define NVIC_IABR1_R_NVIC_RES58_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_RES58_EN      ((uint32_t)0x00000400u)

#define NVIC_IABR1_NVIC_RES58_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_RES58_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_RES58_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_HIB_MASK      ((uint32_t)0x00000800u)
#define NVIC_IABR1_R_NVIC_HIB_BIT       (11)
#define NVIC_IABR1_R_NVIC_HIB_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_HIB_EN        ((uint32_t)0x00000800u)

#define NVIC_IABR1_NVIC_HIB_MASK        ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_HIB_DIS         ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_HIB_EN          ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_USB_MASK      ((uint32_t)0x00001000u)
#define NVIC_IABR1_R_NVIC_USB_BIT       (12)
#define NVIC_IABR1_R_NVIC_USB_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_USB_EN        ((uint32_t)0x00001000u)

#define NVIC_IABR1_NVIC_USB_MASK        ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_USB_DIS         ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_USB_EN          ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_IABR1_R_NVIC_PWM0GEN3_MASK ((uint32_t)0x00002000u)
#define NVIC_IABR1_R_NVIC_PWM0GEN3_BIT  (13)
#define NVIC_IABR1_R_NVIC_PWM0GEN3_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_PWM0GEN3_EN   ((uint32_t)0x00002000u)

#define NVIC_IABR1_NVIC_PWM0GEN3_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_PWM0GEN3_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_PWM0GEN3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UDMASOFT_MASK ((uint32_t)0x00004000u)
#define NVIC_IABR1_R_NVIC_UDMASOFT_BIT  (14)
#define NVIC_IABR1_R_NVIC_UDMASOFT_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_UDMASOFT_EN   ((uint32_t)0x00004000u)

#define NVIC_IABR1_NVIC_UDMASOFT_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_UDMASOFT_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_UDMASOFT_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UDMAERROR_MASK ((uint32_t)0x00008000u)
#define NVIC_IABR1_R_NVIC_UDMAERROR_BIT (15)
#define NVIC_IABR1_R_NVIC_UDMAERROR_DIS ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_UDMAERROR_EN  ((uint32_t)0x00008000u)

#define NVIC_IABR1_NVIC_UDMAERROR_MASK  ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_UDMAERROR_DIS   ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_UDMAERROR_EN    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_ADC1SEQ0_MASK ((uint32_t)0x00010000u)
#define NVIC_IABR1_R_NVIC_ADC1SEQ0_BIT  (16)
#define NVIC_IABR1_R_NVIC_ADC1SEQ0_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_ADC1SEQ0_EN   ((uint32_t)0x00010000u)

#define NVIC_IABR1_NVIC_ADC1SEQ0_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_ADC1SEQ0_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_ADC1SEQ0_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_ADC1SEQ1_MASK ((uint32_t)0x00020000u)
#define NVIC_IABR1_R_NVIC_ADC1SEQ1_BIT  (17)
#define NVIC_IABR1_R_NVIC_ADC1SEQ1_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_ADC1SEQ1_EN   ((uint32_t)0x00020000u)

#define NVIC_IABR1_NVIC_ADC1SEQ1_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_ADC1SEQ1_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_ADC1SEQ1_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_ADC1SEQ2_MASK ((uint32_t)0x00040000u)
#define NVIC_IABR1_R_NVIC_ADC1SEQ2_BIT  (18)
#define NVIC_IABR1_R_NVIC_ADC1SEQ2_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_ADC1SEQ2_EN   ((uint32_t)0x00040000u)

#define NVIC_IABR1_NVIC_ADC1SEQ2_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_ADC1SEQ2_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_ADC1SEQ2_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_ADC1SEQ3_MASK ((uint32_t)0x00080000u)
#define NVIC_IABR1_R_NVIC_ADC1SEQ3_BIT  (19)
#define NVIC_IABR1_R_NVIC_ADC1SEQ3_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_ADC1SEQ3_EN   ((uint32_t)0x00080000u)

#define NVIC_IABR1_NVIC_ADC1SEQ3_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_ADC1SEQ3_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_ADC1SEQ3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_RES68_MASK    ((uint32_t)0x00100000u)
#define NVIC_IABR1_R_NVIC_RES68_BIT     (20)
#define NVIC_IABR1_R_NVIC_RES68_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_RES68_EN      ((uint32_t)0x00100000u)

#define NVIC_IABR1_NVIC_RES68_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_RES68_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_RES68_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_RES69_MASK    ((uint32_t)0x00200000u)
#define NVIC_IABR1_R_NVIC_RES69_BIT     (21)
#define NVIC_IABR1_R_NVIC_RES69_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_RES69_EN      ((uint32_t)0x00200000u)

#define NVIC_IABR1_NVIC_RES69_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_RES69_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_RES69_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_RES70_MASK    ((uint32_t)0x00400000u)
#define NVIC_IABR1_R_NVIC_RES70_BIT     (22)
#define NVIC_IABR1_R_NVIC_RES70_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_RES70_EN      ((uint32_t)0x00400000u)

#define NVIC_IABR1_NVIC_RES70_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_RES70_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_RES70_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_IABR1_R_NVIC_RES71_MASK    ((uint32_t)0x00800000u)
#define NVIC_IABR1_R_NVIC_RES71_BIT     (23)
#define NVIC_IABR1_R_NVIC_RES71_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_RES71_EN      ((uint32_t)0x00800000u)

#define NVIC_IABR1_NVIC_RES71_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_RES71_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_RES71_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_RES72_MASK    ((uint32_t)0x01000000u)
#define NVIC_IABR1_R_NVIC_RES72_BIT     (24)
#define NVIC_IABR1_R_NVIC_RES72_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_RES72_EN      ((uint32_t)0x01000000u)

#define NVIC_IABR1_NVIC_RES72_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_RES72_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_RES72_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_SSI2_MASK     ((uint32_t)0x02000000u)
#define NVIC_IABR1_R_NVIC_SSI2_BIT      (25)
#define NVIC_IABR1_R_NVIC_SSI2_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_SSI2_EN       ((uint32_t)0x02000000u)

#define NVIC_IABR1_NVIC_SSI2_MASK       ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_SSI2_DIS        ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_SSI2_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_SSI3_MASK     ((uint32_t)0x04000000u)
#define NVIC_IABR1_R_NVIC_SSI3_BIT      (26)
#define NVIC_IABR1_R_NVIC_SSI3_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_SSI3_EN       ((uint32_t)0x04000000u)

#define NVIC_IABR1_NVIC_SSI3_MASK       ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_SSI3_DIS        ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_SSI3_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UART3_MASK    ((uint32_t)0x08000000u)
#define NVIC_IABR1_R_NVIC_UART3_BIT     (27)
#define NVIC_IABR1_R_NVIC_UART3_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_UART3_EN      ((uint32_t)0x08000000u)

#define NVIC_IABR1_NVIC_UART3_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_UART3_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_UART3_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UART4_MASK    ((uint32_t)0x10000000u)
#define NVIC_IABR1_R_NVIC_UART4_BIT     (28)
#define NVIC_IABR1_R_NVIC_UART4_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_UART4_EN      ((uint32_t)0x10000000u)

#define NVIC_IABR1_NVIC_UART4_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_UART4_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_UART4_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UART5_MASK    ((uint32_t)0x20000000u)
#define NVIC_IABR1_R_NVIC_UART5_BIT     (29)
#define NVIC_IABR1_R_NVIC_UART5_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_UART5_EN      ((uint32_t)0x20000000u)

#define NVIC_IABR1_NVIC_UART5_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_UART5_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_UART5_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UART6_MASK    ((uint32_t)0x40000000u)
#define NVIC_IABR1_R_NVIC_UART6_BIT     (30)
#define NVIC_IABR1_R_NVIC_UART6_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_UART6_EN      ((uint32_t)0x40000000u)

#define NVIC_IABR1_NVIC_UART6_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_UART6_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_UART6_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR1_R_NVIC_UART7_MASK    ((uint32_t)0x80000000u)
#define NVIC_IABR1_R_NVIC_UART7_BIT     (31)
#define NVIC_IABR1_R_NVIC_UART7_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR1_R_NVIC_UART7_EN      ((uint32_t)0x80000000u)

#define NVIC_IABR1_NVIC_UART7_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR1_NVIC_UART7_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR1_NVIC_UART7_EN        ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* ISER2 ***********************************************/
/********************************************************************************************/

#define NVIC_ISER2                (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_ISER2_OFFSET)))
#define NVIC_ISER2_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISER2_OFFSET)))


/*----------*/
#define NVIC_ISER2_R_NVIC_RES80_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER2_R_NVIC_RES80_BIT     (0)
#define NVIC_ISER2_R_NVIC_RES80_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES80_EN      ((uint32_t)0x00000001u)

#define NVIC_ISER2_NVIC_RES80_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES80_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES80_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES81_MASK    ((uint32_t)0x00000002u)
#define NVIC_ISER2_R_NVIC_RES81_BIT     (1)
#define NVIC_ISER2_R_NVIC_RES81_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES81_EN      ((uint32_t)0x00000002u)

#define NVIC_ISER2_NVIC_RES81_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES81_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES81_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES82_MASK    ((uint32_t)0x00000004u)
#define NVIC_ISER2_R_NVIC_RES82_BIT     (2)
#define NVIC_ISER2_R_NVIC_RES82_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES82_EN      ((uint32_t)0x00000004u)

#define NVIC_ISER2_NVIC_RES82_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES82_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES82_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISER2_R_NVIC_RES83_MASK    ((uint32_t)0x00000008u)
#define NVIC_ISER2_R_NVIC_RES83_BIT     (3)
#define NVIC_ISER2_R_NVIC_RES83_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES83_EN      ((uint32_t)0x00000008u)

#define NVIC_ISER2_NVIC_RES83_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES83_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES83_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_I2C2_MASK     ((uint32_t)0x00000010u)
#define NVIC_ISER2_R_NVIC_I2C2_BIT      (4)
#define NVIC_ISER2_R_NVIC_I2C2_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_I2C2_EN       ((uint32_t)0x00000010u)

#define NVIC_ISER2_NVIC_I2C2_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_I2C2_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_I2C2_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_I2C3_MASK     ((uint32_t)0x00000020u)
#define NVIC_ISER2_R_NVIC_I2C3_BIT      (5)
#define NVIC_ISER2_R_NVIC_I2C3_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_I2C3_EN       ((uint32_t)0x00000020u)

#define NVIC_ISER2_NVIC_I2C3_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_I2C3_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_I2C3_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_TIMER4A_MASK  ((uint32_t)0x00000040u)
#define NVIC_ISER2_R_NVIC_TIMER4A_BIT   (6)
#define NVIC_ISER2_R_NVIC_TIMER4A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_TIMER4A_EN    ((uint32_t)0x00000040u)

#define NVIC_ISER2_NVIC_TIMER4A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_TIMER4A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_TIMER4A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_TIMER4B_MASK  ((uint32_t)0x00000080u)
#define NVIC_ISER2_R_NVIC_TIMER4B_BIT   (7)
#define NVIC_ISER2_R_NVIC_TIMER4B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_TIMER4B_EN    ((uint32_t)0x00000080u)

#define NVIC_ISER2_NVIC_TIMER4B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_TIMER4B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_TIMER4B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES88_MASK    ((uint32_t)0x00000100u)
#define NVIC_ISER2_R_NVIC_RES88_BIT     (8)
#define NVIC_ISER2_R_NVIC_RES88_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES88_EN      ((uint32_t)0x00000100u)

#define NVIC_ISER2_NVIC_RES88_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES88_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES88_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISER2_R_NVIC_RES89_MASK    ((uint32_t)0x00000200u)
#define NVIC_ISER2_R_NVIC_RES89_BIT     (9)
#define NVIC_ISER2_R_NVIC_RES89_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES89_EN      ((uint32_t)0x00000200u)

#define NVIC_ISER2_NVIC_RES89_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES89_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES89_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISER2_R_NVIC_RES90_MASK    ((uint32_t)0x00000400u)
#define NVIC_ISER2_R_NVIC_RES90_BIT     (10)
#define NVIC_ISER2_R_NVIC_RES90_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES90_EN      ((uint32_t)0x00000400u)

#define NVIC_ISER2_NVIC_RES90_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES90_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES90_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES93_EPI_IN_MASK ((uint32_t)0x00000800u)
#define NVIC_ISER2_R_NVIC_RES93_EPI_IN_BIT  (11)
#define NVIC_ISER2_R_NVIC_RES93_EPI_IN_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES93_EPI_IN_EN   ((uint32_t)0x00000800u)

#define NVIC_ISER2_NVIC_RES93_EPI_IN_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES93_EPI_IN_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES93_EPI_IN_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES92_MASK    ((uint32_t)0x00001000u)
#define NVIC_ISER2_R_NVIC_RES92_BIT     (12)
#define NVIC_ISER2_R_NVIC_RES92_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES92_EN      ((uint32_t)0x00001000u)

#define NVIC_ISER2_NVIC_RES92_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES92_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES92_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISER2_R_NVIC_RES93_MASK    ((uint32_t)0x00002000u)
#define NVIC_ISER2_R_NVIC_RES93_BIT     (13)
#define NVIC_ISER2_R_NVIC_RES93_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES93_EN      ((uint32_t)0x00002000u)

#define NVIC_ISER2_NVIC_RES93_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES93_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES93_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES94_MASK    ((uint32_t)0x00004000u)
#define NVIC_ISER2_R_NVIC_RES94_BIT     (14)
#define NVIC_ISER2_R_NVIC_RES94_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES94_EN      ((uint32_t)0x00004000u)

#define NVIC_ISER2_NVIC_RES94_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES94_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES94_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES95_MASK    ((uint32_t)0x00008000u)
#define NVIC_ISER2_R_NVIC_RES95_BIT     (15)
#define NVIC_ISER2_R_NVIC_RES95_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES95_EN      ((uint32_t)0x00008000u)

#define NVIC_ISER2_NVIC_RES95_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES95_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES95_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES96_MASK    ((uint32_t)0x00010000u)
#define NVIC_ISER2_R_NVIC_RES96_BIT     (16)
#define NVIC_ISER2_R_NVIC_RES96_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES96_EN      ((uint32_t)0x00010000u)

#define NVIC_ISER2_NVIC_RES96_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES96_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES96_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES97_MASK    ((uint32_t)0x00020000u)
#define NVIC_ISER2_R_NVIC_RES97_BIT     (17)
#define NVIC_ISER2_R_NVIC_RES97_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES97_EN      ((uint32_t)0x00020000u)

#define NVIC_ISER2_NVIC_RES97_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES97_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES97_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES98_MASK    ((uint32_t)0x00040000u)
#define NVIC_ISER2_R_NVIC_RES98_BIT     (18)
#define NVIC_ISER2_R_NVIC_RES98_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES98_EN      ((uint32_t)0x00040000u)

#define NVIC_ISER2_NVIC_RES98_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES98_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES98_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES99_MASK    ((uint32_t)0x00080000u)
#define NVIC_ISER2_R_NVIC_RES99_BIT     (19)
#define NVIC_ISER2_R_NVIC_RES99_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES99_EN      ((uint32_t)0x00080000u)

#define NVIC_ISER2_NVIC_RES99_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES99_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES99_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES100_MASK   ((uint32_t)0x00100000u)
#define NVIC_ISER2_R_NVIC_RES100_BIT    (20)
#define NVIC_ISER2_R_NVIC_RES100_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES100_EN     ((uint32_t)0x00100000u)

#define NVIC_ISER2_NVIC_RES100_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES100_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES100_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES101_MASK   ((uint32_t)0x00200000u)
#define NVIC_ISER2_R_NVIC_RES101_BIT    (21)
#define NVIC_ISER2_R_NVIC_RES101_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES101_EN     ((uint32_t)0x00200000u)

#define NVIC_ISER2_NVIC_RES101_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES101_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES101_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES102_MASK   ((uint32_t)0x00400000u)
#define NVIC_ISER2_R_NVIC_RES102_BIT    (22)
#define NVIC_ISER2_R_NVIC_RES102_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES102_EN     ((uint32_t)0x00400000u)

#define NVIC_ISER2_NVIC_RES102_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES102_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES102_EN       ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISER2_R_NVIC_RES103_MASK   ((uint32_t)0x00800000u)
#define NVIC_ISER2_R_NVIC_RES103_BIT    (23)
#define NVIC_ISER2_R_NVIC_RES103_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES103_EN     ((uint32_t)0x00800000u)

#define NVIC_ISER2_NVIC_RES103_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES103_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES103_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES104_MASK   ((uint32_t)0x01000000u)
#define NVIC_ISER2_R_NVIC_RES104_BIT    (24)
#define NVIC_ISER2_R_NVIC_RES104_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES104_EN     ((uint32_t)0x01000000u)

#define NVIC_ISER2_NVIC_RES104_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES104_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES104_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES105_MASK   ((uint32_t)0x02000000u)
#define NVIC_ISER2_R_NVIC_RES105_BIT    (25)
#define NVIC_ISER2_R_NVIC_RES105_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES105_EN     ((uint32_t)0x02000000u)

#define NVIC_ISER2_NVIC_RES105_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES105_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES105_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES106_MASK   ((uint32_t)0x04000000u)
#define NVIC_ISER2_R_NVIC_RES106_BIT    (26)
#define NVIC_ISER2_R_NVIC_RES106_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES106_EN     ((uint32_t)0x04000000u)

#define NVIC_ISER2_NVIC_RES106_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES106_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES106_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_RES107_MASK   ((uint32_t)0x08000000u)
#define NVIC_ISER2_R_NVIC_RES107_BIT    (27)
#define NVIC_ISER2_R_NVIC_RES107_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_RES107_EN     ((uint32_t)0x08000000u)

#define NVIC_ISER2_NVIC_RES107_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_RES107_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_RES107_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_TIMER5A_MASK  ((uint32_t)0x10000000u)
#define NVIC_ISER2_R_NVIC_TIMER5A_BIT   (28)
#define NVIC_ISER2_R_NVIC_TIMER5A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_TIMER5A_EN    ((uint32_t)0x10000000u)

#define NVIC_ISER2_NVIC_TIMER5A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_TIMER5A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_TIMER5A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_TIMER5B_MASK  ((uint32_t)0x20000000u)
#define NVIC_ISER2_R_NVIC_TIMER5B_BIT   (29)
#define NVIC_ISER2_R_NVIC_TIMER5B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_TIMER5B_EN    ((uint32_t)0x20000000u)

#define NVIC_ISER2_NVIC_TIMER5B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_TIMER5B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_TIMER5B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_WTIMER0A_MASK ((uint32_t)0x40000000u)
#define NVIC_ISER2_R_NVIC_WTIMER0A_BIT  (30)
#define NVIC_ISER2_R_NVIC_WTIMER0A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_WTIMER0A_EN   ((uint32_t)0x40000000u)

#define NVIC_ISER2_NVIC_WTIMER0A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_WTIMER0A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_WTIMER0A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER2_R_NVIC_WTIMER0B_MASK ((uint32_t)0x80000000u)
#define NVIC_ISER2_R_NVIC_WTIMER0B_BIT  (31)
#define NVIC_ISER2_R_NVIC_WTIMER0B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER2_R_NVIC_WTIMER0B_EN   ((uint32_t)0x80000000u)

#define NVIC_ISER2_NVIC_WTIMER0B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER2_NVIC_WTIMER0B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER2_NVIC_WTIMER0B_EN     ((uint32_t)0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* ICER2 ***********************************************/
/********************************************************************************************/

#define NVIC_ICER2                (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_ICER2_OFFSET)))
#define NVIC_ICER2_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICER2_OFFSET)))

/*----------*/
#define NVIC_ICER2_R_NVIC_RES80_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER2_R_NVIC_RES80_BIT     (0)
#define NVIC_ICER2_R_NVIC_RES80_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES80_EN      ((uint32_t)0x00000001u)

#define NVIC_ICER2_NVIC_RES80_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES80_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES80_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES81_MASK    ((uint32_t)0x00000002u)
#define NVIC_ICER2_R_NVIC_RES81_BIT     (1)
#define NVIC_ICER2_R_NVIC_RES81_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES81_EN      ((uint32_t)0x00000002u)

#define NVIC_ICER2_NVIC_RES81_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES81_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES81_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES82_MASK    ((uint32_t)0x00000004u)
#define NVIC_ICER2_R_NVIC_RES82_BIT     (2)
#define NVIC_ICER2_R_NVIC_RES82_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES82_EN      ((uint32_t)0x00000004u)

#define NVIC_ICER2_NVIC_RES82_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES82_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES82_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICER2_R_NVIC_RES83_MASK    ((uint32_t)0x00000008u)
#define NVIC_ICER2_R_NVIC_RES83_BIT     (3)
#define NVIC_ICER2_R_NVIC_RES83_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES83_EN      ((uint32_t)0x00000008u)

#define NVIC_ICER2_NVIC_RES83_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES83_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES83_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_I2C2_MASK     ((uint32_t)0x00000010u)
#define NVIC_ICER2_R_NVIC_I2C2_BIT      (4)
#define NVIC_ICER2_R_NVIC_I2C2_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_I2C2_EN       ((uint32_t)0x00000010u)

#define NVIC_ICER2_NVIC_I2C2_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_I2C2_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_I2C2_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_I2C3_MASK     ((uint32_t)0x00000020u)
#define NVIC_ICER2_R_NVIC_I2C3_BIT      (5)
#define NVIC_ICER2_R_NVIC_I2C3_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_I2C3_EN       ((uint32_t)0x00000020u)

#define NVIC_ICER2_NVIC_I2C3_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_I2C3_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_I2C3_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_TIMER4A_MASK  ((uint32_t)0x00000040u)
#define NVIC_ICER2_R_NVIC_TIMER4A_BIT   (6)
#define NVIC_ICER2_R_NVIC_TIMER4A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_TIMER4A_EN    ((uint32_t)0x00000040u)

#define NVIC_ICER2_NVIC_TIMER4A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_TIMER4A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_TIMER4A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_TIMER4B_MASK  ((uint32_t)0x00000080u)
#define NVIC_ICER2_R_NVIC_TIMER4B_BIT   (7)
#define NVIC_ICER2_R_NVIC_TIMER4B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_TIMER4B_EN    ((uint32_t)0x00000080u)

#define NVIC_ICER2_NVIC_TIMER4B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_TIMER4B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_TIMER4B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES88_MASK    ((uint32_t)0x00000100u)
#define NVIC_ICER2_R_NVIC_RES88_BIT     (8)
#define NVIC_ICER2_R_NVIC_RES88_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES88_EN      ((uint32_t)0x00000100u)

#define NVIC_ICER2_NVIC_RES88_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES88_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES88_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICER2_R_NVIC_RES89_MASK    ((uint32_t)0x00000200u)
#define NVIC_ICER2_R_NVIC_RES89_BIT     (9)
#define NVIC_ICER2_R_NVIC_RES89_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES89_EN      ((uint32_t)0x00000200u)

#define NVIC_ICER2_NVIC_RES89_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES89_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES89_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICER2_R_NVIC_RES90_MASK    ((uint32_t)0x00000400u)
#define NVIC_ICER2_R_NVIC_RES90_BIT     (10)
#define NVIC_ICER2_R_NVIC_RES90_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES90_EN      ((uint32_t)0x00000400u)

#define NVIC_ICER2_NVIC_RES90_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES90_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES90_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES93_EPI_IN_MASK ((uint32_t)0x00000800u)
#define NVIC_ICER2_R_NVIC_RES93_EPI_IN_BIT  (11)
#define NVIC_ICER2_R_NVIC_RES93_EPI_IN_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES93_EPI_IN_EN   ((uint32_t)0x00000800u)

#define NVIC_ICER2_NVIC_RES93_EPI_IN_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES93_EPI_IN_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES93_EPI_IN_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES92_MASK    ((uint32_t)0x00001000u)
#define NVIC_ICER2_R_NVIC_RES92_BIT     (12)
#define NVIC_ICER2_R_NVIC_RES92_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES92_EN      ((uint32_t)0x00001000u)

#define NVIC_ICER2_NVIC_RES92_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES92_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES92_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICER2_R_NVIC_RES93_MASK    ((uint32_t)0x00002000u)
#define NVIC_ICER2_R_NVIC_RES93_BIT     (13)
#define NVIC_ICER2_R_NVIC_RES93_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES93_EN      ((uint32_t)0x00002000u)

#define NVIC_ICER2_NVIC_RES93_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES93_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES93_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES94_MASK    ((uint32_t)0x00004000u)
#define NVIC_ICER2_R_NVIC_RES94_BIT     (14)
#define NVIC_ICER2_R_NVIC_RES94_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES94_EN      ((uint32_t)0x00004000u)

#define NVIC_ICER2_NVIC_RES94_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES94_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES94_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES95_MASK    ((uint32_t)0x00008000u)
#define NVIC_ICER2_R_NVIC_RES95_BIT     (15)
#define NVIC_ICER2_R_NVIC_RES95_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES95_EN      ((uint32_t)0x00008000u)

#define NVIC_ICER2_NVIC_RES95_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES95_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES95_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES96_MASK    ((uint32_t)0x00010000u)
#define NVIC_ICER2_R_NVIC_RES96_BIT     (16)
#define NVIC_ICER2_R_NVIC_RES96_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES96_EN      ((uint32_t)0x00010000u)

#define NVIC_ICER2_NVIC_RES96_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES96_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES96_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES97_MASK    ((uint32_t)0x00020000u)
#define NVIC_ICER2_R_NVIC_RES97_BIT     (17)
#define NVIC_ICER2_R_NVIC_RES97_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES97_EN      ((uint32_t)0x00020000u)

#define NVIC_ICER2_NVIC_RES97_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES97_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES97_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES98_MASK    ((uint32_t)0x00040000u)
#define NVIC_ICER2_R_NVIC_RES98_BIT     (18)
#define NVIC_ICER2_R_NVIC_RES98_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES98_EN      ((uint32_t)0x00040000u)

#define NVIC_ICER2_NVIC_RES98_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES98_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES98_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES99_MASK    ((uint32_t)0x00080000u)
#define NVIC_ICER2_R_NVIC_RES99_BIT     (19)
#define NVIC_ICER2_R_NVIC_RES99_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES99_EN      ((uint32_t)0x00080000u)

#define NVIC_ICER2_NVIC_RES99_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES99_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES99_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES100_MASK   ((uint32_t)0x00100000u)
#define NVIC_ICER2_R_NVIC_RES100_BIT    (20)
#define NVIC_ICER2_R_NVIC_RES100_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES100_EN     ((uint32_t)0x00100000u)

#define NVIC_ICER2_NVIC_RES100_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES100_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES100_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES101_MASK   ((uint32_t)0x00200000u)
#define NVIC_ICER2_R_NVIC_RES101_BIT    (21)
#define NVIC_ICER2_R_NVIC_RES101_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES101_EN     ((uint32_t)0x00200000u)

#define NVIC_ICER2_NVIC_RES101_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES101_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES101_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES102_MASK   ((uint32_t)0x00400000u)
#define NVIC_ICER2_R_NVIC_RES102_BIT    (22)
#define NVIC_ICER2_R_NVIC_RES102_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES102_EN     ((uint32_t)0x00400000u)

#define NVIC_ICER2_NVIC_RES102_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES102_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES102_EN       ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICER2_R_NVIC_RES103_MASK   ((uint32_t)0x00800000u)
#define NVIC_ICER2_R_NVIC_RES103_BIT    (23)
#define NVIC_ICER2_R_NVIC_RES103_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES103_EN     ((uint32_t)0x00800000u)

#define NVIC_ICER2_NVIC_RES103_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES103_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES103_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES104_MASK   ((uint32_t)0x01000000u)
#define NVIC_ICER2_R_NVIC_RES104_BIT    (24)
#define NVIC_ICER2_R_NVIC_RES104_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES104_EN     ((uint32_t)0x01000000u)

#define NVIC_ICER2_NVIC_RES104_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES104_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES104_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES105_MASK   ((uint32_t)0x02000000u)
#define NVIC_ICER2_R_NVIC_RES105_BIT    (25)
#define NVIC_ICER2_R_NVIC_RES105_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES105_EN     ((uint32_t)0x02000000u)

#define NVIC_ICER2_NVIC_RES105_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES105_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES105_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES106_MASK   ((uint32_t)0x04000000u)
#define NVIC_ICER2_R_NVIC_RES106_BIT    (26)
#define NVIC_ICER2_R_NVIC_RES106_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES106_EN     ((uint32_t)0x04000000u)

#define NVIC_ICER2_NVIC_RES106_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES106_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES106_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_RES107_MASK   ((uint32_t)0x08000000u)
#define NVIC_ICER2_R_NVIC_RES107_BIT    (27)
#define NVIC_ICER2_R_NVIC_RES107_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_RES107_EN     ((uint32_t)0x08000000u)

#define NVIC_ICER2_NVIC_RES107_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_RES107_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_RES107_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_TIMER5A_MASK  ((uint32_t)0x10000000u)
#define NVIC_ICER2_R_NVIC_TIMER5A_BIT   (28)
#define NVIC_ICER2_R_NVIC_TIMER5A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_TIMER5A_EN    ((uint32_t)0x10000000u)

#define NVIC_ICER2_NVIC_TIMER5A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_TIMER5A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_TIMER5A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_TIMER5B_MASK  ((uint32_t)0x20000000u)
#define NVIC_ICER2_R_NVIC_TIMER5B_BIT   (29)
#define NVIC_ICER2_R_NVIC_TIMER5B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_TIMER5B_EN    ((uint32_t)0x20000000u)

#define NVIC_ICER2_NVIC_TIMER5B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_TIMER5B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_TIMER5B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_WTIMER0A_MASK ((uint32_t)0x40000000u)
#define NVIC_ICER2_R_NVIC_WTIMER0A_BIT  (30)
#define NVIC_ICER2_R_NVIC_WTIMER0A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_WTIMER0A_EN   ((uint32_t)0x40000000u)

#define NVIC_ICER2_NVIC_WTIMER0A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_WTIMER0A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_WTIMER0A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER2_R_NVIC_WTIMER0B_MASK ((uint32_t)0x80000000u)
#define NVIC_ICER2_R_NVIC_WTIMER0B_BIT  (31)
#define NVIC_ICER2_R_NVIC_WTIMER0B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER2_R_NVIC_WTIMER0B_EN   ((uint32_t)0x80000000u)

#define NVIC_ICER2_NVIC_WTIMER0B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER2_NVIC_WTIMER0B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER2_NVIC_WTIMER0B_EN     ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* ISPR2 ***********************************************/
/********************************************************************************************/

#define NVIC_ISPR2                (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_ISPR2_OFFSET)))
#define NVIC_ISPR2_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISPR2_OFFSET)))

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES80_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR2_R_NVIC_RES80_BIT     (0)
#define NVIC_ISPR2_R_NVIC_RES80_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES80_EN      ((uint32_t)0x00000001u)

#define NVIC_ISPR2_NVIC_RES80_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES80_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES80_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES81_MASK    ((uint32_t)0x00000002u)
#define NVIC_ISPR2_R_NVIC_RES81_BIT     (1)
#define NVIC_ISPR2_R_NVIC_RES81_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES81_EN      ((uint32_t)0x00000002u)

#define NVIC_ISPR2_NVIC_RES81_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES81_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES81_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES82_MASK    ((uint32_t)0x00000004u)
#define NVIC_ISPR2_R_NVIC_RES82_BIT     (2)
#define NVIC_ISPR2_R_NVIC_RES82_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES82_EN      ((uint32_t)0x00000004u)

#define NVIC_ISPR2_NVIC_RES82_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES82_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES82_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISPR2_R_NVIC_RES83_MASK    ((uint32_t)0x00000008u)
#define NVIC_ISPR2_R_NVIC_RES83_BIT     (3)
#define NVIC_ISPR2_R_NVIC_RES83_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES83_EN      ((uint32_t)0x00000008u)

#define NVIC_ISPR2_NVIC_RES83_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES83_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES83_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_I2C2_MASK     ((uint32_t)0x00000010u)
#define NVIC_ISPR2_R_NVIC_I2C2_BIT      (4)
#define NVIC_ISPR2_R_NVIC_I2C2_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_I2C2_EN       ((uint32_t)0x00000010u)

#define NVIC_ISPR2_NVIC_I2C2_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_I2C2_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_I2C2_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_I2C3_MASK     ((uint32_t)0x00000020u)
#define NVIC_ISPR2_R_NVIC_I2C3_BIT      (5)
#define NVIC_ISPR2_R_NVIC_I2C3_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_I2C3_EN       ((uint32_t)0x00000020u)

#define NVIC_ISPR2_NVIC_I2C3_MASK       ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_I2C3_DIS        ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_I2C3_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_TIMER4A_MASK  ((uint32_t)0x00000040u)
#define NVIC_ISPR2_R_NVIC_TIMER4A_BIT   (6)
#define NVIC_ISPR2_R_NVIC_TIMER4A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_TIMER4A_EN    ((uint32_t)0x00000040u)

#define NVIC_ISPR2_NVIC_TIMER4A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_TIMER4A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_TIMER4A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_TIMER4B_MASK  ((uint32_t)0x00000080u)
#define NVIC_ISPR2_R_NVIC_TIMER4B_BIT   (7)
#define NVIC_ISPR2_R_NVIC_TIMER4B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_TIMER4B_EN    ((uint32_t)0x00000080u)

#define NVIC_ISPR2_NVIC_TIMER4B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_TIMER4B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_TIMER4B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES88_MASK    ((uint32_t)0x00000100u)
#define NVIC_ISPR2_R_NVIC_RES88_BIT     (8)
#define NVIC_ISPR2_R_NVIC_RES88_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES88_EN      ((uint32_t)0x00000100u)

#define NVIC_ISPR2_NVIC_RES88_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES88_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES88_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISPR2_R_NVIC_RES89_MASK    ((uint32_t)0x00000200u)
#define NVIC_ISPR2_R_NVIC_RES89_BIT     (9)
#define NVIC_ISPR2_R_NVIC_RES89_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES89_EN      ((uint32_t)0x00000200u)

#define NVIC_ISPR2_NVIC_RES89_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES89_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES89_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISPR2_R_NVIC_RES90_MASK    ((uint32_t)0x00000400u)
#define NVIC_ISPR2_R_NVIC_RES90_BIT     (10)
#define NVIC_ISPR2_R_NVIC_RES90_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES90_EN      ((uint32_t)0x00000400u)

#define NVIC_ISPR2_NVIC_RES90_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES90_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES90_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES93_EPI_IN_MASK ((uint32_t)0x00000800u)
#define NVIC_ISPR2_R_NVIC_RES93_EPI_IN_BIT  (11)
#define NVIC_ISPR2_R_NVIC_RES93_EPI_IN_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES93_EPI_IN_EN   ((uint32_t)0x00000800u)

#define NVIC_ISPR2_NVIC_RES93_EPI_IN_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES93_EPI_IN_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES93_EPI_IN_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES92_MASK    ((uint32_t)0x00001000u)
#define NVIC_ISPR2_R_NVIC_RES92_BIT     (12)
#define NVIC_ISPR2_R_NVIC_RES92_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES92_EN      ((uint32_t)0x00001000u)

#define NVIC_ISPR2_NVIC_RES92_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES92_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES92_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISPR2_R_NVIC_RES93_MASK    ((uint32_t)0x00002000u)
#define NVIC_ISPR2_R_NVIC_RES93_BIT     (13)
#define NVIC_ISPR2_R_NVIC_RES93_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES93_EN      ((uint32_t)0x00002000u)

#define NVIC_ISPR2_NVIC_RES93_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES93_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES93_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES94_MASK    ((uint32_t)0x00004000u)
#define NVIC_ISPR2_R_NVIC_RES94_BIT     (14)
#define NVIC_ISPR2_R_NVIC_RES94_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES94_EN      ((uint32_t)0x00004000u)

#define NVIC_ISPR2_NVIC_RES94_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES94_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES94_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES95_MASK    ((uint32_t)0x00008000u)
#define NVIC_ISPR2_R_NVIC_RES95_BIT     (15)
#define NVIC_ISPR2_R_NVIC_RES95_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES95_EN      ((uint32_t)0x00008000u)

#define NVIC_ISPR2_NVIC_RES95_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES95_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES95_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES96_MASK    ((uint32_t)0x00010000u)
#define NVIC_ISPR2_R_NVIC_RES96_BIT     (16)
#define NVIC_ISPR2_R_NVIC_RES96_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES96_EN      ((uint32_t)0x00010000u)

#define NVIC_ISPR2_NVIC_RES96_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES96_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES96_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES97_MASK    ((uint32_t)0x00020000u)
#define NVIC_ISPR2_R_NVIC_RES97_BIT     (17)
#define NVIC_ISPR2_R_NVIC_RES97_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES97_EN      ((uint32_t)0x00020000u)

#define NVIC_ISPR2_NVIC_RES97_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES97_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES97_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES98_MASK    ((uint32_t)0x00040000u)
#define NVIC_ISPR2_R_NVIC_RES98_BIT     (18)
#define NVIC_ISPR2_R_NVIC_RES98_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES98_EN      ((uint32_t)0x00040000u)

#define NVIC_ISPR2_NVIC_RES98_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES98_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES98_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES99_MASK    ((uint32_t)0x00080000u)
#define NVIC_ISPR2_R_NVIC_RES99_BIT     (19)
#define NVIC_ISPR2_R_NVIC_RES99_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES99_EN      ((uint32_t)0x00080000u)

#define NVIC_ISPR2_NVIC_RES99_MASK      ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES99_DIS       ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES99_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES100_MASK   ((uint32_t)0x00100000u)
#define NVIC_ISPR2_R_NVIC_RES100_BIT    (20)
#define NVIC_ISPR2_R_NVIC_RES100_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES100_EN     ((uint32_t)0x00100000u)

#define NVIC_ISPR2_NVIC_RES100_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES100_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES100_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES101_MASK   ((uint32_t)0x00200000u)
#define NVIC_ISPR2_R_NVIC_RES101_BIT    (21)
#define NVIC_ISPR2_R_NVIC_RES101_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES101_EN     ((uint32_t)0x00200000u)

#define NVIC_ISPR2_NVIC_RES101_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES101_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES101_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES102_MASK   ((uint32_t)0x00400000u)
#define NVIC_ISPR2_R_NVIC_RES102_BIT    (22)
#define NVIC_ISPR2_R_NVIC_RES102_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES102_EN     ((uint32_t)0x00400000u)

#define NVIC_ISPR2_NVIC_RES102_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES102_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES102_EN       ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ISPR2_R_NVIC_RES103_MASK   ((uint32_t)0x00800000u)
#define NVIC_ISPR2_R_NVIC_RES103_BIT    (23)
#define NVIC_ISPR2_R_NVIC_RES103_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES103_EN     ((uint32_t)0x00800000u)

#define NVIC_ISPR2_NVIC_RES103_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES103_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES103_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES104_MASK   ((uint32_t)0x01000000u)
#define NVIC_ISPR2_R_NVIC_RES104_BIT    (24)
#define NVIC_ISPR2_R_NVIC_RES104_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES104_EN     ((uint32_t)0x01000000u)

#define NVIC_ISPR2_NVIC_RES104_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES104_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES104_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES105_MASK   ((uint32_t)0x02000000u)
#define NVIC_ISPR2_R_NVIC_RES105_BIT    (25)
#define NVIC_ISPR2_R_NVIC_RES105_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES105_EN     ((uint32_t)0x02000000u)

#define NVIC_ISPR2_NVIC_RES105_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES105_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES105_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES106_MASK   ((uint32_t)0x04000000u)
#define NVIC_ISPR2_R_NVIC_RES106_BIT    (26)
#define NVIC_ISPR2_R_NVIC_RES106_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES106_EN     ((uint32_t)0x04000000u)

#define NVIC_ISPR2_NVIC_RES106_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES106_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES106_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_RES107_MASK   ((uint32_t)0x08000000u)
#define NVIC_ISPR2_R_NVIC_RES107_BIT    (27)
#define NVIC_ISPR2_R_NVIC_RES107_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_RES107_EN     ((uint32_t)0x08000000u)

#define NVIC_ISPR2_NVIC_RES107_MASK     ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_RES107_DIS      ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_RES107_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_TIMER5A_MASK  ((uint32_t)0x10000000u)
#define NVIC_ISPR2_R_NVIC_TIMER5A_BIT   (28)
#define NVIC_ISPR2_R_NVIC_TIMER5A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_TIMER5A_EN    ((uint32_t)0x10000000u)

#define NVIC_ISPR2_NVIC_TIMER5A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_TIMER5A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_TIMER5A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_TIMER5B_MASK  ((uint32_t)0x20000000u)
#define NVIC_ISPR2_R_NVIC_TIMER5B_BIT   (29)
#define NVIC_ISPR2_R_NVIC_TIMER5B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_TIMER5B_EN    ((uint32_t)0x20000000u)

#define NVIC_ISPR2_NVIC_TIMER5B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_TIMER5B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_TIMER5B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_WTIMER0A_MASK ((uint32_t)0x40000000u)
#define NVIC_ISPR2_R_NVIC_WTIMER0A_BIT  (30)
#define NVIC_ISPR2_R_NVIC_WTIMER0A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_WTIMER0A_EN   ((uint32_t)0x40000000u)

#define NVIC_ISPR2_NVIC_WTIMER0A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_WTIMER0A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_WTIMER0A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR2_R_NVIC_WTIMER0B_MASK ((uint32_t)0x80000000u)
#define NVIC_ISPR2_R_NVIC_WTIMER0B_BIT  (31)
#define NVIC_ISPR2_R_NVIC_WTIMER0B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR2_R_NVIC_WTIMER0B_EN   ((uint32_t)0x80000000u)

#define NVIC_ISPR2_NVIC_WTIMER0B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR2_NVIC_WTIMER0B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR2_NVIC_WTIMER0B_EN     ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* ICPR2 ***********************************************/
/********************************************************************************************/

#define NVIC_ICPR2                (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_ICPR2_OFFSET)))
#define NVIC_ICPR2_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICPR2_OFFSET)))

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES80_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR2_R_NVIC_RES80_BIT     (0)
#define NVIC_ICPR2_R_NVIC_RES80_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES80_EN      ((uint32_t)0x00000001u)

#define NVIC_ICPR2_NVIC_RES80_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES80_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES80_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES81_MASK    ((uint32_t)0x00000002u)
#define NVIC_ICPR2_R_NVIC_RES81_BIT     (1)
#define NVIC_ICPR2_R_NVIC_RES81_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES81_EN      ((uint32_t)0x00000002u)

#define NVIC_ICPR2_NVIC_RES81_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES81_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES81_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES82_MASK    ((uint32_t)0x00000004u)
#define NVIC_ICPR2_R_NVIC_RES82_BIT     (2)
#define NVIC_ICPR2_R_NVIC_RES82_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES82_EN      ((uint32_t)0x00000004u)

#define NVIC_ICPR2_NVIC_RES82_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES82_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES82_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICPR2_R_NVIC_RES83_MASK    ((uint32_t)0x00000008u)
#define NVIC_ICPR2_R_NVIC_RES83_BIT     (3)
#define NVIC_ICPR2_R_NVIC_RES83_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES83_EN      ((uint32_t)0x00000008u)

#define NVIC_ICPR2_NVIC_RES83_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES83_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES83_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_I2C2_MASK     ((uint32_t)0x00000010u)
#define NVIC_ICPR2_R_NVIC_I2C2_BIT      (4)
#define NVIC_ICPR2_R_NVIC_I2C2_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_I2C2_EN       ((uint32_t)0x00000010u)

#define NVIC_ICPR2_NVIC_I2C2_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_I2C2_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_I2C2_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_I2C3_MASK     ((uint32_t)0x00000020u)
#define NVIC_ICPR2_R_NVIC_I2C3_BIT      (5)
#define NVIC_ICPR2_R_NVIC_I2C3_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_I2C3_EN       ((uint32_t)0x00000020u)

#define NVIC_ICPR2_NVIC_I2C3_MASK       ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_I2C3_DIS        ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_I2C3_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_TIMER4A_MASK  ((uint32_t)0x00000040u)
#define NVIC_ICPR2_R_NVIC_TIMER4A_BIT   (6)
#define NVIC_ICPR2_R_NVIC_TIMER4A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_TIMER4A_EN    ((uint32_t)0x00000040u)

#define NVIC_ICPR2_NVIC_TIMER4A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_TIMER4A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_TIMER4A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_TIMER4B_MASK  ((uint32_t)0x00000080u)
#define NVIC_ICPR2_R_NVIC_TIMER4B_BIT   (7)
#define NVIC_ICPR2_R_NVIC_TIMER4B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_TIMER4B_EN    ((uint32_t)0x00000080u)

#define NVIC_ICPR2_NVIC_TIMER4B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_TIMER4B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_TIMER4B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES88_MASK    ((uint32_t)0x00000100u)
#define NVIC_ICPR2_R_NVIC_RES88_BIT     (8)
#define NVIC_ICPR2_R_NVIC_RES88_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES88_EN      ((uint32_t)0x00000100u)

#define NVIC_ICPR2_NVIC_RES88_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES88_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES88_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICPR2_R_NVIC_RES89_MASK    ((uint32_t)0x00000200u)
#define NVIC_ICPR2_R_NVIC_RES89_BIT     (9)
#define NVIC_ICPR2_R_NVIC_RES89_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES89_EN      ((uint32_t)0x00000200u)

#define NVIC_ICPR2_NVIC_RES89_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES89_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES89_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICPR2_R_NVIC_RES90_MASK    ((uint32_t)0x00000400u)
#define NVIC_ICPR2_R_NVIC_RES90_BIT     (10)
#define NVIC_ICPR2_R_NVIC_RES90_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES90_EN      ((uint32_t)0x00000400u)

#define NVIC_ICPR2_NVIC_RES90_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES90_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES90_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES93_EPI_IN_MASK ((uint32_t)0x00000800u)
#define NVIC_ICPR2_R_NVIC_RES93_EPI_IN_BIT  (11)
#define NVIC_ICPR2_R_NVIC_RES93_EPI_IN_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES93_EPI_IN_EN   ((uint32_t)0x00000800u)

#define NVIC_ICPR2_NVIC_RES93_EPI_IN_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES93_EPI_IN_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES93_EPI_IN_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES92_MASK    ((uint32_t)0x00001000u)
#define NVIC_ICPR2_R_NVIC_RES92_BIT     (12)
#define NVIC_ICPR2_R_NVIC_RES92_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES92_EN      ((uint32_t)0x00001000u)

#define NVIC_ICPR2_NVIC_RES92_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES92_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES92_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICPR2_R_NVIC_RES93_MASK    ((uint32_t)0x00002000u)
#define NVIC_ICPR2_R_NVIC_RES93_BIT     (13)
#define NVIC_ICPR2_R_NVIC_RES93_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES93_EN      ((uint32_t)0x00002000u)

#define NVIC_ICPR2_NVIC_RES93_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES93_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES93_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES94_MASK    ((uint32_t)0x00004000u)
#define NVIC_ICPR2_R_NVIC_RES94_BIT     (14)
#define NVIC_ICPR2_R_NVIC_RES94_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES94_EN      ((uint32_t)0x00004000u)

#define NVIC_ICPR2_NVIC_RES94_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES94_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES94_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES95_MASK    ((uint32_t)0x00008000u)
#define NVIC_ICPR2_R_NVIC_RES95_BIT     (15)
#define NVIC_ICPR2_R_NVIC_RES95_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES95_EN      ((uint32_t)0x00008000u)

#define NVIC_ICPR2_NVIC_RES95_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES95_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES95_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES96_MASK    ((uint32_t)0x00010000u)
#define NVIC_ICPR2_R_NVIC_RES96_BIT     (16)
#define NVIC_ICPR2_R_NVIC_RES96_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES96_EN      ((uint32_t)0x00010000u)

#define NVIC_ICPR2_NVIC_RES96_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES96_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES96_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES97_MASK    ((uint32_t)0x00020000u)
#define NVIC_ICPR2_R_NVIC_RES97_BIT     (17)
#define NVIC_ICPR2_R_NVIC_RES97_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES97_EN      ((uint32_t)0x00020000u)

#define NVIC_ICPR2_NVIC_RES97_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES97_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES97_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES98_MASK    ((uint32_t)0x00040000u)
#define NVIC_ICPR2_R_NVIC_RES98_BIT     (18)
#define NVIC_ICPR2_R_NVIC_RES98_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES98_EN      ((uint32_t)0x00040000u)

#define NVIC_ICPR2_NVIC_RES98_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES98_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES98_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES99_MASK    ((uint32_t)0x00080000u)
#define NVIC_ICPR2_R_NVIC_RES99_BIT     (19)
#define NVIC_ICPR2_R_NVIC_RES99_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES99_EN      ((uint32_t)0x00080000u)

#define NVIC_ICPR2_NVIC_RES99_MASK      ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES99_DIS       ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES99_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES100_MASK   ((uint32_t)0x00100000u)
#define NVIC_ICPR2_R_NVIC_RES100_BIT    (20)
#define NVIC_ICPR2_R_NVIC_RES100_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES100_EN     ((uint32_t)0x00100000u)

#define NVIC_ICPR2_NVIC_RES100_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES100_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES100_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES101_MASK   ((uint32_t)0x00200000u)
#define NVIC_ICPR2_R_NVIC_RES101_BIT    (21)
#define NVIC_ICPR2_R_NVIC_RES101_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES101_EN     ((uint32_t)0x00200000u)

#define NVIC_ICPR2_NVIC_RES101_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES101_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES101_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES102_MASK   ((uint32_t)0x00400000u)
#define NVIC_ICPR2_R_NVIC_RES102_BIT    (22)
#define NVIC_ICPR2_R_NVIC_RES102_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES102_EN     ((uint32_t)0x00400000u)

#define NVIC_ICPR2_NVIC_RES102_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES102_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES102_EN       ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_ICPR2_R_NVIC_RES103_MASK   ((uint32_t)0x00800000u)
#define NVIC_ICPR2_R_NVIC_RES103_BIT    (23)
#define NVIC_ICPR2_R_NVIC_RES103_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES103_EN     ((uint32_t)0x00800000u)

#define NVIC_ICPR2_NVIC_RES103_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES103_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES103_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES104_MASK   ((uint32_t)0x01000000u)
#define NVIC_ICPR2_R_NVIC_RES104_BIT    (24)
#define NVIC_ICPR2_R_NVIC_RES104_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES104_EN     ((uint32_t)0x01000000u)

#define NVIC_ICPR2_NVIC_RES104_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES104_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES104_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES105_MASK   ((uint32_t)0x02000000u)
#define NVIC_ICPR2_R_NVIC_RES105_BIT    (25)
#define NVIC_ICPR2_R_NVIC_RES105_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES105_EN     ((uint32_t)0x02000000u)

#define NVIC_ICPR2_NVIC_RES105_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES105_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES105_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES106_MASK   ((uint32_t)0x04000000u)
#define NVIC_ICPR2_R_NVIC_RES106_BIT    (26)
#define NVIC_ICPR2_R_NVIC_RES106_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES106_EN     ((uint32_t)0x04000000u)

#define NVIC_ICPR2_NVIC_RES106_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES106_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES106_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_RES107_MASK   ((uint32_t)0x08000000u)
#define NVIC_ICPR2_R_NVIC_RES107_BIT    (27)
#define NVIC_ICPR2_R_NVIC_RES107_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_RES107_EN     ((uint32_t)0x08000000u)

#define NVIC_ICPR2_NVIC_RES107_MASK     ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_RES107_DIS      ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_RES107_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_TIMER5A_MASK  ((uint32_t)0x10000000u)
#define NVIC_ICPR2_R_NVIC_TIMER5A_BIT   (28)
#define NVIC_ICPR2_R_NVIC_TIMER5A_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_TIMER5A_EN    ((uint32_t)0x10000000u)

#define NVIC_ICPR2_NVIC_TIMER5A_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_TIMER5A_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_TIMER5A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_TIMER5B_MASK  ((uint32_t)0x20000000u)
#define NVIC_ICPR2_R_NVIC_TIMER5B_BIT   (29)
#define NVIC_ICPR2_R_NVIC_TIMER5B_DIS   ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_TIMER5B_EN    ((uint32_t)0x20000000u)

#define NVIC_ICPR2_NVIC_TIMER5B_MASK    ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_TIMER5B_DIS     ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_TIMER5B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_WTIMER0A_MASK ((uint32_t)0x40000000u)
#define NVIC_ICPR2_R_NVIC_WTIMER0A_BIT  (30)
#define NVIC_ICPR2_R_NVIC_WTIMER0A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_WTIMER0A_EN   ((uint32_t)0x40000000u)

#define NVIC_ICPR2_NVIC_WTIMER0A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_WTIMER0A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_WTIMER0A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR2_R_NVIC_WTIMER0B_MASK ((uint32_t)0x80000000u)
#define NVIC_ICPR2_R_NVIC_WTIMER0B_BIT  (31)
#define NVIC_ICPR2_R_NVIC_WTIMER0B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR2_R_NVIC_WTIMER0B_EN   ((uint32_t)0x80000000u)

#define NVIC_ICPR2_NVIC_WTIMER0B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR2_NVIC_WTIMER0B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR2_NVIC_WTIMER0B_EN     ((uint32_t)0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* IABR2 ***********************************************/
/********************************************************************************************/

#define NVIC_IABR2                (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_IABR2_OFFSET)))
#define NVIC_IABR2_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_IABR2_OFFSET)))

/*----------*/
#define NVIC_IABR2_R_NVIC_RES80_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR2_R_NVIC_RES80_BIT     (0)
#define NVIC_IABR2_R_NVIC_RES80_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES80_EN      ((uint32_t)0x00000001u)

#define NVIC_IABR2_NVIC_RES80_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES80_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES80_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES81_MASK    ((uint32_t)0x00000002u)
#define NVIC_IABR2_R_NVIC_RES81_BIT     (1)
#define NVIC_IABR2_R_NVIC_RES81_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES81_EN      ((uint32_t)0x00000002u)

#define NVIC_IABR2_NVIC_RES81_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES81_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES81_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES82_MASK    ((uint32_t)0x00000004u)
#define NVIC_IABR2_R_NVIC_RES82_BIT     (2)
#define NVIC_IABR2_R_NVIC_RES82_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES82_EN      ((uint32_t)0x00000004u)

#define NVIC_IABR2_NVIC_RES82_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES82_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES82_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_IABR2_R_NVIC_RES83_MASK    ((uint32_t)0x00000008u)
#define NVIC_IABR2_R_NVIC_RES83_BIT     (3)
#define NVIC_IABR2_R_NVIC_RES83_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES83_EN      ((uint32_t)0x00000008u)

#define NVIC_IABR2_NVIC_RES83_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES83_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES83_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_I2C2_MASK     ((uint32_t)0x00000010u)
#define NVIC_IABR2_R_NVIC_I2C2_BIT      (4)
#define NVIC_IABR2_R_NVIC_I2C2_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_I2C2_EN       ((uint32_t)0x00000010u)

#define NVIC_IABR2_NVIC_I2C2_MASK       ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_I2C2_DIS        ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_I2C2_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_I2C3_MASK     ((uint32_t)0x00000020u)
#define NVIC_IABR2_R_NVIC_I2C3_BIT      (5)
#define NVIC_IABR2_R_NVIC_I2C3_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_I2C3_EN       ((uint32_t)0x00000020u)

#define NVIC_IABR2_NVIC_I2C3_MASK       ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_I2C3_DIS        ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_I2C3_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_TIMER4A_MASK  ((uint32_t)0x00000040u)
#define NVIC_IABR2_R_NVIC_TIMER4A_BIT   (6)
#define NVIC_IABR2_R_NVIC_TIMER4A_DIS   ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_TIMER4A_EN    ((uint32_t)0x00000040u)

#define NVIC_IABR2_NVIC_TIMER4A_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_TIMER4A_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_TIMER4A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_TIMER4B_MASK  ((uint32_t)0x00000080u)
#define NVIC_IABR2_R_NVIC_TIMER4B_BIT   (7)
#define NVIC_IABR2_R_NVIC_TIMER4B_DIS   ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_TIMER4B_EN    ((uint32_t)0x00000080u)

#define NVIC_IABR2_NVIC_TIMER4B_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_TIMER4B_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_TIMER4B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES88_MASK    ((uint32_t)0x00000100u)
#define NVIC_IABR2_R_NVIC_RES88_BIT     (8)
#define NVIC_IABR2_R_NVIC_RES88_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES88_EN      ((uint32_t)0x00000100u)

#define NVIC_IABR2_NVIC_RES88_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES88_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES88_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_IABR2_R_NVIC_RES89_MASK    ((uint32_t)0x00000200u)
#define NVIC_IABR2_R_NVIC_RES89_BIT     (9)
#define NVIC_IABR2_R_NVIC_RES89_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES89_EN      ((uint32_t)0x00000200u)

#define NVIC_IABR2_NVIC_RES89_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES89_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES89_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_IABR2_R_NVIC_RES90_MASK    ((uint32_t)0x00000400u)
#define NVIC_IABR2_R_NVIC_RES90_BIT     (10)
#define NVIC_IABR2_R_NVIC_RES90_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES90_EN      ((uint32_t)0x00000400u)

#define NVIC_IABR2_NVIC_RES90_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES90_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES90_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES93_EPI_IN_MASK ((uint32_t)0x00000800u)
#define NVIC_IABR2_R_NVIC_RES93_EPI_IN_BIT  (11)
#define NVIC_IABR2_R_NVIC_RES93_EPI_IN_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES93_EPI_IN_EN   ((uint32_t)0x00000800u)

#define NVIC_IABR2_NVIC_RES93_EPI_IN_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES93_EPI_IN_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES93_EPI_IN_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES92_MASK    ((uint32_t)0x00001000u)
#define NVIC_IABR2_R_NVIC_RES92_BIT     (12)
#define NVIC_IABR2_R_NVIC_RES92_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES92_EN      ((uint32_t)0x00001000u)

#define NVIC_IABR2_NVIC_RES92_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES92_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES92_EN        ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_IABR2_R_NVIC_RES93_MASK    ((uint32_t)0x00002000u)
#define NVIC_IABR2_R_NVIC_RES93_BIT     (13)
#define NVIC_IABR2_R_NVIC_RES93_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES93_EN      ((uint32_t)0x00002000u)

#define NVIC_IABR2_NVIC_RES93_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES93_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES93_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES94_MASK    ((uint32_t)0x00004000u)
#define NVIC_IABR2_R_NVIC_RES94_BIT     (14)
#define NVIC_IABR2_R_NVIC_RES94_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES94_EN      ((uint32_t)0x00004000u)

#define NVIC_IABR2_NVIC_RES94_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES94_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES94_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES95_MASK    ((uint32_t)0x00008000u)
#define NVIC_IABR2_R_NVIC_RES95_BIT     (15)
#define NVIC_IABR2_R_NVIC_RES95_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES95_EN      ((uint32_t)0x00008000u)

#define NVIC_IABR2_NVIC_RES95_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES95_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES95_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES96_MASK    ((uint32_t)0x00010000u)
#define NVIC_IABR2_R_NVIC_RES96_BIT     (16)
#define NVIC_IABR2_R_NVIC_RES96_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES96_EN      ((uint32_t)0x00010000u)

#define NVIC_IABR2_NVIC_RES96_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES96_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES96_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES97_MASK    ((uint32_t)0x00020000u)
#define NVIC_IABR2_R_NVIC_RES97_BIT     (17)
#define NVIC_IABR2_R_NVIC_RES97_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES97_EN      ((uint32_t)0x00020000u)

#define NVIC_IABR2_NVIC_RES97_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES97_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES97_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES98_MASK    ((uint32_t)0x00040000u)
#define NVIC_IABR2_R_NVIC_RES98_BIT     (18)
#define NVIC_IABR2_R_NVIC_RES98_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES98_EN      ((uint32_t)0x00040000u)

#define NVIC_IABR2_NVIC_RES98_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES98_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES98_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES99_MASK    ((uint32_t)0x00080000u)
#define NVIC_IABR2_R_NVIC_RES99_BIT     (19)
#define NVIC_IABR2_R_NVIC_RES99_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES99_EN      ((uint32_t)0x00080000u)

#define NVIC_IABR2_NVIC_RES99_MASK      ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES99_DIS       ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES99_EN        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES100_MASK   ((uint32_t)0x00100000u)
#define NVIC_IABR2_R_NVIC_RES100_BIT    (20)
#define NVIC_IABR2_R_NVIC_RES100_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES100_EN     ((uint32_t)0x00100000u)

#define NVIC_IABR2_NVIC_RES100_MASK     ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES100_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES100_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES101_MASK   ((uint32_t)0x00200000u)
#define NVIC_IABR2_R_NVIC_RES101_BIT    (21)
#define NVIC_IABR2_R_NVIC_RES101_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES101_EN     ((uint32_t)0x00200000u)

#define NVIC_IABR2_NVIC_RES101_MASK     ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES101_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES101_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES102_MASK   ((uint32_t)0x00400000u)
#define NVIC_IABR2_R_NVIC_RES102_BIT    (22)
#define NVIC_IABR2_R_NVIC_RES102_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES102_EN     ((uint32_t)0x00400000u)

#define NVIC_IABR2_NVIC_RES102_MASK     ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES102_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES102_EN       ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define NVIC_IABR2_R_NVIC_RES103_MASK   ((uint32_t)0x00800000u)
#define NVIC_IABR2_R_NVIC_RES103_BIT    (23)
#define NVIC_IABR2_R_NVIC_RES103_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES103_EN     ((uint32_t)0x00800000u)

#define NVIC_IABR2_NVIC_RES103_MASK     ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES103_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES103_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES104_MASK   ((uint32_t)0x01000000u)
#define NVIC_IABR2_R_NVIC_RES104_BIT    (24)
#define NVIC_IABR2_R_NVIC_RES104_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES104_EN     ((uint32_t)0x01000000u)

#define NVIC_IABR2_NVIC_RES104_MASK     ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES104_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES104_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES105_MASK   ((uint32_t)0x02000000u)
#define NVIC_IABR2_R_NVIC_RES105_BIT    (25)
#define NVIC_IABR2_R_NVIC_RES105_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES105_EN     ((uint32_t)0x02000000u)

#define NVIC_IABR2_NVIC_RES105_MASK     ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES105_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES105_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES106_MASK   ((uint32_t)0x04000000u)
#define NVIC_IABR2_R_NVIC_RES106_BIT    (26)
#define NVIC_IABR2_R_NVIC_RES106_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES106_EN     ((uint32_t)0x04000000u)

#define NVIC_IABR2_NVIC_RES106_MASK     ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES106_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES106_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_RES107_MASK   ((uint32_t)0x08000000u)
#define NVIC_IABR2_R_NVIC_RES107_BIT    (27)
#define NVIC_IABR2_R_NVIC_RES107_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_RES107_EN     ((uint32_t)0x08000000u)

#define NVIC_IABR2_NVIC_RES107_MASK     ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_RES107_DIS      ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_RES107_EN       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_TIMER5A_MASK  ((uint32_t)0x10000000u)
#define NVIC_IABR2_R_NVIC_TIMER5A_BIT   (28)
#define NVIC_IABR2_R_NVIC_TIMER5A_DIS   ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_TIMER5A_EN    ((uint32_t)0x10000000u)

#define NVIC_IABR2_NVIC_TIMER5A_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_TIMER5A_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_TIMER5A_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_TIMER5B_MASK  ((uint32_t)0x20000000u)
#define NVIC_IABR2_R_NVIC_TIMER5B_BIT   (29)
#define NVIC_IABR2_R_NVIC_TIMER5B_DIS   ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_TIMER5B_EN    ((uint32_t)0x20000000u)

#define NVIC_IABR2_NVIC_TIMER5B_MASK    ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_TIMER5B_DIS     ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_TIMER5B_EN      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_WTIMER0A_MASK ((uint32_t)0x40000000u)
#define NVIC_IABR2_R_NVIC_WTIMER0A_BIT  (30)
#define NVIC_IABR2_R_NVIC_WTIMER0A_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_WTIMER0A_EN   ((uint32_t)0x40000000u)

#define NVIC_IABR2_NVIC_WTIMER0A_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_WTIMER0A_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_WTIMER0A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR2_R_NVIC_WTIMER0B_MASK ((uint32_t)0x80000000u)
#define NVIC_IABR2_R_NVIC_WTIMER0B_BIT  (31)
#define NVIC_IABR2_R_NVIC_WTIMER0B_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR2_R_NVIC_WTIMER0B_EN   ((uint32_t)0x80000000u)

#define NVIC_IABR2_NVIC_WTIMER0B_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR2_NVIC_WTIMER0B_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR2_NVIC_WTIMER0B_EN     ((uint32_t)0x00000001u)
/*----------*/

/********************************************************************************************/
/************************************* ISER3 ***********************************************/
/********************************************************************************************/

#define NVIC_ISER3                (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_ISER3_OFFSET)))
#define NVIC_ISER3_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISER3_OFFSET)))

/*----------*/
#define NVIC_ISER3_R_NVIC_WTIMER1A_MASK ((uint32_t)0x00000001u)
#define NVIC_ISER3_R_NVIC_WTIMER1A_BIT  (0)
#define NVIC_ISER3_R_NVIC_WTIMER1A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_WTIMER1A_EN   ((uint32_t)0x00000001u)

#define NVIC_ISER3_NVIC_WTIMER1A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_WTIMER1A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_WTIMER1A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_WTIMER1B_MASK ((uint32_t)0x00000002u)
#define NVIC_ISER3_R_NVIC_WTIMER1B_BIT  (1)
#define NVIC_ISER3_R_NVIC_WTIMER1B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_WTIMER1B_EN   ((uint32_t)0x00000002u)

#define NVIC_ISER3_NVIC_WTIMER1B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_WTIMER1B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_WTIMER1B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_WTIMER2A_MASK ((uint32_t)0x00000004u)
#define NVIC_ISER3_R_NVIC_WTIMER2A_BIT  (2)
#define NVIC_ISER3_R_NVIC_WTIMER2A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_WTIMER2A_EN   ((uint32_t)0x00000004u)

#define NVIC_ISER3_NVIC_WTIMER2A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_WTIMER2A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_WTIMER2A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_WTIMER2B_MASK ((uint32_t)0x00000008u)
#define NVIC_ISER3_R_NVIC_WTIMER2B_BIT  (3)
#define NVIC_ISER3_R_NVIC_WTIMER2B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_WTIMER2B_EN   ((uint32_t)0x00000008u)

#define NVIC_ISER3_NVIC_WTIMER2B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_WTIMER2B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_WTIMER2B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_WTIMER3A_MASK ((uint32_t)0x00000010u)
#define NVIC_ISER3_R_NVIC_WTIMER3A_BIT  (4)
#define NVIC_ISER3_R_NVIC_WTIMER3A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_WTIMER3A_EN   ((uint32_t)0x00000010u)

#define NVIC_ISER3_NVIC_WTIMER3A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_WTIMER3A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_WTIMER3A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_WTIMER3B_MASK ((uint32_t)0x00000020u)
#define NVIC_ISER3_R_NVIC_WTIMER3B_BIT  (5)
#define NVIC_ISER3_R_NVIC_WTIMER3B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_WTIMER3B_EN   ((uint32_t)0x00000020u)

#define NVIC_ISER3_NVIC_WTIMER3B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_WTIMER3B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_WTIMER3B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_WTIMER4A_MASK ((uint32_t)0x00000040u)
#define NVIC_ISER3_R_NVIC_WTIMER4A_BIT  (6)
#define NVIC_ISER3_R_NVIC_WTIMER4A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_WTIMER4A_EN   ((uint32_t)0x00000040u)

#define NVIC_ISER3_NVIC_WTIMER4A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_WTIMER4A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_WTIMER4A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_WTIMER4B_MASK ((uint32_t)0x00000080u)
#define NVIC_ISER3_R_NVIC_WTIMER4B_BIT  (7)
#define NVIC_ISER3_R_NVIC_WTIMER4B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_WTIMER4B_EN   ((uint32_t)0x00000080u)

#define NVIC_ISER3_NVIC_WTIMER4B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_WTIMER4B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_WTIMER4B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_WTIMER5A_MASK ((uint32_t)0x00000100u)
#define NVIC_ISER3_R_NVIC_WTIMER5A_BIT  (8)
#define NVIC_ISER3_R_NVIC_WTIMER5A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_WTIMER5A_EN   ((uint32_t)0x00000100u)

#define NVIC_ISER3_NVIC_WTIMER5A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_WTIMER5A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_WTIMER5A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_WTIMER5B_MASK ((uint32_t)0x00000200u)
#define NVIC_ISER3_R_NVIC_WTIMER5B_BIT  (9)
#define NVIC_ISER3_R_NVIC_WTIMER5B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_WTIMER5B_EN   ((uint32_t)0x00000200u)

#define NVIC_ISER3_NVIC_WTIMER5B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_WTIMER5B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_WTIMER5B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_SYSEXC_MASK ((uint32_t)0x00000400u)
#define NVIC_ISER3_R_NVIC_SYSEXC_BIT  (10)
#define NVIC_ISER3_R_NVIC_SYSEXC_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_SYSEXC_EN   ((uint32_t)0x00000400u)

#define NVIC_ISER3_NVIC_SYSEXC_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_SYSEXC_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_SYSEXC_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES123_MASK ((uint32_t)0x00000800u)
#define NVIC_ISER3_R_NVIC_RES123_BIT  (11)
#define NVIC_ISER3_R_NVIC_RES123_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES123_EN   ((uint32_t)0x00000800u)

#define NVIC_ISER3_NVIC_RES123_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES123_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES123_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES124_MASK ((uint32_t)0x00001000u)
#define NVIC_ISER3_R_NVIC_RES124_BIT  (12)
#define NVIC_ISER3_R_NVIC_RES124_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES124_EN   ((uint32_t)0x00001000u)

#define NVIC_ISER3_NVIC_RES124_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES124_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES124_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES125_MASK ((uint32_t)0x00002000u)
#define NVIC_ISER3_R_NVIC_RES125_BIT  (13)
#define NVIC_ISER3_R_NVIC_RES125_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES125_EN   ((uint32_t)0x00002000u)

#define NVIC_ISER3_NVIC_RES125_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES125_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES125_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES126_MASK ((uint32_t)0x00004000u)
#define NVIC_ISER3_R_NVIC_RES126_BIT  (14)
#define NVIC_ISER3_R_NVIC_RES126_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES126_EN   ((uint32_t)0x00004000u)

#define NVIC_ISER3_NVIC_RES126_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES126_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES126_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES127_MASK ((uint32_t)0x00008000u)
#define NVIC_ISER3_R_NVIC_RES127_BIT  (15)
#define NVIC_ISER3_R_NVIC_RES127_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES127_EN   ((uint32_t)0x00008000u)

#define NVIC_ISER3_NVIC_RES127_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES127_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES127_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES128_MASK ((uint32_t)0x00010000u)
#define NVIC_ISER3_R_NVIC_RES128_BIT  (16)
#define NVIC_ISER3_R_NVIC_RES128_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES128_EN   ((uint32_t)0x00010000u)

#define NVIC_ISER3_NVIC_RES128_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES128_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES128_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES129_MASK ((uint32_t)0x00020000u)
#define NVIC_ISER3_R_NVIC_RES129_BIT  (17)
#define NVIC_ISER3_R_NVIC_RES129_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES129_EN   ((uint32_t)0x00020000u)

#define NVIC_ISER3_NVIC_RES129_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES129_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES129_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES130_MASK ((uint32_t)0x00040000u)
#define NVIC_ISER3_R_NVIC_RES130_BIT  (18)
#define NVIC_ISER3_R_NVIC_RES130_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES130_EN   ((uint32_t)0x00040000u)

#define NVIC_ISER3_NVIC_RES130_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES130_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES130_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES131_MASK ((uint32_t)0x00080000u)
#define NVIC_ISER3_R_NVIC_RES131_BIT  (19)
#define NVIC_ISER3_R_NVIC_RES131_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES131_EN   ((uint32_t)0x00080000u)

#define NVIC_ISER3_NVIC_RES131_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES131_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES131_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES132_MASK ((uint32_t)0x00100000u)
#define NVIC_ISER3_R_NVIC_RES132_BIT  (20)
#define NVIC_ISER3_R_NVIC_RES132_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES132_EN   ((uint32_t)0x00100000u)

#define NVIC_ISER3_NVIC_RES132_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES132_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES132_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES133_MASK ((uint32_t)0x00200000u)
#define NVIC_ISER3_R_NVIC_RES133_BIT  (21)
#define NVIC_ISER3_R_NVIC_RES133_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES133_EN   ((uint32_t)0x00200000u)

#define NVIC_ISER3_NVIC_RES133_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES133_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES133_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES134_MASK ((uint32_t)0x00400000u)
#define NVIC_ISER3_R_NVIC_RES134_BIT  (22)
#define NVIC_ISER3_R_NVIC_RES134_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES134_EN   ((uint32_t)0x00400000u)

#define NVIC_ISER3_NVIC_RES134_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES134_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES134_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES135_MASK ((uint32_t)0x00800000u)
#define NVIC_ISER3_R_NVIC_RES135_BIT  (23)
#define NVIC_ISER3_R_NVIC_RES135_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES135_EN   ((uint32_t)0x00800000u)

#define NVIC_ISER3_NVIC_RES135_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES135_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES135_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES136_MASK ((uint32_t)0x01000000u)
#define NVIC_ISER3_R_NVIC_RES136_BIT  (24)
#define NVIC_ISER3_R_NVIC_RES136_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES136_EN   ((uint32_t)0x01000000u)

#define NVIC_ISER3_NVIC_RES136_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES136_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES136_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES137_MASK ((uint32_t)0x02000000u)
#define NVIC_ISER3_R_NVIC_RES137_BIT  (25)
#define NVIC_ISER3_R_NVIC_RES137_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES137_EN   ((uint32_t)0x02000000u)

#define NVIC_ISER3_NVIC_RES137_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES137_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES137_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES138_MASK ((uint32_t)0x04000000u)
#define NVIC_ISER3_R_NVIC_RES138_BIT  (26)
#define NVIC_ISER3_R_NVIC_RES138_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES138_EN   ((uint32_t)0x04000000u)

#define NVIC_ISER3_NVIC_RES138_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES138_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES138_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES139_MASK ((uint32_t)0x08000000u)
#define NVIC_ISER3_R_NVIC_RES139_BIT  (27)
#define NVIC_ISER3_R_NVIC_RES139_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES139_EN   ((uint32_t)0x08000000u)

#define NVIC_ISER3_NVIC_RES139_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES139_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES139_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES140_MASK ((uint32_t)0x10000000u)
#define NVIC_ISER3_R_NVIC_RES140_BIT  (28)
#define NVIC_ISER3_R_NVIC_RES140_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES140_EN   ((uint32_t)0x10000000u)

#define NVIC_ISER3_NVIC_RES140_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES140_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES140_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES141_MASK ((uint32_t)0x20000000u)
#define NVIC_ISER3_R_NVIC_RES141_BIT  (29)
#define NVIC_ISER3_R_NVIC_RES141_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES141_EN   ((uint32_t)0x20000000u)

#define NVIC_ISER3_NVIC_RES141_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES141_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES141_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES142_MASK ((uint32_t)0x40000000u)
#define NVIC_ISER3_R_NVIC_RES142_BIT  (30)
#define NVIC_ISER3_R_NVIC_RES142_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES142_EN   ((uint32_t)0x40000000u)

#define NVIC_ISER3_NVIC_RES142_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES142_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES142_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER3_R_NVIC_RES143_MASK ((uint32_t)0x80000000u)
#define NVIC_ISER3_R_NVIC_RES143_BIT  (31)
#define NVIC_ISER3_R_NVIC_RES143_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER3_R_NVIC_RES143_EN   ((uint32_t)0x80000000u)

#define NVIC_ISER3_NVIC_RES143_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER3_NVIC_RES143_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER3_NVIC_RES143_EN     ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* ICER3 ***********************************************/
/********************************************************************************************/

#define NVIC_ICER3                (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_ICER3_OFFSET)))
#define NVIC_ICER3_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICER3_OFFSET)))

/*----------*/
#define NVIC_ICER3_R_NVIC_WTIMER1A_MASK ((uint32_t)0x00000001u)
#define NVIC_ICER3_R_NVIC_WTIMER1A_BIT  (0)
#define NVIC_ICER3_R_NVIC_WTIMER1A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_WTIMER1A_EN   ((uint32_t)0x00000001u)

#define NVIC_ICER3_NVIC_WTIMER1A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_WTIMER1A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_WTIMER1A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_WTIMER1B_MASK ((uint32_t)0x00000002u)
#define NVIC_ICER3_R_NVIC_WTIMER1B_BIT  (1)
#define NVIC_ICER3_R_NVIC_WTIMER1B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_WTIMER1B_EN   ((uint32_t)0x00000002u)

#define NVIC_ICER3_NVIC_WTIMER1B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_WTIMER1B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_WTIMER1B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_WTIMER2A_MASK ((uint32_t)0x00000004u)
#define NVIC_ICER3_R_NVIC_WTIMER2A_BIT  (2)
#define NVIC_ICER3_R_NVIC_WTIMER2A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_WTIMER2A_EN   ((uint32_t)0x00000004u)

#define NVIC_ICER3_NVIC_WTIMER2A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_WTIMER2A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_WTIMER2A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_WTIMER2B_MASK ((uint32_t)0x00000008u)
#define NVIC_ICER3_R_NVIC_WTIMER2B_BIT  (3)
#define NVIC_ICER3_R_NVIC_WTIMER2B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_WTIMER2B_EN   ((uint32_t)0x00000008u)

#define NVIC_ICER3_NVIC_WTIMER2B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_WTIMER2B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_WTIMER2B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_WTIMER3A_MASK ((uint32_t)0x00000010u)
#define NVIC_ICER3_R_NVIC_WTIMER3A_BIT  (4)
#define NVIC_ICER3_R_NVIC_WTIMER3A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_WTIMER3A_EN   ((uint32_t)0x00000010u)

#define NVIC_ICER3_NVIC_WTIMER3A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_WTIMER3A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_WTIMER3A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_WTIMER3B_MASK ((uint32_t)0x00000020u)
#define NVIC_ICER3_R_NVIC_WTIMER3B_BIT  (5)
#define NVIC_ICER3_R_NVIC_WTIMER3B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_WTIMER3B_EN   ((uint32_t)0x00000020u)

#define NVIC_ICER3_NVIC_WTIMER3B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_WTIMER3B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_WTIMER3B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_WTIMER4A_MASK ((uint32_t)0x00000040u)
#define NVIC_ICER3_R_NVIC_WTIMER4A_BIT  (6)
#define NVIC_ICER3_R_NVIC_WTIMER4A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_WTIMER4A_EN   ((uint32_t)0x00000040u)

#define NVIC_ICER3_NVIC_WTIMER4A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_WTIMER4A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_WTIMER4A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_WTIMER4B_MASK ((uint32_t)0x00000080u)
#define NVIC_ICER3_R_NVIC_WTIMER4B_BIT  (7)
#define NVIC_ICER3_R_NVIC_WTIMER4B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_WTIMER4B_EN   ((uint32_t)0x00000080u)

#define NVIC_ICER3_NVIC_WTIMER4B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_WTIMER4B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_WTIMER4B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_WTIMER5A_MASK ((uint32_t)0x00000100u)
#define NVIC_ICER3_R_NVIC_WTIMER5A_BIT  (8)
#define NVIC_ICER3_R_NVIC_WTIMER5A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_WTIMER5A_EN   ((uint32_t)0x00000100u)

#define NVIC_ICER3_NVIC_WTIMER5A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_WTIMER5A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_WTIMER5A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_WTIMER5B_MASK ((uint32_t)0x00000200u)
#define NVIC_ICER3_R_NVIC_WTIMER5B_BIT  (9)
#define NVIC_ICER3_R_NVIC_WTIMER5B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_WTIMER5B_EN   ((uint32_t)0x00000200u)

#define NVIC_ICER3_NVIC_WTIMER5B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_WTIMER5B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_WTIMER5B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_SYSEXC_MASK ((uint32_t)0x00000400u)
#define NVIC_ICER3_R_NVIC_SYSEXC_BIT  (10)
#define NVIC_ICER3_R_NVIC_SYSEXC_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_SYSEXC_EN   ((uint32_t)0x00000400u)

#define NVIC_ICER3_NVIC_SYSEXC_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_SYSEXC_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_SYSEXC_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES123_MASK ((uint32_t)0x00000800u)
#define NVIC_ICER3_R_NVIC_RES123_BIT  (11)
#define NVIC_ICER3_R_NVIC_RES123_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES123_EN   ((uint32_t)0x00000800u)

#define NVIC_ICER3_NVIC_RES123_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES123_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES123_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES124_MASK ((uint32_t)0x00001000u)
#define NVIC_ICER3_R_NVIC_RES124_BIT  (12)
#define NVIC_ICER3_R_NVIC_RES124_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES124_EN   ((uint32_t)0x00001000u)

#define NVIC_ICER3_NVIC_RES124_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES124_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES124_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES125_MASK ((uint32_t)0x00002000u)
#define NVIC_ICER3_R_NVIC_RES125_BIT  (13)
#define NVIC_ICER3_R_NVIC_RES125_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES125_EN   ((uint32_t)0x00002000u)

#define NVIC_ICER3_NVIC_RES125_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES125_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES125_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES126_MASK ((uint32_t)0x00004000u)
#define NVIC_ICER3_R_NVIC_RES126_BIT  (14)
#define NVIC_ICER3_R_NVIC_RES126_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES126_EN   ((uint32_t)0x00004000u)

#define NVIC_ICER3_NVIC_RES126_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES126_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES126_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES127_MASK ((uint32_t)0x00008000u)
#define NVIC_ICER3_R_NVIC_RES127_BIT  (15)
#define NVIC_ICER3_R_NVIC_RES127_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES127_EN   ((uint32_t)0x00008000u)

#define NVIC_ICER3_NVIC_RES127_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES127_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES127_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES128_MASK ((uint32_t)0x00010000u)
#define NVIC_ICER3_R_NVIC_RES128_BIT  (16)
#define NVIC_ICER3_R_NVIC_RES128_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES128_EN   ((uint32_t)0x00010000u)

#define NVIC_ICER3_NVIC_RES128_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES128_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES128_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES129_MASK ((uint32_t)0x00020000u)
#define NVIC_ICER3_R_NVIC_RES129_BIT  (17)
#define NVIC_ICER3_R_NVIC_RES129_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES129_EN   ((uint32_t)0x00020000u)

#define NVIC_ICER3_NVIC_RES129_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES129_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES129_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES130_MASK ((uint32_t)0x00040000u)
#define NVIC_ICER3_R_NVIC_RES130_BIT  (18)
#define NVIC_ICER3_R_NVIC_RES130_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES130_EN   ((uint32_t)0x00040000u)

#define NVIC_ICER3_NVIC_RES130_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES130_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES130_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES131_MASK ((uint32_t)0x00080000u)
#define NVIC_ICER3_R_NVIC_RES131_BIT  (19)
#define NVIC_ICER3_R_NVIC_RES131_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES131_EN   ((uint32_t)0x00080000u)

#define NVIC_ICER3_NVIC_RES131_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES131_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES131_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES132_MASK ((uint32_t)0x00100000u)
#define NVIC_ICER3_R_NVIC_RES132_BIT  (20)
#define NVIC_ICER3_R_NVIC_RES132_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES132_EN   ((uint32_t)0x00100000u)

#define NVIC_ICER3_NVIC_RES132_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES132_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES132_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES133_MASK ((uint32_t)0x00200000u)
#define NVIC_ICER3_R_NVIC_RES133_BIT  (21)
#define NVIC_ICER3_R_NVIC_RES133_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES133_EN   ((uint32_t)0x00200000u)

#define NVIC_ICER3_NVIC_RES133_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES133_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES133_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES134_MASK ((uint32_t)0x00400000u)
#define NVIC_ICER3_R_NVIC_RES134_BIT  (22)
#define NVIC_ICER3_R_NVIC_RES134_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES134_EN   ((uint32_t)0x00400000u)

#define NVIC_ICER3_NVIC_RES134_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES134_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES134_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES135_MASK ((uint32_t)0x00800000u)
#define NVIC_ICER3_R_NVIC_RES135_BIT  (23)
#define NVIC_ICER3_R_NVIC_RES135_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES135_EN   ((uint32_t)0x00800000u)

#define NVIC_ICER3_NVIC_RES135_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES135_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES135_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES136_MASK ((uint32_t)0x01000000u)
#define NVIC_ICER3_R_NVIC_RES136_BIT  (24)
#define NVIC_ICER3_R_NVIC_RES136_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES136_EN   ((uint32_t)0x01000000u)

#define NVIC_ICER3_NVIC_RES136_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES136_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES136_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES137_MASK ((uint32_t)0x02000000u)
#define NVIC_ICER3_R_NVIC_RES137_BIT  (25)
#define NVIC_ICER3_R_NVIC_RES137_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES137_EN   ((uint32_t)0x02000000u)

#define NVIC_ICER3_NVIC_RES137_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES137_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES137_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES138_MASK ((uint32_t)0x04000000u)
#define NVIC_ICER3_R_NVIC_RES138_BIT  (26)
#define NVIC_ICER3_R_NVIC_RES138_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES138_EN   ((uint32_t)0x04000000u)

#define NVIC_ICER3_NVIC_RES138_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES138_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES138_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES139_MASK ((uint32_t)0x08000000u)
#define NVIC_ICER3_R_NVIC_RES139_BIT  (27)
#define NVIC_ICER3_R_NVIC_RES139_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES139_EN   ((uint32_t)0x08000000u)

#define NVIC_ICER3_NVIC_RES139_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES139_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES139_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES140_MASK ((uint32_t)0x10000000u)
#define NVIC_ICER3_R_NVIC_RES140_BIT  (28)
#define NVIC_ICER3_R_NVIC_RES140_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES140_EN   ((uint32_t)0x10000000u)

#define NVIC_ICER3_NVIC_RES140_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES140_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES140_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES141_MASK ((uint32_t)0x20000000u)
#define NVIC_ICER3_R_NVIC_RES141_BIT  (29)
#define NVIC_ICER3_R_NVIC_RES141_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES141_EN   ((uint32_t)0x20000000u)

#define NVIC_ICER3_NVIC_RES141_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES141_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES141_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES142_MASK ((uint32_t)0x40000000u)
#define NVIC_ICER3_R_NVIC_RES142_BIT  (30)
#define NVIC_ICER3_R_NVIC_RES142_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES142_EN   ((uint32_t)0x40000000u)

#define NVIC_ICER3_NVIC_RES142_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES142_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES142_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER3_R_NVIC_RES143_MASK ((uint32_t)0x80000000u)
#define NVIC_ICER3_R_NVIC_RES143_BIT  (31)
#define NVIC_ICER3_R_NVIC_RES143_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER3_R_NVIC_RES143_EN   ((uint32_t)0x80000000u)

#define NVIC_ICER3_NVIC_RES143_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER3_NVIC_RES143_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER3_NVIC_RES143_EN     ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* ISPR3 ***********************************************/
/********************************************************************************************/

#define NVIC_ISPR3                (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_ISPR3_OFFSET)))
#define NVIC_ISPR3_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISPR3_OFFSET)))

/*----------*/
#define NVIC_ISPR3_R_NVIC_WTIMER1A_MASK ((uint32_t)0x00000001u)
#define NVIC_ISPR3_R_NVIC_WTIMER1A_BIT  (0)
#define NVIC_ISPR3_R_NVIC_WTIMER1A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_WTIMER1A_EN   ((uint32_t)0x00000001u)

#define NVIC_ISPR3_NVIC_WTIMER1A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_WTIMER1A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_WTIMER1A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_WTIMER1B_MASK ((uint32_t)0x00000002u)
#define NVIC_ISPR3_R_NVIC_WTIMER1B_BIT  (1)
#define NVIC_ISPR3_R_NVIC_WTIMER1B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_WTIMER1B_EN   ((uint32_t)0x00000002u)

#define NVIC_ISPR3_NVIC_WTIMER1B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_WTIMER1B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_WTIMER1B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_WTIMER2A_MASK ((uint32_t)0x00000004u)
#define NVIC_ISPR3_R_NVIC_WTIMER2A_BIT  (2)
#define NVIC_ISPR3_R_NVIC_WTIMER2A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_WTIMER2A_EN   ((uint32_t)0x00000004u)

#define NVIC_ISPR3_NVIC_WTIMER2A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_WTIMER2A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_WTIMER2A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_WTIMER2B_MASK ((uint32_t)0x00000008u)
#define NVIC_ISPR3_R_NVIC_WTIMER2B_BIT  (3)
#define NVIC_ISPR3_R_NVIC_WTIMER2B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_WTIMER2B_EN   ((uint32_t)0x00000008u)

#define NVIC_ISPR3_NVIC_WTIMER2B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_WTIMER2B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_WTIMER2B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_WTIMER3A_MASK ((uint32_t)0x00000010u)
#define NVIC_ISPR3_R_NVIC_WTIMER3A_BIT  (4)
#define NVIC_ISPR3_R_NVIC_WTIMER3A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_WTIMER3A_EN   ((uint32_t)0x00000010u)

#define NVIC_ISPR3_NVIC_WTIMER3A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_WTIMER3A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_WTIMER3A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_WTIMER3B_MASK ((uint32_t)0x00000020u)
#define NVIC_ISPR3_R_NVIC_WTIMER3B_BIT  (5)
#define NVIC_ISPR3_R_NVIC_WTIMER3B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_WTIMER3B_EN   ((uint32_t)0x00000020u)

#define NVIC_ISPR3_NVIC_WTIMER3B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_WTIMER3B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_WTIMER3B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_WTIMER4A_MASK ((uint32_t)0x00000040u)
#define NVIC_ISPR3_R_NVIC_WTIMER4A_BIT  (6)
#define NVIC_ISPR3_R_NVIC_WTIMER4A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_WTIMER4A_EN   ((uint32_t)0x00000040u)

#define NVIC_ISPR3_NVIC_WTIMER4A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_WTIMER4A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_WTIMER4A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_WTIMER4B_MASK ((uint32_t)0x00000080u)
#define NVIC_ISPR3_R_NVIC_WTIMER4B_BIT  (7)
#define NVIC_ISPR3_R_NVIC_WTIMER4B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_WTIMER4B_EN   ((uint32_t)0x00000080u)

#define NVIC_ISPR3_NVIC_WTIMER4B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_WTIMER4B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_WTIMER4B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_WTIMER5A_MASK ((uint32_t)0x00000100u)
#define NVIC_ISPR3_R_NVIC_WTIMER5A_BIT  (8)
#define NVIC_ISPR3_R_NVIC_WTIMER5A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_WTIMER5A_EN   ((uint32_t)0x00000100u)

#define NVIC_ISPR3_NVIC_WTIMER5A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_WTIMER5A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_WTIMER5A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_WTIMER5B_MASK ((uint32_t)0x00000200u)
#define NVIC_ISPR3_R_NVIC_WTIMER5B_BIT  (9)
#define NVIC_ISPR3_R_NVIC_WTIMER5B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_WTIMER5B_EN   ((uint32_t)0x00000200u)

#define NVIC_ISPR3_NVIC_WTIMER5B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_WTIMER5B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_WTIMER5B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_SYSEXC_MASK ((uint32_t)0x00000400u)
#define NVIC_ISPR3_R_NVIC_SYSEXC_BIT  (10)
#define NVIC_ISPR3_R_NVIC_SYSEXC_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_SYSEXC_EN   ((uint32_t)0x00000400u)

#define NVIC_ISPR3_NVIC_SYSEXC_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_SYSEXC_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_SYSEXC_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES123_MASK ((uint32_t)0x00000800u)
#define NVIC_ISPR3_R_NVIC_RES123_BIT  (11)
#define NVIC_ISPR3_R_NVIC_RES123_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES123_EN   ((uint32_t)0x00000800u)

#define NVIC_ISPR3_NVIC_RES123_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES123_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES123_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES124_MASK ((uint32_t)0x00001000u)
#define NVIC_ISPR3_R_NVIC_RES124_BIT  (12)
#define NVIC_ISPR3_R_NVIC_RES124_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES124_EN   ((uint32_t)0x00001000u)

#define NVIC_ISPR3_NVIC_RES124_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES124_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES124_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES125_MASK ((uint32_t)0x00002000u)
#define NVIC_ISPR3_R_NVIC_RES125_BIT  (13)
#define NVIC_ISPR3_R_NVIC_RES125_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES125_EN   ((uint32_t)0x00002000u)

#define NVIC_ISPR3_NVIC_RES125_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES125_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES125_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES126_MASK ((uint32_t)0x00004000u)
#define NVIC_ISPR3_R_NVIC_RES126_BIT  (14)
#define NVIC_ISPR3_R_NVIC_RES126_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES126_EN   ((uint32_t)0x00004000u)

#define NVIC_ISPR3_NVIC_RES126_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES126_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES126_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES127_MASK ((uint32_t)0x00008000u)
#define NVIC_ISPR3_R_NVIC_RES127_BIT  (15)
#define NVIC_ISPR3_R_NVIC_RES127_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES127_EN   ((uint32_t)0x00008000u)

#define NVIC_ISPR3_NVIC_RES127_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES127_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES127_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES128_MASK ((uint32_t)0x00010000u)
#define NVIC_ISPR3_R_NVIC_RES128_BIT  (16)
#define NVIC_ISPR3_R_NVIC_RES128_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES128_EN   ((uint32_t)0x00010000u)

#define NVIC_ISPR3_NVIC_RES128_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES128_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES128_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES129_MASK ((uint32_t)0x00020000u)
#define NVIC_ISPR3_R_NVIC_RES129_BIT  (17)
#define NVIC_ISPR3_R_NVIC_RES129_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES129_EN   ((uint32_t)0x00020000u)

#define NVIC_ISPR3_NVIC_RES129_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES129_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES129_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES130_MASK ((uint32_t)0x00040000u)
#define NVIC_ISPR3_R_NVIC_RES130_BIT  (18)
#define NVIC_ISPR3_R_NVIC_RES130_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES130_EN   ((uint32_t)0x00040000u)

#define NVIC_ISPR3_NVIC_RES130_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES130_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES130_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES131_MASK ((uint32_t)0x00080000u)
#define NVIC_ISPR3_R_NVIC_RES131_BIT  (19)
#define NVIC_ISPR3_R_NVIC_RES131_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES131_EN   ((uint32_t)0x00080000u)

#define NVIC_ISPR3_NVIC_RES131_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES131_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES131_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES132_MASK ((uint32_t)0x00100000u)
#define NVIC_ISPR3_R_NVIC_RES132_BIT  (20)
#define NVIC_ISPR3_R_NVIC_RES132_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES132_EN   ((uint32_t)0x00100000u)

#define NVIC_ISPR3_NVIC_RES132_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES132_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES132_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES133_MASK ((uint32_t)0x00200000u)
#define NVIC_ISPR3_R_NVIC_RES133_BIT  (21)
#define NVIC_ISPR3_R_NVIC_RES133_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES133_EN   ((uint32_t)0x00200000u)

#define NVIC_ISPR3_NVIC_RES133_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES133_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES133_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES134_MASK ((uint32_t)0x00400000u)
#define NVIC_ISPR3_R_NVIC_RES134_BIT  (22)
#define NVIC_ISPR3_R_NVIC_RES134_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES134_EN   ((uint32_t)0x00400000u)

#define NVIC_ISPR3_NVIC_RES134_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES134_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES134_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES135_MASK ((uint32_t)0x00800000u)
#define NVIC_ISPR3_R_NVIC_RES135_BIT  (23)
#define NVIC_ISPR3_R_NVIC_RES135_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES135_EN   ((uint32_t)0x00800000u)

#define NVIC_ISPR3_NVIC_RES135_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES135_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES135_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES136_MASK ((uint32_t)0x01000000u)
#define NVIC_ISPR3_R_NVIC_RES136_BIT  (24)
#define NVIC_ISPR3_R_NVIC_RES136_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES136_EN   ((uint32_t)0x01000000u)

#define NVIC_ISPR3_NVIC_RES136_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES136_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES136_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES137_MASK ((uint32_t)0x02000000u)
#define NVIC_ISPR3_R_NVIC_RES137_BIT  (25)
#define NVIC_ISPR3_R_NVIC_RES137_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES137_EN   ((uint32_t)0x02000000u)

#define NVIC_ISPR3_NVIC_RES137_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES137_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES137_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES138_MASK ((uint32_t)0x04000000u)
#define NVIC_ISPR3_R_NVIC_RES138_BIT  (26)
#define NVIC_ISPR3_R_NVIC_RES138_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES138_EN   ((uint32_t)0x04000000u)

#define NVIC_ISPR3_NVIC_RES138_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES138_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES138_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES139_MASK ((uint32_t)0x08000000u)
#define NVIC_ISPR3_R_NVIC_RES139_BIT  (27)
#define NVIC_ISPR3_R_NVIC_RES139_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES139_EN   ((uint32_t)0x08000000u)

#define NVIC_ISPR3_NVIC_RES139_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES139_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES139_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES140_MASK ((uint32_t)0x10000000u)
#define NVIC_ISPR3_R_NVIC_RES140_BIT  (28)
#define NVIC_ISPR3_R_NVIC_RES140_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES140_EN   ((uint32_t)0x10000000u)

#define NVIC_ISPR3_NVIC_RES140_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES140_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES140_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES141_MASK ((uint32_t)0x20000000u)
#define NVIC_ISPR3_R_NVIC_RES141_BIT  (29)
#define NVIC_ISPR3_R_NVIC_RES141_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES141_EN   ((uint32_t)0x20000000u)

#define NVIC_ISPR3_NVIC_RES141_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES141_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES141_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES142_MASK ((uint32_t)0x40000000u)
#define NVIC_ISPR3_R_NVIC_RES142_BIT  (30)
#define NVIC_ISPR3_R_NVIC_RES142_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES142_EN   ((uint32_t)0x40000000u)

#define NVIC_ISPR3_NVIC_RES142_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES142_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES142_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR3_R_NVIC_RES143_MASK ((uint32_t)0x80000000u)
#define NVIC_ISPR3_R_NVIC_RES143_BIT  (31)
#define NVIC_ISPR3_R_NVIC_RES143_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR3_R_NVIC_RES143_EN   ((uint32_t)0x80000000u)

#define NVIC_ISPR3_NVIC_RES143_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR3_NVIC_RES143_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR3_NVIC_RES143_EN     ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* ICPR3 ***********************************************/
/********************************************************************************************/

#define NVIC_ICPR3                (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_ICPR3_OFFSET)))
#define NVIC_ICPR3_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICPR3_OFFSET)))


/*----------*/
#define NVIC_ICPR3_R_NVIC_WTIMER1A_MASK ((uint32_t)0x00000001u)
#define NVIC_ICPR3_R_NVIC_WTIMER1A_BIT  (0)
#define NVIC_ICPR3_R_NVIC_WTIMER1A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_WTIMER1A_EN   ((uint32_t)0x00000001u)

#define NVIC_ICPR3_NVIC_WTIMER1A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_WTIMER1A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_WTIMER1A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_WTIMER1B_MASK ((uint32_t)0x00000002u)
#define NVIC_ICPR3_R_NVIC_WTIMER1B_BIT  (1)
#define NVIC_ICPR3_R_NVIC_WTIMER1B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_WTIMER1B_EN   ((uint32_t)0x00000002u)

#define NVIC_ICPR3_NVIC_WTIMER1B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_WTIMER1B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_WTIMER1B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_WTIMER2A_MASK ((uint32_t)0x00000004u)
#define NVIC_ICPR3_R_NVIC_WTIMER2A_BIT  (2)
#define NVIC_ICPR3_R_NVIC_WTIMER2A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_WTIMER2A_EN   ((uint32_t)0x00000004u)

#define NVIC_ICPR3_NVIC_WTIMER2A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_WTIMER2A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_WTIMER2A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_WTIMER2B_MASK ((uint32_t)0x00000008u)
#define NVIC_ICPR3_R_NVIC_WTIMER2B_BIT  (3)
#define NVIC_ICPR3_R_NVIC_WTIMER2B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_WTIMER2B_EN   ((uint32_t)0x00000008u)

#define NVIC_ICPR3_NVIC_WTIMER2B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_WTIMER2B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_WTIMER2B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_WTIMER3A_MASK ((uint32_t)0x00000010u)
#define NVIC_ICPR3_R_NVIC_WTIMER3A_BIT  (4)
#define NVIC_ICPR3_R_NVIC_WTIMER3A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_WTIMER3A_EN   ((uint32_t)0x00000010u)

#define NVIC_ICPR3_NVIC_WTIMER3A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_WTIMER3A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_WTIMER3A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_WTIMER3B_MASK ((uint32_t)0x00000020u)
#define NVIC_ICPR3_R_NVIC_WTIMER3B_BIT  (5)
#define NVIC_ICPR3_R_NVIC_WTIMER3B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_WTIMER3B_EN   ((uint32_t)0x00000020u)

#define NVIC_ICPR3_NVIC_WTIMER3B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_WTIMER3B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_WTIMER3B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_WTIMER4A_MASK ((uint32_t)0x00000040u)
#define NVIC_ICPR3_R_NVIC_WTIMER4A_BIT  (6)
#define NVIC_ICPR3_R_NVIC_WTIMER4A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_WTIMER4A_EN   ((uint32_t)0x00000040u)

#define NVIC_ICPR3_NVIC_WTIMER4A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_WTIMER4A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_WTIMER4A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_WTIMER4B_MASK ((uint32_t)0x00000080u)
#define NVIC_ICPR3_R_NVIC_WTIMER4B_BIT  (7)
#define NVIC_ICPR3_R_NVIC_WTIMER4B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_WTIMER4B_EN   ((uint32_t)0x00000080u)

#define NVIC_ICPR3_NVIC_WTIMER4B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_WTIMER4B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_WTIMER4B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_WTIMER5A_MASK ((uint32_t)0x00000100u)
#define NVIC_ICPR3_R_NVIC_WTIMER5A_BIT  (8)
#define NVIC_ICPR3_R_NVIC_WTIMER5A_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_WTIMER5A_EN   ((uint32_t)0x00000100u)

#define NVIC_ICPR3_NVIC_WTIMER5A_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_WTIMER5A_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_WTIMER5A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_WTIMER5B_MASK ((uint32_t)0x00000200u)
#define NVIC_ICPR3_R_NVIC_WTIMER5B_BIT  (9)
#define NVIC_ICPR3_R_NVIC_WTIMER5B_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_WTIMER5B_EN   ((uint32_t)0x00000200u)

#define NVIC_ICPR3_NVIC_WTIMER5B_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_WTIMER5B_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_WTIMER5B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_SYSEXC_MASK ((uint32_t)0x00000400u)
#define NVIC_ICPR3_R_NVIC_SYSEXC_BIT  (10)
#define NVIC_ICPR3_R_NVIC_SYSEXC_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_SYSEXC_EN   ((uint32_t)0x00000400u)

#define NVIC_ICPR3_NVIC_SYSEXC_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_SYSEXC_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_SYSEXC_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES123_MASK ((uint32_t)0x00000800u)
#define NVIC_ICPR3_R_NVIC_RES123_BIT  (11)
#define NVIC_ICPR3_R_NVIC_RES123_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES123_EN   ((uint32_t)0x00000800u)

#define NVIC_ICPR3_NVIC_RES123_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES123_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES123_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES124_MASK ((uint32_t)0x00001000u)
#define NVIC_ICPR3_R_NVIC_RES124_BIT  (12)
#define NVIC_ICPR3_R_NVIC_RES124_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES124_EN   ((uint32_t)0x00001000u)

#define NVIC_ICPR3_NVIC_RES124_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES124_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES124_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES125_MASK ((uint32_t)0x00002000u)
#define NVIC_ICPR3_R_NVIC_RES125_BIT  (13)
#define NVIC_ICPR3_R_NVIC_RES125_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES125_EN   ((uint32_t)0x00002000u)

#define NVIC_ICPR3_NVIC_RES125_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES125_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES125_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES126_MASK ((uint32_t)0x00004000u)
#define NVIC_ICPR3_R_NVIC_RES126_BIT  (14)
#define NVIC_ICPR3_R_NVIC_RES126_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES126_EN   ((uint32_t)0x00004000u)

#define NVIC_ICPR3_NVIC_RES126_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES126_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES126_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES127_MASK ((uint32_t)0x00008000u)
#define NVIC_ICPR3_R_NVIC_RES127_BIT  (15)
#define NVIC_ICPR3_R_NVIC_RES127_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES127_EN   ((uint32_t)0x00008000u)

#define NVIC_ICPR3_NVIC_RES127_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES127_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES127_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES128_MASK ((uint32_t)0x00010000u)
#define NVIC_ICPR3_R_NVIC_RES128_BIT  (16)
#define NVIC_ICPR3_R_NVIC_RES128_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES128_EN   ((uint32_t)0x00010000u)

#define NVIC_ICPR3_NVIC_RES128_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES128_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES128_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES129_MASK ((uint32_t)0x00020000u)
#define NVIC_ICPR3_R_NVIC_RES129_BIT  (17)
#define NVIC_ICPR3_R_NVIC_RES129_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES129_EN   ((uint32_t)0x00020000u)

#define NVIC_ICPR3_NVIC_RES129_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES129_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES129_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES130_MASK ((uint32_t)0x00040000u)
#define NVIC_ICPR3_R_NVIC_RES130_BIT  (18)
#define NVIC_ICPR3_R_NVIC_RES130_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES130_EN   ((uint32_t)0x00040000u)

#define NVIC_ICPR3_NVIC_RES130_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES130_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES130_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES131_MASK ((uint32_t)0x00080000u)
#define NVIC_ICPR3_R_NVIC_RES131_BIT  (19)
#define NVIC_ICPR3_R_NVIC_RES131_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES131_EN   ((uint32_t)0x00080000u)

#define NVIC_ICPR3_NVIC_RES131_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES131_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES131_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES132_MASK ((uint32_t)0x00100000u)
#define NVIC_ICPR3_R_NVIC_RES132_BIT  (20)
#define NVIC_ICPR3_R_NVIC_RES132_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES132_EN   ((uint32_t)0x00100000u)

#define NVIC_ICPR3_NVIC_RES132_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES132_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES132_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES133_MASK ((uint32_t)0x00200000u)
#define NVIC_ICPR3_R_NVIC_RES133_BIT  (21)
#define NVIC_ICPR3_R_NVIC_RES133_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES133_EN   ((uint32_t)0x00200000u)

#define NVIC_ICPR3_NVIC_RES133_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES133_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES133_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES134_MASK ((uint32_t)0x00400000u)
#define NVIC_ICPR3_R_NVIC_RES134_BIT  (22)
#define NVIC_ICPR3_R_NVIC_RES134_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES134_EN   ((uint32_t)0x00400000u)

#define NVIC_ICPR3_NVIC_RES134_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES134_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES134_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES135_MASK ((uint32_t)0x00800000u)
#define NVIC_ICPR3_R_NVIC_RES135_BIT  (23)
#define NVIC_ICPR3_R_NVIC_RES135_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES135_EN   ((uint32_t)0x00800000u)

#define NVIC_ICPR3_NVIC_RES135_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES135_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES135_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES136_MASK ((uint32_t)0x01000000u)
#define NVIC_ICPR3_R_NVIC_RES136_BIT  (24)
#define NVIC_ICPR3_R_NVIC_RES136_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES136_EN   ((uint32_t)0x01000000u)

#define NVIC_ICPR3_NVIC_RES136_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES136_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES136_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES137_MASK ((uint32_t)0x02000000u)
#define NVIC_ICPR3_R_NVIC_RES137_BIT  (25)
#define NVIC_ICPR3_R_NVIC_RES137_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES137_EN   ((uint32_t)0x02000000u)

#define NVIC_ICPR3_NVIC_RES137_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES137_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES137_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES138_MASK ((uint32_t)0x04000000u)
#define NVIC_ICPR3_R_NVIC_RES138_BIT  (26)
#define NVIC_ICPR3_R_NVIC_RES138_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES138_EN   ((uint32_t)0x04000000u)

#define NVIC_ICPR3_NVIC_RES138_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES138_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES138_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES139_MASK ((uint32_t)0x08000000u)
#define NVIC_ICPR3_R_NVIC_RES139_BIT  (27)
#define NVIC_ICPR3_R_NVIC_RES139_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES139_EN   ((uint32_t)0x08000000u)

#define NVIC_ICPR3_NVIC_RES139_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES139_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES139_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES140_MASK ((uint32_t)0x10000000u)
#define NVIC_ICPR3_R_NVIC_RES140_BIT  (28)
#define NVIC_ICPR3_R_NVIC_RES140_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES140_EN   ((uint32_t)0x10000000u)

#define NVIC_ICPR3_NVIC_RES140_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES140_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES140_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES141_MASK ((uint32_t)0x20000000u)
#define NVIC_ICPR3_R_NVIC_RES141_BIT  (29)
#define NVIC_ICPR3_R_NVIC_RES141_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES141_EN   ((uint32_t)0x20000000u)

#define NVIC_ICPR3_NVIC_RES141_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES141_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES141_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES142_MASK ((uint32_t)0x40000000u)
#define NVIC_ICPR3_R_NVIC_RES142_BIT  (30)
#define NVIC_ICPR3_R_NVIC_RES142_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES142_EN   ((uint32_t)0x40000000u)

#define NVIC_ICPR3_NVIC_RES142_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES142_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES142_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR3_R_NVIC_RES143_MASK ((uint32_t)0x80000000u)
#define NVIC_ICPR3_R_NVIC_RES143_BIT  (31)
#define NVIC_ICPR3_R_NVIC_RES143_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR3_R_NVIC_RES143_EN   ((uint32_t)0x80000000u)

#define NVIC_ICPR3_NVIC_RES143_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR3_NVIC_RES143_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR3_NVIC_RES143_EN     ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* IABR3 ***********************************************/
/********************************************************************************************/

#define NVIC_IABR3                (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_IABR3_OFFSET)))
#define NVIC_IABR3_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_IABR3_OFFSET)))


/*----------*/
#define NVIC_IABR3_R_NVIC_WTIMER1A_MASK ((uint32_t)0x00000001u)
#define NVIC_IABR3_R_NVIC_WTIMER1A_BIT  (0)
#define NVIC_IABR3_R_NVIC_WTIMER1A_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_WTIMER1A_EN   ((uint32_t)0x00000001u)

#define NVIC_IABR3_NVIC_WTIMER1A_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_WTIMER1A_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_WTIMER1A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_WTIMER1B_MASK ((uint32_t)0x00000002u)
#define NVIC_IABR3_R_NVIC_WTIMER1B_BIT  (1)
#define NVIC_IABR3_R_NVIC_WTIMER1B_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_WTIMER1B_EN   ((uint32_t)0x00000002u)

#define NVIC_IABR3_NVIC_WTIMER1B_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_WTIMER1B_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_WTIMER1B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_WTIMER2A_MASK ((uint32_t)0x00000004u)
#define NVIC_IABR3_R_NVIC_WTIMER2A_BIT  (2)
#define NVIC_IABR3_R_NVIC_WTIMER2A_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_WTIMER2A_EN   ((uint32_t)0x00000004u)

#define NVIC_IABR3_NVIC_WTIMER2A_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_WTIMER2A_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_WTIMER2A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_WTIMER2B_MASK ((uint32_t)0x00000008u)
#define NVIC_IABR3_R_NVIC_WTIMER2B_BIT  (3)
#define NVIC_IABR3_R_NVIC_WTIMER2B_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_WTIMER2B_EN   ((uint32_t)0x00000008u)

#define NVIC_IABR3_NVIC_WTIMER2B_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_WTIMER2B_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_WTIMER2B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_WTIMER3A_MASK ((uint32_t)0x00000010u)
#define NVIC_IABR3_R_NVIC_WTIMER3A_BIT  (4)
#define NVIC_IABR3_R_NVIC_WTIMER3A_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_WTIMER3A_EN   ((uint32_t)0x00000010u)

#define NVIC_IABR3_NVIC_WTIMER3A_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_WTIMER3A_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_WTIMER3A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_WTIMER3B_MASK ((uint32_t)0x00000020u)
#define NVIC_IABR3_R_NVIC_WTIMER3B_BIT  (5)
#define NVIC_IABR3_R_NVIC_WTIMER3B_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_WTIMER3B_EN   ((uint32_t)0x00000020u)

#define NVIC_IABR3_NVIC_WTIMER3B_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_WTIMER3B_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_WTIMER3B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_WTIMER4A_MASK ((uint32_t)0x00000040u)
#define NVIC_IABR3_R_NVIC_WTIMER4A_BIT  (6)
#define NVIC_IABR3_R_NVIC_WTIMER4A_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_WTIMER4A_EN   ((uint32_t)0x00000040u)

#define NVIC_IABR3_NVIC_WTIMER4A_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_WTIMER4A_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_WTIMER4A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_WTIMER4B_MASK ((uint32_t)0x00000080u)
#define NVIC_IABR3_R_NVIC_WTIMER4B_BIT  (7)
#define NVIC_IABR3_R_NVIC_WTIMER4B_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_WTIMER4B_EN   ((uint32_t)0x00000080u)

#define NVIC_IABR3_NVIC_WTIMER4B_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_WTIMER4B_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_WTIMER4B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_WTIMER5A_MASK ((uint32_t)0x00000100u)
#define NVIC_IABR3_R_NVIC_WTIMER5A_BIT  (8)
#define NVIC_IABR3_R_NVIC_WTIMER5A_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_WTIMER5A_EN   ((uint32_t)0x00000100u)

#define NVIC_IABR3_NVIC_WTIMER5A_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_WTIMER5A_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_WTIMER5A_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_WTIMER5B_MASK ((uint32_t)0x00000200u)
#define NVIC_IABR3_R_NVIC_WTIMER5B_BIT  (9)
#define NVIC_IABR3_R_NVIC_WTIMER5B_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_WTIMER5B_EN   ((uint32_t)0x00000200u)

#define NVIC_IABR3_NVIC_WTIMER5B_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_WTIMER5B_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_WTIMER5B_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_SYSEXC_MASK ((uint32_t)0x00000400u)
#define NVIC_IABR3_R_NVIC_SYSEXC_BIT  (10)
#define NVIC_IABR3_R_NVIC_SYSEXC_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_SYSEXC_EN   ((uint32_t)0x00000400u)

#define NVIC_IABR3_NVIC_SYSEXC_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_SYSEXC_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_SYSEXC_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES123_MASK ((uint32_t)0x00000800u)
#define NVIC_IABR3_R_NVIC_RES123_BIT  (11)
#define NVIC_IABR3_R_NVIC_RES123_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES123_EN   ((uint32_t)0x00000800u)

#define NVIC_IABR3_NVIC_RES123_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES123_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES123_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES124_MASK ((uint32_t)0x00001000u)
#define NVIC_IABR3_R_NVIC_RES124_BIT  (12)
#define NVIC_IABR3_R_NVIC_RES124_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES124_EN   ((uint32_t)0x00001000u)

#define NVIC_IABR3_NVIC_RES124_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES124_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES124_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES125_MASK ((uint32_t)0x00002000u)
#define NVIC_IABR3_R_NVIC_RES125_BIT  (13)
#define NVIC_IABR3_R_NVIC_RES125_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES125_EN   ((uint32_t)0x00002000u)

#define NVIC_IABR3_NVIC_RES125_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES125_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES125_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES126_MASK ((uint32_t)0x00004000u)
#define NVIC_IABR3_R_NVIC_RES126_BIT  (14)
#define NVIC_IABR3_R_NVIC_RES126_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES126_EN   ((uint32_t)0x00004000u)

#define NVIC_IABR3_NVIC_RES126_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES126_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES126_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES127_MASK ((uint32_t)0x00008000u)
#define NVIC_IABR3_R_NVIC_RES127_BIT  (15)
#define NVIC_IABR3_R_NVIC_RES127_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES127_EN   ((uint32_t)0x00008000u)

#define NVIC_IABR3_NVIC_RES127_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES127_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES127_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES128_MASK ((uint32_t)0x00010000u)
#define NVIC_IABR3_R_NVIC_RES128_BIT  (16)
#define NVIC_IABR3_R_NVIC_RES128_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES128_EN   ((uint32_t)0x00010000u)

#define NVIC_IABR3_NVIC_RES128_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES128_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES128_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES129_MASK ((uint32_t)0x00020000u)
#define NVIC_IABR3_R_NVIC_RES129_BIT  (17)
#define NVIC_IABR3_R_NVIC_RES129_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES129_EN   ((uint32_t)0x00020000u)

#define NVIC_IABR3_NVIC_RES129_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES129_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES129_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES130_MASK ((uint32_t)0x00040000u)
#define NVIC_IABR3_R_NVIC_RES130_BIT  (18)
#define NVIC_IABR3_R_NVIC_RES130_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES130_EN   ((uint32_t)0x00040000u)

#define NVIC_IABR3_NVIC_RES130_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES130_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES130_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES131_MASK ((uint32_t)0x00080000u)
#define NVIC_IABR3_R_NVIC_RES131_BIT  (19)
#define NVIC_IABR3_R_NVIC_RES131_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES131_EN   ((uint32_t)0x00080000u)

#define NVIC_IABR3_NVIC_RES131_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES131_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES131_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES132_MASK ((uint32_t)0x00100000u)
#define NVIC_IABR3_R_NVIC_RES132_BIT  (20)
#define NVIC_IABR3_R_NVIC_RES132_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES132_EN   ((uint32_t)0x00100000u)

#define NVIC_IABR3_NVIC_RES132_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES132_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES132_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES133_MASK ((uint32_t)0x00200000u)
#define NVIC_IABR3_R_NVIC_RES133_BIT  (21)
#define NVIC_IABR3_R_NVIC_RES133_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES133_EN   ((uint32_t)0x00200000u)

#define NVIC_IABR3_NVIC_RES133_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES133_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES133_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES134_MASK ((uint32_t)0x00400000u)
#define NVIC_IABR3_R_NVIC_RES134_BIT  (22)
#define NVIC_IABR3_R_NVIC_RES134_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES134_EN   ((uint32_t)0x00400000u)

#define NVIC_IABR3_NVIC_RES134_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES134_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES134_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES135_MASK ((uint32_t)0x00800000u)
#define NVIC_IABR3_R_NVIC_RES135_BIT  (23)
#define NVIC_IABR3_R_NVIC_RES135_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES135_EN   ((uint32_t)0x00800000u)

#define NVIC_IABR3_NVIC_RES135_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES135_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES135_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES136_MASK ((uint32_t)0x01000000u)
#define NVIC_IABR3_R_NVIC_RES136_BIT  (24)
#define NVIC_IABR3_R_NVIC_RES136_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES136_EN   ((uint32_t)0x01000000u)

#define NVIC_IABR3_NVIC_RES136_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES136_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES136_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES137_MASK ((uint32_t)0x02000000u)
#define NVIC_IABR3_R_NVIC_RES137_BIT  (25)
#define NVIC_IABR3_R_NVIC_RES137_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES137_EN   ((uint32_t)0x02000000u)

#define NVIC_IABR3_NVIC_RES137_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES137_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES137_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES138_MASK ((uint32_t)0x04000000u)
#define NVIC_IABR3_R_NVIC_RES138_BIT  (26)
#define NVIC_IABR3_R_NVIC_RES138_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES138_EN   ((uint32_t)0x04000000u)

#define NVIC_IABR3_NVIC_RES138_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES138_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES138_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES139_MASK ((uint32_t)0x08000000u)
#define NVIC_IABR3_R_NVIC_RES139_BIT  (27)
#define NVIC_IABR3_R_NVIC_RES139_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES139_EN   ((uint32_t)0x08000000u)

#define NVIC_IABR3_NVIC_RES139_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES139_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES139_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES140_MASK ((uint32_t)0x10000000u)
#define NVIC_IABR3_R_NVIC_RES140_BIT  (28)
#define NVIC_IABR3_R_NVIC_RES140_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES140_EN   ((uint32_t)0x10000000u)

#define NVIC_IABR3_NVIC_RES140_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES140_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES140_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES141_MASK ((uint32_t)0x20000000u)
#define NVIC_IABR3_R_NVIC_RES141_BIT  (29)
#define NVIC_IABR3_R_NVIC_RES141_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES141_EN   ((uint32_t)0x20000000u)

#define NVIC_IABR3_NVIC_RES141_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES141_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES141_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES142_MASK ((uint32_t)0x40000000u)
#define NVIC_IABR3_R_NVIC_RES142_BIT  (30)
#define NVIC_IABR3_R_NVIC_RES142_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES142_EN   ((uint32_t)0x40000000u)

#define NVIC_IABR3_NVIC_RES142_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES142_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES142_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR3_R_NVIC_RES143_MASK ((uint32_t)0x80000000u)
#define NVIC_IABR3_R_NVIC_RES143_BIT  (31)
#define NVIC_IABR3_R_NVIC_RES143_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR3_R_NVIC_RES143_EN   ((uint32_t)0x80000000u)

#define NVIC_IABR3_NVIC_RES143_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR3_NVIC_RES143_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR3_NVIC_RES143_EN     ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* ISER4 ***********************************************/
/********************************************************************************************/

#define NVIC_ISER4                (((NVIC4_TypeDef*)(NVIC_BASE+NVIC_ISER4_OFFSET)))
#define NVIC_ISER4_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISER4_OFFSET)))

/*----------*/
#define NVIC_ISER4_R_NVIC_RES144_MASK ((uint32_t)0x00000001u)
#define NVIC_ISER4_R_NVIC_RES144_BIT  (0)
#define NVIC_ISER4_R_NVIC_RES144_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER4_R_NVIC_RES144_EN   ((uint32_t)0x00000001u)

#define NVIC_ISER4_NVIC_RES144_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER4_NVIC_RES144_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER4_NVIC_RES144_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER4_R_NVIC_RES145_MASK ((uint32_t)0x00000002u)
#define NVIC_ISER4_R_NVIC_RES145_BIT  (1)
#define NVIC_ISER4_R_NVIC_RES145_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER4_R_NVIC_RES145_EN   ((uint32_t)0x00000002u)

#define NVIC_ISER4_NVIC_RES145_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER4_NVIC_RES145_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER4_NVIC_RES145_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER4_R_NVIC_RES146_MASK ((uint32_t)0x00000004u)
#define NVIC_ISER4_R_NVIC_RES146_BIT  (2)
#define NVIC_ISER4_R_NVIC_RES146_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER4_R_NVIC_RES146_EN   ((uint32_t)0x00000004u)

#define NVIC_ISER4_NVIC_RES146_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER4_NVIC_RES146_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER4_NVIC_RES146_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER4_R_NVIC_RES147_MASK ((uint32_t)0x00000008u)
#define NVIC_ISER4_R_NVIC_RES147_BIT  (3)
#define NVIC_ISER4_R_NVIC_RES147_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER4_R_NVIC_RES147_EN   ((uint32_t)0x00000008u)

#define NVIC_ISER4_NVIC_RES147_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER4_NVIC_RES147_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER4_NVIC_RES147_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER4_R_NVIC_RES148_MASK ((uint32_t)0x00000010u)
#define NVIC_ISER4_R_NVIC_RES148_BIT  (4)
#define NVIC_ISER4_R_NVIC_RES148_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER4_R_NVIC_RES148_EN   ((uint32_t)0x00000010u)

#define NVIC_ISER4_NVIC_RES148_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER4_NVIC_RES148_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER4_NVIC_RES148_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER4_R_NVIC_RES149_MASK ((uint32_t)0x00000020u)
#define NVIC_ISER4_R_NVIC_RES149_BIT  (5)
#define NVIC_ISER4_R_NVIC_RES149_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER4_R_NVIC_RES149_EN   ((uint32_t)0x00000020u)

#define NVIC_ISER4_NVIC_RES149_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER4_NVIC_RES149_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER4_NVIC_RES149_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER4_R_NVIC_PWM1GEN0_MASK ((uint32_t)0x00000040u)
#define NVIC_ISER4_R_NVIC_PWM1GEN0_BIT  (6)
#define NVIC_ISER4_R_NVIC_PWM1GEN0_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER4_R_NVIC_PWM1GEN0_EN   ((uint32_t)0x00000040u)

#define NVIC_ISER4_NVIC_PWM1GEN0_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER4_NVIC_PWM1GEN0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER4_NVIC_PWM1GEN0_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER4_R_NVIC_PWM1GEN1_MASK ((uint32_t)0x00000080u)
#define NVIC_ISER4_R_NVIC_PWM1GEN1_BIT  (7)
#define NVIC_ISER4_R_NVIC_PWM1GEN1_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER4_R_NVIC_PWM1GEN1_EN   ((uint32_t)0x00000080u)

#define NVIC_ISER4_NVIC_PWM1GEN1_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER4_NVIC_PWM1GEN1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER4_NVIC_PWM1GEN1_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER4_R_NVIC_PWM1GEN2_MASK ((uint32_t)0x00000100u)
#define NVIC_ISER4_R_NVIC_PWM1GEN2_BIT  (8)
#define NVIC_ISER4_R_NVIC_PWM1GEN2_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER4_R_NVIC_PWM1GEN2_EN   ((uint32_t)0x00000100u)

#define NVIC_ISER4_NVIC_PWM1GEN2_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER4_NVIC_PWM1GEN2_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER4_NVIC_PWM1GEN2_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER4_R_NVIC_PWM1GEN3_MASK ((uint32_t)0x00000200u)
#define NVIC_ISER4_R_NVIC_PWM1GEN3_BIT  (9)
#define NVIC_ISER4_R_NVIC_PWM1GEN3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER4_R_NVIC_PWM1GEN3_EN   ((uint32_t)0x00000200u)

#define NVIC_ISER4_NVIC_PWM1GEN3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER4_NVIC_PWM1GEN3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER4_NVIC_PWM1GEN3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISER4_R_NVIC_PWM1FAULT_MASK ((uint32_t)0x00000400u)
#define NVIC_ISER4_R_NVIC_PWM1FAULT_BIT  (10)
#define NVIC_ISER4_R_NVIC_PWM1FAULT_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISER4_R_NVIC_PWM1FAULT_EN   ((uint32_t)0x00000400u)

#define NVIC_ISER4_NVIC_PWM1FAULT_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISER4_NVIC_PWM1FAULT_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISER4_NVIC_PWM1FAULT_EN     ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* ICER4 ***********************************************/
/********************************************************************************************/

#define NVIC_ICER4                (((NVIC4_TypeDef*)(NVIC_BASE+NVIC_ICER4_OFFSET)))
#define NVIC_ICER4_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICER4_OFFSET)))

/*----------*/
#define NVIC_ICER4_R_NVIC_RES144_MASK ((uint32_t)0x00000001u)
#define NVIC_ICER4_R_NVIC_RES144_BIT  (0)
#define NVIC_ICER4_R_NVIC_RES144_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER4_R_NVIC_RES144_EN   ((uint32_t)0x00000001u)

#define NVIC_ICER4_NVIC_RES144_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER4_NVIC_RES144_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER4_NVIC_RES144_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER4_R_NVIC_RES145_MASK ((uint32_t)0x00000002u)
#define NVIC_ICER4_R_NVIC_RES145_BIT  (1)
#define NVIC_ICER4_R_NVIC_RES145_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER4_R_NVIC_RES145_EN   ((uint32_t)0x00000002u)

#define NVIC_ICER4_NVIC_RES145_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER4_NVIC_RES145_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER4_NVIC_RES145_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER4_R_NVIC_RES146_MASK ((uint32_t)0x00000004u)
#define NVIC_ICER4_R_NVIC_RES146_BIT  (2)
#define NVIC_ICER4_R_NVIC_RES146_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER4_R_NVIC_RES146_EN   ((uint32_t)0x00000004u)

#define NVIC_ICER4_NVIC_RES146_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER4_NVIC_RES146_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER4_NVIC_RES146_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER4_R_NVIC_RES147_MASK ((uint32_t)0x00000008u)
#define NVIC_ICER4_R_NVIC_RES147_BIT  (3)
#define NVIC_ICER4_R_NVIC_RES147_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER4_R_NVIC_RES147_EN   ((uint32_t)0x00000008u)

#define NVIC_ICER4_NVIC_RES147_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER4_NVIC_RES147_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER4_NVIC_RES147_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER4_R_NVIC_RES148_MASK ((uint32_t)0x00000010u)
#define NVIC_ICER4_R_NVIC_RES148_BIT  (4)
#define NVIC_ICER4_R_NVIC_RES148_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER4_R_NVIC_RES148_EN   ((uint32_t)0x00000010u)

#define NVIC_ICER4_NVIC_RES148_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER4_NVIC_RES148_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER4_NVIC_RES148_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER4_R_NVIC_RES149_MASK ((uint32_t)0x00000020u)
#define NVIC_ICER4_R_NVIC_RES149_BIT  (5)
#define NVIC_ICER4_R_NVIC_RES149_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER4_R_NVIC_RES149_EN   ((uint32_t)0x00000020u)

#define NVIC_ICER4_NVIC_RES149_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER4_NVIC_RES149_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER4_NVIC_RES149_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER4_R_NVIC_PWM1GEN0_MASK ((uint32_t)0x00000040u)
#define NVIC_ICER4_R_NVIC_PWM1GEN0_BIT  (6)
#define NVIC_ICER4_R_NVIC_PWM1GEN0_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER4_R_NVIC_PWM1GEN0_EN   ((uint32_t)0x00000040u)

#define NVIC_ICER4_NVIC_PWM1GEN0_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER4_NVIC_PWM1GEN0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER4_NVIC_PWM1GEN0_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER4_R_NVIC_PWM1GEN1_MASK ((uint32_t)0x00000080u)
#define NVIC_ICER4_R_NVIC_PWM1GEN1_BIT  (7)
#define NVIC_ICER4_R_NVIC_PWM1GEN1_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER4_R_NVIC_PWM1GEN1_EN   ((uint32_t)0x00000080u)

#define NVIC_ICER4_NVIC_PWM1GEN1_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER4_NVIC_PWM1GEN1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER4_NVIC_PWM1GEN1_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER4_R_NVIC_PWM1GEN2_MASK ((uint32_t)0x00000100u)
#define NVIC_ICER4_R_NVIC_PWM1GEN2_BIT  (8)
#define NVIC_ICER4_R_NVIC_PWM1GEN2_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER4_R_NVIC_PWM1GEN2_EN   ((uint32_t)0x00000100u)

#define NVIC_ICER4_NVIC_PWM1GEN2_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER4_NVIC_PWM1GEN2_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER4_NVIC_PWM1GEN2_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER4_R_NVIC_PWM1GEN3_MASK ((uint32_t)0x00000200u)
#define NVIC_ICER4_R_NVIC_PWM1GEN3_BIT  (9)
#define NVIC_ICER4_R_NVIC_PWM1GEN3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER4_R_NVIC_PWM1GEN3_EN   ((uint32_t)0x00000200u)

#define NVIC_ICER4_NVIC_PWM1GEN3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER4_NVIC_PWM1GEN3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER4_NVIC_PWM1GEN3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICER4_R_NVIC_PWM1FAULT_MASK ((uint32_t)0x00000400u)
#define NVIC_ICER4_R_NVIC_PWM1FAULT_BIT  (10)
#define NVIC_ICER4_R_NVIC_PWM1FAULT_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICER4_R_NVIC_PWM1FAULT_EN   ((uint32_t)0x00000400u)

#define NVIC_ICER4_NVIC_PWM1FAULT_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICER4_NVIC_PWM1FAULT_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICER4_NVIC_PWM1FAULT_EN     ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* ISPR4 ***********************************************/
/********************************************************************************************/

#define NVIC_ISPR4                (((NVIC4_TypeDef*)(NVIC_BASE+NVIC_ISPR4_OFFSET)))
#define NVIC_ISPR4_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ISPR4_OFFSET)))

/*----------*/
#define NVIC_ISPR4_R_NVIC_RES144_MASK ((uint32_t)0x00000001u)
#define NVIC_ISPR4_R_NVIC_RES144_BIT  (0)
#define NVIC_ISPR4_R_NVIC_RES144_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR4_R_NVIC_RES144_EN   ((uint32_t)0x00000001u)

#define NVIC_ISPR4_NVIC_RES144_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR4_NVIC_RES144_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR4_NVIC_RES144_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR4_R_NVIC_RES145_MASK ((uint32_t)0x00000002u)
#define NVIC_ISPR4_R_NVIC_RES145_BIT  (1)
#define NVIC_ISPR4_R_NVIC_RES145_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR4_R_NVIC_RES145_EN   ((uint32_t)0x00000002u)

#define NVIC_ISPR4_NVIC_RES145_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR4_NVIC_RES145_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR4_NVIC_RES145_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR4_R_NVIC_RES146_MASK ((uint32_t)0x00000004u)
#define NVIC_ISPR4_R_NVIC_RES146_BIT  (2)
#define NVIC_ISPR4_R_NVIC_RES146_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR4_R_NVIC_RES146_EN   ((uint32_t)0x00000004u)

#define NVIC_ISPR4_NVIC_RES146_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR4_NVIC_RES146_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR4_NVIC_RES146_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR4_R_NVIC_RES147_MASK ((uint32_t)0x00000008u)
#define NVIC_ISPR4_R_NVIC_RES147_BIT  (3)
#define NVIC_ISPR4_R_NVIC_RES147_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR4_R_NVIC_RES147_EN   ((uint32_t)0x00000008u)

#define NVIC_ISPR4_NVIC_RES147_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR4_NVIC_RES147_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR4_NVIC_RES147_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR4_R_NVIC_RES148_MASK ((uint32_t)0x00000010u)
#define NVIC_ISPR4_R_NVIC_RES148_BIT  (4)
#define NVIC_ISPR4_R_NVIC_RES148_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR4_R_NVIC_RES148_EN   ((uint32_t)0x00000010u)

#define NVIC_ISPR4_NVIC_RES148_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR4_NVIC_RES148_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR4_NVIC_RES148_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR4_R_NVIC_RES149_MASK ((uint32_t)0x00000020u)
#define NVIC_ISPR4_R_NVIC_RES149_BIT  (5)
#define NVIC_ISPR4_R_NVIC_RES149_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR4_R_NVIC_RES149_EN   ((uint32_t)0x00000020u)

#define NVIC_ISPR4_NVIC_RES149_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR4_NVIC_RES149_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR4_NVIC_RES149_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR4_R_NVIC_PWM1GEN0_MASK ((uint32_t)0x00000040u)
#define NVIC_ISPR4_R_NVIC_PWM1GEN0_BIT  (6)
#define NVIC_ISPR4_R_NVIC_PWM1GEN0_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR4_R_NVIC_PWM1GEN0_EN   ((uint32_t)0x00000040u)

#define NVIC_ISPR4_NVIC_PWM1GEN0_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR4_NVIC_PWM1GEN0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR4_NVIC_PWM1GEN0_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR4_R_NVIC_PWM1GEN1_MASK ((uint32_t)0x00000080u)
#define NVIC_ISPR4_R_NVIC_PWM1GEN1_BIT  (7)
#define NVIC_ISPR4_R_NVIC_PWM1GEN1_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR4_R_NVIC_PWM1GEN1_EN   ((uint32_t)0x00000080u)

#define NVIC_ISPR4_NVIC_PWM1GEN1_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR4_NVIC_PWM1GEN1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR4_NVIC_PWM1GEN1_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR4_R_NVIC_PWM1GEN2_MASK ((uint32_t)0x00000100u)
#define NVIC_ISPR4_R_NVIC_PWM1GEN2_BIT  (8)
#define NVIC_ISPR4_R_NVIC_PWM1GEN2_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR4_R_NVIC_PWM1GEN2_EN   ((uint32_t)0x00000100u)

#define NVIC_ISPR4_NVIC_PWM1GEN2_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR4_NVIC_PWM1GEN2_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR4_NVIC_PWM1GEN2_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR4_R_NVIC_PWM1GEN3_MASK ((uint32_t)0x00000200u)
#define NVIC_ISPR4_R_NVIC_PWM1GEN3_BIT  (9)
#define NVIC_ISPR4_R_NVIC_PWM1GEN3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR4_R_NVIC_PWM1GEN3_EN   ((uint32_t)0x00000200u)

#define NVIC_ISPR4_NVIC_PWM1GEN3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR4_NVIC_PWM1GEN3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR4_NVIC_PWM1GEN3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ISPR4_R_NVIC_PWM1FAULT_MASK ((uint32_t)0x00000400u)
#define NVIC_ISPR4_R_NVIC_PWM1FAULT_BIT  (10)
#define NVIC_ISPR4_R_NVIC_PWM1FAULT_DIS  ((uint32_t)0x00000000u)
#define NVIC_ISPR4_R_NVIC_PWM1FAULT_EN   ((uint32_t)0x00000400u)

#define NVIC_ISPR4_NVIC_PWM1FAULT_MASK   ((uint32_t)0x00000001u)
#define NVIC_ISPR4_NVIC_PWM1FAULT_DIS    ((uint32_t)0x00000000u)
#define NVIC_ISPR4_NVIC_PWM1FAULT_EN     ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* ICPR4 ***********************************************/
/********************************************************************************************/

#define NVIC_ICPR4                (((NVIC4_TypeDef*)(NVIC_BASE+NVIC_ICPR4_OFFSET)))
#define NVIC_ICPR4_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_ICPR4_OFFSET)))

/*----------*/
#define NVIC_ICPR4_R_NVIC_RES144_MASK ((uint32_t)0x00000001u)
#define NVIC_ICPR4_R_NVIC_RES144_BIT  (0)
#define NVIC_ICPR4_R_NVIC_RES144_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR4_R_NVIC_RES144_EN   ((uint32_t)0x00000001u)

#define NVIC_ICPR4_NVIC_RES144_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR4_NVIC_RES144_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR4_NVIC_RES144_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR4_R_NVIC_RES145_MASK ((uint32_t)0x00000002u)
#define NVIC_ICPR4_R_NVIC_RES145_BIT  (1)
#define NVIC_ICPR4_R_NVIC_RES145_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR4_R_NVIC_RES145_EN   ((uint32_t)0x00000002u)

#define NVIC_ICPR4_NVIC_RES145_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR4_NVIC_RES145_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR4_NVIC_RES145_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR4_R_NVIC_RES146_MASK ((uint32_t)0x00000004u)
#define NVIC_ICPR4_R_NVIC_RES146_BIT  (2)
#define NVIC_ICPR4_R_NVIC_RES146_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR4_R_NVIC_RES146_EN   ((uint32_t)0x00000004u)

#define NVIC_ICPR4_NVIC_RES146_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR4_NVIC_RES146_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR4_NVIC_RES146_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR4_R_NVIC_RES147_MASK ((uint32_t)0x00000008u)
#define NVIC_ICPR4_R_NVIC_RES147_BIT  (3)
#define NVIC_ICPR4_R_NVIC_RES147_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR4_R_NVIC_RES147_EN   ((uint32_t)0x00000008u)

#define NVIC_ICPR4_NVIC_RES147_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR4_NVIC_RES147_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR4_NVIC_RES147_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR4_R_NVIC_RES148_MASK ((uint32_t)0x00000010u)
#define NVIC_ICPR4_R_NVIC_RES148_BIT  (4)
#define NVIC_ICPR4_R_NVIC_RES148_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR4_R_NVIC_RES148_EN   ((uint32_t)0x00000010u)

#define NVIC_ICPR4_NVIC_RES148_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR4_NVIC_RES148_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR4_NVIC_RES148_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR4_R_NVIC_RES149_MASK ((uint32_t)0x00000020u)
#define NVIC_ICPR4_R_NVIC_RES149_BIT  (5)
#define NVIC_ICPR4_R_NVIC_RES149_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR4_R_NVIC_RES149_EN   ((uint32_t)0x00000020u)

#define NVIC_ICPR4_NVIC_RES149_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR4_NVIC_RES149_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR4_NVIC_RES149_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR4_R_NVIC_PWM1GEN0_MASK ((uint32_t)0x00000040u)
#define NVIC_ICPR4_R_NVIC_PWM1GEN0_BIT  (6)
#define NVIC_ICPR4_R_NVIC_PWM1GEN0_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR4_R_NVIC_PWM1GEN0_EN   ((uint32_t)0x00000040u)

#define NVIC_ICPR4_NVIC_PWM1GEN0_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR4_NVIC_PWM1GEN0_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR4_NVIC_PWM1GEN0_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR4_R_NVIC_PWM1GEN1_MASK ((uint32_t)0x00000080u)
#define NVIC_ICPR4_R_NVIC_PWM1GEN1_BIT  (7)
#define NVIC_ICPR4_R_NVIC_PWM1GEN1_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR4_R_NVIC_PWM1GEN1_EN   ((uint32_t)0x00000080u)

#define NVIC_ICPR4_NVIC_PWM1GEN1_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR4_NVIC_PWM1GEN1_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR4_NVIC_PWM1GEN1_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR4_R_NVIC_PWM1GEN2_MASK ((uint32_t)0x00000100u)
#define NVIC_ICPR4_R_NVIC_PWM1GEN2_BIT  (8)
#define NVIC_ICPR4_R_NVIC_PWM1GEN2_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR4_R_NVIC_PWM1GEN2_EN   ((uint32_t)0x00000100u)

#define NVIC_ICPR4_NVIC_PWM1GEN2_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR4_NVIC_PWM1GEN2_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR4_NVIC_PWM1GEN2_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR4_R_NVIC_PWM1GEN3_MASK ((uint32_t)0x00000200u)
#define NVIC_ICPR4_R_NVIC_PWM1GEN3_BIT  (9)
#define NVIC_ICPR4_R_NVIC_PWM1GEN3_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR4_R_NVIC_PWM1GEN3_EN   ((uint32_t)0x00000200u)

#define NVIC_ICPR4_NVIC_PWM1GEN3_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR4_NVIC_PWM1GEN3_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR4_NVIC_PWM1GEN3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_ICPR4_R_NVIC_PWM1FAULT_MASK ((uint32_t)0x00000400u)
#define NVIC_ICPR4_R_NVIC_PWM1FAULT_BIT  (10)
#define NVIC_ICPR4_R_NVIC_PWM1FAULT_DIS  ((uint32_t)0x00000000u)
#define NVIC_ICPR4_R_NVIC_PWM1FAULT_EN   ((uint32_t)0x00000400u)

#define NVIC_ICPR4_NVIC_PWM1FAULT_MASK   ((uint32_t)0x00000001u)
#define NVIC_ICPR4_NVIC_PWM1FAULT_DIS    ((uint32_t)0x00000000u)
#define NVIC_ICPR4_NVIC_PWM1FAULT_EN     ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* IABR4 ***********************************************/
/********************************************************************************************/

#define NVIC_IABR4                (((NVIC4_TypeDef*)(NVIC_BASE+NVIC_IABR4_OFFSET)))
#define NVIC_IABR4_R              (*((volatile uint32_t *)(NVIC_BASE+NVIC_IABR4_OFFSET)))

/*----------*/
#define NVIC_IABR4_R_NVIC_RES144_MASK ((uint32_t)0x00000001u)
#define NVIC_IABR4_R_NVIC_RES144_BIT  (0)
#define NVIC_IABR4_R_NVIC_RES144_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR4_R_NVIC_RES144_EN   ((uint32_t)0x00000001u)

#define NVIC_IABR4_NVIC_RES144_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR4_NVIC_RES144_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR4_NVIC_RES144_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR4_R_NVIC_RES145_MASK ((uint32_t)0x00000002u)
#define NVIC_IABR4_R_NVIC_RES145_BIT  (1)
#define NVIC_IABR4_R_NVIC_RES145_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR4_R_NVIC_RES145_EN   ((uint32_t)0x00000002u)

#define NVIC_IABR4_NVIC_RES145_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR4_NVIC_RES145_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR4_NVIC_RES145_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR4_R_NVIC_RES146_MASK ((uint32_t)0x00000004u)
#define NVIC_IABR4_R_NVIC_RES146_BIT  (2)
#define NVIC_IABR4_R_NVIC_RES146_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR4_R_NVIC_RES146_EN   ((uint32_t)0x00000004u)

#define NVIC_IABR4_NVIC_RES146_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR4_NVIC_RES146_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR4_NVIC_RES146_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR4_R_NVIC_RES147_MASK ((uint32_t)0x00000008u)
#define NVIC_IABR4_R_NVIC_RES147_BIT  (3)
#define NVIC_IABR4_R_NVIC_RES147_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR4_R_NVIC_RES147_EN   ((uint32_t)0x00000008u)

#define NVIC_IABR4_NVIC_RES147_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR4_NVIC_RES147_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR4_NVIC_RES147_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR4_R_NVIC_RES148_MASK ((uint32_t)0x00000010u)
#define NVIC_IABR4_R_NVIC_RES148_BIT  (4)
#define NVIC_IABR4_R_NVIC_RES148_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR4_R_NVIC_RES148_EN   ((uint32_t)0x00000010u)

#define NVIC_IABR4_NVIC_RES148_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR4_NVIC_RES148_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR4_NVIC_RES148_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR4_R_NVIC_RES149_MASK ((uint32_t)0x00000020u)
#define NVIC_IABR4_R_NVIC_RES149_BIT  (5)
#define NVIC_IABR4_R_NVIC_RES149_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR4_R_NVIC_RES149_EN   ((uint32_t)0x00000020u)

#define NVIC_IABR4_NVIC_RES149_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR4_NVIC_RES149_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR4_NVIC_RES149_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR4_R_NVIC_PWM1GEN0_MASK ((uint32_t)0x00000040u)
#define NVIC_IABR4_R_NVIC_PWM1GEN0_BIT  (6)
#define NVIC_IABR4_R_NVIC_PWM1GEN0_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR4_R_NVIC_PWM1GEN0_EN   ((uint32_t)0x00000040u)

#define NVIC_IABR4_NVIC_PWM1GEN0_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR4_NVIC_PWM1GEN0_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR4_NVIC_PWM1GEN0_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR4_R_NVIC_PWM1GEN1_MASK ((uint32_t)0x00000080u)
#define NVIC_IABR4_R_NVIC_PWM1GEN1_BIT  (7)
#define NVIC_IABR4_R_NVIC_PWM1GEN1_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR4_R_NVIC_PWM1GEN1_EN   ((uint32_t)0x00000080u)

#define NVIC_IABR4_NVIC_PWM1GEN1_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR4_NVIC_PWM1GEN1_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR4_NVIC_PWM1GEN1_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR4_R_NVIC_PWM1GEN2_MASK ((uint32_t)0x00000100u)
#define NVIC_IABR4_R_NVIC_PWM1GEN2_BIT  (8)
#define NVIC_IABR4_R_NVIC_PWM1GEN2_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR4_R_NVIC_PWM1GEN2_EN   ((uint32_t)0x00000100u)

#define NVIC_IABR4_NVIC_PWM1GEN2_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR4_NVIC_PWM1GEN2_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR4_NVIC_PWM1GEN2_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR4_R_NVIC_PWM1GEN3_MASK ((uint32_t)0x00000200u)
#define NVIC_IABR4_R_NVIC_PWM1GEN3_BIT  (9)
#define NVIC_IABR4_R_NVIC_PWM1GEN3_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR4_R_NVIC_PWM1GEN3_EN   ((uint32_t)0x00000200u)

#define NVIC_IABR4_NVIC_PWM1GEN3_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR4_NVIC_PWM1GEN3_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR4_NVIC_PWM1GEN3_EN     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define NVIC_IABR4_R_NVIC_PWM1FAULT_MASK ((uint32_t)0x00000400u)
#define NVIC_IABR4_R_NVIC_PWM1FAULT_BIT  (10)
#define NVIC_IABR4_R_NVIC_PWM1FAULT_DIS  ((uint32_t)0x00000000u)
#define NVIC_IABR4_R_NVIC_PWM1FAULT_EN   ((uint32_t)0x00000400u)

#define NVIC_IABR4_NVIC_PWM1FAULT_MASK   ((uint32_t)0x00000001u)
#define NVIC_IABR4_NVIC_PWM1FAULT_DIS    ((uint32_t)0x00000000u)
#define NVIC_IABR4_NVIC_PWM1FAULT_EN     ((uint32_t)0x00000001u)
/*----------*/


/********************************************************************************************/
/************************************* IPR ***********************************************/
/******************************************************************************************/


#define NVIC_IPRb            (((IPRb__TypeDef*)(NVIC_BASE+NVIC_IPR0_OFFSET)))
#define NVIC_IPRw            (((IPRw__TypeDef*)(NVIC_BASE+NVIC_IPR0_OFFSET)))


/********************************************************************************************/
/************************************* IPR0 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR0            (((IPR0_TypeDef*)(NVIC_BASE+NVIC_IPR0_OFFSET)))
#define NVIC_IPR0_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR0_OFFSET)))

/*----------*/
#define NVIC_IPR0_R_NVIC_GPIOA_MASK     ((uint32_t)0x000000E0u)
#define NVIC_IPR0_R_NVIC_GPIOA_BIT      (5)
#define NVIC_IPR0_R_NVIC_GPIOA_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR0_R_NVIC_GPIOA_IP1      ((uint32_t)0x00000020u)
#define NVIC_IPR0_R_NVIC_GPIOA_IP2      ((uint32_t)0x00000040u)
#define NVIC_IPR0_R_NVIC_GPIOA_IP3      ((uint32_t)0x00000060u)
#define NVIC_IPR0_R_NVIC_GPIOA_IP4      ((uint32_t)0x00000080u)
#define NVIC_IPR0_R_NVIC_GPIOA_IP5      ((uint32_t)0x000000A0u)
#define NVIC_IPR0_R_NVIC_GPIOA_IP6      ((uint32_t)0x000000C0u)
#define NVIC_IPR0_R_NVIC_GPIOA_IP7      ((uint32_t)0x000000E0u)

#define NVIC_IPR0_NVIC_GPIOA_MASK       ((uint32_t)0x00000007u)
#define NVIC_IPR0_NVIC_GPIOA_IP0        ((uint32_t)0x00000000u)
#define NVIC_IPR0_NVIC_GPIOA_IP1        ((uint32_t)0x00000001u)
#define NVIC_IPR0_NVIC_GPIOA_IP2        ((uint32_t)0x00000002u)
#define NVIC_IPR0_NVIC_GPIOA_IP3        ((uint32_t)0x00000003u)
#define NVIC_IPR0_NVIC_GPIOA_IP4        ((uint32_t)0x00000004u)
#define NVIC_IPR0_NVIC_GPIOA_IP5        ((uint32_t)0x00000005u)
#define NVIC_IPR0_NVIC_GPIOA_IP6        ((uint32_t)0x00000006u)
#define NVIC_IPR0_NVIC_GPIOA_IP7        ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR0_R_NVIC_GPIOB_MASK     ((uint32_t)0x0000E000u)
#define NVIC_IPR0_R_NVIC_GPIOB_BIT      (13)
#define NVIC_IPR0_R_NVIC_GPIOB_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR0_R_NVIC_GPIOB_IP1      ((uint32_t)0x00002000u)
#define NVIC_IPR0_R_NVIC_GPIOB_IP2      ((uint32_t)0x00004000u)
#define NVIC_IPR0_R_NVIC_GPIOB_IP3      ((uint32_t)0x00006000u)
#define NVIC_IPR0_R_NVIC_GPIOB_IP4      ((uint32_t)0x00008000u)
#define NVIC_IPR0_R_NVIC_GPIOB_IP5      ((uint32_t)0x0000A000u)
#define NVIC_IPR0_R_NVIC_GPIOB_IP6      ((uint32_t)0x0000C000u)
#define NVIC_IPR0_R_NVIC_GPIOB_IP7      ((uint32_t)0x0000E000u)

#define NVIC_IPR0_NVIC_GPIOB_MASK       ((uint32_t)0x00000007u)
#define NVIC_IPR0_NVIC_GPIOB_IP0        ((uint32_t)0x00000000u)
#define NVIC_IPR0_NVIC_GPIOB_IP1        ((uint32_t)0x00000001u)
#define NVIC_IPR0_NVIC_GPIOB_IP2        ((uint32_t)0x00000002u)
#define NVIC_IPR0_NVIC_GPIOB_IP3        ((uint32_t)0x00000003u)
#define NVIC_IPR0_NVIC_GPIOB_IP4        ((uint32_t)0x00000004u)
#define NVIC_IPR0_NVIC_GPIOB_IP5        ((uint32_t)0x00000005u)
#define NVIC_IPR0_NVIC_GPIOB_IP6        ((uint32_t)0x00000006u)
#define NVIC_IPR0_NVIC_GPIOB_IP7        ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR0_R_NVIC_GPIOC_MASK    	((uint32_t)0x00E00000u)
#define NVIC_IPR0_R_NVIC_GPIOC_BIT     	(21)
#define NVIC_IPR0_R_NVIC_GPIOC_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR0_R_NVIC_GPIOC_IP1      ((uint32_t)0x00200000u)
#define NVIC_IPR0_R_NVIC_GPIOC_IP2      ((uint32_t)0x00400000u)
#define NVIC_IPR0_R_NVIC_GPIOC_IP3      ((uint32_t)0x00600000u)
#define NVIC_IPR0_R_NVIC_GPIOC_IP4      ((uint32_t)0x00800000u)
#define NVIC_IPR0_R_NVIC_GPIOC_IP5      ((uint32_t)0x00A00000u)
#define NVIC_IPR0_R_NVIC_GPIOC_IP6      ((uint32_t)0x00C00000u)
#define NVIC_IPR0_R_NVIC_GPIOC_IP7      ((uint32_t)0x00E00000u)

#define NVIC_IPR0_NVIC_GPIOC_MASK      	((uint32_t)0x00000007u)
#define NVIC_IPR0_NVIC_GPIOC_IP0        ((uint32_t)0x00000000u)
#define NVIC_IPR0_NVIC_GPIOC_IP1        ((uint32_t)0x00000001u)
#define NVIC_IPR0_NVIC_GPIOC_IP2        ((uint32_t)0x00000002u)
#define NVIC_IPR0_NVIC_GPIOC_IP3        ((uint32_t)0x00000003u)
#define NVIC_IPR0_NVIC_GPIOC_IP4        ((uint32_t)0x00000004u)
#define NVIC_IPR0_NVIC_GPIOC_IP5        ((uint32_t)0x00000005u)
#define NVIC_IPR0_NVIC_GPIOC_IP6        ((uint32_t)0x00000006u)
#define NVIC_IPR0_NVIC_GPIOC_IP7        ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR0_R_NVIC_GPIOD_MASK     ((uint32_t)0xF0000000u)
#define NVIC_IPR0_R_NVIC_GPIOD_BIT      (29)
#define NVIC_IPR0_R_NVIC_GPIOD_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR0_R_NVIC_GPIOD_IP1      ((uint32_t)0x10000000u)
#define NVIC_IPR0_R_NVIC_GPIOD_IP2      ((uint32_t)0x20000000u)
#define NVIC_IPR0_R_NVIC_GPIOD_IP3      ((uint32_t)0x30000000u)
#define NVIC_IPR0_R_NVIC_GPIOD_IP4      ((uint32_t)0x40000000u)
#define NVIC_IPR0_R_NVIC_GPIOD_IP5      ((uint32_t)0x50000000u)
#define NVIC_IPR0_R_NVIC_GPIOD_IP6      ((uint32_t)0x60000000u)
#define NVIC_IPR0_R_NVIC_GPIOD_IP7      ((uint32_t)0x70000000u)

#define NVIC_IPR0_NVIC_GPIOD_MASK       ((uint32_t)0x00000007u)
#define NVIC_IPR0_NVIC_GPIOD_IP0        ((uint32_t)0x00000000u)
#define NVIC_IPR0_NVIC_GPIOD_IP1        ((uint32_t)0x00000001u)
#define NVIC_IPR0_NVIC_GPIOD_IP2        ((uint32_t)0x00000002u)
#define NVIC_IPR0_NVIC_GPIOD_IP3        ((uint32_t)0x00000003u)
#define NVIC_IPR0_NVIC_GPIOD_IP4        ((uint32_t)0x00000004u)
#define NVIC_IPR0_NVIC_GPIOD_IP5        ((uint32_t)0x00000005u)
#define NVIC_IPR0_NVIC_GPIOD_IP6        ((uint32_t)0x00000006u)
#define NVIC_IPR0_NVIC_GPIOD_IP7        ((uint32_t)0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* IPR1 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR1            (((IPR1_TypeDef*)(NVIC_BASE+NVIC_IPR1_OFFSET)))
#define NVIC_IPR1_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR1_OFFSET)))

/*----------*/
#define NVIC_IPR1_R_NVIC_GPIOE_MASK     ((uint32_t)0x000000E0u)
#define NVIC_IPR1_R_NVIC_GPIOE_BIT      (5)
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
#define NVIC_IPR1_R_NVIC_UART0_BIT      (13)
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
#define NVIC_IPR1_R_NVIC_UART1_BIT      (21)
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
#define NVIC_IPR1_R_NVIC_SSI0_BIT       (29)
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


/********************************************************************************************/
/************************************* IPR2 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR2            (((IPR2_TypeDef*)(NVIC_BASE+NVIC_IPR2_OFFSET)))
#define NVIC_IPR2_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR2_OFFSET)))


/*----------*/
#define NVIC_IPR2_R_NVIC_I2C0_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR2_R_NVIC_I2C0_BIT       (5)
#define NVIC_IPR2_R_NVIC_I2C0_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR2_R_NVIC_I2C0_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR2_R_NVIC_I2C0_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR2_R_NVIC_I2C0_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR2_R_NVIC_I2C0_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR2_R_NVIC_I2C0_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR2_R_NVIC_I2C0_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR2_R_NVIC_I2C0_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR2_NVIC_I2C0_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR2_NVIC_I2C0_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR2_NVIC_I2C0_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR2_NVIC_I2C0_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR2_NVIC_I2C0_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR2_NVIC_I2C0_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR2_NVIC_I2C0_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR2_NVIC_I2C0_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR2_NVIC_I2C0_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR2_R_NVIC_PWM0FAULT_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_BIT   (13)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR2_R_NVIC_PWM0FAULT_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR2_NVIC_PWM0FAULT_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR2_NVIC_PWM0FAULT_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR2_R_NVIC_PWM0GEN0_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_BIT    (21)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN0_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR2_NVIC_PWM0GEN0_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR2_NVIC_PWM0GEN0_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR2_R_NVIC_PWM0GEN1_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_BIT    (29)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR2_R_NVIC_PWM0GEN1_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR2_NVIC_PWM0GEN1_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR2_NVIC_PWM0GEN1_IP7      ((uint32_t)0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* IPR3 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR3            (((IPR3_TypeDef*)(NVIC_BASE+NVIC_IPR3_OFFSET)))
#define NVIC_IPR3_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR3_OFFSET)))


/*----------*/
#define NVIC_IPR3_R_NVIC_PWM0GEN2_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_BIT       (5)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR3_R_NVIC_PWM0GEN2_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR3_NVIC_PWM0GEN2_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR3_NVIC_PWM0GEN2_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR3_R_NVIC_QEI0_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR3_R_NVIC_QEI0_BIT   (13)
#define NVIC_IPR3_R_NVIC_QEI0_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR3_R_NVIC_QEI0_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR3_R_NVIC_QEI0_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR3_R_NVIC_QEI0_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR3_R_NVIC_QEI0_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR3_R_NVIC_QEI0_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR3_R_NVIC_QEI0_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR3_R_NVIC_QEI0_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR3_NVIC_QEI0_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR3_NVIC_QEI0_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR3_NVIC_QEI0_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR3_NVIC_QEI0_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR3_NVIC_QEI0_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR3_NVIC_QEI0_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR3_NVIC_QEI0_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR3_NVIC_QEI0_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR3_NVIC_QEI0_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_BIT    (21)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ0_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR3_NVIC_ADC0SEQ0_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR3_NVIC_ADC0SEQ0_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_BIT    (29)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR3_R_NVIC_ADC0SEQ1_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR3_NVIC_ADC0SEQ1_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR3_NVIC_ADC0SEQ1_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR4 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR4            (((IPR4_TypeDef*)(NVIC_BASE+NVIC_IPR4_OFFSET)))
#define NVIC_IPR4_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR4_OFFSET)))


/*----------*/
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_BIT       (5)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ2_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR4_NVIC_ADC0SEQ2_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR4_NVIC_ADC0SEQ2_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_BIT   (13)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR4_R_NVIC_ADC0SEQ3_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR4_NVIC_ADC0SEQ3_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR4_NVIC_ADC0SEQ3_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR4_R_NVIC_WDT01_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR4_R_NVIC_WDT01_BIT    (21)
#define NVIC_IPR4_R_NVIC_WDT01_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR4_R_NVIC_WDT01_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR4_R_NVIC_WDT01_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR4_R_NVIC_WDT01_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR4_R_NVIC_WDT01_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR4_R_NVIC_WDT01_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR4_R_NVIC_WDT01_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR4_R_NVIC_WDT01_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR4_NVIC_WDT01_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR4_NVIC_WDT01_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR4_NVIC_WDT01_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR4_NVIC_WDT01_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR4_NVIC_WDT01_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR4_NVIC_WDT01_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR4_NVIC_WDT01_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR4_NVIC_WDT01_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR4_NVIC_WDT01_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR4_R_NVIC_TIMER0A_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR4_R_NVIC_TIMER0A_BIT    (29)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR4_R_NVIC_TIMER0A_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR4_NVIC_TIMER0A_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR4_NVIC_TIMER0A_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR4_NVIC_TIMER0A_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR4_NVIC_TIMER0A_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR4_NVIC_TIMER0A_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR4_NVIC_TIMER0A_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR4_NVIC_TIMER0A_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR4_NVIC_TIMER0A_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR4_NVIC_TIMER0A_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR5 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR5            (((IPR5_TypeDef*)(NVIC_BASE+NVIC_IPR5_OFFSET)))
#define NVIC_IPR5_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR5_OFFSET)))

/*----------*/
#define NVIC_IPR5_R_NVIC_TIMER0B_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR5_R_NVIC_TIMER0B_BIT       (5)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR5_R_NVIC_TIMER0B_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR5_NVIC_TIMER0B_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR5_NVIC_TIMER0B_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR5_NVIC_TIMER0B_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR5_NVIC_TIMER0B_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR5_NVIC_TIMER0B_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR5_NVIC_TIMER0B_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR5_NVIC_TIMER0B_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR5_NVIC_TIMER0B_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR5_NVIC_TIMER0B_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR5_R_NVIC_TIMER1A_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR5_R_NVIC_TIMER1A_BIT   (13)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR5_R_NVIC_TIMER1A_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR5_NVIC_TIMER1A_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR5_NVIC_TIMER1A_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR5_NVIC_TIMER1A_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR5_NVIC_TIMER1A_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR5_NVIC_TIMER1A_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR5_NVIC_TIMER1A_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR5_NVIC_TIMER1A_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR5_NVIC_TIMER1A_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR5_NVIC_TIMER1A_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR5_R_NVIC_TIMER1B_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR5_R_NVIC_TIMER1B_BIT    (21)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR5_R_NVIC_TIMER1B_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR5_NVIC_TIMER1B_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR5_NVIC_TIMER1B_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR5_NVIC_TIMER1B_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR5_NVIC_TIMER1B_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR5_NVIC_TIMER1B_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR5_NVIC_TIMER1B_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR5_NVIC_TIMER1B_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR5_NVIC_TIMER1B_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR5_NVIC_TIMER1B_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR5_R_NVIC_TIMER2A_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR5_R_NVIC_TIMER2A_BIT    (29)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR5_R_NVIC_TIMER2A_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR5_NVIC_TIMER2A_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR5_NVIC_TIMER2A_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR5_NVIC_TIMER2A_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR5_NVIC_TIMER2A_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR5_NVIC_TIMER2A_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR5_NVIC_TIMER2A_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR5_NVIC_TIMER2A_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR5_NVIC_TIMER2A_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR5_NVIC_TIMER2A_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR6 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR6            (((IPR6_TypeDef*)(NVIC_BASE+NVIC_IPR6_OFFSET)))
#define NVIC_IPR6_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR6_OFFSET)))

/*----------*/
#define NVIC_IPR6_R_NVIC_TIMER2B_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR6_R_NVIC_TIMER2B_BIT       (5)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR6_R_NVIC_TIMER2B_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR6_NVIC_TIMER2B_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR6_NVIC_TIMER2B_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR6_NVIC_TIMER2B_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR6_NVIC_TIMER2B_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR6_NVIC_TIMER2B_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR6_NVIC_TIMER2B_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR6_NVIC_TIMER2B_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR6_NVIC_TIMER2B_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR6_NVIC_TIMER2B_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR6_R_NVIC_ACOMP0_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR6_R_NVIC_ACOMP0_BIT   (13)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR6_R_NVIC_ACOMP0_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR6_NVIC_ACOMP0_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR6_NVIC_ACOMP0_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR6_NVIC_ACOMP0_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR6_NVIC_ACOMP0_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR6_NVIC_ACOMP0_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR6_NVIC_ACOMP0_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR6_NVIC_ACOMP0_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR6_NVIC_ACOMP0_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR6_NVIC_ACOMP0_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR6_R_NVIC_ACOMP1_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR6_R_NVIC_ACOMP1_BIT    (21)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR6_R_NVIC_ACOMP1_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR6_NVIC_ACOMP1_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR6_NVIC_ACOMP1_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR6_NVIC_ACOMP1_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR6_NVIC_ACOMP1_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR6_NVIC_ACOMP1_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR6_NVIC_ACOMP1_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR6_NVIC_ACOMP1_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR6_NVIC_ACOMP1_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR6_NVIC_ACOMP1_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR6_R_NVIC_RES43_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR6_R_NVIC_RES43_BIT    (29)
#define NVIC_IPR6_R_NVIC_RES43_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR6_R_NVIC_RES43_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR6_R_NVIC_RES43_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR6_R_NVIC_RES43_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR6_R_NVIC_RES43_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR6_R_NVIC_RES43_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR6_R_NVIC_RES43_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR6_R_NVIC_RES43_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR6_NVIC_RES43_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR6_NVIC_RES43_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR6_NVIC_RES43_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR6_NVIC_RES43_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR6_NVIC_RES43_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR6_NVIC_RES43_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR6_NVIC_RES43_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR6_NVIC_RES43_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR6_NVIC_RES43_IP7      ((uint32_t)0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* IPR7 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR7            (((IPR7_TypeDef*)(NVIC_BASE+NVIC_IPR7_OFFSET)))
#define NVIC_IPR7_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR7_OFFSET)))

/*----------*/
#define NVIC_IPR7_R_NVIC_SYSCTL_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR7_R_NVIC_SYSCTL_BIT       (5)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR7_NVIC_SYSCTL_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR7_NVIC_SYSCTL_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR7_NVIC_SYSCTL_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR7_NVIC_SYSCTL_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR7_NVIC_SYSCTL_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR7_NVIC_SYSCTL_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR7_NVIC_SYSCTL_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR7_NVIC_SYSCTL_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR7_NVIC_SYSCTL_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR7_R_NVIC_FLASH_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR7_R_NVIC_FLASH_BIT   (13)
#define NVIC_IPR7_R_NVIC_FLASH_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR7_R_NVIC_FLASH_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR7_R_NVIC_FLASH_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR7_R_NVIC_FLASH_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR7_R_NVIC_FLASH_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR7_R_NVIC_FLASH_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR7_R_NVIC_FLASH_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR7_R_NVIC_FLASH_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR7_NVIC_FLASH_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR7_NVIC_FLASH_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR7_NVIC_FLASH_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR7_NVIC_FLASH_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR7_NVIC_FLASH_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR7_NVIC_FLASH_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR7_NVIC_FLASH_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR7_NVIC_FLASH_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR7_NVIC_FLASH_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR7_R_NVIC_GPIOF_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR7_R_NVIC_GPIOF_BIT    (21)
#define NVIC_IPR7_R_NVIC_GPIOF_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR7_R_NVIC_GPIOF_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR7_R_NVIC_GPIOF_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR7_R_NVIC_GPIOF_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR7_R_NVIC_GPIOF_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR7_R_NVIC_GPIOF_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR7_R_NVIC_GPIOF_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR7_R_NVIC_GPIOF_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR7_NVIC_GPIOF_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR7_NVIC_GPIOF_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR7_NVIC_GPIOF_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR7_NVIC_GPIOF_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR7_NVIC_GPIOF_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR7_NVIC_GPIOF_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR7_NVIC_GPIOF_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR7_NVIC_GPIOF_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR7_NVIC_GPIOF_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR7_R_NVIC_RES47_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR7_R_NVIC_RES47_BIT    (29)
#define NVIC_IPR7_R_NVIC_RES47_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR7_R_NVIC_RES47_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR7_R_NVIC_RES47_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR7_R_NVIC_RES47_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR7_R_NVIC_RES47_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR7_R_NVIC_RES47_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR7_R_NVIC_RES47_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR7_R_NVIC_RES47_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR7_NVIC_RES47_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR7_NVIC_RES47_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR7_NVIC_RES47_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR7_NVIC_RES47_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR7_NVIC_RES47_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR7_NVIC_RES47_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR7_NVIC_RES47_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR7_NVIC_RES47_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR7_NVIC_RES47_IP7      ((uint32_t)0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* IPR8 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR8            (((IPR8_TypeDef*)(NVIC_BASE+NVIC_IPR8_OFFSET)))
#define NVIC_IPR8_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR8_OFFSET)))

/*----------*/
#define NVIC_IPR8_R_NVIC_RES48_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR8_R_NVIC_RES48_BIT       (5)
#define NVIC_IPR8_R_NVIC_RES48_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR8_R_NVIC_RES48_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR8_R_NVIC_RES48_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR8_R_NVIC_RES48_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR8_R_NVIC_RES48_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR8_R_NVIC_RES48_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR8_R_NVIC_RES48_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR8_R_NVIC_RES48_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR8_NVIC_RES48_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR8_NVIC_RES48_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR8_NVIC_RES48_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR8_NVIC_RES48_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR8_NVIC_RES48_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR8_NVIC_RES48_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR8_NVIC_RES48_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR8_NVIC_RES48_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR8_NVIC_RES48_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR8_R_NVIC_UART2_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR8_R_NVIC_UART2_BIT   (13)
#define NVIC_IPR8_R_NVIC_UART2_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR8_R_NVIC_UART2_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR8_R_NVIC_UART2_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR8_R_NVIC_UART2_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR8_R_NVIC_UART2_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR8_R_NVIC_UART2_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR8_R_NVIC_UART2_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR8_R_NVIC_UART2_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR8_NVIC_UART2_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR8_NVIC_UART2_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR8_NVIC_UART2_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR8_NVIC_UART2_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR8_NVIC_UART2_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR8_NVIC_UART2_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR8_NVIC_UART2_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR8_NVIC_UART2_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR8_NVIC_UART2_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR8_R_NVIC_SSI1_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR8_R_NVIC_SSI1_BIT    (21)
#define NVIC_IPR8_R_NVIC_SSI1_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR8_R_NVIC_SSI1_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR8_R_NVIC_SSI1_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR8_R_NVIC_SSI1_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR8_R_NVIC_SSI1_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR8_R_NVIC_SSI1_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR8_R_NVIC_SSI1_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR8_R_NVIC_SSI1_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR8_NVIC_SSI1_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR8_NVIC_SSI1_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR8_NVIC_SSI1_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR8_NVIC_SSI1_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR8_NVIC_SSI1_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR8_NVIC_SSI1_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR8_NVIC_SSI1_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR8_NVIC_SSI1_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR8_NVIC_SSI1_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR8_R_NVIC_TIMER3A_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR8_R_NVIC_TIMER3A_BIT    (29)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR8_NVIC_TIMER3A_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR8_NVIC_TIMER3A_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR8_NVIC_TIMER3A_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR8_NVIC_TIMER3A_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR8_NVIC_TIMER3A_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR8_NVIC_TIMER3A_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR8_NVIC_TIMER3A_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR8_NVIC_TIMER3A_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR8_NVIC_TIMER3A_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR9 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR9            (((IPR9_TypeDef*)(NVIC_BASE+NVIC_IPR9_OFFSET)))
#define NVIC_IPR9_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR9_OFFSET)))

/*----------*/
#define NVIC_IPR9_R_NVIC_TIMER3B_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR9_R_NVIC_TIMER3B_BIT       (5)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR9_R_NVIC_TIMER3B_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR9_NVIC_TIMER3B_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR9_NVIC_TIMER3B_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR9_NVIC_TIMER3B_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR9_NVIC_TIMER3B_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR9_NVIC_TIMER3B_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR9_NVIC_TIMER3B_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR9_NVIC_TIMER3B_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR9_NVIC_TIMER3B_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR9_NVIC_TIMER3B_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR9_R_NVIC_I2C1_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR9_R_NVIC_I2C1_BIT   (13)
#define NVIC_IPR9_R_NVIC_I2C1_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR9_R_NVIC_I2C1_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR9_R_NVIC_I2C1_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR9_R_NVIC_I2C1_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR9_R_NVIC_I2C1_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR9_R_NVIC_I2C1_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR9_R_NVIC_I2C1_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR9_R_NVIC_I2C1_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR9_NVIC_I2C1_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR9_NVIC_I2C1_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR9_NVIC_I2C1_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR9_NVIC_I2C1_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR9_NVIC_I2C1_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR9_NVIC_I2C1_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR9_NVIC_I2C1_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR9_NVIC_I2C1_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR9_NVIC_I2C1_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR9_R_NVIC_QEI1_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR9_R_NVIC_QEI1_BIT    (21)
#define NVIC_IPR9_R_NVIC_QEI1_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR9_R_NVIC_QEI1_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR9_R_NVIC_QEI1_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR9_R_NVIC_QEI1_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR9_R_NVIC_QEI1_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR9_R_NVIC_QEI1_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR9_R_NVIC_QEI1_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR9_R_NVIC_QEI1_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR9_NVIC_QEI1_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR9_NVIC_QEI1_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR9_NVIC_QEI1_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR9_NVIC_QEI1_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR9_NVIC_QEI1_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR9_NVIC_QEI1_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR9_NVIC_QEI1_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR9_NVIC_QEI1_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR9_NVIC_QEI1_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR9_R_NVIC_CAN0_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR9_R_NVIC_CAN0_BIT    (29)
#define NVIC_IPR9_R_NVIC_CAN0_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR9_R_NVIC_CAN0_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR9_R_NVIC_CAN0_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR9_R_NVIC_CAN0_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR9_R_NVIC_CAN0_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR9_R_NVIC_CAN0_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR9_R_NVIC_CAN0_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR9_R_NVIC_CAN0_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR9_NVIC_CAN0_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR9_NVIC_CAN0_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR9_NVIC_CAN0_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR9_NVIC_CAN0_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR9_NVIC_CAN0_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR9_NVIC_CAN0_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR9_NVIC_CAN0_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR9_NVIC_CAN0_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR9_NVIC_CAN0_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR10 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR10            (((IPR10_TypeDef*)(NVIC_BASE+NVIC_IPR10_OFFSET)))
#define NVIC_IPR10_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR10_OFFSET)))

/*----------*/
#define NVIC_IPR10_R_NVIC_CAN1_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR10_R_NVIC_CAN1_BIT       (5)
#define NVIC_IPR10_R_NVIC_CAN1_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR10_R_NVIC_CAN1_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR10_R_NVIC_CAN1_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR10_R_NVIC_CAN1_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR10_R_NVIC_CAN1_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR10_R_NVIC_CAN1_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR10_R_NVIC_CAN1_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR10_R_NVIC_CAN1_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR10_NVIC_CAN1_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR10_NVIC_CAN1_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR10_NVIC_CAN1_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR10_NVIC_CAN1_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR10_NVIC_CAN1_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR10_NVIC_CAN1_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR10_NVIC_CAN1_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR10_NVIC_CAN1_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR10_NVIC_CAN1_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR10_R_NVIC_RES57_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR10_R_NVIC_RES57_BIT   (13)
#define NVIC_IPR10_R_NVIC_RES57_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR10_R_NVIC_RES57_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR10_R_NVIC_RES57_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR10_R_NVIC_RES57_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR10_R_NVIC_RES57_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR10_R_NVIC_RES57_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR10_R_NVIC_RES57_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR10_R_NVIC_RES57_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR10_NVIC_RES57_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR10_NVIC_RES57_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR10_NVIC_RES57_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR10_NVIC_RES57_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR10_NVIC_RES57_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR10_NVIC_RES57_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR10_NVIC_RES57_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR10_NVIC_RES57_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR10_NVIC_RES57_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR10_R_NVIC_RES58_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR10_R_NVIC_RES58_BIT    (21)
#define NVIC_IPR10_R_NVIC_RES58_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR10_R_NVIC_RES58_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR10_R_NVIC_RES58_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR10_R_NVIC_RES58_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR10_R_NVIC_RES58_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR10_R_NVIC_RES58_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR10_R_NVIC_RES58_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR10_R_NVIC_RES58_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR10_NVIC_RES58_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR10_NVIC_RES58_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR10_NVIC_RES58_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR10_NVIC_RES58_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR10_NVIC_RES58_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR10_NVIC_RES58_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR10_NVIC_RES58_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR10_NVIC_RES58_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR10_NVIC_RES58_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR10_R_NVIC_HIB_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR10_R_NVIC_HIB_BIT    (29)
#define NVIC_IPR10_R_NVIC_HIB_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR10_R_NVIC_HIB_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR10_R_NVIC_HIB_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR10_R_NVIC_HIB_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR10_R_NVIC_HIB_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR10_R_NVIC_HIB_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR10_R_NVIC_HIB_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR10_R_NVIC_HIB_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR10_NVIC_HIB_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR10_NVIC_HIB_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR10_NVIC_HIB_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR10_NVIC_HIB_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR10_NVIC_HIB_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR10_NVIC_HIB_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR10_NVIC_HIB_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR10_NVIC_HIB_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR10_NVIC_HIB_IP7      ((uint32_t)0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* IPR11 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR11            (((IPR11_TypeDef*)(NVIC_BASE+NVIC_IPR11_OFFSET)))
#define NVIC_IPR11_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR11_OFFSET)))

/*----------*/
#define NVIC_IPR11_R_NVIC_USB_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR11_R_NVIC_USB_BIT       (5)
#define NVIC_IPR11_R_NVIC_USB_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR11_R_NVIC_USB_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR11_R_NVIC_USB_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR11_R_NVIC_USB_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR11_R_NVIC_USB_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR11_R_NVIC_USB_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR11_R_NVIC_USB_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR11_R_NVIC_USB_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR11_NVIC_USB_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR11_NVIC_USB_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR11_NVIC_USB_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR11_NVIC_USB_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR11_NVIC_USB_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR11_NVIC_USB_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR11_NVIC_USB_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR11_NVIC_USB_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR11_NVIC_USB_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR11_R_NVIC_PWM0GEN3_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR11_R_NVIC_PWM0GEN3_BIT   (13)
#define NVIC_IPR11_R_NVIC_PWM0GEN3_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR11_R_NVIC_PWM0GEN3_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR11_R_NVIC_PWM0GEN3_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR11_R_NVIC_PWM0GEN3_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR11_R_NVIC_PWM0GEN3_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR11_R_NVIC_PWM0GEN3_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR11_R_NVIC_PWM0GEN3_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR11_R_NVIC_PWM0GEN3_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR11_NVIC_PWM0GEN3_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR11_NVIC_PWM0GEN3_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR11_NVIC_PWM0GEN3_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR11_NVIC_PWM0GEN3_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR11_NVIC_PWM0GEN3_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR11_NVIC_PWM0GEN3_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR11_NVIC_PWM0GEN3_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR11_NVIC_PWM0GEN3_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR11_NVIC_PWM0GEN3_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR11_R_NVIC_UDMASOFT_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR11_R_NVIC_UDMASOFT_BIT    (21)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR11_R_NVIC_UDMASOFT_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR11_NVIC_UDMASOFT_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR11_NVIC_UDMASOFT_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR11_NVIC_UDMASOFT_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR11_NVIC_UDMASOFT_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR11_NVIC_UDMASOFT_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR11_NVIC_UDMASOFT_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR11_NVIC_UDMASOFT_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR11_NVIC_UDMASOFT_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR11_NVIC_UDMASOFT_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR11_R_NVIC_UDMAERROR_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR11_R_NVIC_UDMAERROR_BIT    (29)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR11_R_NVIC_UDMAERROR_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR11_NVIC_UDMAERROR_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR11_NVIC_UDMAERROR_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR11_NVIC_UDMAERROR_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR11_NVIC_UDMAERROR_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR11_NVIC_UDMAERROR_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR11_NVIC_UDMAERROR_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR11_NVIC_UDMAERROR_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR11_NVIC_UDMAERROR_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR11_NVIC_UDMAERROR_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR12 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR12            (((IPR12_TypeDef*)(NVIC_BASE+NVIC_IPR12_OFFSET)))
#define NVIC_IPR12_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR12_OFFSET)))

/*----------*/
#define NVIC_IPR12_R_NVIC_ADC1SEQ0_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ0_BIT       (5)
#define NVIC_IPR12_R_NVIC_ADC1SEQ0_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ0_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ0_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ0_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ0_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ0_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ0_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ0_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR12_NVIC_ADC1SEQ0_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR12_NVIC_ADC1SEQ0_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR12_NVIC_ADC1SEQ0_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR12_NVIC_ADC1SEQ0_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR12_NVIC_ADC1SEQ0_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR12_NVIC_ADC1SEQ0_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR12_NVIC_ADC1SEQ0_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR12_NVIC_ADC1SEQ0_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR12_NVIC_ADC1SEQ0_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR12_R_NVIC_ADC1SEQ1_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ1_BIT   (13)
#define NVIC_IPR12_R_NVIC_ADC1SEQ1_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ1_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ1_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ1_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ1_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ1_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ1_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ1_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR12_NVIC_ADC1SEQ1_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR12_NVIC_ADC1SEQ1_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR12_NVIC_ADC1SEQ1_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR12_NVIC_ADC1SEQ1_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR12_NVIC_ADC1SEQ1_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR12_NVIC_ADC1SEQ1_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR12_NVIC_ADC1SEQ1_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR12_NVIC_ADC1SEQ1_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR12_NVIC_ADC1SEQ1_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_BIT    (21)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ2_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR12_NVIC_ADC1SEQ2_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR12_NVIC_ADC1SEQ2_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_BIT    (29)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR12_R_NVIC_ADC1SEQ3_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR12_NVIC_ADC1SEQ3_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR12_NVIC_ADC1SEQ3_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR13 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR13            (((IPR13_TypeDef*)(NVIC_BASE+NVIC_IPR13_OFFSET)))
#define NVIC_IPR13_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR13_OFFSET)))

/*----------*/
#define NVIC_IPR13_R_NVIC_RES68_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR13_R_NVIC_RES68_BIT       (5)
#define NVIC_IPR13_R_NVIC_RES68_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR13_R_NVIC_RES68_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR13_R_NVIC_RES68_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR13_R_NVIC_RES68_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR13_R_NVIC_RES68_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR13_R_NVIC_RES68_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR13_R_NVIC_RES68_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR13_R_NVIC_RES68_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR13_NVIC_RES68_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR13_NVIC_RES68_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR13_NVIC_RES68_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR13_NVIC_RES68_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR13_NVIC_RES68_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR13_NVIC_RES68_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR13_NVIC_RES68_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR13_NVIC_RES68_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR13_NVIC_RES68_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR13_R_NVIC_RES69_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR13_R_NVIC_RES69_BIT   (13)
#define NVIC_IPR13_R_NVIC_RES69_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR13_R_NVIC_RES69_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR13_R_NVIC_RES69_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR13_R_NVIC_RES69_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR13_R_NVIC_RES69_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR13_R_NVIC_RES69_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR13_R_NVIC_RES69_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR13_R_NVIC_RES69_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR13_NVIC_RES69_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR13_NVIC_RES69_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR13_NVIC_RES69_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR13_NVIC_RES69_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR13_NVIC_RES69_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR13_NVIC_RES69_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR13_NVIC_RES69_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR13_NVIC_RES69_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR13_NVIC_RES69_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR13_R_NVIC_RES70_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR13_R_NVIC_RES70_BIT    (21)
#define NVIC_IPR13_R_NVIC_RES70_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR13_R_NVIC_RES70_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR13_R_NVIC_RES70_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR13_R_NVIC_RES70_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR13_R_NVIC_RES70_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR13_R_NVIC_RES70_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR13_R_NVIC_RES70_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR13_R_NVIC_RES70_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR13_NVIC_RES70_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR13_NVIC_RES70_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR13_NVIC_RES70_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR13_NVIC_RES70_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR13_NVIC_RES70_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR13_NVIC_RES70_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR13_NVIC_RES70_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR13_NVIC_RES70_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR13_NVIC_RES70_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR13_R_NVIC_RES71_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR13_R_NVIC_RES71_BIT    (29)
#define NVIC_IPR13_R_NVIC_RES71_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR13_R_NVIC_RES71_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR13_R_NVIC_RES71_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR13_R_NVIC_RES71_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR13_R_NVIC_RES71_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR13_R_NVIC_RES71_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR13_R_NVIC_RES71_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR13_R_NVIC_RES71_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR13_NVIC_RES71_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR13_NVIC_RES71_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR13_NVIC_RES71_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR13_NVIC_RES71_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR13_NVIC_RES71_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR13_NVIC_RES71_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR13_NVIC_RES71_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR13_NVIC_RES71_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR13_NVIC_RES71_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR14 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR14            (((IPR14_TypeDef*)(NVIC_BASE+NVIC_IPR14_OFFSET)))
#define NVIC_IPR14_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR14_OFFSET)))

/*----------*/
#define NVIC_IPR14_R_NVIC_RES72_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR14_R_NVIC_RES72_BIT       (5)
#define NVIC_IPR14_R_NVIC_RES72_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR14_R_NVIC_RES72_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR14_R_NVIC_RES72_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR14_R_NVIC_RES72_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR14_R_NVIC_RES72_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR14_R_NVIC_RES72_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR14_R_NVIC_RES72_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR14_R_NVIC_RES72_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR14_NVIC_RES72_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR14_NVIC_RES72_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR14_NVIC_RES72_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR14_NVIC_RES72_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR14_NVIC_RES72_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR14_NVIC_RES72_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR14_NVIC_RES72_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR14_NVIC_RES72_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR14_NVIC_RES72_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR14_R_NVIC_SSI2_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR14_R_NVIC_SSI2_BIT   (13)
#define NVIC_IPR14_R_NVIC_SSI2_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR14_R_NVIC_SSI2_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR14_R_NVIC_SSI2_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR14_R_NVIC_SSI2_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR14_R_NVIC_SSI2_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR14_R_NVIC_SSI2_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR14_R_NVIC_SSI2_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR14_R_NVIC_SSI2_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR14_NVIC_SSI2_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR14_NVIC_SSI2_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR14_NVIC_SSI2_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR14_NVIC_SSI2_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR14_NVIC_SSI2_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR14_NVIC_SSI2_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR14_NVIC_SSI2_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR14_NVIC_SSI2_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR14_NVIC_SSI2_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR14_R_NVIC_SSI3_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR14_R_NVIC_SSI3_BIT    (21)
#define NVIC_IPR14_R_NVIC_SSI3_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR14_R_NVIC_SSI3_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR14_R_NVIC_SSI3_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR14_R_NVIC_SSI3_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR14_R_NVIC_SSI3_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR14_R_NVIC_SSI3_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR14_R_NVIC_SSI3_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR14_R_NVIC_SSI3_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR14_NVIC_SSI3_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR14_NVIC_SSI3_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR14_NVIC_SSI3_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR14_NVIC_SSI3_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR14_NVIC_SSI3_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR14_NVIC_SSI3_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR14_NVIC_SSI3_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR14_NVIC_SSI3_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR14_NVIC_SSI3_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR14_R_NVIC_UART3_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR14_R_NVIC_UART3_BIT    (29)
#define NVIC_IPR14_R_NVIC_UART3_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR14_R_NVIC_UART3_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR14_R_NVIC_UART3_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR14_R_NVIC_UART3_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR14_R_NVIC_UART3_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR14_R_NVIC_UART3_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR14_R_NVIC_UART3_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR14_R_NVIC_UART3_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR14_NVIC_UART3_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR14_NVIC_UART3_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR14_NVIC_UART3_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR14_NVIC_UART3_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR14_NVIC_UART3_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR14_NVIC_UART3_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR14_NVIC_UART3_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR14_NVIC_UART3_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR14_NVIC_UART3_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR15 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR15            (((IPR15_TypeDef*)(NVIC_BASE+NVIC_IPR15_OFFSET)))
#define NVIC_IPR15_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR15_OFFSET)))

/*----------*/
#define NVIC_IPR15_R_NVIC_UART4_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR15_R_NVIC_UART4_BIT       (5)
#define NVIC_IPR15_R_NVIC_UART4_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR15_R_NVIC_UART4_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR15_R_NVIC_UART4_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR15_R_NVIC_UART4_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR15_R_NVIC_UART4_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR15_R_NVIC_UART4_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR15_R_NVIC_UART4_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR15_R_NVIC_UART4_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR15_NVIC_UART4_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR15_NVIC_UART4_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR15_NVIC_UART4_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR15_NVIC_UART4_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR15_NVIC_UART4_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR15_NVIC_UART4_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR15_NVIC_UART4_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR15_NVIC_UART4_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR15_NVIC_UART4_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR15_R_NVIC_UART5_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR15_R_NVIC_UART5_BIT   (13)
#define NVIC_IPR15_R_NVIC_UART5_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR15_R_NVIC_UART5_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR15_R_NVIC_UART5_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR15_R_NVIC_UART5_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR15_R_NVIC_UART5_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR15_R_NVIC_UART5_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR15_R_NVIC_UART5_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR15_R_NVIC_UART5_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR15_NVIC_UART5_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR15_NVIC_UART5_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR15_NVIC_UART5_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR15_NVIC_UART5_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR15_NVIC_UART5_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR15_NVIC_UART5_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR15_NVIC_UART5_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR15_NVIC_UART5_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR15_NVIC_UART5_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR15_R_NVIC_UART6_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR15_R_NVIC_UART6_BIT    (21)
#define NVIC_IPR15_R_NVIC_UART6_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR15_R_NVIC_UART6_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR15_R_NVIC_UART6_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR15_R_NVIC_UART6_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR15_R_NVIC_UART6_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR15_R_NVIC_UART6_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR15_R_NVIC_UART6_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR15_R_NVIC_UART6_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR15_NVIC_UART6_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR15_NVIC_UART6_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR15_NVIC_UART6_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR15_NVIC_UART6_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR15_NVIC_UART6_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR15_NVIC_UART6_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR15_NVIC_UART6_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR15_NVIC_UART6_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR15_NVIC_UART6_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR15_R_NVIC_UART7_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR15_R_NVIC_UART7_BIT    (29)
#define NVIC_IPR15_R_NVIC_UART7_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR15_R_NVIC_UART7_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR15_R_NVIC_UART7_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR15_R_NVIC_UART7_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR15_R_NVIC_UART7_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR15_R_NVIC_UART7_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR15_R_NVIC_UART7_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR15_R_NVIC_UART7_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR15_NVIC_UART7_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR15_NVIC_UART7_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR15_NVIC_UART7_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR15_NVIC_UART7_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR15_NVIC_UART7_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR15_NVIC_UART7_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR15_NVIC_UART7_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR15_NVIC_UART7_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR15_NVIC_UART7_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR16 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR16            (((IPR16_TypeDef*)(NVIC_BASE+NVIC_IPR16_OFFSET)))
#define NVIC_IPR16_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR16_OFFSET)))

/*----------*/
#define NVIC_IPR16_R_NVIC_RES80_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR16_R_NVIC_RES80_BIT       (5)
#define NVIC_IPR16_R_NVIC_RES80_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR16_R_NVIC_RES80_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR16_R_NVIC_RES80_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR16_R_NVIC_RES80_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR16_R_NVIC_RES80_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR16_R_NVIC_RES80_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR16_R_NVIC_RES80_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR16_R_NVIC_RES80_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR16_NVIC_RES80_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR16_NVIC_RES80_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR16_NVIC_RES80_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR16_NVIC_RES80_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR16_NVIC_RES80_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR16_NVIC_RES80_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR16_NVIC_RES80_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR16_NVIC_RES80_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR16_NVIC_RES80_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR16_R_NVIC_RES81_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR16_R_NVIC_RES81_BIT   (13)
#define NVIC_IPR16_R_NVIC_RES81_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR16_R_NVIC_RES81_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR16_R_NVIC_RES81_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR16_R_NVIC_RES81_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR16_R_NVIC_RES81_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR16_R_NVIC_RES81_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR16_R_NVIC_RES81_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR16_R_NVIC_RES81_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR16_NVIC_RES81_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR16_NVIC_RES81_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR16_NVIC_RES81_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR16_NVIC_RES81_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR16_NVIC_RES81_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR16_NVIC_RES81_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR16_NVIC_RES81_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR16_NVIC_RES81_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR16_NVIC_RES81_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR16_R_NVIC_RES82_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR16_R_NVIC_RES82_BIT    (21)
#define NVIC_IPR16_R_NVIC_RES82_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR16_R_NVIC_RES82_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR16_R_NVIC_RES82_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR16_R_NVIC_RES82_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR16_R_NVIC_RES82_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR16_R_NVIC_RES82_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR16_R_NVIC_RES82_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR16_R_NVIC_RES82_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR16_NVIC_RES82_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR16_NVIC_RES82_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR16_NVIC_RES82_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR16_NVIC_RES82_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR16_NVIC_RES82_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR16_NVIC_RES82_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR16_NVIC_RES82_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR16_NVIC_RES82_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR16_NVIC_RES82_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR16_R_NVIC_RES83_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR16_R_NVIC_RES83_BIT    (29)
#define NVIC_IPR16_R_NVIC_RES83_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR16_R_NVIC_RES83_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR16_R_NVIC_RES83_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR16_R_NVIC_RES83_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR16_R_NVIC_RES83_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR16_R_NVIC_RES83_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR16_R_NVIC_RES83_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR16_R_NVIC_RES83_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR16_NVIC_RES83_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR16_NVIC_RES83_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR16_NVIC_RES83_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR16_NVIC_RES83_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR16_NVIC_RES83_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR16_NVIC_RES83_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR16_NVIC_RES83_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR16_NVIC_RES83_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR16_NVIC_RES83_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR17 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR17            (((IPR17_TypeDef*)(NVIC_BASE+NVIC_IPR17_OFFSET)))
#define NVIC_IPR17_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR17_OFFSET)))

/*----------*/
#define NVIC_IPR17_R_NVIC_I2C2_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR17_R_NVIC_I2C2_BIT       (5)
#define NVIC_IPR17_R_NVIC_I2C2_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR17_R_NVIC_I2C2_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR17_R_NVIC_I2C2_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR17_R_NVIC_I2C2_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR17_R_NVIC_I2C2_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR17_R_NVIC_I2C2_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR17_R_NVIC_I2C2_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR17_R_NVIC_I2C2_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR17_NVIC_I2C2_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR17_NVIC_I2C2_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR17_NVIC_I2C2_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR17_NVIC_I2C2_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR17_NVIC_I2C2_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR17_NVIC_I2C2_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR17_NVIC_I2C2_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR17_NVIC_I2C2_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR17_NVIC_I2C2_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR17_R_NVIC_I2C3_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR17_R_NVIC_I2C3_BIT   (13)
#define NVIC_IPR17_R_NVIC_I2C3_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR17_R_NVIC_I2C3_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR17_R_NVIC_I2C3_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR17_R_NVIC_I2C3_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR17_R_NVIC_I2C3_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR17_R_NVIC_I2C3_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR17_R_NVIC_I2C3_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR17_R_NVIC_I2C3_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR17_NVIC_I2C3_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR17_NVIC_I2C3_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR17_NVIC_I2C3_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR17_NVIC_I2C3_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR17_NVIC_I2C3_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR17_NVIC_I2C3_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR17_NVIC_I2C3_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR17_NVIC_I2C3_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR17_NVIC_I2C3_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR17_R_NVIC_TIMER4A_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR17_R_NVIC_TIMER4A_BIT    (21)
#define NVIC_IPR17_R_NVIC_TIMER4A_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR17_R_NVIC_TIMER4A_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR17_R_NVIC_TIMER4A_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR17_R_NVIC_TIMER4A_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR17_R_NVIC_TIMER4A_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR17_R_NVIC_TIMER4A_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR17_R_NVIC_TIMER4A_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR17_R_NVIC_TIMER4A_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR17_NVIC_TIMER4A_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR17_NVIC_TIMER4A_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR17_NVIC_TIMER4A_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR17_NVIC_TIMER4A_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR17_NVIC_TIMER4A_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR17_NVIC_TIMER4A_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR17_NVIC_TIMER4A_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR17_NVIC_TIMER4A_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR17_NVIC_TIMER4A_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR17_R_NVIC_TIMER4B_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR17_R_NVIC_TIMER4B_BIT    (29)
#define NVIC_IPR17_R_NVIC_TIMER4B_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR17_R_NVIC_TIMER4B_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR17_R_NVIC_TIMER4B_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR17_R_NVIC_TIMER4B_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR17_R_NVIC_TIMER4B_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR17_R_NVIC_TIMER4B_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR17_R_NVIC_TIMER4B_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR17_R_NVIC_TIMER4B_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR17_NVIC_TIMER4B_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR17_NVIC_TIMER4B_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR17_NVIC_TIMER4B_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR17_NVIC_TIMER4B_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR17_NVIC_TIMER4B_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR17_NVIC_TIMER4B_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR17_NVIC_TIMER4B_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR17_NVIC_TIMER4B_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR17_NVIC_TIMER4B_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR18 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR18            (((IPR18_TypeDef*)(NVIC_BASE+NVIC_IPR18_OFFSET)))
#define NVIC_IPR18_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR18_OFFSET)))

/*----------*/
#define NVIC_IPR18_R_NVIC_RES88_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR18_R_NVIC_RES88_BIT       (5)
#define NVIC_IPR18_R_NVIC_RES88_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR18_R_NVIC_RES88_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR18_R_NVIC_RES88_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR18_R_NVIC_RES88_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR18_R_NVIC_RES88_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR18_R_NVIC_RES88_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR18_R_NVIC_RES88_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR18_R_NVIC_RES88_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR18_NVIC_RES88_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR18_NVIC_RES88_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR18_NVIC_RES88_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR18_NVIC_RES88_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR18_NVIC_RES88_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR18_NVIC_RES88_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR18_NVIC_RES88_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR18_NVIC_RES88_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR18_NVIC_RES88_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR18_R_NVIC_RES89_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR18_R_NVIC_RES89_BIT   (13)
#define NVIC_IPR18_R_NVIC_RES89_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR18_R_NVIC_RES89_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR18_R_NVIC_RES89_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR18_R_NVIC_RES89_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR18_R_NVIC_RES89_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR18_R_NVIC_RES89_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR18_R_NVIC_RES89_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR18_R_NVIC_RES89_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR18_NVIC_RES89_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR18_NVIC_RES89_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR18_NVIC_RES89_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR18_NVIC_RES89_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR18_NVIC_RES89_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR18_NVIC_RES89_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR18_NVIC_RES89_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR18_NVIC_RES89_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR18_NVIC_RES89_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR18_R_NVIC_RES90_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR18_R_NVIC_RES90_BIT    (21)
#define NVIC_IPR18_R_NVIC_RES90_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR18_R_NVIC_RES90_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR18_R_NVIC_RES90_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR18_R_NVIC_RES90_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR18_R_NVIC_RES90_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR18_R_NVIC_RES90_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR18_R_NVIC_RES90_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR18_R_NVIC_RES90_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR18_NVIC_RES90_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR18_NVIC_RES90_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR18_NVIC_RES90_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR18_NVIC_RES90_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR18_NVIC_RES90_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR18_NVIC_RES90_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR18_NVIC_RES90_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR18_NVIC_RES90_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR18_NVIC_RES90_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR18_R_NVIC_RES91_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR18_R_NVIC_RES91_BIT    (29)
#define NVIC_IPR18_R_NVIC_RES91_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR18_R_NVIC_RES91_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR18_R_NVIC_RES91_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR18_R_NVIC_RES91_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR18_R_NVIC_RES91_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR18_R_NVIC_RES91_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR18_R_NVIC_RES91_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR18_R_NVIC_RES91_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR18_NVIC_RES91_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR18_NVIC_RES91_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR18_NVIC_RES91_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR18_NVIC_RES91_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR18_NVIC_RES91_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR18_NVIC_RES91_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR18_NVIC_RES91_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR18_NVIC_RES91_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR18_NVIC_RES91_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR19 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR19            (((IPR19_TypeDef*)(NVIC_BASE+NVIC_IPR19_OFFSET)))
#define NVIC_IPR19_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR19_OFFSET)))

/*----------*/
#define NVIC_IPR19_R_NVIC_RES92_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR19_R_NVIC_RES92_BIT       (5)
#define NVIC_IPR19_R_NVIC_RES92_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR19_R_NVIC_RES92_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR19_R_NVIC_RES92_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR19_R_NVIC_RES92_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR19_R_NVIC_RES92_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR19_R_NVIC_RES92_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR19_R_NVIC_RES92_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR19_R_NVIC_RES92_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR19_NVIC_RES92_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR19_NVIC_RES92_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR19_NVIC_RES92_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR19_NVIC_RES92_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR19_NVIC_RES92_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR19_NVIC_RES92_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR19_NVIC_RES92_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR19_NVIC_RES92_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR19_NVIC_RES92_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR19_R_NVIC_RES93_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR19_R_NVIC_RES93_BIT   (13)
#define NVIC_IPR19_R_NVIC_RES93_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR19_R_NVIC_RES93_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR19_R_NVIC_RES93_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR19_R_NVIC_RES93_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR19_R_NVIC_RES93_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR19_R_NVIC_RES93_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR19_R_NVIC_RES93_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR19_R_NVIC_RES93_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR19_NVIC_RES93_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR19_NVIC_RES93_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR19_NVIC_RES93_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR19_NVIC_RES93_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR19_NVIC_RES93_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR19_NVIC_RES93_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR19_NVIC_RES93_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR19_NVIC_RES93_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR19_NVIC_RES93_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR19_R_NVIC_RES94_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR19_R_NVIC_RES94_BIT    (21)
#define NVIC_IPR19_R_NVIC_RES94_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR19_R_NVIC_RES94_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR19_R_NVIC_RES94_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR19_R_NVIC_RES94_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR19_R_NVIC_RES94_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR19_R_NVIC_RES94_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR19_R_NVIC_RES94_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR19_R_NVIC_RES94_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR19_NVIC_RES94_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR19_NVIC_RES94_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR19_NVIC_RES94_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR19_NVIC_RES94_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR19_NVIC_RES94_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR19_NVIC_RES94_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR19_NVIC_RES94_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR19_NVIC_RES94_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR19_NVIC_RES94_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR19_R_NVIC_RES95_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR19_R_NVIC_RES95_BIT    (29)
#define NVIC_IPR19_R_NVIC_RES95_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR19_R_NVIC_RES95_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR19_R_NVIC_RES95_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR19_R_NVIC_RES95_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR19_R_NVIC_RES95_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR19_R_NVIC_RES95_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR19_R_NVIC_RES95_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR19_R_NVIC_RES95_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR19_NVIC_RES95_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR19_NVIC_RES95_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR19_NVIC_RES95_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR19_NVIC_RES95_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR19_NVIC_RES95_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR19_NVIC_RES95_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR19_NVIC_RES95_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR19_NVIC_RES95_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR19_NVIC_RES95_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR20 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR20            (((IPR20_TypeDef*)(NVIC_BASE+NVIC_IPR20_OFFSET)))
#define NVIC_IPR20_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR20_OFFSET)))

/*----------*/
#define NVIC_IPR20_R_NVIC_RES96_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR20_R_NVIC_RES96_BIT       (5)
#define NVIC_IPR20_R_NVIC_RES96_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR20_R_NVIC_RES96_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR20_R_NVIC_RES96_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR20_R_NVIC_RES96_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR20_R_NVIC_RES96_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR20_R_NVIC_RES96_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR20_R_NVIC_RES96_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR20_R_NVIC_RES96_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR20_NVIC_RES96_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR20_NVIC_RES96_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR20_NVIC_RES96_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR20_NVIC_RES96_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR20_NVIC_RES96_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR20_NVIC_RES96_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR20_NVIC_RES96_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR20_NVIC_RES96_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR20_NVIC_RES96_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR20_R_NVIC_RES97_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR20_R_NVIC_RES97_BIT   (13)
#define NVIC_IPR20_R_NVIC_RES97_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR20_R_NVIC_RES97_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR20_R_NVIC_RES97_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR20_R_NVIC_RES97_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR20_R_NVIC_RES97_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR20_R_NVIC_RES97_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR20_R_NVIC_RES97_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR20_R_NVIC_RES97_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR20_NVIC_RES97_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR20_NVIC_RES97_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR20_NVIC_RES97_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR20_NVIC_RES97_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR20_NVIC_RES97_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR20_NVIC_RES97_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR20_NVIC_RES97_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR20_NVIC_RES97_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR20_NVIC_RES97_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR20_R_NVIC_RES98_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR20_R_NVIC_RES98_BIT    (21)
#define NVIC_IPR20_R_NVIC_RES98_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR20_R_NVIC_RES98_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR20_R_NVIC_RES98_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR20_R_NVIC_RES98_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR20_R_NVIC_RES98_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR20_R_NVIC_RES98_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR20_R_NVIC_RES98_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR20_R_NVIC_RES98_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR20_NVIC_RES98_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR20_NVIC_RES98_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR20_NVIC_RES98_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR20_NVIC_RES98_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR20_NVIC_RES98_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR20_NVIC_RES98_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR20_NVIC_RES98_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR20_NVIC_RES98_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR20_NVIC_RES98_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR20_R_NVIC_RES99_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR20_R_NVIC_RES99_BIT    (29)
#define NVIC_IPR20_R_NVIC_RES99_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR20_R_NVIC_RES99_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR20_R_NVIC_RES99_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR20_R_NVIC_RES99_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR20_R_NVIC_RES99_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR20_R_NVIC_RES99_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR20_R_NVIC_RES99_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR20_R_NVIC_RES99_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR20_NVIC_RES99_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR20_NVIC_RES99_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR20_NVIC_RES99_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR20_NVIC_RES99_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR20_NVIC_RES99_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR20_NVIC_RES99_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR20_NVIC_RES99_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR20_NVIC_RES99_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR20_NVIC_RES99_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR21 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR21            (((IPR21_TypeDef*)(NVIC_BASE+NVIC_IPR21_OFFSET)))
#define NVIC_IPR21_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR21_OFFSET)))

/*----------*/
#define NVIC_IPR21_R_NVIC_RES100_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR21_R_NVIC_RES100_BIT       (5)
#define NVIC_IPR21_R_NVIC_RES100_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR21_R_NVIC_RES100_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR21_R_NVIC_RES100_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR21_R_NVIC_RES100_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR21_R_NVIC_RES100_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR21_R_NVIC_RES100_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR21_R_NVIC_RES100_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR21_R_NVIC_RES100_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR21_NVIC_RES100_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR21_NVIC_RES100_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR21_NVIC_RES100_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR21_NVIC_RES100_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR21_NVIC_RES100_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR21_NVIC_RES100_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR21_NVIC_RES100_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR21_NVIC_RES100_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR21_NVIC_RES100_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR21_R_NVIC_RES101_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR21_R_NVIC_RES101_BIT   (13)
#define NVIC_IPR21_R_NVIC_RES101_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR21_R_NVIC_RES101_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR21_R_NVIC_RES101_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR21_R_NVIC_RES101_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR21_R_NVIC_RES101_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR21_R_NVIC_RES101_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR21_R_NVIC_RES101_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR21_R_NVIC_RES101_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR21_NVIC_RES101_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR21_NVIC_RES101_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR21_NVIC_RES101_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR21_NVIC_RES101_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR21_NVIC_RES101_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR21_NVIC_RES101_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR21_NVIC_RES101_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR21_NVIC_RES101_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR21_NVIC_RES101_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR21_R_NVIC_RES102_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR21_R_NVIC_RES102_BIT    (21)
#define NVIC_IPR21_R_NVIC_RES102_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR21_R_NVIC_RES102_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR21_R_NVIC_RES102_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR21_R_NVIC_RES102_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR21_R_NVIC_RES102_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR21_R_NVIC_RES102_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR21_R_NVIC_RES102_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR21_R_NVIC_RES102_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR21_NVIC_RES102_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR21_NVIC_RES102_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR21_NVIC_RES102_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR21_NVIC_RES102_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR21_NVIC_RES102_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR21_NVIC_RES102_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR21_NVIC_RES102_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR21_NVIC_RES102_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR21_NVIC_RES102_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR21_R_NVIC_RES103_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR21_R_NVIC_RES103_BIT    (29)
#define NVIC_IPR21_R_NVIC_RES103_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR21_R_NVIC_RES103_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR21_R_NVIC_RES103_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR21_R_NVIC_RES103_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR21_R_NVIC_RES103_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR21_R_NVIC_RES103_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR21_R_NVIC_RES103_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR21_R_NVIC_RES103_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR21_NVIC_RES103_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR21_NVIC_RES103_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR21_NVIC_RES103_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR21_NVIC_RES103_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR21_NVIC_RES103_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR21_NVIC_RES103_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR21_NVIC_RES103_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR21_NVIC_RES103_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR21_NVIC_RES103_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR22 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR22            (((IPR22_TypeDef*)(NVIC_BASE+NVIC_IPR22_OFFSET)))
#define NVIC_IPR22_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR22_OFFSET)))

/*----------*/
#define NVIC_IPR22_R_NVIC_RES104_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR22_R_NVIC_RES104_BIT       (5)
#define NVIC_IPR22_R_NVIC_RES104_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR22_R_NVIC_RES104_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR22_R_NVIC_RES104_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR22_R_NVIC_RES104_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR22_R_NVIC_RES104_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR22_R_NVIC_RES104_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR22_R_NVIC_RES104_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR22_R_NVIC_RES104_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR22_NVIC_RES104_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR22_NVIC_RES104_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR22_NVIC_RES104_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR22_NVIC_RES104_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR22_NVIC_RES104_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR22_NVIC_RES104_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR22_NVIC_RES104_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR22_NVIC_RES104_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR22_NVIC_RES104_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR22_R_NVIC_RES105_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR22_R_NVIC_RES105_BIT   (13)
#define NVIC_IPR22_R_NVIC_RES105_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR22_R_NVIC_RES105_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR22_R_NVIC_RES105_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR22_R_NVIC_RES105_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR22_R_NVIC_RES105_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR22_R_NVIC_RES105_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR22_R_NVIC_RES105_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR22_R_NVIC_RES105_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR22_NVIC_RES105_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR22_NVIC_RES105_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR22_NVIC_RES105_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR22_NVIC_RES105_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR22_NVIC_RES105_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR22_NVIC_RES105_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR22_NVIC_RES105_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR22_NVIC_RES105_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR22_NVIC_RES105_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR22_R_NVIC_RES106_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR22_R_NVIC_RES106_BIT    (21)
#define NVIC_IPR22_R_NVIC_RES106_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR22_R_NVIC_RES106_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR22_R_NVIC_RES106_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR22_R_NVIC_RES106_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR22_R_NVIC_RES106_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR22_R_NVIC_RES106_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR22_R_NVIC_RES106_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR22_R_NVIC_RES106_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR22_NVIC_RES106_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR22_NVIC_RES106_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR22_NVIC_RES106_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR22_NVIC_RES106_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR22_NVIC_RES106_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR22_NVIC_RES106_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR22_NVIC_RES106_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR22_NVIC_RES106_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR22_NVIC_RES106_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR22_R_NVIC_RES107_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR22_R_NVIC_RES107_BIT    (29)
#define NVIC_IPR22_R_NVIC_RES107_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR22_R_NVIC_RES107_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR22_R_NVIC_RES107_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR22_R_NVIC_RES107_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR22_R_NVIC_RES107_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR22_R_NVIC_RES107_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR22_R_NVIC_RES107_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR22_R_NVIC_RES107_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR22_NVIC_RES107_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR22_NVIC_RES107_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR22_NVIC_RES107_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR22_NVIC_RES107_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR22_NVIC_RES107_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR22_NVIC_RES107_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR22_NVIC_RES107_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR22_NVIC_RES107_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR22_NVIC_RES107_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR23 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR23            (((IPR23_TypeDef*)(NVIC_BASE+NVIC_IPR23_OFFSET)))
#define NVIC_IPR23_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR23_OFFSET)))

/*----------*/
#define NVIC_IPR23_R_NVIC_TIMER5A_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR23_R_NVIC_TIMER5A_BIT       (5)
#define NVIC_IPR23_R_NVIC_TIMER5A_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR23_R_NVIC_TIMER5A_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR23_R_NVIC_TIMER5A_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR23_R_NVIC_TIMER5A_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR23_R_NVIC_TIMER5A_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR23_R_NVIC_TIMER5A_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR23_R_NVIC_TIMER5A_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR23_R_NVIC_TIMER5A_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR23_NVIC_TIMER5A_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR23_NVIC_TIMER5A_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR23_NVIC_TIMER5A_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR23_NVIC_TIMER5A_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR23_NVIC_TIMER5A_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR23_NVIC_TIMER5A_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR23_NVIC_TIMER5A_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR23_NVIC_TIMER5A_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR23_NVIC_TIMER5A_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR23_R_NVIC_TIMER5B_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR23_R_NVIC_TIMER5B_BIT   (13)
#define NVIC_IPR23_R_NVIC_TIMER5B_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR23_R_NVIC_TIMER5B_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR23_R_NVIC_TIMER5B_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR23_R_NVIC_TIMER5B_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR23_R_NVIC_TIMER5B_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR23_R_NVIC_TIMER5B_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR23_R_NVIC_TIMER5B_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR23_R_NVIC_TIMER5B_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR23_NVIC_TIMER5B_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR23_NVIC_TIMER5B_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR23_NVIC_TIMER5B_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR23_NVIC_TIMER5B_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR23_NVIC_TIMER5B_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR23_NVIC_TIMER5B_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR23_NVIC_TIMER5B_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR23_NVIC_TIMER5B_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR23_NVIC_TIMER5B_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR23_R_NVIC_WTIMER0A_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR23_R_NVIC_WTIMER0A_BIT    (21)
#define NVIC_IPR23_R_NVIC_WTIMER0A_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR23_R_NVIC_WTIMER0A_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR23_R_NVIC_WTIMER0A_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR23_R_NVIC_WTIMER0A_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR23_R_NVIC_WTIMER0A_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR23_R_NVIC_WTIMER0A_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR23_R_NVIC_WTIMER0A_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR23_R_NVIC_WTIMER0A_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR23_NVIC_WTIMER0A_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR23_NVIC_WTIMER0A_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR23_NVIC_WTIMER0A_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR23_NVIC_WTIMER0A_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR23_NVIC_WTIMER0A_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR23_NVIC_WTIMER0A_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR23_NVIC_WTIMER0A_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR23_NVIC_WTIMER0A_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR23_NVIC_WTIMER0A_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR23_R_NVIC_WTIMER0B_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR23_R_NVIC_WTIMER0B_BIT    (29)
#define NVIC_IPR23_R_NVIC_WTIMER0B_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR23_R_NVIC_WTIMER0B_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR23_R_NVIC_WTIMER0B_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR23_R_NVIC_WTIMER0B_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR23_R_NVIC_WTIMER0B_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR23_R_NVIC_WTIMER0B_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR23_R_NVIC_WTIMER0B_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR23_R_NVIC_WTIMER0B_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR23_NVIC_WTIMER0B_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR23_NVIC_WTIMER0B_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR23_NVIC_WTIMER0B_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR23_NVIC_WTIMER0B_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR23_NVIC_WTIMER0B_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR23_NVIC_WTIMER0B_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR23_NVIC_WTIMER0B_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR23_NVIC_WTIMER0B_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR23_NVIC_WTIMER0B_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR24 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR24            (((IPR24_TypeDef*)(NVIC_BASE+NVIC_IPR24_OFFSET)))
#define NVIC_IPR24_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR24_OFFSET)))

/*----------*/
#define NVIC_IPR24_R_NVIC_WTIMER1A_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR24_R_NVIC_WTIMER1A_BIT       (5)
#define NVIC_IPR24_R_NVIC_WTIMER1A_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR24_R_NVIC_WTIMER1A_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR24_R_NVIC_WTIMER1A_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR24_R_NVIC_WTIMER1A_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR24_R_NVIC_WTIMER1A_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR24_R_NVIC_WTIMER1A_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR24_R_NVIC_WTIMER1A_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR24_R_NVIC_WTIMER1A_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR24_NVIC_WTIMER1A_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR24_NVIC_WTIMER1A_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR24_NVIC_WTIMER1A_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR24_NVIC_WTIMER1A_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR24_NVIC_WTIMER1A_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR24_NVIC_WTIMER1A_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR24_NVIC_WTIMER1A_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR24_NVIC_WTIMER1A_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR24_NVIC_WTIMER1A_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR24_R_NVIC_WTIMER1B_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR24_R_NVIC_WTIMER1B_BIT   (13)
#define NVIC_IPR24_R_NVIC_WTIMER1B_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR24_R_NVIC_WTIMER1B_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR24_R_NVIC_WTIMER1B_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR24_R_NVIC_WTIMER1B_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR24_R_NVIC_WTIMER1B_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR24_R_NVIC_WTIMER1B_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR24_R_NVIC_WTIMER1B_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR24_R_NVIC_WTIMER1B_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR24_NVIC_WTIMER1B_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR24_NVIC_WTIMER1B_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR24_NVIC_WTIMER1B_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR24_NVIC_WTIMER1B_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR24_NVIC_WTIMER1B_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR24_NVIC_WTIMER1B_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR24_NVIC_WTIMER1B_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR24_NVIC_WTIMER1B_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR24_NVIC_WTIMER1B_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR24_R_NVIC_WTIMER2A_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR24_R_NVIC_WTIMER2A_BIT    (21)
#define NVIC_IPR24_R_NVIC_WTIMER2A_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR24_R_NVIC_WTIMER2A_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR24_R_NVIC_WTIMER2A_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR24_R_NVIC_WTIMER2A_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR24_R_NVIC_WTIMER2A_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR24_R_NVIC_WTIMER2A_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR24_R_NVIC_WTIMER2A_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR24_R_NVIC_WTIMER2A_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR24_NVIC_WTIMER2A_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR24_NVIC_WTIMER2A_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR24_NVIC_WTIMER2A_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR24_NVIC_WTIMER2A_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR24_NVIC_WTIMER2A_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR24_NVIC_WTIMER2A_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR24_NVIC_WTIMER2A_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR24_NVIC_WTIMER2A_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR24_NVIC_WTIMER2A_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR24_R_NVIC_WTIMER2B_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR24_R_NVIC_WTIMER2B_BIT    (29)
#define NVIC_IPR24_R_NVIC_WTIMER2B_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR24_R_NVIC_WTIMER2B_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR24_R_NVIC_WTIMER2B_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR24_R_NVIC_WTIMER2B_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR24_R_NVIC_WTIMER2B_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR24_R_NVIC_WTIMER2B_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR24_R_NVIC_WTIMER2B_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR24_R_NVIC_WTIMER2B_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR24_NVIC_WTIMER2B_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR24_NVIC_WTIMER2B_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR24_NVIC_WTIMER2B_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR24_NVIC_WTIMER2B_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR24_NVIC_WTIMER2B_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR24_NVIC_WTIMER2B_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR24_NVIC_WTIMER2B_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR24_NVIC_WTIMER2B_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR24_NVIC_WTIMER2B_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR25 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR25            (((IPR25_TypeDef*)(NVIC_BASE+NVIC_IPR25_OFFSET)))
#define NVIC_IPR25_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR25_OFFSET)))

/*----------*/
#define NVIC_IPR25_R_NVIC_WTIMER3A_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR25_R_NVIC_WTIMER3A_BIT       (5)
#define NVIC_IPR25_R_NVIC_WTIMER3A_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR25_R_NVIC_WTIMER3A_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR25_R_NVIC_WTIMER3A_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR25_R_NVIC_WTIMER3A_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR25_R_NVIC_WTIMER3A_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR25_R_NVIC_WTIMER3A_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR25_R_NVIC_WTIMER3A_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR25_R_NVIC_WTIMER3A_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR25_NVIC_WTIMER3A_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR25_NVIC_WTIMER3A_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR25_NVIC_WTIMER3A_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR25_NVIC_WTIMER3A_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR25_NVIC_WTIMER3A_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR25_NVIC_WTIMER3A_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR25_NVIC_WTIMER3A_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR25_NVIC_WTIMER3A_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR25_NVIC_WTIMER3A_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR25_R_NVIC_WTIMER3B_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR25_R_NVIC_WTIMER3B_BIT   (13)
#define NVIC_IPR25_R_NVIC_WTIMER3B_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR25_R_NVIC_WTIMER3B_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR25_R_NVIC_WTIMER3B_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR25_R_NVIC_WTIMER3B_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR25_R_NVIC_WTIMER3B_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR25_R_NVIC_WTIMER3B_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR25_R_NVIC_WTIMER3B_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR25_R_NVIC_WTIMER3B_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR25_NVIC_WTIMER3B_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR25_NVIC_WTIMER3B_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR25_NVIC_WTIMER3B_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR25_NVIC_WTIMER3B_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR25_NVIC_WTIMER3B_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR25_NVIC_WTIMER3B_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR25_NVIC_WTIMER3B_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR25_NVIC_WTIMER3B_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR25_NVIC_WTIMER3B_IP7     ((uint32_t)0x00000007u)


#define NVIC_IPR25_R_NVIC_WTIMER4A_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR25_R_NVIC_WTIMER4A_BIT    (21)
#define NVIC_IPR25_R_NVIC_WTIMER4A_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR25_R_NVIC_WTIMER4A_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR25_R_NVIC_WTIMER4A_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR25_R_NVIC_WTIMER4A_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR25_R_NVIC_WTIMER4A_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR25_R_NVIC_WTIMER4A_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR25_R_NVIC_WTIMER4A_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR25_R_NVIC_WTIMER4A_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR25_NVIC_WTIMER4A_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR25_NVIC_WTIMER4A_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR25_NVIC_WTIMER4A_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR25_NVIC_WTIMER4A_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR25_NVIC_WTIMER4A_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR25_NVIC_WTIMER4A_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR25_NVIC_WTIMER4A_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR25_NVIC_WTIMER4A_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR25_NVIC_WTIMER4A_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR25_R_NVIC_WTIMER4B_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR25_R_NVIC_WTIMER4B_BIT    (29)
#define NVIC_IPR25_R_NVIC_WTIMER4B_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR25_R_NVIC_WTIMER4B_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR25_R_NVIC_WTIMER4B_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR25_R_NVIC_WTIMER4B_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR25_R_NVIC_WTIMER4B_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR25_R_NVIC_WTIMER4B_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR25_R_NVIC_WTIMER4B_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR25_R_NVIC_WTIMER4B_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR25_NVIC_WTIMER4B_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR25_NVIC_WTIMER4B_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR25_NVIC_WTIMER4B_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR25_NVIC_WTIMER4B_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR25_NVIC_WTIMER4B_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR25_NVIC_WTIMER4B_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR25_NVIC_WTIMER4B_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR25_NVIC_WTIMER4B_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR25_NVIC_WTIMER4B_IP7      ((uint32_t)0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* IPR26 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR26            (((IPR26_TypeDef*)(NVIC_BASE+NVIC_IPR26_OFFSET)))
#define NVIC_IPR26_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR26_OFFSET)))

/*----------*/
#define NVIC_IPR26_R_NVIC_WTIMER5A_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR26_R_NVIC_WTIMER5A_BIT       (5)
#define NVIC_IPR26_R_NVIC_WTIMER5A_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR26_R_NVIC_WTIMER5A_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR26_R_NVIC_WTIMER5A_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR26_R_NVIC_WTIMER5A_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR26_R_NVIC_WTIMER5A_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR26_R_NVIC_WTIMER5A_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR26_R_NVIC_WTIMER5A_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR26_R_NVIC_WTIMER5A_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR26_NVIC_WTIMER5A_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR26_NVIC_WTIMER5A_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR26_NVIC_WTIMER5A_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR26_NVIC_WTIMER5A_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR26_NVIC_WTIMER5A_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR26_NVIC_WTIMER5A_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR26_NVIC_WTIMER5A_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR26_NVIC_WTIMER5A_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR26_NVIC_WTIMER5A_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR26_R_NVIC_WTIMER5B_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR26_R_NVIC_WTIMER5B_BIT   (13)
#define NVIC_IPR26_R_NVIC_WTIMER5B_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR26_R_NVIC_WTIMER5B_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR26_R_NVIC_WTIMER5B_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR26_R_NVIC_WTIMER5B_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR26_R_NVIC_WTIMER5B_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR26_R_NVIC_WTIMER5B_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR26_R_NVIC_WTIMER5B_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR26_R_NVIC_WTIMER5B_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR26_NVIC_WTIMER5B_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR26_NVIC_WTIMER5B_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR26_NVIC_WTIMER5B_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR26_NVIC_WTIMER5B_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR26_NVIC_WTIMER5B_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR26_NVIC_WTIMER5B_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR26_NVIC_WTIMER5B_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR26_NVIC_WTIMER5B_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR26_NVIC_WTIMER5B_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR26_R_NVIC_SYSEXC_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR26_R_NVIC_SYSEXC_BIT    (21)
#define NVIC_IPR26_R_NVIC_SYSEXC_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR26_R_NVIC_SYSEXC_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR26_R_NVIC_SYSEXC_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR26_R_NVIC_SYSEXC_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR26_R_NVIC_SYSEXC_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR26_R_NVIC_SYSEXC_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR26_R_NVIC_SYSEXC_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR26_R_NVIC_SYSEXC_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR26_NVIC_SYSEXC_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR26_NVIC_SYSEXC_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR26_NVIC_SYSEXC_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR26_NVIC_SYSEXC_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR26_NVIC_SYSEXC_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR26_NVIC_SYSEXC_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR26_NVIC_SYSEXC_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR26_NVIC_SYSEXC_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR26_NVIC_SYSEXC_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR26_R_NVIC_RES123_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR26_R_NVIC_RES123_BIT    (29)
#define NVIC_IPR26_R_NVIC_RES123_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR26_R_NVIC_RES123_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR26_R_NVIC_RES123_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR26_R_NVIC_RES123_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR26_R_NVIC_RES123_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR26_R_NVIC_RES123_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR26_R_NVIC_RES123_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR26_R_NVIC_RES123_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR26_NVIC_RES123_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR26_NVIC_RES123_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR26_NVIC_RES123_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR26_NVIC_RES123_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR26_NVIC_RES123_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR26_NVIC_RES123_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR26_NVIC_RES123_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR26_NVIC_RES123_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR26_NVIC_RES123_IP7      ((uint32_t)0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* IPR27 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR27            (((IPR27_TypeDef*)(NVIC_BASE+NVIC_IPR27_OFFSET)))
#define NVIC_IPR27_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR27_OFFSET)))

/*----------*/
#define NVIC_IPR27_R_NVIC_RES124_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR27_R_NVIC_RES124_BIT       (5)
#define NVIC_IPR27_R_NVIC_RES124_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR27_R_NVIC_RES124_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR27_R_NVIC_RES124_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR27_R_NVIC_RES124_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR27_R_NVIC_RES124_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR27_R_NVIC_RES124_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR27_R_NVIC_RES124_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR27_R_NVIC_RES124_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR27_NVIC_RES124_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR27_NVIC_RES124_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR27_NVIC_RES124_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR27_NVIC_RES124_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR27_NVIC_RES124_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR27_NVIC_RES124_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR27_NVIC_RES124_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR27_NVIC_RES124_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR27_NVIC_RES124_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR27_R_NVIC_RES125_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR27_R_NVIC_RES125_BIT   (13)
#define NVIC_IPR27_R_NVIC_RES125_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR27_R_NVIC_RES125_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR27_R_NVIC_RES125_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR27_R_NVIC_RES125_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR27_R_NVIC_RES125_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR27_R_NVIC_RES125_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR27_R_NVIC_RES125_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR27_R_NVIC_RES125_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR27_NVIC_RES125_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR27_NVIC_RES125_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR27_NVIC_RES125_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR27_NVIC_RES125_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR27_NVIC_RES125_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR27_NVIC_RES125_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR27_NVIC_RES125_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR27_NVIC_RES125_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR27_NVIC_RES125_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR27_R_NVIC_RES126_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR27_R_NVIC_RES126_BIT    (21)
#define NVIC_IPR27_R_NVIC_RES126_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR27_R_NVIC_RES126_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR27_R_NVIC_RES126_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR27_R_NVIC_RES126_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR27_R_NVIC_RES126_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR27_R_NVIC_RES126_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR27_R_NVIC_RES126_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR27_R_NVIC_RES126_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR27_NVIC_RES126_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR27_NVIC_RES126_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR27_NVIC_RES126_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR27_NVIC_RES126_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR27_NVIC_RES126_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR27_NVIC_RES126_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR27_NVIC_RES126_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR27_NVIC_RES126_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR27_NVIC_RES126_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR27_R_NVIC_RES127_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR27_R_NVIC_RES127_BIT    (29)
#define NVIC_IPR27_R_NVIC_RES127_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR27_R_NVIC_RES127_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR27_R_NVIC_RES127_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR27_R_NVIC_RES127_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR27_R_NVIC_RES127_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR27_R_NVIC_RES127_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR27_R_NVIC_RES127_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR27_R_NVIC_RES127_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR27_NVIC_RES127_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR27_NVIC_RES127_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR27_NVIC_RES127_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR27_NVIC_RES127_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR27_NVIC_RES127_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR27_NVIC_RES127_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR27_NVIC_RES127_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR27_NVIC_RES127_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR27_NVIC_RES127_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR28 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR28            (((IPR28_TypeDef*)(NVIC_BASE+NVIC_IPR28_OFFSET)))
#define NVIC_IPR28_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR28_OFFSET)))

/*----------*/
#define NVIC_IPR28_R_NVIC_RES128_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR28_R_NVIC_RES128_BIT       (5)
#define NVIC_IPR28_R_NVIC_RES128_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR28_R_NVIC_RES128_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR28_R_NVIC_RES128_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR28_R_NVIC_RES128_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR28_R_NVIC_RES128_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR28_R_NVIC_RES128_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR28_R_NVIC_RES128_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR28_R_NVIC_RES128_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR28_NVIC_RES128_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR28_NVIC_RES128_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR28_NVIC_RES128_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR28_NVIC_RES128_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR28_NVIC_RES128_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR28_NVIC_RES128_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR28_NVIC_RES128_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR28_NVIC_RES128_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR28_NVIC_RES128_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR28_R_NVIC_RES129_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR28_R_NVIC_RES129_BIT   (13)
#define NVIC_IPR28_R_NVIC_RES129_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR28_R_NVIC_RES129_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR28_R_NVIC_RES129_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR28_R_NVIC_RES129_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR28_R_NVIC_RES129_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR28_R_NVIC_RES129_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR28_R_NVIC_RES129_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR28_R_NVIC_RES129_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR28_NVIC_RES129_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR28_NVIC_RES129_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR28_NVIC_RES129_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR28_NVIC_RES129_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR28_NVIC_RES129_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR28_NVIC_RES129_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR28_NVIC_RES129_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR28_NVIC_RES129_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR28_NVIC_RES129_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR28_R_NVIC_RES130_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR28_R_NVIC_RES130_BIT    (21)
#define NVIC_IPR28_R_NVIC_RES130_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR28_R_NVIC_RES130_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR28_R_NVIC_RES130_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR28_R_NVIC_RES130_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR28_R_NVIC_RES130_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR28_R_NVIC_RES130_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR28_R_NVIC_RES130_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR28_R_NVIC_RES130_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR28_NVIC_RES130_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR28_NVIC_RES130_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR28_NVIC_RES130_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR28_NVIC_RES130_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR28_NVIC_RES130_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR28_NVIC_RES130_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR28_NVIC_RES130_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR28_NVIC_RES130_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR28_NVIC_RES130_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR28_R_NVIC_RES131_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR28_R_NVIC_RES131_BIT    (29)
#define NVIC_IPR28_R_NVIC_RES131_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR28_R_NVIC_RES131_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR28_R_NVIC_RES131_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR28_R_NVIC_RES131_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR28_R_NVIC_RES131_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR28_R_NVIC_RES131_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR28_R_NVIC_RES131_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR28_R_NVIC_RES131_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR28_NVIC_RES131_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR28_NVIC_RES131_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR28_NVIC_RES131_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR28_NVIC_RES131_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR28_NVIC_RES131_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR28_NVIC_RES131_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR28_NVIC_RES131_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR28_NVIC_RES131_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR28_NVIC_RES131_IP7      ((uint32_t)0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* IPR29 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR29            (((IPR29_TypeDef*)(NVIC_BASE+NVIC_IPR29_OFFSET)))
#define NVIC_IPR29_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR29_OFFSET)))

/*----------*/
#define NVIC_IPR29_R_NVIC_RES132_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR29_R_NVIC_RES132_BIT       (5)
#define NVIC_IPR29_R_NVIC_RES132_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR29_R_NVIC_RES132_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR29_R_NVIC_RES132_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR29_R_NVIC_RES132_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR29_R_NVIC_RES132_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR29_R_NVIC_RES132_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR29_R_NVIC_RES132_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR29_R_NVIC_RES132_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR29_NVIC_RES132_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR29_NVIC_RES132_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR29_NVIC_RES132_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR29_NVIC_RES132_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR29_NVIC_RES132_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR29_NVIC_RES132_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR29_NVIC_RES132_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR29_NVIC_RES132_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR29_NVIC_RES132_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR29_R_NVIC_RES133_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR29_R_NVIC_RES133_BIT   (13)
#define NVIC_IPR29_R_NVIC_RES133_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR29_R_NVIC_RES133_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR29_R_NVIC_RES133_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR29_R_NVIC_RES133_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR29_R_NVIC_RES133_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR29_R_NVIC_RES133_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR29_R_NVIC_RES133_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR29_R_NVIC_RES133_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR29_NVIC_RES133_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR29_NVIC_RES133_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR29_NVIC_RES133_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR29_NVIC_RES133_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR29_NVIC_RES133_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR29_NVIC_RES133_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR29_NVIC_RES133_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR29_NVIC_RES133_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR29_NVIC_RES133_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR29_R_NVIC_RES134_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR29_R_NVIC_RES134_BIT    (21)
#define NVIC_IPR29_R_NVIC_RES134_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR29_R_NVIC_RES134_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR29_R_NVIC_RES134_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR29_R_NVIC_RES134_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR29_R_NVIC_RES134_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR29_R_NVIC_RES134_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR29_R_NVIC_RES134_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR29_R_NVIC_RES134_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR29_NVIC_RES134_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR29_NVIC_RES134_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR29_NVIC_RES134_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR29_NVIC_RES134_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR29_NVIC_RES134_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR29_NVIC_RES134_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR29_NVIC_RES134_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR29_NVIC_RES134_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR29_NVIC_RES134_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR29_R_NVIC_RES135_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR29_R_NVIC_RES135_BIT    (29)
#define NVIC_IPR29_R_NVIC_RES135_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR29_R_NVIC_RES135_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR29_R_NVIC_RES135_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR29_R_NVIC_RES135_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR29_R_NVIC_RES135_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR29_R_NVIC_RES135_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR29_R_NVIC_RES135_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR29_R_NVIC_RES135_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR29_NVIC_RES135_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR29_NVIC_RES135_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR29_NVIC_RES135_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR29_NVIC_RES135_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR29_NVIC_RES135_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR29_NVIC_RES135_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR29_NVIC_RES135_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR29_NVIC_RES135_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR29_NVIC_RES135_IP7      ((uint32_t)0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* IPR30 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR30            (((IPR30_TypeDef*)(NVIC_BASE+NVIC_IPR30_OFFSET)))
#define NVIC_IPR30_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR30_OFFSET)))

/*----------*/
#define NVIC_IPR30_R_NVIC_RES136_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR30_R_NVIC_RES136_BIT       (5)
#define NVIC_IPR30_R_NVIC_RES136_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR30_R_NVIC_RES136_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR30_R_NVIC_RES136_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR30_R_NVIC_RES136_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR30_R_NVIC_RES136_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR30_R_NVIC_RES136_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR30_R_NVIC_RES136_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR30_R_NVIC_RES136_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR30_NVIC_RES136_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR30_NVIC_RES136_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR30_NVIC_RES136_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR30_NVIC_RES136_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR30_NVIC_RES136_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR30_NVIC_RES136_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR30_NVIC_RES136_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR30_NVIC_RES136_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR30_NVIC_RES136_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR30_R_NVIC_RES137_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR30_R_NVIC_RES137_BIT   (13)
#define NVIC_IPR30_R_NVIC_RES137_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR30_R_NVIC_RES137_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR30_R_NVIC_RES137_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR30_R_NVIC_RES137_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR30_R_NVIC_RES137_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR30_R_NVIC_RES137_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR30_R_NVIC_RES137_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR30_R_NVIC_RES137_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR30_NVIC_RES137_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR30_NVIC_RES137_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR30_NVIC_RES137_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR30_NVIC_RES137_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR30_NVIC_RES137_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR30_NVIC_RES137_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR30_NVIC_RES137_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR30_NVIC_RES137_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR30_NVIC_RES137_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR30_R_NVIC_RES138_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR30_R_NVIC_RES138_BIT    (21)
#define NVIC_IPR30_R_NVIC_RES138_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR30_R_NVIC_RES138_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR30_R_NVIC_RES138_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR30_R_NVIC_RES138_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR30_R_NVIC_RES138_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR30_R_NVIC_RES138_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR30_R_NVIC_RES138_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR30_R_NVIC_RES138_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR30_NVIC_RES138_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR30_NVIC_RES138_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR30_NVIC_RES138_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR30_NVIC_RES138_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR30_NVIC_RES138_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR30_NVIC_RES138_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR30_NVIC_RES138_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR30_NVIC_RES138_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR30_NVIC_RES138_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR30_R_NVIC_RES139_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR30_R_NVIC_RES139_BIT    (29)
#define NVIC_IPR30_R_NVIC_RES139_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR30_R_NVIC_RES139_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR30_R_NVIC_RES139_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR30_R_NVIC_RES139_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR30_R_NVIC_RES139_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR30_R_NVIC_RES139_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR30_R_NVIC_RES139_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR30_R_NVIC_RES139_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR30_NVIC_RES139_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR30_NVIC_RES139_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR30_NVIC_RES139_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR30_NVIC_RES139_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR30_NVIC_RES139_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR30_NVIC_RES139_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR30_NVIC_RES139_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR30_NVIC_RES139_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR30_NVIC_RES139_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* IPR31 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR31            (((IPR31_TypeDef*)(NVIC_BASE+NVIC_IPR31_OFFSET)))
#define NVIC_IPR31_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR31_OFFSET)))

/*----------*/
#define NVIC_IPR31_R_NVIC_RES140_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR31_R_NVIC_RES140_BIT       (5)
#define NVIC_IPR31_R_NVIC_RES140_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR31_R_NVIC_RES140_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR31_R_NVIC_RES140_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR31_R_NVIC_RES140_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR31_R_NVIC_RES140_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR31_R_NVIC_RES140_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR31_R_NVIC_RES140_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR31_R_NVIC_RES140_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR31_NVIC_RES140_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR31_NVIC_RES140_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR31_NVIC_RES140_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR31_NVIC_RES140_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR31_NVIC_RES140_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR31_NVIC_RES140_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR31_NVIC_RES140_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR31_NVIC_RES140_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR31_NVIC_RES140_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR31_R_NVIC_RES141_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR31_R_NVIC_RES141_BIT   (13)
#define NVIC_IPR31_R_NVIC_RES141_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR31_R_NVIC_RES141_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR31_R_NVIC_RES141_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR31_R_NVIC_RES141_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR31_R_NVIC_RES141_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR31_R_NVIC_RES141_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR31_R_NVIC_RES141_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR31_R_NVIC_RES141_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR31_NVIC_RES141_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR31_NVIC_RES141_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR31_NVIC_RES141_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR31_NVIC_RES141_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR31_NVIC_RES141_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR31_NVIC_RES141_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR31_NVIC_RES141_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR31_NVIC_RES141_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR31_NVIC_RES141_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR31_R_NVIC_RES142_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR31_R_NVIC_RES142_BIT    (21)
#define NVIC_IPR31_R_NVIC_RES142_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR31_R_NVIC_RES142_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR31_R_NVIC_RES142_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR31_R_NVIC_RES142_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR31_R_NVIC_RES142_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR31_R_NVIC_RES142_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR31_R_NVIC_RES142_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR31_R_NVIC_RES142_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR31_NVIC_RES142_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR31_NVIC_RES142_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR31_NVIC_RES142_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR31_NVIC_RES142_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR31_NVIC_RES142_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR31_NVIC_RES142_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR31_NVIC_RES142_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR31_NVIC_RES142_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR31_NVIC_RES142_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR31_R_NVIC_RES143_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR31_R_NVIC_RES143_BIT    (29)
#define NVIC_IPR31_R_NVIC_RES143_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR31_R_NVIC_RES143_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR31_R_NVIC_RES143_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR31_R_NVIC_RES143_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR31_R_NVIC_RES143_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR31_R_NVIC_RES143_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR31_R_NVIC_RES143_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR31_R_NVIC_RES143_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR31_NVIC_RES143_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR31_NVIC_RES143_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR31_NVIC_RES143_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR31_NVIC_RES143_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR31_NVIC_RES143_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR31_NVIC_RES143_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR31_NVIC_RES143_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR31_NVIC_RES143_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR31_NVIC_RES143_IP7      ((uint32_t)0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* IPR32 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR32            (((IPR32_TypeDef*)(NVIC_BASE+NVIC_IPR32_OFFSET)))
#define NVIC_IPR32_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR32_OFFSET)))

/*----------*/
#define NVIC_IPR32_R_NVIC_RES144_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR32_R_NVIC_RES144_BIT       (5)
#define NVIC_IPR32_R_NVIC_RES144_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR32_R_NVIC_RES144_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR32_R_NVIC_RES144_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR32_R_NVIC_RES144_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR32_R_NVIC_RES144_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR32_R_NVIC_RES144_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR32_R_NVIC_RES144_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR32_R_NVIC_RES144_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR32_NVIC_RES144_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR32_NVIC_RES144_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR32_NVIC_RES144_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR32_NVIC_RES144_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR32_NVIC_RES144_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR32_NVIC_RES144_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR32_NVIC_RES144_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR32_NVIC_RES144_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR32_NVIC_RES144_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR32_R_NVIC_RES145_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR32_R_NVIC_RES145_BIT   (13)
#define NVIC_IPR32_R_NVIC_RES145_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR32_R_NVIC_RES145_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR32_R_NVIC_RES145_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR32_R_NVIC_RES145_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR32_R_NVIC_RES145_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR32_R_NVIC_RES145_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR32_R_NVIC_RES145_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR32_R_NVIC_RES145_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR32_NVIC_RES145_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR32_NVIC_RES145_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR32_NVIC_RES145_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR32_NVIC_RES145_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR32_NVIC_RES145_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR32_NVIC_RES145_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR32_NVIC_RES145_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR32_NVIC_RES145_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR32_NVIC_RES145_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR32_R_NVIC_RES146_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR32_R_NVIC_RES146_BIT    (21)
#define NVIC_IPR32_R_NVIC_RES146_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR32_R_NVIC_RES146_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR32_R_NVIC_RES146_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR32_R_NVIC_RES146_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR32_R_NVIC_RES146_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR32_R_NVIC_RES146_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR32_R_NVIC_RES146_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR32_R_NVIC_RES146_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR32_NVIC_RES146_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR32_NVIC_RES146_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR32_NVIC_RES146_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR32_NVIC_RES146_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR32_NVIC_RES146_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR32_NVIC_RES146_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR32_NVIC_RES146_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR32_NVIC_RES146_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR32_NVIC_RES146_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR32_R_NVIC_RES147_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR32_R_NVIC_RES147_BIT    (29)
#define NVIC_IPR32_R_NVIC_RES147_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR32_R_NVIC_RES147_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR32_R_NVIC_RES147_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR32_R_NVIC_RES147_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR32_R_NVIC_RES147_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR32_R_NVIC_RES147_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR32_R_NVIC_RES147_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR32_R_NVIC_RES147_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR32_NVIC_RES147_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR32_NVIC_RES147_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR32_NVIC_RES147_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR32_NVIC_RES147_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR32_NVIC_RES147_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR32_NVIC_RES147_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR32_NVIC_RES147_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR32_NVIC_RES147_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR32_NVIC_RES147_IP7      ((uint32_t)0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* IPR33 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR33            (((IPR33_TypeDef*)(NVIC_BASE+NVIC_IPR33_OFFSET)))
#define NVIC_IPR33_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR33_OFFSET)))

/*----------*/
#define NVIC_IPR33_R_NVIC_RES148_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR33_R_NVIC_RES148_BIT       (5)
#define NVIC_IPR33_R_NVIC_RES148_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR33_R_NVIC_RES148_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR33_R_NVIC_RES148_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR33_R_NVIC_RES148_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR33_R_NVIC_RES148_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR33_R_NVIC_RES148_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR33_R_NVIC_RES148_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR33_R_NVIC_RES148_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR33_NVIC_RES148_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR33_NVIC_RES148_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR33_NVIC_RES148_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR33_NVIC_RES148_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR33_NVIC_RES148_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR33_NVIC_RES148_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR33_NVIC_RES148_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR33_NVIC_RES148_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR33_NVIC_RES148_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR33_R_NVIC_RES149_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR33_R_NVIC_RES149_BIT   (13)
#define NVIC_IPR33_R_NVIC_RES149_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR33_R_NVIC_RES149_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR33_R_NVIC_RES149_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR33_R_NVIC_RES149_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR33_R_NVIC_RES149_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR33_R_NVIC_RES149_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR33_R_NVIC_RES149_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR33_R_NVIC_RES149_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR33_NVIC_RES149_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR33_NVIC_RES149_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR33_NVIC_RES149_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR33_NVIC_RES149_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR33_NVIC_RES149_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR33_NVIC_RES149_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR33_NVIC_RES149_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR33_NVIC_RES149_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR33_NVIC_RES149_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR33_R_NVIC_PWM1GEN0_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN0_BIT    (21)
#define NVIC_IPR33_R_NVIC_PWM1GEN0_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN0_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN0_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN0_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN0_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN0_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN0_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN0_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR33_NVIC_PWM1GEN0_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR33_NVIC_PWM1GEN0_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR33_NVIC_PWM1GEN0_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR33_NVIC_PWM1GEN0_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR33_NVIC_PWM1GEN0_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR33_NVIC_PWM1GEN0_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR33_NVIC_PWM1GEN0_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR33_NVIC_PWM1GEN0_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR33_NVIC_PWM1GEN0_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR33_R_NVIC_PWM1GEN1_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN1_BIT    (29)
#define NVIC_IPR33_R_NVIC_PWM1GEN1_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN1_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN1_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN1_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN1_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN1_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN1_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR33_R_NVIC_PWM1GEN1_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR33_NVIC_PWM1GEN1_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR33_NVIC_PWM1GEN1_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR33_NVIC_PWM1GEN1_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR33_NVIC_PWM1GEN1_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR33_NVIC_PWM1GEN1_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR33_NVIC_PWM1GEN1_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR33_NVIC_PWM1GEN1_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR33_NVIC_PWM1GEN1_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR33_NVIC_PWM1GEN1_IP7      ((uint32_t)0x00000007u)
/*----------*/

/********************************************************************************************/
/************************************* IPR34 ***********************************************/
/******************************************************************************************/

#define NVIC_IPR34            (((IPR34_TypeDef*)(NVIC_BASE+NVIC_IPR34_OFFSET)))
#define NVIC_IPR34_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_IPR34_OFFSET)))

/*----------*/
#define NVIC_IPR34_R_NVIC_PWM1GEN2_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR34_R_NVIC_PWM1GEN2_BIT       (5)
#define NVIC_IPR34_R_NVIC_PWM1GEN2_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR34_R_NVIC_PWM1GEN2_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR34_R_NVIC_PWM1GEN2_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR34_R_NVIC_PWM1GEN2_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR34_R_NVIC_PWM1GEN2_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR34_R_NVIC_PWM1GEN2_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR34_R_NVIC_PWM1GEN2_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR34_R_NVIC_PWM1GEN2_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR34_NVIC_PWM1GEN2_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR34_NVIC_PWM1GEN2_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR34_NVIC_PWM1GEN2_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR34_NVIC_PWM1GEN2_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR34_NVIC_PWM1GEN2_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR34_NVIC_PWM1GEN2_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR34_NVIC_PWM1GEN2_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR34_NVIC_PWM1GEN2_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR34_NVIC_PWM1GEN2_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR34_R_NVIC_PWM1GEN3_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR34_R_NVIC_PWM1GEN3_BIT   (13)
#define NVIC_IPR34_R_NVIC_PWM1GEN3_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR34_R_NVIC_PWM1GEN3_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR34_R_NVIC_PWM1GEN3_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR34_R_NVIC_PWM1GEN3_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR34_R_NVIC_PWM1GEN3_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR34_R_NVIC_PWM1GEN3_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR34_R_NVIC_PWM1GEN3_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR34_R_NVIC_PWM1GEN3_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR34_NVIC_PWM1GEN3_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR34_NVIC_PWM1GEN3_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR34_NVIC_PWM1GEN3_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR34_NVIC_PWM1GEN3_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR34_NVIC_PWM1GEN3_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR34_NVIC_PWM1GEN3_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR34_NVIC_PWM1GEN3_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR34_NVIC_PWM1GEN3_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR34_NVIC_PWM1GEN3_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR34_R_NVIC_PWM1FAULT_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR34_R_NVIC_PWM1FAULT_BIT    (21)
#define NVIC_IPR34_R_NVIC_PWM1FAULT_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR34_R_NVIC_PWM1FAULT_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR34_R_NVIC_PWM1FAULT_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR34_R_NVIC_PWM1FAULT_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR34_R_NVIC_PWM1FAULT_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR34_R_NVIC_PWM1FAULT_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR34_R_NVIC_PWM1FAULT_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR34_R_NVIC_PWM1FAULT_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR34_NVIC_PWM1FAULT_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR34_NVIC_PWM1FAULT_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR34_NVIC_PWM1FAULT_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR34_NVIC_PWM1FAULT_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR34_NVIC_PWM1FAULT_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR34_NVIC_PWM1FAULT_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR34_NVIC_PWM1FAULT_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR34_NVIC_PWM1FAULT_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR34_NVIC_PWM1FAULT_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR34_R_NVIC_RES155_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR34_R_NVIC_RES155_BIT    (29)
#define NVIC_IPR34_R_NVIC_RES155_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR34_R_NVIC_RES155_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR34_R_NVIC_RES155_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR34_R_NVIC_RES155_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR34_R_NVIC_RES155_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR34_R_NVIC_RES155_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR34_R_NVIC_RES155_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR34_R_NVIC_RES155_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR34_NVIC_RES155_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR34_NVIC_RES155_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR34_NVIC_RES155_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR34_NVIC_RES155_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR34_NVIC_RES155_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR34_NVIC_RES155_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR34_NVIC_RES155_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR34_NVIC_RES155_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR34_NVIC_RES155_IP7      ((uint32_t)0x00000007u)
/*----------*/


/********************************************************************************************/
/************************************* STIR ***********************************************/
/******************************************************************************************/

#define NVIC_STIR            (((STIR_TypeDef*)(NVIC_BASE+NVIC_STIR_OFFSET)))
#define NVIC_STIR_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_STIR_OFFSET)))


/*----------*/
#define NVIC_STIR_R_INTID_MASK      ((uint32_t)0x000000FFu)
#define NVIC_STIR_R_INTID_BIT       (0)
#define NVIC_STIR_R_INTID_GPIOA      ((uint32_t)0x00000000u)
#define NVIC_STIR_R_INTID_GPIOB      ((uint32_t)0x00000001u)
#define NVIC_STIR_R_INTID_GPIOC      ((uint32_t)0x00000002u)
#define NVIC_STIR_R_INTID_GPIOD      ((uint32_t)0x00000003u)
#define NVIC_STIR_R_INTID_GPIOE      ((uint32_t)0x00000004u)
#define NVIC_STIR_R_INTID_UART0      ((uint32_t)0x00000005u)
#define NVIC_STIR_R_INTID_UART1      ((uint32_t)0x00000006u)
#define NVIC_STIR_R_INTID_SSI0       ((uint32_t)0x00000007u)
#define NVIC_STIR_R_INTID_I2C0       ((uint32_t)0x00000008u)
#define NVIC_STIR_R_INTID_PWM0FAULT   ((uint32_t)0x00000009u)
#define NVIC_STIR_R_INTID_PWM0GEN0    ((uint32_t)0x0000000Au)
#define NVIC_STIR_R_INTID_PWM0GEN1    ((uint32_t)0x0000000Bu)
#define NVIC_STIR_R_INTID_PWM0GEN2    ((uint32_t)0x0000000Cu)
#define NVIC_STIR_R_INTID_QEI0       ((uint32_t)0x0000000Du)
#define NVIC_STIR_R_INTID_ADC0SEQ0   ((uint32_t)0x0000000Eu)
#define NVIC_STIR_R_INTID_ADC0SEQ1   ((uint32_t)0x0000000Fu)
#define NVIC_STIR_R_INTID_ADC0SEQ2   ((uint32_t)0x00000010u)
#define NVIC_STIR_R_INTID_ADC0SEQ3   ((uint32_t)0x00000011u)
#define NVIC_STIR_R_INTID_WDT01      ((uint32_t)0x00000012u)
#define NVIC_STIR_R_INTID_TIMER0A    ((uint32_t)0x00000013u)
#define NVIC_STIR_R_INTID_TIMER0B    ((uint32_t)0x00000014u)
#define NVIC_STIR_R_INTID_TIMER1A    ((uint32_t)0x00000015u)
#define NVIC_STIR_R_INTID_TIMER1B    ((uint32_t)0x00000016u)
#define NVIC_STIR_R_INTID_TIMER2A    ((uint32_t)0x00000017u)
#define NVIC_STIR_R_INTID_TIMER2B    ((uint32_t)0x00000018u)
#define NVIC_STIR_R_INTID_ACOMP0     ((uint32_t)0x00000019u)
#define NVIC_STIR_R_INTID_ACOMP1     ((uint32_t)0x0000001Au)
#define NVIC_STIR_R_INTID_RES43      ((uint32_t)0x0000001Bu)
#define NVIC_STIR_R_INTID_SYSCTL     ((uint32_t)0x0000001Cu)
#define NVIC_STIR_R_INTID_FLASH      ((uint32_t)0x0000001Du)
#define NVIC_STIR_R_INTID_GPIOF      ((uint32_t)0x0000001Eu)
#define NVIC_STIR_R_INTID_RES47      ((uint32_t)0x0000001Fu)
#define NVIC_STIR_R_INTID_RES48      ((uint32_t)0x00000020u)
#define NVIC_STIR_R_INTID_UART2      ((uint32_t)0x00000021u)
#define NVIC_STIR_R_INTID_SSI1       ((uint32_t)0x00000022u)
#define NVIC_STIR_R_INTID_TIMER3A    ((uint32_t)0x00000023u)
#define NVIC_STIR_R_INTID_TIMER3B    ((uint32_t)0x00000024u)
#define NVIC_STIR_R_INTID_I2C1       ((uint32_t)0x00000025u)
#define NVIC_STIR_R_INTID_QEI1       ((uint32_t)0x00000026u)
#define NVIC_STIR_R_INTID_CAN0       ((uint32_t)0x00000027u)
#define NVIC_STIR_R_INTID_CAN1       ((uint32_t)0x00000028u)
#define NVIC_STIR_R_INTID_RES57      ((uint32_t)0x00000029u)
#define NVIC_STIR_R_INTID_RES58      ((uint32_t)0x0000002Au)
#define NVIC_STIR_R_INTID_HIB        ((uint32_t)0x0000002Bu)
#define NVIC_STIR_R_INTID_USB        ((uint32_t)0x0000002Cu)
#define NVIC_STIR_R_INTID_PWM0GEN3   ((uint32_t)0x0000002Du)
#define NVIC_STIR_R_INTID_UDMASOFT   ((uint32_t)0x0000002Eu)
#define NVIC_STIR_R_INTID_UDMAERROR  ((uint32_t)0x0000002Fu)
#define NVIC_STIR_R_INTID_ADC1SEQ0   ((uint32_t)0x00000030u)
#define NVIC_STIR_R_INTID_ADC1SEQ1   ((uint32_t)0x00000031u)
#define NVIC_STIR_R_INTID_ADC1SEQ2   ((uint32_t)0x00000032u)
#define NVIC_STIR_R_INTID_ADC1SEQ3   ((uint32_t)0x00000033u)
#define NVIC_STIR_R_INTID_RES68      ((uint32_t)0x00000034u)
#define NVIC_STIR_R_INTID_RES69      ((uint32_t)0x00000035u)
#define NVIC_STIR_R_INTID_RES70      ((uint32_t)0x00000036u)
#define NVIC_STIR_R_INTID_RES71      ((uint32_t)0x00000037u)
#define NVIC_STIR_R_INTID_RES72      ((uint32_t)0x00000038u)
#define NVIC_STIR_R_INTID_SSI2       ((uint32_t)0x00000039u)
#define NVIC_STIR_R_INTID_SSI3       ((uint32_t)0x0000003Au)
#define NVIC_STIR_R_INTID_UART3      ((uint32_t)0x0000003Bu)
#define NVIC_STIR_R_INTID_UART4      ((uint32_t)0x0000003Cu)
#define NVIC_STIR_R_INTID_UART5      ((uint32_t)0x0000003Du)
#define NVIC_STIR_R_INTID_UART6      ((uint32_t)0x0000003Eu)
#define NVIC_STIR_R_INTID_UART7      ((uint32_t)0x0000003Fu)
#define NVIC_STIR_R_INTID_RES80      ((uint32_t)0x00000040u)
#define NVIC_STIR_R_INTID_RES81      ((uint32_t)0x00000041u)
#define NVIC_STIR_R_INTID_RES82      ((uint32_t)0x00000042u)
#define NVIC_STIR_R_INTID_RES83      ((uint32_t)0x00000043u)
#define NVIC_STIR_R_INTID_I2C2       ((uint32_t)0x00000044u)
#define NVIC_STIR_R_INTID_I2C3       ((uint32_t)0x00000045u)
#define NVIC_STIR_R_INTID_TIMER4A    ((uint32_t)0x00000046u)
#define NVIC_STIR_R_INTID_TIMER4B    ((uint32_t)0x00000047u)
#define NVIC_STIR_R_INTID_RES88      ((uint32_t)0x00000048u)
#define NVIC_STIR_R_INTID_RES89      ((uint32_t)0x00000049u)
#define NVIC_STIR_R_INTID_RES90      ((uint32_t)0x0000004Au)
#define NVIC_STIR_R_INTID_RES91      ((uint32_t)0x0000004Bu)
#define NVIC_STIR_R_INTID_RES92      ((uint32_t)0x0000004Cu)
#define NVIC_STIR_R_INTID_RES93      ((uint32_t)0x0000004Du)
#define NVIC_STIR_R_INTID_RES94      ((uint32_t)0x0000004Eu)
#define NVIC_STIR_R_INTID_RES95      ((uint32_t)0x0000004Fu)
#define NVIC_STIR_R_INTID_RES96      ((uint32_t)0x00000050u)
#define NVIC_STIR_R_INTID_RES97      ((uint32_t)0x00000051u)
#define NVIC_STIR_R_INTID_RES98      ((uint32_t)0x00000052u)
#define NVIC_STIR_R_INTID_RES99      ((uint32_t)0x00000053u)
#define NVIC_STIR_R_INTID_RES100     ((uint32_t)0x00000054u)
#define NVIC_STIR_R_INTID_RES101     ((uint32_t)0x00000055u)
#define NVIC_STIR_R_INTID_RES102     ((uint32_t)0x00000056u)
#define NVIC_STIR_R_INTID_RES103     ((uint32_t)0x00000057u)
#define NVIC_STIR_R_INTID_RES104     ((uint32_t)0x00000058u)
#define NVIC_STIR_R_INTID_RES105     ((uint32_t)0x00000059u)
#define NVIC_STIR_R_INTID_RES106     ((uint32_t)0x0000005Au)
#define NVIC_STIR_R_INTID_RES107     ((uint32_t)0x0000005Bu)
#define NVIC_STIR_R_INTID_TIMER5A    ((uint32_t)0x0000005Cu)
#define NVIC_STIR_R_INTID_TIMER5B    ((uint32_t)0x0000005Du)
#define NVIC_STIR_R_INTID_WTIMER0A   ((uint32_t)0x0000005Eu)
#define NVIC_STIR_R_INTID_WTIMER0B   ((uint32_t)0x0000005Fu)
#define NVIC_STIR_R_INTID_WTIMER1A   ((uint32_t)0x00000060u)
#define NVIC_STIR_R_INTID_WTIMER1B   ((uint32_t)0x00000061u)
#define NVIC_STIR_R_INTID_WTIMER2A   ((uint32_t)0x00000062u)
#define NVIC_STIR_R_INTID_WTIMER2B   ((uint32_t)0x00000063u)
#define NVIC_STIR_R_INTID_WTIMER3A   ((uint32_t)0x00000064u)
#define NVIC_STIR_R_INTID_WTIMER3B   ((uint32_t)0x00000065u)
#define NVIC_STIR_R_INTID_WTIMER4A   ((uint32_t)0x00000066u)
#define NVIC_STIR_R_INTID_WTIMER4B   ((uint32_t)0x00000067u)
#define NVIC_STIR_R_INTID_WTIMER5A   ((uint32_t)0x00000068u)
#define NVIC_STIR_R_INTID_WTIMER5B   ((uint32_t)0x00000069u)
#define NVIC_STIR_R_INTID_SYSEXC     ((uint32_t)0x0000006Au)
#define NVIC_STIR_R_INTID_RES123     ((uint32_t)0x0000006Bu)
#define NVIC_STIR_R_INTID_RES124     ((uint32_t)0x0000006Cu)
#define NVIC_STIR_R_INTID_RES125     ((uint32_t)0x0000006Du)
#define NVIC_STIR_R_INTID_RES126     ((uint32_t)0x0000006Eu)
#define NVIC_STIR_R_INTID_RES127     ((uint32_t)0x0000006Fu)
#define NVIC_STIR_R_INTID_RES128     ((uint32_t)0x00000070u)
#define NVIC_STIR_R_INTID_RES129     ((uint32_t)0x00000071u)
#define NVIC_STIR_R_INTID_RES130     ((uint32_t)0x00000072u)
#define NVIC_STIR_R_INTID_RES131     ((uint32_t)0x00000073u)
#define NVIC_STIR_R_INTID_RES132     ((uint32_t)0x00000074u)
#define NVIC_STIR_R_INTID_RES133     ((uint32_t)0x00000075u)
#define NVIC_STIR_R_INTID_RES134     ((uint32_t)0x00000076u)
#define NVIC_STIR_R_INTID_RES135     ((uint32_t)0x00000077u)
#define NVIC_STIR_R_INTID_RES136     ((uint32_t)0x00000078u)
#define NVIC_STIR_R_INTID_RES137     ((uint32_t)0x00000079u)
#define NVIC_STIR_R_INTID_RES138     ((uint32_t)0x0000007Au)
#define NVIC_STIR_R_INTID_RES139     ((uint32_t)0x0000007Bu)
#define NVIC_STIR_R_INTID_RES140     ((uint32_t)0x0000007Cu)
#define NVIC_STIR_R_INTID_RES141     ((uint32_t)0x0000007Du)
#define NVIC_STIR_R_INTID_RES142     ((uint32_t)0x0000007Eu)
#define NVIC_STIR_R_INTID_RES143     ((uint32_t)0x0000007Fu)
#define NVIC_STIR_R_INTID_RES144     ((uint32_t)0x00000080u)
#define NVIC_STIR_R_INTID_RES145     ((uint32_t)0x00000081u)
#define NVIC_STIR_R_INTID_RES146     ((uint32_t)0x00000082u)
#define NVIC_STIR_R_INTID_RES147     ((uint32_t)0x00000083u)
#define NVIC_STIR_R_INTID_RES148     ((uint32_t)0x00000084u)
#define NVIC_STIR_R_INTID_RES149     ((uint32_t)0x00000085u)
#define NVIC_STIR_R_INTID_PWM1GEN0   ((uint32_t)0x00000086u)
#define NVIC_STIR_R_INTID_PWM1GEN1   ((uint32_t)0x00000087u)
#define NVIC_STIR_R_INTID_PWM1GEN2   ((uint32_t)0x00000088u)
#define NVIC_STIR_R_INTID_PWM1GEN3   ((uint32_t)0x00000089u)
#define NVIC_STIR_R_INTID_PWM1FAULT  ((uint32_t)0x0000008Au)

#define NVIC_STIR_INTID_GPIOA     ((uint32_t)0x00000000u)
#define NVIC_STIR_INTID_GPIOB	    ((uint32_t)0x00000001u)
#define NVIC_STIR_INTID_GPIOC	    ((uint32_t)0x00000002u)
#define NVIC_STIR_INTID_GPIOD     ((uint32_t)0x00000003u)
#define NVIC_STIR_INTID_GPIOE     ((uint32_t)0x00000004u)
#define NVIC_STIR_INTID_UART0     ((uint32_t)0x00000005u)
#define NVIC_STIR_INTID_UART1     ((uint32_t)0x00000006u)
#define NVIC_STIR_INTID_SSI0      ((uint32_t)0x00000007u)
#define NVIC_STIR_INTID_I2C0      ((uint32_t)0x00000008u)
#define NVIC_STIR_INTID_PWM0FAULT  ((uint32_t)0x00000009u)
#define NVIC_STIR_INTID_PWM0GEN0   ((uint32_t)0x0000000Au)
#define NVIC_STIR_INTID_PWM0GEN1   ((uint32_t)0x0000000Bu)
#define NVIC_STIR_INTID_PWM0GEN2   ((uint32_t)0x0000000Cu)
#define NVIC_STIR_INTID_QEI0      ((uint32_t)0x0000000Du)
#define NVIC_STIR_INTID_ADC0SEQ0  ((uint32_t)0x0000000Eu)
#define NVIC_STIR_INTID_ADC0SEQ1  ((uint32_t)0x0000000Fu)
#define NVIC_STIR_INTID_ADC0SEQ2  ((uint32_t)0x00000010u)
#define NVIC_STIR_INTID_ADC0SEQ3  ((uint32_t)0x00000011u)
#define NVIC_STIR_INTID_WDT01     ((uint32_t)0x00000012u)
#define NVIC_STIR_INTID_TIMER0A   ((uint32_t)0x00000013u)
#define NVIC_STIR_INTID_TIMER0B   ((uint32_t)0x00000014u)
#define NVIC_STIR_INTID_TIMER1A   ((uint32_t)0x00000015u)
#define NVIC_STIR_INTID_TIMER1B   ((uint32_t)0x00000016u)
#define NVIC_STIR_INTID_TIMER2A   ((uint32_t)0x00000017u)
#define NVIC_STIR_INTID_TIMER2B   ((uint32_t)0x00000018u)
#define NVIC_STIR_INTID_ACOMP0    ((uint32_t)0x00000019u)
#define NVIC_STIR_INTID_ACOMP1	((uint32_t)0x0000001Au)
#define NVIC_STIR_INTID_RES43     ((uint32_t)0x0000001Bu)
#define NVIC_STIR_INTID_SYSCTL    ((uint32_t)0x0000001Cu)
#define NVIC_STIR_INTID_FLASH	    ((uint32_t)0x0000001Du)
#define NVIC_STIR_INTID_GPIOF     ((uint32_t)0x0000001Eu)
#define NVIC_STIR_INTID_RES47     ((uint32_t)0x0000001Fu)
#define NVIC_STIR_INTID_RES48	    ((uint32_t)0x00000020u)
#define NVIC_STIR_INTID_UART2	    ((uint32_t)0x00000021u)
#define NVIC_STIR_INTID_SSI1	    ((uint32_t)0x00000022u)
#define NVIC_STIR_INTID_TIMER3A   ((uint32_t)0x00000023u)
#define NVIC_STIR_INTID_TIMER3B   ((uint32_t)0x00000024u)
#define NVIC_STIR_INTID_I2C1      ((uint32_t)0x00000025u)
#define NVIC_STIR_INTID_QEI1      ((uint32_t)0x00000026u)
#define NVIC_STIR_INTID_CAN0      ((uint32_t)0x00000027u)
#define NVIC_STIR_INTID_CAN1	    ((uint32_t)0x00000028u)
#define NVIC_STIR_INTID_RES57	    ((uint32_t)0x00000029u)
#define NVIC_STIR_INTID_RES58	    ((uint32_t)0x0000002Au)
#define NVIC_STIR_INTID_HIB		((uint32_t)0x0000002Bu)
#define NVIC_STIR_INTID_USB	    ((uint32_t)0x0000002Cu)
#define NVIC_STIR_INTID_PWM0GEN3	((uint32_t)0x0000002Du)
#define NVIC_STIR_INTID_UDMASOFT  ((uint32_t)0x0000002Eu)
#define NVIC_STIR_INTID_UDMAERROR ((uint32_t)0x0000002Fu)
#define NVIC_STIR_INTID_ADC1SEQ0  ((uint32_t)0x00000030u)
#define NVIC_STIR_INTID_ADC1SEQ1  ((uint32_t)0x00000031u)
#define NVIC_STIR_INTID_ADC1SEQ2  ((uint32_t)0x00000032u)
#define NVIC_STIR_INTID_ADC1SEQ3  ((uint32_t)0x00000033u)
#define NVIC_STIR_INTID_RES68     ((uint32_t)0x00000034u)
#define NVIC_STIR_INTID_RES69	    ((uint32_t)0x00000035u)
#define NVIC_STIR_INTID_RES70	    ((uint32_t)0x00000036u)
#define NVIC_STIR_INTID_RES71	    ((uint32_t)0x00000037u)
#define NVIC_STIR_INTID_RES72	    ((uint32_t)0x00000038u)
#define NVIC_STIR_INTID_SSI2	    ((uint32_t)0x00000039u)
#define NVIC_STIR_INTID_SSI3	    ((uint32_t)0x0000003Au)
#define NVIC_STIR_INTID_UART3	    ((uint32_t)0x0000003Bu)
#define NVIC_STIR_INTID_UART4	    ((uint32_t)0x0000003Cu)
#define NVIC_STIR_INTID_UART5	    ((uint32_t)0x0000003Du)
#define NVIC_STIR_INTID_UART6	    ((uint32_t)0x0000003Eu)
#define NVIC_STIR_INTID_UART7	    ((uint32_t)0x0000003Fu)
#define NVIC_STIR_INTID_RES80	    ((uint32_t)0x00000040u)
#define NVIC_STIR_INTID_RES81	    ((uint32_t)0x00000041u)
#define NVIC_STIR_INTID_RES82	    ((uint32_t)0x00000042u)
#define NVIC_STIR_INTID_RES83	    ((uint32_t)0x00000043u)
#define NVIC_STIR_INTID_I2C2	    ((uint32_t)0x00000044u)
#define NVIC_STIR_INTID_I2C3	    ((uint32_t)0x00000045u)
#define NVIC_STIR_INTID_TIMER4A   ((uint32_t)0x00000046u)
#define NVIC_STIR_INTID_TIMER4B   ((uint32_t)0x00000047u)
#define NVIC_STIR_INTID_RES88	    ((uint32_t)0x00000048u)
#define NVIC_STIR_INTID_RES89	    ((uint32_t)0x00000049u)
#define NVIC_STIR_INTID_RES90		((uint32_t)0x0000004Au)
#define NVIC_STIR_INTID_RES91	    ((uint32_t)0x0000004Bu)
#define NVIC_STIR_INTID_RES92	    ((uint32_t)0x0000004Cu)
#define NVIC_STIR_INTID_RES93	    ((uint32_t)0x0000004Du)
#define NVIC_STIR_INTID_RES94	    ((uint32_t)0x0000004Eu)
#define NVIC_STIR_INTID_RES95	    ((uint32_t)0x0000004Fu)
#define NVIC_STIR_INTID_RES96	    ((uint32_t)0x00000050u)
#define NVIC_STIR_INTID_RES97	    ((uint32_t)0x00000051u)
#define NVIC_STIR_INTID_RES98	    ((uint32_t)0x00000052u)
#define NVIC_STIR_INTID_RES99	    ((uint32_t)0x00000053u)
#define NVIC_STIR_INTID_RES100    ((uint32_t)0x00000054u)
#define NVIC_STIR_INTID_RES101    ((uint32_t)0x00000055u)
#define NVIC_STIR_INTID_RES102    ((uint32_t)0x00000056u)
#define NVIC_STIR_INTID_RES103    ((uint32_t)0x00000057u)
#define NVIC_STIR_INTID_RES104    ((uint32_t)0x00000058u)
#define NVIC_STIR_INTID_RES105    ((uint32_t)0x00000059u)
#define NVIC_STIR_INTID_RES106    ((uint32_t)0x0000005Au)
#define NVIC_STIR_INTID_RES107    ((uint32_t)0x0000005Bu)
#define NVIC_STIR_INTID_TIMER5A   ((uint32_t)0x0000005Cu)
#define NVIC_STIR_INTID_TIMER5B   ((uint32_t)0x0000005Du)
#define NVIC_STIR_INTID_WTIMER0A  ((uint32_t)0x0000005Eu)
#define NVIC_STIR_INTID_WTIMER0B  ((uint32_t)0x0000005Fu)
#define NVIC_STIR_INTID_WTIMER1A  ((uint32_t)0x00000060u)
#define NVIC_STIR_INTID_WTIMER1B  ((uint32_t)0x00000061u)
#define NVIC_STIR_INTID_WTIMER2A   ((uint32_t)0x00000062u)
#define NVIC_STIR_INTID_WTIMER2B   ((uint32_t)0x00000063u)
#define NVIC_STIR_INTID_WTIMER3A   ((uint32_t)0x00000064u)
#define NVIC_STIR_INTID_WTIMER3B   ((uint32_t)0x00000065u)
#define NVIC_STIR_INTID_WTIMER4A   ((uint32_t)0x00000066u)
#define NVIC_STIR_INTID_WTIMER4B   ((uint32_t)0x00000067u)
#define NVIC_STIR_INTID_WTIMER5A   ((uint32_t)0x00000068u)
#define NVIC_STIR_INTID_WTIMER5B   ((uint32_t)0x00000069u)
#define NVIC_STIR_INTID_SYSEXC     ((uint32_t)0x0000006Au)
#define NVIC_STIR_INTID_RES123     ((uint32_t)0x0000006Bu)
#define NVIC_STIR_INTID_RES124     ((uint32_t)0x0000006Cu)
#define NVIC_STIR_INTID_RES125     ((uint32_t)0x0000006Du)
#define NVIC_STIR_INTID_RES126     ((uint32_t)0x0000006Eu)
#define NVIC_STIR_INTID_RES127     ((uint32_t)0x0000006Fu)
#define NVIC_STIR_INTID_RES128     ((uint32_t)0x00000070u)
#define NVIC_STIR_INTID_RES129     ((uint32_t)0x00000071u)
#define NVIC_STIR_INTID_RES130     ((uint32_t)0x00000072u)
#define NVIC_STIR_INTID_RES131     ((uint32_t)0x00000073u)
#define NVIC_STIR_INTID_RES132     ((uint32_t)0x00000074u)
#define NVIC_STIR_INTID_RES133     ((uint32_t)0x00000075u)
#define NVIC_STIR_INTID_RES134     ((uint32_t)0x00000076u)
#define NVIC_STIR_INTID_RES135     ((uint32_t)0x00000077u)
#define NVIC_STIR_INTID_RES136     ((uint32_t)0x00000078u)
#define NVIC_STIR_INTID_RES137     ((uint32_t)0x00000079u)
#define NVIC_STIR_INTID_RES138     ((uint32_t)0x0000007Au)
#define NVIC_STIR_INTID_RES139     ((uint32_t)0x0000007Bu)
#define NVIC_STIR_INTID_RES140     ((uint32_t)0x0000007Cu)
#define NVIC_STIR_INTID_RES141     ((uint32_t)0x0000007Du)
#define NVIC_STIR_INTID_RES142     ((uint32_t)0x0000007Eu)
#define NVIC_STIR_INTID_RES143     ((uint32_t)0x0000007Fu)
#define NVIC_STIR_INTID_RES144     ((uint32_t)0x00000080u)
#define NVIC_STIR_INTID_RES145     ((uint32_t)0x00000081u)
#define NVIC_STIR_INTID_RES146     ((uint32_t)0x00000082u)
#define NVIC_STIR_INTID_RES147     ((uint32_t)0x00000083u)
#define NVIC_STIR_INTID_RES148     ((uint32_t)0x00000084u)
#define NVIC_STIR_INTID_RES149     ((uint32_t)0x00000085u)
#define NVIC_STIR_INTID_PWM1GEN0   ((uint32_t)0x00000086u)
#define NVIC_STIR_INTID_PWM1GEN1   ((uint32_t)0x00000087u)
#define NVIC_STIR_INTID_PWM1GEN2   ((uint32_t)0x00000088u)
#define NVIC_STIR_INTID_PWM1GEN3   ((uint32_t)0x00000089u)
#define NVIC_STIR_INTID_PWM1FAULT  ((uint32_t)0x0000008Au)
/*----------*/-------
typedef enum
{
    NVIC_enOK =0u,
    NVIC_enERROR=1
}NVIC_nSTATUS;
typedef enum
{
    NVIC_enENABLE =0u,
    NVIC_enDISABLE=1
}NVIC_nENABLE;

typedef enum
{
    NVIC_enPENDING =0u,
    NVIC_enNOPENDING=1
}NVIC_nPENDING;
typedef enum
{
    NVIC_enACTIVE =0u,
    NVIC_enNOACTIVE=1
}NVIC_nACTIVE;


typedef enum
{
    NVIC_enPRI0=0u,
    NVIC_enPRI1=1u,
    NVIC_enPRI2=2u,
    NVIC_enPRI3=3u,
    NVIC_enPRI4=4u,
    NVIC_enPRI5=5u,
    NVIC_enPRI6=6u,
    NVIC_enPRI7=7u,
    NVIC_enDEFAULT=0xFFu,
}NVIC_nPRIORITY;
typedef enum
{
     NVIC_enSTIR_GPIOA      =(0x00000000u),
     NVIC_enSTIR_GPIOB      =(0x00000001u),
     NVIC_enSTIR_GPIOC      =(0x00000002u),
     NVIC_enSTIR_GPIOD      =(0x00000003u),
     NVIC_enSTIR_GPIOE      =(0x00000004u),
     NVIC_enSTIR_UART0      =(0x00000005u),
     NVIC_enSTIR_UART1      =(0x00000006u),
     NVIC_enSTIR_SSI0       =(0x00000007u),
     NVIC_enSTIR_I2C0       =(0x00000008u),
     NVIC_enSTIR_PWM0FAULT   =(0x00000009u),
     NVIC_enSTIR_PWM0GEN0    =(0x0000000Au),
     NVIC_enSTIR_PWM0GEN1    =(0x0000000Bu),
     NVIC_enSTIR_PWM0GEN2    =(0x0000000Cu),
     NVIC_enSTIR_QEI0       =(0x0000000Du),
     NVIC_enSTIR_ADC0SEQ0   =(0x0000000Eu),
     NVIC_enSTIR_ADC0SEQ1   =(0x0000000Fu),
     NVIC_enSTIR_ADC0SEQ2   =(0x00000010u),
     NVIC_enSTIR_ADC0SEQ3   =(0x00000011u),
     NVIC_enSTIR_WDT01      =(0x00000012u),
     NVIC_enSTIR_TIMER0A    =(0x00000013u),
     NVIC_enSTIR_TIMER0B    =(0x00000014u),
     NVIC_enSTIR_TIMER1A    =(0x00000015u),
     NVIC_enSTIR_TIMER1B    =(0x00000016u),
     NVIC_enSTIR_TIMER2A    =(0x00000017u),
     NVIC_enSTIR_TIMER2B    =(0x00000018u),
     NVIC_enSTIR_ACOMP0     =(0x00000019u),
     NVIC_enSTIR_ACOMP1     =(0x0000001Au),
     NVIC_enSTIR_RES43      =(0x0000001Bu),
     NVIC_enSTIR_SYSCTL     =(0x0000001Cu),
     NVIC_enSTIR_FLASH      =(0x0000001Du),
     NVIC_enSTIR_GPIOF      =(0x0000001Eu),
     NVIC_enSTIR_RES47      =(0x0000001Fu),
     NVIC_enSTIR_RES48      =(0x00000020u),
     NVIC_enSTIR_UART2      =(0x00000021u),
     NVIC_enSTIR_SSI1       =(0x00000022u),
     NVIC_enSTIR_TIMER3A    =(0x00000023u),
     NVIC_enSTIR_TIMER3B    =(0x00000024u),
     NVIC_enSTIR_I2C1       =(0x00000025u),
     NVIC_enSTIR_QEI1       =(0x00000026u),
     NVIC_enSTIR_CAN0       =(0x00000027u),
     NVIC_enSTIR_CAN1       =(0x00000028u),
     NVIC_enSTIR_RES57      =(0x00000029u),
     NVIC_enSTIR_RES58      =(0x0000002Au),
     NVIC_enSTIR_HIB        =(0x0000002Bu),
     NVIC_enSTIR_USB        =(0x0000002Cu),
     NVIC_enSTIR_PWM0GEN3   =(0x0000002Du),
     NVIC_enSTIR_UDMASOFT   =(0x0000002Eu),
     NVIC_enSTIR_UDMAERROR  =(0x0000002Fu),
     NVIC_enSTIR_ADC1SEQ0   =(0x00000030u),
     NVIC_enSTIR_ADC1SEQ1   =(0x00000031u),
     NVIC_enSTIR_ADC1SEQ2   =(0x00000032u),
     NVIC_enSTIR_ADC1SEQ3   =(0x00000033u),
     NVIC_enSTIR_RES68      =(0x00000034u),
     NVIC_enSTIR_RES69      =(0x00000035u),
     NVIC_enSTIR_RES70      =(0x00000036u),
     NVIC_enSTIR_RES71      =(0x00000037u),
     NVIC_enSTIR_RES72      =(0x00000038u),
     NVIC_enSTIR_SSI2       =(0x00000039u),
     NVIC_enSTIR_SSI3       =(0x0000003Au),
     NVIC_enSTIR_UART3      =(0x0000003Bu),
     NVIC_enSTIR_UART4      =(0x0000003Cu),
     NVIC_enSTIR_UART5      =(0x0000003Du),
     NVIC_enSTIR_UART6      =(0x0000003Eu),
     NVIC_enSTIR_UART7      =(0x0000003Fu),
     NVIC_enSTIR_RES80      =(0x00000040u),
     NVIC_enSTIR_RES81      =(0x00000041u),
     NVIC_enSTIR_RES82      =(0x00000042u),
     NVIC_enSTIR_RES83      =(0x00000043u),
     NVIC_enSTIR_I2C2       =(0x00000044u),
     NVIC_enSTIR_I2C3       =(0x00000045u),
     NVIC_enSTIR_TIMER4A    =(0x00000046u),
     NVIC_enSTIR_TIMER4B    =(0x00000047u),
     NVIC_enSTIR_RES88      =(0x00000048u),
     NVIC_enSTIR_RES89      =(0x00000049u),
     NVIC_enSTIR_RES90      =(0x0000004Au),
     NVIC_enSTIR_RES91      =(0x0000004Bu),
     NVIC_enSTIR_RES92      =(0x0000004Cu),
     NVIC_enSTIR_RES93      =(0x0000004Du),
     NVIC_enSTIR_RES94      =(0x0000004Eu),
     NVIC_enSTIR_RES95      =(0x0000004Fu),
     NVIC_enSTIR_RES96      =(0x00000050u),
     NVIC_enSTIR_RES97      =(0x00000051u),
     NVIC_enSTIR_RES98      =(0x00000052u),
     NVIC_enSTIR_RES99      =(0x00000053u),
     NVIC_enSTIR_RES100     =(0x00000054u),
     NVIC_enSTIR_RES101     =(0x00000055u),
     NVIC_enSTIR_RES102     =(0x00000056u),
     NVIC_enSTIR_RES103     =(0x00000057u),
     NVIC_enSTIR_RES104     =(0x00000058u),
     NVIC_enSTIR_RES105     =(0x00000059u),
     NVIC_enSTIR_RES106     =(0x0000005Au),
     NVIC_enSTIR_RES107     =(0x0000005Bu),
     NVIC_enSTIR_TIMER5A    =(0x0000005Cu),
     NVIC_enSTIR_TIMER5B    =(0x0000005Du),
     NVIC_enSTIR_WTIMER0A   =(0x0000005Eu),
     NVIC_enSTIR_WTIMER0B   =(0x0000005Fu),
     NVIC_enSTIR_WTIMER1A   =(0x00000060u),
     NVIC_enSTIR_WTIMER1B   =(0x00000061u),
     NVIC_enSTIR_WTIMER2A   =(0x00000062u),
     NVIC_enSTIR_WTIMER2B   =(0x00000063u),
     NVIC_enSTIR_WTIMER3A   =(0x00000064u),
     NVIC_enSTIR_WTIMER3B   =(0x00000065u),
     NVIC_enSTIR_WTIMER4A   =(0x00000066u),
     NVIC_enSTIR_WTIMER4B   =(0x00000067u),
     NVIC_enSTIR_WTIMER5A   =(0x00000068u),
     NVIC_enSTIR_WTIMER5B   =(0x00000069u),
     NVIC_enSTIR_SYSEXC     =(0x0000006Au),
     NVIC_enSTIR_RES123     =(0x0000006Bu),
     NVIC_enSTIR_RES124     =(0x0000006Cu),
     NVIC_enSTIR_RES125     =(0x0000006Du),
     NVIC_enSTIR_RES126     =(0x0000006Eu),
     NVIC_enSTIR_RES127     =(0x0000006Fu),
     NVIC_enSTIR_RES128     =(0x00000070u),
     NVIC_enSTIR_RES129     =(0x00000071u),
     NVIC_enSTIR_RES130     =(0x00000072u),
     NVIC_enSTIR_RES131     =(0x00000073u),
     NVIC_enSTIR_RES132     =(0x00000074u),
     NVIC_enSTIR_RES133     =(0x00000075u),
     NVIC_enSTIR_RES134     =(0x00000076u),
     NVIC_enSTIR_RES135     =(0x00000077u),
     NVIC_enSTIR_RES136     =(0x00000078u),
     NVIC_enSTIR_RES137     =(0x00000079u),
     NVIC_enSTIR_RES138     =(0x0000007Au),
     NVIC_enSTIR_RES139     =(0x0000007Bu),
     NVIC_enSTIR_RES140     =(0x0000007Cu),
     NVIC_enSTIR_RES141     =(0x0000007Du),
     NVIC_enSTIR_RES142     =(0x0000007Eu),
     NVIC_enSTIR_RES143     =(0x0000007Fu),
     NVIC_enSTIR_RES144     =(0x00000080u),
     NVIC_enSTIR_RES145     =(0x00000081u),
     NVIC_enSTIR_RES146     =(0x00000082u),
     NVIC_enSTIR_RES147     =(0x00000083u),
     NVIC_enSTIR_RES148     =(0x00000084u),
     NVIC_enSTIR_RES149     =(0x00000085u),
     NVIC_enSTIR_PWM1GEN0   =(0x00000086u),
     NVIC_enSTIR_PWM1GEN1   =(0x00000087u),
     NVIC_enSTIR_PWM1GEN2   =(0x00000088u),
     NVIC_enSTIR_PWM1GEN3   =(0x00000089u),
     NVIC_enSTIR_PWM1FAULT  =(0x0000008Au),
}NVIC_nSTIR;

typedef enum
{/******  Cortex-M4 Processor Exceptions Numbers ****************************************************************/
      ThreadMode_IRQn             = -16,
      Reset_IRQn                 = -15,
      NonMaskableInt_IRQn         = -14,    /*!< 2 Non Maskable Interrupt                                          */
      HardFault_IRQn              = -13,
      MemoryManagement_IRQn       = -12,    /*!< 4 Cortex-M4 Memory Management Interrupt                           */
      BusFault_IRQn               = -11,    /*!< 5 Cortex-M4 Bus Fault Interrupt                                   */
      UsageFault_IRQn             = -10,    /*!< 6 Cortex-M4 Usage Fault Interrupt                                 */
      SVCall_IRQn                 = -5,     /*!< 11 Cortex-M4 SV Call Interrupt                                    */
      DebugMonitor_IRQn           = -4,     /*!< 12 Cortex-M4 Debug Monitor Interrupt                              */
      PendSV_IRQn                 = -2,     /*!< 14 Cortex-M4 Pend SV Interrupt                                    */
      SysTick_IRQn                = -1,     /*!< 15 Cortex-M4 System Tick Interrupt                                */
/******  TM4C specific Interrupt Numbers **********************************************************************/
      GPIOA_IRQn                = 0u,
      GPIOB_IRQn                = 1u,
      GPIOC_IRQn                = 2u,
      GPIOD_IRQn                = 3u,
      GPIOE_IRQn                = 4u,
      UART0_IRQn                = 5u,
      UART1_IRQn                = 6u,
      SSI0_IRQn                 = 7u,
      I2C0_IRQn                 = 8u,
      PWM0FAULT_IRQn             = 9u,
      PWM0GEN0_IRQn              = 10u,
      PWM0GEN1_IRQn              = 11u,
      PWM0GEN2_IRQn              = 12u,
      QEI0_IRQn                 = 13u,
      ADC0SEQ0_IRQn             = 14u,
      ADC0SEQ1_IRQn             = 15u,
      ADC0SEQ2_IRQn             = 16u,
      ADC0SEQ3_IRQn             = 17u,
      WDT01_IRQn                = 18u,
      TIMER0A_IRQn              = 19u,
      TIMER0B_IRQn              = 20u,
      TIMER1A_IRQn              = 21u,
      TIMER1B_IRQn              = 22u,
      TIMER2A_IRQn              = 23u,
      TIMER2B_IRQn              = 24u,
      ACOMP0_IRQn               = 25u,
      ACOMP1_IRQn               = 26u,
      RES43_IRQn                = 27u,
      SYSCTL_IRQn               = 28u,
      FLASH_IRQn                = 29u,
      GPIOF_IRQn                = 30u,
      RES47_IRQn                = 31u,
      RES48_IRQn                = 32u,
      UART2_IRQn                = 33u,
      SSI1_IRQn                 = 34u,
      TIMER3A_IRQn              = 35u,
      TIMER3B_IRQn              = 36u,
      I2C1_IRQn                 = 37u,
      QEI1_IRQn                 = 38u,
      CAN0_IRQn                 = 39u,
      CAN1_IRQn                 = 40u,
      RES57_IRQn                = 41u,
      RES58_IRQn                = 42u,
      HIB_IRQn                  = 43u,
      USB_IRQn                  = 44u,
      PWM0GEN3_IRQn             = 45u,
      UDMASOFT_IRQn             = 46u,
      UDMAERROR_IRQn            = 47u,
      ADC1SEQ0_IRQn             = 48u,
      ADC1SEQ1_IRQn             = 49u,
      ADC1SEQ2_IRQn             = 50u,
      ADC1SEQ3_IRQn             = 51u,
      RES68_IRQn                = 52u,
      RES69_IRQn                = 53u,
      RES70_IRQn                = 54u,
      RES71_IRQn                = 55u,
      RES72_IRQn                = 56u,
      SSI2_IRQn                 = 57u,
      SSI3_IRQn                 = 58u,
      UART3_IRQn                = 59u,
      UART4_IRQn                = 60u,
      UART5_IRQn                = 61u,
      UART6_IRQn                = 62u,
      UART7_IRQn                = 63u,
      RES80_IRQn                = 64u,
      RES81_IRQn                = 65u,
      RES82_IRQn                = 66u,
      RES83_IRQn                = 67u,
      I2C2_IRQn                 = 68u,
      I2C3_IRQn                 = 69u,
      TIMER4A_IRQn              = 70u,
      TIMER4B_IRQn              = 71u,
      RES88_IRQn                = 72u,
      RES89_IRQn                = 73u,
      RES90_IRQn                = 74u,
      RES91_IRQn                = 75u,
      RES92_IRQn                = 76u,
      RES93_IRQn                = 77u,
      RES94_IRQn                = 78u,
      RES95_IRQn                = 79u,
      RES96_IRQn                = 80u,
      RES97_IRQn                = 81u,
      RES98_IRQn                = 82u,
      RES99_IRQn                = 83u,
      RES100_IRQn               = 84u,
      RES101_IRQn               = 85u,
      RES102_IRQn               = 86u,
      RES103_IRQn               = 87u,
      RES104_IRQn               = 88u,
      RES105_IRQn               = 89u,
      RES106_IRQn               = 90u,
      RES107_IRQn               = 91u,
      TIMER5A_IRQn              = 92u,
      TIMER5B_IRQn              = 93u,
      WTIMER0A_IRQn             = 94u,
      WTIMER0B_IRQn             = 95u,
      WTIMER1A_IRQn             = 96u,
      WTIMER1B_IRQn             = 97u,
      WTIMER2A_IRQn             = 98u,
      WTIMER2B_IRQn             = 99u,
      WTIMER3A_IRQn             = 100u,
      WTIMER3B_IRQn             = 101u,
      WTIMER4A_IRQn             = 102u,
      WTIMER4B_IRQn             = 103u,
      WTIMER5A_IRQn             = 104u,
      WTIMER5B_IRQn             = 105u,
      SYSEXC_IRQn               = 106u,
      RES123_IRQn               = 107u,
      RES124_IRQn               = 108u,
      RES125_IRQn               = 109u,
      RES126_IRQn               = 110u,
      RES127_IRQn               = 111u,
      RES128_IRQn               = 112u,
      RES129_IRQn               = 113u,
      RES130_IRQn               = 114u,
      RES131_IRQn               = 115u,
      RES132_IRQn               = 116u,
      RES133_IRQn               = 117u,
      RES134_IRQn               = 118u,
      RES135_IRQn               = 119u,
      RES136_IRQn               = 120u,
      RES137_IRQn               = 121u,
      RES138_IRQn               = 122u,
      RES139_IRQn               = 123u,
      RES140_IRQn               = 124u,
      RES141_IRQn               = 125u,
      RES142_IRQn               = 126u,
      RES143_IRQn               = 127u,
      RES144_IRQn               = 128u,
      RES145_IRQn               = 129u,
      RES146_IRQn               = 130u,
      RES147_IRQn               = 131u,
      RES148_IRQn               = 132u,
      RES149_IRQn               = 133u,
      PWM1GEN0_IRQn             = 134u,
      PWM1GEN1_IRQn             = 135u,
      PWM1GEN2_IRQn             = 136u,
      PWM1GEN3_IRQn             = 137u,
      PWM1FAULT_IRQn            = 138u,
} IRQn_Type;

NVIC_nSTATUS    NVIC__enSetPriorityIRQ(NVIC_nSTIR enIRQ,NVIC_nPRIORITY enPriority);
NVIC_nPRIORITY  NVIC__enGetPriorityIRQ(NVIC_nSTIR enIRQ);

NVIC_nENABLE    NVIC__enGetEnableIRQ(NVIC_nSTIR enIRQ);
NVIC_nSTATUS    NVIC__enSetEnableIRQ(NVIC_nSTIR enIRQ, NVIC_nPRIORITY enPriority);
NVIC_nSTATUS    NVIC__enClearEnableIRQ(NVIC_nSTIR enIRQ);

NVIC_nPENDING   NVIC__enGetPendingIRQ(NVIC_nSTIR enIRQ);
NVIC_nSTATUS    NVIC__enSetPendingIRQ(NVIC_nSTIR enIRQ);
NVIC_nSTATUS    NVIC__enClearPendingIRQ(NVIC_nSTIR enIRQ);

NVIC_nACTIVE    NVIC__enGetActiveIRQ(NVIC_nSTIR enIRQ);
NVIC_nSTATUS    NVIC__enTriggerIRQ(NVIC_nSTIR enIRQ);




#endif /* NVIC_H_ */
