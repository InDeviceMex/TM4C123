/**
 *
 * @file NVIC_StructRegister.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_STRUCT_NVIC_STRUCTREGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_STRUCT_NVIC_STRUCTREGISTER_H_

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
    volatile uint32_t NVIC_GPIOA :1;
    volatile uint32_t NVIC_GPIOB :1;
    volatile uint32_t NVIC_GPIOC :1;
    volatile uint32_t NVIC_GPIOD :1;
    volatile uint32_t NVIC_GPIOE :1;
    volatile uint32_t NVIC_UART0 :1;
    volatile uint32_t NVIC_UART1 :1;
    volatile uint32_t NVIC_SSI0 :1;
    volatile uint32_t NVIC_I2C0 :1;
    volatile uint32_t NVIC_PWM0FAULT :1;
    volatile uint32_t NVIC_PWM0GEN0 :1;
    volatile uint32_t NVIC_PWM0GEN1 :1;
    volatile uint32_t NVIC_PWM0GEN2 :1;
    volatile uint32_t NVIC_QEI0 :1;
    volatile uint32_t NVIC_ADC0SEQ0 :1;
    volatile uint32_t NVIC_ADC0SEQ1 :1;
    volatile uint32_t NVIC_ADC0SEQ2 :1;
    volatile uint32_t NVIC_ADC0SEQ3 :1;
    volatile uint32_t NVIC_WDT01 :1;
    volatile uint32_t NVIC_TIMER0A :1;
    volatile uint32_t NVIC_TIMER0B :1;
    volatile uint32_t NVIC_TIMER1A :1;
    volatile uint32_t NVIC_TIMER1B :1;
    volatile uint32_t NVIC_TIMER2A :1;
    volatile uint32_t NVIC_TIMER2B :1;
    volatile uint32_t NVIC_ACOMP0 :1;
    volatile uint32_t NVIC_ACOMP1 :1;
    volatile uint32_t NVIC_RES43 :1;
    volatile uint32_t NVIC_SYSCTL :1;
    volatile uint32_t NVIC_FLASH :1;
    volatile uint32_t NVIC_GPIOF :1;
    volatile uint32_t NVIC_RES47 :1;
}NVIC0_TypeDef;

typedef volatile struct
{
    volatile uint32_t NVIC_RES48 :1;
    volatile uint32_t NVIC_UART2 :1;
    volatile uint32_t NVIC_SSI1 :1;
    volatile uint32_t NVIC_TIMER3A :1;
    volatile uint32_t NVIC_TIMER3B :1;
    volatile uint32_t NVIC_I2C1 :1;
    volatile uint32_t NVIC_QEI1 :1;
    volatile uint32_t NVIC_CAN0 :1;
    volatile uint32_t NVIC_CAN1 :1;
    volatile uint32_t NVIC_RES57 :1;
    volatile uint32_t NVIC_RES58 :1;
    volatile uint32_t NVIC_HIB :1;
    volatile uint32_t NVIC_USB :1;
    volatile uint32_t NVIC_PWM0GEN3 :1;
    volatile uint32_t NVIC_UDMASOFT :1;
    volatile uint32_t NVIC_UDMAERROR:1;
    volatile uint32_t NVIC_ADC1SEQ0 :1;
    volatile uint32_t NVIC_ADC0SEQ1 :1;
    volatile uint32_t NVIC_ADC1SEQ2 :1;
    volatile uint32_t NVIC_ADC1SEQ3 :1;
    volatile uint32_t NVIC_RES68 :1;
    volatile uint32_t NVIC_RES69 :1;
    volatile uint32_t NVIC_RES70 :1;
    volatile uint32_t NVIC_RES71 :1;
    volatile uint32_t NVIC_RES72 :1;
    volatile uint32_t NVIC_SSI2 :1;
    volatile uint32_t NVIC_SSI3 :1;
    volatile uint32_t NVIC_UART3 :1;
    volatile uint32_t NVIC_UART4 :1;
    volatile uint32_t NVIC_UART5 :1;
    volatile uint32_t NVIC_UART6 :1;
    volatile uint32_t NVIC_UART7 :1;
}NVIC1_TypeDef;

typedef volatile struct
{
    volatile uint32_t NVIC_RES80 :1;
    volatile uint32_t NVIC_RES81 :1;
    volatile uint32_t NVIC_RES82 :1;
    volatile uint32_t NVIC_RES83 :1;
    volatile uint32_t NVIC_I2C2 :1;
    volatile uint32_t NVIC_I2C3 :1;
    volatile uint32_t NVIC_TIMER4A :1;
    volatile uint32_t NVIC_TIMER4B :1;
    volatile uint32_t NVIC_RES88 :1;
    volatile uint32_t NVIC_RES89 :1;
    volatile uint32_t NVIC_RES90 :1;
    volatile uint32_t NVIC_RES91 :1;
    volatile uint32_t NVIC_RES92 :1;
    volatile uint32_t NVIC_RES93 :1;
    volatile uint32_t NVIC_RES94 :1;
    volatile uint32_t NVIC_RES95 :1;
    volatile uint32_t NVIC_RES96 :1;
    volatile uint32_t NVIC_RES97 :1;
    volatile uint32_t NVIC_RES98 :1;
    volatile uint32_t NVIC_RES99 :1;
    volatile uint32_t NVIC_RES100 :1;
    volatile uint32_t NVIC_RES101 :1;
    volatile uint32_t NVIC_RES102 :1;
    volatile uint32_t NVIC_RES103 :1;
    volatile uint32_t NVIC_RES104 :1;
    volatile uint32_t NVIC_RES105 :1;
    volatile uint32_t NVIC_RES106 :1;
    volatile uint32_t NVIC_RES107 :1;
    volatile uint32_t NVIC_TIMER5A :1;
    volatile uint32_t NVIC_TIMER5B :1;
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
    volatile uint32_t NVIC_SYSEXC :1;
    volatile uint32_t NVIC_RES123 :1;
    volatile uint32_t NVIC_RES124 :1;
    volatile uint32_t NVIC_RES125 :1;
    volatile uint32_t NVIC_RES126 :1;
    volatile uint32_t NVIC_RES127 :1;
    volatile uint32_t NVIC_RES128 :1;
    volatile uint32_t NVIC_RES129 :1;
    volatile uint32_t NVIC_RES130 :1;
    volatile uint32_t NVIC_RES131 :1;
    volatile uint32_t NVIC_RES132 :1;
    volatile uint32_t NVIC_RES133 :1;
    volatile uint32_t NVIC_RES134 :1;
    volatile uint32_t NVIC_RES135 :1;
    volatile uint32_t NVIC_RES136 :1;
    volatile uint32_t NVIC_RES137 :1;
    volatile uint32_t NVIC_RES138 :1;
    volatile uint32_t NVIC_RES139 :1;
    volatile uint32_t NVIC_RES140 :1;
    volatile uint32_t NVIC_RES141 :1;
    volatile uint32_t NVIC_RES142 :1;
    volatile uint32_t NVIC_RES143 :1;
}NVIC3_TypeDef;

typedef volatile struct
{
    volatile uint32_t NVIC_RES144 :1;
    volatile uint32_t NVIC_RES145 :1;
    volatile uint32_t NVIC_RES146 :1;
    volatile uint32_t NVIC_RES147 :1;
    volatile uint32_t NVIC_RES148 :1;
    volatile uint32_t NVIC_RES149 :1;
    volatile uint32_t NVIC_PWM1GEN0 :1;
    volatile uint32_t NVIC_PWM1GEN1 :1;
    volatile uint32_t NVIC_PWM1GEN2 :1;
    volatile uint32_t NVIC_PWM1GEN3 :1;
    volatile uint32_t NVIC_PWM1FAULT:1;
    const uint32_t reserved :21;
}NVIC4_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_GPIOA :3;/*0*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_GPIOB :3;/*1*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_GPIOC :3;/*2*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_GPIOD :3;/*3*/
}IPR0_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_GPIOE :3;/*4*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_UART0 :3;/*5*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_UART1 :3;/*6*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_SSI0 :3;/*7*/
}IPR1_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_I2C0 :3;/*8*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_PWM0FAULT :3;/*9*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_PWM0GEN0 :3;/*10*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_PWM0GEN1 :3;/*11*/
}IPR2_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_PWM0GEN2 :3;/*12*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_QEI0 :3;/*13*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_ADC0SEQ0 :3;/*14*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_ADC0SEQ1 :3;/*15*/
}IPR3_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_ADC0SEQ2 :3;/*16*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_ADC0SEQ3 :3;/*17*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_WDT01 :3;/*18*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_TIMER0A :3;/*19*/
}IPR4_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_TIMER0B :3;/*20*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_TIMER1A :3;/*21*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_TIMER1B :3;/*22*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_TIMER2A :3;/*23*/
}IPR5_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_TIMER2B :3;/*24*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_ACOMP0 :3;/*25*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_ACOMP1 :3;/*26*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES43 :3;/*27*/
}IPR6_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_SYSCTL :3;/*28*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_FLASH :3;/*29*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_GPIOF :3;/*30*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES47 :3;/*31*/
}IPR7_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES48 :3;/*32*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_UART2 :3;/*33*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_SSI1 :3;/*34*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_TIMER3A :3;/*35*/
}IPR8_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_TIMER3B :3;/*36*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_I2C1 :3;/*37*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_QEI1 :3;/*38*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_CAN0 :3;/*39*/
}IPR9_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_CAN1 :3;/*40*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES57 :3;/*41*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES58 :3;/*42*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_HIB :3;/*43*/
}IPR10_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_USB :3;/*44*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_PWM0GEN3 :3;/*45*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_UDMASOFT :3;/*46*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_UDMAERROR:3;/*47*/
}IPR11_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_ADC1SEQ0 :3;/*48*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_ADC1SEQ1 :3;/*49*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_ADC1SEQ2 :3;/*50*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_ADC1SEQ3 :3;/*51*/
}IPR12_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES68 :3;/*52*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES69 :3;/*53*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES70 :3;/*54*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES71 :3;/*55*/
}IPR13_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES72 :3;/*56*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_SSI2 :3;/*57*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_SSI3 :3;/*58*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_UART3 :3;/*59*/
}IPR14_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_UART4 :3;/*60*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_UART5 :3;/*61*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_UART6 :3;/*62*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_UART7 :3;/*63*/
}IPR15_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES80 :3;/*64*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES81 :3;/*65*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES82 :3;/*66*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES83 :3;/*67*/
}IPR16_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_I2C2 :3;/*68*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_I2C3 :3;/*69*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_TIMER4A :3;/*70*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_TIMER4B :3;/*71*/
}IPR17_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES88 :3;/*72*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES89 :3;/*73*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES90 :3;/*74*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES91 :3;/*75*/
}IPR18_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES92 :3;/*76*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES93 :3;/*77*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES94 :3;/*78*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES95 :3;/*79*/
}IPR19_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES96 :3;/*80*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES97 :3;/*81*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES98 :3;/*82*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES99 :3;/*83*/
}IPR20_TypeDef;


typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES100 :3;/*84*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES101 :3;/*85*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES102 :3;/*86*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES103 :3;/*87*/
}IPR21_TypeDef;


typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES104 :3;/*88*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES105 :3;/*89*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES106 :3;/*90*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES107 :3;/*91*/
}IPR22_TypeDef;


typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_TIMER5A :3;/*92*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_TIMER5B :3;/*93*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_WTIMER0A :3;/*94*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_WTIMER0B :3;/*95*/
}IPR23_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_WTIMER1A :3;/*96*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_WTIMER1B :3;/*97*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_WTIMER2A :3;/*98*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_WTIMER2B :3;/*99*/
}IPR24_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_WTIMER3A :3;/*100*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_WTIMER3B :3;/*101*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_WTIMER4A :3;/*102*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_WTIMER4B :3;/*103*/
}IPR25_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_WTIMER5A :3;/*104*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_WTIMER5B :3;/*105*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_SYSEXC :3;/*106*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES123 :3;/*107*/
}IPR26_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES124 :3;/*108*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES125 :3;/*109*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES126 :3;/*110*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES127 :3;/*111*/
}IPR27_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES128 :3;/*112*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES129 :3;/*113*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES130 :3;/*114*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES131 :3;/*115*/
}IPR28_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES132 :3;/*116*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES133 :3;/*117*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES134 :3;/*118*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES135 :3;/*119*/
}IPR29_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES136 :3;/*120*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES137 :3;/*121*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES138 :3;/*122*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES139 :3;/*123*/
}IPR30_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES140 :3;/*124*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES141 :3;/*125*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES142 :3;/*126*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES143 :3;/*127*/
}IPR31_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES144 :3;/*128*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES145 :3;/*129*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_RES146 :3;/*130*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES147 :3;/*131*/
}IPR32_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_RES148 :3;/*132*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_RES149 :3;/*133*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_PWM1GEN0 :3;/*134*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_PWM1GEN1 :3;/*135*/
}IPR33_TypeDef;

typedef volatile struct
{
    const uint32_t reserved :5;
    volatile uint32_t NVIC_PWM1GEN2 :3;/*136*/
    const uint32_t reserved1 :5;
    volatile uint32_t NVIC_PWM1GEN3 :3;/*137*/
    const uint32_t reserved2 :5;
    volatile uint32_t NVIC_PWM1FAULT :3;/*138*/
    const uint32_t reserved3 :5;
    volatile uint32_t NVIC_RES155 :3;/*139*/
}IPR34_TypeDef;

typedef volatile struct
{
  const uint32_t reserved :5;
  volatile uint32_t IP0 :3;/*0*/
  const uint32_t reserved1:5;
  volatile uint32_t IP1 :3;/*1*/
  const uint32_t reserved2:5;
  volatile uint32_t IP2 :3;/*2*/
  const uint32_t reserved3:5;
  volatile uint32_t IP3 :3;/*3*/
}IPRw_TypeDef;

#if defined ( __TI_ARM__ )
    #pragma CHECK_MISRA("-6.4")
#endif
typedef volatile struct
{
     const uint8_t reserved :5;
     volatile uint8_t IP :3;
}IPRb_TypeDef;
#if defined ( __TI_ARM__ )
    #pragma RESET_MISRA("6.4")
#endif

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
    volatile uint32_t INTID :8;
    const uint32_t reserved :24;
}STIR_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_STRUCT_NVIC_STRUCTREGISTER_H_ */
