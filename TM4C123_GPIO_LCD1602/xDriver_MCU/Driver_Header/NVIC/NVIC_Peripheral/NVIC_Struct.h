/**
 *
 * @file NVIC_Struct.h
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_STRUCT_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_STRUCT_H_

#include <stdint.h>                             /* standard types definitions                      */

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
    volatile uint32_t NVIC_QEI0     :1;
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
    volatile uint32_t NVIC_TIMER2B  :1;
    volatile uint32_t NVIC_ACOMP0   :1;
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
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_GPIOA    :3;/*0*/
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_GPIOB    :3;/*1*/
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_GPIOC    :3;/*2*/
    const uint32_t reserved3        :5;
    volatile uint32_t NVIC_GPIOD    :3;/*3*/
}IPR0_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_GPIOE    :3;/*4*/
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_UART0    :3;/*5*/
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_UART1    :3;/*6*/
    const uint32_t reserved3        :5;
    volatile uint32_t NVIC_SSI0     :3;/*7*/
}IPR1_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_I2C0     :3;/*8*/
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_PWM0FAULT :3;/*9*/
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_PWM0GEN0  :3;/*10*/
    const uint32_t reserved3        :5;
    volatile uint32_t NVIC_PWM0GEN1 :3;/*11*/
}IPR2_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_PWM0GEN2 :3;/*12*/
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
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_TIMER0B      :3;/*20*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_TIMER1A      :3;/*21*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_TIMER1B      :3;/*22*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_TIMER2A      :3;/*23*/
}IPR5_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_TIMER2B  :3;/*24*/
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_ACOMP0   :3;/*25*/
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_ACOMP1   :3;/*26*/
    const uint32_t reserved3        :5;
    volatile uint32_t NVIC_RES43    :3;/*27*/
}IPR6_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_SYSCTL   :3;/*28*/
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_FLASH    :3;/*29*/
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_GPIOF    :3;/*30*/
    const uint32_t reserved3        :5;
    volatile uint32_t NVIC_RES47    :3;/*31*/
}IPR7_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES48        :3;/*32*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_UART2        :3;/*33*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_SSI1         :3;/*34*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_TIMER3A      :3;/*35*/
}IPR8_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_TIMER3B  :3;/*36*/
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_I2C1     :3;/*37*/
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_QEI1     :3;/*38*/
    const uint32_t reserved3        :5;
    volatile uint32_t NVIC_CAN0     :3;/*39*/
}IPR9_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_CAN1     :3;/*40*/
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_RES57    :3;/*41*/
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_RES58    :3;/*42*/
    const uint32_t reserved3        :5;
    volatile uint32_t NVIC_HIB      :3;/*43*/
}IPR10_TypeDef;

typedef volatile struct
{
    const uint32_t reserved         :5;
    volatile uint32_t NVIC_USB      :3;/*44*/
    const uint32_t reserved1        :5;
    volatile uint32_t NVIC_PWM0GEN3 :3;/*45*/
    const uint32_t reserved2        :5;
    volatile uint32_t NVIC_UDMASOFT :3;/*46*/
    const uint32_t reserved3        :5;
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
    const uint32_t reserved3        :5;
    volatile uint32_t NVIC_ADC1SEQ3 :3;/*51*/
}IPR12_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES68        :3;/*52*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES69        :3;/*53*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_RES70        :3;/*54*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES71        :3;/*55*/
}IPR13_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES72        :3;/*56*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_SSI2         :3;/*57*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_SSI3         :3;/*58*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_UART3        :3;/*59*/
}IPR14_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_UART4        :3;/*60*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_UART5        :3;/*61*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_UART6        :3;/*62*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_UART7        :3;/*63*/
}IPR15_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES80        :3;/*64*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES81        :3;/*65*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_RES82        :3;/*66*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES83        :3;/*67*/
}IPR16_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_I2C2         :3;/*68*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_I2C3         :3;/*69*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_TIMER4A      :3;/*70*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_TIMER4B      :3;/*71*/
}IPR17_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES88        :3;/*72*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES89        :3;/*73*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_RES90        :3;/*74*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES91        :3;/*75*/
}IPR18_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES92        :3;/*76*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES93        :3;/*77*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_RES94        :3;/*78*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES95        :3;/*79*/
}IPR19_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES96        :3;/*80*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES97        :3;/*81*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_RES98        :3;/*82*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES99        :3;/*83*/
}IPR20_TypeDef;


typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES100       :3;/*84*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES101       :3;/*85*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_RES102       :3;/*86*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES103       :3;/*87*/
}IPR21_TypeDef;


typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_RES104       :3;/*88*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_RES105       :3;/*89*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_RES106       :3;/*90*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_RES107       :3;/*91*/
}IPR22_TypeDef;


typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_TIMER5A      :3;/*92*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_TIMER5B      :3;/*93*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_WTIMER0A     :3;/*94*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_WTIMER0B     :3;/*95*/
}IPR23_TypeDef;

typedef volatile struct
{
    const uint32_t reserved             :5;
    volatile uint32_t NVIC_WTIMER1A     :3;/*96*/
    const uint32_t reserved1            :5;
    volatile uint32_t NVIC_WTIMER1B     :3;/*97*/
    const uint32_t reserved2            :5;
    volatile uint32_t NVIC_WTIMER2A     :3;/*98*/
    const uint32_t reserved3            :5;
    volatile uint32_t NVIC_WTIMER2B     :3;/*99*/
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
    volatile uint32_t IP0   :3;/*0*/
    const uint32_t reserved1:5;
    volatile uint32_t IP1   :3;/*1*/
    const uint32_t reserved2:5;
    volatile uint32_t IP2   :3;/*2*/
    const uint32_t reserved3:5;
    volatile uint32_t IP3   :3;/*3*/
}IPRw_TypeDef;

typedef volatile struct
{
     const uint8_t reserved    :5;
     volatile uint8_t IP        :3;/*0*/
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
        volatile uint32_t       ISER0;
        NVIC0_TypeDef           ISER0_Bit;
    };
    union
    {
        volatile uint32_t       ISER1;
        NVIC1_TypeDef           ISER1_Bit;
    };
    union
    {
        volatile uint32_t       ISER2;
        NVIC2_TypeDef           ISER2_Bit;
    };
    union
    {
        volatile uint32_t       ISER3;
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
        volatile uint32_t       ICER0;
        NVIC0_TypeDef           ICER0_Bit;
    };
    union
    {
        volatile uint32_t       ICER1;
        NVIC1_TypeDef           ICER1_Bit;
    };
    union
    {
        volatile uint32_t       ICER2;
        NVIC2_TypeDef           ICER2_Bit;
    };
    union
    {
        volatile uint32_t       ICER3;
        NVIC3_TypeDef           ICER3_Bit;
    };
    union
    {
        volatile uint32_t       ICER4;
        NVIC4_TypeDef           ICER4_Bit;
    };

    uint32_t                    reserved1[27U];

    union
    {
        volatile uint32_t       ISPR0;
        NVIC0_TypeDef           ISPR0_Bit;
    };
    union
    {
        volatile uint32_t       ISPR1;
        NVIC1_TypeDef           ISPR1_Bit;
    };
    union
    {
        volatile uint32_t       ISPR2;
        NVIC2_TypeDef           ISPR2_Bit;
    };
    union
    {
        volatile uint32_t       ISPR3;
        NVIC3_TypeDef           ISPR3_Bit;
    };
    union
    {
        volatile uint32_t       ISPR4;
        NVIC4_TypeDef           ISPR4_Bit;
    };

    uint32_t                reserved2[27U];

    union
    {
        volatile uint32_t       ICPR0;
        NVIC0_TypeDef           ICPR0_Bit;
    };
    union
    {
        volatile uint32_t       ICPR1;
        NVIC1_TypeDef           ICPR1_Bit;
    };
    union
    {
        volatile uint32_t       ICPR2;
        NVIC2_TypeDef           ICPR2_Bit;
    };
    union
    {
        volatile uint32_t       ICPR3;
        NVIC3_TypeDef           ICPR3_Bit;
    };
    union
    {
        volatile uint32_t       ICPR4;
        NVIC4_TypeDef           ICPR4_Bit;
    };

    uint32_t                reserved3[27U];

    union
    {
        volatile uint32_t       IABR0;
        NVIC0_TypeDef           IABR0_Bit;
    };
    union
    {
        volatile uint32_t       IABR1;
        NVIC1_TypeDef           IABR1_Bit;
    };
    union
    {
        volatile uint32_t       IABR2;
        NVIC2_TypeDef           IABR2_Bit;
    };
    union
    {
        volatile uint32_t       IABR3;
        NVIC3_TypeDef           IABR3_Bit;
    };
    union
    {
        volatile uint32_t       IABR4;
        NVIC4_TypeDef           IABR4_Bit;
    };

    uint32_t                reserved4[59U];

    union
    {
        volatile uint8_t        IPR0b[4];
        IPRb_TypeDef            IPR0b_Bit[4];
        volatile uint32_t       IPR0w;
        IPRw_TypeDef            IPR0w_Bit;
        volatile uint32_t       IPR0;
        IPR0_TypeDef            IPR0_Bit;
    };
    union
    {
        volatile uint8_t        IPR1b[4];
        IPRb_TypeDef            IPR1b_Bit[4];
        volatile uint32_t       IPR1w;
        IPRw_TypeDef            IPR1w_Bit;
        volatile uint32_t       IPR1;
        IPR1_TypeDef            IPR1_Bit;
    };
    union
    {
        volatile uint8_t        IPR2b[4];
        IPRb_TypeDef            IPR2b_Bit[4];
        volatile uint32_t       IPR2w;
        IPRw_TypeDef            IPR2w_Bit;
        volatile uint32_t       IPR2;
        IPR2_TypeDef            IPR2_Bit;
    };
    union
    {
        volatile uint8_t        IPR3b[4];
        IPRb_TypeDef            IPR3b_Bit[4];
        volatile uint32_t       IPR3w;
        IPRw_TypeDef            IPR3w_Bit;
        volatile uint32_t       IPR3;
        IPR3_TypeDef            IPR3_Bit;
    };
    union
    {
        volatile uint8_t        IPR4b[4];
        IPRb_TypeDef            IPR4b_Bit[4];
        volatile uint32_t       IPR4w;
        IPRw_TypeDef            IPR4w_Bit;
        volatile uint32_t       IPR4;
        IPR4_TypeDef            IPR4_Bit;
    };
    union
    {
        volatile uint8_t        IPR5b[4];
        IPRb_TypeDef            IPR5b_Bit[4];
        volatile uint32_t       IPR5w;
        IPRw_TypeDef            IPR5w_Bit;
        volatile uint32_t       IPR5;
        IPR5_TypeDef            IPR5_Bit;
    };
    union
    {
        volatile uint8_t        IPR6b[4];
        IPRb_TypeDef            IPR6b_Bit[4];
        volatile uint32_t       IPR6w;
        IPRw_TypeDef            IPR6w_Bit;
        volatile uint32_t       IPR6;
        IPR6_TypeDef            IPR6_Bit;
    };
    union
    {
        volatile uint8_t        IPR7b[4];
        IPRb_TypeDef            IPR7b_Bit[4];
        volatile uint32_t       IPR7w;
        IPRw_TypeDef            IPR7w_Bit;
        volatile uint32_t       IPR7;
        IPR7_TypeDef            IPR7_Bit;
    };
    union
    {
        volatile uint8_t        IPR8b[4];
        IPRb_TypeDef            IPR8b_Bit[4];
        volatile uint32_t       IPR8w;
        IPRw_TypeDef            IPR8w_Bit;
        volatile uint32_t       IPR8;
        IPR8_TypeDef            IPR8_Bit;
    };
    union
    {
        volatile uint8_t        IPR9b[4];
        IPRb_TypeDef            IPR9b_Bit[4];
        volatile uint32_t       IPR9w;
        IPRw_TypeDef            IPR9w_Bit;
        volatile uint32_t       IPR9;
        IPR9_TypeDef            IPR9_Bit;
    };
    union
    {
        volatile uint8_t        IPR10b[4];
        IPRb_TypeDef            IPR10b_Bit[4];
        volatile uint32_t       IPR10w;
        IPRw_TypeDef            IPR10w_Bit;
        volatile uint32_t       IPR10;
        IPR10_TypeDef           IPR10_Bit;
    };
    union
    {
        volatile uint8_t        IPR11b[4];
        IPRb_TypeDef            IPR11b_Bit[4];
        volatile uint32_t       IPR11w;
        IPRw_TypeDef            IPR11w_Bit;
        volatile uint32_t       IPR11;
        IPR11_TypeDef           IPR11_Bit;
    };
    union
    {
        volatile uint8_t        IPR12b[4];
        IPRb_TypeDef            IPR12b_Bit[4];
        volatile uint32_t       IPR12w;
        IPRw_TypeDef            IPR12w_Bit;
        volatile uint32_t       IPR12;
        IPR12_TypeDef           IPR12_Bit;
    };
    union
    {
        volatile uint8_t        IPR13b[4];
        IPRb_TypeDef            IPR13b_Bit[4];
        volatile uint32_t       IPR13w;
        IPRw_TypeDef            IPR13w_Bit;
        volatile uint32_t       IPR13;
        IPR13_TypeDef           IPR13_Bit;
    };
    union
    {
        volatile uint8_t        IPR14b[4];
        IPRb_TypeDef            IPR14b_Bit[4];
        volatile uint32_t       IPR14w;
        IPRw_TypeDef            IPR14w_Bit;
        volatile uint32_t       IPR14;
        IPR14_TypeDef           IPR14_Bit;
    };
    union
    {
        volatile uint8_t        IPR15b[4];
        IPRb_TypeDef            IPR15b_Bit[4];
        volatile uint32_t       IPR15w;
        IPRw_TypeDef            IPR15w_Bit;
        volatile uint32_t       IPR15;
        IPR15_TypeDef           IPR15_Bit;
    };
    union
    {
        volatile uint8_t        IPR16b[4];
        IPRb_TypeDef            IPR16b_Bit[4];
        volatile uint32_t       IPR16w;
        IPRw_TypeDef            IPR16w_Bit;
        volatile uint32_t       IPR16;
        IPR16_TypeDef           IPR16_Bit;
    };
    union
    {
        volatile uint8_t        IPR17b[4];
        IPRb_TypeDef            IPR17b_Bit[4];
        volatile uint32_t       IPR17w;
        IPRw_TypeDef            IPR17w_Bit;
        volatile uint32_t       IPR17;
        IPR17_TypeDef           IPR17_Bit;
    };
    union
    {
        volatile uint8_t        IPR18b[4];
        IPRb_TypeDef            IPR18b_Bit[4];
        volatile uint32_t       IPR18w;
        IPRw_TypeDef            IPR18w_Bit;
        volatile uint32_t       IPR18;
        IPR18_TypeDef           IPR18_Bit;
    };
    union
    {
        volatile uint8_t        IPR19b[4];
        IPRb_TypeDef            IPR19b_Bit[4];
        volatile uint32_t       IPR19w;
        IPRw_TypeDef            IPR19w_Bit;
        volatile uint32_t       IPR19;
        IPR19_TypeDef           IPR19_Bit;
    };
    union
    {
        volatile uint8_t        IPR20b[4];
        IPRb_TypeDef            IPR20b_Bit[4];
        volatile uint32_t       IPR20w;
        IPRw_TypeDef            IPR20w_Bit;
        volatile uint32_t       IPR20;
        IPR20_TypeDef           IPR20_Bit;
    };
    union
    {
        volatile uint8_t        IPR21b[4];
        IPRb_TypeDef            IPR21b_Bit[4];
        volatile uint32_t       IPR21w;
        IPRw_TypeDef            IPR21w_Bit;
        volatile uint32_t       IPR21;
        IPR21_TypeDef           IPR21_Bit;
    };
    union
    {
        volatile uint8_t        IPR22b[4];
        IPRb_TypeDef            IPR22b_Bit[4];
        volatile uint32_t       IPR22w;
        IPRw_TypeDef            IPR22w_Bit;
        volatile uint32_t       IPR22;
        IPR22_TypeDef           IPR22_Bit;
    };

    union
    {
        volatile uint8_t        IPR23b[4];
        IPRb_TypeDef            IPR23b_Bit[4];
        volatile uint32_t       IPR23w;
        IPRw_TypeDef            IPR23w_Bit;
        volatile uint32_t       IPR23;
        IPR23_TypeDef           IPR23_Bit;
    };

    union
    {
        volatile uint8_t        IPR24b[4];
        IPRb_TypeDef            IPR24b_Bit[4];
        volatile uint32_t       IPR24w;
        IPRw_TypeDef            IPR24w_Bit;
        volatile uint32_t       IPR24;
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

    uint32_t                reserved5[659U];

    union
    {
        volatile uint32_t       STIR;
        STIR_TypeDef        STIR_Bit;
    };

}NVIC_TypeDef;



#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_STRUCT_H_ */
