/*
 * NVIC.h
 *
 *  Created on: Jan 18, 2018
 *      Author: Lalo_Alvarez
 */

#ifndef NVIC_H_
#define NVIC_H_


#include <stdint.h>

#define NVIC_BASE            (0xE000E000)
#define NVIC_OFFSET          (0x00000100)



typedef volatile struct
{
    volatile uint32_t NVIC_GPIOA      :1;
    volatile uint32_t NVIC_GPIOB      :1;
    volatile uint32_t NVIC_GPIOC      :1;
    volatile uint32_t NVIC_GPIOD      :1;
    volatile uint32_t NVIC_GPIOE      :1;
    volatile uint32_t NVIC_UART0      :1;
    volatile uint32_t NVIC_UART1      :1;
    volatile uint32_t NVIC_SSI0       :1;
    volatile uint32_t NVIC_I2C0       :1;
    volatile uint32_t NVIC_PWM0FAULT  :1;
    volatile uint32_t NVIC_PWM0GEN0   :1;
    volatile uint32_t NVIC_PWM0GEN1   :1;
    volatile uint32_t NVIC_PWM0GEN2   :1;
    volatile uint32_t NVIC_QEI0       :1;
    volatile uint32_t NVIC_ADC0SEQ0   :1;
    volatile uint32_t NVIC_ADC0SEQ1   :1;
    volatile uint32_t NVIC_ADC0SEQ2   :1;
    volatile uint32_t NVIC_ADC0SEQ3   :1;
    volatile uint32_t NVIC_WDT01      :1;
    volatile uint32_t NVIC_TIMER0A    :1;
    volatile uint32_t NVIC_TIMER0B    :1;
    volatile uint32_t NVIC_TIMER1A    :1;
    volatile uint32_t NVIC_TIMER1B    :1;
    volatile uint32_t NVIC_TIMER2A    :1;
    volatile uint32_t NVIC_TIMER2B    :1;
    volatile uint32_t NVIC_COMP0      :1;
    volatile uint32_t NVIC_COMP1      :1;
    const    uint32_t reserved        :1;
    volatile uint32_t NVIC_SYSCTL     :1;
    volatile uint32_t NVIC_FLASH      :1;
    volatile uint32_t NVIC_GPIOF      :1;
    const    uint32_t reserved1       :1;
}NVIC0_TypeDef;



typedef volatile struct
{
    const    uint32_t reserved          :1;
    volatile uint32_t NVIC_UART2        :1;
    volatile uint32_t NVIC_SSI1         :1;
    volatile uint32_t NVIC_TIMER3A      :1;
    volatile uint32_t NVIC_TIMER3B      :1;
    volatile uint32_t NVIC_I2C1         :1;
    volatile uint32_t NVIC_QEI1         :1;
    volatile uint32_t NVIC_CAN0         :1;
    volatile uint32_t NVIC_CAN1         :1;
    const    uint32_t reserved1         :2;
    volatile uint32_t NVIC_HIB          :1;
    volatile uint32_t NVIC_USB          :1;
    volatile uint32_t NVIC_PWM0GEN3     :1;
    volatile uint32_t NVIC_UDMASOFT     :1;
    volatile uint32_t NVIC_UDMAERROR    :1;
    volatile uint32_t NVIC_ADC1SEQ0     :1;
    volatile uint32_t NVIC_ADC1SEQ1     :1;
    volatile uint32_t NVIC_ADC1SEQ2     :1;
    volatile uint32_t NVIC_ADC1SEQ3     :1;
    const    uint32_t reserved2         :5;
    volatile uint32_t NVIC_SSI2         :1;
    volatile uint32_t NVIC_SSI3         :1;
    volatile uint32_t NVIC_UART3        :1;
    volatile uint32_t NVIC_UART4        :1;
    volatile uint32_t NVIC_UART5        :1;
    volatile uint32_t NVIC_UART6        :1;
    volatile uint32_t NVIC_UART7        :1;
}NVIC1_TypeDef;



typedef volatile struct
{
    const    uint32_t reserved         :4;
    volatile uint32_t NVIC_I2C2        :1;
    volatile uint32_t NVIC_I2C3        :1;
    volatile uint32_t NVIC_TIMER4A     :1;
    volatile uint32_t NVIC_TIMER4B     :1;
    const    uint32_t reserved1        :20;
    volatile uint32_t NVIC_TIMER5A     :1;
    volatile uint32_t NVIC_TIMER5B     :1;
    volatile uint32_t NVIC_WTIMER0A    :1;
    volatile uint32_t NVIC_WTIMER0B    :1;
}NVIC2_TypeDef;



typedef volatile struct
{
    volatile uint32_t NVIC_WTIMER1A      :1;
    volatile uint32_t NVIC_WTIMER1B      :1;
    volatile uint32_t NVIC_WTIMER2A      :1;
    volatile uint32_t NVIC_WTIMER2B      :1;
    volatile uint32_t NVIC_WTIMER3A      :1;
    volatile uint32_t NVIC_WTIMER3B      :1;
    volatile uint32_t NVIC_WTIMER4A      :1;
    volatile uint32_t NVIC_WTIMER4B      :1;
    volatile uint32_t NVIC_WTIMER5A      :1;
    volatile uint32_t NVIC_WTIMER5B      :1;
    volatile uint32_t NVIC_SYSEXC        :1;
    const    uint32_t reserved           :21;
}NVIC3_TypeDef;



typedef volatile struct
{
    const    uint32_t reserved  :6;
    volatile uint32_t NVIC_PWM1GEN0      :1;
    volatile uint32_t NVIC_PWM1GEN1      :1;
    volatile uint32_t NVIC_PWM1GEN2      :1;
    volatile uint32_t NVIC_PWM1GEN3      :1;
    volatile uint32_t NVIC_PWM1FAULT     :1;
    const    uint32_t reserved1          :21;
}NVIC4_TypeDef;


typedef volatile struct
{
     const    uint32_t reserved    :5;
     volatile uint32_t INT0  :3;//0
     const    uint32_t reserved1   :5;
     volatile uint32_t INT1 :3;//1
     const    uint32_t reserved2   :5;
     volatile uint32_t INT2  :3;//2
     const    uint32_t reserved3   :5;
     volatile uint32_t INT3 :3;//3
}PRI__TypeDef;

typedef volatile struct
{
     const    uint32_t reserved    :5;
     volatile uint32_t NVIC_GPIOA  :3;//0
     const    uint32_t reserved1   :5;
     volatile uint32_t NVIC_GPIOB  :3;//1
     const    uint32_t reserved2   :5;
     volatile uint32_t NVIC_GPIOC  :3;//2
     const    uint32_t reserved3   :5;
     volatile uint32_t NVIC_GPIOD  :3;//3
}PRI0_TypeDef;

typedef volatile struct
{
      const    uint32_t reserved   :5;
      volatile uint32_t NVIC_GPIOE :3;//4
      const    uint32_t reserved1  :5;
      volatile uint32_t NVIC_UART0 :3;//5
      const    uint32_t reserved2  :5;
      volatile uint32_t NVIC_UART1 :3;//6
      const    uint32_t reserved3  :5;
      volatile uint32_t NVIC_SSI0  :3;//7
}PRI1_TypeDef;

typedef volatile struct
{
       const    uint32_t reserved      :5;
       volatile uint32_t NVIC_I2C0     :3;//8
       const    uint32_t reserved1     :5;
       volatile uint32_t NVIC_PWM0FAULT:3;//9
       const    uint32_t reserved2     :5;
       volatile uint32_t NVIC_PWM0GEN0 :3;//10
       const    uint32_t reserved3     :5;
       volatile uint32_t NVIC_PWM0GEN1 :3;//11
}PRI2_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t NVIC_PWM0GEN2   :3;//12
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_QEI0       :3;//13
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_ADC0SEQ0   :3;//14
     const    uint32_t reserved3       :5;
     volatile uint32_t NVIC_ADC0SEQ1   :3;//15
}PRI3_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t NVIC_ADC0SEQ2   :3;//16
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_ADC0SEQ3   :3;//17
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_WDT01      :3;//18
     const    uint32_t reserved3       :5;
     volatile uint32_t NVIC_TIMER0A    :3;//19
}PRI4_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t NVIC_TIMER0B    :3;//20
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_TIMER1A    :3;//21
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_TIMER1B    :3;//22
     const    uint32_t reserved3       :5;
     volatile uint32_t NVIC_TIMER2A    :3;//23
}PRI5_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t NVIC_TIMER2B    :3;//24
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_COMP0      :3;//25
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_COMP1      :3;//26
     const    uint32_t reserved3       :5;
     const    uint32_t reserved_0      :3;//27
}PRI6_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t NVIC_SYSCTL     :3;//28
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_FLASH      :3;//29
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_GPIOF      :3;//30
     const    uint32_t reserved3       :5;
     const    uint32_t reserved_1      :3;//31
}PRI7_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     const    uint32_t reserved_2      :3;//32
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_UART2      :3;//33
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_SSI1       :3;//34
     const    uint32_t reserved3       :5;
     volatile uint32_t NVIC_TIMER3A    :3;//35
}PRI8_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t NVIC_TIMER3B    :3;//36
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_I2C1       :3;//37
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_QEI1       :3;//38
     const    uint32_t reserved3       :5;
     volatile uint32_t NVIC_CAN0       :3;//39
}PRI9_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t NVIC_CAN1       :3;//40
     const    uint32_t reserved1       :5;
     const    uint32_t reserved_3      :3;//41
     const    uint32_t reserved2       :5;
     const    uint32_t reserved_4      :3;//42
     const    uint32_t reserved3       :5;
     volatile uint32_t NVIC_HIB        :3;//43
}PRI10_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t NVIC_USB        :3;//44
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_PWM0GEN3   :3;//45
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_UDMASOFT   :3;//46
     const    uint32_t reserved3       :5;
     volatile uint32_t NVIC_UDMAERROR  :3;//47
}PRI11_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t NVIC_ADC1SEQ0   :3;//48
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_ADC1SEQ1   :3;//49
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_ADC1SEQ2   :3;//50
     const    uint32_t reserved3       :5;
     volatile uint32_t NVIC_ADC1SEQ3   :3;//51
}PRI12_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     const    uint32_t reserved_5      :3;//52
     const    uint32_t reserved1       :5;
     const    uint32_t reserved_6      :3;//53
     const    uint32_t reserved2       :5;
     const    uint32_t reserved_7      :3;//54
     const    uint32_t reserved3       :5;
     const    uint32_t reserved_8      :3;//55
}PRI13_TypeDef;


typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t reserved_9      :3;//56
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_SSI2       :3;//57
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_SSI3       :3;//58
     const    uint32_t reserved3       :5;
     volatile uint32_t NVIC_UART3      :3;//59
}PRI14_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t NVIC_UART4      :3;//60
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_UART5      :3;//61
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_UART6      :3;//62
     const    uint32_t reserved3       :5;
     volatile uint32_t NVIC_UART7      :3;//63
}PRI15_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     const    uint32_t reserved_10     :3;//64
     const    uint32_t reserved1       :5;
     const    uint32_t reserved_11     :3;//65
     const    uint32_t reserved2       :5;
     const    uint32_t reserved_12     :3;//66
     const    uint32_t reserved3       :5;
     const    uint32_t reserved_13     :3;//67
}PRI16_TypeDef;


typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t NVIC_I2C2       :3;//68
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_I2C3       :3;//69
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_TIMER4A    :3;//70
     const    uint32_t reserved3       :5;
     volatile uint32_t NVIC_TIMER4B    :3;//71
}PRI17_TypeDef;


typedef volatile struct
{
    const    uint32_t reserved         :5;
    const    uint32_t reserved_14      :3;//72
    const    uint32_t reserved1        :5;
    const    uint32_t reserved_15      :3;//73
    const    uint32_t reserved2        :5;
    const    uint32_t reserved_16      :3;//74
    const    uint32_t reserved3        :5;
    const    uint32_t reserved_17      :3;//75
}PRI18_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved         :5;
    const    uint32_t reserved_18      :3;//76
    const    uint32_t reserved1        :5;
    const    uint32_t reserved_19      :3;//77
    const    uint32_t reserved2        :5;
    const    uint32_t reserved_20      :3;//78
    const    uint32_t reserved3        :5;
    const    uint32_t reserved_21      :3;//79
}PRI19_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved         :5;
    const    uint32_t reserved_22      :3;//80
    const    uint32_t reserved1        :5;
    const    uint32_t reserved_23      :3;//81
    const    uint32_t reserved2        :5;
    const    uint32_t reserved_24      :3;//82
    const    uint32_t reserved3        :5;
    const    uint32_t reserved_25      :3;//83
}PRI20_TypeDef;

typedef volatile struct
{
    const     uint32_t reserved        :5;
    const     uint32_t reserved_26     :3;//84
    const     uint32_t reserved1       :5;
    const     uint32_t reserved_27     :3;//85
    const     uint32_t reserved2       :5;
    const     uint32_t reserved_28     :3;//86
    const     uint32_t reserved3       :5;
    const     uint32_t reserved_29     :3;//87
}PRI21_TypeDef;

typedef volatile struct
{
    const     uint32_t reserved        :5;
    const     uint32_t reserved_30     :3;//88
    const     uint32_t reserved1       :5;
    const     uint32_t reserved_31     :3;//89
    const     uint32_t reserved2       :5;
    const     uint32_t reserved_32     :3;//90
    const     uint32_t reserved3       :5;
    const     uint32_t reserved_33     :3;//91
}PRI22_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t NVIC_TIMER5A    :3;//92
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_TIMER5B    :3;//93
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_WTIMER0A   :3;//94
     const    uint32_t reserved3       :5;
     volatile uint32_t NVIC_WTIMER0B   :3;//95
}PRI23_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t NVIC_WTIMER1A   :3;//96
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_WTIMER1B   :3;//97
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_WTIMER2A   :3;//98
     const    uint32_t reserved3       :5;
     volatile uint32_t NVIC_WTIMER2B   :3;//99
}PRI24_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t NVIC_WTIMER3A   :3;//100
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_WTIMER3B   :3;//101
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_WTIMER4A   :3;//102
     const    uint32_t reserved3       :5;
     volatile uint32_t NVIC_WTIMER4B   :3;//103
}PRI25_TypeDef;

typedef volatile struct
{
     const    uint32_t reserved        :5;
     volatile uint32_t NVIC_WTIMER5A   :3;//104
     const    uint32_t reserved1       :5;
     volatile uint32_t NVIC_WTIMER5B   :3;//105
     const    uint32_t reserved2       :5;
     volatile uint32_t NVIC_SYSEXC     :3;//106
     const    uint32_t reserved3       :5;
     const    uint32_t reserved_34     :3;//107
}PRI26_TypeDef;

typedef volatile struct
{
    const     uint32_t reserved        :5;
    const     uint32_t reserved_35     :3;//108
    const     uint32_t reserved1       :5;
    const     uint32_t reserved_36     :3;//109
    const     uint32_t reserved2       :5;
    const     uint32_t reserved_37     :3;//110
    const     uint32_t reserved3       :5;
    const     uint32_t reserved_38     :3;//111
}PRI27_TypeDef;

typedef volatile struct
{
    const     uint32_t reserved        :5;
    const     uint32_t reserved_39     :3;//112
    const     uint32_t reserved1       :5;
    const     uint32_t reserved_40     :3;//113
    const     uint32_t reserved2       :5;
    const     uint32_t reserved_41     :3;//114
    const     uint32_t reserved3       :5;
    const     uint32_t reserved_42     :3;//115
}PRI28_TypeDef;

typedef volatile struct
{
    const     uint32_t reserved        :5;
    const     uint32_t reserved_43     :3;//116
    const     uint32_t reserved1       :5;
    const     uint32_t reserved_44     :3;//117
    const     uint32_t reserved2       :5;
    const     uint32_t reserved_45     :3;//118
    const     uint32_t reserved3       :5;
    const     uint32_t reserved_46     :3;//119
}PRI29_TypeDef;

typedef volatile struct
{
    const     uint32_t reserved        :5;
    const     uint32_t reserved_47     :3;//120
    const     uint32_t reserved1       :5;
    const     uint32_t reserved_48     :3;//121
    const     uint32_t reserved2       :5;
    const     uint32_t reserved_49     :3;//122
    const     uint32_t reserved3       :5;
    const     uint32_t reserved_50     :3;//123
}PRI30_TypeDef;

typedef volatile struct
{
    const     uint32_t reserved        :5;
    const     uint32_t reserved_51     :3;//124
    const     uint32_t reserved1       :5;
    const     uint32_t reserved_52     :3;//125
    const     uint32_t reserved2       :5;
    const     uint32_t reserved_53     :3;//126
    const     uint32_t reserved3       :5;
    const     uint32_t reserved_54     :3;//127
}PRI31_TypeDef;

typedef volatile struct
{
    const     uint32_t reserved        :5;
    const     uint32_t reserved_55     :3;//128
    const     uint32_t reserved1       :5;
    const     uint32_t reserved_56     :3;//129
    const     uint32_t reserved2       :5;
    const     uint32_t reserved_57     :3;//130
    const     uint32_t reserved3       :5;
    const     uint32_t reserved_58     :3;//131
}PRI32_TypeDef;


typedef volatile struct
{
    const    uint32_t reserved         :5;
    const    uint32_t reserved_59      :3;//132
    const    uint32_t reserved1        :5;
    const    uint32_t reserved_60      :3;//133
    const    uint32_t reserved2        :5;
    volatile uint32_t NVIC_PWM1GEN0    :3;//134
    const    uint32_t reserved3        :5;
    volatile uint32_t NVIC_PWM1GEN1    :3;//135
}PRI33_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved         :5;
    volatile uint32_t NVIC_PWM1GEN2    :3;//136
    const    uint32_t reserved1        :5;
    volatile uint32_t NVIC_PWM1GEN3    :3;//137
    const    uint32_t reserved2_       :5;
    volatile uint32_t NVIC_PWM1FAULT   :3;//138
    const    uint32_t reserved3        :5;
    const    uint32_t reserved_61      :3;
}PRI34_TypeDef;


typedef volatile struct
{
    volatile uint32_t INTID    :8;
    const    uint32_t reserved :24;
}SWTRIG_TypeDef;


typedef volatile struct
{
    volatile uint32_t  EN[5];
    const    uint32_t  reserved[27];
    volatile uint32_t  DIS[5];
    const    uint32_t  reserved1[27];
    volatile uint32_t  PEND[5];
    const    uint32_t  reserved2[27];
    volatile uint32_t  UNPEND[5];
    const    uint32_t  reserved3[27];
    volatile uint32_t  ACTIVE[5];
}NVIC10_TypeDef;




typedef volatile struct
{
    union
    {
        volatile uint32_t  EN0;
        NVIC0_TypeDef           EN0_Bit;
    };
    union
    {
        volatile uint32_t  EN1;
        NVIC1_TypeDef           EN1_Bit;
    };
    union
    {
        volatile uint32_t  EN2;
        NVIC2_TypeDef           EN2_Bit;
    };
    union
    {
        volatile uint32_t  EN3;
        NVIC3_TypeDef           EN3_Bit;
    };
    union
    {
        volatile uint32_t  EN4;
        NVIC4_TypeDef           EN4_Bit;
    };

    const uint32_t  reserved[27];

    union
    {
        volatile uint32_t  DIS0;
        NVIC0_TypeDef           DIS0_Bit;
    };
    union
    {
        volatile uint32_t  DIS1;
        NVIC1_TypeDef           DIS1_Bit;
    };
    union
    {
        volatile uint32_t  DIS2;
        NVIC2_TypeDef           DIS2_Bit;
    };
    union
    {
        volatile uint32_t  DIS3;
        NVIC3_TypeDef           DIS3_Bit;
    };
    union
    {
        volatile uint32_t  DIS4;
        NVIC4_TypeDef           DIS4_Bit;
    };

    const uint32_t  reserved1[27];

    union
    {
        volatile uint32_t  PEND0;
        NVIC0_TypeDef           PEND0_Bit;
    };
    union
    {
        volatile uint32_t  PEND1;
        NVIC1_TypeDef           PEND1_Bit;
    };
    union
    {
        volatile uint32_t  PEND2;
        NVIC2_TypeDef           PEND2_Bit;
    };
    union
    {
        volatile uint32_t  PEND3;
        NVIC3_TypeDef           PEND3_Bit;
    };
    union
    {
        volatile uint32_t  PEND4;
        NVIC4_TypeDef           PEND4_Bit;
    };

    const uint32_t  reserved2[27];

    union
    {
        volatile uint32_t  UNPEND0;
        NVIC0_TypeDef           UNPEND0_Bit;
    };
    union
    {
        volatile uint32_t  UNPEND1;
        NVIC1_TypeDef           UNPEND1_Bit;
    };
    union
    {
        volatile uint32_t  UNPEND2;
        NVIC2_TypeDef           UNPEND2_Bit;
    };
    union
    {
        volatile uint32_t  UNPEND3;
        NVIC3_TypeDef           UNPEND3_Bit;
    };
    union
    {
        volatile uint32_t  UNPEND4;
        NVIC4_TypeDef           UNPEND4_Bit;
    };

    const uint32_t  reserved3[27];

    union
    {
        volatile uint32_t  ACTIVE0;
        NVIC0_TypeDef           ACTIVE0_Bit;
    };
    union
    {
        volatile uint32_t  ACTIVE1;
        NVIC1_TypeDef           ACTIVE1_Bit;
    };
    union
    {
        volatile uint32_t  ACTIVE2;
        NVIC2_TypeDef           ACTIVE2_Bit;
    };
    union
    {
        volatile uint32_t  ACTIVE3;
        NVIC3_TypeDef           ACTIVE3_Bit;
    };
    union
    {
        volatile uint32_t  ACTIVE4;
        NVIC4_TypeDef           ACTIVE4_Bit;
    };

    const uint32_t  reserved4[59];

    union
    {
        volatile uint32_t PRI0;
        PRI0_TypeDef           PRI0_Bit;
    };
    union
    {
        volatile uint32_t PRI1;
        PRI1_TypeDef           PRI1_Bit;
    };
    union
    {
        volatile uint32_t PRI2;
        PRI2_TypeDef           PRI2_Bit;
    };
    union
    {
        volatile uint32_t PRI3;
        PRI3_TypeDef           PRI3_Bit;
    };
    union
    {
        volatile uint32_t PRI4;
        PRI4_TypeDef           PRI4_Bit;
    };
    union
    {
        volatile uint32_t PRI5;
        PRI5_TypeDef           PRI5_Bit;
    };
    union
    {
        volatile uint32_t PRI6;
        PRI6_TypeDef           PRI6_Bit;
    };
    union
    {
        volatile uint32_t PRI7;
        PRI7_TypeDef           PRI7_Bit;
    };
    union
    {
        volatile uint32_t PRI8;
        PRI8_TypeDef           PRI8_Bit;
    };
    union
    {
        volatile uint32_t PRI9;
        PRI9_TypeDef           PRI9_Bit;
    };
    union
    {
        volatile uint32_t PRI10;
        PRI10_TypeDef          PRI10_Bit;
    };
    union
    {
        volatile uint32_t PRI11;
        PRI11_TypeDef          PRI11_Bit;
    };
    union
    {
        volatile uint32_t PRI12;
        PRI12_TypeDef          PRI12_Bit;
    };
    union
    {
        volatile uint32_t PRI13;
        PRI13_TypeDef          PRI13_Bit;
    };
    union
    {
        volatile uint32_t PRI14;
        PRI14_TypeDef          PRI14_Bit;
    };
    union
    {
        volatile uint32_t PRI15;
        PRI15_TypeDef          PRI15_Bit;
    };
    union
    {
        volatile uint32_t PRI16;
        PRI16_TypeDef          PRI16_Bit;
    };
    union
    {
        volatile uint32_t PRI17;
        PRI17_TypeDef          PRI17_Bit;
    };
    union
    {
        volatile uint32_t PRI18;
        PRI18_TypeDef          PRI18_Bit;
    };
    union
    {
        volatile uint32_t PRI19;
        PRI19_TypeDef          PRI19_Bit;
    };
    union
    {
        volatile uint32_t PRI20;
        PRI20_TypeDef          PRI20_Bit;
    };
    union
    {
        volatile uint32_t PRI21;
        PRI21_TypeDef          PRI21_Bit;
    };
    union
    {
        volatile uint32_t PRI22;
        PRI22_TypeDef          PRI22_Bit;
    };
    union
    {
        volatile uint32_t PRI23;
        PRI23_TypeDef          PRI23_Bit;
    };
    union
    {
        volatile uint32_t PRI24;
        PRI24_TypeDef          PRI24_Bit;
    };
    union
    {
        volatile uint32_t PRI25;
        PRI25_TypeDef          PRI25_Bit;
    };
    union
    {
        volatile uint32_t PRI26;
        PRI26_TypeDef          PRI26_Bit;
    };
    union
    {
        volatile uint32_t PRI27;
        PRI27_TypeDef          PRI27_Bit;
    };
    union
    {
        volatile uint32_t PRI28;
        PRI28_TypeDef          PRI28_Bit;
    };
    union
    {
        volatile uint32_t PRI29;
        PRI29_TypeDef          PRI29_Bit;
    };
    union
    {
        volatile uint32_t PRI30;
        PRI30_TypeDef          PRI30_Bit;
    };
    union
    {
        volatile uint32_t PRI31;
        PRI31_TypeDef          PRI31_Bit;
    };
    union
    {
        volatile uint32_t PRI32;
        PRI32_TypeDef          PRI32_Bit;
    };
    union
    {
        volatile uint32_t PRI33;
        PRI33_TypeDef          PRI33_Bit;
    };
    union
    {
        volatile uint32_t PRI34;
        PRI34_TypeDef          PRI34_Bit;
    };

    const uint32_t  reserved5[669];

    union
    {
        volatile uint32_t  SWTRIG;
        SWTRIG_TypeDef          SWTRIG_Bit;
    };

}NVIC_TypeDef;






typedef volatile struct
{
    PRI__TypeDef PRI[35];
}PRI___TypeDef;



typedef volatile struct
{
    union
    {
        volatile uint32_t  PRI0;
        PRI0_TypeDef            PRI0_Bit;
    };
    union
    {
        volatile uint32_t  PRI1;
        PRI1_TypeDef            PRI1_Bit;
    };
    union
    {
        volatile uint32_t  PRI2;
        PRI2_TypeDef            PRI2_Bit;
    };
    union
    {
        volatile uint32_t  PRI3;
        PRI3_TypeDef            PRI3_Bit;
    };
    union
    {
        volatile uint32_t  PRI4;
        PRI4_TypeDef            PRI4_Bit;
    };
    union
    {
        volatile uint32_t  PRI5;
        PRI5_TypeDef            PRI5_Bit;
    };
    union
    {
        volatile uint32_t  PRI6;
        PRI6_TypeDef            PRI6_Bit;
    };
    union
    {
        volatile uint32_t  PRI7;
        PRI7_TypeDef            PRI7_Bit;
    };
    union
    {
        volatile uint32_t  PRI8;
        PRI8_TypeDef            PRI8_Bit;
    };
    union
    {
        volatile uint32_t  PRI9;
        PRI9_TypeDef            PRI9_Bit;
    };
    union
    {
        volatile uint32_t  PRI10;
        PRI10_TypeDef           PRI10_Bit;
    };
    union
    {
        volatile uint32_t  PRI11;
        PRI11_TypeDef           PRI11_Bit;
    };
    union
    {
        volatile uint32_t  PRI12;
        PRI12_TypeDef           PRI12_Bit;
    };
    union
    {
        volatile uint32_t  PRI13;
        PRI13_TypeDef           PRI13_Bit;
    };
    union
    {
        volatile uint32_t  PRI14;
        PRI14_TypeDef           PRI14_Bit;
    };
    union
    {
        volatile uint32_t  PRI15;
        PRI15_TypeDef           PRI15_Bit;
    };
    union
    {
        volatile uint32_t  PRI16;
        PRI16_TypeDef           PRI16_Bit;
    };
    union
    {
        volatile uint32_t  PRI17;
        PRI17_TypeDef           PRI17_Bit;
    };
    union
    {
        volatile uint32_t  PRI18;
        PRI18_TypeDef           PRI18_Bit;
    };
    union
    {
        volatile uint32_t  PRI19;
        PRI19_TypeDef           PRI19_Bit;
    };
    union
    {
        volatile uint32_t  PRI20;
        PRI20_TypeDef           PRI20_Bit;
    };
    union
    {
        volatile uint32_t  PRI21;
        PRI21_TypeDef           PRI21_Bit;
    };
    union
    {
        volatile uint32_t  PRI22;
        PRI22_TypeDef           PRI22_Bit;
    };
    union
    {
        volatile uint32_t  PRI23;
        PRI23_TypeDef           PRI23_Bit;
    };
    union
    {
        volatile uint32_t  PRI24;
        PRI24_TypeDef           PRI24_Bit;
    };
    union
    {
        volatile uint32_t  PRI25;
        PRI25_TypeDef           PRI25_Bit;
    };
    union
    {
        volatile uint32_t  PRI26;
        PRI26_TypeDef           PRI26_Bit;
    };
    union
    {
        volatile uint32_t  PRI27;
        PRI27_TypeDef           PRI27_Bit;
    };
    union
    {
        volatile uint32_t  PRI28;
        PRI28_TypeDef           PRI28_Bit;
    };
    union
    {
        volatile uint32_t  PRI29;
        PRI29_TypeDef           PRI29_Bit;
    };
    union
    {
        volatile uint32_t  PRI30;
        PRI30_TypeDef           PRI30_Bit;
    };
    union
    {
        volatile uint32_t  PRI31;
        PRI31_TypeDef           PRI31_Bit;
    };
    union
    {
        volatile uint32_t  PRI32;
        PRI32_TypeDef           PRI32_Bit;
    };
    union
    {
        volatile uint32_t  PRI33;
        PRI33_TypeDef           PRI33_Bit;
    };
    union
    {
        volatile uint32_t  PRI34;
        PRI34_TypeDef           PRI34_Bit;
    };

}PRI_TypeDef;





#define NVIC            (((NVIC_TypeDef*)(NVIC_BASE+ NVIC_OFFSET)))
#define NVIC1            (((NVIC10_TypeDef*)(NVIC_BASE+ NVIC_OFFSET)))


#define NVIC_EN0_OFFSET         (0x0100)
#define NVIC_DIS0_OFFSET        (0x0180)
#define NVIC_PEND0_OFFSET       (0x0200)
#define NVIC_UNPEND0_OFFSET     (0x0280)
#define NVIC_ACTIVE0_OFFSET     (0x0300)
#define NVIC_EN1_OFFSET         (0x0104)
#define NVIC_DIS1_OFFSET        (0x0184)
#define NVIC_PEND1_OFFSET       (0x0204)
#define NVIC_UNPEND1_OFFSET     (0x0284)
#define NVIC_ACTIVE1_OFFSET     (0x0304)
#define NVIC_EN2_OFFSET         (0x0108)
#define NVIC_DIS2_OFFSET        (0x0188)
#define NVIC_PEND2_OFFSET       (0x0208)
#define NVIC_UNPEND2_OFFSET     (0x0288)
#define NVIC_ACTIVE2_OFFSET     (0x0308)
#define NVIC_EN3_OFFSET         (0x010C)
#define NVIC_DIS3_OFFSET        (0x018C)
#define NVIC_PEND3_OFFSET       (0x020C)
#define NVIC_UNPEND3_OFFSET     (0x028C)
#define NVIC_ACTIVE3_OFFSET     (0x030C)
#define NVIC_EN4_OFFSET         (0x0110)
#define NVIC_DIS4_OFFSET        (0x0190)
#define NVIC_PEND4_OFFSET       (0x0210)
#define NVIC_UNPEND4_OFFSET     (0x0290)
#define NVIC_ACTIVE4_OFFSET     (0x0310)
#define NVIC_PRI0_OFFSET        (0x0400)
#define NVIC_PRI1_OFFSET        (0x0404)
#define NVIC_PRI2_OFFSET        (0x0408)
#define NVIC_PRI3_OFFSET        (0x040C)
#define NVIC_PRI4_OFFSET        (0x0410)
#define NVIC_PRI5_OFFSET        (0x0414)
#define NVIC_PRI6_OFFSET        (0x0418)
#define NVIC_PRI7_OFFSET        (0x041C)
#define NVIC_PRI8_OFFSET        (0x0420)
#define NVIC_PRI9_OFFSET        (0x0424)
#define NVIC_PRI10_OFFSET       (0x0428)
#define NVIC_PRI11_OFFSET       (0x042C)
#define NVIC_PRI12_OFFSET       (0x0430)
#define NVIC_PRI13_OFFSET       (0x0434)
#define NVIC_PRI14_OFFSET       (0x0438)
#define NVIC_PRI15_OFFSET       (0x043C)
#define NVIC_PRI16_OFFSET       (0x0440)
#define NVIC_PRI17_OFFSET       (0x0444)
#define NVIC_PRI18_OFFSET       (0x0448)
#define NVIC_PRI19_OFFSET       (0x044C)
#define NVIC_PRI20_OFFSET       (0x0450)
#define NVIC_PRI21_OFFSET       (0x0454)
#define NVIC_PRI22_OFFSET       (0x0458)
#define NVIC_PRI23_OFFSET       (0x045C)
#define NVIC_PRI24_OFFSET       (0x0460)
#define NVIC_PRI25_OFFSET       (0x0464)
#define NVIC_PRI26_OFFSET       (0x0468)
#define NVIC_PRI27_OFFSET       (0x046C)
#define NVIC_PRI28_OFFSET       (0x0470)
#define NVIC_PRI29_OFFSET       (0x0474)
#define NVIC_PRI30_OFFSET       (0x0478)
#define NVIC_PRI31_OFFSET       (0x047C)
#define NVIC_PRI32_OFFSET       (0x0480)
#define NVIC_PRI33_OFFSET       (0x0484)
#define NVIC_PRI34_OFFSET       (0x0488)
#define NVIC_SWTRIG_OFFSET      (0x0F00)


//ToDo EN0
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// EN0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_EN0                (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_EN0_OFFSET)))
#define NVIC_EN0_R             (*((volatile uint32_t *)(NVIC_BASE+NVIC_EN0_OFFSET)))


//--------
#define NVIC_EN0_R_NVIC_GPIOA_MASK      (0x00000001)
#define NVIC_EN0_R_NVIC_GPIOA_BIT       (0)
#define NVIC_EN0_R_NVIC_GPIOA_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_GPIOA_EN        (0x00000001)

#define NVIC_EN0_NVIC_GPIOA_MASK      (0x00000001)
#define NVIC_EN0_NVIC_GPIOA_DIS       (0x00000000)
#define NVIC_EN0_NVIC_GPIOA_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_GPIOB_MASK      (0x00000002)
#define NVIC_EN0_R_NVIC_GPIOB_BIT       (1)
#define NVIC_EN0_R_NVIC_GPIOB_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_GPIOB_EN        (0x00000002)

#define NVIC_EN0_NVIC_GPIOB_MASK      (0x00000001)
#define NVIC_EN0_NVIC_GPIOB_DIS       (0x00000000)
#define NVIC_EN0_NVIC_GPIOB_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_GPIOC_MASK      (0x00000004)
#define NVIC_EN0_R_NVIC_GPIOC_BIT       (2)
#define NVIC_EN0_R_NVIC_GPIOC_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_GPIOC_EN        (0x00000004)

#define NVIC_EN0_NVIC_GPIOC_MASK      (0x00000001)
#define NVIC_EN0_NVIC_GPIOC_DIS       (0x00000000)
#define NVIC_EN0_NVIC_GPIOC_EN        (0x00000001)
//--------


//--------
#define NVIC_EN0_R_NVIC_GPIOD_MASK      (0x00000008)
#define NVIC_EN0_R_NVIC_GPIOD_BIT       (3)
#define NVIC_EN0_R_NVIC_GPIOD_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_GPIOD_EN        (0x00000008)

#define NVIC_EN0_NVIC_GPIOD_MASK      (0x00000001)
#define NVIC_EN0_NVIC_GPIOD_DIS       (0x00000000)
#define NVIC_EN0_NVIC_GPIOD_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_GPIOE_MASK      (0x00000010)
#define NVIC_EN0_R_NVIC_GPIOE_BIT       (4)
#define NVIC_EN0_R_NVIC_GPIOE_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_GPIOE_EN        (0x00000010)

#define NVIC_EN0_NVIC_GPIOE_MASK      (0x00000001)
#define NVIC_EN0_NVIC_GPIOE_DIS       (0x00000000)
#define NVIC_EN0_NVIC_GPIOE_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_UART0_MASK      (0x00000020)
#define NVIC_EN0_R_NVIC_UART0_BIT       (5)
#define NVIC_EN0_R_NVIC_UART0_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_UART0_EN        (0x00000020)

#define NVIC_EN0_NVIC_UART0_MASK      (0x00000001)
#define NVIC_EN0_NVIC_UART0_DIS       (0x00000000)
#define NVIC_EN0_NVIC_UART0_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_UART1_MASK      (0x00000040)
#define NVIC_EN0_R_NVIC_UART1_BIT       (6)
#define NVIC_EN0_R_NVIC_UART1_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_UART1_EN        (0x00000040)

#define NVIC_EN0_NVIC_UART1_MASK      (0x00000001)
#define NVIC_EN0_NVIC_UART1_DIS       (0x00000000)
#define NVIC_EN0_NVIC_UART1_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_SSI0_MASK      (0x00000080)
#define NVIC_EN0_R_NVIC_SSI0_BIT       (7)
#define NVIC_EN0_R_NVIC_SSI0_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_SSI0_EN        (0x00000080)

#define NVIC_EN0_NVIC_SSI0_MASK      (0x00000001)
#define NVIC_EN0_NVIC_SSI0_DIS       (0x00000000)
#define NVIC_EN0_NVIC_SSI0_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_I2C0_MASK      (0x00000100)
#define NVIC_EN0_R_NVIC_I2C0_BIT       (8)
#define NVIC_EN0_R_NVIC_I2C0_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_I2C0_EN        (0x00000100)

#define NVIC_EN0_NVIC_I2C0_MASK      (0x00000001)
#define NVIC_EN0_NVIC_I2C0_DIS       (0x00000000)
#define NVIC_EN0_NVIC_I2C0_EN        (0x00000001)
//--------


//--------
#define NVIC_EN0_R_NVIC_PWM0FAULT_MASK      (0x00000200)
#define NVIC_EN0_R_NVIC_PWM0FAULT_BIT       (9)
#define NVIC_EN0_R_NVIC_PWM0FAULT_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_PWM0FAULT_EN        (0x00000200)

#define NVIC_EN0_NVIC_PWM0FAULT_MASK      (0x00000001)
#define NVIC_EN0_NVIC_PWM0FAULT_DIS       (0x00000000)
#define NVIC_EN0_NVIC_PWM0FAULT_EN        (0x00000001)
//--------


//--------
#define NVIC_EN0_R_NVIC_PWM0GEN0_MASK      (0x00000400)
#define NVIC_EN0_R_NVIC_PWM0GEN0_BIT       (10)
#define NVIC_EN0_R_NVIC_PWM0GEN0_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_PWM0GEN0_EN        (0x00000400)

#define NVIC_EN0_NVIC_PWM0GEN0_MASK      (0x00000001)
#define NVIC_EN0_NVIC_PWM0GEN0_DIS       (0x00000000)
#define NVIC_EN0_NVIC_PWM0GEN0_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_PWM0GEN1_MASK      (0x00000800)
#define NVIC_EN0_R_NVIC_PWM0GEN1_BIT       (11)
#define NVIC_EN0_R_NVIC_PWM0GEN1_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_PWM0GEN1_EN        (0x00000800)

#define NVIC_EN0_NVIC_PWM0GEN1_MASK      (0x00000001)
#define NVIC_EN0_NVIC_PWM0GEN1_DIS       (0x00000000)
#define NVIC_EN0_NVIC_PWM0GEN1_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_PWM0GEN2_MASK      (0x00001000)
#define NVIC_EN0_R_NVIC_PWM0GEN2_BIT       (12)
#define NVIC_EN0_R_NVIC_PWM0GEN2_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_PWM0GEN2_EN        (0x00001000)

#define NVIC_EN0_NVIC_PWM0GEN2_MASK      (0x00000001)
#define NVIC_EN0_NVIC_PWM0GEN2_DIS       (0x00000000)
#define NVIC_EN0_NVIC_PWM0GEN2_EN        (0x00000001)
//--------


//--------
#define NVIC_EN0_R_NVIC_QEI0_MASK      (0x00002000)
#define NVIC_EN0_R_NVIC_QEI0_BIT       (13)
#define NVIC_EN0_R_NVIC_QEI0_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_QEI0_EN        (0x00002000)

#define NVIC_EN0_NVIC_QEI0_MASK      (0x00000001)
#define NVIC_EN0_NVIC_QEI0_DIS       (0x00000000)
#define NVIC_EN0_NVIC_QEI0_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_ADC0SEQ0_MASK      (0x00004000)
#define NVIC_EN0_R_NVIC_ADC0SEQ0_BIT       (14)
#define NVIC_EN0_R_NVIC_ADC0SEQ0_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_ADC0SEQ0_EN        (0x00004000)

#define NVIC_EN0_NVIC_ADC0SEQ0_MASK      (0x00000001)
#define NVIC_EN0_NVIC_ADC0SEQ0_DIS       (0x00000000)
#define NVIC_EN0_NVIC_ADC0SEQ0_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_ADC0SEQ1_MASK      (0x00008000)
#define NVIC_EN0_R_NVIC_ADC0SEQ1_BIT       (15)
#define NVIC_EN0_R_NVIC_ADC0SEQ1_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_ADC0SEQ1_EN        (0x00008000)

#define NVIC_EN0_NVIC_ADC0SEQ1_MASK      (0x00000001)
#define NVIC_EN0_NVIC_ADC0SEQ1_DIS       (0x00000000)
#define NVIC_EN0_NVIC_ADC0SEQ1_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_ADC0SEQ2_MASK      (0x00010000)
#define NVIC_EN0_R_NVIC_ADC0SEQ2_BIT       (16)
#define NVIC_EN0_R_NVIC_ADC0SEQ2_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_ADC0SEQ2_EN        (0x00010000)

#define NVIC_EN0_NVIC_ADC0SEQ2_MASK      (0x00000001)
#define NVIC_EN0_NVIC_ADC0SEQ2_DIS       (0x00000000)
#define NVIC_EN0_NVIC_ADC0SEQ2_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_ADC0SEQ3_MASK      (0x00020000)
#define NVIC_EN0_R_NVIC_ADC0SEQ3_BIT       (17)
#define NVIC_EN0_R_NVIC_ADC0SEQ3_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_ADC0SEQ3_EN        (0x00020000)

#define NVIC_EN0_NVIC_ADC0SEQ3_MASK      (0x00000001)
#define NVIC_EN0_NVIC_ADC0SEQ3_DIS       (0x00000000)
#define NVIC_EN0_NVIC_ADC0SEQ3_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_WDT01_MASK      (0x00040000)
#define NVIC_EN0_R_NVIC_WDT01_BIT       (18)
#define NVIC_EN0_R_NVIC_WDT01_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_WDT01_EN        (0x00040000)

#define NVIC_EN0_NVIC_WDT01_MASK      (0x00000001)
#define NVIC_EN0_NVIC_WDT01_DIS       (0x00000000)
#define NVIC_EN0_NVIC_WDT01_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_TIMER0A_MASK      (0x00080000)
#define NVIC_EN0_R_NVIC_TIMER0A_BIT       (19)
#define NVIC_EN0_R_NVIC_TIMER0A_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_TIMER0A_EN        (0x00080000)

#define NVIC_EN0_NVIC_TIMER0A_MASK      (0x00000001)
#define NVIC_EN0_NVIC_TIMER0A_DIS       (0x00000000)
#define NVIC_EN0_NVIC_TIMER0A_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_TIMER0B_MASK      (0x00100000)
#define NVIC_EN0_R_NVIC_TIMER0B_BIT       (20)
#define NVIC_EN0_R_NVIC_TIMER0B_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_TIMER0B_EN        (0x00100000)

#define NVIC_EN0_NVIC_TIMER0B_MASK      (0x00000001)
#define NVIC_EN0_NVIC_TIMER0B_DIS       (0x00000000)
#define NVIC_EN0_NVIC_TIMER0B_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_TIMER1A_MASK      (0x00200000)
#define NVIC_EN0_R_NVIC_TIMER1A_BIT       (21)
#define NVIC_EN0_R_NVIC_TIMER1A_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_TIMER1A_EN        (0x00200000)

#define NVIC_EN0_NVIC_TIMER1A_MASK      (0x00000001)
#define NVIC_EN0_NVIC_TIMER1A_DIS       (0x00000000)
#define NVIC_EN0_NVIC_TIMER1A_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_TIMER1B_MASK      (0x00400000)
#define NVIC_EN0_R_NVIC_TIMER1B_BIT       (22)
#define NVIC_EN0_R_NVIC_TIMER1B_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_TIMER1B_EN        (0x00400000)

#define NVIC_EN0_NVIC_TIMER1B_MASK      (0x00000001)
#define NVIC_EN0_NVIC_TIMER1B_DIS       (0x00000000)
#define NVIC_EN0_NVIC_TIMER1B_EN        (0x00000001)
//--------


//--------
#define NVIC_EN0_R_NVIC_TIMER2A_MASK      (0x00800000)
#define NVIC_EN0_R_NVIC_TIMER2A_BIT       (23)
#define NVIC_EN0_R_NVIC_TIMER2A_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_TIMER2A_EN        (0x00800000)

#define NVIC_EN0_NVIC_TIMER2A_MASK      (0x00000001)
#define NVIC_EN0_NVIC_TIMER2A_DIS       (0x00000000)
#define NVIC_EN0_NVIC_TIMER2A_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_TIMER2B_MASK      (0x01000000)
#define NVIC_EN0_R_NVIC_TIMER2B_BIT       (24)
#define NVIC_EN0_R_NVIC_TIMER2B_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_TIMER2B_EN        (0x01000000)

#define NVIC_EN0_NVIC_TIMER2B_MASK      (0x00000001)
#define NVIC_EN0_NVIC_TIMER2B_DIS       (0x00000000)
#define NVIC_EN0_NVIC_TIMER2B_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_COMP0_MASK      (0x02000000)
#define NVIC_EN0_R_NVIC_COMP0_BIT       (25)
#define NVIC_EN0_R_NVIC_COMP0_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_COMP0_EN        (0x02000000)

#define NVIC_EN0_NVIC_COMP0_MASK      (0x00000001)
#define NVIC_EN0_NVIC_COMP0_DIS       (0x00000000)
#define NVIC_EN0_NVIC_COMP0_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_COMP1_MASK      (0x04000000)
#define NVIC_EN0_R_NVIC_COMP1_BIT       (26)
#define NVIC_EN0_R_NVIC_COMP1_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_COMP1_EN        (0x04000000)

#define NVIC_EN0_NVIC_COMP1_MASK      (0x00000001)
#define NVIC_EN0_NVIC_COMP1_DIS       (0x00000000)
#define NVIC_EN0_NVIC_COMP1_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_SYSCTL_MASK      (0x10000000)
#define NVIC_EN0_R_NVIC_SYSCTL_BIT       (28)
#define NVIC_EN0_R_NVIC_SYSCTL_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_SYSCTL_EN        (0x10000000)

#define NVIC_EN0_NVIC_SYSCTL_MASK      (0x00000001)
#define NVIC_EN0_NVIC_SYSCTL_DIS       (0x00000000)
#define NVIC_EN0_NVIC_SYSCTL_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_FLASH_MASK      (0x20000000)
#define NVIC_EN0_R_NVIC_FLASH_BIT       (29)
#define NVIC_EN0_R_NVIC_FLASH_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_FLASH_EN        (0x20000000)

#define NVIC_EN0_NVIC_FLASH_MASK      (0x00000001)
#define NVIC_EN0_NVIC_FLASH_DIS       (0x00000000)
#define NVIC_EN0_NVIC_FLASH_EN        (0x00000001)
//--------

//--------
#define NVIC_EN0_R_NVIC_GPIOF_MASK      (0x40000000)
#define NVIC_EN0_R_NVIC_GPIOF_BIT       (30)
#define NVIC_EN0_R_NVIC_GPIOF_DIS       (0x00000000)
#define NVIC_EN0_R_NVIC_GPIOF_EN        (0x40000000)

#define NVIC_EN0_NVIC_GPIOF_MASK      (0x00000001)
#define NVIC_EN0_NVIC_GPIOF_DIS       (0x00000000)
#define NVIC_EN0_NVIC_GPIOF_EN        (0x00000001)
//--------




//ToDO DIS0
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// DIS0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_DIS0               (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_DIS0_OFFSET)))
#define NVIC_DIS0_R            (*((volatile uint32_t *)(NVIC_BASE+NVIC_DIS0_OFFSET)))


//--------
#define NVIC_DIS0_R_NVIC_GPIOA_MASK      (0x00000001)
#define NVIC_DIS0_R_NVIC_GPIOA_BIT       (0)
#define NVIC_DIS0_R_NVIC_GPIOA_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_GPIOA_EN        (0x00000001)

#define NVIC_DIS0_NVIC_GPIOA_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_GPIOA_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_GPIOA_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_GPIOB_MASK      (0x00000002)
#define NVIC_DIS0_R_NVIC_GPIOB_BIT       (1)
#define NVIC_DIS0_R_NVIC_GPIOB_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_GPIOB_EN        (0x00000002)

#define NVIC_DIS0_NVIC_GPIOB_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_GPIOB_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_GPIOB_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_GPIOC_MASK      (0x00000004)
#define NVIC_DIS0_R_NVIC_GPIOC_BIT       (2)
#define NVIC_DIS0_R_NVIC_GPIOC_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_GPIOC_EN        (0x00000004)

#define NVIC_DIS0_NVIC_GPIOC_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_GPIOC_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_GPIOC_EN        (0x00000001)
//--------


//--------
#define NVIC_DIS0_R_NVIC_GPIOD_MASK      (0x00000008)
#define NVIC_DIS0_R_NVIC_GPIOD_BIT       (3)
#define NVIC_DIS0_R_NVIC_GPIOD_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_GPIOD_EN        (0x00000008)

#define NVIC_DIS0_NVIC_GPIOD_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_GPIOD_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_GPIOD_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_GPIOE_MASK      (0x00000010)
#define NVIC_DIS0_R_NVIC_GPIOE_BIT       (4)
#define NVIC_DIS0_R_NVIC_GPIOE_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_GPIOE_EN        (0x00000010)

#define NVIC_DIS0_NVIC_GPIOE_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_GPIOE_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_GPIOE_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_UART0_MASK      (0x00000020)
#define NVIC_DIS0_R_NVIC_UART0_BIT       (5)
#define NVIC_DIS0_R_NVIC_UART0_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_UART0_EN        (0x00000020)

#define NVIC_DIS0_NVIC_UART0_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_UART0_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_UART0_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_UART1_MASK      (0x00000040)
#define NVIC_DIS0_R_NVIC_UART1_BIT       (6)
#define NVIC_DIS0_R_NVIC_UART1_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_UART1_EN        (0x00000040)

#define NVIC_DIS0_NVIC_UART1_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_UART1_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_UART1_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_SSI0_MASK      (0x00000080)
#define NVIC_DIS0_R_NVIC_SSI0_BIT       (7)
#define NVIC_DIS0_R_NVIC_SSI0_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_SSI0_EN        (0x00000080)

#define NVIC_DIS0_NVIC_SSI0_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_SSI0_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_SSI0_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_I2C0_MASK      (0x00000100)
#define NVIC_DIS0_R_NVIC_I2C0_BIT       (8)
#define NVIC_DIS0_R_NVIC_I2C0_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_I2C0_EN        (0x00000100)

#define NVIC_DIS0_NVIC_I2C0_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_I2C0_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_I2C0_EN        (0x00000001)
//--------


//--------
#define NVIC_DIS0_R_NVIC_PWM0FAULT_MASK      (0x00000200)
#define NVIC_DIS0_R_NVIC_PWM0FAULT_BIT       (9)
#define NVIC_DIS0_R_NVIC_PWM0FAULT_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_PWM0FAULT_EN        (0x00000200)

#define NVIC_DIS0_NVIC_PWM0FAULT_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_PWM0FAULT_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_PWM0FAULT_EN        (0x00000001)
//--------


//--------
#define NVIC_DIS0_R_NVIC_PWM0GDIS0_MASK      (0x00000400)
#define NVIC_DIS0_R_NVIC_PWM0GDIS0_BIT       (10)
#define NVIC_DIS0_R_NVIC_PWM0GDIS0_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_PWM0GDIS0_EN        (0x00000400)

#define NVIC_DIS0_NVIC_PWM0GDIS0_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_PWM0GDIS0_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_PWM0GDIS0_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_PWM0GEN1_MASK      (0x00000800)
#define NVIC_DIS0_R_NVIC_PWM0GEN1_BIT       (11)
#define NVIC_DIS0_R_NVIC_PWM0GEN1_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_PWM0GEN1_EN        (0x00000800)

#define NVIC_DIS0_NVIC_PWM0GEN1_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_PWM0GEN1_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_PWM0GEN1_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_PWM0GEN2_MASK      (0x00001000)
#define NVIC_DIS0_R_NVIC_PWM0GEN2_BIT       (12)
#define NVIC_DIS0_R_NVIC_PWM0GEN2_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_PWM0GEN2_EN        (0x00001000)

#define NVIC_DIS0_NVIC_PWM0GEN2_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_PWM0GEN2_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_PWM0GEN2_EN        (0x00000001)
//--------


//--------
#define NVIC_DIS0_R_NVIC_QEI0_MASK      (0x00002000)
#define NVIC_DIS0_R_NVIC_QEI0_BIT       (13)
#define NVIC_DIS0_R_NVIC_QEI0_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_QEI0_EN        (0x00002000)

#define NVIC_DIS0_NVIC_QEI0_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_QEI0_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_QEI0_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_ADC0SEQ0_MASK      (0x00004000)
#define NVIC_DIS0_R_NVIC_ADC0SEQ0_BIT       (14)
#define NVIC_DIS0_R_NVIC_ADC0SEQ0_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_ADC0SEQ0_EN        (0x00004000)

#define NVIC_DIS0_NVIC_ADC0SEQ0_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_ADC0SEQ0_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_ADC0SEQ0_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_ADC0SEQ1_MASK      (0x00008000)
#define NVIC_DIS0_R_NVIC_ADC0SEQ1_BIT       (15)
#define NVIC_DIS0_R_NVIC_ADC0SEQ1_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_ADC0SEQ1_EN        (0x00008000)

#define NVIC_DIS0_NVIC_ADC0SEQ1_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_ADC0SEQ1_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_ADC0SEQ1_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_ADC0SEQ2_MASK      (0x00010000)
#define NVIC_DIS0_R_NVIC_ADC0SEQ2_BIT       (16)
#define NVIC_DIS0_R_NVIC_ADC0SEQ2_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_ADC0SEQ2_EN        (0x00010000)

#define NVIC_DIS0_NVIC_ADC0SEQ2_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_ADC0SEQ2_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_ADC0SEQ2_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_ADC0SEQ3_MASK      (0x00020000)
#define NVIC_DIS0_R_NVIC_ADC0SEQ3_BIT       (17)
#define NVIC_DIS0_R_NVIC_ADC0SEQ3_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_ADC0SEQ3_EN        (0x00020000)

#define NVIC_DIS0_NVIC_ADC0SEQ3_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_ADC0SEQ3_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_ADC0SEQ3_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_WDT01_MASK      (0x00040000)
#define NVIC_DIS0_R_NVIC_WDT01_BIT       (18)
#define NVIC_DIS0_R_NVIC_WDT01_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_WDT01_EN        (0x00040000)

#define NVIC_DIS0_NVIC_WDT01_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_WDT01_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_WDT01_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_TIMER0A_MASK      (0x00080000)
#define NVIC_DIS0_R_NVIC_TIMER0A_BIT       (19)
#define NVIC_DIS0_R_NVIC_TIMER0A_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_TIMER0A_EN        (0x00080000)

#define NVIC_DIS0_NVIC_TIMER0A_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_TIMER0A_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_TIMER0A_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_TIMER0B_MASK      (0x00100000)
#define NVIC_DIS0_R_NVIC_TIMER0B_BIT       (20)
#define NVIC_DIS0_R_NVIC_TIMER0B_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_TIMER0B_EN        (0x00100000)

#define NVIC_DIS0_NVIC_TIMER0B_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_TIMER0B_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_TIMER0B_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_TIMER1A_MASK      (0x00200000)
#define NVIC_DIS0_R_NVIC_TIMER1A_BIT       (21)
#define NVIC_DIS0_R_NVIC_TIMER1A_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_TIMER1A_EN        (0x00200000)

#define NVIC_DIS0_NVIC_TIMER1A_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_TIMER1A_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_TIMER1A_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_TIMER1B_MASK      (0x00400000)
#define NVIC_DIS0_R_NVIC_TIMER1B_BIT       (22)
#define NVIC_DIS0_R_NVIC_TIMER1B_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_TIMER1B_EN        (0x00400000)

#define NVIC_DIS0_NVIC_TIMER1B_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_TIMER1B_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_TIMER1B_EN        (0x00000001)
//--------


//--------
#define NVIC_DIS0_R_NVIC_TIMER2A_MASK      (0x00800000)
#define NVIC_DIS0_R_NVIC_TIMER2A_BIT       (23)
#define NVIC_DIS0_R_NVIC_TIMER2A_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_TIMER2A_EN        (0x00800000)

#define NVIC_DIS0_NVIC_TIMER2A_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_TIMER2A_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_TIMER2A_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_TIMER2B_MASK      (0x01000000)
#define NVIC_DIS0_R_NVIC_TIMER2B_BIT       (24)
#define NVIC_DIS0_R_NVIC_TIMER2B_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_TIMER2B_EN        (0x01000000)

#define NVIC_DIS0_NVIC_TIMER2B_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_TIMER2B_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_TIMER2B_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_COMP0_MASK      (0x02000000)
#define NVIC_DIS0_R_NVIC_COMP0_BIT       (25)
#define NVIC_DIS0_R_NVIC_COMP0_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_COMP0_EN        (0x02000000)

#define NVIC_DIS0_NVIC_COMP0_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_COMP0_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_COMP0_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_COMP1_MASK      (0x04000000)
#define NVIC_DIS0_R_NVIC_COMP1_BIT       (26)
#define NVIC_DIS0_R_NVIC_COMP1_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_COMP1_EN        (0x04000000)

#define NVIC_DIS0_NVIC_COMP1_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_COMP1_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_COMP1_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_SYSCTL_MASK      (0x10000000)
#define NVIC_DIS0_R_NVIC_SYSCTL_BIT       (28)
#define NVIC_DIS0_R_NVIC_SYSCTL_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_SYSCTL_EN        (0x10000000)

#define NVIC_DIS0_NVIC_SYSCTL_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_SYSCTL_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_SYSCTL_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_FLASH_MASK      (0x20000000)
#define NVIC_DIS0_R_NVIC_FLASH_BIT       (29)
#define NVIC_DIS0_R_NVIC_FLASH_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_FLASH_EN        (0x20000000)

#define NVIC_DIS0_NVIC_FLASH_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_FLASH_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_FLASH_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS0_R_NVIC_GPIOF_MASK      (0x40000000)
#define NVIC_DIS0_R_NVIC_GPIOF_BIT       (30)
#define NVIC_DIS0_R_NVIC_GPIOF_DIS       (0x00000000)
#define NVIC_DIS0_R_NVIC_GPIOF_EN        (0x40000000)

#define NVIC_DIS0_NVIC_GPIOF_MASK      (0x00000001)
#define NVIC_DIS0_NVIC_GPIOF_DIS       (0x00000000)
#define NVIC_DIS0_NVIC_GPIOF_EN        (0x00000001)
//--------

//ToDO PEND0
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PEND0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define NVIC_PEND0              (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_PEND0_OFFSET)))
#define NVIC_PEND0_R           (*((volatile uint32_t *)(NVIC_BASE+NVIC_PEND0_OFFSET)))


//--------
#define NVIC_PEND0_R_NVIC_GPIOA_MASK      (0x00000001)
#define NVIC_PEND0_R_NVIC_GPIOA_BIT       (0)
#define NVIC_PEND0_R_NVIC_GPIOA_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_GPIOA_EN        (0x00000001)

#define NVIC_PEND0_NVIC_GPIOA_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_GPIOA_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_GPIOA_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_GPIOB_MASK      (0x00000002)
#define NVIC_PEND0_R_NVIC_GPIOB_BIT       (1)
#define NVIC_PEND0_R_NVIC_GPIOB_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_GPIOB_EN        (0x00000002)

#define NVIC_PEND0_NVIC_GPIOB_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_GPIOB_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_GPIOB_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_GPIOC_MASK      (0x00000004)
#define NVIC_PEND0_R_NVIC_GPIOC_BIT       (2)
#define NVIC_PEND0_R_NVIC_GPIOC_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_GPIOC_EN        (0x00000004)

#define NVIC_PEND0_NVIC_GPIOC_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_GPIOC_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_GPIOC_EN        (0x00000001)
//--------


//--------
#define NVIC_PEND0_R_NVIC_GPIOD_MASK      (0x00000008)
#define NVIC_PEND0_R_NVIC_GPIOD_BIT       (3)
#define NVIC_PEND0_R_NVIC_GPIOD_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_GPIOD_EN        (0x00000008)

#define NVIC_PEND0_NVIC_GPIOD_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_GPIOD_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_GPIOD_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_GPIOE_MASK      (0x00000010)
#define NVIC_PEND0_R_NVIC_GPIOE_BIT       (4)
#define NVIC_PEND0_R_NVIC_GPIOE_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_GPIOE_EN        (0x00000010)

#define NVIC_PEND0_NVIC_GPIOE_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_GPIOE_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_GPIOE_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_UART0_MASK      (0x00000020)
#define NVIC_PEND0_R_NVIC_UART0_BIT       (5)
#define NVIC_PEND0_R_NVIC_UART0_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_UART0_EN        (0x00000020)

#define NVIC_PEND0_NVIC_UART0_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_UART0_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_UART0_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_UART1_MASK      (0x00000040)
#define NVIC_PEND0_R_NVIC_UART1_BIT       (6)
#define NVIC_PEND0_R_NVIC_UART1_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_UART1_EN        (0x00000040)

#define NVIC_PEND0_NVIC_UART1_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_UART1_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_UART1_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_SSI0_MASK      (0x00000080)
#define NVIC_PEND0_R_NVIC_SSI0_BIT       (7)
#define NVIC_PEND0_R_NVIC_SSI0_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_SSI0_EN        (0x00000080)

#define NVIC_PEND0_NVIC_SSI0_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_SSI0_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_SSI0_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_I2C0_MASK      (0x00000100)
#define NVIC_PEND0_R_NVIC_I2C0_BIT       (8)
#define NVIC_PEND0_R_NVIC_I2C0_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_I2C0_EN        (0x00000100)

#define NVIC_PEND0_NVIC_I2C0_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_I2C0_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_I2C0_EN        (0x00000001)
//--------


//--------
#define NVIC_PEND0_R_NVIC_PWM0FAULT_MASK      (0x00000200)
#define NVIC_PEND0_R_NVIC_PWM0FAULT_BIT       (9)
#define NVIC_PEND0_R_NVIC_PWM0FAULT_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_PWM0FAULT_EN        (0x00000200)

#define NVIC_PEND0_NVIC_PWM0FAULT_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_PWM0FAULT_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_PWM0FAULT_EN        (0x00000001)
//--------


//--------
#define NVIC_PEND0_R_NVIC_PWM0GPEND0_MASK      (0x00000400)
#define NVIC_PEND0_R_NVIC_PWM0GPEND0_BIT       (10)
#define NVIC_PEND0_R_NVIC_PWM0GPEND0_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_PWM0GPEND0_EN        (0x00000400)

#define NVIC_PEND0_NVIC_PWM0GPEND0_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_PWM0GPEND0_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_PWM0GPEND0_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_PWM0GEN1_MASK      (0x00000800)
#define NVIC_PEND0_R_NVIC_PWM0GEN1_BIT       (11)
#define NVIC_PEND0_R_NVIC_PWM0GEN1_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_PWM0GEN1_EN        (0x00000800)

#define NVIC_PEND0_NVIC_PWM0GEN1_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_PWM0GEN1_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_PWM0GEN1_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_PWM0GEN2_MASK      (0x00001000)
#define NVIC_PEND0_R_NVIC_PWM0GEN2_BIT       (12)
#define NVIC_PEND0_R_NVIC_PWM0GEN2_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_PWM0GEN2_EN        (0x00001000)

#define NVIC_PEND0_NVIC_PWM0GEN2_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_PWM0GEN2_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_PWM0GEN2_EN        (0x00000001)
//--------


//--------
#define NVIC_PEND0_R_NVIC_QEI0_MASK      (0x00002000)
#define NVIC_PEND0_R_NVIC_QEI0_BIT       (13)
#define NVIC_PEND0_R_NVIC_QEI0_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_QEI0_EN        (0x00002000)

#define NVIC_PEND0_NVIC_QEI0_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_QEI0_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_QEI0_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_ADC0SEQ0_MASK      (0x00004000)
#define NVIC_PEND0_R_NVIC_ADC0SEQ0_BIT       (14)
#define NVIC_PEND0_R_NVIC_ADC0SEQ0_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_ADC0SEQ0_EN        (0x00004000)

#define NVIC_PEND0_NVIC_ADC0SEQ0_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_ADC0SEQ0_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_ADC0SEQ0_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_ADC0SEQ1_MASK      (0x00008000)
#define NVIC_PEND0_R_NVIC_ADC0SEQ1_BIT       (15)
#define NVIC_PEND0_R_NVIC_ADC0SEQ1_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_ADC0SEQ1_EN        (0x00008000)

#define NVIC_PEND0_NVIC_ADC0SEQ1_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_ADC0SEQ1_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_ADC0SEQ1_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_ADC0SEQ2_MASK      (0x00010000)
#define NVIC_PEND0_R_NVIC_ADC0SEQ2_BIT       (16)
#define NVIC_PEND0_R_NVIC_ADC0SEQ2_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_ADC0SEQ2_EN        (0x00010000)

#define NVIC_PEND0_NVIC_ADC0SEQ2_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_ADC0SEQ2_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_ADC0SEQ2_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_ADC0SEQ3_MASK      (0x00020000)
#define NVIC_PEND0_R_NVIC_ADC0SEQ3_BIT       (17)
#define NVIC_PEND0_R_NVIC_ADC0SEQ3_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_ADC0SEQ3_EN        (0x00020000)

#define NVIC_PEND0_NVIC_ADC0SEQ3_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_ADC0SEQ3_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_ADC0SEQ3_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_WDT01_MASK      (0x00040000)
#define NVIC_PEND0_R_NVIC_WDT01_BIT       (18)
#define NVIC_PEND0_R_NVIC_WDT01_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_WDT01_EN        (0x00040000)

#define NVIC_PEND0_NVIC_WDT01_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_WDT01_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_WDT01_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_TIMER0A_MASK      (0x00080000)
#define NVIC_PEND0_R_NVIC_TIMER0A_BIT       (19)
#define NVIC_PEND0_R_NVIC_TIMER0A_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_TIMER0A_EN        (0x00080000)

#define NVIC_PEND0_NVIC_TIMER0A_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_TIMER0A_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_TIMER0A_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_TIMER0B_MASK      (0x00100000)
#define NVIC_PEND0_R_NVIC_TIMER0B_BIT       (20)
#define NVIC_PEND0_R_NVIC_TIMER0B_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_TIMER0B_EN        (0x00100000)

#define NVIC_PEND0_NVIC_TIMER0B_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_TIMER0B_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_TIMER0B_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_TIMER1A_MASK      (0x00200000)
#define NVIC_PEND0_R_NVIC_TIMER1A_BIT       (21)
#define NVIC_PEND0_R_NVIC_TIMER1A_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_TIMER1A_EN        (0x00200000)

#define NVIC_PEND0_NVIC_TIMER1A_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_TIMER1A_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_TIMER1A_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_TIMER1B_MASK      (0x00400000)
#define NVIC_PEND0_R_NVIC_TIMER1B_BIT       (22)
#define NVIC_PEND0_R_NVIC_TIMER1B_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_TIMER1B_EN        (0x00400000)

#define NVIC_PEND0_NVIC_TIMER1B_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_TIMER1B_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_TIMER1B_EN        (0x00000001)
//--------


//--------
#define NVIC_PEND0_R_NVIC_TIMER2A_MASK      (0x00800000)
#define NVIC_PEND0_R_NVIC_TIMER2A_BIT       (23)
#define NVIC_PEND0_R_NVIC_TIMER2A_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_TIMER2A_EN        (0x00800000)

#define NVIC_PEND0_NVIC_TIMER2A_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_TIMER2A_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_TIMER2A_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_TIMER2B_MASK      (0x01000000)
#define NVIC_PEND0_R_NVIC_TIMER2B_BIT       (24)
#define NVIC_PEND0_R_NVIC_TIMER2B_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_TIMER2B_EN        (0x01000000)

#define NVIC_PEND0_NVIC_TIMER2B_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_TIMER2B_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_TIMER2B_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_COMP0_MASK      (0x02000000)
#define NVIC_PEND0_R_NVIC_COMP0_BIT       (25)
#define NVIC_PEND0_R_NVIC_COMP0_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_COMP0_EN        (0x02000000)

#define NVIC_PEND0_NVIC_COMP0_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_COMP0_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_COMP0_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_COMP1_MASK      (0x04000000)
#define NVIC_PEND0_R_NVIC_COMP1_BIT       (26)
#define NVIC_PEND0_R_NVIC_COMP1_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_COMP1_EN        (0x04000000)

#define NVIC_PEND0_NVIC_COMP1_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_COMP1_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_COMP1_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_SYSCTL_MASK      (0x10000000)
#define NVIC_PEND0_R_NVIC_SYSCTL_BIT       (28)
#define NVIC_PEND0_R_NVIC_SYSCTL_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_SYSCTL_EN        (0x10000000)

#define NVIC_PEND0_NVIC_SYSCTL_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_SYSCTL_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_SYSCTL_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_FLASH_MASK      (0x20000000)
#define NVIC_PEND0_R_NVIC_FLASH_BIT       (29)
#define NVIC_PEND0_R_NVIC_FLASH_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_FLASH_EN        (0x20000000)

#define NVIC_PEND0_NVIC_FLASH_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_FLASH_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_FLASH_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND0_R_NVIC_GPIOF_MASK      (0x40000000)
#define NVIC_PEND0_R_NVIC_GPIOF_BIT       (30)
#define NVIC_PEND0_R_NVIC_GPIOF_DIS       (0x00000000)
#define NVIC_PEND0_R_NVIC_GPIOF_EN        (0x40000000)

#define NVIC_PEND0_NVIC_GPIOF_MASK      (0x00000001)
#define NVIC_PEND0_NVIC_GPIOF_DIS       (0x00000000)
#define NVIC_PEND0_NVIC_GPIOF_EN        (0x00000001)
//--------


//ToDO UNPEND0
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// UNPEND0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define NVIC_UNPEND0            (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_UNPEND0_OFFSET)))
#define NVIC_UNPEND0_R         (*((volatile uint32_t *)(NVIC_BASE+NVIC_UNPEND0_OFFSET)))


//--------
#define NVIC_UNPEND0_R_NVIC_GPIOA_MASK      (0x00000001)
#define NVIC_UNPEND0_R_NVIC_GPIOA_BIT       (0)
#define NVIC_UNPEND0_R_NVIC_GPIOA_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_GPIOA_EN        (0x00000001)

#define NVIC_UNPEND0_NVIC_GPIOA_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_GPIOA_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_GPIOA_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_GPIOB_MASK      (0x00000002)
#define NVIC_UNPEND0_R_NVIC_GPIOB_BIT       (1)
#define NVIC_UNPEND0_R_NVIC_GPIOB_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_GPIOB_EN        (0x00000002)

#define NVIC_UNPEND0_NVIC_GPIOB_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_GPIOB_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_GPIOB_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_GPIOC_MASK      (0x00000004)
#define NVIC_UNPEND0_R_NVIC_GPIOC_BIT       (2)
#define NVIC_UNPEND0_R_NVIC_GPIOC_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_GPIOC_EN        (0x00000004)

#define NVIC_UNPEND0_NVIC_GPIOC_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_GPIOC_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_GPIOC_EN        (0x00000001)
//--------


//--------
#define NVIC_UNPEND0_R_NVIC_GPIOD_MASK      (0x00000008)
#define NVIC_UNPEND0_R_NVIC_GPIOD_BIT       (3)
#define NVIC_UNPEND0_R_NVIC_GPIOD_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_GPIOD_EN        (0x00000008)

#define NVIC_UNPEND0_NVIC_GPIOD_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_GPIOD_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_GPIOD_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_GPIOE_MASK      (0x00000010)
#define NVIC_UNPEND0_R_NVIC_GPIOE_BIT       (4)
#define NVIC_UNPEND0_R_NVIC_GPIOE_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_GPIOE_EN        (0x00000010)

#define NVIC_UNPEND0_NVIC_GPIOE_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_GPIOE_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_GPIOE_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_UART0_MASK      (0x00000020)
#define NVIC_UNPEND0_R_NVIC_UART0_BIT       (5)
#define NVIC_UNPEND0_R_NVIC_UART0_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_UART0_EN        (0x00000020)

#define NVIC_UNPEND0_NVIC_UART0_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_UART0_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_UART0_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_UART1_MASK      (0x00000040)
#define NVIC_UNPEND0_R_NVIC_UART1_BIT       (6)
#define NVIC_UNPEND0_R_NVIC_UART1_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_UART1_EN        (0x00000040)

#define NVIC_UNPEND0_NVIC_UART1_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_UART1_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_UART1_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_SSI0_MASK      (0x00000080)
#define NVIC_UNPEND0_R_NVIC_SSI0_BIT       (7)
#define NVIC_UNPEND0_R_NVIC_SSI0_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_SSI0_EN        (0x00000080)

#define NVIC_UNPEND0_NVIC_SSI0_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_SSI0_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_SSI0_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_I2C0_MASK      (0x00000100)
#define NVIC_UNPEND0_R_NVIC_I2C0_BIT       (8)
#define NVIC_UNPEND0_R_NVIC_I2C0_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_I2C0_EN        (0x00000100)

#define NVIC_UNPEND0_NVIC_I2C0_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_I2C0_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_I2C0_EN        (0x00000001)
//--------


//--------
#define NVIC_UNPEND0_R_NVIC_PWM0FAULT_MASK      (0x00000200)
#define NVIC_UNPEND0_R_NVIC_PWM0FAULT_BIT       (9)
#define NVIC_UNPEND0_R_NVIC_PWM0FAULT_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_PWM0FAULT_EN        (0x00000200)

#define NVIC_UNPEND0_NVIC_PWM0FAULT_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_PWM0FAULT_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_PWM0FAULT_EN        (0x00000001)
//--------


//--------
#define NVIC_UNPEND0_R_NVIC_PWM0GUNPEND0_MASK      (0x00000400)
#define NVIC_UNPEND0_R_NVIC_PWM0GUNPEND0_BIT       (10)
#define NVIC_UNPEND0_R_NVIC_PWM0GUNPEND0_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_PWM0GUNPEND0_EN        (0x00000400)

#define NVIC_UNPEND0_NVIC_PWM0GUNPEND0_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_PWM0GUNPEND0_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_PWM0GUNPEND0_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_PWM0GEN1_MASK      (0x00000800)
#define NVIC_UNPEND0_R_NVIC_PWM0GEN1_BIT       (11)
#define NVIC_UNPEND0_R_NVIC_PWM0GEN1_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_PWM0GEN1_EN        (0x00000800)

#define NVIC_UNPEND0_NVIC_PWM0GEN1_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_PWM0GEN1_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_PWM0GEN1_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_PWM0GEN2_MASK      (0x00001000)
#define NVIC_UNPEND0_R_NVIC_PWM0GEN2_BIT       (12)
#define NVIC_UNPEND0_R_NVIC_PWM0GEN2_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_PWM0GEN2_EN        (0x00001000)

#define NVIC_UNPEND0_NVIC_PWM0GEN2_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_PWM0GEN2_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_PWM0GEN2_EN        (0x00000001)
//--------


//--------
#define NVIC_UNPEND0_R_NVIC_QEI0_MASK      (0x00002000)
#define NVIC_UNPEND0_R_NVIC_QEI0_BIT       (13)
#define NVIC_UNPEND0_R_NVIC_QEI0_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_QEI0_EN        (0x00002000)

#define NVIC_UNPEND0_NVIC_QEI0_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_QEI0_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_QEI0_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ0_MASK      (0x00004000)
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ0_BIT       (14)
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ0_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ0_EN        (0x00004000)

#define NVIC_UNPEND0_NVIC_ADC0SEQ0_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_ADC0SEQ0_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_ADC0SEQ0_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ1_MASK      (0x00008000)
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ1_BIT       (15)
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ1_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ1_EN        (0x00008000)

#define NVIC_UNPEND0_NVIC_ADC0SEQ1_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_ADC0SEQ1_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_ADC0SEQ1_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ2_MASK      (0x00010000)
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ2_BIT       (16)
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ2_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ2_EN        (0x00010000)

#define NVIC_UNPEND0_NVIC_ADC0SEQ2_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_ADC0SEQ2_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_ADC0SEQ2_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ3_MASK      (0x00020000)
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ3_BIT       (17)
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ3_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_ADC0SEQ3_EN        (0x00020000)

#define NVIC_UNPEND0_NVIC_ADC0SEQ3_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_ADC0SEQ3_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_ADC0SEQ3_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_WDT01_MASK      (0x00040000)
#define NVIC_UNPEND0_R_NVIC_WDT01_BIT       (18)
#define NVIC_UNPEND0_R_NVIC_WDT01_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_WDT01_EN        (0x00040000)

#define NVIC_UNPEND0_NVIC_WDT01_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_WDT01_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_WDT01_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_TIMER0A_MASK      (0x00080000)
#define NVIC_UNPEND0_R_NVIC_TIMER0A_BIT       (19)
#define NVIC_UNPEND0_R_NVIC_TIMER0A_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_TIMER0A_EN        (0x00080000)

#define NVIC_UNPEND0_NVIC_TIMER0A_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_TIMER0A_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_TIMER0A_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_TIMER0B_MASK      (0x00100000)
#define NVIC_UNPEND0_R_NVIC_TIMER0B_BIT       (20)
#define NVIC_UNPEND0_R_NVIC_TIMER0B_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_TIMER0B_EN        (0x00100000)

#define NVIC_UNPEND0_NVIC_TIMER0B_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_TIMER0B_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_TIMER0B_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_TIMER1A_MASK      (0x00200000)
#define NVIC_UNPEND0_R_NVIC_TIMER1A_BIT       (21)
#define NVIC_UNPEND0_R_NVIC_TIMER1A_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_TIMER1A_EN        (0x00200000)

#define NVIC_UNPEND0_NVIC_TIMER1A_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_TIMER1A_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_TIMER1A_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_TIMER1B_MASK      (0x00400000)
#define NVIC_UNPEND0_R_NVIC_TIMER1B_BIT       (22)
#define NVIC_UNPEND0_R_NVIC_TIMER1B_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_TIMER1B_EN        (0x00400000)

#define NVIC_UNPEND0_NVIC_TIMER1B_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_TIMER1B_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_TIMER1B_EN        (0x00000001)
//--------


//--------
#define NVIC_UNPEND0_R_NVIC_TIMER2A_MASK      (0x00800000)
#define NVIC_UNPEND0_R_NVIC_TIMER2A_BIT       (23)
#define NVIC_UNPEND0_R_NVIC_TIMER2A_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_TIMER2A_EN        (0x00800000)

#define NVIC_UNPEND0_NVIC_TIMER2A_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_TIMER2A_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_TIMER2A_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_TIMER2B_MASK      (0x01000000)
#define NVIC_UNPEND0_R_NVIC_TIMER2B_BIT       (24)
#define NVIC_UNPEND0_R_NVIC_TIMER2B_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_TIMER2B_EN        (0x01000000)

#define NVIC_UNPEND0_NVIC_TIMER2B_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_TIMER2B_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_TIMER2B_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_COMP0_MASK      (0x02000000)
#define NVIC_UNPEND0_R_NVIC_COMP0_BIT       (25)
#define NVIC_UNPEND0_R_NVIC_COMP0_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_COMP0_EN        (0x02000000)

#define NVIC_UNPEND0_NVIC_COMP0_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_COMP0_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_COMP0_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_COMP1_MASK      (0x04000000)
#define NVIC_UNPEND0_R_NVIC_COMP1_BIT       (26)
#define NVIC_UNPEND0_R_NVIC_COMP1_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_COMP1_EN        (0x04000000)

#define NVIC_UNPEND0_NVIC_COMP1_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_COMP1_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_COMP1_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_SYSCTL_MASK      (0x10000000)
#define NVIC_UNPEND0_R_NVIC_SYSCTL_BIT       (28)
#define NVIC_UNPEND0_R_NVIC_SYSCTL_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_SYSCTL_EN        (0x10000000)

#define NVIC_UNPEND0_NVIC_SYSCTL_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_SYSCTL_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_SYSCTL_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_FLASH_MASK      (0x20000000)
#define NVIC_UNPEND0_R_NVIC_FLASH_BIT       (29)
#define NVIC_UNPEND0_R_NVIC_FLASH_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_FLASH_EN        (0x20000000)

#define NVIC_UNPEND0_NVIC_FLASH_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_FLASH_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_FLASH_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND0_R_NVIC_GPIOF_MASK      (0x40000000)
#define NVIC_UNPEND0_R_NVIC_GPIOF_BIT       (30)
#define NVIC_UNPEND0_R_NVIC_GPIOF_DIS       (0x00000000)
#define NVIC_UNPEND0_R_NVIC_GPIOF_EN        (0x40000000)

#define NVIC_UNPEND0_NVIC_GPIOF_MASK      (0x00000001)
#define NVIC_UNPEND0_NVIC_GPIOF_DIS       (0x00000000)
#define NVIC_UNPEND0_NVIC_GPIOF_EN        (0x00000001)
//--------

//ToDO ACTIVE0
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ACTIVE0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ACTIVE0            (((NVIC0_TypeDef*)(NVIC_BASE+NVIC_ACTIVE0_OFFSET)))
#define NVIC_ACTIVE0_R         (*((volatile uint32_t *)(NVIC_BASE+NVIC_ACTIVE0_OFFSET)))


//--------
#define NVIC_ACTIVE0_R_NVIC_GPIOA_MASK      (0x00000001)
#define NVIC_ACTIVE0_R_NVIC_GPIOA_BIT       (0)
#define NVIC_ACTIVE0_R_NVIC_GPIOA_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_GPIOA_EN        (0x00000001)

#define NVIC_ACTIVE0_NVIC_GPIOA_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_GPIOA_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_GPIOA_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_GPIOB_MASK      (0x00000002)
#define NVIC_ACTIVE0_R_NVIC_GPIOB_BIT       (1)
#define NVIC_ACTIVE0_R_NVIC_GPIOB_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_GPIOB_EN        (0x00000002)

#define NVIC_ACTIVE0_NVIC_GPIOB_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_GPIOB_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_GPIOB_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_GPIOC_MASK      (0x00000004)
#define NVIC_ACTIVE0_R_NVIC_GPIOC_BIT       (2)
#define NVIC_ACTIVE0_R_NVIC_GPIOC_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_GPIOC_EN        (0x00000004)

#define NVIC_ACTIVE0_NVIC_GPIOC_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_GPIOC_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_GPIOC_EN        (0x00000001)
//--------


//--------
#define NVIC_ACTIVE0_R_NVIC_GPIOD_MASK      (0x00000008)
#define NVIC_ACTIVE0_R_NVIC_GPIOD_BIT       (3)
#define NVIC_ACTIVE0_R_NVIC_GPIOD_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_GPIOD_EN        (0x00000008)

#define NVIC_ACTIVE0_NVIC_GPIOD_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_GPIOD_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_GPIOD_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_GPIOE_MASK      (0x00000010)
#define NVIC_ACTIVE0_R_NVIC_GPIOE_BIT       (4)
#define NVIC_ACTIVE0_R_NVIC_GPIOE_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_GPIOE_EN        (0x00000010)

#define NVIC_ACTIVE0_NVIC_GPIOE_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_GPIOE_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_GPIOE_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_UART0_MASK      (0x00000020)
#define NVIC_ACTIVE0_R_NVIC_UART0_BIT       (5)
#define NVIC_ACTIVE0_R_NVIC_UART0_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_UART0_EN        (0x00000020)

#define NVIC_ACTIVE0_NVIC_UART0_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_UART0_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_UART0_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_UART1_MASK      (0x00000040)
#define NVIC_ACTIVE0_R_NVIC_UART1_BIT       (6)
#define NVIC_ACTIVE0_R_NVIC_UART1_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_UART1_EN        (0x00000040)

#define NVIC_ACTIVE0_NVIC_UART1_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_UART1_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_UART1_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_SSI0_MASK      (0x00000080)
#define NVIC_ACTIVE0_R_NVIC_SSI0_BIT       (7)
#define NVIC_ACTIVE0_R_NVIC_SSI0_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_SSI0_EN        (0x00000080)

#define NVIC_ACTIVE0_NVIC_SSI0_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_SSI0_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_SSI0_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_I2C0_MASK      (0x00000100)
#define NVIC_ACTIVE0_R_NVIC_I2C0_BIT       (8)
#define NVIC_ACTIVE0_R_NVIC_I2C0_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_I2C0_EN        (0x00000100)

#define NVIC_ACTIVE0_NVIC_I2C0_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_I2C0_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_I2C0_EN        (0x00000001)
//--------


//--------
#define NVIC_ACTIVE0_R_NVIC_PWM0FAULT_MASK      (0x00000200)
#define NVIC_ACTIVE0_R_NVIC_PWM0FAULT_BIT       (9)
#define NVIC_ACTIVE0_R_NVIC_PWM0FAULT_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_PWM0FAULT_EN        (0x00000200)

#define NVIC_ACTIVE0_NVIC_PWM0FAULT_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_PWM0FAULT_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_PWM0FAULT_EN        (0x00000001)
//--------


//--------
#define NVIC_ACTIVE0_R_NVIC_PWM0GACTIVE0_MASK      (0x00000400)
#define NVIC_ACTIVE0_R_NVIC_PWM0GACTIVE0_BIT       (10)
#define NVIC_ACTIVE0_R_NVIC_PWM0GACTIVE0_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_PWM0GACTIVE0_EN        (0x00000400)

#define NVIC_ACTIVE0_NVIC_PWM0GACTIVE0_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_PWM0GACTIVE0_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_PWM0GACTIVE0_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_PWM0GEN1_MASK      (0x00000800)
#define NVIC_ACTIVE0_R_NVIC_PWM0GEN1_BIT       (11)
#define NVIC_ACTIVE0_R_NVIC_PWM0GEN1_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_PWM0GEN1_EN        (0x00000800)

#define NVIC_ACTIVE0_NVIC_PWM0GEN1_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_PWM0GEN1_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_PWM0GEN1_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_PWM0GEN2_MASK      (0x00001000)
#define NVIC_ACTIVE0_R_NVIC_PWM0GEN2_BIT       (12)
#define NVIC_ACTIVE0_R_NVIC_PWM0GEN2_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_PWM0GEN2_EN        (0x00001000)

#define NVIC_ACTIVE0_NVIC_PWM0GEN2_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_PWM0GEN2_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_PWM0GEN2_EN        (0x00000001)
//--------


//--------
#define NVIC_ACTIVE0_R_NVIC_QEI0_MASK      (0x00002000)
#define NVIC_ACTIVE0_R_NVIC_QEI0_BIT       (13)
#define NVIC_ACTIVE0_R_NVIC_QEI0_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_QEI0_EN        (0x00002000)

#define NVIC_ACTIVE0_NVIC_QEI0_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_QEI0_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_QEI0_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ0_MASK      (0x00004000)
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ0_BIT       (14)
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ0_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ0_EN        (0x00004000)

#define NVIC_ACTIVE0_NVIC_ADC0SEQ0_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_ADC0SEQ0_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_ADC0SEQ0_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ1_MASK      (0x00008000)
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ1_BIT       (15)
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ1_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ1_EN        (0x00008000)

#define NVIC_ACTIVE0_NVIC_ADC0SEQ1_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_ADC0SEQ1_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_ADC0SEQ1_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ2_MASK      (0x00010000)
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ2_BIT       (16)
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ2_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ2_EN        (0x00010000)

#define NVIC_ACTIVE0_NVIC_ADC0SEQ2_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_ADC0SEQ2_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_ADC0SEQ2_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ3_MASK      (0x00020000)
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ3_BIT       (17)
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ3_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_ADC0SEQ3_EN        (0x00020000)

#define NVIC_ACTIVE0_NVIC_ADC0SEQ3_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_ADC0SEQ3_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_ADC0SEQ3_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_WDT01_MASK      (0x00040000)
#define NVIC_ACTIVE0_R_NVIC_WDT01_BIT       (18)
#define NVIC_ACTIVE0_R_NVIC_WDT01_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_WDT01_EN        (0x00040000)

#define NVIC_ACTIVE0_NVIC_WDT01_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_WDT01_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_WDT01_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_TIMER0A_MASK      (0x00080000)
#define NVIC_ACTIVE0_R_NVIC_TIMER0A_BIT       (19)
#define NVIC_ACTIVE0_R_NVIC_TIMER0A_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_TIMER0A_EN        (0x00080000)

#define NVIC_ACTIVE0_NVIC_TIMER0A_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_TIMER0A_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_TIMER0A_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_TIMER0B_MASK      (0x00100000)
#define NVIC_ACTIVE0_R_NVIC_TIMER0B_BIT       (20)
#define NVIC_ACTIVE0_R_NVIC_TIMER0B_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_TIMER0B_EN        (0x00100000)

#define NVIC_ACTIVE0_NVIC_TIMER0B_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_TIMER0B_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_TIMER0B_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_TIMER1A_MASK      (0x00200000)
#define NVIC_ACTIVE0_R_NVIC_TIMER1A_BIT       (21)
#define NVIC_ACTIVE0_R_NVIC_TIMER1A_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_TIMER1A_EN        (0x00200000)

#define NVIC_ACTIVE0_NVIC_TIMER1A_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_TIMER1A_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_TIMER1A_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_TIMER1B_MASK      (0x00400000)
#define NVIC_ACTIVE0_R_NVIC_TIMER1B_BIT       (22)
#define NVIC_ACTIVE0_R_NVIC_TIMER1B_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_TIMER1B_EN        (0x00400000)

#define NVIC_ACTIVE0_NVIC_TIMER1B_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_TIMER1B_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_TIMER1B_EN        (0x00000001)
//--------


//--------
#define NVIC_ACTIVE0_R_NVIC_TIMER2A_MASK      (0x00800000)
#define NVIC_ACTIVE0_R_NVIC_TIMER2A_BIT       (23)
#define NVIC_ACTIVE0_R_NVIC_TIMER2A_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_TIMER2A_EN        (0x00800000)

#define NVIC_ACTIVE0_NVIC_TIMER2A_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_TIMER2A_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_TIMER2A_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_TIMER2B_MASK      (0x01000000)
#define NVIC_ACTIVE0_R_NVIC_TIMER2B_BIT       (24)
#define NVIC_ACTIVE0_R_NVIC_TIMER2B_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_TIMER2B_EN        (0x01000000)

#define NVIC_ACTIVE0_NVIC_TIMER2B_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_TIMER2B_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_TIMER2B_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_COMP0_MASK      (0x02000000)
#define NVIC_ACTIVE0_R_NVIC_COMP0_BIT       (25)
#define NVIC_ACTIVE0_R_NVIC_COMP0_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_COMP0_EN        (0x02000000)

#define NVIC_ACTIVE0_NVIC_COMP0_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_COMP0_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_COMP0_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_COMP1_MASK      (0x04000000)
#define NVIC_ACTIVE0_R_NVIC_COMP1_BIT       (26)
#define NVIC_ACTIVE0_R_NVIC_COMP1_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_COMP1_EN        (0x04000000)

#define NVIC_ACTIVE0_NVIC_COMP1_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_COMP1_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_COMP1_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_SYSCTL_MASK      (0x10000000)
#define NVIC_ACTIVE0_R_NVIC_SYSCTL_BIT       (28)
#define NVIC_ACTIVE0_R_NVIC_SYSCTL_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_SYSCTL_EN        (0x10000000)

#define NVIC_ACTIVE0_NVIC_SYSCTL_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_SYSCTL_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_SYSCTL_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_FLASH_MASK      (0x20000000)
#define NVIC_ACTIVE0_R_NVIC_FLASH_BIT       (29)
#define NVIC_ACTIVE0_R_NVIC_FLASH_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_FLASH_EN        (0x20000000)

#define NVIC_ACTIVE0_NVIC_FLASH_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_FLASH_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_FLASH_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE0_R_NVIC_GPIOF_MASK      (0x40000000)
#define NVIC_ACTIVE0_R_NVIC_GPIOF_BIT       (30)
#define NVIC_ACTIVE0_R_NVIC_GPIOF_DIS       (0x00000000)
#define NVIC_ACTIVE0_R_NVIC_GPIOF_EN        (0x40000000)

#define NVIC_ACTIVE0_NVIC_GPIOF_MASK      (0x00000001)
#define NVIC_ACTIVE0_NVIC_GPIOF_DIS       (0x00000000)
#define NVIC_ACTIVE0_NVIC_GPIOF_EN        (0x00000001)
//--------





//ToDo EN1

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// EN1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_EN1                (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_EN1_OFFSET)))
#define NVIC_EN1_R             (*((volatile uint32_t *)(NVIC_BASE+NVIC_EN1_OFFSET)))





//--------
#define NVIC_EN1_R_NVIC_UART2_MASK      (0x00000002)
#define NVIC_EN1_R_NVIC_UART2_BIT       (1)
#define NVIC_EN1_R_NVIC_UART2_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_UART2_EN        (0x00000002)

#define NVIC_EN1_NVIC_UART2_MASK      (0x00000001)
#define NVIC_EN1_NVIC_UART2_DIS       (0x00000000)
#define NVIC_EN1_NVIC_UART2_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_SSI1_MASK      (0x00000004)
#define NVIC_EN1_R_NVIC_SSI1_BIT       (2)
#define NVIC_EN1_R_NVIC_SSI1_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_SSI1_EN        (0x00000004)

#define NVIC_EN1_NVIC_SSI1_MASK      (0x00000001)
#define NVIC_EN1_NVIC_SSI1_DIS       (0x00000000)
#define NVIC_EN1_NVIC_SSI1_EN        (0x00000001)
//--------


//--------
#define NVIC_EN1_R_NVIC_TIMER3A_MASK      (0x00000008)
#define NVIC_EN1_R_NVIC_TIMER3A_BIT       (3)
#define NVIC_EN1_R_NVIC_TIMER3A_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_TIMER3A_EN        (0x00000008)

#define NVIC_EN1_NVIC_TIMER3A_MASK      (0x00000001)
#define NVIC_EN1_NVIC_TIMER3A_DIS       (0x00000000)
#define NVIC_EN1_NVIC_TIMER3A_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_TIMER3B_MASK      (0x00000010)
#define NVIC_EN1_R_NVIC_TIMER3B_BIT       (4)
#define NVIC_EN1_R_NVIC_TIMER3B_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_TIMER3B_EN        (0x00000010)

#define NVIC_EN1_NVIC_TIMER3B_MASK      (0x00000001)
#define NVIC_EN1_NVIC_TIMER3B_DIS       (0x00000000)
#define NVIC_EN1_NVIC_TIMER3B_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_I2C1_MASK      (0x00000020)
#define NVIC_EN1_R_NVIC_I2C1_BIT       (5)
#define NVIC_EN1_R_NVIC_I2C1_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_I2C1_EN        (0x00000020)

#define NVIC_EN1_NVIC_I2C1_MASK      (0x00000001)
#define NVIC_EN1_NVIC_I2C1_DIS       (0x00000000)
#define NVIC_EN1_NVIC_I2C1_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_QEI1_MASK      (0x00000040)
#define NVIC_EN1_R_NVIC_QEI1_BIT       (6)
#define NVIC_EN1_R_NVIC_QEI1_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_QEI1_EN        (0x00000040)

#define NVIC_EN1_NVIC_QEI1_MASK      (0x00000001)
#define NVIC_EN1_NVIC_QEI1_DIS       (0x00000000)
#define NVIC_EN1_NVIC_QEI1_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_CAN0_MASK      (0x00000080)
#define NVIC_EN1_R_NVIC_CAN0_BIT       (7)
#define NVIC_EN1_R_NVIC_CAN0_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_CAN0_EN        (0x00000080)

#define NVIC_EN1_NVIC_CAN0_MASK      (0x00000001)
#define NVIC_EN1_NVIC_CAN0_DIS       (0x00000000)
#define NVIC_EN1_NVIC_CAN0_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_CAN1_MASK      (0x00000100)
#define NVIC_EN1_R_NVIC_CAN1_BIT       (8)
#define NVIC_EN1_R_NVIC_CAN1_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_CAN1_EN        (0x00000100)

#define NVIC_EN1_NVIC_CAN1_MASK      (0x00000001)
#define NVIC_EN1_NVIC_CAN1_DIS       (0x00000000)
#define NVIC_EN1_NVIC_CAN1_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_HIB_MASK      (0x00000800)
#define NVIC_EN1_R_NVIC_HIB_BIT       (11)
#define NVIC_EN1_R_NVIC_HIB_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_HIB_EN        (0x00000800)

#define NVIC_EN1_NVIC_HIB_MASK      (0x00000001)
#define NVIC_EN1_NVIC_HIB_DIS       (0x00000000)
#define NVIC_EN1_NVIC_HIB_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_USB_MASK      (0x00001000)
#define NVIC_EN1_R_NVIC_USB_BIT       (12)
#define NVIC_EN1_R_NVIC_USB_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_USB_EN        (0x00001000)

#define NVIC_EN1_NVIC_USB_MASK      (0x00000001)
#define NVIC_EN1_NVIC_USB_DIS       (0x00000000)
#define NVIC_EN1_NVIC_USB_EN        (0x00000001)
//--------



//--------
#define NVIC_EN1_R_NVIC_PWM0GEN3_MASK      (0x00002000)
#define NVIC_EN1_R_NVIC_PWM0GEN3_BIT       (13)
#define NVIC_EN1_R_NVIC_PWM0GEN3_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_PWM0GEN3_EN        (0x00002000)

#define NVIC_EN1_NVIC_PWM0GEN3_MASK      (0x00000001)
#define NVIC_EN1_NVIC_PWM0GEN3_DIS       (0x00000000)
#define NVIC_EN1_NVIC_PWM0GEN3_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_UDMASOFT_MASK      (0x00004000)
#define NVIC_EN1_R_NVIC_UDMASOFT_BIT       (14)
#define NVIC_EN1_R_NVIC_UDMASOFT_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_UDMASOFT_EN        (0x00004000)

#define NVIC_EN1_NVIC_UDMASOFT_MASK      (0x00000001)
#define NVIC_EN1_NVIC_UDMASOFT_DIS       (0x00000000)
#define NVIC_EN1_NVIC_UDMASOFT_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_UDMAERROR_MASK      (0x00008000)
#define NVIC_EN1_R_NVIC_UDMAERROR_BIT       (15)
#define NVIC_EN1_R_NVIC_UDMAERROR_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_UDMAERROR_EN        (0x00008000)

#define NVIC_EN1_NVIC_UDMAERROR_MASK      (0x00000001)
#define NVIC_EN1_NVIC_UDMAERROR_DIS       (0x00000000)
#define NVIC_EN1_NVIC_UDMAERROR_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_ADC1SEQ0_MASK      (0x00010000)
#define NVIC_EN1_R_NVIC_ADC1SEQ0_BIT       (16)
#define NVIC_EN1_R_NVIC_ADC1SEQ0_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_ADC1SEQ0_EN        (0x00010000)

#define NVIC_EN1_NVIC_ADC1SEQ0_MASK      (0x00000001)
#define NVIC_EN1_NVIC_ADC1SEQ0_DIS       (0x00000000)
#define NVIC_EN1_NVIC_ADC1SEQ0_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_ADC1SEQ1_MASK      (0x00020000)
#define NVIC_EN1_R_NVIC_ADC1SEQ1_BIT       (17)
#define NVIC_EN1_R_NVIC_ADC1SEQ1_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_ADC1SEQ1_EN        (0x00020000)

#define NVIC_EN1_NVIC_ADC1SEQ1_MASK      (0x00000001)
#define NVIC_EN1_NVIC_ADC1SEQ1_DIS       (0x00000000)
#define NVIC_EN1_NVIC_ADC1SEQ1_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_ADC1SEQ2_MASK      (0x00040000)
#define NVIC_EN1_R_NVIC_ADC1SEQ2_BIT       (18)
#define NVIC_EN1_R_NVIC_ADC1SEQ2_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_ADC1SEQ2_EN        (0x00040000)

#define NVIC_EN1_NVIC_ADC1SEQ2_MASK      (0x00000001)
#define NVIC_EN1_NVIC_ADC1SEQ2_DIS       (0x00000000)
#define NVIC_EN1_NVIC_ADC1SEQ2_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_ADC1SEQ3_MASK      (0x00080000)
#define NVIC_EN1_R_NVIC_ADC1SEQ3_BIT       (19)
#define NVIC_EN1_R_NVIC_ADC1SEQ3_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_ADC1SEQ3_EN        (0x00080000)

#define NVIC_EN1_NVIC_ADC1SEQ3_MASK      (0x00000001)
#define NVIC_EN1_NVIC_ADC1SEQ3_DIS       (0x00000000)
#define NVIC_EN1_NVIC_ADC1SEQ3_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_SSI2_MASK      (0x02000000)
#define NVIC_EN1_R_NVIC_SSI2_BIT       (25)
#define NVIC_EN1_R_NVIC_SSI2_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_SSI2_EN        (0x02000000)

#define NVIC_EN1_NVIC_SSI2_MASK      (0x00000001)
#define NVIC_EN1_NVIC_SSI2_DIS       (0x00000000)
#define NVIC_EN1_NVIC_SSI2_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_SSI3_MASK      (0x04000000)
#define NVIC_EN1_R_NVIC_SSI3_BIT       (26)
#define NVIC_EN1_R_NVIC_SSI3_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_SSI3_EN        (0x04000000)

#define NVIC_EN1_NVIC_SSI3_MASK      (0x00000001)
#define NVIC_EN1_NVIC_SSI3_DIS       (0x00000000)
#define NVIC_EN1_NVIC_SSI3_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_UART3_MASK      (0x08000000)
#define NVIC_EN1_R_NVIC_UART3_BIT       (27)
#define NVIC_EN1_R_NVIC_UART3_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_UART3_EN        (0x08000000)

#define NVIC_EN1_NVIC_UART3_MASK      (0x00000001)
#define NVIC_EN1_NVIC_UART3_DIS       (0x00000000)
#define NVIC_EN1_NVIC_UART3_EN        (0x00000001)
//--------


//--------
#define NVIC_EN1_R_NVIC_UART4_MASK      (0x10000000)
#define NVIC_EN1_R_NVIC_UART4_BIT       (28)
#define NVIC_EN1_R_NVIC_UART4_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_UART4_EN        (0x10000000)

#define NVIC_EN1_NVIC_UART4_MASK      (0x00000001)
#define NVIC_EN1_NVIC_UART4_DIS       (0x00000000)
#define NVIC_EN1_NVIC_UART4_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_UART5_MASK      (0x20000000)
#define NVIC_EN1_R_NVIC_UART5_BIT       (29)
#define NVIC_EN1_R_NVIC_UART5_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_UART5_EN        (0x20000000)

#define NVIC_EN1_NVIC_UART5_MASK      (0x00000001)
#define NVIC_EN1_NVIC_UART5_DIS       (0x00000000)
#define NVIC_EN1_NVIC_UART5_EN        (0x00000001)
//--------

//--------
#define NVIC_EN1_R_NVIC_UART6_MASK      (0x40000000)
#define NVIC_EN1_R_NVIC_UART6_BIT       (30)
#define NVIC_EN1_R_NVIC_UART6_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_UART6_EN        (0x40000000)

#define NVIC_EN1_NVIC_UART6_MASK      (0x00000001)
#define NVIC_EN1_NVIC_UART6_DIS       (0x00000000)
#define NVIC_EN1_NVIC_UART6_EN        (0x00000001)
//--------


//--------
#define NVIC_EN1_R_NVIC_UART7_MASK      (0x80000000)
#define NVIC_EN1_R_NVIC_UART7_BIT       (31)
#define NVIC_EN1_R_NVIC_UART7_DIS       (0x00000000)
#define NVIC_EN1_R_NVIC_UART7_EN        (0x80000000)

#define NVIC_EN1_NVIC_UART7_MASK      (0x00000001)
#define NVIC_EN1_NVIC_UART7_DIS       (0x00000000)
#define NVIC_EN1_NVIC_UART7_EN        (0x00000001)
//--------




//ToDO DIS1
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// DIS1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define NVIC_DIS1               (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_DIS1_OFFSET)))
#define NVIC_DIS1_R            (*((volatile uint32_t *)(NVIC_BASE+NVIC_DIS1_OFFSET)))



//--------
#define NVIC_DIS1_R_NVIC_UART2_MASK      (0x00000002)
#define NVIC_DIS1_R_NVIC_UART2_BIT       (1)
#define NVIC_DIS1_R_NVIC_UART2_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_UART2_EN        (0x00000002)

#define NVIC_DIS1_NVIC_UART2_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_UART2_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_UART2_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_SSI1_MASK      (0x00000004)
#define NVIC_DIS1_R_NVIC_SSI1_BIT       (2)
#define NVIC_DIS1_R_NVIC_SSI1_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_SSI1_EN        (0x00000004)

#define NVIC_DIS1_NVIC_SSI1_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_SSI1_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_SSI1_EN        (0x00000001)
//--------


//--------
#define NVIC_DIS1_R_NVIC_TIMER3A_MASK      (0x00000008)
#define NVIC_DIS1_R_NVIC_TIMER3A_BIT       (3)
#define NVIC_DIS1_R_NVIC_TIMER3A_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_TIMER3A_EN        (0x00000008)

#define NVIC_DIS1_NVIC_TIMER3A_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_TIMER3A_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_TIMER3A_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_TIMER3B_MASK      (0x00000010)
#define NVIC_DIS1_R_NVIC_TIMER3B_BIT       (4)
#define NVIC_DIS1_R_NVIC_TIMER3B_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_TIMER3B_EN        (0x00000010)

#define NVIC_DIS1_NVIC_TIMER3B_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_TIMER3B_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_TIMER3B_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_I2C1_MASK      (0x00000020)
#define NVIC_DIS1_R_NVIC_I2C1_BIT       (5)
#define NVIC_DIS1_R_NVIC_I2C1_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_I2C1_EN        (0x00000020)

#define NVIC_DIS1_NVIC_I2C1_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_I2C1_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_I2C1_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_QEI1_MASK      (0x00000040)
#define NVIC_DIS1_R_NVIC_QEI1_BIT       (6)
#define NVIC_DIS1_R_NVIC_QEI1_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_QEI1_EN        (0x00000040)

#define NVIC_DIS1_NVIC_QEI1_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_QEI1_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_QEI1_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_CAN0_MASK      (0x00000080)
#define NVIC_DIS1_R_NVIC_CAN0_BIT       (7)
#define NVIC_DIS1_R_NVIC_CAN0_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_CAN0_EN        (0x00000080)

#define NVIC_DIS1_NVIC_CAN0_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_CAN0_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_CAN0_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_CAN1_MASK      (0x00000100)
#define NVIC_DIS1_R_NVIC_CAN1_BIT       (8)
#define NVIC_DIS1_R_NVIC_CAN1_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_CAN1_EN        (0x00000100)

#define NVIC_DIS1_NVIC_CAN1_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_CAN1_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_CAN1_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_HIB_MASK      (0x00000800)
#define NVIC_DIS1_R_NVIC_HIB_BIT       (11)
#define NVIC_DIS1_R_NVIC_HIB_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_HIB_EN        (0x00000800)

#define NVIC_DIS1_NVIC_HIB_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_HIB_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_HIB_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_USB_MASK      (0x00001000)
#define NVIC_DIS1_R_NVIC_USB_BIT       (12)
#define NVIC_DIS1_R_NVIC_USB_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_USB_EN        (0x00001000)

#define NVIC_DIS1_NVIC_USB_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_USB_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_USB_EN        (0x00000001)
//--------



//--------
#define NVIC_DIS1_R_NVIC_PWM0GEN3_MASK      (0x00002000)
#define NVIC_DIS1_R_NVIC_PWM0GEN3_BIT       (13)
#define NVIC_DIS1_R_NVIC_PWM0GEN3_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_PWM0GEN3_EN        (0x00002000)

#define NVIC_DIS1_NVIC_PWM0GEN3_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_PWM0GEN3_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_PWM0GEN3_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_UDMASOFT_MASK      (0x00004000)
#define NVIC_DIS1_R_NVIC_UDMASOFT_BIT       (14)
#define NVIC_DIS1_R_NVIC_UDMASOFT_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_UDMASOFT_EN        (0x00004000)

#define NVIC_DIS1_NVIC_UDMASOFT_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_UDMASOFT_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_UDMASOFT_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_UDMAERROR_MASK      (0x00008000)
#define NVIC_DIS1_R_NVIC_UDMAERROR_BIT       (15)
#define NVIC_DIS1_R_NVIC_UDMAERROR_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_UDMAERROR_EN        (0x00008000)

#define NVIC_DIS1_NVIC_UDMAERROR_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_UDMAERROR_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_UDMAERROR_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_ADC1SEQ0_MASK      (0x00010000)
#define NVIC_DIS1_R_NVIC_ADC1SEQ0_BIT       (16)
#define NVIC_DIS1_R_NVIC_ADC1SEQ0_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_ADC1SEQ0_EN        (0x00010000)

#define NVIC_DIS1_NVIC_ADC1SEQ0_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_ADC1SEQ0_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_ADC1SEQ0_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_ADC1SEQ1_MASK      (0x00020000)
#define NVIC_DIS1_R_NVIC_ADC1SEQ1_BIT       (17)
#define NVIC_DIS1_R_NVIC_ADC1SEQ1_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_ADC1SEQ1_EN        (0x00020000)

#define NVIC_DIS1_NVIC_ADC1SEQ1_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_ADC1SEQ1_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_ADC1SEQ1_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_ADC1SEQ2_MASK      (0x00040000)
#define NVIC_DIS1_R_NVIC_ADC1SEQ2_BIT       (18)
#define NVIC_DIS1_R_NVIC_ADC1SEQ2_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_ADC1SEQ2_EN        (0x00040000)

#define NVIC_DIS1_NVIC_ADC1SEQ2_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_ADC1SEQ2_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_ADC1SEQ2_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_ADC1SEQ3_MASK      (0x00080000)
#define NVIC_DIS1_R_NVIC_ADC1SEQ3_BIT       (19)
#define NVIC_DIS1_R_NVIC_ADC1SEQ3_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_ADC1SEQ3_EN        (0x00080000)

#define NVIC_DIS1_NVIC_ADC1SEQ3_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_ADC1SEQ3_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_ADC1SEQ3_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_SSI2_MASK      (0x02000000)
#define NVIC_DIS1_R_NVIC_SSI2_BIT       (25)
#define NVIC_DIS1_R_NVIC_SSI2_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_SSI2_EN        (0x02000000)

#define NVIC_DIS1_NVIC_SSI2_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_SSI2_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_SSI2_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_SSI3_MASK      (0x04000000)
#define NVIC_DIS1_R_NVIC_SSI3_BIT       (26)
#define NVIC_DIS1_R_NVIC_SSI3_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_SSI3_EN        (0x04000000)

#define NVIC_DIS1_NVIC_SSI3_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_SSI3_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_SSI3_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_UART3_MASK      (0x08000000)
#define NVIC_DIS1_R_NVIC_UART3_BIT       (27)
#define NVIC_DIS1_R_NVIC_UART3_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_UART3_EN        (0x08000000)

#define NVIC_DIS1_NVIC_UART3_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_UART3_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_UART3_EN        (0x00000001)
//--------


//--------
#define NVIC_DIS1_R_NVIC_UART4_MASK      (0x10000000)
#define NVIC_DIS1_R_NVIC_UART4_BIT       (28)
#define NVIC_DIS1_R_NVIC_UART4_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_UART4_EN        (0x10000000)

#define NVIC_DIS1_NVIC_UART4_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_UART4_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_UART4_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_UART5_MASK      (0x20000000)
#define NVIC_DIS1_R_NVIC_UART5_BIT       (29)
#define NVIC_DIS1_R_NVIC_UART5_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_UART5_EN        (0x20000000)

#define NVIC_DIS1_NVIC_UART5_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_UART5_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_UART5_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS1_R_NVIC_UART6_MASK      (0x40000000)
#define NVIC_DIS1_R_NVIC_UART6_BIT       (30)
#define NVIC_DIS1_R_NVIC_UART6_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_UART6_EN        (0x40000000)

#define NVIC_DIS1_NVIC_UART6_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_UART6_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_UART6_EN        (0x00000001)
//--------


//--------
#define NVIC_DIS1_R_NVIC_UART7_MASK      (0x80000000)
#define NVIC_DIS1_R_NVIC_UART7_BIT       (31)
#define NVIC_DIS1_R_NVIC_UART7_DIS       (0x00000000)
#define NVIC_DIS1_R_NVIC_UART7_EN        (0x80000000)

#define NVIC_DIS1_NVIC_UART7_MASK      (0x00000001)
#define NVIC_DIS1_NVIC_UART7_DIS       (0x00000000)
#define NVIC_DIS1_NVIC_UART7_EN        (0x00000001)
//--------



//ToDO PEND1
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PEND1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define NVIC_PEND1              (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_PEND1_OFFSET)))
#define NVIC_PEND1_R           (*((volatile uint32_t *)(NVIC_BASE+NVIC_PEND1_OFFSET)))



//--------
#define NVIC_PEND1_R_NVIC_UART2_MASK      (0x00000002)
#define NVIC_PEND1_R_NVIC_UART2_BIT       (1)
#define NVIC_PEND1_R_NVIC_UART2_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_UART2_EN        (0x00000002)

#define NVIC_PEND1_NVIC_UART2_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_UART2_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_UART2_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_SSI1_MASK      (0x00000004)
#define NVIC_PEND1_R_NVIC_SSI1_BIT       (2)
#define NVIC_PEND1_R_NVIC_SSI1_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_SSI1_EN        (0x00000004)

#define NVIC_PEND1_NVIC_SSI1_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_SSI1_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_SSI1_EN        (0x00000001)
//--------


//--------
#define NVIC_PEND1_R_NVIC_TIMER3A_MASK      (0x00000008)
#define NVIC_PEND1_R_NVIC_TIMER3A_BIT       (3)
#define NVIC_PEND1_R_NVIC_TIMER3A_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_TIMER3A_EN        (0x00000008)

#define NVIC_PEND1_NVIC_TIMER3A_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_TIMER3A_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_TIMER3A_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_TIMER3B_MASK      (0x00000010)
#define NVIC_PEND1_R_NVIC_TIMER3B_BIT       (4)
#define NVIC_PEND1_R_NVIC_TIMER3B_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_TIMER3B_EN        (0x00000010)

#define NVIC_PEND1_NVIC_TIMER3B_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_TIMER3B_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_TIMER3B_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_I2C1_MASK      (0x00000020)
#define NVIC_PEND1_R_NVIC_I2C1_BIT       (5)
#define NVIC_PEND1_R_NVIC_I2C1_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_I2C1_EN        (0x00000020)

#define NVIC_PEND1_NVIC_I2C1_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_I2C1_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_I2C1_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_QEI1_MASK      (0x00000040)
#define NVIC_PEND1_R_NVIC_QEI1_BIT       (6)
#define NVIC_PEND1_R_NVIC_QEI1_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_QEI1_EN        (0x00000040)

#define NVIC_PEND1_NVIC_QEI1_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_QEI1_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_QEI1_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_CAN0_MASK      (0x00000080)
#define NVIC_PEND1_R_NVIC_CAN0_BIT       (7)
#define NVIC_PEND1_R_NVIC_CAN0_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_CAN0_EN        (0x00000080)

#define NVIC_PEND1_NVIC_CAN0_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_CAN0_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_CAN0_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_CAN1_MASK      (0x00000100)
#define NVIC_PEND1_R_NVIC_CAN1_BIT       (8)
#define NVIC_PEND1_R_NVIC_CAN1_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_CAN1_EN        (0x00000100)

#define NVIC_PEND1_NVIC_CAN1_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_CAN1_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_CAN1_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_HIB_MASK      (0x00000800)
#define NVIC_PEND1_R_NVIC_HIB_BIT       (11)
#define NVIC_PEND1_R_NVIC_HIB_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_HIB_EN        (0x00000800)

#define NVIC_PEND1_NVIC_HIB_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_HIB_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_HIB_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_USB_MASK      (0x00001000)
#define NVIC_PEND1_R_NVIC_USB_BIT       (12)
#define NVIC_PEND1_R_NVIC_USB_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_USB_EN        (0x00001000)

#define NVIC_PEND1_NVIC_USB_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_USB_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_USB_EN        (0x00000001)
//--------



//--------
#define NVIC_PEND1_R_NVIC_PWM0GEN3_MASK      (0x00002000)
#define NVIC_PEND1_R_NVIC_PWM0GEN3_BIT       (13)
#define NVIC_PEND1_R_NVIC_PWM0GEN3_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_PWM0GEN3_EN        (0x00002000)

#define NVIC_PEND1_NVIC_PWM0GEN3_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_PWM0GEN3_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_PWM0GEN3_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_UDMASOFT_MASK      (0x00004000)
#define NVIC_PEND1_R_NVIC_UDMASOFT_BIT       (14)
#define NVIC_PEND1_R_NVIC_UDMASOFT_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_UDMASOFT_EN        (0x00004000)

#define NVIC_PEND1_NVIC_UDMASOFT_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_UDMASOFT_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_UDMASOFT_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_UDMAERROR_MASK      (0x00008000)
#define NVIC_PEND1_R_NVIC_UDMAERROR_BIT       (15)
#define NVIC_PEND1_R_NVIC_UDMAERROR_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_UDMAERROR_EN        (0x00008000)

#define NVIC_PEND1_NVIC_UDMAERROR_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_UDMAERROR_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_UDMAERROR_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_ADC1SEQ0_MASK      (0x00010000)
#define NVIC_PEND1_R_NVIC_ADC1SEQ0_BIT       (16)
#define NVIC_PEND1_R_NVIC_ADC1SEQ0_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_ADC1SEQ0_EN        (0x00010000)

#define NVIC_PEND1_NVIC_ADC1SEQ0_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_ADC1SEQ0_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_ADC1SEQ0_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_ADC1SEQ1_MASK      (0x00020000)
#define NVIC_PEND1_R_NVIC_ADC1SEQ1_BIT       (17)
#define NVIC_PEND1_R_NVIC_ADC1SEQ1_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_ADC1SEQ1_EN        (0x00020000)

#define NVIC_PEND1_NVIC_ADC1SEQ1_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_ADC1SEQ1_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_ADC1SEQ1_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_ADC1SEQ2_MASK      (0x00040000)
#define NVIC_PEND1_R_NVIC_ADC1SEQ2_BIT       (18)
#define NVIC_PEND1_R_NVIC_ADC1SEQ2_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_ADC1SEQ2_EN        (0x00040000)

#define NVIC_PEND1_NVIC_ADC1SEQ2_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_ADC1SEQ2_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_ADC1SEQ2_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_ADC1SEQ3_MASK      (0x00080000)
#define NVIC_PEND1_R_NVIC_ADC1SEQ3_BIT       (19)
#define NVIC_PEND1_R_NVIC_ADC1SEQ3_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_ADC1SEQ3_EN        (0x00080000)

#define NVIC_PEND1_NVIC_ADC1SEQ3_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_ADC1SEQ3_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_ADC1SEQ3_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_SSI2_MASK      (0x02000000)
#define NVIC_PEND1_R_NVIC_SSI2_BIT       (25)
#define NVIC_PEND1_R_NVIC_SSI2_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_SSI2_EN        (0x02000000)

#define NVIC_PEND1_NVIC_SSI2_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_SSI2_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_SSI2_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_SSI3_MASK      (0x04000000)
#define NVIC_PEND1_R_NVIC_SSI3_BIT       (26)
#define NVIC_PEND1_R_NVIC_SSI3_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_SSI3_EN        (0x04000000)

#define NVIC_PEND1_NVIC_SSI3_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_SSI3_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_SSI3_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_UART3_MASK      (0x08000000)
#define NVIC_PEND1_R_NVIC_UART3_BIT       (27)
#define NVIC_PEND1_R_NVIC_UART3_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_UART3_EN        (0x08000000)

#define NVIC_PEND1_NVIC_UART3_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_UART3_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_UART3_EN        (0x00000001)
//--------


//--------
#define NVIC_PEND1_R_NVIC_UART4_MASK      (0x10000000)
#define NVIC_PEND1_R_NVIC_UART4_BIT       (28)
#define NVIC_PEND1_R_NVIC_UART4_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_UART4_EN        (0x10000000)

#define NVIC_PEND1_NVIC_UART4_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_UART4_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_UART4_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_UART5_MASK      (0x20000000)
#define NVIC_PEND1_R_NVIC_UART5_BIT       (29)
#define NVIC_PEND1_R_NVIC_UART5_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_UART5_EN        (0x20000000)

#define NVIC_PEND1_NVIC_UART5_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_UART5_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_UART5_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND1_R_NVIC_UART6_MASK      (0x40000000)
#define NVIC_PEND1_R_NVIC_UART6_BIT       (30)
#define NVIC_PEND1_R_NVIC_UART6_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_UART6_EN        (0x40000000)

#define NVIC_PEND1_NVIC_UART6_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_UART6_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_UART6_EN        (0x00000001)
//--------


//--------
#define NVIC_PEND1_R_NVIC_UART7_MASK      (0x80000000)
#define NVIC_PEND1_R_NVIC_UART7_BIT       (31)
#define NVIC_PEND1_R_NVIC_UART7_DIS       (0x00000000)
#define NVIC_PEND1_R_NVIC_UART7_EN        (0x80000000)

#define NVIC_PEND1_NVIC_UART7_MASK      (0x00000001)
#define NVIC_PEND1_NVIC_UART7_DIS       (0x00000000)
#define NVIC_PEND1_NVIC_UART7_EN        (0x00000001)
//--------

//ToDO UNPEND1
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// UNPEND1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define NVIC_UNPEND1            (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_UNPEND1_OFFSET)))
#define NVIC_UNPEND1_R         (*((volatile uint32_t *)(NVIC_BASE+NVIC_UNPEND1_OFFSET)))



//--------
#define NVIC_UNPEND1_R_NVIC_UART2_MASK      (0x00000002)
#define NVIC_UNPEND1_R_NVIC_UART2_BIT       (1)
#define NVIC_UNPEND1_R_NVIC_UART2_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_UART2_EN        (0x00000002)

#define NVIC_UNPEND1_NVIC_UART2_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_UART2_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_UART2_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_SSI1_MASK      (0x00000004)
#define NVIC_UNPEND1_R_NVIC_SSI1_BIT       (2)
#define NVIC_UNPEND1_R_NVIC_SSI1_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_SSI1_EN        (0x00000004)

#define NVIC_UNPEND1_NVIC_SSI1_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_SSI1_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_SSI1_EN        (0x00000001)
//--------


//--------
#define NVIC_UNPEND1_R_NVIC_TIMER3A_MASK      (0x00000008)
#define NVIC_UNPEND1_R_NVIC_TIMER3A_BIT       (3)
#define NVIC_UNPEND1_R_NVIC_TIMER3A_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_TIMER3A_EN        (0x00000008)

#define NVIC_UNPEND1_NVIC_TIMER3A_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_TIMER3A_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_TIMER3A_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_TIMER3B_MASK      (0x00000010)
#define NVIC_UNPEND1_R_NVIC_TIMER3B_BIT       (4)
#define NVIC_UNPEND1_R_NVIC_TIMER3B_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_TIMER3B_EN        (0x00000010)

#define NVIC_UNPEND1_NVIC_TIMER3B_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_TIMER3B_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_TIMER3B_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_I2C1_MASK      (0x00000020)
#define NVIC_UNPEND1_R_NVIC_I2C1_BIT       (5)
#define NVIC_UNPEND1_R_NVIC_I2C1_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_I2C1_EN        (0x00000020)

#define NVIC_UNPEND1_NVIC_I2C1_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_I2C1_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_I2C1_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_QEI1_MASK      (0x00000040)
#define NVIC_UNPEND1_R_NVIC_QEI1_BIT       (6)
#define NVIC_UNPEND1_R_NVIC_QEI1_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_QEI1_EN        (0x00000040)

#define NVIC_UNPEND1_NVIC_QEI1_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_QEI1_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_QEI1_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_CAN0_MASK      (0x00000080)
#define NVIC_UNPEND1_R_NVIC_CAN0_BIT       (7)
#define NVIC_UNPEND1_R_NVIC_CAN0_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_CAN0_EN        (0x00000080)

#define NVIC_UNPEND1_NVIC_CAN0_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_CAN0_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_CAN0_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_CAN1_MASK      (0x00000100)
#define NVIC_UNPEND1_R_NVIC_CAN1_BIT       (8)
#define NVIC_UNPEND1_R_NVIC_CAN1_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_CAN1_EN        (0x00000100)

#define NVIC_UNPEND1_NVIC_CAN1_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_CAN1_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_CAN1_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_HIB_MASK      (0x00000800)
#define NVIC_UNPEND1_R_NVIC_HIB_BIT       (11)
#define NVIC_UNPEND1_R_NVIC_HIB_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_HIB_EN        (0x00000800)

#define NVIC_UNPEND1_NVIC_HIB_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_HIB_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_HIB_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_USB_MASK      (0x00001000)
#define NVIC_UNPEND1_R_NVIC_USB_BIT       (12)
#define NVIC_UNPEND1_R_NVIC_USB_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_USB_EN        (0x00001000)

#define NVIC_UNPEND1_NVIC_USB_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_USB_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_USB_EN        (0x00000001)
//--------



//--------
#define NVIC_UNPEND1_R_NVIC_PWM0GEN3_MASK      (0x00002000)
#define NVIC_UNPEND1_R_NVIC_PWM0GEN3_BIT       (13)
#define NVIC_UNPEND1_R_NVIC_PWM0GEN3_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_PWM0GEN3_EN        (0x00002000)

#define NVIC_UNPEND1_NVIC_PWM0GEN3_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_PWM0GEN3_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_PWM0GEN3_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_UDMASOFT_MASK      (0x00004000)
#define NVIC_UNPEND1_R_NVIC_UDMASOFT_BIT       (14)
#define NVIC_UNPEND1_R_NVIC_UDMASOFT_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_UDMASOFT_EN        (0x00004000)

#define NVIC_UNPEND1_NVIC_UDMASOFT_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_UDMASOFT_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_UDMASOFT_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_UDMAERROR_MASK      (0x00008000)
#define NVIC_UNPEND1_R_NVIC_UDMAERROR_BIT       (15)
#define NVIC_UNPEND1_R_NVIC_UDMAERROR_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_UDMAERROR_EN        (0x00008000)

#define NVIC_UNPEND1_NVIC_UDMAERROR_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_UDMAERROR_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_UDMAERROR_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ0_MASK      (0x00010000)
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ0_BIT       (16)
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ0_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ0_EN        (0x00010000)

#define NVIC_UNPEND1_NVIC_ADC1SEQ0_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_ADC1SEQ0_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_ADC1SEQ0_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ1_MASK      (0x00020000)
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ1_BIT       (17)
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ1_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ1_EN        (0x00020000)

#define NVIC_UNPEND1_NVIC_ADC1SEQ1_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_ADC1SEQ1_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_ADC1SEQ1_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ2_MASK      (0x00040000)
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ2_BIT       (18)
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ2_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ2_EN        (0x00040000)

#define NVIC_UNPEND1_NVIC_ADC1SEQ2_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_ADC1SEQ2_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_ADC1SEQ2_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ3_MASK      (0x00080000)
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ3_BIT       (19)
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ3_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_ADC1SEQ3_EN        (0x00080000)

#define NVIC_UNPEND1_NVIC_ADC1SEQ3_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_ADC1SEQ3_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_ADC1SEQ3_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_SSI2_MASK      (0x02000000)
#define NVIC_UNPEND1_R_NVIC_SSI2_BIT       (25)
#define NVIC_UNPEND1_R_NVIC_SSI2_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_SSI2_EN        (0x02000000)

#define NVIC_UNPEND1_NVIC_SSI2_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_SSI2_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_SSI2_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_SSI3_MASK      (0x04000000)
#define NVIC_UNPEND1_R_NVIC_SSI3_BIT       (26)
#define NVIC_UNPEND1_R_NVIC_SSI3_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_SSI3_EN        (0x04000000)

#define NVIC_UNPEND1_NVIC_SSI3_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_SSI3_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_SSI3_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_UART3_MASK      (0x08000000)
#define NVIC_UNPEND1_R_NVIC_UART3_BIT       (27)
#define NVIC_UNPEND1_R_NVIC_UART3_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_UART3_EN        (0x08000000)

#define NVIC_UNPEND1_NVIC_UART3_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_UART3_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_UART3_EN        (0x00000001)
//--------


//--------
#define NVIC_UNPEND1_R_NVIC_UART4_MASK      (0x10000000)
#define NVIC_UNPEND1_R_NVIC_UART4_BIT       (28)
#define NVIC_UNPEND1_R_NVIC_UART4_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_UART4_EN        (0x10000000)

#define NVIC_UNPEND1_NVIC_UART4_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_UART4_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_UART4_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_UART5_MASK      (0x20000000)
#define NVIC_UNPEND1_R_NVIC_UART5_BIT       (29)
#define NVIC_UNPEND1_R_NVIC_UART5_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_UART5_EN        (0x20000000)

#define NVIC_UNPEND1_NVIC_UART5_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_UART5_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_UART5_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND1_R_NVIC_UART6_MASK      (0x40000000)
#define NVIC_UNPEND1_R_NVIC_UART6_BIT       (30)
#define NVIC_UNPEND1_R_NVIC_UART6_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_UART6_EN        (0x40000000)

#define NVIC_UNPEND1_NVIC_UART6_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_UART6_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_UART6_EN        (0x00000001)
//--------


//--------
#define NVIC_UNPEND1_R_NVIC_UART7_MASK      (0x80000000)
#define NVIC_UNPEND1_R_NVIC_UART7_BIT       (31)
#define NVIC_UNPEND1_R_NVIC_UART7_DIS       (0x00000000)
#define NVIC_UNPEND1_R_NVIC_UART7_EN        (0x80000000)

#define NVIC_UNPEND1_NVIC_UART7_MASK      (0x00000001)
#define NVIC_UNPEND1_NVIC_UART7_DIS       (0x00000000)
#define NVIC_UNPEND1_NVIC_UART7_EN        (0x00000001)
//--------


//ToDO ACTIVE1
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ACTIVE1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define NVIC_ACTIVE1            (((NVIC1_TypeDef*)(NVIC_BASE+NVIC_ACTIVE1_OFFSET)))
#define NVIC_ACTIVE1_R         (*((volatile uint32_t *)(NVIC_BASE+NVIC_ACTIVE1_OFFSET)))



//--------
#define NVIC_ACTIVE1_R_NVIC_UART2_MASK      (0x00000002)
#define NVIC_ACTIVE1_R_NVIC_UART2_BIT       (1)
#define NVIC_ACTIVE1_R_NVIC_UART2_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_UART2_EN        (0x00000002)

#define NVIC_ACTIVE1_NVIC_UART2_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_UART2_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_UART2_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_SSI1_MASK      (0x00000004)
#define NVIC_ACTIVE1_R_NVIC_SSI1_BIT       (2)
#define NVIC_ACTIVE1_R_NVIC_SSI1_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_SSI1_EN        (0x00000004)

#define NVIC_ACTIVE1_NVIC_SSI1_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_SSI1_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_SSI1_EN        (0x00000001)
//--------


//--------
#define NVIC_ACTIVE1_R_NVIC_TIMER3A_MASK      (0x00000008)
#define NVIC_ACTIVE1_R_NVIC_TIMER3A_BIT       (3)
#define NVIC_ACTIVE1_R_NVIC_TIMER3A_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_TIMER3A_EN        (0x00000008)

#define NVIC_ACTIVE1_NVIC_TIMER3A_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_TIMER3A_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_TIMER3A_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_TIMER3B_MASK      (0x00000010)
#define NVIC_ACTIVE1_R_NVIC_TIMER3B_BIT       (4)
#define NVIC_ACTIVE1_R_NVIC_TIMER3B_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_TIMER3B_EN        (0x00000010)

#define NVIC_ACTIVE1_NVIC_TIMER3B_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_TIMER3B_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_TIMER3B_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_I2C1_MASK      (0x00000020)
#define NVIC_ACTIVE1_R_NVIC_I2C1_BIT       (5)
#define NVIC_ACTIVE1_R_NVIC_I2C1_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_I2C1_EN        (0x00000020)

#define NVIC_ACTIVE1_NVIC_I2C1_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_I2C1_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_I2C1_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_QEI1_MASK      (0x00000040)
#define NVIC_ACTIVE1_R_NVIC_QEI1_BIT       (6)
#define NVIC_ACTIVE1_R_NVIC_QEI1_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_QEI1_EN        (0x00000040)

#define NVIC_ACTIVE1_NVIC_QEI1_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_QEI1_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_QEI1_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_CAN0_MASK      (0x00000080)
#define NVIC_ACTIVE1_R_NVIC_CAN0_BIT       (7)
#define NVIC_ACTIVE1_R_NVIC_CAN0_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_CAN0_EN        (0x00000080)

#define NVIC_ACTIVE1_NVIC_CAN0_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_CAN0_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_CAN0_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_CAN1_MASK      (0x00000100)
#define NVIC_ACTIVE1_R_NVIC_CAN1_BIT       (8)
#define NVIC_ACTIVE1_R_NVIC_CAN1_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_CAN1_EN        (0x00000100)

#define NVIC_ACTIVE1_NVIC_CAN1_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_CAN1_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_CAN1_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_HIB_MASK      (0x00000800)
#define NVIC_ACTIVE1_R_NVIC_HIB_BIT       (11)
#define NVIC_ACTIVE1_R_NVIC_HIB_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_HIB_EN        (0x00000800)

#define NVIC_ACTIVE1_NVIC_HIB_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_HIB_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_HIB_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_USB_MASK      (0x00001000)
#define NVIC_ACTIVE1_R_NVIC_USB_BIT       (12)
#define NVIC_ACTIVE1_R_NVIC_USB_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_USB_EN        (0x00001000)

#define NVIC_ACTIVE1_NVIC_USB_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_USB_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_USB_EN        (0x00000001)
//--------



//--------
#define NVIC_ACTIVE1_R_NVIC_PWM0GEN3_MASK      (0x00002000)
#define NVIC_ACTIVE1_R_NVIC_PWM0GEN3_BIT       (13)
#define NVIC_ACTIVE1_R_NVIC_PWM0GEN3_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_PWM0GEN3_EN        (0x00002000)

#define NVIC_ACTIVE1_NVIC_PWM0GEN3_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_PWM0GEN3_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_PWM0GEN3_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_UDMASOFT_MASK      (0x00004000)
#define NVIC_ACTIVE1_R_NVIC_UDMASOFT_BIT       (14)
#define NVIC_ACTIVE1_R_NVIC_UDMASOFT_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_UDMASOFT_EN        (0x00004000)

#define NVIC_ACTIVE1_NVIC_UDMASOFT_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_UDMASOFT_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_UDMASOFT_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_UDMAERROR_MASK      (0x00008000)
#define NVIC_ACTIVE1_R_NVIC_UDMAERROR_BIT       (15)
#define NVIC_ACTIVE1_R_NVIC_UDMAERROR_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_UDMAERROR_EN        (0x00008000)

#define NVIC_ACTIVE1_NVIC_UDMAERROR_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_UDMAERROR_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_UDMAERROR_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ0_MASK      (0x00010000)
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ0_BIT       (16)
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ0_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ0_EN        (0x00010000)

#define NVIC_ACTIVE1_NVIC_ADC1SEQ0_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_ADC1SEQ0_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_ADC1SEQ0_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ1_MASK      (0x00020000)
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ1_BIT       (17)
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ1_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ1_EN        (0x00020000)

#define NVIC_ACTIVE1_NVIC_ADC1SEQ1_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_ADC1SEQ1_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_ADC1SEQ1_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ2_MASK      (0x00040000)
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ2_BIT       (18)
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ2_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ2_EN        (0x00040000)

#define NVIC_ACTIVE1_NVIC_ADC1SEQ2_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_ADC1SEQ2_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_ADC1SEQ2_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ3_MASK      (0x00080000)
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ3_BIT       (19)
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ3_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_ADC1SEQ3_EN        (0x00080000)

#define NVIC_ACTIVE1_NVIC_ADC1SEQ3_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_ADC1SEQ3_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_ADC1SEQ3_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_SSI2_MASK      (0x02000000)
#define NVIC_ACTIVE1_R_NVIC_SSI2_BIT       (25)
#define NVIC_ACTIVE1_R_NVIC_SSI2_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_SSI2_EN        (0x02000000)

#define NVIC_ACTIVE1_NVIC_SSI2_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_SSI2_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_SSI2_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_SSI3_MASK      (0x04000000)
#define NVIC_ACTIVE1_R_NVIC_SSI3_BIT       (26)
#define NVIC_ACTIVE1_R_NVIC_SSI3_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_SSI3_EN        (0x04000000)

#define NVIC_ACTIVE1_NVIC_SSI3_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_SSI3_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_SSI3_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_UART3_MASK      (0x08000000)
#define NVIC_ACTIVE1_R_NVIC_UART3_BIT       (27)
#define NVIC_ACTIVE1_R_NVIC_UART3_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_UART3_EN        (0x08000000)

#define NVIC_ACTIVE1_NVIC_UART3_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_UART3_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_UART3_EN        (0x00000001)
//--------


//--------
#define NVIC_ACTIVE1_R_NVIC_UART4_MASK      (0x10000000)
#define NVIC_ACTIVE1_R_NVIC_UART4_BIT       (28)
#define NVIC_ACTIVE1_R_NVIC_UART4_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_UART4_EN        (0x10000000)

#define NVIC_ACTIVE1_NVIC_UART4_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_UART4_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_UART4_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_UART5_MASK      (0x20000000)
#define NVIC_ACTIVE1_R_NVIC_UART5_BIT       (29)
#define NVIC_ACTIVE1_R_NVIC_UART5_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_UART5_EN        (0x20000000)

#define NVIC_ACTIVE1_NVIC_UART5_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_UART5_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_UART5_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE1_R_NVIC_UART6_MASK      (0x40000000)
#define NVIC_ACTIVE1_R_NVIC_UART6_BIT       (30)
#define NVIC_ACTIVE1_R_NVIC_UART6_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_UART6_EN        (0x40000000)

#define NVIC_ACTIVE1_NVIC_UART6_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_UART6_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_UART6_EN        (0x00000001)
//--------


//--------
#define NVIC_ACTIVE1_R_NVIC_UART7_MASK      (0x80000000)
#define NVIC_ACTIVE1_R_NVIC_UART7_BIT       (31)
#define NVIC_ACTIVE1_R_NVIC_UART7_DIS       (0x00000000)
#define NVIC_ACTIVE1_R_NVIC_UART7_EN        (0x80000000)

#define NVIC_ACTIVE1_NVIC_UART7_MASK      (0x00000001)
#define NVIC_ACTIVE1_NVIC_UART7_DIS       (0x00000000)
#define NVIC_ACTIVE1_NVIC_UART7_EN        (0x00000001)
//--------




//ToDo EN2
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// EN2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_EN2            (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_EN2_OFFSET)))
#define NVIC_EN2_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_EN2_OFFSET)))

//--------
#define NVIC_EN2_R_NVIC_I2C2_MASK      (0x00000010)
#define NVIC_EN2_R_NVIC_I2C2_BIT       (4)
#define NVIC_EN2_R_NVIC_I2C2_DIS       (0x00000000)
#define NVIC_EN2_R_NVIC_I2C2_EN        (0x00000010)

#define NVIC_EN2_NVIC_I2C2_MASK      (0x00000001)
#define NVIC_EN2_NVIC_I2C2_DIS       (0x00000000)
#define NVIC_EN2_NVIC_I2C2_EN        (0x00000001)
//--------

//--------
#define NVIC_EN2_R_NVIC_I2C3_MASK      (0x00000020)
#define NVIC_EN2_R_NVIC_I2C3_BIT       (5)
#define NVIC_EN2_R_NVIC_I2C3_DIS       (0x00000000)
#define NVIC_EN2_R_NVIC_I2C3_EN        (0x00000020)

#define NVIC_EN2_NVIC_I2C3_MASK      (0x00000001)
#define NVIC_EN2_NVIC_I2C3_DIS       (0x00000000)
#define NVIC_EN2_NVIC_I2C3_EN        (0x00000001)
//--------

//--------
#define NVIC_EN2_R_NVIC_TIMER4A_MASK      (0x00000040)
#define NVIC_EN2_R_NVIC_TIMER4A_BIT       (6)
#define NVIC_EN2_R_NVIC_TIMER4A_DIS       (0x00000000)
#define NVIC_EN2_R_NVIC_TIMER4A_EN        (0x00000040)

#define NVIC_EN2_NVIC_TIMER4A_MASK      (0x00000001)
#define NVIC_EN2_NVIC_TIMER4A_DIS       (0x00000000)
#define NVIC_EN2_NVIC_TIMER4A_EN        (0x00000001)
//--------

//--------
#define NVIC_EN2_R_NVIC_TIMER4B_MASK      (0x00000080)
#define NVIC_EN2_R_NVIC_TIMER4B_BIT       (7)
#define NVIC_EN2_R_NVIC_TIMER4B_DIS       (0x00000000)
#define NVIC_EN2_R_NVIC_TIMER4B_EN        (0x00000080)

#define NVIC_EN2_NVIC_TIMER4B_MASK      (0x00000001)
#define NVIC_EN2_NVIC_TIMER4B_DIS       (0x00000000)
#define NVIC_EN2_NVIC_TIMER4B_EN        (0x00000001)
//--------

//--------
#define NVIC_EN2_R_NVIC_TIMER5A_MASK      (0x10000000)
#define NVIC_EN2_R_NVIC_TIMER5A_BIT       (28)
#define NVIC_EN2_R_NVIC_TIMER5A_DIS       (0x00000000)
#define NVIC_EN2_R_NVIC_TIMER5A_EN        (0x10000000)

#define NVIC_EN2_NVIC_TIMER5A_MASK      (0x00000001)
#define NVIC_EN2_NVIC_TIMER5A_DIS       (0x00000000)
#define NVIC_EN2_NVIC_TIMER5A_EN        (0x00000001)
//--------

//--------
#define NVIC_EN2_R_NVIC_TIMER5B_MASK      (0x20000000)
#define NVIC_EN2_R_NVIC_TIMER5B_BIT       (29)
#define NVIC_EN2_R_NVIC_TIMER5B_DIS       (0x00000000)
#define NVIC_EN2_R_NVIC_TIMER5B_EN        (0x20000000)

#define NVIC_EN2_NVIC_TIMER5B_MASK      (0x00000001)
#define NVIC_EN2_NVIC_TIMER5B_DIS       (0x00000000)
#define NVIC_EN2_NVIC_TIMER5B_EN        (0x00000001)
//--------

//--------
#define NVIC_EN2_R_NVIC_WTIMER0A_MASK      (0x40000000)
#define NVIC_EN2_R_NVIC_WTIMER0A_BIT       (30)
#define NVIC_EN2_R_NVIC_WTIMER0A_DIS       (0x00000000)
#define NVIC_EN2_R_NVIC_WTIMER0A_EN        (0x40000000)

#define NVIC_EN2_NVIC_WTIMER0A_MASK      (0x00000001)
#define NVIC_EN2_NVIC_WTIMER0A_DIS       (0x00000000)
#define NVIC_EN2_NVIC_WTIMER0A_EN        (0x00000001)
//--------

//--------
#define NVIC_EN2_R_NVIC_WTIMER0B_MASK      (0x80000000)
#define NVIC_EN2_R_NVIC_WTIMER0B_BIT       (31)
#define NVIC_EN2_R_NVIC_WTIMER0B_DIS       (0x00000000)
#define NVIC_EN2_R_NVIC_WTIMER0B_EN        (0x80000000)

#define NVIC_EN2_NVIC_WTIMER0B_MASK      (0x00000001)
#define NVIC_EN2_NVIC_WTIMER0B_DIS       (0x00000000)
#define NVIC_EN2_NVIC_WTIMER0B_EN        (0x00000001)
//--------



//ToDo DIS2
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// DIS2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_DIS2           (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_DIS2_OFFSET)))
#define NVIC_DIS2_R         (*((volatile uint32_t *)(NVIC_BASE+NVIC_DIS2_OFFSET)))

//--------
#define NVIC_DIS2_R_NVIC_I2C2_MASK      (0x00000010)
#define NVIC_DIS2_R_NVIC_I2C2_BIT       (4)
#define NVIC_DIS2_R_NVIC_I2C2_DIS       (0x00000000)
#define NVIC_DIS2_R_NVIC_I2C2_EN        (0x00000010)

#define NVIC_DIS2_NVIC_I2C2_MASK      (0x00000001)
#define NVIC_DIS2_NVIC_I2C2_DIS       (0x00000000)
#define NVIC_DIS2_NVIC_I2C2_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS2_R_NVIC_I2C3_MASK      (0x00000020)
#define NVIC_DIS2_R_NVIC_I2C3_BIT       (5)
#define NVIC_DIS2_R_NVIC_I2C3_DIS       (0x00000000)
#define NVIC_DIS2_R_NVIC_I2C3_EN        (0x00000020)

#define NVIC_DIS2_NVIC_I2C3_MASK      (0x00000001)
#define NVIC_DIS2_NVIC_I2C3_DIS       (0x00000000)
#define NVIC_DIS2_NVIC_I2C3_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS2_R_NVIC_TIMER4A_MASK      (0x00000040)
#define NVIC_DIS2_R_NVIC_TIMER4A_BIT       (6)
#define NVIC_DIS2_R_NVIC_TIMER4A_DIS       (0x00000000)
#define NVIC_DIS2_R_NVIC_TIMER4A_EN        (0x00000040)

#define NVIC_DIS2_NVIC_TIMER4A_MASK      (0x00000001)
#define NVIC_DIS2_NVIC_TIMER4A_DIS       (0x00000000)
#define NVIC_DIS2_NVIC_TIMER4A_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS2_R_NVIC_TIMER4B_MASK      (0x00000080)
#define NVIC_DIS2_R_NVIC_TIMER4B_BIT       (7)
#define NVIC_DIS2_R_NVIC_TIMER4B_DIS       (0x00000000)
#define NVIC_DIS2_R_NVIC_TIMER4B_EN        (0x00000080)

#define NVIC_DIS2_NVIC_TIMER4B_MASK      (0x00000001)
#define NVIC_DIS2_NVIC_TIMER4B_DIS       (0x00000000)
#define NVIC_DIS2_NVIC_TIMER4B_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS2_R_NVIC_TIMER5A_MASK      (0x10000000)
#define NVIC_DIS2_R_NVIC_TIMER5A_BIT       (28)
#define NVIC_DIS2_R_NVIC_TIMER5A_DIS       (0x00000000)
#define NVIC_DIS2_R_NVIC_TIMER5A_EN        (0x10000000)

#define NVIC_DIS2_NVIC_TIMER5A_MASK      (0x00000001)
#define NVIC_DIS2_NVIC_TIMER5A_DIS       (0x00000000)
#define NVIC_DIS2_NVIC_TIMER5A_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS2_R_NVIC_TIMER5B_MASK      (0x20000000)
#define NVIC_DIS2_R_NVIC_TIMER5B_BIT       (29)
#define NVIC_DIS2_R_NVIC_TIMER5B_DIS       (0x00000000)
#define NVIC_DIS2_R_NVIC_TIMER5B_EN        (0x20000000)

#define NVIC_DIS2_NVIC_TIMER5B_MASK      (0x00000001)
#define NVIC_DIS2_NVIC_TIMER5B_DIS       (0x00000000)
#define NVIC_DIS2_NVIC_TIMER5B_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS2_R_NVIC_WTIMER0A_MASK      (0x40000000)
#define NVIC_DIS2_R_NVIC_WTIMER0A_BIT       (30)
#define NVIC_DIS2_R_NVIC_WTIMER0A_DIS       (0x00000000)
#define NVIC_DIS2_R_NVIC_WTIMER0A_EN        (0x40000000)

#define NVIC_DIS2_NVIC_WTIMER0A_MASK      (0x00000001)
#define NVIC_DIS2_NVIC_WTIMER0A_DIS       (0x00000000)
#define NVIC_DIS2_NVIC_WTIMER0A_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS2_R_NVIC_WTIMER0B_MASK      (0x80000000)
#define NVIC_DIS2_R_NVIC_WTIMER0B_BIT       (31)
#define NVIC_DIS2_R_NVIC_WTIMER0B_DIS       (0x00000000)
#define NVIC_DIS2_R_NVIC_WTIMER0B_EN        (0x80000000)

#define NVIC_DIS2_NVIC_WTIMER0B_MASK      (0x00000001)
#define NVIC_DIS2_NVIC_WTIMER0B_DIS       (0x00000000)
#define NVIC_DIS2_NVIC_WTIMER0B_EN        (0x00000001)
//--------



//ToDo PEND2
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PEND2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PEND2          (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_PEND2_OFFSET)))
#define NVIC_PEND2_R        (*((volatile uint32_t *)(NVIC_BASE+NVIC_PEND2_OFFSET)))

//--------
#define NVIC_PEND2_R_NVIC_I2C2_MASK      (0x00000010)
#define NVIC_PEND2_R_NVIC_I2C2_BIT       (4)
#define NVIC_PEND2_R_NVIC_I2C2_DIS       (0x00000000)
#define NVIC_PEND2_R_NVIC_I2C2_EN        (0x00000010)

#define NVIC_PEND2_NVIC_I2C2_MASK      (0x00000001)
#define NVIC_PEND2_NVIC_I2C2_DIS       (0x00000000)
#define NVIC_PEND2_NVIC_I2C2_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND2_R_NVIC_I2C3_MASK      (0x00000020)
#define NVIC_PEND2_R_NVIC_I2C3_BIT       (5)
#define NVIC_PEND2_R_NVIC_I2C3_DIS       (0x00000000)
#define NVIC_PEND2_R_NVIC_I2C3_EN        (0x00000020)

#define NVIC_PEND2_NVIC_I2C3_MASK      (0x00000001)
#define NVIC_PEND2_NVIC_I2C3_DIS       (0x00000000)
#define NVIC_PEND2_NVIC_I2C3_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND2_R_NVIC_TIMER4A_MASK      (0x00000040)
#define NVIC_PEND2_R_NVIC_TIMER4A_BIT       (6)
#define NVIC_PEND2_R_NVIC_TIMER4A_DIS       (0x00000000)
#define NVIC_PEND2_R_NVIC_TIMER4A_EN        (0x00000040)

#define NVIC_PEND2_NVIC_TIMER4A_MASK      (0x00000001)
#define NVIC_PEND2_NVIC_TIMER4A_DIS       (0x00000000)
#define NVIC_PEND2_NVIC_TIMER4A_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND2_R_NVIC_TIMER4B_MASK      (0x00000080)
#define NVIC_PEND2_R_NVIC_TIMER4B_BIT       (7)
#define NVIC_PEND2_R_NVIC_TIMER4B_DIS       (0x00000000)
#define NVIC_PEND2_R_NVIC_TIMER4B_EN        (0x00000080)

#define NVIC_PEND2_NVIC_TIMER4B_MASK      (0x00000001)
#define NVIC_PEND2_NVIC_TIMER4B_DIS       (0x00000000)
#define NVIC_PEND2_NVIC_TIMER4B_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND2_R_NVIC_TIMER5A_MASK      (0x10000000)
#define NVIC_PEND2_R_NVIC_TIMER5A_BIT       (28)
#define NVIC_PEND2_R_NVIC_TIMER5A_DIS       (0x00000000)
#define NVIC_PEND2_R_NVIC_TIMER5A_EN        (0x10000000)

#define NVIC_PEND2_NVIC_TIMER5A_MASK      (0x00000001)
#define NVIC_PEND2_NVIC_TIMER5A_DIS       (0x00000000)
#define NVIC_PEND2_NVIC_TIMER5A_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND2_R_NVIC_TIMER5B_MASK      (0x20000000)
#define NVIC_PEND2_R_NVIC_TIMER5B_BIT       (29)
#define NVIC_PEND2_R_NVIC_TIMER5B_DIS       (0x00000000)
#define NVIC_PEND2_R_NVIC_TIMER5B_EN        (0x20000000)

#define NVIC_PEND2_NVIC_TIMER5B_MASK      (0x00000001)
#define NVIC_PEND2_NVIC_TIMER5B_DIS       (0x00000000)
#define NVIC_PEND2_NVIC_TIMER5B_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND2_R_NVIC_WTIMER0A_MASK      (0x40000000)
#define NVIC_PEND2_R_NVIC_WTIMER0A_BIT       (30)
#define NVIC_PEND2_R_NVIC_WTIMER0A_DIS       (0x00000000)
#define NVIC_PEND2_R_NVIC_WTIMER0A_EN        (0x40000000)

#define NVIC_PEND2_NVIC_WTIMER0A_MASK      (0x00000001)
#define NVIC_PEND2_NVIC_WTIMER0A_DIS       (0x00000000)
#define NVIC_PEND2_NVIC_WTIMER0A_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND2_R_NVIC_WTIMER0B_MASK      (0x80000000)
#define NVIC_PEND2_R_NVIC_WTIMER0B_BIT       (31)
#define NVIC_PEND2_R_NVIC_WTIMER0B_DIS       (0x00000000)
#define NVIC_PEND2_R_NVIC_WTIMER0B_EN        (0x80000000)

#define NVIC_PEND2_NVIC_WTIMER0B_MASK      (0x00000001)
#define NVIC_PEND2_NVIC_WTIMER0B_DIS       (0x00000000)
#define NVIC_PEND2_NVIC_WTIMER0B_EN        (0x00000001)
//--------



//ToDo UNPEND2
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// UNPEND2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_UNPEND2        (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_UNUNPEND2_OFFSET)))
#define NVIC_UNPEND2_R      (*((volatile uint32_t *)(NVIC_BASE+NVIC_UNUNPEND2_OFFSET)))

//--------
#define NVIC_UNPEND2_R_NVIC_I2C2_MASK      (0x00000010)
#define NVIC_UNPEND2_R_NVIC_I2C2_BIT       (4)
#define NVIC_UNPEND2_R_NVIC_I2C2_DIS       (0x00000000)
#define NVIC_UNPEND2_R_NVIC_I2C2_EN        (0x00000010)

#define NVIC_UNPEND2_NVIC_I2C2_MASK      (0x00000001)
#define NVIC_UNPEND2_NVIC_I2C2_DIS       (0x00000000)
#define NVIC_UNPEND2_NVIC_I2C2_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND2_R_NVIC_I2C3_MASK      (0x00000020)
#define NVIC_UNPEND2_R_NVIC_I2C3_BIT       (5)
#define NVIC_UNPEND2_R_NVIC_I2C3_DIS       (0x00000000)
#define NVIC_UNPEND2_R_NVIC_I2C3_EN        (0x00000020)

#define NVIC_UNPEND2_NVIC_I2C3_MASK      (0x00000001)
#define NVIC_UNPEND2_NVIC_I2C3_DIS       (0x00000000)
#define NVIC_UNPEND2_NVIC_I2C3_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND2_R_NVIC_TIMER4A_MASK      (0x00000040)
#define NVIC_UNPEND2_R_NVIC_TIMER4A_BIT       (6)
#define NVIC_UNPEND2_R_NVIC_TIMER4A_DIS       (0x00000000)
#define NVIC_UNPEND2_R_NVIC_TIMER4A_EN        (0x00000040)

#define NVIC_UNPEND2_NVIC_TIMER4A_MASK      (0x00000001)
#define NVIC_UNPEND2_NVIC_TIMER4A_DIS       (0x00000000)
#define NVIC_UNPEND2_NVIC_TIMER4A_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND2_R_NVIC_TIMER4B_MASK      (0x00000080)
#define NVIC_UNPEND2_R_NVIC_TIMER4B_BIT       (7)
#define NVIC_UNPEND2_R_NVIC_TIMER4B_DIS       (0x00000000)
#define NVIC_UNPEND2_R_NVIC_TIMER4B_EN        (0x00000080)

#define NVIC_UNPEND2_NVIC_TIMER4B_MASK      (0x00000001)
#define NVIC_UNPEND2_NVIC_TIMER4B_DIS       (0x00000000)
#define NVIC_UNPEND2_NVIC_TIMER4B_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND2_R_NVIC_TIMER5A_MASK      (0x10000000)
#define NVIC_UNPEND2_R_NVIC_TIMER5A_BIT       (28)
#define NVIC_UNPEND2_R_NVIC_TIMER5A_DIS       (0x00000000)
#define NVIC_UNPEND2_R_NVIC_TIMER5A_EN        (0x10000000)

#define NVIC_UNPEND2_NVIC_TIMER5A_MASK      (0x00000001)
#define NVIC_UNPEND2_NVIC_TIMER5A_DIS       (0x00000000)
#define NVIC_UNPEND2_NVIC_TIMER5A_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND2_R_NVIC_TIMER5B_MASK      (0x20000000)
#define NVIC_UNPEND2_R_NVIC_TIMER5B_BIT       (29)
#define NVIC_UNPEND2_R_NVIC_TIMER5B_DIS       (0x00000000)
#define NVIC_UNPEND2_R_NVIC_TIMER5B_EN        (0x20000000)

#define NVIC_UNPEND2_NVIC_TIMER5B_MASK      (0x00000001)
#define NVIC_UNPEND2_NVIC_TIMER5B_DIS       (0x00000000)
#define NVIC_UNPEND2_NVIC_TIMER5B_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND2_R_NVIC_WTIMER0A_MASK      (0x40000000)
#define NVIC_UNPEND2_R_NVIC_WTIMER0A_BIT       (30)
#define NVIC_UNPEND2_R_NVIC_WTIMER0A_DIS       (0x00000000)
#define NVIC_UNPEND2_R_NVIC_WTIMER0A_EN        (0x40000000)

#define NVIC_UNPEND2_NVIC_WTIMER0A_MASK      (0x00000001)
#define NVIC_UNPEND2_NVIC_WTIMER0A_DIS       (0x00000000)
#define NVIC_UNPEND2_NVIC_WTIMER0A_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND2_R_NVIC_WTIMER0B_MASK      (0x80000000)
#define NVIC_UNPEND2_R_NVIC_WTIMER0B_BIT       (31)
#define NVIC_UNPEND2_R_NVIC_WTIMER0B_DIS       (0x00000000)
#define NVIC_UNPEND2_R_NVIC_WTIMER0B_EN        (0x80000000)

#define NVIC_UNPEND2_NVIC_WTIMER0B_MASK      (0x00000001)
#define NVIC_UNPEND2_NVIC_WTIMER0B_DIS       (0x00000000)
#define NVIC_UNPEND2_NVIC_WTIMER0B_EN        (0x00000001)
//--------




//ToDo ACTIVE2
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ACTIVE2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ACTIVE2        (((NVIC2_TypeDef*)(NVIC_BASE+NVIC_ACTIVE2_OFFSET)))
#define NVIC_ACTIVE2_R      (*((volatile uint32_t *)(NVIC_BASE+NVIC_ACTIVE2_OFFSET)))

//--------
#define NVIC_ACTIVE2_R_NVIC_I2C2_MASK      (0x00000010)
#define NVIC_ACTIVE2_R_NVIC_I2C2_BIT       (4)
#define NVIC_ACTIVE2_R_NVIC_I2C2_DIS       (0x00000000)
#define NVIC_ACTIVE2_R_NVIC_I2C2_EN        (0x00000010)

#define NVIC_ACTIVE2_NVIC_I2C2_MASK      (0x00000001)
#define NVIC_ACTIVE2_NVIC_I2C2_DIS       (0x00000000)
#define NVIC_ACTIVE2_NVIC_I2C2_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE2_R_NVIC_I2C3_MASK      (0x00000020)
#define NVIC_ACTIVE2_R_NVIC_I2C3_BIT       (5)
#define NVIC_ACTIVE2_R_NVIC_I2C3_DIS       (0x00000000)
#define NVIC_ACTIVE2_R_NVIC_I2C3_EN        (0x00000020)

#define NVIC_ACTIVE2_NVIC_I2C3_MASK      (0x00000001)
#define NVIC_ACTIVE2_NVIC_I2C3_DIS       (0x00000000)
#define NVIC_ACTIVE2_NVIC_I2C3_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE2_R_NVIC_TIMER4A_MASK      (0x00000040)
#define NVIC_ACTIVE2_R_NVIC_TIMER4A_BIT       (6)
#define NVIC_ACTIVE2_R_NVIC_TIMER4A_DIS       (0x00000000)
#define NVIC_ACTIVE2_R_NVIC_TIMER4A_EN        (0x00000040)

#define NVIC_ACTIVE2_NVIC_TIMER4A_MASK      (0x00000001)
#define NVIC_ACTIVE2_NVIC_TIMER4A_DIS       (0x00000000)
#define NVIC_ACTIVE2_NVIC_TIMER4A_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE2_R_NVIC_TIMER4B_MASK      (0x00000080)
#define NVIC_ACTIVE2_R_NVIC_TIMER4B_BIT       (7)
#define NVIC_ACTIVE2_R_NVIC_TIMER4B_DIS       (0x00000000)
#define NVIC_ACTIVE2_R_NVIC_TIMER4B_EN        (0x00000080)

#define NVIC_ACTIVE2_NVIC_TIMER4B_MASK      (0x00000001)
#define NVIC_ACTIVE2_NVIC_TIMER4B_DIS       (0x00000000)
#define NVIC_ACTIVE2_NVIC_TIMER4B_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE2_R_NVIC_TIMER5A_MASK      (0x10000000)
#define NVIC_ACTIVE2_R_NVIC_TIMER5A_BIT       (28)
#define NVIC_ACTIVE2_R_NVIC_TIMER5A_DIS       (0x00000000)
#define NVIC_ACTIVE2_R_NVIC_TIMER5A_EN        (0x10000000)

#define NVIC_ACTIVE2_NVIC_TIMER5A_MASK      (0x00000001)
#define NVIC_ACTIVE2_NVIC_TIMER5A_DIS       (0x00000000)
#define NVIC_ACTIVE2_NVIC_TIMER5A_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE2_R_NVIC_TIMER5B_MASK      (0x20000000)
#define NVIC_ACTIVE2_R_NVIC_TIMER5B_BIT       (29)
#define NVIC_ACTIVE2_R_NVIC_TIMER5B_DIS       (0x00000000)
#define NVIC_ACTIVE2_R_NVIC_TIMER5B_EN        (0x20000000)

#define NVIC_ACTIVE2_NVIC_TIMER5B_MASK      (0x00000001)
#define NVIC_ACTIVE2_NVIC_TIMER5B_DIS       (0x00000000)
#define NVIC_ACTIVE2_NVIC_TIMER5B_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE2_R_NVIC_WTIMER0A_MASK      (0x40000000)
#define NVIC_ACTIVE2_R_NVIC_WTIMER0A_BIT       (30)
#define NVIC_ACTIVE2_R_NVIC_WTIMER0A_DIS       (0x00000000)
#define NVIC_ACTIVE2_R_NVIC_WTIMER0A_EN        (0x40000000)

#define NVIC_ACTIVE2_NVIC_WTIMER0A_MASK      (0x00000001)
#define NVIC_ACTIVE2_NVIC_WTIMER0A_DIS       (0x00000000)
#define NVIC_ACTIVE2_NVIC_WTIMER0A_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE2_R_NVIC_WTIMER0B_MASK      (0x80000000)
#define NVIC_ACTIVE2_R_NVIC_WTIMER0B_BIT       (31)
#define NVIC_ACTIVE2_R_NVIC_WTIMER0B_DIS       (0x00000000)
#define NVIC_ACTIVE2_R_NVIC_WTIMER0B_EN        (0x80000000)

#define NVIC_ACTIVE2_NVIC_WTIMER0B_MASK      (0x00000001)
#define NVIC_ACTIVE2_NVIC_WTIMER0B_DIS       (0x00000000)
#define NVIC_ACTIVE2_NVIC_WTIMER0B_EN        (0x00000001)
//--------



//ToDo EN3
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// EN3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_EN3            (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_EN3_OFFSET)))
#define NVIC_EN3_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_EN3_OFFSET)))


//--------
#define NVIC_EN3_R_NVIC_WTIMER1A_MASK      (0x00000001)
#define NVIC_EN3_R_NVIC_WTIMER1A_BIT       (0)
#define NVIC_EN3_R_NVIC_WTIMER1A_DIS       (0x00000000)
#define NVIC_EN3_R_NVIC_WTIMER1A_EN        (0x00000001)

#define NVIC_EN3_NVIC_WTIMER1A_MASK      (0x00000001)
#define NVIC_EN3_NVIC_WTIMER1A_DIS       (0x00000000)
#define NVIC_EN3_NVIC_WTIMER1A_EN        (0x00000001)
//--------

//--------
#define NVIC_EN3_R_NVIC_WTIMER1B_MASK      (0x00000002)
#define NVIC_EN3_R_NVIC_WTIMER1B_BIT       (1)
#define NVIC_EN3_R_NVIC_WTIMER1B_DIS       (0x00000000)
#define NVIC_EN3_R_NVIC_WTIMER1B_EN        (0x00000002)

#define NVIC_EN3_NVIC_WTIMER1B_MASK      (0x00000001)
#define NVIC_EN3_NVIC_WTIMER1B_DIS       (0x00000000)
#define NVIC_EN3_NVIC_WTIMER1B_EN        (0x00000001)
//--------

//--------
#define NVIC_EN3_R_NVIC_WTIMER2A_MASK      (0x00000004)
#define NVIC_EN3_R_NVIC_WTIMER2A_BIT       (2)
#define NVIC_EN3_R_NVIC_WTIMER2A_DIS       (0x00000000)
#define NVIC_EN3_R_NVIC_WTIMER2A_EN        (0x00000004)

#define NVIC_EN3_NVIC_WTIMER2A_MASK      (0x00000001)
#define NVIC_EN3_NVIC_WTIMER2A_DIS       (0x00000000)
#define NVIC_EN3_NVIC_WTIMER2A_EN        (0x00000001)
//--------


//--------
#define NVIC_EN3_R_NVIC_WTIMER2B_MASK      (0x00000008)
#define NVIC_EN3_R_NVIC_WTIMER2B_BIT       (3)
#define NVIC_EN3_R_NVIC_WTIMER2B_DIS       (0x00000000)
#define NVIC_EN3_R_NVIC_WTIMER2B_EN        (0x00000008)

#define NVIC_EN3_NVIC_WTIMER2B_MASK      (0x00000001)
#define NVIC_EN3_NVIC_WTIMER2B_DIS       (0x00000000)
#define NVIC_EN3_NVIC_WTIMER2B_EN        (0x00000001)
//--------

//--------
#define NVIC_EN3_R_NVIC_WTIMER3A_MASK      (0x00000010)
#define NVIC_EN3_R_NVIC_WTIMER3A_BIT       (4)
#define NVIC_EN3_R_NVIC_WTIMER3A_DIS       (0x00000000)
#define NVIC_EN3_R_NVIC_WTIMER3A_EN        (0x00000010)

#define NVIC_EN3_NVIC_WTIMER3A_MASK      (0x00000001)
#define NVIC_EN3_NVIC_WTIMER3A_DIS       (0x00000000)
#define NVIC_EN3_NVIC_WTIMER3A_EN        (0x00000001)
//--------

//--------
#define NVIC_EN3_R_NVIC_WTIMER3B_MASK      (0x00000020)
#define NVIC_EN3_R_NVIC_WTIMER3B_BIT       (5)
#define NVIC_EN3_R_NVIC_WTIMER3B_DIS       (0x00000000)
#define NVIC_EN3_R_NVIC_WTIMER3B_EN        (0x00000020)

#define NVIC_EN3_NVIC_WTIMER3B_MASK      (0x00000001)
#define NVIC_EN3_NVIC_WTIMER3B_DIS       (0x00000000)
#define NVIC_EN3_NVIC_WTIMER3B_EN        (0x00000001)
//--------

//--------
#define NVIC_EN3_R_NVIC_WTIMER4A_MASK      (0x00000040)
#define NVIC_EN3_R_NVIC_WTIMER4A_BIT       (6)
#define NVIC_EN3_R_NVIC_WTIMER4A_DIS       (0x00000000)
#define NVIC_EN3_R_NVIC_WTIMER4A_EN        (0x00000040)

#define NVIC_EN3_NVIC_WTIMER4A_MASK      (0x00000001)
#define NVIC_EN3_NVIC_WTIMER4A_DIS       (0x00000000)
#define NVIC_EN3_NVIC_WTIMER4A_EN        (0x00000001)
//--------

//--------
#define NVIC_EN3_R_NVIC_WTIMER4B_MASK      (0x00000080)
#define NVIC_EN3_R_NVIC_WTIMER4B_BIT       (7)
#define NVIC_EN3_R_NVIC_WTIMER4B_DIS       (0x00000000)
#define NVIC_EN3_R_NVIC_WTIMER4B_EN        (0x00000080)

#define NVIC_EN3_NVIC_WTIMER4B_MASK      (0x00000001)
#define NVIC_EN3_NVIC_WTIMER4B_DIS       (0x00000000)
#define NVIC_EN3_NVIC_WTIMER4B_EN        (0x00000001)
//--------

//--------
#define NVIC_EN3_R_NVIC_WTIMER5A_MASK      (0x00000100)
#define NVIC_EN3_R_NVIC_WTIMER5A_BIT       (8)
#define NVIC_EN3_R_NVIC_WTIMER5A_DIS       (0x00000000)
#define NVIC_EN3_R_NVIC_WTIMER5A_EN        (0x00000100)

#define NVIC_EN3_NVIC_WTIMER5A_MASK      (0x00000001)
#define NVIC_EN3_NVIC_WTIMER5A_DIS       (0x00000000)
#define NVIC_EN3_NVIC_WTIMER5A_EN        (0x00000001)
//--------


//--------
#define NVIC_EN3_R_NVIC_WTIMER5B_MASK      (0x00000200)
#define NVIC_EN3_R_NVIC_WTIMER5B_BIT       (9)
#define NVIC_EN3_R_NVIC_WTIMER5B_DIS       (0x00000000)
#define NVIC_EN3_R_NVIC_WTIMER5B_EN        (0x00000200)

#define NVIC_EN3_NVIC_WTIMER5B_MASK      (0x00000001)
#define NVIC_EN3_NVIC_WTIMER5B_DIS       (0x00000000)
#define NVIC_EN3_NVIC_WTIMER5B_EN        (0x00000001)
//--------


//--------
#define NVIC_EN3_R_NVIC_SYSEXC_MASK      (0x00000400)
#define NVIC_EN3_R_NVIC_SYSEXC_BIT       (10)
#define NVIC_EN3_R_NVIC_SYSEXC_DIS       (0x00000000)
#define NVIC_EN3_R_NVIC_SYSEXC_EN        (0x00000400)

#define NVIC_EN3_NVIC_SYSEXC_MASK      (0x00000001)
#define NVIC_EN3_NVIC_SYSEXC_DIS       (0x00000000)
#define NVIC_EN3_NVIC_SYSEXC_EN        (0x00000001)
//--------



//ToDo DIS3
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// DIS3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_DIS3           (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_DIS3_OFFSET)))
#define NVIC_DIS3_R         (*((volatile uint32_t *)(NVIC_BASE+NVIC_DIS3_OFFSET)))


//--------
#define NVIC_DIS3_R_NVIC_WTIMER1A_MASK      (0x00000001)
#define NVIC_DIS3_R_NVIC_WTIMER1A_BIT       (0)
#define NVIC_DIS3_R_NVIC_WTIMER1A_DIS       (0x00000000)
#define NVIC_DIS3_R_NVIC_WTIMER1A_EN        (0x00000001)

#define NVIC_DIS3_NVIC_WTIMER1A_MASK      (0x00000001)
#define NVIC_DIS3_NVIC_WTIMER1A_DIS       (0x00000000)
#define NVIC_DIS3_NVIC_WTIMER1A_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS3_R_NVIC_WTIMER1B_MASK      (0x00000002)
#define NVIC_DIS3_R_NVIC_WTIMER1B_BIT       (1)
#define NVIC_DIS3_R_NVIC_WTIMER1B_DIS       (0x00000000)
#define NVIC_DIS3_R_NVIC_WTIMER1B_EN        (0x00000002)

#define NVIC_DIS3_NVIC_WTIMER1B_MASK      (0x00000001)
#define NVIC_DIS3_NVIC_WTIMER1B_DIS       (0x00000000)
#define NVIC_DIS3_NVIC_WTIMER1B_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS3_R_NVIC_WTIMER2A_MASK      (0x00000004)
#define NVIC_DIS3_R_NVIC_WTIMER2A_BIT       (2)
#define NVIC_DIS3_R_NVIC_WTIMER2A_DIS       (0x00000000)
#define NVIC_DIS3_R_NVIC_WTIMER2A_EN        (0x00000004)

#define NVIC_DIS3_NVIC_WTIMER2A_MASK      (0x00000001)
#define NVIC_DIS3_NVIC_WTIMER2A_DIS       (0x00000000)
#define NVIC_DIS3_NVIC_WTIMER2A_EN        (0x00000001)
//--------


//--------
#define NVIC_DIS3_R_NVIC_WTIMER2B_MASK      (0x00000008)
#define NVIC_DIS3_R_NVIC_WTIMER2B_BIT       (3)
#define NVIC_DIS3_R_NVIC_WTIMER2B_DIS       (0x00000000)
#define NVIC_DIS3_R_NVIC_WTIMER2B_EN        (0x00000008)

#define NVIC_DIS3_NVIC_WTIMER2B_MASK      (0x00000001)
#define NVIC_DIS3_NVIC_WTIMER2B_DIS       (0x00000000)
#define NVIC_DIS3_NVIC_WTIMER2B_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS3_R_NVIC_WTIMER3A_MASK      (0x00000010)
#define NVIC_DIS3_R_NVIC_WTIMER3A_BIT       (4)
#define NVIC_DIS3_R_NVIC_WTIMER3A_DIS       (0x00000000)
#define NVIC_DIS3_R_NVIC_WTIMER3A_EN        (0x00000010)

#define NVIC_DIS3_NVIC_WTIMER3A_MASK      (0x00000001)
#define NVIC_DIS3_NVIC_WTIMER3A_DIS       (0x00000000)
#define NVIC_DIS3_NVIC_WTIMER3A_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS3_R_NVIC_WTIMER3B_MASK      (0x00000020)
#define NVIC_DIS3_R_NVIC_WTIMER3B_BIT       (5)
#define NVIC_DIS3_R_NVIC_WTIMER3B_DIS       (0x00000000)
#define NVIC_DIS3_R_NVIC_WTIMER3B_EN        (0x00000020)

#define NVIC_DIS3_NVIC_WTIMER3B_MASK      (0x00000001)
#define NVIC_DIS3_NVIC_WTIMER3B_DIS       (0x00000000)
#define NVIC_DIS3_NVIC_WTIMER3B_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS3_R_NVIC_WTIMER4A_MASK      (0x00000040)
#define NVIC_DIS3_R_NVIC_WTIMER4A_BIT       (6)
#define NVIC_DIS3_R_NVIC_WTIMER4A_DIS       (0x00000000)
#define NVIC_DIS3_R_NVIC_WTIMER4A_EN        (0x00000040)

#define NVIC_DIS3_NVIC_WTIMER4A_MASK      (0x00000001)
#define NVIC_DIS3_NVIC_WTIMER4A_DIS       (0x00000000)
#define NVIC_DIS3_NVIC_WTIMER4A_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS3_R_NVIC_WTIMER4B_MASK      (0x00000080)
#define NVIC_DIS3_R_NVIC_WTIMER4B_BIT       (7)
#define NVIC_DIS3_R_NVIC_WTIMER4B_DIS       (0x00000000)
#define NVIC_DIS3_R_NVIC_WTIMER4B_EN        (0x00000080)

#define NVIC_DIS3_NVIC_WTIMER4B_MASK      (0x00000001)
#define NVIC_DIS3_NVIC_WTIMER4B_DIS       (0x00000000)
#define NVIC_DIS3_NVIC_WTIMER4B_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS3_R_NVIC_WTIMER5A_MASK      (0x00000100)
#define NVIC_DIS3_R_NVIC_WTIMER5A_BIT       (8)
#define NVIC_DIS3_R_NVIC_WTIMER5A_DIS       (0x00000000)
#define NVIC_DIS3_R_NVIC_WTIMER5A_EN        (0x00000100)

#define NVIC_DIS3_NVIC_WTIMER5A_MASK      (0x00000001)
#define NVIC_DIS3_NVIC_WTIMER5A_DIS       (0x00000000)
#define NVIC_DIS3_NVIC_WTIMER5A_EN        (0x00000001)
//--------


//--------
#define NVIC_DIS3_R_NVIC_WTIMER5B_MASK      (0x00000200)
#define NVIC_DIS3_R_NVIC_WTIMER5B_BIT       (9)
#define NVIC_DIS3_R_NVIC_WTIMER5B_DIS       (0x00000000)
#define NVIC_DIS3_R_NVIC_WTIMER5B_EN        (0x00000200)

#define NVIC_DIS3_NVIC_WTIMER5B_MASK      (0x00000001)
#define NVIC_DIS3_NVIC_WTIMER5B_DIS       (0x00000000)
#define NVIC_DIS3_NVIC_WTIMER5B_EN        (0x00000001)
//--------


//--------
#define NVIC_DIS3_R_NVIC_SYSEXC_MASK      (0x00000400)
#define NVIC_DIS3_R_NVIC_SYSEXC_BIT       (10)
#define NVIC_DIS3_R_NVIC_SYSEXC_DIS       (0x00000000)
#define NVIC_DIS3_R_NVIC_SYSEXC_EN        (0x00000400)

#define NVIC_DIS3_NVIC_SYSEXC_MASK      (0x00000001)
#define NVIC_DIS3_NVIC_SYSEXC_DIS       (0x00000000)
#define NVIC_DIS3_NVIC_SYSEXC_EN        (0x00000001)
//--------



//ToDo PEND3
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PEND3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PEND3          (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_PEND3_OFFSET)))
#define NVIC_PEND3_R        (*((volatile uint32_t *)(NVIC_BASE+NVIC_PEND3_OFFSET)))



//--------
#define NVIC_PEND3_R_NVIC_WTIMER1A_MASK      (0x00000001)
#define NVIC_PEND3_R_NVIC_WTIMER1A_BIT       (0)
#define NVIC_PEND3_R_NVIC_WTIMER1A_DIS       (0x00000000)
#define NVIC_PEND3_R_NVIC_WTIMER1A_EN        (0x00000001)

#define NVIC_PEND3_NVIC_WTIMER1A_MASK      (0x00000001)
#define NVIC_PEND3_NVIC_WTIMER1A_DIS       (0x00000000)
#define NVIC_PEND3_NVIC_WTIMER1A_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND3_R_NVIC_WTIMER1B_MASK      (0x00000002)
#define NVIC_PEND3_R_NVIC_WTIMER1B_BIT       (1)
#define NVIC_PEND3_R_NVIC_WTIMER1B_DIS       (0x00000000)
#define NVIC_PEND3_R_NVIC_WTIMER1B_EN        (0x00000002)

#define NVIC_PEND3_NVIC_WTIMER1B_MASK      (0x00000001)
#define NVIC_PEND3_NVIC_WTIMER1B_DIS       (0x00000000)
#define NVIC_PEND3_NVIC_WTIMER1B_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND3_R_NVIC_WTIMER2A_MASK      (0x00000004)
#define NVIC_PEND3_R_NVIC_WTIMER2A_BIT       (2)
#define NVIC_PEND3_R_NVIC_WTIMER2A_DIS       (0x00000000)
#define NVIC_PEND3_R_NVIC_WTIMER2A_EN        (0x00000004)

#define NVIC_PEND3_NVIC_WTIMER2A_MASK      (0x00000001)
#define NVIC_PEND3_NVIC_WTIMER2A_DIS       (0x00000000)
#define NVIC_PEND3_NVIC_WTIMER2A_EN        (0x00000001)
//--------


//--------
#define NVIC_PEND3_R_NVIC_WTIMER2B_MASK      (0x00000008)
#define NVIC_PEND3_R_NVIC_WTIMER2B_BIT       (3)
#define NVIC_PEND3_R_NVIC_WTIMER2B_DIS       (0x00000000)
#define NVIC_PEND3_R_NVIC_WTIMER2B_EN        (0x00000008)

#define NVIC_PEND3_NVIC_WTIMER2B_MASK      (0x00000001)
#define NVIC_PEND3_NVIC_WTIMER2B_DIS       (0x00000000)
#define NVIC_PEND3_NVIC_WTIMER2B_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND3_R_NVIC_WTIMER3A_MASK      (0x00000010)
#define NVIC_PEND3_R_NVIC_WTIMER3A_BIT       (4)
#define NVIC_PEND3_R_NVIC_WTIMER3A_DIS       (0x00000000)
#define NVIC_PEND3_R_NVIC_WTIMER3A_EN        (0x00000010)

#define NVIC_PEND3_NVIC_WTIMER3A_MASK      (0x00000001)
#define NVIC_PEND3_NVIC_WTIMER3A_DIS       (0x00000000)
#define NVIC_PEND3_NVIC_WTIMER3A_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND3_R_NVIC_WTIMER3B_MASK      (0x00000020)
#define NVIC_PEND3_R_NVIC_WTIMER3B_BIT       (5)
#define NVIC_PEND3_R_NVIC_WTIMER3B_DIS       (0x00000000)
#define NVIC_PEND3_R_NVIC_WTIMER3B_EN        (0x00000020)

#define NVIC_PEND3_NVIC_WTIMER3B_MASK      (0x00000001)
#define NVIC_PEND3_NVIC_WTIMER3B_DIS       (0x00000000)
#define NVIC_PEND3_NVIC_WTIMER3B_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND3_R_NVIC_WTIMER4A_MASK      (0x00000040)
#define NVIC_PEND3_R_NVIC_WTIMER4A_BIT       (6)
#define NVIC_PEND3_R_NVIC_WTIMER4A_DIS       (0x00000000)
#define NVIC_PEND3_R_NVIC_WTIMER4A_EN        (0x00000040)

#define NVIC_PEND3_NVIC_WTIMER4A_MASK      (0x00000001)
#define NVIC_PEND3_NVIC_WTIMER4A_DIS       (0x00000000)
#define NVIC_PEND3_NVIC_WTIMER4A_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND3_R_NVIC_WTIMER4B_MASK      (0x00000080)
#define NVIC_PEND3_R_NVIC_WTIMER4B_BIT       (7)
#define NVIC_PEND3_R_NVIC_WTIMER4B_DIS       (0x00000000)
#define NVIC_PEND3_R_NVIC_WTIMER4B_EN        (0x00000080)

#define NVIC_PEND3_NVIC_WTIMER4B_MASK      (0x00000001)
#define NVIC_PEND3_NVIC_WTIMER4B_DIS       (0x00000000)
#define NVIC_PEND3_NVIC_WTIMER4B_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND3_R_NVIC_WTIMER5A_MASK      (0x00000100)
#define NVIC_PEND3_R_NVIC_WTIMER5A_BIT       (8)
#define NVIC_PEND3_R_NVIC_WTIMER5A_DIS       (0x00000000)
#define NVIC_PEND3_R_NVIC_WTIMER5A_EN        (0x00000100)

#define NVIC_PEND3_NVIC_WTIMER5A_MASK      (0x00000001)
#define NVIC_PEND3_NVIC_WTIMER5A_DIS       (0x00000000)
#define NVIC_PEND3_NVIC_WTIMER5A_EN        (0x00000001)
//--------


//--------
#define NVIC_PEND3_R_NVIC_WTIMER5B_MASK      (0x00000200)
#define NVIC_PEND3_R_NVIC_WTIMER5B_BIT       (9)
#define NVIC_PEND3_R_NVIC_WTIMER5B_DIS       (0x00000000)
#define NVIC_PEND3_R_NVIC_WTIMER5B_EN        (0x00000200)

#define NVIC_PEND3_NVIC_WTIMER5B_MASK      (0x00000001)
#define NVIC_PEND3_NVIC_WTIMER5B_DIS       (0x00000000)
#define NVIC_PEND3_NVIC_WTIMER5B_EN        (0x00000001)
//--------


//--------
#define NVIC_PEND3_R_NVIC_SYSEXC_MASK      (0x00000400)
#define NVIC_PEND3_R_NVIC_SYSEXC_BIT       (10)
#define NVIC_PEND3_R_NVIC_SYSEXC_DIS       (0x00000000)
#define NVIC_PEND3_R_NVIC_SYSEXC_EN        (0x00000400)

#define NVIC_PEND3_NVIC_SYSEXC_MASK      (0x00000001)
#define NVIC_PEND3_NVIC_SYSEXC_DIS       (0x00000000)
#define NVIC_PEND3_NVIC_SYSEXC_EN        (0x00000001)
//--------


//ToDo UNPEND3
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// UNPEND3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define NVIC_UNPEND3        (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_UNUNPEND3_OFFSET)))
#define NVIC_UNPEND3_R      (*((volatile uint32_t *)(NVIC_BASE+NVIC_UNUNPEND3_OFFSET)))



//--------
#define NVIC_UNPEND3_R_NVIC_WTIMER1A_MASK      (0x00000001)
#define NVIC_UNPEND3_R_NVIC_WTIMER1A_BIT       (0)
#define NVIC_UNPEND3_R_NVIC_WTIMER1A_DIS       (0x00000000)
#define NVIC_UNPEND3_R_NVIC_WTIMER1A_EN        (0x00000001)

#define NVIC_UNPEND3_NVIC_WTIMER1A_MASK      (0x00000001)
#define NVIC_UNPEND3_NVIC_WTIMER1A_DIS       (0x00000000)
#define NVIC_UNPEND3_NVIC_WTIMER1A_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND3_R_NVIC_WTIMER1B_MASK      (0x00000002)
#define NVIC_UNPEND3_R_NVIC_WTIMER1B_BIT       (1)
#define NVIC_UNPEND3_R_NVIC_WTIMER1B_DIS       (0x00000000)
#define NVIC_UNPEND3_R_NVIC_WTIMER1B_EN        (0x00000002)

#define NVIC_UNPEND3_NVIC_WTIMER1B_MASK      (0x00000001)
#define NVIC_UNPEND3_NVIC_WTIMER1B_DIS       (0x00000000)
#define NVIC_UNPEND3_NVIC_WTIMER1B_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND3_R_NVIC_WTIMER2A_MASK      (0x00000004)
#define NVIC_UNPEND3_R_NVIC_WTIMER2A_BIT       (2)
#define NVIC_UNPEND3_R_NVIC_WTIMER2A_DIS       (0x00000000)
#define NVIC_UNPEND3_R_NVIC_WTIMER2A_EN        (0x00000004)

#define NVIC_UNPEND3_NVIC_WTIMER2A_MASK      (0x00000001)
#define NVIC_UNPEND3_NVIC_WTIMER2A_DIS       (0x00000000)
#define NVIC_UNPEND3_NVIC_WTIMER2A_EN        (0x00000001)
//--------


//--------
#define NVIC_UNPEND3_R_NVIC_WTIMER2B_MASK      (0x00000008)
#define NVIC_UNPEND3_R_NVIC_WTIMER2B_BIT       (3)
#define NVIC_UNPEND3_R_NVIC_WTIMER2B_DIS       (0x00000000)
#define NVIC_UNPEND3_R_NVIC_WTIMER2B_EN        (0x00000008)

#define NVIC_UNPEND3_NVIC_WTIMER2B_MASK      (0x00000001)
#define NVIC_UNPEND3_NVIC_WTIMER2B_DIS       (0x00000000)
#define NVIC_UNPEND3_NVIC_WTIMER2B_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND3_R_NVIC_WTIMER3A_MASK      (0x00000010)
#define NVIC_UNPEND3_R_NVIC_WTIMER3A_BIT       (4)
#define NVIC_UNPEND3_R_NVIC_WTIMER3A_DIS       (0x00000000)
#define NVIC_UNPEND3_R_NVIC_WTIMER3A_EN        (0x00000010)

#define NVIC_UNPEND3_NVIC_WTIMER3A_MASK      (0x00000001)
#define NVIC_UNPEND3_NVIC_WTIMER3A_DIS       (0x00000000)
#define NVIC_UNPEND3_NVIC_WTIMER3A_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND3_R_NVIC_WTIMER3B_MASK      (0x00000020)
#define NVIC_UNPEND3_R_NVIC_WTIMER3B_BIT       (5)
#define NVIC_UNPEND3_R_NVIC_WTIMER3B_DIS       (0x00000000)
#define NVIC_UNPEND3_R_NVIC_WTIMER3B_EN        (0x00000020)

#define NVIC_UNPEND3_NVIC_WTIMER3B_MASK      (0x00000001)
#define NVIC_UNPEND3_NVIC_WTIMER3B_DIS       (0x00000000)
#define NVIC_UNPEND3_NVIC_WTIMER3B_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND3_R_NVIC_WTIMER4A_MASK      (0x00000040)
#define NVIC_UNPEND3_R_NVIC_WTIMER4A_BIT       (6)
#define NVIC_UNPEND3_R_NVIC_WTIMER4A_DIS       (0x00000000)
#define NVIC_UNPEND3_R_NVIC_WTIMER4A_EN        (0x00000040)

#define NVIC_UNPEND3_NVIC_WTIMER4A_MASK      (0x00000001)
#define NVIC_UNPEND3_NVIC_WTIMER4A_DIS       (0x00000000)
#define NVIC_UNPEND3_NVIC_WTIMER4A_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND3_R_NVIC_WTIMER4B_MASK      (0x00000080)
#define NVIC_UNPEND3_R_NVIC_WTIMER4B_BIT       (7)
#define NVIC_UNPEND3_R_NVIC_WTIMER4B_DIS       (0x00000000)
#define NVIC_UNPEND3_R_NVIC_WTIMER4B_EN        (0x00000080)

#define NVIC_UNPEND3_NVIC_WTIMER4B_MASK      (0x00000001)
#define NVIC_UNPEND3_NVIC_WTIMER4B_DIS       (0x00000000)
#define NVIC_UNPEND3_NVIC_WTIMER4B_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND3_R_NVIC_WTIMER5A_MASK      (0x00000100)
#define NVIC_UNPEND3_R_NVIC_WTIMER5A_BIT       (8)
#define NVIC_UNPEND3_R_NVIC_WTIMER5A_DIS       (0x00000000)
#define NVIC_UNPEND3_R_NVIC_WTIMER5A_EN        (0x00000100)

#define NVIC_UNPEND3_NVIC_WTIMER5A_MASK      (0x00000001)
#define NVIC_UNPEND3_NVIC_WTIMER5A_DIS       (0x00000000)
#define NVIC_UNPEND3_NVIC_WTIMER5A_EN        (0x00000001)
//--------


//--------
#define NVIC_UNPEND3_R_NVIC_WTIMER5B_MASK      (0x00000200)
#define NVIC_UNPEND3_R_NVIC_WTIMER5B_BIT       (9)
#define NVIC_UNPEND3_R_NVIC_WTIMER5B_DIS       (0x00000000)
#define NVIC_UNPEND3_R_NVIC_WTIMER5B_EN        (0x00000200)

#define NVIC_UNPEND3_NVIC_WTIMER5B_MASK      (0x00000001)
#define NVIC_UNPEND3_NVIC_WTIMER5B_DIS       (0x00000000)
#define NVIC_UNPEND3_NVIC_WTIMER5B_EN        (0x00000001)
//--------


//--------
#define NVIC_UNPEND3_R_NVIC_SYSEXC_MASK      (0x00000400)
#define NVIC_UNPEND3_R_NVIC_SYSEXC_BIT       (10)
#define NVIC_UNPEND3_R_NVIC_SYSEXC_DIS       (0x00000000)
#define NVIC_UNPEND3_R_NVIC_SYSEXC_EN        (0x00000400)

#define NVIC_UNPEND3_NVIC_SYSEXC_MASK      (0x00000001)
#define NVIC_UNPEND3_NVIC_SYSEXC_DIS       (0x00000000)
#define NVIC_UNPEND3_NVIC_SYSEXC_EN        (0x00000001)
//--------





//ToDo ACTIVE3
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ACTIVE3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_ACTIVE3        (((NVIC3_TypeDef*)(NVIC_BASE+NVIC_ACTIVE3_OFFSET)))
#define NVIC_ACTIVE3_R      (*((volatile uint32_t *)(NVIC_BASE+NVIC_ACTIVE3_OFFSET)))



//--------
#define NVIC_ACTIVE3_R_NVIC_WTIMER1A_MASK      (0x00000001)
#define NVIC_ACTIVE3_R_NVIC_WTIMER1A_BIT       (0)
#define NVIC_ACTIVE3_R_NVIC_WTIMER1A_DIS       (0x00000000)
#define NVIC_ACTIVE3_R_NVIC_WTIMER1A_EN        (0x00000001)

#define NVIC_ACTIVE3_NVIC_WTIMER1A_MASK      (0x00000001)
#define NVIC_ACTIVE3_NVIC_WTIMER1A_DIS       (0x00000000)
#define NVIC_ACTIVE3_NVIC_WTIMER1A_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE3_R_NVIC_WTIMER1B_MASK      (0x00000002)
#define NVIC_ACTIVE3_R_NVIC_WTIMER1B_BIT       (1)
#define NVIC_ACTIVE3_R_NVIC_WTIMER1B_DIS       (0x00000000)
#define NVIC_ACTIVE3_R_NVIC_WTIMER1B_EN        (0x00000002)

#define NVIC_ACTIVE3_NVIC_WTIMER1B_MASK      (0x00000001)
#define NVIC_ACTIVE3_NVIC_WTIMER1B_DIS       (0x00000000)
#define NVIC_ACTIVE3_NVIC_WTIMER1B_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE3_R_NVIC_WTIMER2A_MASK      (0x00000004)
#define NVIC_ACTIVE3_R_NVIC_WTIMER2A_BIT       (2)
#define NVIC_ACTIVE3_R_NVIC_WTIMER2A_DIS       (0x00000000)
#define NVIC_ACTIVE3_R_NVIC_WTIMER2A_EN        (0x00000004)

#define NVIC_ACTIVE3_NVIC_WTIMER2A_MASK      (0x00000001)
#define NVIC_ACTIVE3_NVIC_WTIMER2A_DIS       (0x00000000)
#define NVIC_ACTIVE3_NVIC_WTIMER2A_EN        (0x00000001)
//--------


//--------
#define NVIC_ACTIVE3_R_NVIC_WTIMER2B_MASK      (0x00000008)
#define NVIC_ACTIVE3_R_NVIC_WTIMER2B_BIT       (3)
#define NVIC_ACTIVE3_R_NVIC_WTIMER2B_DIS       (0x00000000)
#define NVIC_ACTIVE3_R_NVIC_WTIMER2B_EN        (0x00000008)

#define NVIC_ACTIVE3_NVIC_WTIMER2B_MASK      (0x00000001)
#define NVIC_ACTIVE3_NVIC_WTIMER2B_DIS       (0x00000000)
#define NVIC_ACTIVE3_NVIC_WTIMER2B_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE3_R_NVIC_WTIMER3A_MASK      (0x00000010)
#define NVIC_ACTIVE3_R_NVIC_WTIMER3A_BIT       (4)
#define NVIC_ACTIVE3_R_NVIC_WTIMER3A_DIS       (0x00000000)
#define NVIC_ACTIVE3_R_NVIC_WTIMER3A_EN        (0x00000010)

#define NVIC_ACTIVE3_NVIC_WTIMER3A_MASK      (0x00000001)
#define NVIC_ACTIVE3_NVIC_WTIMER3A_DIS       (0x00000000)
#define NVIC_ACTIVE3_NVIC_WTIMER3A_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE3_R_NVIC_WTIMER3B_MASK      (0x00000020)
#define NVIC_ACTIVE3_R_NVIC_WTIMER3B_BIT       (5)
#define NVIC_ACTIVE3_R_NVIC_WTIMER3B_DIS       (0x00000000)
#define NVIC_ACTIVE3_R_NVIC_WTIMER3B_EN        (0x00000020)

#define NVIC_ACTIVE3_NVIC_WTIMER3B_MASK      (0x00000001)
#define NVIC_ACTIVE3_NVIC_WTIMER3B_DIS       (0x00000000)
#define NVIC_ACTIVE3_NVIC_WTIMER3B_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE3_R_NVIC_WTIMER4A_MASK      (0x00000040)
#define NVIC_ACTIVE3_R_NVIC_WTIMER4A_BIT       (6)
#define NVIC_ACTIVE3_R_NVIC_WTIMER4A_DIS       (0x00000000)
#define NVIC_ACTIVE3_R_NVIC_WTIMER4A_EN        (0x00000040)

#define NVIC_ACTIVE3_NVIC_WTIMER4A_MASK      (0x00000001)
#define NVIC_ACTIVE3_NVIC_WTIMER4A_DIS       (0x00000000)
#define NVIC_ACTIVE3_NVIC_WTIMER4A_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE3_R_NVIC_WTIMER4B_MASK      (0x00000080)
#define NVIC_ACTIVE3_R_NVIC_WTIMER4B_BIT       (7)
#define NVIC_ACTIVE3_R_NVIC_WTIMER4B_DIS       (0x00000000)
#define NVIC_ACTIVE3_R_NVIC_WTIMER4B_EN        (0x00000080)

#define NVIC_ACTIVE3_NVIC_WTIMER4B_MASK      (0x00000001)
#define NVIC_ACTIVE3_NVIC_WTIMER4B_DIS       (0x00000000)
#define NVIC_ACTIVE3_NVIC_WTIMER4B_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE3_R_NVIC_WTIMER5A_MASK      (0x00000100)
#define NVIC_ACTIVE3_R_NVIC_WTIMER5A_BIT       (8)
#define NVIC_ACTIVE3_R_NVIC_WTIMER5A_DIS       (0x00000000)
#define NVIC_ACTIVE3_R_NVIC_WTIMER5A_EN        (0x00000100)

#define NVIC_ACTIVE3_NVIC_WTIMER5A_MASK      (0x00000001)
#define NVIC_ACTIVE3_NVIC_WTIMER5A_DIS       (0x00000000)
#define NVIC_ACTIVE3_NVIC_WTIMER5A_EN        (0x00000001)
//--------


//--------
#define NVIC_ACTIVE3_R_NVIC_WTIMER5B_MASK      (0x00000200)
#define NVIC_ACTIVE3_R_NVIC_WTIMER5B_BIT       (9)
#define NVIC_ACTIVE3_R_NVIC_WTIMER5B_DIS       (0x00000000)
#define NVIC_ACTIVE3_R_NVIC_WTIMER5B_EN        (0x00000200)

#define NVIC_ACTIVE3_NVIC_WTIMER5B_MASK      (0x00000001)
#define NVIC_ACTIVE3_NVIC_WTIMER5B_DIS       (0x00000000)
#define NVIC_ACTIVE3_NVIC_WTIMER5B_EN        (0x00000001)
//--------


//--------
#define NVIC_ACTIVE3_R_NVIC_SYSEXC_MASK      (0x00000400)
#define NVIC_ACTIVE3_R_NVIC_SYSEXC_BIT       (10)
#define NVIC_ACTIVE3_R_NVIC_SYSEXC_DIS       (0x00000000)
#define NVIC_ACTIVE3_R_NVIC_SYSEXC_EN        (0x00000400)

#define NVIC_ACTIVE3_NVIC_SYSEXC_MASK      (0x00000001)
#define NVIC_ACTIVE3_NVIC_SYSEXC_DIS       (0x00000000)
#define NVIC_ACTIVE3_NVIC_SYSEXC_EN        (0x00000001)
//--------




//ToDO EN4
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// EN4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_EN4            (((NVIC4_TypeDef*)(NVIC_BASE+NVIC_EN4_OFFSET)))
#define NVIC_EN4_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_EN4_OFFSET)))


//--------
#define NVIC_EN4_R_NVIC_PWM1GEN4_MASK      (0x00000040)
#define NVIC_EN4_R_NVIC_PWM1GEN4_BIT       (6)
#define NVIC_EN4_R_NVIC_PWM1GEN4_DIS       (0x00000000)
#define NVIC_EN4_R_NVIC_PWM1GEN4_EN        (0x00000040)

#define NVIC_EN4_NVIC_PWM1GEN4_MASK      (0x00000001)
#define NVIC_EN4_NVIC_PWM1GEN4_DIS       (0x00000000)
#define NVIC_EN4_NVIC_PWM1GEN4_EN        (0x00000001)
//--------

//--------
#define NVIC_EN4_R_NVIC_PWM1GEN1_MASK      (0x00000080)
#define NVIC_EN4_R_NVIC_PWM1GEN1_BIT       (7)
#define NVIC_EN4_R_NVIC_PWM1GEN1_DIS       (0x00000000)
#define NVIC_EN4_R_NVIC_PWM1GEN1_EN        (0x00000080)

#define NVIC_EN4_NVIC_PWM1GEN1_MASK      (0x00000001)
#define NVIC_EN4_NVIC_PWM1GEN1_DIS       (0x00000000)
#define NVIC_EN4_NVIC_PWM1GEN1_EN        (0x00000001)
//--------

//--------
#define NVIC_EN4_R_NVIC_PWM1GEN2_MASK      (0x00000100)
#define NVIC_EN4_R_NVIC_PWM1GEN2_BIT       (8)
#define NVIC_EN4_R_NVIC_PWM1GEN2_DIS       (0x00000000)
#define NVIC_EN4_R_NVIC_PWM1GEN2_EN        (0x00000100)

#define NVIC_EN4_NVIC_PWM1GEN2_MASK      (0x00000001)
#define NVIC_EN4_NVIC_PWM1GEN2_DIS       (0x00000000)
#define NVIC_EN4_NVIC_PWM1GEN2_EN        (0x00000001)
//--------


//--------
#define NVIC_EN4_R_NVIC_PWM1GEN3_MASK      (0x00000200)
#define NVIC_EN4_R_NVIC_PWM1GEN3_BIT       (9)
#define NVIC_EN4_R_NVIC_PWM1GEN3_DIS       (0x00000000)
#define NVIC_EN4_R_NVIC_PWM1GEN3_EN        (0x00000200)

#define NVIC_EN4_NVIC_PWM1GEN3_MASK      (0x00000001)
#define NVIC_EN4_NVIC_PWM1GEN3_DIS       (0x00000000)
#define NVIC_EN4_NVIC_PWM1GEN3_EN        (0x00000001)
//--------


//--------
#define NVIC_EN4_R_NVIC_PWM1FAULT_MASK      (0x00000400)
#define NVIC_EN4_R_NVIC_PWM1FAULT_BIT       (10)
#define NVIC_EN4_R_NVIC_PWM1FAULT_DIS       (0x00000000)
#define NVIC_EN4_R_NVIC_PWM1FAULT_EN        (0x00000400)

#define NVIC_EN4_NVIC_PWM1FAULT_MASK      (0x00000001)
#define NVIC_EN4_NVIC_PWM1FAULT_DIS       (0x00000000)
#define NVIC_EN4_NVIC_PWM1FAULT_EN        (0x00000001)
//--------



//ToDO DIS4
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// DIS4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define NVIC_DIS4           (((NVIC4_TypeDef*)(NVIC_BASE+NVIC_DIS4_OFFSET)))
#define NVIC_DIS4_R         (*((volatile uint32_t *)(NVIC_BASE+NVIC_DIS4_OFFSET)))


//--------
#define NVIC_DIS4_R_NVIC_PWM1GDIS4_MASK      (0x00000040)
#define NVIC_DIS4_R_NVIC_PWM1GDIS4_BIT       (6)
#define NVIC_DIS4_R_NVIC_PWM1GDIS4_DIS       (0x00000000)
#define NVIC_DIS4_R_NVIC_PWM1GDIS4_EN        (0x00000040)

#define NVIC_DIS4_NVIC_PWM1GDIS4_MASK      (0x00000001)
#define NVIC_DIS4_NVIC_PWM1GDIS4_DIS       (0x00000000)
#define NVIC_DIS4_NVIC_PWM1GDIS4_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS4_R_NVIC_PWM1GEN1_MASK      (0x00000080)
#define NVIC_DIS4_R_NVIC_PWM1GEN1_BIT       (7)
#define NVIC_DIS4_R_NVIC_PWM1GEN1_DIS       (0x00000000)
#define NVIC_DIS4_R_NVIC_PWM1GEN1_EN        (0x00000080)

#define NVIC_DIS4_NVIC_PWM1GEN1_MASK      (0x00000001)
#define NVIC_DIS4_NVIC_PWM1GEN1_DIS       (0x00000000)
#define NVIC_DIS4_NVIC_PWM1GEN1_EN        (0x00000001)
//--------

//--------
#define NVIC_DIS4_R_NVIC_PWM1GEN2_MASK      (0x00000100)
#define NVIC_DIS4_R_NVIC_PWM1GEN2_BIT       (8)
#define NVIC_DIS4_R_NVIC_PWM1GEN2_DIS       (0x00000000)
#define NVIC_DIS4_R_NVIC_PWM1GEN2_EN        (0x00000100)

#define NVIC_DIS4_NVIC_PWM1GEN2_MASK      (0x00000001)
#define NVIC_DIS4_NVIC_PWM1GEN2_DIS       (0x00000000)
#define NVIC_DIS4_NVIC_PWM1GEN2_EN        (0x00000001)
//--------


//--------
#define NVIC_DIS4_R_NVIC_PWM1GEN3_MASK      (0x00000200)
#define NVIC_DIS4_R_NVIC_PWM1GEN3_BIT       (9)
#define NVIC_DIS4_R_NVIC_PWM1GEN3_DIS       (0x00000000)
#define NVIC_DIS4_R_NVIC_PWM1GEN3_EN        (0x00000200)

#define NVIC_DIS4_NVIC_PWM1GEN3_MASK      (0x00000001)
#define NVIC_DIS4_NVIC_PWM1GEN3_DIS       (0x00000000)
#define NVIC_DIS4_NVIC_PWM1GEN3_EN        (0x00000001)
//--------


//--------
#define NVIC_DIS4_R_NVIC_PWM1FAULT_MASK      (0x00000400)
#define NVIC_DIS4_R_NVIC_PWM1FAULT_BIT       (10)
#define NVIC_DIS4_R_NVIC_PWM1FAULT_DIS       (0x00000000)
#define NVIC_DIS4_R_NVIC_PWM1FAULT_EN        (0x00000400)

#define NVIC_DIS4_NVIC_PWM1FAULT_MASK      (0x00000001)
#define NVIC_DIS4_NVIC_PWM1FAULT_DIS       (0x00000000)
#define NVIC_DIS4_NVIC_PWM1FAULT_EN        (0x00000001)
//--------



//ToDO PEND4
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PEND4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define NVIC_PEND4          (((NVIC4_TypeDef*)(NVIC_BASE+NVIC_PEND4_OFFSET)))
#define NVIC_PEND4_R        (*((volatile uint32_t *)(NVIC_BASE+NVIC_PEND4_OFFSET)))


//--------
#define NVIC_PEND4_R_NVIC_PWM1GPEND4_MASK      (0x00000040)
#define NVIC_PEND4_R_NVIC_PWM1GPEND4_BIT       (6)
#define NVIC_PEND4_R_NVIC_PWM1GPEND4_DIS       (0x00000000)
#define NVIC_PEND4_R_NVIC_PWM1GPEND4_EN        (0x00000040)

#define NVIC_PEND4_NVIC_PWM1GPEND4_MASK      (0x00000001)
#define NVIC_PEND4_NVIC_PWM1GPEND4_DIS       (0x00000000)
#define NVIC_PEND4_NVIC_PWM1GPEND4_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND4_R_NVIC_PWM1GEN1_MASK      (0x00000080)
#define NVIC_PEND4_R_NVIC_PWM1GEN1_BIT       (7)
#define NVIC_PEND4_R_NVIC_PWM1GEN1_DIS       (0x00000000)
#define NVIC_PEND4_R_NVIC_PWM1GEN1_EN        (0x00000080)

#define NVIC_PEND4_NVIC_PWM1GEN1_MASK      (0x00000001)
#define NVIC_PEND4_NVIC_PWM1GEN1_DIS       (0x00000000)
#define NVIC_PEND4_NVIC_PWM1GEN1_EN        (0x00000001)
//--------

//--------
#define NVIC_PEND4_R_NVIC_PWM1GEN2_MASK      (0x00000100)
#define NVIC_PEND4_R_NVIC_PWM1GEN2_BIT       (8)
#define NVIC_PEND4_R_NVIC_PWM1GEN2_DIS       (0x00000000)
#define NVIC_PEND4_R_NVIC_PWM1GEN2_EN        (0x00000100)

#define NVIC_PEND4_NVIC_PWM1GEN2_MASK      (0x00000001)
#define NVIC_PEND4_NVIC_PWM1GEN2_DIS       (0x00000000)
#define NVIC_PEND4_NVIC_PWM1GEN2_EN        (0x00000001)
//--------


//--------
#define NVIC_PEND4_R_NVIC_PWM1GEN3_MASK      (0x00000200)
#define NVIC_PEND4_R_NVIC_PWM1GEN3_BIT       (9)
#define NVIC_PEND4_R_NVIC_PWM1GEN3_DIS       (0x00000000)
#define NVIC_PEND4_R_NVIC_PWM1GEN3_EN        (0x00000200)

#define NVIC_PEND4_NVIC_PWM1GEN3_MASK      (0x00000001)
#define NVIC_PEND4_NVIC_PWM1GEN3_DIS       (0x00000000)
#define NVIC_PEND4_NVIC_PWM1GEN3_EN        (0x00000001)
//--------


//--------
#define NVIC_PEND4_R_NVIC_PWM1FAULT_MASK      (0x00000400)
#define NVIC_PEND4_R_NVIC_PWM1FAULT_BIT       (10)
#define NVIC_PEND4_R_NVIC_PWM1FAULT_DIS       (0x00000000)
#define NVIC_PEND4_R_NVIC_PWM1FAULT_EN        (0x00000400)

#define NVIC_PEND4_NVIC_PWM1FAULT_MASK      (0x00000001)
#define NVIC_PEND4_NVIC_PWM1FAULT_DIS       (0x00000000)
#define NVIC_PEND4_NVIC_PWM1FAULT_EN        (0x00000001)
//--------

//ToDO UNPEND4
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// UNPEND4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define NVIC_UNPEND4        (((NVIC4_TypeDef*)(NVIC_BASE+NVIC_UNUNPEND4_OFFSET)))
#define NVIC_UNPEND4_R      (*((volatile uint32_t *)(NVIC_BASE+NVIC_UNUNPEND4_OFFSET)))


//--------
#define NVIC_UNPEND4_R_NVIC_PWM1GUNPEND4_MASK      (0x00000040)
#define NVIC_UNPEND4_R_NVIC_PWM1GUNPEND4_BIT       (6)
#define NVIC_UNPEND4_R_NVIC_PWM1GUNPEND4_DIS       (0x00000000)
#define NVIC_UNPEND4_R_NVIC_PWM1GUNPEND4_EN        (0x00000040)

#define NVIC_UNPEND4_NVIC_PWM1GUNPEND4_MASK      (0x00000001)
#define NVIC_UNPEND4_NVIC_PWM1GUNPEND4_DIS       (0x00000000)
#define NVIC_UNPEND4_NVIC_PWM1GUNPEND4_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND4_R_NVIC_PWM1GEN1_MASK      (0x00000080)
#define NVIC_UNPEND4_R_NVIC_PWM1GEN1_BIT       (7)
#define NVIC_UNPEND4_R_NVIC_PWM1GEN1_DIS       (0x00000000)
#define NVIC_UNPEND4_R_NVIC_PWM1GEN1_EN        (0x00000080)

#define NVIC_UNPEND4_NVIC_PWM1GEN1_MASK      (0x00000001)
#define NVIC_UNPEND4_NVIC_PWM1GEN1_DIS       (0x00000000)
#define NVIC_UNPEND4_NVIC_PWM1GEN1_EN        (0x00000001)
//--------

//--------
#define NVIC_UNPEND4_R_NVIC_PWM1GEN2_MASK      (0x00000100)
#define NVIC_UNPEND4_R_NVIC_PWM1GEN2_BIT       (8)
#define NVIC_UNPEND4_R_NVIC_PWM1GEN2_DIS       (0x00000000)
#define NVIC_UNPEND4_R_NVIC_PWM1GEN2_EN        (0x00000100)

#define NVIC_UNPEND4_NVIC_PWM1GEN2_MASK      (0x00000001)
#define NVIC_UNPEND4_NVIC_PWM1GEN2_DIS       (0x00000000)
#define NVIC_UNPEND4_NVIC_PWM1GEN2_EN        (0x00000001)
//--------


//--------
#define NVIC_UNPEND4_R_NVIC_PWM1GEN3_MASK      (0x00000200)
#define NVIC_UNPEND4_R_NVIC_PWM1GEN3_BIT       (9)
#define NVIC_UNPEND4_R_NVIC_PWM1GEN3_DIS       (0x00000000)
#define NVIC_UNPEND4_R_NVIC_PWM1GEN3_EN        (0x00000200)

#define NVIC_UNPEND4_NVIC_PWM1GEN3_MASK      (0x00000001)
#define NVIC_UNPEND4_NVIC_PWM1GEN3_DIS       (0x00000000)
#define NVIC_UNPEND4_NVIC_PWM1GEN3_EN        (0x00000001)
//--------


//--------
#define NVIC_UNPEND4_R_NVIC_PWM1FAULT_MASK      (0x00000400)
#define NVIC_UNPEND4_R_NVIC_PWM1FAULT_BIT       (10)
#define NVIC_UNPEND4_R_NVIC_PWM1FAULT_DIS       (0x00000000)
#define NVIC_UNPEND4_R_NVIC_PWM1FAULT_EN        (0x00000400)

#define NVIC_UNPEND4_NVIC_PWM1FAULT_MASK      (0x00000001)
#define NVIC_UNPEND4_NVIC_PWM1FAULT_DIS       (0x00000000)
#define NVIC_UNPEND4_NVIC_PWM1FAULT_EN        (0x00000001)
//--------



//ToDO ACTIVE4
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ACTIVE4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


#define NVIC_ACTIVE4        (((NVIC4_TypeDef*)(NVIC_BASE+NVIC_ACTIVE4_OFFSET)))
#define NVIC_ACTIVE4_R      (*((volatile uint32_t *)(NVIC_BASE+NVIC_ACTIVE4_OFFSET)))


//--------
#define NVIC_ACTIVE4_R_NVIC_PWM1GACTIVE4_MASK      (0x00000040)
#define NVIC_ACTIVE4_R_NVIC_PWM1GACTIVE4_BIT       (6)
#define NVIC_ACTIVE4_R_NVIC_PWM1GACTIVE4_DIS       (0x00000000)
#define NVIC_ACTIVE4_R_NVIC_PWM1GACTIVE4_EN        (0x00000040)

#define NVIC_ACTIVE4_NVIC_PWM1GACTIVE4_MASK      (0x00000001)
#define NVIC_ACTIVE4_NVIC_PWM1GACTIVE4_DIS       (0x00000000)
#define NVIC_ACTIVE4_NVIC_PWM1GACTIVE4_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE4_R_NVIC_PWM1GEN1_MASK      (0x00000080)
#define NVIC_ACTIVE4_R_NVIC_PWM1GEN1_BIT       (7)
#define NVIC_ACTIVE4_R_NVIC_PWM1GEN1_DIS       (0x00000000)
#define NVIC_ACTIVE4_R_NVIC_PWM1GEN1_EN        (0x00000080)

#define NVIC_ACTIVE4_NVIC_PWM1GEN1_MASK      (0x00000001)
#define NVIC_ACTIVE4_NVIC_PWM1GEN1_DIS       (0x00000000)
#define NVIC_ACTIVE4_NVIC_PWM1GEN1_EN        (0x00000001)
//--------

//--------
#define NVIC_ACTIVE4_R_NVIC_PWM1GEN2_MASK      (0x00000100)
#define NVIC_ACTIVE4_R_NVIC_PWM1GEN2_BIT       (8)
#define NVIC_ACTIVE4_R_NVIC_PWM1GEN2_DIS       (0x00000000)
#define NVIC_ACTIVE4_R_NVIC_PWM1GEN2_EN        (0x00000100)

#define NVIC_ACTIVE4_NVIC_PWM1GEN2_MASK      (0x00000001)
#define NVIC_ACTIVE4_NVIC_PWM1GEN2_DIS       (0x00000000)
#define NVIC_ACTIVE4_NVIC_PWM1GEN2_EN        (0x00000001)
//--------


//--------
#define NVIC_ACTIVE4_R_NVIC_PWM1GEN3_MASK      (0x00000200)
#define NVIC_ACTIVE4_R_NVIC_PWM1GEN3_BIT       (9)
#define NVIC_ACTIVE4_R_NVIC_PWM1GEN3_DIS       (0x00000000)
#define NVIC_ACTIVE4_R_NVIC_PWM1GEN3_EN        (0x00000200)

#define NVIC_ACTIVE4_NVIC_PWM1GEN3_MASK      (0x00000001)
#define NVIC_ACTIVE4_NVIC_PWM1GEN3_DIS       (0x00000000)
#define NVIC_ACTIVE4_NVIC_PWM1GEN3_EN        (0x00000001)
//--------


//--------
#define NVIC_ACTIVE4_R_NVIC_PWM1FAULT_MASK      (0x00000400)
#define NVIC_ACTIVE4_R_NVIC_PWM1FAULT_BIT       (10)
#define NVIC_ACTIVE4_R_NVIC_PWM1FAULT_DIS       (0x00000000)
#define NVIC_ACTIVE4_R_NVIC_PWM1FAULT_EN        (0x00000400)

#define NVIC_ACTIVE4_NVIC_PWM1FAULT_MASK      (0x00000001)
#define NVIC_ACTIVE4_NVIC_PWM1FAULT_DIS       (0x00000000)
#define NVIC_ACTIVE4_NVIC_PWM1FAULT_EN        (0x00000001)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////


#define NVIC_PRI            (((PRI_TypeDef*)(NVIC_BASE+NVIC_PRI0_OFFSET)))
#define NVIC__PRI            (((PRI___TypeDef*)(NVIC_BASE+NVIC_PRI0_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI0 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI0            (((PRI0_TypeDef*)(NVIC_BASE+NVIC_PRI0_OFFSET)))
#define NVIC_PRI0_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI0_OFFSET)))


//--------
#define NVIC_PRI0_R_NVIC_GPIOA_MASK      (0x000000E0)
#define NVIC_PRI0_R_NVIC_GPIOA_BIT       (5)
#define NVIC_PRI0_R_NVIC_GPIOA_PRI0      (0x00000000)
#define NVIC_PRI0_R_NVIC_GPIOA_PRI1      (0x00000020)
#define NVIC_PRI0_R_NVIC_GPIOA_PRI2      (0x00000040)
#define NVIC_PRI0_R_NVIC_GPIOA_PRI3      (0x00000060)
#define NVIC_PRI0_R_NVIC_GPIOA_PRI4      (0x00000080)
#define NVIC_PRI0_R_NVIC_GPIOA_PRI5      (0x000000A0)
#define NVIC_PRI0_R_NVIC_GPIOA_PRI6      (0x000000C0)
#define NVIC_PRI0_R_NVIC_GPIOA_PRI7      (0x000000E0)

#define NVIC_PRI0_NVIC_GPIOA_MASK      (0x00000007)
#define NVIC_PRI0_NVIC_GPIOA_PRI0      (0x00000000)
#define NVIC_PRI0_NVIC_GPIOA_PRI1      (0x00000001)
#define NVIC_PRI0_NVIC_GPIOA_PRI2      (0x00000002)
#define NVIC_PRI0_NVIC_GPIOA_PRI3      (0x00000003)
#define NVIC_PRI0_NVIC_GPIOA_PRI4      (0x00000004)
#define NVIC_PRI0_NVIC_GPIOA_PRI5      (0x00000005)
#define NVIC_PRI0_NVIC_GPIOA_PRI6      (0x00000006)
#define NVIC_PRI0_NVIC_GPIOA_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI0_R_NVIC_GPIOB_MASK      (0x0000E000)
#define NVIC_PRI0_R_NVIC_GPIOB_BIT       (13)
#define NVIC_PRI0_R_NVIC_GPIOB_PRI0      (0x00000000)
#define NVIC_PRI0_R_NVIC_GPIOB_PRI1      (0x00002000)
#define NVIC_PRI0_R_NVIC_GPIOB_PRI2      (0x00004000)
#define NVIC_PRI0_R_NVIC_GPIOB_PRI3      (0x00006000)
#define NVIC_PRI0_R_NVIC_GPIOB_PRI4      (0x00008000)
#define NVIC_PRI0_R_NVIC_GPIOB_PRI5      (0x0000A000)
#define NVIC_PRI0_R_NVIC_GPIOB_PRI6      (0x0000C000)
#define NVIC_PRI0_R_NVIC_GPIOB_PRI7      (0x0000E000)

#define NVIC_PRI0_NVIC_GPIOB_MASK      (0x00000007)
#define NVIC_PRI0_NVIC_GPIOB_PRI0      (0x00000000)
#define NVIC_PRI0_NVIC_GPIOB_PRI1      (0x00000001)
#define NVIC_PRI0_NVIC_GPIOB_PRI2      (0x00000002)
#define NVIC_PRI0_NVIC_GPIOB_PRI3      (0x00000003)
#define NVIC_PRI0_NVIC_GPIOB_PRI4      (0x00000004)
#define NVIC_PRI0_NVIC_GPIOB_PRI5      (0x00000005)
#define NVIC_PRI0_NVIC_GPIOB_PRI6      (0x00000006)
#define NVIC_PRI0_NVIC_GPIOB_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI0_R_NVIC_GPIOC_MASK      (0x00E00000)
#define NVIC_PRI0_R_NVIC_GPIOC_BIT       (21)
#define NVIC_PRI0_R_NVIC_GPIOC_PRI0      (0x00000000)
#define NVIC_PRI0_R_NVIC_GPIOC_PRI1      (0x00200000)
#define NVIC_PRI0_R_NVIC_GPIOC_PRI2      (0x00400000)
#define NVIC_PRI0_R_NVIC_GPIOC_PRI3      (0x00600000)
#define NVIC_PRI0_R_NVIC_GPIOC_PRI4      (0x00800000)
#define NVIC_PRI0_R_NVIC_GPIOC_PRI5      (0x00A00000)
#define NVIC_PRI0_R_NVIC_GPIOC_PRI6      (0x00C00000)
#define NVIC_PRI0_R_NVIC_GPIOC_PRI7      (0x00E00000)

#define NVIC_PRI0_NVIC_GPIOC_MASK      (0x00000007)
#define NVIC_PRI0_NVIC_GPIOC_PRI0      (0x00000000)
#define NVIC_PRI0_NVIC_GPIOC_PRI1      (0x00000001)
#define NVIC_PRI0_NVIC_GPIOC_PRI2      (0x00000002)
#define NVIC_PRI0_NVIC_GPIOC_PRI3      (0x00000003)
#define NVIC_PRI0_NVIC_GPIOC_PRI4      (0x00000004)
#define NVIC_PRI0_NVIC_GPIOC_PRI5      (0x00000005)
#define NVIC_PRI0_NVIC_GPIOC_PRI6      (0x00000006)
#define NVIC_PRI0_NVIC_GPIOC_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI0_R_NVIC_GPIOD_MASK      (0xE0000000)
#define NVIC_PRI0_R_NVIC_GPIOD_BIT       (29)
#define NVIC_PRI0_R_NVIC_GPIOD_PRI0      (0x00000000)
#define NVIC_PRI0_R_NVIC_GPIOD_PRI1      (0x20000000)
#define NVIC_PRI0_R_NVIC_GPIOD_PRI2      (0x40000000)
#define NVIC_PRI0_R_NVIC_GPIOD_PRI3      (0x60000000)
#define NVIC_PRI0_R_NVIC_GPIOD_PRI4      (0x80000000)
#define NVIC_PRI0_R_NVIC_GPIOD_PRI5      (0xA0000000)
#define NVIC_PRI0_R_NVIC_GPIOD_PRI6      (0xC0000000)
#define NVIC_PRI0_R_NVIC_GPIOD_PRI7      (0xE0000000)

#define NVIC_PRI0_NVIC_GPIOD_MASK      (0x00000007)
#define NVIC_PRI0_NVIC_GPIOD_PRI0      (0x00000000)
#define NVIC_PRI0_NVIC_GPIOD_PRI1      (0x00000001)
#define NVIC_PRI0_NVIC_GPIOD_PRI2      (0x00000002)
#define NVIC_PRI0_NVIC_GPIOD_PRI3      (0x00000003)
#define NVIC_PRI0_NVIC_GPIOD_PRI4      (0x00000004)
#define NVIC_PRI0_NVIC_GPIOD_PRI5      (0x00000005)
#define NVIC_PRI0_NVIC_GPIOD_PRI6      (0x00000006)
#define NVIC_PRI0_NVIC_GPIOD_PRI7      (0x00000007)
//--------




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI1 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI1            (((PRI1_TypeDef*)(NVIC_BASE+NVIC_PRI1_OFFSET)))
#define NVIC_PRI1_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI1_OFFSET)))


//--------
#define NVIC_PRI1_R_NVIC_GPIOE_MASK      (0x000000E0)
#define NVIC_PRI1_R_NVIC_GPIOE_BIT       (5)
#define NVIC_PRI1_R_NVIC_GPIOE_PRI0      (0x00000000)
#define NVIC_PRI1_R_NVIC_GPIOE_PRI1      (0x00000020)
#define NVIC_PRI1_R_NVIC_GPIOE_PRI2      (0x00000040)
#define NVIC_PRI1_R_NVIC_GPIOE_PRI3      (0x00000060)
#define NVIC_PRI1_R_NVIC_GPIOE_PRI4      (0x00000080)
#define NVIC_PRI1_R_NVIC_GPIOE_PRI5      (0x000000A0)
#define NVIC_PRI1_R_NVIC_GPIOE_PRI6      (0x000000C0)
#define NVIC_PRI1_R_NVIC_GPIOE_PRI7      (0x000000E0)

#define NVIC_PRI1_NVIC_GPIOE_MASK      (0x00000007)
#define NVIC_PRI1_NVIC_GPIOE_PRI0      (0x00000000)
#define NVIC_PRI1_NVIC_GPIOE_PRI1      (0x00000001)
#define NVIC_PRI1_NVIC_GPIOE_PRI2      (0x00000002)
#define NVIC_PRI1_NVIC_GPIOE_PRI3      (0x00000003)
#define NVIC_PRI1_NVIC_GPIOE_PRI4      (0x00000004)
#define NVIC_PRI1_NVIC_GPIOE_PRI5      (0x00000005)
#define NVIC_PRI1_NVIC_GPIOE_PRI6      (0x00000006)
#define NVIC_PRI1_NVIC_GPIOE_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI1_R_NVIC_UART0_MASK      (0x0000E000)
#define NVIC_PRI1_R_NVIC_UART0_BIT       (13)
#define NVIC_PRI1_R_NVIC_UART0_PRI0      (0x00000000)
#define NVIC_PRI1_R_NVIC_UART0_PRI1      (0x00002000)
#define NVIC_PRI1_R_NVIC_UART0_PRI2      (0x00004000)
#define NVIC_PRI1_R_NVIC_UART0_PRI3      (0x00006000)
#define NVIC_PRI1_R_NVIC_UART0_PRI4      (0x00008000)
#define NVIC_PRI1_R_NVIC_UART0_PRI5      (0x0000A000)
#define NVIC_PRI1_R_NVIC_UART0_PRI6      (0x0000C000)
#define NVIC_PRI1_R_NVIC_UART0_PRI7      (0x0000E000)

#define NVIC_PRI1_NVIC_UART0_MASK      (0x00000007)
#define NVIC_PRI1_NVIC_UART0_PRI0      (0x00000000)
#define NVIC_PRI1_NVIC_UART0_PRI1      (0x00000001)
#define NVIC_PRI1_NVIC_UART0_PRI2      (0x00000002)
#define NVIC_PRI1_NVIC_UART0_PRI3      (0x00000003)
#define NVIC_PRI1_NVIC_UART0_PRI4      (0x00000004)
#define NVIC_PRI1_NVIC_UART0_PRI5      (0x00000005)
#define NVIC_PRI1_NVIC_UART0_PRI6      (0x00000006)
#define NVIC_PRI1_NVIC_UART0_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI1_R_NVIC_UART1_MASK      (0x00E00000)
#define NVIC_PRI1_R_NVIC_UART1_BIT       (21)
#define NVIC_PRI1_R_NVIC_UART1_PRI0      (0x00000000)
#define NVIC_PRI1_R_NVIC_UART1_PRI1      (0x00200000)
#define NVIC_PRI1_R_NVIC_UART1_PRI2      (0x00400000)
#define NVIC_PRI1_R_NVIC_UART1_PRI3      (0x00600000)
#define NVIC_PRI1_R_NVIC_UART1_PRI4      (0x00800000)
#define NVIC_PRI1_R_NVIC_UART1_PRI5      (0x00A00000)
#define NVIC_PRI1_R_NVIC_UART1_PRI6      (0x00C00000)
#define NVIC_PRI1_R_NVIC_UART1_PRI7      (0x00E00000)

#define NVIC_PRI1_NVIC_UART1_MASK      (0x00000007)
#define NVIC_PRI1_NVIC_UART1_PRI0      (0x00000000)
#define NVIC_PRI1_NVIC_UART1_PRI1      (0x00000001)
#define NVIC_PRI1_NVIC_UART1_PRI2      (0x00000002)
#define NVIC_PRI1_NVIC_UART1_PRI3      (0x00000003)
#define NVIC_PRI1_NVIC_UART1_PRI4      (0x00000004)
#define NVIC_PRI1_NVIC_UART1_PRI5      (0x00000005)
#define NVIC_PRI1_NVIC_UART1_PRI6      (0x00000006)
#define NVIC_PRI1_NVIC_UART1_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI1_R_NVIC_SSI0_MASK      (0xE0000000)
#define NVIC_PRI1_R_NVIC_SSI0_BIT       (29)
#define NVIC_PRI1_R_NVIC_SSI0_PRI0      (0x00000000)
#define NVIC_PRI1_R_NVIC_SSI0_PRI1      (0x20000000)
#define NVIC_PRI1_R_NVIC_SSI0_PRI2      (0x40000000)
#define NVIC_PRI1_R_NVIC_SSI0_PRI3      (0x60000000)
#define NVIC_PRI1_R_NVIC_SSI0_PRI4      (0x80000000)
#define NVIC_PRI1_R_NVIC_SSI0_PRI5      (0xA0000000)
#define NVIC_PRI1_R_NVIC_SSI0_PRI6      (0xC0000000)
#define NVIC_PRI1_R_NVIC_SSI0_PRI7      (0xE0000000)

#define NVIC_PRI1_NVIC_SSI0_MASK      (0x00000007)
#define NVIC_PRI1_NVIC_SSI0_PRI0      (0x00000000)
#define NVIC_PRI1_NVIC_SSI0_PRI1      (0x00000001)
#define NVIC_PRI1_NVIC_SSI0_PRI2      (0x00000002)
#define NVIC_PRI1_NVIC_SSI0_PRI3      (0x00000003)
#define NVIC_PRI1_NVIC_SSI0_PRI4      (0x00000004)
#define NVIC_PRI1_NVIC_SSI0_PRI5      (0x00000005)
#define NVIC_PRI1_NVIC_SSI0_PRI6      (0x00000006)
#define NVIC_PRI1_NVIC_SSI0_PRI7      (0x00000007)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI2 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI2            (((PRI2_TypeDef*)(NVIC_BASE+NVIC_PRI2_OFFSET)))
#define NVIC_PRI2_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI2_OFFSET)))


//--------
#define NVIC_PRI2_R_NVIC_I2C0_MASK      (0x000000E0)
#define NVIC_PRI2_R_NVIC_I2C0_BIT       (5)
#define NVIC_PRI2_R_NVIC_I2C0_PRI0      (0x00000000)
#define NVIC_PRI2_R_NVIC_I2C0_PRI1      (0x00000020)
#define NVIC_PRI2_R_NVIC_I2C0_PRI2      (0x00000040)
#define NVIC_PRI2_R_NVIC_I2C0_PRI3      (0x00000060)
#define NVIC_PRI2_R_NVIC_I2C0_PRI4      (0x00000080)
#define NVIC_PRI2_R_NVIC_I2C0_PRI5      (0x000000A0)
#define NVIC_PRI2_R_NVIC_I2C0_PRI6      (0x000000C0)
#define NVIC_PRI2_R_NVIC_I2C0_PRI7      (0x000000E0)

#define NVIC_PRI2_NVIC_I2C0_MASK      (0x00000007)
#define NVIC_PRI2_NVIC_I2C0_PRI0      (0x00000000)
#define NVIC_PRI2_NVIC_I2C0_PRI1      (0x00000001)
#define NVIC_PRI2_NVIC_I2C0_PRI2      (0x00000002)
#define NVIC_PRI2_NVIC_I2C0_PRI3      (0x00000003)
#define NVIC_PRI2_NVIC_I2C0_PRI4      (0x00000004)
#define NVIC_PRI2_NVIC_I2C0_PRI5      (0x00000005)
#define NVIC_PRI2_NVIC_I2C0_PRI6      (0x00000006)
#define NVIC_PRI2_NVIC_I2C0_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI2_R_NVIC_PWM0FAULT_MASK      (0x0000E000)
#define NVIC_PRI2_R_NVIC_PWM0FAULT_BIT       (13)
#define NVIC_PRI2_R_NVIC_PWM0FAULT_PRI0      (0x00000000)
#define NVIC_PRI2_R_NVIC_PWM0FAULT_PRI1      (0x00002000)
#define NVIC_PRI2_R_NVIC_PWM0FAULT_PRI2      (0x00004000)
#define NVIC_PRI2_R_NVIC_PWM0FAULT_PRI3      (0x00006000)
#define NVIC_PRI2_R_NVIC_PWM0FAULT_PRI4      (0x00008000)
#define NVIC_PRI2_R_NVIC_PWM0FAULT_PRI5      (0x0000A000)
#define NVIC_PRI2_R_NVIC_PWM0FAULT_PRI6      (0x0000C000)
#define NVIC_PRI2_R_NVIC_PWM0FAULT_PRI7      (0x0000E000)

#define NVIC_PRI2_NVIC_PWM0FAULT_MASK      (0x00000007)
#define NVIC_PRI2_NVIC_PWM0FAULT_PRI0      (0x00000000)
#define NVIC_PRI2_NVIC_PWM0FAULT_PRI1      (0x00000001)
#define NVIC_PRI2_NVIC_PWM0FAULT_PRI2      (0x00000002)
#define NVIC_PRI2_NVIC_PWM0FAULT_PRI3      (0x00000003)
#define NVIC_PRI2_NVIC_PWM0FAULT_PRI4      (0x00000004)
#define NVIC_PRI2_NVIC_PWM0FAULT_PRI5      (0x00000005)
#define NVIC_PRI2_NVIC_PWM0FAULT_PRI6      (0x00000006)
#define NVIC_PRI2_NVIC_PWM0FAULT_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI2_R_NVIC_PWM0GEN0_MASK      (0x00E00000)
#define NVIC_PRI2_R_NVIC_PWM0GEN0_BIT       (21)
#define NVIC_PRI2_R_NVIC_PWM0GEN0_PRI0      (0x00000000)
#define NVIC_PRI2_R_NVIC_PWM0GEN0_PRI1      (0x00200000)
#define NVIC_PRI2_R_NVIC_PWM0GEN0_PRI2      (0x00400000)
#define NVIC_PRI2_R_NVIC_PWM0GEN0_PRI3      (0x00600000)
#define NVIC_PRI2_R_NVIC_PWM0GEN0_PRI4      (0x00800000)
#define NVIC_PRI2_R_NVIC_PWM0GEN0_PRI5      (0x00A00000)
#define NVIC_PRI2_R_NVIC_PWM0GEN0_PRI6      (0x00C00000)
#define NVIC_PRI2_R_NVIC_PWM0GEN0_PRI7      (0x00E00000)

#define NVIC_PRI2_NVIC_PWM0GEN0_MASK      (0x00000007)
#define NVIC_PRI2_NVIC_PWM0GEN0_PRI0      (0x00000000)
#define NVIC_PRI2_NVIC_PWM0GEN0_PRI1      (0x00000001)
#define NVIC_PRI2_NVIC_PWM0GEN0_PRI2      (0x00000002)
#define NVIC_PRI2_NVIC_PWM0GEN0_PRI3      (0x00000003)
#define NVIC_PRI2_NVIC_PWM0GEN0_PRI4      (0x00000004)
#define NVIC_PRI2_NVIC_PWM0GEN0_PRI5      (0x00000005)
#define NVIC_PRI2_NVIC_PWM0GEN0_PRI6      (0x00000006)
#define NVIC_PRI2_NVIC_PWM0GEN0_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI2_R_NVIC_PWM0GEN1_MASK      (0xE0000000)
#define NVIC_PRI2_R_NVIC_PWM0GEN1_BIT       (29)
#define NVIC_PRI2_R_NVIC_PWM0GEN1_PRI0      (0x00000000)
#define NVIC_PRI2_R_NVIC_PWM0GEN1_PRI1      (0x20000000)
#define NVIC_PRI2_R_NVIC_PWM0GEN1_PRI2      (0x40000000)
#define NVIC_PRI2_R_NVIC_PWM0GEN1_PRI3      (0x60000000)
#define NVIC_PRI2_R_NVIC_PWM0GEN1_PRI4      (0x80000000)
#define NVIC_PRI2_R_NVIC_PWM0GEN1_PRI5      (0xA0000000)
#define NVIC_PRI2_R_NVIC_PWM0GEN1_PRI6      (0xC0000000)
#define NVIC_PRI2_R_NVIC_PWM0GEN1_PRI7      (0xE0000000)

#define NVIC_PRI2_NVIC_PWM0GEN1_MASK      (0x00000007)
#define NVIC_PRI2_NVIC_PWM0GEN1_PRI0      (0x00000000)
#define NVIC_PRI2_NVIC_PWM0GEN1_PRI1      (0x00000001)
#define NVIC_PRI2_NVIC_PWM0GEN1_PRI2      (0x00000002)
#define NVIC_PRI2_NVIC_PWM0GEN1_PRI3      (0x00000003)
#define NVIC_PRI2_NVIC_PWM0GEN1_PRI4      (0x00000004)
#define NVIC_PRI2_NVIC_PWM0GEN1_PRI5      (0x00000005)
#define NVIC_PRI2_NVIC_PWM0GEN1_PRI6      (0x00000006)
#define NVIC_PRI2_NVIC_PWM0GEN1_PRI7      (0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI3 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI3            (((PRI3_TypeDef*)(NVIC_BASE+NVIC_PRI3_OFFSET)))
#define NVIC_PRI3_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI3_OFFSET)))


//--------
#define NVIC_PRI3_R_NVIC_PWM0GEN2_MASK      (0x000000E0)
#define NVIC_PRI3_R_NVIC_PWM0GEN2_BIT       (5)
#define NVIC_PRI3_R_NVIC_PWM0GEN2_PRI0      (0x00000000)
#define NVIC_PRI3_R_NVIC_PWM0GEN2_PRI1      (0x00000020)
#define NVIC_PRI3_R_NVIC_PWM0GEN2_PRI2      (0x00000040)
#define NVIC_PRI3_R_NVIC_PWM0GEN2_PRI3      (0x00000060)
#define NVIC_PRI3_R_NVIC_PWM0GEN2_PRI4      (0x00000080)
#define NVIC_PRI3_R_NVIC_PWM0GEN2_PRI5      (0x000000A0)
#define NVIC_PRI3_R_NVIC_PWM0GEN2_PRI6      (0x000000C0)
#define NVIC_PRI3_R_NVIC_PWM0GEN2_PRI7      (0x000000E0)

#define NVIC_PRI3_NVIC_PWM0GEN2_MASK      (0x00000007)
#define NVIC_PRI3_NVIC_PWM0GEN2_PRI0      (0x00000000)
#define NVIC_PRI3_NVIC_PWM0GEN2_PRI1      (0x00000001)
#define NVIC_PRI3_NVIC_PWM0GEN2_PRI2      (0x00000002)
#define NVIC_PRI3_NVIC_PWM0GEN2_PRI3      (0x00000003)
#define NVIC_PRI3_NVIC_PWM0GEN2_PRI4      (0x00000004)
#define NVIC_PRI3_NVIC_PWM0GEN2_PRI5      (0x00000005)
#define NVIC_PRI3_NVIC_PWM0GEN2_PRI6      (0x00000006)
#define NVIC_PRI3_NVIC_PWM0GEN2_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI3_R_NVIC_QEI0_MASK      (0x0000E000)
#define NVIC_PRI3_R_NVIC_QEI0_BIT       (13)
#define NVIC_PRI3_R_NVIC_QEI0_PRI0      (0x00000000)
#define NVIC_PRI3_R_NVIC_QEI0_PRI1      (0x00002000)
#define NVIC_PRI3_R_NVIC_QEI0_PRI2      (0x00004000)
#define NVIC_PRI3_R_NVIC_QEI0_PRI3      (0x00006000)
#define NVIC_PRI3_R_NVIC_QEI0_PRI4      (0x00008000)
#define NVIC_PRI3_R_NVIC_QEI0_PRI5      (0x0000A000)
#define NVIC_PRI3_R_NVIC_QEI0_PRI6      (0x0000C000)
#define NVIC_PRI3_R_NVIC_QEI0_PRI7      (0x0000E000)

#define NVIC_PRI3_NVIC_QEI0_MASK      (0x00000007)
#define NVIC_PRI3_NVIC_QEI0_PRI0      (0x00000000)
#define NVIC_PRI3_NVIC_QEI0_PRI1      (0x00000001)
#define NVIC_PRI3_NVIC_QEI0_PRI2      (0x00000002)
#define NVIC_PRI3_NVIC_QEI0_PRI3      (0x00000003)
#define NVIC_PRI3_NVIC_QEI0_PRI4      (0x00000004)
#define NVIC_PRI3_NVIC_QEI0_PRI5      (0x00000005)
#define NVIC_PRI3_NVIC_QEI0_PRI6      (0x00000006)
#define NVIC_PRI3_NVIC_QEI0_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI3_R_NVIC_ADC0SEQ0_MASK      (0x00E00000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ0_BIT       (21)
#define NVIC_PRI3_R_NVIC_ADC0SEQ0_PRI0      (0x00000000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ0_PRI1      (0x00200000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ0_PRI2      (0x00400000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ0_PRI3      (0x00600000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ0_PRI4      (0x00800000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ0_PRI5      (0x00A00000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ0_PRI6      (0x00C00000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ0_PRI7      (0x00E00000)

#define NVIC_PRI3_NVIC_ADC0SEQ0_MASK      (0x00000007)
#define NVIC_PRI3_NVIC_ADC0SEQ0_PRI0      (0x00000000)
#define NVIC_PRI3_NVIC_ADC0SEQ0_PRI1      (0x00000001)
#define NVIC_PRI3_NVIC_ADC0SEQ0_PRI2      (0x00000002)
#define NVIC_PRI3_NVIC_ADC0SEQ0_PRI3      (0x00000003)
#define NVIC_PRI3_NVIC_ADC0SEQ0_PRI4      (0x00000004)
#define NVIC_PRI3_NVIC_ADC0SEQ0_PRI5      (0x00000005)
#define NVIC_PRI3_NVIC_ADC0SEQ0_PRI6      (0x00000006)
#define NVIC_PRI3_NVIC_ADC0SEQ0_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI3_R_NVIC_ADC0SEQ1_MASK      (0xE0000000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ1_BIT       (29)
#define NVIC_PRI3_R_NVIC_ADC0SEQ1_PRI0      (0x00000000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ1_PRI1      (0x20000000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ1_PRI2      (0x40000000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ1_PRI3      (0x60000000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ1_PRI4      (0x80000000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ1_PRI5      (0xA0000000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ1_PRI6      (0xC0000000)
#define NVIC_PRI3_R_NVIC_ADC0SEQ1_PRI7      (0xE0000000)

#define NVIC_PRI3_NVIC_ADC0SEQ1_MASK      (0x00000007)
#define NVIC_PRI3_NVIC_ADC0SEQ1_PRI0      (0x00000000)
#define NVIC_PRI3_NVIC_ADC0SEQ1_PRI1      (0x00000001)
#define NVIC_PRI3_NVIC_ADC0SEQ1_PRI2      (0x00000002)
#define NVIC_PRI3_NVIC_ADC0SEQ1_PRI3      (0x00000003)
#define NVIC_PRI3_NVIC_ADC0SEQ1_PRI4      (0x00000004)
#define NVIC_PRI3_NVIC_ADC0SEQ1_PRI5      (0x00000005)
#define NVIC_PRI3_NVIC_ADC0SEQ1_PRI6      (0x00000006)
#define NVIC_PRI3_NVIC_ADC0SEQ1_PRI7      (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI4 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI4            (((PRI4_TypeDef*)(NVIC_BASE+NVIC_PRI4_OFFSET)))
#define NVIC_PRI4_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI4_OFFSET)))


//--------
#define NVIC_PRI4_R_NVIC_ADC0SEQ2_MASK      (0x000000E0)
#define NVIC_PRI4_R_NVIC_ADC0SEQ2_BIT       (5)
#define NVIC_PRI4_R_NVIC_ADC0SEQ2_PRI0      (0x00000000)
#define NVIC_PRI4_R_NVIC_ADC0SEQ2_PRI1      (0x00000020)
#define NVIC_PRI4_R_NVIC_ADC0SEQ2_PRI2      (0x00000040)
#define NVIC_PRI4_R_NVIC_ADC0SEQ2_PRI3      (0x00000060)
#define NVIC_PRI4_R_NVIC_ADC0SEQ2_PRI4      (0x00000080)
#define NVIC_PRI4_R_NVIC_ADC0SEQ2_PRI5      (0x000000A0)
#define NVIC_PRI4_R_NVIC_ADC0SEQ2_PRI6      (0x000000C0)
#define NVIC_PRI4_R_NVIC_ADC0SEQ2_PRI7      (0x000000E0)

#define NVIC_PRI4_NVIC_ADC0SEQ2_MASK      (0x00000007)
#define NVIC_PRI4_NVIC_ADC0SEQ2_PRI0      (0x00000000)
#define NVIC_PRI4_NVIC_ADC0SEQ2_PRI1      (0x00000001)
#define NVIC_PRI4_NVIC_ADC0SEQ2_PRI2      (0x00000002)
#define NVIC_PRI4_NVIC_ADC0SEQ2_PRI3      (0x00000003)
#define NVIC_PRI4_NVIC_ADC0SEQ2_PRI4      (0x00000004)
#define NVIC_PRI4_NVIC_ADC0SEQ2_PRI5      (0x00000005)
#define NVIC_PRI4_NVIC_ADC0SEQ2_PRI6      (0x00000006)
#define NVIC_PRI4_NVIC_ADC0SEQ2_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI4_R_NVIC_ADC0SEQ3_MASK      (0x0000E000)
#define NVIC_PRI4_R_NVIC_ADC0SEQ3_BIT       (13)
#define NVIC_PRI4_R_NVIC_ADC0SEQ3_PRI0      (0x00000000)
#define NVIC_PRI4_R_NVIC_ADC0SEQ3_PRI1      (0x00002000)
#define NVIC_PRI4_R_NVIC_ADC0SEQ3_PRI2      (0x00004000)
#define NVIC_PRI4_R_NVIC_ADC0SEQ3_PRI3      (0x00006000)
#define NVIC_PRI4_R_NVIC_ADC0SEQ3_PRI4      (0x00008000)
#define NVIC_PRI4_R_NVIC_ADC0SEQ3_PRI5      (0x0000A000)
#define NVIC_PRI4_R_NVIC_ADC0SEQ3_PRI6      (0x0000C000)
#define NVIC_PRI4_R_NVIC_ADC0SEQ3_PRI7      (0x0000E000)

#define NVIC_PRI4_NVIC_ADC0SEQ3_MASK      (0x00000007)
#define NVIC_PRI4_NVIC_ADC0SEQ3_PRI0      (0x00000000)
#define NVIC_PRI4_NVIC_ADC0SEQ3_PRI1      (0x00000001)
#define NVIC_PRI4_NVIC_ADC0SEQ3_PRI2      (0x00000002)
#define NVIC_PRI4_NVIC_ADC0SEQ3_PRI3      (0x00000003)
#define NVIC_PRI4_NVIC_ADC0SEQ3_PRI4      (0x00000004)
#define NVIC_PRI4_NVIC_ADC0SEQ3_PRI5      (0x00000005)
#define NVIC_PRI4_NVIC_ADC0SEQ3_PRI6      (0x00000006)
#define NVIC_PRI4_NVIC_ADC0SEQ3_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI4_R_NVIC_WDT01_MASK      (0x00E00000)
#define NVIC_PRI4_R_NVIC_WDT01_BIT       (21)
#define NVIC_PRI4_R_NVIC_WDT01_PRI0      (0x00000000)
#define NVIC_PRI4_R_NVIC_WDT01_PRI1      (0x00200000)
#define NVIC_PRI4_R_NVIC_WDT01_PRI2      (0x00400000)
#define NVIC_PRI4_R_NVIC_WDT01_PRI3      (0x00600000)
#define NVIC_PRI4_R_NVIC_WDT01_PRI4      (0x00800000)
#define NVIC_PRI4_R_NVIC_WDT01_PRI5      (0x00A00000)
#define NVIC_PRI4_R_NVIC_WDT01_PRI6      (0x00C00000)
#define NVIC_PRI4_R_NVIC_WDT01_PRI7      (0x00E00000)

#define NVIC_PRI4_NVIC_WDT01_MASK      (0x00000007)
#define NVIC_PRI4_NVIC_WDT01_PRI0      (0x00000000)
#define NVIC_PRI4_NVIC_WDT01_PRI1      (0x00000001)
#define NVIC_PRI4_NVIC_WDT01_PRI2      (0x00000002)
#define NVIC_PRI4_NVIC_WDT01_PRI3      (0x00000003)
#define NVIC_PRI4_NVIC_WDT01_PRI4      (0x00000004)
#define NVIC_PRI4_NVIC_WDT01_PRI5      (0x00000005)
#define NVIC_PRI4_NVIC_WDT01_PRI6      (0x00000006)
#define NVIC_PRI4_NVIC_WDT01_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI4_R_NVIC_TIMER0A_MASK      (0xE0000000)
#define NVIC_PRI4_R_NVIC_TIMER0A_BIT       (29)
#define NVIC_PRI4_R_NVIC_TIMER0A_PRI0      (0x00000000)
#define NVIC_PRI4_R_NVIC_TIMER0A_PRI1      (0x20000000)
#define NVIC_PRI4_R_NVIC_TIMER0A_PRI2      (0x40000000)
#define NVIC_PRI4_R_NVIC_TIMER0A_PRI3      (0x60000000)
#define NVIC_PRI4_R_NVIC_TIMER0A_PRI4      (0x80000000)
#define NVIC_PRI4_R_NVIC_TIMER0A_PRI5      (0xA0000000)
#define NVIC_PRI4_R_NVIC_TIMER0A_PRI6      (0xC0000000)
#define NVIC_PRI4_R_NVIC_TIMER0A_PRI7      (0xE0000000)

#define NVIC_PRI4_NVIC_TIMER0A_MASK      (0x00000007)
#define NVIC_PRI4_NVIC_TIMER0A_PRI0      (0x00000000)
#define NVIC_PRI4_NVIC_TIMER0A_PRI1      (0x00000001)
#define NVIC_PRI4_NVIC_TIMER0A_PRI2      (0x00000002)
#define NVIC_PRI4_NVIC_TIMER0A_PRI3      (0x00000003)
#define NVIC_PRI4_NVIC_TIMER0A_PRI4      (0x00000004)
#define NVIC_PRI4_NVIC_TIMER0A_PRI5      (0x00000005)
#define NVIC_PRI4_NVIC_TIMER0A_PRI6      (0x00000006)
#define NVIC_PRI4_NVIC_TIMER0A_PRI7      (0x00000007)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI5 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI5            (((PRI5_TypeDef*)(NVIC_BASE+NVIC_PRI5_OFFSET)))
#define NVIC_PRI5_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI5_OFFSET)))


//--------
#define NVIC_PRI5_R_NVIC_TIMER0B_MASK      (0x000000E0)
#define NVIC_PRI5_R_NVIC_TIMER0B_BIT       (5)
#define NVIC_PRI5_R_NVIC_TIMER0B_PRI0      (0x00000000)
#define NVIC_PRI5_R_NVIC_TIMER0B_PRI1      (0x00000020)
#define NVIC_PRI5_R_NVIC_TIMER0B_PRI2      (0x00000040)
#define NVIC_PRI5_R_NVIC_TIMER0B_PRI3      (0x00000060)
#define NVIC_PRI5_R_NVIC_TIMER0B_PRI4      (0x00000080)
#define NVIC_PRI5_R_NVIC_TIMER0B_PRI5      (0x000000A0)
#define NVIC_PRI5_R_NVIC_TIMER0B_PRI6      (0x000000C0)
#define NVIC_PRI5_R_NVIC_TIMER0B_PRI7      (0x000000E0)

#define NVIC_PRI5_NVIC_TIMER0B_MASK      (0x00000007)
#define NVIC_PRI5_NVIC_TIMER0B_PRI0      (0x00000000)
#define NVIC_PRI5_NVIC_TIMER0B_PRI1      (0x00000001)
#define NVIC_PRI5_NVIC_TIMER0B_PRI2      (0x00000002)
#define NVIC_PRI5_NVIC_TIMER0B_PRI3      (0x00000003)
#define NVIC_PRI5_NVIC_TIMER0B_PRI4      (0x00000004)
#define NVIC_PRI5_NVIC_TIMER0B_PRI5      (0x00000005)
#define NVIC_PRI5_NVIC_TIMER0B_PRI6      (0x00000006)
#define NVIC_PRI5_NVIC_TIMER0B_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI5_R_NVIC_TIMER1A_MASK      (0x0000E000)
#define NVIC_PRI5_R_NVIC_TIMER1A_BIT       (13)
#define NVIC_PRI5_R_NVIC_TIMER1A_PRI0      (0x00000000)
#define NVIC_PRI5_R_NVIC_TIMER1A_PRI1      (0x00002000)
#define NVIC_PRI5_R_NVIC_TIMER1A_PRI2      (0x00004000)
#define NVIC_PRI5_R_NVIC_TIMER1A_PRI3      (0x00006000)
#define NVIC_PRI5_R_NVIC_TIMER1A_PRI4      (0x00008000)
#define NVIC_PRI5_R_NVIC_TIMER1A_PRI5      (0x0000A000)
#define NVIC_PRI5_R_NVIC_TIMER1A_PRI6      (0x0000C000)
#define NVIC_PRI5_R_NVIC_TIMER1A_PRI7      (0x0000E000)

#define NVIC_PRI5_NVIC_TIMER1A_MASK      (0x00000007)
#define NVIC_PRI5_NVIC_TIMER1A_PRI0      (0x00000000)
#define NVIC_PRI5_NVIC_TIMER1A_PRI1      (0x00000001)
#define NVIC_PRI5_NVIC_TIMER1A_PRI2      (0x00000002)
#define NVIC_PRI5_NVIC_TIMER1A_PRI3      (0x00000003)
#define NVIC_PRI5_NVIC_TIMER1A_PRI4      (0x00000004)
#define NVIC_PRI5_NVIC_TIMER1A_PRI5      (0x00000005)
#define NVIC_PRI5_NVIC_TIMER1A_PRI6      (0x00000006)
#define NVIC_PRI5_NVIC_TIMER1A_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI5_R_NVIC_TIMER1B_MASK      (0x00E00000)
#define NVIC_PRI5_R_NVIC_TIMER1B_BIT       (21)
#define NVIC_PRI5_R_NVIC_TIMER1B_PRI0      (0x00000000)
#define NVIC_PRI5_R_NVIC_TIMER1B_PRI1      (0x00200000)
#define NVIC_PRI5_R_NVIC_TIMER1B_PRI2      (0x00400000)
#define NVIC_PRI5_R_NVIC_TIMER1B_PRI3      (0x00600000)
#define NVIC_PRI5_R_NVIC_TIMER1B_PRI4      (0x00800000)
#define NVIC_PRI5_R_NVIC_TIMER1B_PRI5      (0x00A00000)
#define NVIC_PRI5_R_NVIC_TIMER1B_PRI6      (0x00C00000)
#define NVIC_PRI5_R_NVIC_TIMER1B_PRI7      (0x00E00000)

#define NVIC_PRI5_NVIC_TIMER1B_MASK      (0x00000007)
#define NVIC_PRI5_NVIC_TIMER1B_PRI0      (0x00000000)
#define NVIC_PRI5_NVIC_TIMER1B_PRI1      (0x00000001)
#define NVIC_PRI5_NVIC_TIMER1B_PRI2      (0x00000002)
#define NVIC_PRI5_NVIC_TIMER1B_PRI3      (0x00000003)
#define NVIC_PRI5_NVIC_TIMER1B_PRI4      (0x00000004)
#define NVIC_PRI5_NVIC_TIMER1B_PRI5      (0x00000005)
#define NVIC_PRI5_NVIC_TIMER1B_PRI6      (0x00000006)
#define NVIC_PRI5_NVIC_TIMER1B_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI5_R_NVIC_TIMER2A_MASK      (0xE0000000)
#define NVIC_PRI5_R_NVIC_TIMER2A_BIT       (29)
#define NVIC_PRI5_R_NVIC_TIMER2A_PRI0      (0x00000000)
#define NVIC_PRI5_R_NVIC_TIMER2A_PRI1      (0x20000000)
#define NVIC_PRI5_R_NVIC_TIMER2A_PRI2      (0x40000000)
#define NVIC_PRI5_R_NVIC_TIMER2A_PRI3      (0x60000000)
#define NVIC_PRI5_R_NVIC_TIMER2A_PRI4      (0x80000000)
#define NVIC_PRI5_R_NVIC_TIMER2A_PRI5      (0xA0000000)
#define NVIC_PRI5_R_NVIC_TIMER2A_PRI6      (0xC0000000)
#define NVIC_PRI5_R_NVIC_TIMER2A_PRI7      (0xE0000000)

#define NVIC_PRI5_NVIC_TIMER2A_MASK      (0x00000007)
#define NVIC_PRI5_NVIC_TIMER2A_PRI0      (0x00000000)
#define NVIC_PRI5_NVIC_TIMER2A_PRI1      (0x00000001)
#define NVIC_PRI5_NVIC_TIMER2A_PRI2      (0x00000002)
#define NVIC_PRI5_NVIC_TIMER2A_PRI3      (0x00000003)
#define NVIC_PRI5_NVIC_TIMER2A_PRI4      (0x00000004)
#define NVIC_PRI5_NVIC_TIMER2A_PRI5      (0x00000005)
#define NVIC_PRI5_NVIC_TIMER2A_PRI6      (0x00000006)
#define NVIC_PRI5_NVIC_TIMER2A_PRI7      (0x00000007)
//--------




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI6 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI6            (((PRI6_TypeDef*)(NVIC_BASE+NVIC_PRI6_OFFSET)))
#define NVIC_PRI6_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI6_OFFSET)))


//--------
#define NVIC_PRI6_R_NVIC_TIMER2B_MASK      (0x000000E0)
#define NVIC_PRI6_R_NVIC_TIMER2B_BIT       (5)
#define NVIC_PRI6_R_NVIC_TIMER2B_PRI0      (0x00000000)
#define NVIC_PRI6_R_NVIC_TIMER2B_PRI1      (0x00000020)
#define NVIC_PRI6_R_NVIC_TIMER2B_PRI2      (0x00000040)
#define NVIC_PRI6_R_NVIC_TIMER2B_PRI3      (0x00000060)
#define NVIC_PRI6_R_NVIC_TIMER2B_PRI4      (0x00000080)
#define NVIC_PRI6_R_NVIC_TIMER2B_PRI5      (0x000000A0)
#define NVIC_PRI6_R_NVIC_TIMER2B_PRI6      (0x000000C0)
#define NVIC_PRI6_R_NVIC_TIMER2B_PRI7      (0x000000E0)

#define NVIC_PRI6_NVIC_TIMER2B_MASK      (0x00000007)
#define NVIC_PRI6_NVIC_TIMER2B_PRI0      (0x00000000)
#define NVIC_PRI6_NVIC_TIMER2B_PRI1      (0x00000001)
#define NVIC_PRI6_NVIC_TIMER2B_PRI2      (0x00000002)
#define NVIC_PRI6_NVIC_TIMER2B_PRI3      (0x00000003)
#define NVIC_PRI6_NVIC_TIMER2B_PRI4      (0x00000004)
#define NVIC_PRI6_NVIC_TIMER2B_PRI5      (0x00000005)
#define NVIC_PRI6_NVIC_TIMER2B_PRI6      (0x00000006)
#define NVIC_PRI6_NVIC_TIMER2B_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI6_R_NVIC_COMP0_MASK      (0x0000E000)
#define NVIC_PRI6_R_NVIC_COMP0_BIT       (13)
#define NVIC_PRI6_R_NVIC_COMP0_PRI0      (0x00000000)
#define NVIC_PRI6_R_NVIC_COMP0_PRI1      (0x00002000)
#define NVIC_PRI6_R_NVIC_COMP0_PRI2      (0x00004000)
#define NVIC_PRI6_R_NVIC_COMP0_PRI3      (0x00006000)
#define NVIC_PRI6_R_NVIC_COMP0_PRI4      (0x00008000)
#define NVIC_PRI6_R_NVIC_COMP0_PRI5      (0x0000A000)
#define NVIC_PRI6_R_NVIC_COMP0_PRI6      (0x0000C000)
#define NVIC_PRI6_R_NVIC_COMP0_PRI7      (0x0000E000)

#define NVIC_PRI6_NVIC_COMP0_MASK      (0x00000007)
#define NVIC_PRI6_NVIC_COMP0_PRI0      (0x00000000)
#define NVIC_PRI6_NVIC_COMP0_PRI1      (0x00000001)
#define NVIC_PRI6_NVIC_COMP0_PRI2      (0x00000002)
#define NVIC_PRI6_NVIC_COMP0_PRI3      (0x00000003)
#define NVIC_PRI6_NVIC_COMP0_PRI4      (0x00000004)
#define NVIC_PRI6_NVIC_COMP0_PRI5      (0x00000005)
#define NVIC_PRI6_NVIC_COMP0_PRI6      (0x00000006)
#define NVIC_PRI6_NVIC_COMP0_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI6_R_NVIC_COMP1_MASK      (0x00E00000)
#define NVIC_PRI6_R_NVIC_COMP1_BIT       (21)
#define NVIC_PRI6_R_NVIC_COMP1_PRI0      (0x00000000)
#define NVIC_PRI6_R_NVIC_COMP1_PRI1      (0x00200000)
#define NVIC_PRI6_R_NVIC_COMP1_PRI2      (0x00400000)
#define NVIC_PRI6_R_NVIC_COMP1_PRI3      (0x00600000)
#define NVIC_PRI6_R_NVIC_COMP1_PRI4      (0x00800000)
#define NVIC_PRI6_R_NVIC_COMP1_PRI5      (0x00A00000)
#define NVIC_PRI6_R_NVIC_COMP1_PRI6      (0x00C00000)
#define NVIC_PRI6_R_NVIC_COMP1_PRI7      (0x00E00000)

#define NVIC_PRI6_NVIC_COMP1_MASK      (0x00000007)
#define NVIC_PRI6_NVIC_COMP1_PRI0      (0x00000000)
#define NVIC_PRI6_NVIC_COMP1_PRI1      (0x00000001)
#define NVIC_PRI6_NVIC_COMP1_PRI2      (0x00000002)
#define NVIC_PRI6_NVIC_COMP1_PRI3      (0x00000003)
#define NVIC_PRI6_NVIC_COMP1_PRI4      (0x00000004)
#define NVIC_PRI6_NVIC_COMP1_PRI5      (0x00000005)
#define NVIC_PRI6_NVIC_COMP1_PRI6      (0x00000006)
#define NVIC_PRI6_NVIC_COMP1_PRI7      (0x00000007)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI7 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI7            (((PRI7_TypeDef*)(NVIC_BASE+NVIC_PRI7_OFFSET)))
#define NVIC_PRI7_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI7_OFFSET)))


//--------
#define NVIC_PRI7_R_NVIC_SYSCTL_MASK      (0x000000E0)
#define NVIC_PRI7_R_NVIC_SYSCTL_BIT       (5)
#define NVIC_PRI7_R_NVIC_SYSCTL_PRI0      (0x00000000)
#define NVIC_PRI7_R_NVIC_SYSCTL_PRI1      (0x00000020)
#define NVIC_PRI7_R_NVIC_SYSCTL_PRI2      (0x00000040)
#define NVIC_PRI7_R_NVIC_SYSCTL_PRI3      (0x00000060)
#define NVIC_PRI7_R_NVIC_SYSCTL_PRI4      (0x00000080)
#define NVIC_PRI7_R_NVIC_SYSCTL_PRI5      (0x000000A0)
#define NVIC_PRI7_R_NVIC_SYSCTL_PRI6      (0x000000C0)
#define NVIC_PRI7_R_NVIC_SYSCTL_PRI7      (0x000000E0)

#define NVIC_PRI7_NVIC_SYSCTL_MASK      (0x00000007)
#define NVIC_PRI7_NVIC_SYSCTL_PRI0      (0x00000000)
#define NVIC_PRI7_NVIC_SYSCTL_PRI1      (0x00000001)
#define NVIC_PRI7_NVIC_SYSCTL_PRI2      (0x00000002)
#define NVIC_PRI7_NVIC_SYSCTL_PRI3      (0x00000003)
#define NVIC_PRI7_NVIC_SYSCTL_PRI4      (0x00000004)
#define NVIC_PRI7_NVIC_SYSCTL_PRI5      (0x00000005)
#define NVIC_PRI7_NVIC_SYSCTL_PRI6      (0x00000006)
#define NVIC_PRI7_NVIC_SYSCTL_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI7_R_NVIC_FLASH_MASK      (0x0000E000)
#define NVIC_PRI7_R_NVIC_FLASH_BIT       (13)
#define NVIC_PRI7_R_NVIC_FLASH_PRI0      (0x00000000)
#define NVIC_PRI7_R_NVIC_FLASH_PRI1      (0x00002000)
#define NVIC_PRI7_R_NVIC_FLASH_PRI2      (0x00004000)
#define NVIC_PRI7_R_NVIC_FLASH_PRI3      (0x00006000)
#define NVIC_PRI7_R_NVIC_FLASH_PRI4      (0x00008000)
#define NVIC_PRI7_R_NVIC_FLASH_PRI5      (0x0000A000)
#define NVIC_PRI7_R_NVIC_FLASH_PRI6      (0x0000C000)
#define NVIC_PRI7_R_NVIC_FLASH_PRI7      (0x0000E000)

#define NVIC_PRI7_NVIC_FLASH_MASK      (0x00000007)
#define NVIC_PRI7_NVIC_FLASH_PRI0      (0x00000000)
#define NVIC_PRI7_NVIC_FLASH_PRI1      (0x00000001)
#define NVIC_PRI7_NVIC_FLASH_PRI2      (0x00000002)
#define NVIC_PRI7_NVIC_FLASH_PRI3      (0x00000003)
#define NVIC_PRI7_NVIC_FLASH_PRI4      (0x00000004)
#define NVIC_PRI7_NVIC_FLASH_PRI5      (0x00000005)
#define NVIC_PRI7_NVIC_FLASH_PRI6      (0x00000006)
#define NVIC_PRI7_NVIC_FLASH_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI7_R_NVIC_GPIOF_MASK      (0x00E00000)
#define NVIC_PRI7_R_NVIC_GPIOF_BIT       (21)
#define NVIC_PRI7_R_NVIC_GPIOF_PRI0      (0x00000000)
#define NVIC_PRI7_R_NVIC_GPIOF_PRI1      (0x00200000)
#define NVIC_PRI7_R_NVIC_GPIOF_PRI2      (0x00400000)
#define NVIC_PRI7_R_NVIC_GPIOF_PRI3      (0x00600000)
#define NVIC_PRI7_R_NVIC_GPIOF_PRI4      (0x00800000)
#define NVIC_PRI7_R_NVIC_GPIOF_PRI5      (0x00A00000)
#define NVIC_PRI7_R_NVIC_GPIOF_PRI6      (0x00C00000)
#define NVIC_PRI7_R_NVIC_GPIOF_PRI7      (0x00E00000)

#define NVIC_PRI7_NVIC_GPIOF_MASK      (0x00000007)
#define NVIC_PRI7_NVIC_GPIOF_PRI0      (0x00000000)
#define NVIC_PRI7_NVIC_GPIOF_PRI1      (0x00000001)
#define NVIC_PRI7_NVIC_GPIOF_PRI2      (0x00000002)
#define NVIC_PRI7_NVIC_GPIOF_PRI3      (0x00000003)
#define NVIC_PRI7_NVIC_GPIOF_PRI4      (0x00000004)
#define NVIC_PRI7_NVIC_GPIOF_PRI5      (0x00000005)
#define NVIC_PRI7_NVIC_GPIOF_PRI6      (0x00000006)
#define NVIC_PRI7_NVIC_GPIOF_PRI7      (0x00000007)
//--------




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI8 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI8            (((PRI8_TypeDef*)(NVIC_BASE+NVIC_PRI8_OFFSET)))
#define NVIC_PRI8_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI8_OFFSET)))




//--------
#define NVIC_PRI8_R_NVIC_UART2_MASK      (0x0000E000)
#define NVIC_PRI8_R_NVIC_UART2_BIT       (13)
#define NVIC_PRI8_R_NVIC_UART2_PRI0      (0x00000000)
#define NVIC_PRI8_R_NVIC_UART2_PRI1      (0x00002000)
#define NVIC_PRI8_R_NVIC_UART2_PRI2      (0x00004000)
#define NVIC_PRI8_R_NVIC_UART2_PRI3      (0x00006000)
#define NVIC_PRI8_R_NVIC_UART2_PRI4      (0x00008000)
#define NVIC_PRI8_R_NVIC_UART2_PRI5      (0x0000A000)
#define NVIC_PRI8_R_NVIC_UART2_PRI6      (0x0000C000)
#define NVIC_PRI8_R_NVIC_UART2_PRI7      (0x0000E000)

#define NVIC_PRI8_NVIC_UART2_MASK      (0x00000007)
#define NVIC_PRI8_NVIC_UART2_PRI0      (0x00000000)
#define NVIC_PRI8_NVIC_UART2_PRI1      (0x00000001)
#define NVIC_PRI8_NVIC_UART2_PRI2      (0x00000002)
#define NVIC_PRI8_NVIC_UART2_PRI3      (0x00000003)
#define NVIC_PRI8_NVIC_UART2_PRI4      (0x00000004)
#define NVIC_PRI8_NVIC_UART2_PRI5      (0x00000005)
#define NVIC_PRI8_NVIC_UART2_PRI6      (0x00000006)
#define NVIC_PRI8_NVIC_UART2_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI8_R_NVIC_SSI1_MASK      (0x00E00000)
#define NVIC_PRI8_R_NVIC_SSI1_BIT       (21)
#define NVIC_PRI8_R_NVIC_SSI1_PRI0      (0x00000000)
#define NVIC_PRI8_R_NVIC_SSI1_PRI1      (0x00200000)
#define NVIC_PRI8_R_NVIC_SSI1_PRI2      (0x00400000)
#define NVIC_PRI8_R_NVIC_SSI1_PRI3      (0x00600000)
#define NVIC_PRI8_R_NVIC_SSI1_PRI4      (0x00800000)
#define NVIC_PRI8_R_NVIC_SSI1_PRI5      (0x00A00000)
#define NVIC_PRI8_R_NVIC_SSI1_PRI6      (0x00C00000)
#define NVIC_PRI8_R_NVIC_SSI1_PRI7      (0x00E00000)

#define NVIC_PRI8_NVIC_SSI1_MASK      (0x00000007)
#define NVIC_PRI8_NVIC_SSI1_PRI0      (0x00000000)
#define NVIC_PRI8_NVIC_SSI1_PRI1      (0x00000001)
#define NVIC_PRI8_NVIC_SSI1_PRI2      (0x00000002)
#define NVIC_PRI8_NVIC_SSI1_PRI3      (0x00000003)
#define NVIC_PRI8_NVIC_SSI1_PRI4      (0x00000004)
#define NVIC_PRI8_NVIC_SSI1_PRI5      (0x00000005)
#define NVIC_PRI8_NVIC_SSI1_PRI6      (0x00000006)
#define NVIC_PRI8_NVIC_SSI1_PRI7      (0x00000007)
//--------



//--------
#define NVIC_PRI8_R_NVIC_TIMER3A_MASK      (0xE0000000)
#define NVIC_PRI8_R_NVIC_TIMER3A_BIT       (29)
#define NVIC_PRI8_R_NVIC_TIMER3A_PRI0      (0x00000000)
#define NVIC_PRI8_R_NVIC_TIMER3A_PRI1      (0x20000000)
#define NVIC_PRI8_R_NVIC_TIMER3A_PRI2      (0x40000000)
#define NVIC_PRI8_R_NVIC_TIMER3A_PRI3      (0x60000000)
#define NVIC_PRI8_R_NVIC_TIMER3A_PRI4      (0x80000000)
#define NVIC_PRI8_R_NVIC_TIMER3A_PRI5      (0xA0000000)
#define NVIC_PRI8_R_NVIC_TIMER3A_PRI6      (0xC0000000)
#define NVIC_PRI8_R_NVIC_TIMER3A_PRI7      (0xE0000000)

#define NVIC_PRI8_NVIC_TIMER3A_MASK      (0x00000007)
#define NVIC_PRI8_NVIC_TIMER3A_PRI0      (0x00000000)
#define NVIC_PRI8_NVIC_TIMER3A_PRI1      (0x00000001)
#define NVIC_PRI8_NVIC_TIMER3A_PRI2      (0x00000002)
#define NVIC_PRI8_NVIC_TIMER3A_PRI3      (0x00000003)
#define NVIC_PRI8_NVIC_TIMER3A_PRI4      (0x00000004)
#define NVIC_PRI8_NVIC_TIMER3A_PRI5      (0x00000005)
#define NVIC_PRI8_NVIC_TIMER3A_PRI6      (0x00000006)
#define NVIC_PRI8_NVIC_TIMER3A_PRI7      (0x00000007)
//--------




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI9 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI9            (((PRI9_TypeDef*)(NVIC_BASE+NVIC_PRI9_OFFSET)))
#define NVIC_PRI9_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI9_OFFSET)))


//--------
#define NVIC_PRI9_R_NVIC_TIMER3B_MASK      (0x000000E0)
#define NVIC_PRI9_R_NVIC_TIMER3B_BIT       (5)
#define NVIC_PRI9_R_NVIC_TIMER3B_PRI0      (0x00000000)
#define NVIC_PRI9_R_NVIC_TIMER3B_PRI1      (0x00000020)
#define NVIC_PRI9_R_NVIC_TIMER3B_PRI2      (0x00000040)
#define NVIC_PRI9_R_NVIC_TIMER3B_PRI3      (0x00000060)
#define NVIC_PRI9_R_NVIC_TIMER3B_PRI4      (0x00000080)
#define NVIC_PRI9_R_NVIC_TIMER3B_PRI5      (0x000000A0)
#define NVIC_PRI9_R_NVIC_TIMER3B_PRI6      (0x000000C0)
#define NVIC_PRI9_R_NVIC_TIMER3B_PRI7      (0x000000E0)

#define NVIC_PRI9_NVIC_TIMER3B_MASK      (0x00000007)
#define NVIC_PRI9_NVIC_TIMER3B_PRI0      (0x00000000)
#define NVIC_PRI9_NVIC_TIMER3B_PRI1      (0x00000001)
#define NVIC_PRI9_NVIC_TIMER3B_PRI2      (0x00000002)
#define NVIC_PRI9_NVIC_TIMER3B_PRI3      (0x00000003)
#define NVIC_PRI9_NVIC_TIMER3B_PRI4      (0x00000004)
#define NVIC_PRI9_NVIC_TIMER3B_PRI5      (0x00000005)
#define NVIC_PRI9_NVIC_TIMER3B_PRI6      (0x00000006)
#define NVIC_PRI9_NVIC_TIMER3B_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI9_R_NVIC_I2C1_MASK      (0x0000E000)
#define NVIC_PRI9_R_NVIC_I2C1_BIT       (13)
#define NVIC_PRI9_R_NVIC_I2C1_PRI0      (0x00000000)
#define NVIC_PRI9_R_NVIC_I2C1_PRI1      (0x00002000)
#define NVIC_PRI9_R_NVIC_I2C1_PRI2      (0x00004000)
#define NVIC_PRI9_R_NVIC_I2C1_PRI3      (0x00006000)
#define NVIC_PRI9_R_NVIC_I2C1_PRI4      (0x00008000)
#define NVIC_PRI9_R_NVIC_I2C1_PRI5      (0x0000A000)
#define NVIC_PRI9_R_NVIC_I2C1_PRI6      (0x0000C000)
#define NVIC_PRI9_R_NVIC_I2C1_PRI7      (0x0000E000)

#define NVIC_PRI9_NVIC_I2C1_MASK      (0x00000007)
#define NVIC_PRI9_NVIC_I2C1_PRI0      (0x00000000)
#define NVIC_PRI9_NVIC_I2C1_PRI1      (0x00000001)
#define NVIC_PRI9_NVIC_I2C1_PRI2      (0x00000002)
#define NVIC_PRI9_NVIC_I2C1_PRI3      (0x00000003)
#define NVIC_PRI9_NVIC_I2C1_PRI4      (0x00000004)
#define NVIC_PRI9_NVIC_I2C1_PRI5      (0x00000005)
#define NVIC_PRI9_NVIC_I2C1_PRI6      (0x00000006)
#define NVIC_PRI9_NVIC_I2C1_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI9_R_NVIC_QEI1_MASK      (0x00E00000)
#define NVIC_PRI9_R_NVIC_QEI1_BIT       (21)
#define NVIC_PRI9_R_NVIC_QEI1_PRI0      (0x00000000)
#define NVIC_PRI9_R_NVIC_QEI1_PRI1      (0x00200000)
#define NVIC_PRI9_R_NVIC_QEI1_PRI2      (0x00400000)
#define NVIC_PRI9_R_NVIC_QEI1_PRI3      (0x00600000)
#define NVIC_PRI9_R_NVIC_QEI1_PRI4      (0x00800000)
#define NVIC_PRI9_R_NVIC_QEI1_PRI5      (0x00A00000)
#define NVIC_PRI9_R_NVIC_QEI1_PRI6      (0x00C00000)
#define NVIC_PRI9_R_NVIC_QEI1_PRI7      (0x00E00000)

#define NVIC_PRI9_NVIC_QEI1_MASK      (0x00000007)
#define NVIC_PRI9_NVIC_QEI1_PRI0      (0x00000000)
#define NVIC_PRI9_NVIC_QEI1_PRI1      (0x00000001)
#define NVIC_PRI9_NVIC_QEI1_PRI2      (0x00000002)
#define NVIC_PRI9_NVIC_QEI1_PRI3      (0x00000003)
#define NVIC_PRI9_NVIC_QEI1_PRI4      (0x00000004)
#define NVIC_PRI9_NVIC_QEI1_PRI5      (0x00000005)
#define NVIC_PRI9_NVIC_QEI1_PRI6      (0x00000006)
#define NVIC_PRI9_NVIC_QEI1_PRI7      (0x00000007)
//--------



//--------
#define NVIC_PRI9_R_NVIC_CAN0_MASK      (0xE0000000)
#define NVIC_PRI9_R_NVIC_CAN0_BIT       (29)
#define NVIC_PRI9_R_NVIC_CAN0_PRI0      (0x00000000)
#define NVIC_PRI9_R_NVIC_CAN0_PRI1      (0x20000000)
#define NVIC_PRI9_R_NVIC_CAN0_PRI2      (0x40000000)
#define NVIC_PRI9_R_NVIC_CAN0_PRI3      (0x60000000)
#define NVIC_PRI9_R_NVIC_CAN0_PRI4      (0x80000000)
#define NVIC_PRI9_R_NVIC_CAN0_PRI5      (0xA0000000)
#define NVIC_PRI9_R_NVIC_CAN0_PRI6      (0xC0000000)
#define NVIC_PRI9_R_NVIC_CAN0_PRI7      (0xE0000000)

#define NVIC_PRI9_NVIC_CAN0_MASK      (0x00000007)
#define NVIC_PRI9_NVIC_CAN0_PRI0      (0x00000000)
#define NVIC_PRI9_NVIC_CAN0_PRI1      (0x00000001)
#define NVIC_PRI9_NVIC_CAN0_PRI2      (0x00000002)
#define NVIC_PRI9_NVIC_CAN0_PRI3      (0x00000003)
#define NVIC_PRI9_NVIC_CAN0_PRI4      (0x00000004)
#define NVIC_PRI9_NVIC_CAN0_PRI5      (0x00000005)
#define NVIC_PRI9_NVIC_CAN0_PRI6      (0x00000006)
#define NVIC_PRI9_NVIC_CAN0_PRI7      (0x00000007)
//--------




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI10 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI10            (((PRI10_TypeDef*)(NVIC_BASE+NVIC_PRI10_OFFSET)))
#define NVIC_PRI10_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI10_OFFSET)))


//--------
#define NVIC_PRI10_R_NVIC_CAN1_MASK      (0x000000E0)
#define NVIC_PRI10_R_NVIC_CAN1_BIT       (5)
#define NVIC_PRI10_R_NVIC_CAN1_PRI0      (0x00000000)
#define NVIC_PRI10_R_NVIC_CAN1_PRI1      (0x00000020)
#define NVIC_PRI10_R_NVIC_CAN1_PRI2      (0x00000040)
#define NVIC_PRI10_R_NVIC_CAN1_PRI3      (0x00000060)
#define NVIC_PRI10_R_NVIC_CAN1_PRI4      (0x00000080)
#define NVIC_PRI10_R_NVIC_CAN1_PRI5      (0x000000A0)
#define NVIC_PRI10_R_NVIC_CAN1_PRI6      (0x000000C0)
#define NVIC_PRI10_R_NVIC_CAN1_PRI7      (0x000000E0)

#define NVIC_PRI10_NVIC_CAN1_MASK      (0x00000007)
#define NVIC_PRI10_NVIC_CAN1_PRI0      (0x00000000)
#define NVIC_PRI10_NVIC_CAN1_PRI1      (0x00000001)
#define NVIC_PRI10_NVIC_CAN1_PRI2      (0x00000002)
#define NVIC_PRI10_NVIC_CAN1_PRI3      (0x00000003)
#define NVIC_PRI10_NVIC_CAN1_PRI4      (0x00000004)
#define NVIC_PRI10_NVIC_CAN1_PRI5      (0x00000005)
#define NVIC_PRI10_NVIC_CAN1_PRI6      (0x00000006)
#define NVIC_PRI10_NVIC_CAN1_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI10_R_NVIC_HIB_MASK      (0xE0000000)
#define NVIC_PRI10_R_NVIC_HIB_BIT       (29)
#define NVIC_PRI10_R_NVIC_HIB_PRI0      (0x00000000)
#define NVIC_PRI10_R_NVIC_HIB_PRI1      (0x20000000)
#define NVIC_PRI10_R_NVIC_HIB_PRI2      (0x40000000)
#define NVIC_PRI10_R_NVIC_HIB_PRI3      (0x60000000)
#define NVIC_PRI10_R_NVIC_HIB_PRI4      (0x80000000)
#define NVIC_PRI10_R_NVIC_HIB_PRI5      (0xA0000000)
#define NVIC_PRI10_R_NVIC_HIB_PRI6      (0xC0000000)
#define NVIC_PRI10_R_NVIC_HIB_PRI7      (0xE0000000)

#define NVIC_PRI10_NVIC_HIB_MASK      (0x00000007)
#define NVIC_PRI10_NVIC_HIB_PRI0      (0x00000000)
#define NVIC_PRI10_NVIC_HIB_PRI1      (0x00000001)
#define NVIC_PRI10_NVIC_HIB_PRI2      (0x00000002)
#define NVIC_PRI10_NVIC_HIB_PRI3      (0x00000003)
#define NVIC_PRI10_NVIC_HIB_PRI4      (0x00000004)
#define NVIC_PRI10_NVIC_HIB_PRI5      (0x00000005)
#define NVIC_PRI10_NVIC_HIB_PRI6      (0x00000006)
#define NVIC_PRI10_NVIC_HIB_PRI7      (0x00000007)
//--------




////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI11 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI11            (((PRI11_TypeDef*)(NVIC_BASE+NVIC_PRI11_OFFSET)))
#define NVIC_PRI11_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI11_OFFSET)))


//--------
#define NVIC_PRI11_R_NVIC_USB_MASK      (0x000000E0)
#define NVIC_PRI11_R_NVIC_USB_BIT       (5)
#define NVIC_PRI11_R_NVIC_USB_PRI0      (0x00000000)
#define NVIC_PRI11_R_NVIC_USB_PRI1      (0x00000020)
#define NVIC_PRI11_R_NVIC_USB_PRI2      (0x00000040)
#define NVIC_PRI11_R_NVIC_USB_PRI3      (0x00000060)
#define NVIC_PRI11_R_NVIC_USB_PRI4      (0x00000080)
#define NVIC_PRI11_R_NVIC_USB_PRI5      (0x000000A0)
#define NVIC_PRI11_R_NVIC_USB_PRI6      (0x000000C0)
#define NVIC_PRI11_R_NVIC_USB_PRI7      (0x000000E0)

#define NVIC_PRI11_NVIC_USB_MASK      (0x00000007)
#define NVIC_PRI11_NVIC_USB_PRI0      (0x00000000)
#define NVIC_PRI11_NVIC_USB_PRI1      (0x00000001)
#define NVIC_PRI11_NVIC_USB_PRI2      (0x00000002)
#define NVIC_PRI11_NVIC_USB_PRI3      (0x00000003)
#define NVIC_PRI11_NVIC_USB_PRI4      (0x00000004)
#define NVIC_PRI11_NVIC_USB_PRI5      (0x00000005)
#define NVIC_PRI11_NVIC_USB_PRI6      (0x00000006)
#define NVIC_PRI11_NVIC_USB_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI11_R_NVIC_PWM0GEN3_MASK      (0x0000E000)
#define NVIC_PRI11_R_NVIC_PWM0GEN3_BIT       (13)
#define NVIC_PRI11_R_NVIC_PWM0GEN3_PRI0      (0x00000000)
#define NVIC_PRI11_R_NVIC_PWM0GEN3_PRI1      (0x00002000)
#define NVIC_PRI11_R_NVIC_PWM0GEN3_PRI2      (0x00004000)
#define NVIC_PRI11_R_NVIC_PWM0GEN3_PRI3      (0x00006000)
#define NVIC_PRI11_R_NVIC_PWM0GEN3_PRI4      (0x00008000)
#define NVIC_PRI11_R_NVIC_PWM0GEN3_PRI5      (0x0000A000)
#define NVIC_PRI11_R_NVIC_PWM0GEN3_PRI6      (0x0000C000)
#define NVIC_PRI11_R_NVIC_PWM0GEN3_PRI7      (0x0000E000)

#define NVIC_PRI11_NVIC_PWM0GEN3_MASK      (0x00000007)
#define NVIC_PRI11_NVIC_PWM0GEN3_PRI0      (0x00000000)
#define NVIC_PRI11_NVIC_PWM0GEN3_PRI1      (0x00000001)
#define NVIC_PRI11_NVIC_PWM0GEN3_PRI2      (0x00000002)
#define NVIC_PRI11_NVIC_PWM0GEN3_PRI3      (0x00000003)
#define NVIC_PRI11_NVIC_PWM0GEN3_PRI4      (0x00000004)
#define NVIC_PRI11_NVIC_PWM0GEN3_PRI5      (0x00000005)
#define NVIC_PRI11_NVIC_PWM0GEN3_PRI6      (0x00000006)
#define NVIC_PRI11_NVIC_PWM0GEN3_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI11_R_NVIC_UDMASOFT_MASK      (0x00E00000)
#define NVIC_PRI11_R_NVIC_UDMASOFT_BIT       (21)
#define NVIC_PRI11_R_NVIC_UDMASOFT_PRI0      (0x00000000)
#define NVIC_PRI11_R_NVIC_UDMASOFT_PRI1      (0x00200000)
#define NVIC_PRI11_R_NVIC_UDMASOFT_PRI2      (0x00400000)
#define NVIC_PRI11_R_NVIC_UDMASOFT_PRI3      (0x00600000)
#define NVIC_PRI11_R_NVIC_UDMASOFT_PRI4      (0x00800000)
#define NVIC_PRI11_R_NVIC_UDMASOFT_PRI5      (0x00A00000)
#define NVIC_PRI11_R_NVIC_UDMASOFT_PRI6      (0x00C00000)
#define NVIC_PRI11_R_NVIC_UDMASOFT_PRI7      (0x00E00000)

#define NVIC_PRI11_NVIC_UDMASOFT_MASK      (0x00000007)
#define NVIC_PRI11_NVIC_UDMASOFT_PRI0      (0x00000000)
#define NVIC_PRI11_NVIC_UDMASOFT_PRI1      (0x00000001)
#define NVIC_PRI11_NVIC_UDMASOFT_PRI2      (0x00000002)
#define NVIC_PRI11_NVIC_UDMASOFT_PRI3      (0x00000003)
#define NVIC_PRI11_NVIC_UDMASOFT_PRI4      (0x00000004)
#define NVIC_PRI11_NVIC_UDMASOFT_PRI5      (0x00000005)
#define NVIC_PRI11_NVIC_UDMASOFT_PRI6      (0x00000006)
#define NVIC_PRI11_NVIC_UDMASOFT_PRI7      (0x00000007)
//--------



//--------
#define NVIC_PRI11_R_NVIC_UDMAERROR_MASK      (0xE0000000)
#define NVIC_PRI11_R_NVIC_UDMAERROR_BIT       (29)
#define NVIC_PRI11_R_NVIC_UDMAERROR_PRI0      (0x00000000)
#define NVIC_PRI11_R_NVIC_UDMAERROR_PRI1      (0x20000000)
#define NVIC_PRI11_R_NVIC_UDMAERROR_PRI2      (0x40000000)
#define NVIC_PRI11_R_NVIC_UDMAERROR_PRI3      (0x60000000)
#define NVIC_PRI11_R_NVIC_UDMAERROR_PRI4      (0x80000000)
#define NVIC_PRI11_R_NVIC_UDMAERROR_PRI5      (0xA0000000)
#define NVIC_PRI11_R_NVIC_UDMAERROR_PRI6      (0xC0000000)
#define NVIC_PRI11_R_NVIC_UDMAERROR_PRI7      (0xE0000000)

#define NVIC_PRI11_NVIC_UDMAERROR_MASK      (0x00000007)
#define NVIC_PRI11_NVIC_UDMAERROR_PRI0      (0x00000000)
#define NVIC_PRI11_NVIC_UDMAERROR_PRI1      (0x00000001)
#define NVIC_PRI11_NVIC_UDMAERROR_PRI2      (0x00000002)
#define NVIC_PRI11_NVIC_UDMAERROR_PRI3      (0x00000003)
#define NVIC_PRI11_NVIC_UDMAERROR_PRI4      (0x00000004)
#define NVIC_PRI11_NVIC_UDMAERROR_PRI5      (0x00000005)
#define NVIC_PRI11_NVIC_UDMAERROR_PRI6      (0x00000006)
#define NVIC_PRI11_NVIC_UDMAERROR_PRI7      (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI12 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI12            (((PRI12_TypeDef*)(NVIC_BASE+NVIC_PRI12_OFFSET)))
#define NVIC_PRI12_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI12_OFFSET)))


//--------
#define NVIC_PRI12_R_NVIC_ADC1SEQ0_MASK      (0x000000E0)
#define NVIC_PRI12_R_NVIC_ADC1SEQ0_BIT       (5)
#define NVIC_PRI12_R_NVIC_ADC1SEQ0_PRI0      (0x00000000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ0_PRI1      (0x00000020)
#define NVIC_PRI12_R_NVIC_ADC1SEQ0_PRI2      (0x00000040)
#define NVIC_PRI12_R_NVIC_ADC1SEQ0_PRI3      (0x00000060)
#define NVIC_PRI12_R_NVIC_ADC1SEQ0_PRI4      (0x00000080)
#define NVIC_PRI12_R_NVIC_ADC1SEQ0_PRI5      (0x000000A0)
#define NVIC_PRI12_R_NVIC_ADC1SEQ0_PRI6      (0x000000C0)
#define NVIC_PRI12_R_NVIC_ADC1SEQ0_PRI7      (0x000000E0)

#define NVIC_PRI12_NVIC_ADC1SEQ0_MASK      (0x00000007)
#define NVIC_PRI12_NVIC_ADC1SEQ0_PRI0      (0x00000000)
#define NVIC_PRI12_NVIC_ADC1SEQ0_PRI1      (0x00000001)
#define NVIC_PRI12_NVIC_ADC1SEQ0_PRI2      (0x00000002)
#define NVIC_PRI12_NVIC_ADC1SEQ0_PRI3      (0x00000003)
#define NVIC_PRI12_NVIC_ADC1SEQ0_PRI4      (0x00000004)
#define NVIC_PRI12_NVIC_ADC1SEQ0_PRI5      (0x00000005)
#define NVIC_PRI12_NVIC_ADC1SEQ0_PRI6      (0x00000006)
#define NVIC_PRI12_NVIC_ADC1SEQ0_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI12_R_NVIC_ADC1SEQ1_MASK      (0x0000E000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ1_BIT       (13)
#define NVIC_PRI12_R_NVIC_ADC1SEQ1_PRI0      (0x00000000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ1_PRI1      (0x00002000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ1_PRI2      (0x00004000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ1_PRI3      (0x00006000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ1_PRI4      (0x00008000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ1_PRI5      (0x0000A000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ1_PRI6      (0x0000C000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ1_PRI7      (0x0000E000)

#define NVIC_PRI12_NVIC_ADC1SEQ1_MASK      (0x00000007)
#define NVIC_PRI12_NVIC_ADC1SEQ1_PRI0      (0x00000000)
#define NVIC_PRI12_NVIC_ADC1SEQ1_PRI1      (0x00000001)
#define NVIC_PRI12_NVIC_ADC1SEQ1_PRI2      (0x00000002)
#define NVIC_PRI12_NVIC_ADC1SEQ1_PRI3      (0x00000003)
#define NVIC_PRI12_NVIC_ADC1SEQ1_PRI4      (0x00000004)
#define NVIC_PRI12_NVIC_ADC1SEQ1_PRI5      (0x00000005)
#define NVIC_PRI12_NVIC_ADC1SEQ1_PRI6      (0x00000006)
#define NVIC_PRI12_NVIC_ADC1SEQ1_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI12_R_NVIC_ADC1SEQ2_MASK      (0x00E00000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ2_BIT       (21)
#define NVIC_PRI12_R_NVIC_ADC1SEQ2_PRI0      (0x00000000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ2_PRI1      (0x00200000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ2_PRI2      (0x00400000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ2_PRI3      (0x00600000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ2_PRI4      (0x00800000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ2_PRI5      (0x00A00000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ2_PRI6      (0x00C00000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ2_PRI7      (0x00E00000)

#define NVIC_PRI12_NVIC_ADC1SEQ2_MASK      (0x00000007)
#define NVIC_PRI12_NVIC_ADC1SEQ2_PRI0      (0x00000000)
#define NVIC_PRI12_NVIC_ADC1SEQ2_PRI1      (0x00000001)
#define NVIC_PRI12_NVIC_ADC1SEQ2_PRI2      (0x00000002)
#define NVIC_PRI12_NVIC_ADC1SEQ2_PRI3      (0x00000003)
#define NVIC_PRI12_NVIC_ADC1SEQ2_PRI4      (0x00000004)
#define NVIC_PRI12_NVIC_ADC1SEQ2_PRI5      (0x00000005)
#define NVIC_PRI12_NVIC_ADC1SEQ2_PRI6      (0x00000006)
#define NVIC_PRI12_NVIC_ADC1SEQ2_PRI7      (0x00000007)
//--------



//--------
#define NVIC_PRI12_R_NVIC_ADC1SEQ3_MASK      (0xE0000000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ3_BIT       (29)
#define NVIC_PRI12_R_NVIC_ADC1SEQ3_PRI0      (0x00000000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ3_PRI1      (0x20000000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ3_PRI2      (0x40000000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ3_PRI3      (0x60000000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ3_PRI4      (0x80000000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ3_PRI5      (0xA0000000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ3_PRI6      (0xC0000000)
#define NVIC_PRI12_R_NVIC_ADC1SEQ3_PRI7      (0xE0000000)

#define NVIC_PRI12_NVIC_ADC1SEQ3_MASK      (0x00000007)
#define NVIC_PRI12_NVIC_ADC1SEQ3_PRI0      (0x00000000)
#define NVIC_PRI12_NVIC_ADC1SEQ3_PRI1      (0x00000001)
#define NVIC_PRI12_NVIC_ADC1SEQ3_PRI2      (0x00000002)
#define NVIC_PRI12_NVIC_ADC1SEQ3_PRI3      (0x00000003)
#define NVIC_PRI12_NVIC_ADC1SEQ3_PRI4      (0x00000004)
#define NVIC_PRI12_NVIC_ADC1SEQ3_PRI5      (0x00000005)
#define NVIC_PRI12_NVIC_ADC1SEQ3_PRI6      (0x00000006)
#define NVIC_PRI12_NVIC_ADC1SEQ3_PRI7      (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI13 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI13            (((PRI13_TypeDef*)(NVIC_BASE+NVIC_PRI13_OFFSET)))
#define NVIC_PRI13_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI13_OFFSET)))


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI14 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI14            (((PRI14_TypeDef*)(NVIC_BASE+NVIC_PRI14_OFFSET)))
#define NVIC_PRI14_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI14_OFFSET)))


//--------
#define NVIC_PRI14_R_NVIC_SSI2_MASK      (0x0000E000)
#define NVIC_PRI14_R_NVIC_SSI2_BIT       (13)
#define NVIC_PRI14_R_NVIC_SSI2_PRI0      (0x00000000)
#define NVIC_PRI14_R_NVIC_SSI2_PRI1      (0x00002000)
#define NVIC_PRI14_R_NVIC_SSI2_PRI2      (0x00004000)
#define NVIC_PRI14_R_NVIC_SSI2_PRI3      (0x00006000)
#define NVIC_PRI14_R_NVIC_SSI2_PRI4      (0x00008000)
#define NVIC_PRI14_R_NVIC_SSI2_PRI5      (0x0000A000)
#define NVIC_PRI14_R_NVIC_SSI2_PRI6      (0x0000C000)
#define NVIC_PRI14_R_NVIC_SSI2_PRI7      (0x0000E000)

#define NVIC_PRI14_NVIC_SSI2_MASK      (0x00000007)
#define NVIC_PRI14_NVIC_SSI2_PRI0      (0x00000000)
#define NVIC_PRI14_NVIC_SSI2_PRI1      (0x00000001)
#define NVIC_PRI14_NVIC_SSI2_PRI2      (0x00000002)
#define NVIC_PRI14_NVIC_SSI2_PRI3      (0x00000003)
#define NVIC_PRI14_NVIC_SSI2_PRI4      (0x00000004)
#define NVIC_PRI14_NVIC_SSI2_PRI5      (0x00000005)
#define NVIC_PRI14_NVIC_SSI2_PRI6      (0x00000006)
#define NVIC_PRI14_NVIC_SSI2_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI14_R_NVIC_SSI3_MASK      (0x00E00000)
#define NVIC_PRI14_R_NVIC_SSI3_BIT       (21)
#define NVIC_PRI14_R_NVIC_SSI3_PRI0      (0x00000000)
#define NVIC_PRI14_R_NVIC_SSI3_PRI1      (0x00200000)
#define NVIC_PRI14_R_NVIC_SSI3_PRI2      (0x00400000)
#define NVIC_PRI14_R_NVIC_SSI3_PRI3      (0x00600000)
#define NVIC_PRI14_R_NVIC_SSI3_PRI4      (0x00800000)
#define NVIC_PRI14_R_NVIC_SSI3_PRI5      (0x00A00000)
#define NVIC_PRI14_R_NVIC_SSI3_PRI6      (0x00C00000)
#define NVIC_PRI14_R_NVIC_SSI3_PRI7      (0x00E00000)

#define NVIC_PRI14_NVIC_SSI3_MASK      (0x00000007)
#define NVIC_PRI14_NVIC_SSI3_PRI0      (0x00000000)
#define NVIC_PRI14_NVIC_SSI3_PRI1      (0x00000001)
#define NVIC_PRI14_NVIC_SSI3_PRI2      (0x00000002)
#define NVIC_PRI14_NVIC_SSI3_PRI3      (0x00000003)
#define NVIC_PRI14_NVIC_SSI3_PRI4      (0x00000004)
#define NVIC_PRI14_NVIC_SSI3_PRI5      (0x00000005)
#define NVIC_PRI14_NVIC_SSI3_PRI6      (0x00000006)
#define NVIC_PRI14_NVIC_SSI3_PRI7      (0x00000007)
//--------



//--------
#define NVIC_PRI14_R_NVIC_UART3_MASK      (0xE0000000)
#define NVIC_PRI14_R_NVIC_UART3_BIT       (29)
#define NVIC_PRI14_R_NVIC_UART3_PRI0      (0x00000000)
#define NVIC_PRI14_R_NVIC_UART3_PRI1      (0x20000000)
#define NVIC_PRI14_R_NVIC_UART3_PRI2      (0x40000000)
#define NVIC_PRI14_R_NVIC_UART3_PRI3      (0x60000000)
#define NVIC_PRI14_R_NVIC_UART3_PRI4      (0x80000000)
#define NVIC_PRI14_R_NVIC_UART3_PRI5      (0xA0000000)
#define NVIC_PRI14_R_NVIC_UART3_PRI6      (0xC0000000)
#define NVIC_PRI14_R_NVIC_UART3_PRI7      (0xE0000000)

#define NVIC_PRI14_NVIC_UART3_MASK      (0x00000007)
#define NVIC_PRI14_NVIC_UART3_PRI0      (0x00000000)
#define NVIC_PRI14_NVIC_UART3_PRI1      (0x00000001)
#define NVIC_PRI14_NVIC_UART3_PRI2      (0x00000002)
#define NVIC_PRI14_NVIC_UART3_PRI3      (0x00000003)
#define NVIC_PRI14_NVIC_UART3_PRI4      (0x00000004)
#define NVIC_PRI14_NVIC_UART3_PRI5      (0x00000005)
#define NVIC_PRI14_NVIC_UART3_PRI6      (0x00000006)
#define NVIC_PRI14_NVIC_UART3_PRI7      (0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI15 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI15            (((PRI15_TypeDef*)(NVIC_BASE+NVIC_PRI15_OFFSET)))
#define NVIC_PRI15_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI15_OFFSET)))


//--------
#define NVIC_PRI15_R_NVIC_UART4_MASK      (0x000000E0)
#define NVIC_PRI15_R_NVIC_UART4_BIT       (5)
#define NVIC_PRI15_R_NVIC_UART4_PRI0      (0x00000000)
#define NVIC_PRI15_R_NVIC_UART4_PRI1      (0x00000020)
#define NVIC_PRI15_R_NVIC_UART4_PRI2      (0x00000040)
#define NVIC_PRI15_R_NVIC_UART4_PRI3      (0x00000060)
#define NVIC_PRI15_R_NVIC_UART4_PRI4      (0x00000080)
#define NVIC_PRI15_R_NVIC_UART4_PRI5      (0x000000A0)
#define NVIC_PRI15_R_NVIC_UART4_PRI6      (0x000000C0)
#define NVIC_PRI15_R_NVIC_UART4_PRI7      (0x000000E0)

#define NVIC_PRI15_NVIC_UART4_MASK      (0x00000007)
#define NVIC_PRI15_NVIC_UART4_PRI0      (0x00000000)
#define NVIC_PRI15_NVIC_UART4_PRI1      (0x00000001)
#define NVIC_PRI15_NVIC_UART4_PRI2      (0x00000002)
#define NVIC_PRI15_NVIC_UART4_PRI3      (0x00000003)
#define NVIC_PRI15_NVIC_UART4_PRI4      (0x00000004)
#define NVIC_PRI15_NVIC_UART4_PRI5      (0x00000005)
#define NVIC_PRI15_NVIC_UART4_PRI6      (0x00000006)
#define NVIC_PRI15_NVIC_UART4_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI15_R_NVIC_UART5_MASK      (0x0000E000)
#define NVIC_PRI15_R_NVIC_UART5_BIT       (13)
#define NVIC_PRI15_R_NVIC_UART5_PRI0      (0x00000000)
#define NVIC_PRI15_R_NVIC_UART5_PRI1      (0x00002000)
#define NVIC_PRI15_R_NVIC_UART5_PRI2      (0x00004000)
#define NVIC_PRI15_R_NVIC_UART5_PRI3      (0x00006000)
#define NVIC_PRI15_R_NVIC_UART5_PRI4      (0x00008000)
#define NVIC_PRI15_R_NVIC_UART5_PRI5      (0x0000A000)
#define NVIC_PRI15_R_NVIC_UART5_PRI6      (0x0000C000)
#define NVIC_PRI15_R_NVIC_UART5_PRI7      (0x0000E000)

#define NVIC_PRI15_NVIC_UART5_MASK      (0x00000007)
#define NVIC_PRI15_NVIC_UART5_PRI0      (0x00000000)
#define NVIC_PRI15_NVIC_UART5_PRI1      (0x00000001)
#define NVIC_PRI15_NVIC_UART5_PRI2      (0x00000002)
#define NVIC_PRI15_NVIC_UART5_PRI3      (0x00000003)
#define NVIC_PRI15_NVIC_UART5_PRI4      (0x00000004)
#define NVIC_PRI15_NVIC_UART5_PRI5      (0x00000005)
#define NVIC_PRI15_NVIC_UART5_PRI6      (0x00000006)
#define NVIC_PRI15_NVIC_UART5_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI15_R_NVIC_UART6_MASK      (0x00E00000)
#define NVIC_PRI15_R_NVIC_UART6_BIT       (21)
#define NVIC_PRI15_R_NVIC_UART6_PRI0      (0x00000000)
#define NVIC_PRI15_R_NVIC_UART6_PRI1      (0x00200000)
#define NVIC_PRI15_R_NVIC_UART6_PRI2      (0x00400000)
#define NVIC_PRI15_R_NVIC_UART6_PRI3      (0x00600000)
#define NVIC_PRI15_R_NVIC_UART6_PRI4      (0x00800000)
#define NVIC_PRI15_R_NVIC_UART6_PRI5      (0x00A00000)
#define NVIC_PRI15_R_NVIC_UART6_PRI6      (0x00C00000)
#define NVIC_PRI15_R_NVIC_UART6_PRI7      (0x00E00000)

#define NVIC_PRI15_NVIC_UART6_MASK      (0x00000007)
#define NVIC_PRI15_NVIC_UART6_PRI0      (0x00000000)
#define NVIC_PRI15_NVIC_UART6_PRI1      (0x00000001)
#define NVIC_PRI15_NVIC_UART6_PRI2      (0x00000002)
#define NVIC_PRI15_NVIC_UART6_PRI3      (0x00000003)
#define NVIC_PRI15_NVIC_UART6_PRI4      (0x00000004)
#define NVIC_PRI15_NVIC_UART6_PRI5      (0x00000005)
#define NVIC_PRI15_NVIC_UART6_PRI6      (0x00000006)
#define NVIC_PRI15_NVIC_UART6_PRI7      (0x00000007)
//--------



//--------
#define NVIC_PRI15_R_NVIC_UART7_MASK      (0xE0000000)
#define NVIC_PRI15_R_NVIC_UART7_BIT       (29)
#define NVIC_PRI15_R_NVIC_UART7_PRI0      (0x00000000)
#define NVIC_PRI15_R_NVIC_UART7_PRI1      (0x20000000)
#define NVIC_PRI15_R_NVIC_UART7_PRI2      (0x40000000)
#define NVIC_PRI15_R_NVIC_UART7_PRI3      (0x60000000)
#define NVIC_PRI15_R_NVIC_UART7_PRI4      (0x80000000)
#define NVIC_PRI15_R_NVIC_UART7_PRI5      (0xA0000000)
#define NVIC_PRI15_R_NVIC_UART7_PRI6      (0xC0000000)
#define NVIC_PRI15_R_NVIC_UART7_PRI7      (0xE0000000)

#define NVIC_PRI15_NVIC_UART7_MASK      (0x00000007)
#define NVIC_PRI15_NVIC_UART7_PRI0      (0x00000000)
#define NVIC_PRI15_NVIC_UART7_PRI1      (0x00000001)
#define NVIC_PRI15_NVIC_UART7_PRI2      (0x00000002)
#define NVIC_PRI15_NVIC_UART7_PRI3      (0x00000003)
#define NVIC_PRI15_NVIC_UART7_PRI4      (0x00000004)
#define NVIC_PRI15_NVIC_UART7_PRI5      (0x00000005)
#define NVIC_PRI15_NVIC_UART7_PRI6      (0x00000006)
#define NVIC_PRI15_NVIC_UART7_PRI7      (0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI16 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI16            (((PRI16_TypeDef*)(NVIC_BASE+NVIC_PRI16_OFFSET)))
#define NVIC_PRI16_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI16_OFFSET)))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI17 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI17            (((PRI17_TypeDef*)(NVIC_BASE+NVIC_PRI17_OFFSET)))
#define NVIC_PRI17_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI17_OFFSET)))


//--------
#define NVIC_PRI17_R_NVIC_I2C2_MASK      (0x000000E0)
#define NVIC_PRI17_R_NVIC_I2C2_BIT       (5)
#define NVIC_PRI17_R_NVIC_I2C2_PRI0      (0x00000000)
#define NVIC_PRI17_R_NVIC_I2C2_PRI1      (0x00000020)
#define NVIC_PRI17_R_NVIC_I2C2_PRI2      (0x00000040)
#define NVIC_PRI17_R_NVIC_I2C2_PRI3      (0x00000060)
#define NVIC_PRI17_R_NVIC_I2C2_PRI4      (0x00000080)
#define NVIC_PRI17_R_NVIC_I2C2_PRI5      (0x000000A0)
#define NVIC_PRI17_R_NVIC_I2C2_PRI6      (0x000000C0)
#define NVIC_PRI17_R_NVIC_I2C2_PRI7      (0x000000E0)

#define NVIC_PRI17_NVIC_I2C2_MASK      (0x00000007)
#define NVIC_PRI17_NVIC_I2C2_PRI0      (0x00000000)
#define NVIC_PRI17_NVIC_I2C2_PRI1      (0x00000001)
#define NVIC_PRI17_NVIC_I2C2_PRI2      (0x00000002)
#define NVIC_PRI17_NVIC_I2C2_PRI3      (0x00000003)
#define NVIC_PRI17_NVIC_I2C2_PRI4      (0x00000004)
#define NVIC_PRI17_NVIC_I2C2_PRI5      (0x00000005)
#define NVIC_PRI17_NVIC_I2C2_PRI6      (0x00000006)
#define NVIC_PRI17_NVIC_I2C2_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI17_R_NVIC_I2C3_MASK      (0x0000E000)
#define NVIC_PRI17_R_NVIC_I2C3_BIT       (13)
#define NVIC_PRI17_R_NVIC_I2C3_PRI0      (0x00000000)
#define NVIC_PRI17_R_NVIC_I2C3_PRI1      (0x00002000)
#define NVIC_PRI17_R_NVIC_I2C3_PRI2      (0x00004000)
#define NVIC_PRI17_R_NVIC_I2C3_PRI3      (0x00006000)
#define NVIC_PRI17_R_NVIC_I2C3_PRI4      (0x00008000)
#define NVIC_PRI17_R_NVIC_I2C3_PRI5      (0x0000A000)
#define NVIC_PRI17_R_NVIC_I2C3_PRI6      (0x0000C000)
#define NVIC_PRI17_R_NVIC_I2C3_PRI7      (0x0000E000)

#define NVIC_PRI17_NVIC_I2C3_MASK      (0x00000007)
#define NVIC_PRI17_NVIC_I2C3_PRI0      (0x00000000)
#define NVIC_PRI17_NVIC_I2C3_PRI1      (0x00000001)
#define NVIC_PRI17_NVIC_I2C3_PRI2      (0x00000002)
#define NVIC_PRI17_NVIC_I2C3_PRI3      (0x00000003)
#define NVIC_PRI17_NVIC_I2C3_PRI4      (0x00000004)
#define NVIC_PRI17_NVIC_I2C3_PRI5      (0x00000005)
#define NVIC_PRI17_NVIC_I2C3_PRI6      (0x00000006)
#define NVIC_PRI17_NVIC_I2C3_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI17_R_NVIC_TIMER4A_MASK      (0x00E00000)
#define NVIC_PRI17_R_NVIC_TIMER4A_BIT       (21)
#define NVIC_PRI17_R_NVIC_TIMER4A_PRI0      (0x00000000)
#define NVIC_PRI17_R_NVIC_TIMER4A_PRI1      (0x00200000)
#define NVIC_PRI17_R_NVIC_TIMER4A_PRI2      (0x00400000)
#define NVIC_PRI17_R_NVIC_TIMER4A_PRI3      (0x00600000)
#define NVIC_PRI17_R_NVIC_TIMER4A_PRI4      (0x00800000)
#define NVIC_PRI17_R_NVIC_TIMER4A_PRI5      (0x00A00000)
#define NVIC_PRI17_R_NVIC_TIMER4A_PRI6      (0x00C00000)
#define NVIC_PRI17_R_NVIC_TIMER4A_PRI7      (0x00E00000)

#define NVIC_PRI17_NVIC_TIMER4A_MASK      (0x00000007)
#define NVIC_PRI17_NVIC_TIMER4A_PRI0      (0x00000000)
#define NVIC_PRI17_NVIC_TIMER4A_PRI1      (0x00000001)
#define NVIC_PRI17_NVIC_TIMER4A_PRI2      (0x00000002)
#define NVIC_PRI17_NVIC_TIMER4A_PRI3      (0x00000003)
#define NVIC_PRI17_NVIC_TIMER4A_PRI4      (0x00000004)
#define NVIC_PRI17_NVIC_TIMER4A_PRI5      (0x00000005)
#define NVIC_PRI17_NVIC_TIMER4A_PRI6      (0x00000006)
#define NVIC_PRI17_NVIC_TIMER4A_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI17_R_NVIC_TIMER4B_MASK      (0xE0000000)
#define NVIC_PRI17_R_NVIC_TIMER4B_BIT       (29)
#define NVIC_PRI17_R_NVIC_TIMER4B_PRI0      (0x00000000)
#define NVIC_PRI17_R_NVIC_TIMER4B_PRI1      (0x20000000)
#define NVIC_PRI17_R_NVIC_TIMER4B_PRI2      (0x40000000)
#define NVIC_PRI17_R_NVIC_TIMER4B_PRI3      (0x60000000)
#define NVIC_PRI17_R_NVIC_TIMER4B_PRI4      (0x80000000)
#define NVIC_PRI17_R_NVIC_TIMER4B_PRI5      (0xA0000000)
#define NVIC_PRI17_R_NVIC_TIMER4B_PRI6      (0xC0000000)
#define NVIC_PRI17_R_NVIC_TIMER4B_PRI7      (0xE0000000)

#define NVIC_PRI17_NVIC_TIMER4B_MASK      (0x00000007)
#define NVIC_PRI17_NVIC_TIMER4B_PRI0      (0x00000000)
#define NVIC_PRI17_NVIC_TIMER4B_PRI1      (0x00000001)
#define NVIC_PRI17_NVIC_TIMER4B_PRI2      (0x00000002)
#define NVIC_PRI17_NVIC_TIMER4B_PRI3      (0x00000003)
#define NVIC_PRI17_NVIC_TIMER4B_PRI4      (0x00000004)
#define NVIC_PRI17_NVIC_TIMER4B_PRI5      (0x00000005)
#define NVIC_PRI17_NVIC_TIMER4B_PRI6      (0x00000006)
#define NVIC_PRI17_NVIC_TIMER4B_PRI7      (0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI18 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI18            (((PRI18_TypeDef*)(NVIC_BASE+NVIC_PRI18_OFFSET)))
#define NVIC_PRI18_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI18_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI19 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI19            (((PRI19_TypeDef*)(NVIC_BASE+NVIC_PRI19_OFFSET)))
#define NVIC_PRI19_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI19_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI20 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI20            (((PRI20_TypeDef*)(NVIC_BASE+NVIC_PRI20_OFFSET)))
#define NVIC_PRI20_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI20_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI21 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI21            (((PRI21_TypeDef*)(NVIC_BASE+NVIC_PRI21_OFFSET)))
#define NVIC_PRI21_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI21_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI22 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI22            (((PRI22_TypeDef*)(NVIC_BASE+NVIC_PRI22_OFFSET)))
#define NVIC_PRI22_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI22_OFFSET)))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI23 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI23            (((PRI23_TypeDef*)(NVIC_BASE+NVIC_PRI23_OFFSET)))
#define NVIC_PRI23_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI23_OFFSET)))

//--------
#define NVIC_PRI23_R_NVIC_TIMER5A_MASK      (0x000000E0)
#define NVIC_PRI23_R_NVIC_TIMER5A_BIT       (5)
#define NVIC_PRI23_R_NVIC_TIMER5A_PRI0      (0x00000000)
#define NVIC_PRI23_R_NVIC_TIMER5A_PRI1      (0x00000020)
#define NVIC_PRI23_R_NVIC_TIMER5A_PRI2      (0x00000040)
#define NVIC_PRI23_R_NVIC_TIMER5A_PRI3      (0x00000060)
#define NVIC_PRI23_R_NVIC_TIMER5A_PRI4      (0x00000080)
#define NVIC_PRI23_R_NVIC_TIMER5A_PRI5      (0x000000A0)
#define NVIC_PRI23_R_NVIC_TIMER5A_PRI6      (0x000000C0)
#define NVIC_PRI23_R_NVIC_TIMER5A_PRI7      (0x000000E0)

#define NVIC_PRI23_NVIC_TIMER5A_MASK      (0x00000007)
#define NVIC_PRI23_NVIC_TIMER5A_PRI0      (0x00000000)
#define NVIC_PRI23_NVIC_TIMER5A_PRI1      (0x00000001)
#define NVIC_PRI23_NVIC_TIMER5A_PRI2      (0x00000002)
#define NVIC_PRI23_NVIC_TIMER5A_PRI3      (0x00000003)
#define NVIC_PRI23_NVIC_TIMER5A_PRI4      (0x00000004)
#define NVIC_PRI23_NVIC_TIMER5A_PRI5      (0x00000005)
#define NVIC_PRI23_NVIC_TIMER5A_PRI6      (0x00000006)
#define NVIC_PRI23_NVIC_TIMER5A_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI23_R_NVIC_TIMER5B_MASK      (0x0000E000)
#define NVIC_PRI23_R_NVIC_TIMER5B_BIT       (13)
#define NVIC_PRI23_R_NVIC_TIMER5B_PRI0      (0x00000000)
#define NVIC_PRI23_R_NVIC_TIMER5B_PRI1      (0x00002000)
#define NVIC_PRI23_R_NVIC_TIMER5B_PRI2      (0x00004000)
#define NVIC_PRI23_R_NVIC_TIMER5B_PRI3      (0x00006000)
#define NVIC_PRI23_R_NVIC_TIMER5B_PRI4      (0x00008000)
#define NVIC_PRI23_R_NVIC_TIMER5B_PRI5      (0x0000A000)
#define NVIC_PRI23_R_NVIC_TIMER5B_PRI6      (0x0000C000)
#define NVIC_PRI23_R_NVIC_TIMER5B_PRI7      (0x0000E000)

#define NVIC_PRI23_NVIC_TIMER5B_MASK      (0x00000007)
#define NVIC_PRI23_NVIC_TIMER5B_PRI0      (0x00000000)
#define NVIC_PRI23_NVIC_TIMER5B_PRI1      (0x00000001)
#define NVIC_PRI23_NVIC_TIMER5B_PRI2      (0x00000002)
#define NVIC_PRI23_NVIC_TIMER5B_PRI3      (0x00000003)
#define NVIC_PRI23_NVIC_TIMER5B_PRI4      (0x00000004)
#define NVIC_PRI23_NVIC_TIMER5B_PRI5      (0x00000005)
#define NVIC_PRI23_NVIC_TIMER5B_PRI6      (0x00000006)
#define NVIC_PRI23_NVIC_TIMER5B_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI23_R_NVIC_WTIMER0A_MASK      (0x00E00000)
#define NVIC_PRI23_R_NVIC_WTIMER0A_BIT       (21)
#define NVIC_PRI23_R_NVIC_WTIMER0A_PRI0      (0x00000000)
#define NVIC_PRI23_R_NVIC_WTIMER0A_PRI1      (0x00200000)
#define NVIC_PRI23_R_NVIC_WTIMER0A_PRI2      (0x00400000)
#define NVIC_PRI23_R_NVIC_WTIMER0A_PRI3      (0x00600000)
#define NVIC_PRI23_R_NVIC_WTIMER0A_PRI4      (0x00800000)
#define NVIC_PRI23_R_NVIC_WTIMER0A_PRI5      (0x00A00000)
#define NVIC_PRI23_R_NVIC_WTIMER0A_PRI6      (0x00C00000)
#define NVIC_PRI23_R_NVIC_WTIMER0A_PRI7      (0x00E00000)

#define NVIC_PRI23_NVIC_WTIMER0A_MASK      (0x00000007)
#define NVIC_PRI23_NVIC_WTIMER0A_PRI0      (0x00000000)
#define NVIC_PRI23_NVIC_WTIMER0A_PRI1      (0x00000001)
#define NVIC_PRI23_NVIC_WTIMER0A_PRI2      (0x00000002)
#define NVIC_PRI23_NVIC_WTIMER0A_PRI3      (0x00000003)
#define NVIC_PRI23_NVIC_WTIMER0A_PRI4      (0x00000004)
#define NVIC_PRI23_NVIC_WTIMER0A_PRI5      (0x00000005)
#define NVIC_PRI23_NVIC_WTIMER0A_PRI6      (0x00000006)
#define NVIC_PRI23_NVIC_WTIMER0A_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI23_R_NVIC_WTIMER0B_MASK      (0xE0000000)
#define NVIC_PRI23_R_NVIC_WTIMER0B_BIT       (29)
#define NVIC_PRI23_R_NVIC_WTIMER0B_PRI0      (0x00000000)
#define NVIC_PRI23_R_NVIC_WTIMER0B_PRI1      (0x20000000)
#define NVIC_PRI23_R_NVIC_WTIMER0B_PRI2      (0x40000000)
#define NVIC_PRI23_R_NVIC_WTIMER0B_PRI3      (0x60000000)
#define NVIC_PRI23_R_NVIC_WTIMER0B_PRI4      (0x80000000)
#define NVIC_PRI23_R_NVIC_WTIMER0B_PRI5      (0xA0000000)
#define NVIC_PRI23_R_NVIC_WTIMER0B_PRI6      (0xC0000000)
#define NVIC_PRI23_R_NVIC_WTIMER0B_PRI7      (0xE0000000)

#define NVIC_PRI23_NVIC_WTIMER0B_MASK      (0x00000007)
#define NVIC_PRI23_NVIC_WTIMER0B_PRI0      (0x00000000)
#define NVIC_PRI23_NVIC_WTIMER0B_PRI1      (0x00000001)
#define NVIC_PRI23_NVIC_WTIMER0B_PRI2      (0x00000002)
#define NVIC_PRI23_NVIC_WTIMER0B_PRI3      (0x00000003)
#define NVIC_PRI23_NVIC_WTIMER0B_PRI4      (0x00000004)
#define NVIC_PRI23_NVIC_WTIMER0B_PRI5      (0x00000005)
#define NVIC_PRI23_NVIC_WTIMER0B_PRI6      (0x00000006)
#define NVIC_PRI23_NVIC_WTIMER0B_PRI7      (0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI24 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI24            (((PRI24_TypeDef*)(NVIC_BASE+NVIC_PRI24_OFFSET)))
#define NVIC_PRI24_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI24_OFFSET)))

//--------
#define NVIC_PRI24_R_NVIC_WTIMER1A_MASK      (0x000000E0)
#define NVIC_PRI24_R_NVIC_WTIMER1A_BIT       (5)
#define NVIC_PRI24_R_NVIC_WTIMER1A_PRI0      (0x00000000)
#define NVIC_PRI24_R_NVIC_WTIMER1A_PRI1      (0x00000020)
#define NVIC_PRI24_R_NVIC_WTIMER1A_PRI2      (0x00000040)
#define NVIC_PRI24_R_NVIC_WTIMER1A_PRI3      (0x00000060)
#define NVIC_PRI24_R_NVIC_WTIMER1A_PRI4      (0x00000080)
#define NVIC_PRI24_R_NVIC_WTIMER1A_PRI5      (0x000000A0)
#define NVIC_PRI24_R_NVIC_WTIMER1A_PRI6      (0x000000C0)
#define NVIC_PRI24_R_NVIC_WTIMER1A_PRI7      (0x000000E0)

#define NVIC_PRI24_NVIC_WTIMER1A_MASK      (0x00000007)
#define NVIC_PRI24_NVIC_WTIMER1A_PRI0      (0x00000000)
#define NVIC_PRI24_NVIC_WTIMER1A_PRI1      (0x00000001)
#define NVIC_PRI24_NVIC_WTIMER1A_PRI2      (0x00000002)
#define NVIC_PRI24_NVIC_WTIMER1A_PRI3      (0x00000003)
#define NVIC_PRI24_NVIC_WTIMER1A_PRI4      (0x00000004)
#define NVIC_PRI24_NVIC_WTIMER1A_PRI5      (0x00000005)
#define NVIC_PRI24_NVIC_WTIMER1A_PRI6      (0x00000006)
#define NVIC_PRI24_NVIC_WTIMER1A_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI24_R_NVIC_WTIMER1B_MASK      (0x0000E000)
#define NVIC_PRI24_R_NVIC_WTIMER1B_BIT       (13)
#define NVIC_PRI24_R_NVIC_WTIMER1B_PRI0      (0x00000000)
#define NVIC_PRI24_R_NVIC_WTIMER1B_PRI1      (0x00002000)
#define NVIC_PRI24_R_NVIC_WTIMER1B_PRI2      (0x00004000)
#define NVIC_PRI24_R_NVIC_WTIMER1B_PRI3      (0x00006000)
#define NVIC_PRI24_R_NVIC_WTIMER1B_PRI4      (0x00008000)
#define NVIC_PRI24_R_NVIC_WTIMER1B_PRI5      (0x0000A000)
#define NVIC_PRI24_R_NVIC_WTIMER1B_PRI6      (0x0000C000)
#define NVIC_PRI24_R_NVIC_WTIMER1B_PRI7      (0x0000E000)

#define NVIC_PRI24_NVIC_WTIMER1B_MASK      (0x00000007)
#define NVIC_PRI24_NVIC_WTIMER1B_PRI0      (0x00000000)
#define NVIC_PRI24_NVIC_WTIMER1B_PRI1      (0x00000001)
#define NVIC_PRI24_NVIC_WTIMER1B_PRI2      (0x00000002)
#define NVIC_PRI24_NVIC_WTIMER1B_PRI3      (0x00000003)
#define NVIC_PRI24_NVIC_WTIMER1B_PRI4      (0x00000004)
#define NVIC_PRI24_NVIC_WTIMER1B_PRI5      (0x00000005)
#define NVIC_PRI24_NVIC_WTIMER1B_PRI6      (0x00000006)
#define NVIC_PRI24_NVIC_WTIMER1B_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI24_R_NVIC_WTIMER2A_MASK      (0x00E00000)
#define NVIC_PRI24_R_NVIC_WTIMER2A_BIT       (21)
#define NVIC_PRI24_R_NVIC_WTIMER2A_PRI0      (0x00000000)
#define NVIC_PRI24_R_NVIC_WTIMER2A_PRI1      (0x00200000)
#define NVIC_PRI24_R_NVIC_WTIMER2A_PRI2      (0x00400000)
#define NVIC_PRI24_R_NVIC_WTIMER2A_PRI3      (0x00600000)
#define NVIC_PRI24_R_NVIC_WTIMER2A_PRI4      (0x00800000)
#define NVIC_PRI24_R_NVIC_WTIMER2A_PRI5      (0x00A00000)
#define NVIC_PRI24_R_NVIC_WTIMER2A_PRI6      (0x00C00000)
#define NVIC_PRI24_R_NVIC_WTIMER2A_PRI7      (0x00E00000)

#define NVIC_PRI24_NVIC_WTIMER2A_MASK      (0x00000007)
#define NVIC_PRI24_NVIC_WTIMER2A_PRI0      (0x00000000)
#define NVIC_PRI24_NVIC_WTIMER2A_PRI1      (0x00000001)
#define NVIC_PRI24_NVIC_WTIMER2A_PRI2      (0x00000002)
#define NVIC_PRI24_NVIC_WTIMER2A_PRI3      (0x00000003)
#define NVIC_PRI24_NVIC_WTIMER2A_PRI4      (0x00000004)
#define NVIC_PRI24_NVIC_WTIMER2A_PRI5      (0x00000005)
#define NVIC_PRI24_NVIC_WTIMER2A_PRI6      (0x00000006)
#define NVIC_PRI24_NVIC_WTIMER2A_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI24_R_NVIC_WTIMER2B_MASK      (0xE0000000)
#define NVIC_PRI24_R_NVIC_WTIMER2B_BIT       (29)
#define NVIC_PRI24_R_NVIC_WTIMER2B_PRI0      (0x00000000)
#define NVIC_PRI24_R_NVIC_WTIMER2B_PRI1      (0x20000000)
#define NVIC_PRI24_R_NVIC_WTIMER2B_PRI2      (0x40000000)
#define NVIC_PRI24_R_NVIC_WTIMER2B_PRI3      (0x60000000)
#define NVIC_PRI24_R_NVIC_WTIMER2B_PRI4      (0x80000000)
#define NVIC_PRI24_R_NVIC_WTIMER2B_PRI5      (0xA0000000)
#define NVIC_PRI24_R_NVIC_WTIMER2B_PRI6      (0xC0000000)
#define NVIC_PRI24_R_NVIC_WTIMER2B_PRI7      (0xE0000000)

#define NVIC_PRI24_NVIC_WTIMER2B_MASK      (0x00000007)
#define NVIC_PRI24_NVIC_WTIMER2B_PRI0      (0x00000000)
#define NVIC_PRI24_NVIC_WTIMER2B_PRI1      (0x00000001)
#define NVIC_PRI24_NVIC_WTIMER2B_PRI2      (0x00000002)
#define NVIC_PRI24_NVIC_WTIMER2B_PRI3      (0x00000003)
#define NVIC_PRI24_NVIC_WTIMER2B_PRI4      (0x00000004)
#define NVIC_PRI24_NVIC_WTIMER2B_PRI5      (0x00000005)
#define NVIC_PRI24_NVIC_WTIMER2B_PRI6      (0x00000006)
#define NVIC_PRI24_NVIC_WTIMER2B_PRI7      (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI25 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI25            (((PRI25_TypeDef*)(NVIC_BASE+NVIC_PRI25_OFFSET)))
#define NVIC_PRI25_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI25_OFFSET)))

//--------
#define NVIC_PRI25_R_NVIC_WTIMER3A_MASK      (0x000000E0)
#define NVIC_PRI25_R_NVIC_WTIMER3A_BIT       (5)
#define NVIC_PRI25_R_NVIC_WTIMER3A_PRI0      (0x00000000)
#define NVIC_PRI25_R_NVIC_WTIMER3A_PRI1      (0x00000020)
#define NVIC_PRI25_R_NVIC_WTIMER3A_PRI2      (0x00000040)
#define NVIC_PRI25_R_NVIC_WTIMER3A_PRI3      (0x00000060)
#define NVIC_PRI25_R_NVIC_WTIMER3A_PRI4      (0x00000080)
#define NVIC_PRI25_R_NVIC_WTIMER3A_PRI5      (0x000000A0)
#define NVIC_PRI25_R_NVIC_WTIMER3A_PRI6      (0x000000C0)
#define NVIC_PRI25_R_NVIC_WTIMER3A_PRI7      (0x000000E0)

#define NVIC_PRI25_NVIC_WTIMER3A_MASK      (0x00000007)
#define NVIC_PRI25_NVIC_WTIMER3A_PRI0      (0x00000000)
#define NVIC_PRI25_NVIC_WTIMER3A_PRI1      (0x00000001)
#define NVIC_PRI25_NVIC_WTIMER3A_PRI2      (0x00000002)
#define NVIC_PRI25_NVIC_WTIMER3A_PRI3      (0x00000003)
#define NVIC_PRI25_NVIC_WTIMER3A_PRI4      (0x00000004)
#define NVIC_PRI25_NVIC_WTIMER3A_PRI5      (0x00000005)
#define NVIC_PRI25_NVIC_WTIMER3A_PRI6      (0x00000006)
#define NVIC_PRI25_NVIC_WTIMER3A_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI25_R_NVIC_WTIMER3B_MASK      (0x0000E000)
#define NVIC_PRI25_R_NVIC_WTIMER3B_BIT       (13)
#define NVIC_PRI25_R_NVIC_WTIMER3B_PRI0      (0x00000000)
#define NVIC_PRI25_R_NVIC_WTIMER3B_PRI1      (0x00002000)
#define NVIC_PRI25_R_NVIC_WTIMER3B_PRI2      (0x00004000)
#define NVIC_PRI25_R_NVIC_WTIMER3B_PRI3      (0x00006000)
#define NVIC_PRI25_R_NVIC_WTIMER3B_PRI4      (0x00008000)
#define NVIC_PRI25_R_NVIC_WTIMER3B_PRI5      (0x0000A000)
#define NVIC_PRI25_R_NVIC_WTIMER3B_PRI6      (0x0000C000)
#define NVIC_PRI25_R_NVIC_WTIMER3B_PRI7      (0x0000E000)

#define NVIC_PRI25_NVIC_WTIMER3B_MASK      (0x00000007)
#define NVIC_PRI25_NVIC_WTIMER3B_PRI0      (0x00000000)
#define NVIC_PRI25_NVIC_WTIMER3B_PRI1      (0x00000001)
#define NVIC_PRI25_NVIC_WTIMER3B_PRI2      (0x00000002)
#define NVIC_PRI25_NVIC_WTIMER3B_PRI3      (0x00000003)
#define NVIC_PRI25_NVIC_WTIMER3B_PRI4      (0x00000004)
#define NVIC_PRI25_NVIC_WTIMER3B_PRI5      (0x00000005)
#define NVIC_PRI25_NVIC_WTIMER3B_PRI6      (0x00000006)
#define NVIC_PRI25_NVIC_WTIMER3B_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI25_R_NVIC_WTIMER4A_MASK      (0x00E00000)
#define NVIC_PRI25_R_NVIC_WTIMER4A_BIT       (21)
#define NVIC_PRI25_R_NVIC_WTIMER4A_PRI0      (0x00000000)
#define NVIC_PRI25_R_NVIC_WTIMER4A_PRI1      (0x00200000)
#define NVIC_PRI25_R_NVIC_WTIMER4A_PRI2      (0x00400000)
#define NVIC_PRI25_R_NVIC_WTIMER4A_PRI3      (0x00600000)
#define NVIC_PRI25_R_NVIC_WTIMER4A_PRI4      (0x00800000)
#define NVIC_PRI25_R_NVIC_WTIMER4A_PRI5      (0x00A00000)
#define NVIC_PRI25_R_NVIC_WTIMER4A_PRI6      (0x00C00000)
#define NVIC_PRI25_R_NVIC_WTIMER4A_PRI7      (0x00E00000)

#define NVIC_PRI25_NVIC_WTIMER4A_MASK      (0x00000007)
#define NVIC_PRI25_NVIC_WTIMER4A_PRI0      (0x00000000)
#define NVIC_PRI25_NVIC_WTIMER4A_PRI1      (0x00000001)
#define NVIC_PRI25_NVIC_WTIMER4A_PRI2      (0x00000002)
#define NVIC_PRI25_NVIC_WTIMER4A_PRI3      (0x00000003)
#define NVIC_PRI25_NVIC_WTIMER4A_PRI4      (0x00000004)
#define NVIC_PRI25_NVIC_WTIMER4A_PRI5      (0x00000005)
#define NVIC_PRI25_NVIC_WTIMER4A_PRI6      (0x00000006)
#define NVIC_PRI25_NVIC_WTIMER4A_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI25_R_NVIC_WTIMER4B_MASK      (0xE0000000)
#define NVIC_PRI25_R_NVIC_WTIMER4B_BIT       (29)
#define NVIC_PRI25_R_NVIC_WTIMER4B_PRI0      (0x00000000)
#define NVIC_PRI25_R_NVIC_WTIMER4B_PRI1      (0x20000000)
#define NVIC_PRI25_R_NVIC_WTIMER4B_PRI2      (0x40000000)
#define NVIC_PRI25_R_NVIC_WTIMER4B_PRI3      (0x60000000)
#define NVIC_PRI25_R_NVIC_WTIMER4B_PRI4      (0x80000000)
#define NVIC_PRI25_R_NVIC_WTIMER4B_PRI5      (0xA0000000)
#define NVIC_PRI25_R_NVIC_WTIMER4B_PRI6      (0xC0000000)
#define NVIC_PRI25_R_NVIC_WTIMER4B_PRI7      (0xE0000000)

#define NVIC_PRI25_NVIC_WTIMER4B_MASK      (0x00000007)
#define NVIC_PRI25_NVIC_WTIMER4B_PRI0      (0x00000000)
#define NVIC_PRI25_NVIC_WTIMER4B_PRI1      (0x00000001)
#define NVIC_PRI25_NVIC_WTIMER4B_PRI2      (0x00000002)
#define NVIC_PRI25_NVIC_WTIMER4B_PRI3      (0x00000003)
#define NVIC_PRI25_NVIC_WTIMER4B_PRI4      (0x00000004)
#define NVIC_PRI25_NVIC_WTIMER4B_PRI5      (0x00000005)
#define NVIC_PRI25_NVIC_WTIMER4B_PRI6      (0x00000006)
#define NVIC_PRI25_NVIC_WTIMER4B_PRI7      (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI26 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI26            (((PRI26_TypeDef*)(NVIC_BASE+NVIC_PRI26_OFFSET)))
#define NVIC_PRI26_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI26_OFFSET)))

//--------
#define NVIC_PRI26_R_NVIC_WTIMER5A_MASK      (0x000000E0)
#define NVIC_PRI26_R_NVIC_WTIMER5A_BIT       (5)
#define NVIC_PRI26_R_NVIC_WTIMER5A_PRI0      (0x00000000)
#define NVIC_PRI26_R_NVIC_WTIMER5A_PRI1      (0x00000020)
#define NVIC_PRI26_R_NVIC_WTIMER5A_PRI2      (0x00000040)
#define NVIC_PRI26_R_NVIC_WTIMER5A_PRI3      (0x00000060)
#define NVIC_PRI26_R_NVIC_WTIMER5A_PRI4      (0x00000080)
#define NVIC_PRI26_R_NVIC_WTIMER5A_PRI5      (0x000000A0)
#define NVIC_PRI26_R_NVIC_WTIMER5A_PRI6      (0x000000C0)
#define NVIC_PRI26_R_NVIC_WTIMER5A_PRI7      (0x000000E0)

#define NVIC_PRI26_NVIC_WTIMER5A_MASK      (0x00000007)
#define NVIC_PRI26_NVIC_WTIMER5A_PRI0      (0x00000000)
#define NVIC_PRI26_NVIC_WTIMER5A_PRI1      (0x00000001)
#define NVIC_PRI26_NVIC_WTIMER5A_PRI2      (0x00000002)
#define NVIC_PRI26_NVIC_WTIMER5A_PRI3      (0x00000003)
#define NVIC_PRI26_NVIC_WTIMER5A_PRI4      (0x00000004)
#define NVIC_PRI26_NVIC_WTIMER5A_PRI5      (0x00000005)
#define NVIC_PRI26_NVIC_WTIMER5A_PRI6      (0x00000006)
#define NVIC_PRI26_NVIC_WTIMER5A_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI26_R_NVIC_WTIMER5B_MASK      (0x0000E000)
#define NVIC_PRI26_R_NVIC_WTIMER5B_BIT       (13)
#define NVIC_PRI26_R_NVIC_WTIMER5B_PRI0      (0x00000000)
#define NVIC_PRI26_R_NVIC_WTIMER5B_PRI1      (0x00002000)
#define NVIC_PRI26_R_NVIC_WTIMER5B_PRI2      (0x00004000)
#define NVIC_PRI26_R_NVIC_WTIMER5B_PRI3      (0x00006000)
#define NVIC_PRI26_R_NVIC_WTIMER5B_PRI4      (0x00008000)
#define NVIC_PRI26_R_NVIC_WTIMER5B_PRI5      (0x0000A000)
#define NVIC_PRI26_R_NVIC_WTIMER5B_PRI6      (0x0000C000)
#define NVIC_PRI26_R_NVIC_WTIMER5B_PRI7      (0x0000E000)

#define NVIC_PRI26_NVIC_WTIMER5B_MASK      (0x00000007)
#define NVIC_PRI26_NVIC_WTIMER5B_PRI0      (0x00000000)
#define NVIC_PRI26_NVIC_WTIMER5B_PRI1      (0x00000001)
#define NVIC_PRI26_NVIC_WTIMER5B_PRI2      (0x00000002)
#define NVIC_PRI26_NVIC_WTIMER5B_PRI3      (0x00000003)
#define NVIC_PRI26_NVIC_WTIMER5B_PRI4      (0x00000004)
#define NVIC_PRI26_NVIC_WTIMER5B_PRI5      (0x00000005)
#define NVIC_PRI26_NVIC_WTIMER5B_PRI6      (0x00000006)
#define NVIC_PRI26_NVIC_WTIMER5B_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI26_R_NVIC_SYSEXC_MASK      (0x00E00000)
#define NVIC_PRI26_R_NVIC_SYSEXC_BIT       (21)
#define NVIC_PRI26_R_NVIC_SYSEXC_PRI0      (0x00000000)
#define NVIC_PRI26_R_NVIC_SYSEXC_PRI1      (0x00200000)
#define NVIC_PRI26_R_NVIC_SYSEXC_PRI2      (0x00400000)
#define NVIC_PRI26_R_NVIC_SYSEXC_PRI3      (0x00600000)
#define NVIC_PRI26_R_NVIC_SYSEXC_PRI4      (0x00800000)
#define NVIC_PRI26_R_NVIC_SYSEXC_PRI5      (0x00A00000)
#define NVIC_PRI26_R_NVIC_SYSEXC_PRI6      (0x00C00000)
#define NVIC_PRI26_R_NVIC_SYSEXC_PRI7      (0x00E00000)

#define NVIC_PRI26_NVIC_SYSEXC_MASK      (0x00000007)
#define NVIC_PRI26_NVIC_SYSEXC_PRI0      (0x00000000)
#define NVIC_PRI26_NVIC_SYSEXC_PRI1      (0x00000001)
#define NVIC_PRI26_NVIC_SYSEXC_PRI2      (0x00000002)
#define NVIC_PRI26_NVIC_SYSEXC_PRI3      (0x00000003)
#define NVIC_PRI26_NVIC_SYSEXC_PRI4      (0x00000004)
#define NVIC_PRI26_NVIC_SYSEXC_PRI5      (0x00000005)
#define NVIC_PRI26_NVIC_SYSEXC_PRI6      (0x00000006)
#define NVIC_PRI26_NVIC_SYSEXC_PRI7      (0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI27 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI27            (((PRI27_TypeDef*)(NVIC_BASE+NVIC_PRI27_OFFSET)))
#define NVIC_PRI27_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI27_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI28 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI28            (((PRI28_TypeDef*)(NVIC_BASE+NVIC_PRI28_OFFSET)))
#define NVIC_PRI28_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI28_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI29 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI29            (((PRI29_TypeDef*)(NVIC_BASE+NVIC_PRI29_OFFSET)))
#define NVIC_PRI29_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI29_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI30 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI30            (((PRI30_TypeDef*)(NVIC_BASE+NVIC_PRI30_OFFSET)))
#define NVIC_PRI30_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI30_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI31 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI31            (((PRI31_TypeDef*)(NVIC_BASE+NVIC_PRI31_OFFSET)))
#define NVIC_PRI31_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI31_OFFSET)))

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI32 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI32            (((PRI32_TypeDef*)(NVIC_BASE+NVIC_PRI32_OFFSET)))
#define NVIC_PRI32_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI32_OFFSET)))



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI33 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI33            (((PRI33_TypeDef*)(NVIC_BASE+NVIC_PRI33_OFFSET)))
#define NVIC_PRI33_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI33_OFFSET)))


//--------
#define NVIC_PRI33_R_NVIC_PWM1GEN0_MASK      (0x00E00000)
#define NVIC_PRI33_R_NVIC_PWM1GEN0_BIT       (21)
#define NVIC_PRI33_R_NVIC_PWM1GEN0_PRI0      (0x00000000)
#define NVIC_PRI33_R_NVIC_PWM1GEN0_PRI1      (0x00200000)
#define NVIC_PRI33_R_NVIC_PWM1GEN0_PRI2      (0x00400000)
#define NVIC_PRI33_R_NVIC_PWM1GEN0_PRI3      (0x00600000)
#define NVIC_PRI33_R_NVIC_PWM1GEN0_PRI4      (0x00800000)
#define NVIC_PRI33_R_NVIC_PWM1GEN0_PRI5      (0x00A00000)
#define NVIC_PRI33_R_NVIC_PWM1GEN0_PRI6      (0x00C00000)
#define NVIC_PRI33_R_NVIC_PWM1GEN0_PRI7      (0x00E00000)

#define NVIC_PRI33_NVIC_PWM1GEN0_MASK      (0x00000007)
#define NVIC_PRI33_NVIC_PWM1GEN0_PRI0      (0x00000000)
#define NVIC_PRI33_NVIC_PWM1GEN0_PRI1      (0x00000001)
#define NVIC_PRI33_NVIC_PWM1GEN0_PRI2      (0x00000002)
#define NVIC_PRI33_NVIC_PWM1GEN0_PRI3      (0x00000003)
#define NVIC_PRI33_NVIC_PWM1GEN0_PRI4      (0x00000004)
#define NVIC_PRI33_NVIC_PWM1GEN0_PRI5      (0x00000005)
#define NVIC_PRI33_NVIC_PWM1GEN0_PRI6      (0x00000006)
#define NVIC_PRI33_NVIC_PWM1GEN0_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI33_R_NVIC_PWM1GEN1_MASK      (0xE0000000)
#define NVIC_PRI33_R_NVIC_PWM1GEN1_BIT       (29)
#define NVIC_PRI33_R_NVIC_PWM1GEN1_PRI0      (0x00000000)
#define NVIC_PRI33_R_NVIC_PWM1GEN1_PRI1      (0x20000000)
#define NVIC_PRI33_R_NVIC_PWM1GEN1_PRI2      (0x40000000)
#define NVIC_PRI33_R_NVIC_PWM1GEN1_PRI3      (0x60000000)
#define NVIC_PRI33_R_NVIC_PWM1GEN1_PRI4      (0x80000000)
#define NVIC_PRI33_R_NVIC_PWM1GEN1_PRI5      (0xA0000000)
#define NVIC_PRI33_R_NVIC_PWM1GEN1_PRI6      (0xC0000000)
#define NVIC_PRI33_R_NVIC_PWM1GEN1_PRI7      (0xE0000000)

#define NVIC_PRI33_NVIC_PWM1GEN1_MASK      (0x00000007)
#define NVIC_PRI33_NVIC_PWM1GEN1_PRI0      (0x00000000)
#define NVIC_PRI33_NVIC_PWM1GEN1_PRI1      (0x00000001)
#define NVIC_PRI33_NVIC_PWM1GEN1_PRI2      (0x00000002)
#define NVIC_PRI33_NVIC_PWM1GEN1_PRI3      (0x00000003)
#define NVIC_PRI33_NVIC_PWM1GEN1_PRI4      (0x00000004)
#define NVIC_PRI33_NVIC_PWM1GEN1_PRI5      (0x00000005)
#define NVIC_PRI33_NVIC_PWM1GEN1_PRI6      (0x00000006)
#define NVIC_PRI33_NVIC_PWM1GEN1_PRI7      (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PRI34 ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_PRI34            (((PRI34_TypeDef*)(NVIC_BASE+NVIC_PRI34_OFFSET)))
#define NVIC_PRI34_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_PRI34_OFFSET)))

//--------
#define NVIC_PRI34_R_NVIC_PWM1GEN2_MASK      (0x000000E0)
#define NVIC_PRI34_R_NVIC_PWM1GEN2_BIT       (5)
#define NVIC_PRI34_R_NVIC_PWM1GEN2_PRI0      (0x00000000)
#define NVIC_PRI34_R_NVIC_PWM1GEN2_PRI1      (0x00000020)
#define NVIC_PRI34_R_NVIC_PWM1GEN2_PRI2      (0x00000040)
#define NVIC_PRI34_R_NVIC_PWM1GEN2_PRI3      (0x00000060)
#define NVIC_PRI34_R_NVIC_PWM1GEN2_PRI4      (0x00000080)
#define NVIC_PRI34_R_NVIC_PWM1GEN2_PRI5      (0x000000A0)
#define NVIC_PRI34_R_NVIC_PWM1GEN2_PRI6      (0x000000C0)
#define NVIC_PRI34_R_NVIC_PWM1GEN2_PRI7      (0x000000E0)

#define NVIC_PRI34_NVIC_PWM1GEN2_MASK      (0x00000007)
#define NVIC_PRI34_NVIC_PWM1GEN2_PRI0      (0x00000000)
#define NVIC_PRI34_NVIC_PWM1GEN2_PRI1      (0x00000001)
#define NVIC_PRI34_NVIC_PWM1GEN2_PRI2      (0x00000002)
#define NVIC_PRI34_NVIC_PWM1GEN2_PRI3      (0x00000003)
#define NVIC_PRI34_NVIC_PWM1GEN2_PRI4      (0x00000004)
#define NVIC_PRI34_NVIC_PWM1GEN2_PRI5      (0x00000005)
#define NVIC_PRI34_NVIC_PWM1GEN2_PRI6      (0x00000006)
#define NVIC_PRI34_NVIC_PWM1GEN2_PRI7      (0x00000007)
//--------

//--------
#define NVIC_PRI34_R_NVIC_PWM1GEN3_MASK      (0x0000E000)
#define NVIC_PRI34_R_NVIC_PWM1GEN3_BIT       (13)
#define NVIC_PRI34_R_NVIC_PWM1GEN3_PRI0      (0x00000000)
#define NVIC_PRI34_R_NVIC_PWM1GEN3_PRI1      (0x00002000)
#define NVIC_PRI34_R_NVIC_PWM1GEN3_PRI2      (0x00004000)
#define NVIC_PRI34_R_NVIC_PWM1GEN3_PRI3      (0x00006000)
#define NVIC_PRI34_R_NVIC_PWM1GEN3_PRI4      (0x00008000)
#define NVIC_PRI34_R_NVIC_PWM1GEN3_PRI5      (0x0000A000)
#define NVIC_PRI34_R_NVIC_PWM1GEN3_PRI6      (0x0000C000)
#define NVIC_PRI34_R_NVIC_PWM1GEN3_PRI7      (0x0000E000)

#define NVIC_PRI34_NVIC_PWM1GEN3_MASK      (0x00000007)
#define NVIC_PRI34_NVIC_PWM1GEN3_PRI0      (0x00000000)
#define NVIC_PRI34_NVIC_PWM1GEN3_PRI1      (0x00000001)
#define NVIC_PRI34_NVIC_PWM1GEN3_PRI2      (0x00000002)
#define NVIC_PRI34_NVIC_PWM1GEN3_PRI3      (0x00000003)
#define NVIC_PRI34_NVIC_PWM1GEN3_PRI4      (0x00000004)
#define NVIC_PRI34_NVIC_PWM1GEN3_PRI5      (0x00000005)
#define NVIC_PRI34_NVIC_PWM1GEN3_PRI6      (0x00000006)
#define NVIC_PRI34_NVIC_PWM1GEN3_PRI7      (0x00000007)
//--------


//--------
#define NVIC_PRI34_R_NVIC_PWM1FAULT_MASK      (0x00E00000)
#define NVIC_PRI34_R_NVIC_PWM1FAULT_BIT       (21)
#define NVIC_PRI34_R_NVIC_PWM1FAULT_PRI0      (0x00000000)
#define NVIC_PRI34_R_NVIC_PWM1FAULT_PRI1      (0x00200000)
#define NVIC_PRI34_R_NVIC_PWM1FAULT_PRI2      (0x00400000)
#define NVIC_PRI34_R_NVIC_PWM1FAULT_PRI3      (0x00600000)
#define NVIC_PRI34_R_NVIC_PWM1FAULT_PRI4      (0x00800000)
#define NVIC_PRI34_R_NVIC_PWM1FAULT_PRI5      (0x00A00000)
#define NVIC_PRI34_R_NVIC_PWM1FAULT_PRI6      (0x00C00000)
#define NVIC_PRI34_R_NVIC_PWM1FAULT_PRI7      (0x00E00000)

#define NVIC_PRI34_NVIC_PWM1FAULT_MASK      (0x00000007)
#define NVIC_PRI34_NVIC_PWM1FAULT_PRI0      (0x00000000)
#define NVIC_PRI34_NVIC_PWM1FAULT_PRI1      (0x00000001)
#define NVIC_PRI34_NVIC_PWM1FAULT_PRI2      (0x00000002)
#define NVIC_PRI34_NVIC_PWM1FAULT_PRI3      (0x00000003)
#define NVIC_PRI34_NVIC_PWM1FAULT_PRI4      (0x00000004)
#define NVIC_PRI34_NVIC_PWM1FAULT_PRI5      (0x00000005)
#define NVIC_PRI34_NVIC_PWM1FAULT_PRI6      (0x00000006)
#define NVIC_PRI34_NVIC_PWM1FAULT_PRI7      (0x00000007)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// SWTRIG ///////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

#define NVIC_SWTRIG            (((SWTRIG_TypeDef*)(NVIC_BASE+NVIC_SWTRIG_OFFSET)))
#define NVIC_SWTRIG_R          (*((volatile uint32_t *)(NVIC_BASE+NVIC_SWTRIG_OFFSET)))



//--------
#define NVIC_SWTRIG_R_INTID_MASK       (0x000000FF)
#define NVIC_SWTRIG_R_INTID_BIT        (0)
#define NVIC_SWTRIG_R_INTID_GPIOA      (0x00000000)
#define NVIC_SWTRIG_R_INTID_GPIOB      (0x00000001)
#define NVIC_SWTRIG_R_INTID_GPIOC      (0x00000002)
#define NVIC_SWTRIG_R_INTID_GPIOD      (0x00000003)
#define NVIC_SWTRIG_R_INTID_GPIOE      (0x00000004)
#define NVIC_SWTRIG_R_INTID_UART0      (0x00000005)
#define NVIC_SWTRIG_R_INTID_UART1      (0x00000006)
#define NVIC_SWTRIG_R_INTID_SSI0       (0x00000007)
#define NVIC_SWTRIG_R_INTID_I2C0       (0x00000008)
#define NVIC_SWTRIG_R_INTID_PWM0FAULT  (0x00000009)
#define NVIC_SWTRIG_R_INTID_PWM0GEN0   (0x0000000A)
#define NVIC_SWTRIG_R_INTID_PWM0GEN1   (0x0000000B)
#define NVIC_SWTRIG_R_INTID_PWM0GEN2   (0x0000000C)
#define NVIC_SWTRIG_R_INTID_QEI0       (0x0000000D)
#define NVIC_SWTRIG_R_INTID_ADC0SEQ0   (0x0000000E)
#define NVIC_SWTRIG_R_INTID_ADC0SEQ1   (0x0000000F)
#define NVIC_SWTRIG_R_INTID_ADC0SEQ2   (0x00000010)
#define NVIC_SWTRIG_R_INTID_ADC0SEQ3   (0x00000011)
#define NVIC_SWTRIG_R_INTID_WDT01      (0x00000012)
#define NVIC_SWTRIG_R_INTID_TIMER0A    (0x00000013)
#define NVIC_SWTRIG_R_INTID_TIMER0B    (0x00000014)
#define NVIC_SWTRIG_R_INTID_TIMER1A    (0x00000015)
#define NVIC_SWTRIG_R_INTID_TIMER1B    (0x00000016)
#define NVIC_SWTRIG_R_INTID_TIMER2A    (0x00000017)
#define NVIC_SWTRIG_R_INTID_TIMER2B    (0x00000018)
#define NVIC_SWTRIG_R_INTID_ACOMP0     (0x00000019)
#define NVIC_SWTRIG_R_INTID_ACOMP1     (0x0000001A)
#define NVIC_SWTRIG_R_INTID_RES43      (0x0000001B)
#define NVIC_SWTRIG_R_INTID_SYSCTL     (0x0000001C)
#define NVIC_SWTRIG_R_INTID_FLASH      (0x0000001D)
#define NVIC_SWTRIG_R_INTID_PORTF      (0x0000001E)
#define NVIC_SWTRIG_R_INTID_RES47      (0x0000001F)
#define NVIC_SWTRIG_R_INTID_RES48      (0x00000020)
#define NVIC_SWTRIG_R_INTID_UART2      (0x00000021)
#define NVIC_SWTRIG_R_INTID_SSI1       (0x00000022)
#define NVIC_SWTRIG_R_INTID_TIMER3A    (0x00000023)
#define NVIC_SWTRIG_R_INTID_TIMER3B    (0x00000024)
#define NVIC_SWTRIG_R_INTID_I2C1       (0x00000025)
#define NVIC_SWTRIG_R_INTID_QEI1       (0x00000026)
#define NVIC_SWTRIG_R_INTID_CAN0       (0x00000027)
#define NVIC_SWTRIG_R_INTID_CAN1       (0x00000028)
#define NVIC_SWTRIG_R_INTID_RES57      (0x00000029)
#define NVIC_SWTRIG_R_INTID_RES58      (0x0000002A)
#define NVIC_SWTRIG_R_INTID_HIB        (0x0000002B)
#define NVIC_SWTRIG_R_INTID_USB        (0x0000002C)
#define NVIC_SWTRIG_R_INTID_PWM0GEN3   (0x0000002D)
#define NVIC_SWTRIG_R_INTID_UDMASOFT   (0x0000002E)
#define NVIC_SWTRIG_R_INTID_UDMAERROR  (0x0000002F)
#define NVIC_SWTRIG_R_INTID_ADC1SEQ0   (0x00000030)
#define NVIC_SWTRIG_R_INTID_ADC1SEQ1   (0x00000031)
#define NVIC_SWTRIG_R_INTID_ADC1SEQ2   (0x00000032)
#define NVIC_SWTRIG_R_INTID_ADC1SEQ3   (0x00000033)
#define NVIC_SWTRIG_R_INTID_RES68      (0x00000034)
#define NVIC_SWTRIG_R_INTID_RES69      (0x00000035)
#define NVIC_SWTRIG_R_INTID_RES70      (0x00000036)
#define NVIC_SWTRIG_R_INTID_RES71      (0x00000037)
#define NVIC_SWTRIG_R_INTID_RES72      (0x00000038)
#define NVIC_SWTRIG_R_INTID_SSI2       (0x00000039)
#define NVIC_SWTRIG_R_INTID_SSI3       (0x0000003A)
#define NVIC_SWTRIG_R_INTID_UART3      (0x0000003B)
#define NVIC_SWTRIG_R_INTID_UART4      (0x0000003C)
#define NVIC_SWTRIG_R_INTID_UART5      (0x0000003D)
#define NVIC_SWTRIG_R_INTID_UART6      (0x0000003E)
#define NVIC_SWTRIG_R_INTID_UART7      (0x0000003F)
#define NVIC_SWTRIG_R_INTID_RES80      (0x00000040)
#define NVIC_SWTRIG_R_INTID_RES81      (0x00000041)
#define NVIC_SWTRIG_R_INTID_RES82      (0x00000042)
#define NVIC_SWTRIG_R_INTID_RES83      (0x00000043)
#define NVIC_SWTRIG_R_INTID_I2C2       (0x00000044)
#define NVIC_SWTRIG_R_INTID_I2C3       (0x00000045)
#define NVIC_SWTRIG_R_INTID_TIMER4A    (0x00000046)
#define NVIC_SWTRIG_R_INTID_TIMER4B    (0x00000047)
#define NVIC_SWTRIG_R_INTID_RES88      (0x00000048)
#define NVIC_SWTRIG_R_INTID_RES89      (0x00000049)
#define NVIC_SWTRIG_R_INTID_RES90      (0x0000004A)
#define NVIC_SWTRIG_R_INTID_RES91      (0x0000004B)
#define NVIC_SWTRIG_R_INTID_RES92      (0x0000004C)
#define NVIC_SWTRIG_R_INTID_RES93      (0x0000004D)
#define NVIC_SWTRIG_R_INTID_RES94      (0x0000004E)
#define NVIC_SWTRIG_R_INTID_RES95      (0x0000004F)
#define NVIC_SWTRIG_R_INTID_RES96      (0x00000050)
#define NVIC_SWTRIG_R_INTID_RES97      (0x00000051)
#define NVIC_SWTRIG_R_INTID_RES98      (0x00000052)
#define NVIC_SWTRIG_R_INTID_RES99      (0x00000053)
#define NVIC_SWTRIG_R_INTID_RES100     (0x00000054)
#define NVIC_SWTRIG_R_INTID_RES101     (0x00000055)
#define NVIC_SWTRIG_R_INTID_RES102     (0x00000056)
#define NVIC_SWTRIG_R_INTID_RES103     (0x00000057)
#define NVIC_SWTRIG_R_INTID_RES104     (0x00000058)
#define NVIC_SWTRIG_R_INTID_RES105     (0x00000059)
#define NVIC_SWTRIG_R_INTID_RES106     (0x0000005A)
#define NVIC_SWTRIG_R_INTID_RES107     (0x0000005B)
#define NVIC_SWTRIG_R_INTID_TIMER5A    (0x0000005C)
#define NVIC_SWTRIG_R_INTID_TIMER5B    (0x0000005D)
#define NVIC_SWTRIG_R_INTID_WTIMER0A   (0x0000005E)
#define NVIC_SWTRIG_R_INTID_WTIMER0B   (0x0000005F)
#define NVIC_SWTRIG_R_INTID_WTIMER1A   (0x00000060)
#define NVIC_SWTRIG_R_INTID_WTIMER1B   (0x00000061)
#define NVIC_SWTRIG_R_INTID_WTIMER2A   (0x00000062)
#define NVIC_SWTRIG_R_INTID_WTIMER2B   (0x00000063)
#define NVIC_SWTRIG_R_INTID_WTIMER3A   (0x00000064)
#define NVIC_SWTRIG_R_INTID_WTIMER3B   (0x00000065)
#define NVIC_SWTRIG_R_INTID_WTIMER4A   (0x00000066)
#define NVIC_SWTRIG_R_INTID_WTIMER4B   (0x00000067)
#define NVIC_SWTRIG_R_INTID_WTIMER5A   (0x00000068)
#define NVIC_SWTRIG_R_INTID_WTIMER5B   (0x00000069)
#define NVIC_SWTRIG_R_INTID_SYSEXC     (0x0000006A)
#define NVIC_SWTRIG_R_INTID_RES123     (0x0000006B)
#define NVIC_SWTRIG_R_INTID_RES124     (0x0000006C)
#define NVIC_SWTRIG_R_INTID_RES125     (0x0000006D)
#define NVIC_SWTRIG_R_INTID_RES126     (0x0000006E)
#define NVIC_SWTRIG_R_INTID_RES127     (0x0000006F)
#define NVIC_SWTRIG_R_INTID_RES128     (0x00000070)
#define NVIC_SWTRIG_R_INTID_RES129     (0x00000071)
#define NVIC_SWTRIG_R_INTID_RES130     (0x00000072)
#define NVIC_SWTRIG_R_INTID_RES131     (0x00000073)
#define NVIC_SWTRIG_R_INTID_RES132     (0x00000074)
#define NVIC_SWTRIG_R_INTID_RES133     (0x00000075)
#define NVIC_SWTRIG_R_INTID_RES134     (0x00000076)
#define NVIC_SWTRIG_R_INTID_RES135     (0x00000077)
#define NVIC_SWTRIG_R_INTID_RES136     (0x00000078)
#define NVIC_SWTRIG_R_INTID_RES137     (0x00000079)
#define NVIC_SWTRIG_R_INTID_RES138     (0x0000007A)
#define NVIC_SWTRIG_R_INTID_RES139     (0x0000007B)
#define NVIC_SWTRIG_R_INTID_RES140     (0x0000007C)
#define NVIC_SWTRIG_R_INTID_RES141     (0x0000007D)
#define NVIC_SWTRIG_R_INTID_RES142     (0x0000007E)
#define NVIC_SWTRIG_R_INTID_RES143     (0x0000007F)
#define NVIC_SWTRIG_R_INTID_RES144     (0x00000080)
#define NVIC_SWTRIG_R_INTID_RES145     (0x00000081)
#define NVIC_SWTRIG_R_INTID_RES146     (0x00000082)
#define NVIC_SWTRIG_R_INTID_RES147     (0x00000083)
#define NVIC_SWTRIG_R_INTID_RES148     (0x00000084)
#define NVIC_SWTRIG_R_INTID_RES149     (0x00000085)
#define NVIC_SWTRIG_R_INTID_PWM1GEN0   (0x00000086)
#define NVIC_SWTRIG_R_INTID_PWM1GEN1   (0x00000087)
#define NVIC_SWTRIG_R_INTID_PWM1GEN2   (0x00000088)
#define NVIC_SWTRIG_R_INTID_PWM1GEN3   (0x00000089)
#define NVIC_SWTRIG_R_INTID_PWM1FAULT  (0x0000008A)


#define NVIC_SWTRIG_INTID_MASK       (0x000000FF)
#define NVIC_SWTRIG_INTID_GPIOA      (0x00000000)
#define NVIC_SWTRIG_INTID_GPIOB      (0x00000001)
#define NVIC_SWTRIG_INTID_GPIOC      (0x00000002)
#define NVIC_SWTRIG_INTID_GPIOD      (0x00000003)
#define NVIC_SWTRIG_INTID_GPIOE      (0x00000004)
#define NVIC_SWTRIG_INTID_UART0      (0x00000005)
#define NVIC_SWTRIG_INTID_UART1      (0x00000006)
#define NVIC_SWTRIG_INTID_SSI0       (0x00000007)
#define NVIC_SWTRIG_INTID_I2C0       (0x00000008)
#define NVIC_SWTRIG_INTID_PWM0FAULT  (0x00000009)
#define NVIC_SWTRIG_INTID_PWM0GEN0   (0x0000000A)
#define NVIC_SWTRIG_INTID_PWM0GEN1   (0x0000000B)
#define NVIC_SWTRIG_INTID_PWM0GEN2   (0x0000000C)
#define NVIC_SWTRIG_INTID_QEI0       (0x0000000D)
#define NVIC_SWTRIG_INTID_ADC0SEQ0   (0x0000000E)
#define NVIC_SWTRIG_INTID_ADC0SEQ1   (0x0000000F)
#define NVIC_SWTRIG_INTID_ADC0SEQ2   (0x00000010)
#define NVIC_SWTRIG_INTID_ADC0SEQ3   (0x00000011)
#define NVIC_SWTRIG_INTID_WDT01      (0x00000012)
#define NVIC_SWTRIG_INTID_TIMER0A    (0x00000013)
#define NVIC_SWTRIG_INTID_TIMER0B    (0x00000014)
#define NVIC_SWTRIG_INTID_TIMER1A    (0x00000015)
#define NVIC_SWTRIG_INTID_TIMER1B    (0x00000016)
#define NVIC_SWTRIG_INTID_TIMER2A    (0x00000017)
#define NVIC_SWTRIG_INTID_TIMER2B    (0x00000018)
#define NVIC_SWTRIG_INTID_ACOMP0     (0x00000019)
#define NVIC_SWTRIG_INTID_ACOMP1     (0x0000001A)
#define NVIC_SWTRIG_INTID_RES43      (0x0000001B)
#define NVIC_SWTRIG_INTID_SYSCTL     (0x0000001C)
#define NVIC_SWTRIG_INTID_FLASH      (0x0000001D)
#define NVIC_SWTRIG_INTID_PORTF      (0x0000001E)
#define NVIC_SWTRIG_INTID_RES47      (0x0000001F)
#define NVIC_SWTRIG_INTID_RES48      (0x00000020)
#define NVIC_SWTRIG_INTID_UART2      (0x00000021)
#define NVIC_SWTRIG_INTID_SSI1       (0x00000022)
#define NVIC_SWTRIG_INTID_TIMER3A    (0x00000023)
#define NVIC_SWTRIG_INTID_TIMER3B    (0x00000024)
#define NVIC_SWTRIG_INTID_I2C1       (0x00000025)
#define NVIC_SWTRIG_INTID_QEI1       (0x00000026)
#define NVIC_SWTRIG_INTID_CAN0       (0x00000027)
#define NVIC_SWTRIG_INTID_CAN1       (0x00000028)
#define NVIC_SWTRIG_INTID_RES57      (0x00000029)
#define NVIC_SWTRIG_INTID_RES58      (0x0000002A)
#define NVIC_SWTRIG_INTID_HIB        (0x0000002B)
#define NVIC_SWTRIG_INTID_USB        (0x0000002C)
#define NVIC_SWTRIG_INTID_PWM0GEN3   (0x0000002D)
#define NVIC_SWTRIG_INTID_UDMASOFT   (0x0000002E)
#define NVIC_SWTRIG_INTID_UDMAERROR  (0x0000002F)
#define NVIC_SWTRIG_INTID_ADC1SEQ0   (0x00000030)
#define NVIC_SWTRIG_INTID_ADC1SEQ1   (0x00000031)
#define NVIC_SWTRIG_INTID_ADC1SEQ2   (0x00000032)
#define NVIC_SWTRIG_INTID_ADC1SEQ3   (0x00000033)
#define NVIC_SWTRIG_INTID_RES68      (0x00000034)
#define NVIC_SWTRIG_INTID_RES69      (0x00000035)
#define NVIC_SWTRIG_INTID_RES70      (0x00000036)
#define NVIC_SWTRIG_INTID_RES71      (0x00000037)
#define NVIC_SWTRIG_INTID_RES72      (0x00000038)
#define NVIC_SWTRIG_INTID_SSI2       (0x00000039)
#define NVIC_SWTRIG_INTID_SSI3       (0x0000003A)
#define NVIC_SWTRIG_INTID_UART3      (0x0000003B)
#define NVIC_SWTRIG_INTID_UART4      (0x0000003C)
#define NVIC_SWTRIG_INTID_UART5      (0x0000003D)
#define NVIC_SWTRIG_INTID_UART6      (0x0000003E)
#define NVIC_SWTRIG_INTID_UART7      (0x0000003F)
#define NVIC_SWTRIG_INTID_RES80      (0x00000040)
#define NVIC_SWTRIG_INTID_RES81      (0x00000041)
#define NVIC_SWTRIG_INTID_RES82      (0x00000042)
#define NVIC_SWTRIG_INTID_RES83      (0x00000043)
#define NVIC_SWTRIG_INTID_I2C2       (0x00000044)
#define NVIC_SWTRIG_INTID_I2C3       (0x00000045)
#define NVIC_SWTRIG_INTID_TIMER4A    (0x00000046)
#define NVIC_SWTRIG_INTID_TIMER4B    (0x00000047)
#define NVIC_SWTRIG_INTID_RES88      (0x00000048)
#define NVIC_SWTRIG_INTID_RES89      (0x00000049)
#define NVIC_SWTRIG_INTID_RES90      (0x0000004A)
#define NVIC_SWTRIG_INTID_RES91      (0x0000004B)
#define NVIC_SWTRIG_INTID_RES92      (0x0000004C)
#define NVIC_SWTRIG_INTID_RES93      (0x0000004D)
#define NVIC_SWTRIG_INTID_RES94      (0x0000004E)
#define NVIC_SWTRIG_INTID_RES95      (0x0000004F)
#define NVIC_SWTRIG_INTID_RES96      (0x00000050)
#define NVIC_SWTRIG_INTID_RES97      (0x00000051)
#define NVIC_SWTRIG_INTID_RES98      (0x00000052)
#define NVIC_SWTRIG_INTID_RES99      (0x00000053)
#define NVIC_SWTRIG_INTID_RES100     (0x00000054)
#define NVIC_SWTRIG_INTID_RES101     (0x00000055)
#define NVIC_SWTRIG_INTID_RES102     (0x00000056)
#define NVIC_SWTRIG_INTID_RES103     (0x00000057)
#define NVIC_SWTRIG_INTID_RES104     (0x00000058)
#define NVIC_SWTRIG_INTID_RES105     (0x00000059)
#define NVIC_SWTRIG_INTID_RES106     (0x0000005A)
#define NVIC_SWTRIG_INTID_RES107     (0x0000005B)
#define NVIC_SWTRIG_INTID_TIMER5A    (0x0000005C)
#define NVIC_SWTRIG_INTID_TIMER5B    (0x0000005D)
#define NVIC_SWTRIG_INTID_WTIMER0A   (0x0000005E)
#define NVIC_SWTRIG_INTID_WTIMER0B   (0x0000005F)
#define NVIC_SWTRIG_INTID_WTIMER1A   (0x00000060)
#define NVIC_SWTRIG_INTID_WTIMER1B   (0x00000061)
#define NVIC_SWTRIG_INTID_WTIMER2A   (0x00000062)
#define NVIC_SWTRIG_INTID_WTIMER2B   (0x00000063)
#define NVIC_SWTRIG_INTID_WTIMER3A   (0x00000064)
#define NVIC_SWTRIG_INTID_WTIMER3B   (0x00000065)
#define NVIC_SWTRIG_INTID_WTIMER4A   (0x00000066)
#define NVIC_SWTRIG_INTID_WTIMER4B   (0x00000067)
#define NVIC_SWTRIG_INTID_WTIMER5A   (0x00000068)
#define NVIC_SWTRIG_INTID_WTIMER5B   (0x00000069)
#define NVIC_SWTRIG_INTID_SYSEXC     (0x0000006A)
#define NVIC_SWTRIG_INTID_RES123     (0x0000006B)
#define NVIC_SWTRIG_INTID_RES124     (0x0000006C)
#define NVIC_SWTRIG_INTID_RES125     (0x0000006D)
#define NVIC_SWTRIG_INTID_RES126     (0x0000006E)
#define NVIC_SWTRIG_INTID_RES127     (0x0000006F)
#define NVIC_SWTRIG_INTID_RES128     (0x00000070)
#define NVIC_SWTRIG_INTID_RES129     (0x00000071)
#define NVIC_SWTRIG_INTID_RES130     (0x00000072)
#define NVIC_SWTRIG_INTID_RES131     (0x00000073)
#define NVIC_SWTRIG_INTID_RES132     (0x00000074)
#define NVIC_SWTRIG_INTID_RES133     (0x00000075)
#define NVIC_SWTRIG_INTID_RES134     (0x00000076)
#define NVIC_SWTRIG_INTID_RES135     (0x00000077)
#define NVIC_SWTRIG_INTID_RES136     (0x00000078)
#define NVIC_SWTRIG_INTID_RES137     (0x00000079)
#define NVIC_SWTRIG_INTID_RES138     (0x0000007A)
#define NVIC_SWTRIG_INTID_RES139     (0x0000007B)
#define NVIC_SWTRIG_INTID_RES140     (0x0000007C)
#define NVIC_SWTRIG_INTID_RES141     (0x0000007D)
#define NVIC_SWTRIG_INTID_RES142     (0x0000007E)
#define NVIC_SWTRIG_INTID_RES143     (0x0000007F)
#define NVIC_SWTRIG_INTID_RES144     (0x00000080)
#define NVIC_SWTRIG_INTID_RES145     (0x00000081)
#define NVIC_SWTRIG_INTID_RES146     (0x00000082)
#define NVIC_SWTRIG_INTID_RES147     (0x00000083)
#define NVIC_SWTRIG_INTID_RES148     (0x00000084)
#define NVIC_SWTRIG_INTID_RES149     (0x00000085)
#define NVIC_SWTRIG_INTID_PWM1GEN0   (0x00000086)
#define NVIC_SWTRIG_INTID_PWM1GEN1   (0x00000087)
#define NVIC_SWTRIG_INTID_PWM1GEN2   (0x00000088)
#define NVIC_SWTRIG_INTID_PWM1GEN3   (0x00000089)
#define NVIC_SWTRIG_INTID_PWM1FAULT  (0x0000008A)

int32_t NVIC_EN(uint32_t interruptEn, uint32_t priority);
int32_t NVIC_DIS(uint32_t interruptDis);
int32_t NVIC_PEND(uint32_t interruptPend);
int32_t NVIC_UNPEND(uint32_t interruptUnpend);
int32_t NVIC_ACTIVE(uint32_t interruptActive);
int32_t NVIC_SWTRIGGER(uint32_t interruptA);
int32_t NVIC_Priority(uint32_t interruptA,uint32_t priority);

#endif /* NVIC_H_ */
