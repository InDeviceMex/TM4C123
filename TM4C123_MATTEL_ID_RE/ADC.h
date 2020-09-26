/*
 * ADC.h
 *
 *  Created on: May 29, 2018
 *      Author: GOS_TypeDefD
 */

#ifndef ADC_H_
#define ADC_H_

#include <stdint.h>


#define ADC_BASE            (0x40038000)
#define ADC_OFFSET          (0x00038000)

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// ADC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

typedef volatile struct
{
    volatile uint32_t      ASEN0    : 1;
    volatile uint32_t      ASEN1    : 1;
    volatile uint32_t      ASEN2    : 1;
    volatile uint32_t      ASEN3    : 1;
    const uint32_t         reserved : 12;
    volatile const uint32_t BUSY    : 1;
    const uint32_t         reserved1: 15;
}ADCACTSS_TypeDef;


typedef volatile struct
{
    volatile const uint32_t INR0     : 1;
    volatile const uint32_t INR1     : 1;
    volatile const uint32_t INR2     : 1;
    volatile const uint32_t INR3     : 1;
    const    uint32_t       reserved : 12;
    volatile const uint32_t INRDC    : 1;
    const    uint32_t       reserved1: 15;
}ADCRIS_TypeDef;


typedef volatile struct
{
    volatile uint32_t MASK0    : 1;
    volatile uint32_t MASK1    : 1;
    volatile uint32_t MASK2    : 1;
    volatile uint32_t MASK3    : 1;
    const uint32_t    reserved : 12;
    volatile uint32_t DCONSS1  : 1;
    volatile uint32_t DCONSS2  : 1;
    volatile uint32_t DCONSS3  : 1;
    volatile uint32_t DCONSS4  : 1;
    const uint32_t    reserved1: 12;
}ADCIM_TypeDef;


typedef volatile struct
{
    volatile uint32_t          IN0      : 1;
    volatile uint32_t          IN1      : 1;
    volatile uint32_t          IN2      : 1;
    volatile uint32_t          IN3      : 1;
    const    uint32_t          reserved : 12;
    volatile const uint32_t    DCINSS0  : 1;
    volatile const uint32_t    DCINSS1  : 1;
    volatile const uint32_t    DCINSS2  : 1;
    volatile const uint32_t    DCINSS3  : 1;
    const    uint32_t          reserved1: 12;
}ADCISC_TypeDef;


typedef volatile struct
{
    volatile uint32_t OV0      : 1;
    volatile uint32_t OV1      : 1;
    volatile uint32_t OV2      : 1;
    volatile uint32_t OV3      : 1;
    const    uint32_t reserved : 28;
}ADCOSTAT_TypeDef;


typedef volatile struct
{
    volatile uint32_t EM0     : 4;
    volatile uint32_t EM1     : 4;
    volatile uint32_t EM2     : 4;
    volatile uint32_t EM3     : 4;
    const    uint32_t reserved:16;
}ADCEMUX_TypeDef;

typedef volatile struct
{
    volatile uint32_t UV0     : 1;
    volatile uint32_t UV1     : 1;
    volatile uint32_t UV2     : 1;
    volatile uint32_t UV3     : 1;
    const    uint32_t reserved: 28;
}ADCUSTAT_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved : 4;
    volatile uint32_t PS0      : 2;
    const    uint32_t reserved1: 6;
    volatile uint32_t PS1      : 2;
    const    uint32_t reserved2: 6;
    volatile uint32_t PS2      : 2;
    const    uint32_t reserved3: 6;
    volatile uint32_t PS3      : 2;
    const    uint32_t reserved4: 2;
}ADCTSSEL_TypeDef;

typedef volatile struct
{
    volatile uint32_t SS0      : 2;
    const    uint32_t reserved1: 2;
    volatile uint32_t SS1      : 2;
    const    uint32_t reserved2: 2;
    volatile uint32_t SS2      : 2;
    const    uint32_t reserved3: 2;
    volatile uint32_t SS3      : 2;
    const    uint32_t reserved4: 18;
}ADCSSPRI_TypeDef;

typedef volatile struct
{
    volatile uint32_t PHASE     : 4;
    const    uint32_t reserved  : 28;
}ADCSPC_TypeDef;


typedef volatile struct
{
    volatile uint32_t SS0        : 1;
    volatile uint32_t SS1        : 1;
    volatile uint32_t SS2        : 1;
    volatile uint32_t SS3        : 1;
    const    uint32_t reserved   : 23;
    volatile uint32_t SYNCWAIT   : 1;
    const    uint32_t reserved1  : 3;
    volatile uint32_t GSYNC      : 1;
}ADCPSSI_TypeDef;

typedef volatile struct
{
    volatile uint32_t AVG     : 3;
    const    uint32_t reserved: 29;
}ADCSAC_TypeDef;

typedef volatile struct
{
    volatile uint32_t DCINT0  : 1;
    volatile uint32_t DCINT1  : 1;
    volatile uint32_t DCINT2  : 1;
    volatile uint32_t DCINT3  : 1;
    volatile uint32_t DCINT4  : 1;
    volatile uint32_t DCINT5  : 1;
    volatile uint32_t DCINT6  : 1;
    volatile uint32_t DCINT7  : 1;
    const    uint32_t reserved: 24;
}ADCDCISC_TypeDef;


typedef volatile struct
{
    volatile uint32_t VREF     : 1;
    const    uint32_t reserved1: 5;
    volatile uint32_t DITHER   : 1;
    const    uint32_t reserved2: 25;
}ADCCTL_TypeDef;


typedef volatile struct
{
    volatile uint32_t MUX0 : 4;
    volatile uint32_t MUX1 : 4;
    volatile uint32_t MUX2 : 4;
    volatile uint32_t MUX3 : 4;
    volatile uint32_t MUX4 : 4;
    volatile uint32_t MUX5 : 4;
    volatile uint32_t MUX6 : 4;
    volatile uint32_t MUX7 : 4;
}ADCSSMUX0_TypeDef;


typedef volatile struct
{
    volatile uint32_t D0   : 1;
    volatile uint32_t END0 : 1;
    volatile uint32_t IE0  : 1;
    volatile uint32_t TS0  : 1;
    volatile uint32_t D1   : 1;
    volatile uint32_t END1 : 1;
    volatile uint32_t IE1  : 1;
    volatile uint32_t TS1  : 1;
    volatile uint32_t D2   : 1;
    volatile uint32_t END2 : 1;
    volatile uint32_t IE2  : 1;
    volatile uint32_t TS2  : 1;
    volatile uint32_t D3   : 1;
    volatile uint32_t END3 : 1;
    volatile uint32_t IE3  : 1;
    volatile uint32_t TS3  : 1;
    volatile uint32_t D4   : 1;
    volatile uint32_t END4 : 1;
    volatile uint32_t IE4  : 1;
    volatile uint32_t TS4  : 1;
    volatile uint32_t D5   : 1;
    volatile uint32_t END5 : 1;
    volatile uint32_t IE5  : 1;
    volatile uint32_t TS5  : 1;
    volatile uint32_t D6   : 1;
    volatile uint32_t END6 : 1;
    volatile uint32_t IE6  : 1;
    volatile uint32_t TS6  : 1;
    volatile uint32_t D7   : 1;
    volatile uint32_t END7 : 1;
    volatile uint32_t IE7  : 1;
    volatile uint32_t TS7  : 1;
}ADCSSCTL0_TypeDef;


typedef volatile struct
{
    volatile const uint32_t DATA         : 12;
    const     uint32_t      reserved     : 20;
}ADCSSFIFO0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DATA         : 12;
    const     uint32_t      reserved     : 20;
}ADCSSFIFO1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DATA         : 12;
    const     uint32_t      reserved     : 20;
}ADCSSFIFO2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DATA         : 12;
    const     uint32_t      reserved     : 20;
}ADCSSFIFO3_TypeDef;


typedef volatile struct
{
    volatile const uint32_t TPTR         : 4;
    volatile const uint32_t HPTR         : 4;
    volatile const uint32_t EMPTY        : 1;
    const    uint32_t       reserved     : 3;
    volatile const uint32_t FULL         : 1;
    const    uint32_t       reserved1    : 19;
}ADCSSFSTAT0_TypeDef;


typedef volatile struct
{
    volatile const uint32_t TPTR         : 4;
    volatile const uint32_t HPTR         : 4;
    volatile const uint32_t EMPTY        : 1;
    const    uint32_t       reserved     : 3;
    volatile const uint32_t FULL         : 1;
    const    uint32_t       reserved1    : 19;
}ADCSSFSTAT1_TypeDef;


typedef volatile struct
{
    volatile const uint32_t TPTR         : 4;
    volatile const uint32_t HPTR         : 4;
    volatile const uint32_t EMPTY        : 1;
    const    uint32_t       reserved     : 3;
    volatile const uint32_t FULL         : 1;
    const    uint32_t       reserved1    : 19;
}ADCSSFSTAT2_TypeDef;


typedef volatile struct
{
    volatile const uint32_t TPTR         : 4;
    volatile const uint32_t HPTR         : 4;
    volatile const uint32_t EMPTY        : 1;
    const    uint32_t       reserved     : 3;
    volatile const uint32_t FULL         : 1;
    const    uint32_t       reserved1    : 19;
}ADCSSFSTAT3_TypeDef;



typedef volatile struct
{
    volatile uint32_t S0DCOP     : 1;
    const    uint32_t reserved   : 3;
    volatile uint32_t S1DCOP     : 1;
    const    uint32_t reserved1  : 3;
    volatile uint32_t S2DCOP    : 1;
    const    uint32_t reserved2  : 3;
    volatile uint32_t S3DCOP     : 1;
    const    uint32_t reserved3  : 3;
    volatile uint32_t S4DCOP     : 1;
    const    uint32_t reserved4  : 3;
    volatile uint32_t S5DCOP     : 1;
    const    uint32_t reserved5  : 3;
    volatile uint32_t S6DCOP     : 1;
    const    uint32_t reserved6  : 3;
    volatile uint32_t S7DCOP     : 1;
    const    uint32_t reserved7  : 3;
}ADCSSOP0_TypeDef;


typedef volatile struct
{
    volatile uint32_t S0DCSEL     : 4;
    volatile uint32_t S1DCSEL     : 4;
    volatile uint32_t S2DCSEL     : 4;
    volatile uint32_t S3DCSEL     : 4;
    volatile uint32_t S4DCSEL     : 4;
    volatile uint32_t S5DCSEL     : 4;
    volatile uint32_t S6DCSEL     : 4;
    volatile uint32_t S7DCSEL     : 4;
}ADCSSDC0_TypeDef;


typedef volatile struct
{
    volatile uint32_t MUX0     : 4;
    volatile uint32_t MUX1     : 4;
    volatile uint32_t MUX2     : 4;
    volatile uint32_t MUX3     : 4;
    const    uint32_t reserved : 16;
}ADCSSMUX1_TypeDef;

typedef volatile struct
{
    volatile uint32_t MUX0     : 4;
    volatile uint32_t MUX1     : 4;
    volatile uint32_t MUX2     : 4;
    volatile uint32_t MUX3     : 4;
    const    uint32_t reserved : 16;
}ADCSSMUX2_TypeDef;


typedef volatile struct
{
    volatile uint32_t D0        : 1;
    volatile uint32_t END0      : 1;
    volatile uint32_t IE0       : 1;
    volatile uint32_t TS0       : 1;
    volatile uint32_t D1        : 1;
    volatile uint32_t END1      : 1;
    volatile uint32_t IE1       : 1;
    volatile uint32_t TS1       : 1;
    volatile uint32_t D2        : 1;
    volatile uint32_t END2      : 1;
    volatile uint32_t IE2       : 1;
    volatile uint32_t TS2       : 1;
    volatile uint32_t D3        : 1;
    volatile uint32_t END3      : 1;
    volatile uint32_t IE3       : 1;
    volatile uint32_t TS3       : 1;
    const    uint32_t reserved  : 16;
}ADCSSCTL1_TypeDef;


typedef volatile struct
{
    volatile uint32_t D0        : 1;
    volatile uint32_t END0      : 1;
    volatile uint32_t IE0       : 1;
    volatile uint32_t TS0       : 1;
    volatile uint32_t D1        : 1;
    volatile uint32_t END1      : 1;
    volatile uint32_t IE1       : 1;
    volatile uint32_t TS1       : 1;
    volatile uint32_t D2        : 1;
    volatile uint32_t END2      : 1;
    volatile uint32_t IE2       : 1;
    volatile uint32_t TS2       : 1;
    volatile uint32_t D3        : 1;
    volatile uint32_t END3      : 1;
    volatile uint32_t IE3       : 1;
    volatile uint32_t TS3       : 1;
    const    uint32_t reserved  : 16;
}ADCSSCTL2_TypeDef;

typedef volatile struct
{
    volatile uint32_t S0DCOP   : 1;
    const    uint32_t reserved : 3;
    volatile uint32_t S1DCOP   : 1;
    const    uint32_t reserved1: 3;
    volatile uint32_t S2DCOP   : 1;
    const    uint32_t reserved2: 3;
    volatile uint32_t S3DCOP   : 1;
    const    uint32_t reserved3: 19;
}ADCSSOP1_TypeDef;


typedef volatile struct
{
    volatile uint32_t S0DCOP   : 1;
    const    uint32_t reserved : 3;
    volatile uint32_t S1DCOP   : 1;
    const    uint32_t reserved1: 3;
    volatile uint32_t S2DCOP   : 1;
    const    uint32_t reserved2: 3;
    volatile uint32_t S3DCOP   : 1;
    const    uint32_t reserved3: 19;
}ADCSSOP2_TypeDef;

typedef volatile struct
{
    volatile uint32_t S0DCSEL     : 4;
    volatile uint32_t S1DCSEL     : 4;
    volatile uint32_t S2DCSEL     : 4;
    volatile uint32_t S3DCSEL     : 4;
    const    uint32_t reserved    : 16;
}ADCSSDC1_TypeDef;

typedef volatile struct
{
    volatile uint32_t S0DCSEL     : 4;
    volatile uint32_t S1DCSEL     : 4;
    volatile uint32_t S2DCSEL     : 4;
    volatile uint32_t S3DCSEL     : 4;
    const    uint32_t reserved    : 16;
}ADCSSDC2_TypeDef;


typedef volatile struct
{
    volatile uint32_t MUX0     : 4;
    const    uint32_t reserved : 28;
}ADCSSMUX3_TypeDef;


typedef volatile struct
{
    volatile uint32_t D0      : 1;
    volatile uint32_t END0    : 1;
    volatile uint32_t IE0     : 1;
    volatile uint32_t TS0     : 1;
    const    uint32_t reserved: 28;
}ADCSSCTL3_TypeDef;


typedef volatile struct
{
    volatile uint32_t S0DCOP  : 1;
    const    uint32_t reserved: 31;
}ADCSSOP3_TypeDef;


typedef volatile struct
{
    volatile uint32_t S0DCSEL : 4;
    const    uint32_t reserved: 28;
}ADCSSDC3_TypeDef;


typedef volatile struct
{
    volatile uint32_t DCINT0   : 1;
    volatile uint32_t DCINT1   : 1;
    volatile uint32_t DCINT2   : 1;
    volatile uint32_t DCINT3   : 1;
    volatile uint32_t DCINT4   : 1;
    volatile uint32_t DCINT5   : 1;
    volatile uint32_t DCINT6   : 1;
    volatile uint32_t DCINT7   : 1;
    const    uint32_t reserved : 8;
    volatile uint32_t DCTRIG0  : 1;
    volatile uint32_t DCTRIG1  : 1;
    volatile uint32_t DCTRIG2  : 1;
    volatile uint32_t DCTRIG3  : 1;
    volatile uint32_t DCTRIG4  : 1;
    volatile uint32_t DCTRIG5  : 1;
    volatile uint32_t DCTRIG6  : 1;
    volatile uint32_t DCTRIG7  : 1;
    const    uint32_t reserved1: 8;
}ADCDCRIC_TypeDef;


typedef volatile struct
{
    volatile uint32_t CIM      : 2;
    volatile uint32_t CIC      : 2;
    volatile uint32_t CIE      : 1;
    const    uint32_t reserved : 3;
    volatile uint32_t CTM      : 2;
    volatile uint32_t CTC      : 2;
    volatile uint32_t CTE      : 1;
    const    uint32_t reserved1: 19;
}ADCDCCTL0_TypeDef;


typedef volatile struct
{
    volatile uint32_t CIM      : 2;
    volatile uint32_t CIC      : 2;
    volatile uint32_t CIE      : 1;
    const    uint32_t reserved : 3;
    volatile uint32_t CTM      : 2;
    volatile uint32_t CTC      : 2;
    volatile uint32_t CTE      : 1;
    const    uint32_t reserved1: 19;
}ADCDCCTL1_TypeDef;


typedef volatile struct
{
    volatile uint32_t CIM      : 2;
    volatile uint32_t CIC      : 2;
    volatile uint32_t CIE      : 1;
    const    uint32_t reserved : 3;
    volatile uint32_t CTM      : 2;
    volatile uint32_t CTC      : 2;
    volatile uint32_t CTE      : 1;
    const    uint32_t reserved1: 19;
}ADCDCCTL2_TypeDef;


typedef volatile struct
{
    volatile uint32_t CIM      : 2;
    volatile uint32_t CIC      : 2;
    volatile uint32_t CIE      : 1;
    const    uint32_t reserved : 3;
    volatile uint32_t CTM      : 2;
    volatile uint32_t CTC      : 2;
    volatile uint32_t CTE      : 1;
    const    uint32_t reserved1: 19;
}ADCDCCTL3_TypeDef;


typedef volatile struct
{
    volatile uint32_t CIM      : 2;
    volatile uint32_t CIC      : 2;
    volatile uint32_t CIE      : 1;
    const    uint32_t reserved : 3;
    volatile uint32_t CTM      : 2;
    volatile uint32_t CTC      : 2;
    volatile uint32_t CTE      : 1;
    const    uint32_t reserved1: 19;
}ADCDCCTL4_TypeDef;


typedef volatile struct
{
    volatile uint32_t CIM      : 2;
    volatile uint32_t CIC      : 2;
    volatile uint32_t CIE      : 1;
    const    uint32_t reserved : 3;
    volatile uint32_t CTM      : 2;
    volatile uint32_t CTC      : 2;
    volatile uint32_t CTE      : 1;
    const    uint32_t reserved1: 19;
}ADCDCCTL5_TypeDef;


typedef volatile struct
{
    volatile uint32_t CIM      : 2;
    volatile uint32_t CIC      : 2;
    volatile uint32_t CIE      : 1;
    const    uint32_t reserved : 3;
    volatile uint32_t CTM      : 2;
    volatile uint32_t CTC      : 2;
    volatile uint32_t CTE      : 1;
    const    uint32_t reserved1: 19;
}ADCDCCTL6_TypeDef;


typedef volatile struct
{
    volatile uint32_t CIM      : 2;
    volatile uint32_t CIC      : 2;
    volatile uint32_t CIE      : 1;
    const    uint32_t reserved : 3;
    volatile uint32_t CTM      : 2;
    volatile uint32_t CTC      : 2;
    volatile uint32_t CTE      : 1;
    const    uint32_t reserved1: 19;
}ADCDCCTL7_TypeDef;


typedef volatile struct
{
    volatile uint32_t COMP0    : 12;
    const    uint32_t reserved : 4;
    volatile uint32_t COMP1    : 12;
    const    uint32_t reserved1: 4;
}ADCDCCMP0_TypeDef;

typedef volatile struct
{
    volatile uint32_t COMP0    : 12;
    const    uint32_t reserved : 4;
    volatile uint32_t COMP1    : 12;
    const    uint32_t reserved1: 4;
}ADCDCCMP1_TypeDef;

typedef volatile struct
{
    volatile uint32_t COMP0    : 12;
    const    uint32_t reserved : 4;
    volatile uint32_t COMP1    : 12;
    const    uint32_t reserved1: 4;
}ADCDCCMP2_TypeDef;

typedef volatile struct
{
    volatile uint32_t COMP0    : 12;
    const    uint32_t reserved : 4;
    volatile uint32_t COMP1    : 12;
    const    uint32_t reserved1: 4;
}ADCDCCMP3_TypeDef;

typedef volatile struct
{
    volatile uint32_t COMP0    : 12;
    const    uint32_t reserved : 4;
    volatile uint32_t COMP1    : 12;
    const    uint32_t reserved1: 4;
}ADCDCCMP4_TypeDef;

typedef volatile struct
{
    volatile uint32_t COMP0    : 12;
    const    uint32_t reserved : 4;
    volatile uint32_t COMP1    : 12;
    const    uint32_t reserved1: 4;
}ADCDCCMP5_TypeDef;

typedef volatile struct
{
    volatile uint32_t COMP0    : 12;
    const    uint32_t reserved : 4;
    volatile uint32_t COMP1    : 12;
    const    uint32_t reserved1: 4;
}ADCDCCMP6_TypeDef;

typedef volatile struct
{
    volatile uint32_t COMP0    : 12;
    const    uint32_t reserved : 4;
    volatile uint32_t COMP1    : 12;
    const    uint32_t reserved1: 4;
}ADCDCCMP7_TypeDef;


typedef volatile struct
{
    volatile const uint32_t MSR      : 4;
    volatile const uint32_t CH       : 6;
    volatile const uint32_t DC       : 6;
    volatile const uint32_t TYPE     : 2;
    volatile const uint32_t RSL      : 5;
    volatile const uint32_t TS       : 1;
    const    uint32_t       reserved : 8;
}ADCPP_TypeDef;


typedef volatile struct
{
    volatile uint32_t SR       : 4;
    const    uint32_t reserved : 28;
}ADCPC_TypeDef;


typedef volatile struct
{
    volatile uint32_t CS       : 4;
    const    uint32_t reserved : 28;
}ADCCC_TypeDef;




typedef volatile struct
    {
    union
    {
        volatile uint32_t        ADCACTSS;
        ADCACTSS_TypeDef              ADCACTSS_Bit;
    };
    union
    {
        volatile const uint32_t  ADCRIS;
        ADCRIS_TypeDef                ADCRIS_Bit;
    };
    union
    {
        volatile uint32_t        ADCIM;
        ADCIM_TypeDef                 ADCIM_Bit;
    };
    union
    {
        volatile uint32_t        ADCISC;
        ADCISC_TypeDef       ADCISC_Bit;
    };
    union
    {
        volatile uint32_t        ADCOSTAT;
        ADCOSTAT_TypeDef              ADCOSTAT_Bit;
    };
    union
    {
        volatile uint32_t        ADCEMUX;
        ADCEMUX_TypeDef               ADCEMUX_Bit;
    };
    union
    {
        volatile uint32_t        ADCUSTAT;
        ADCUSTAT_TypeDef              ADCUSTAT_Bit;
    };
    union
    {
        volatile uint32_t        ADCTSSEL;
        ADCTSSEL_TypeDef              ADCTSSEL_Bit;
    };
    union
    {
        volatile uint32_t        ADCSSPRI;
        ADCSSPRI_TypeDef     ADCSSPRI_Bit;
    };
    union
    {
        volatile uint32_t        ADCSPC;
        ADCSPC_TypeDef                ADCSPC_Bit;
    };
    union
    {
        volatile uint32_t        ADCPSSI;
        ADCPSSI_TypeDef               ADCPSSI_Bit;
    };

    const    uint32_t            reserved;
    union
    {
        volatile uint32_t        ADCSAC;
        ADCSAC_TypeDef                ADCSAC_Bit;
    };
    union
    {
        volatile uint32_t        ADCDCISC;
        ADCDCISC_TypeDef              ADCDCISC_Bit;
    };
    union
    {
        volatile uint32_t        ADCCTL;
        ADCCTL_TypeDef                ADCCTL_Bit;
    };

    const    uint32_t            reserved1;
    union
    {
        volatile uint32_t        ADCSSMUX0;
        ADCSSMUX0_TypeDef             ADCSSMUX0_Bit;
    };
    union
    {
        volatile uint32_t        ADCSSCTL0;
        ADCSSCTL0_TypeDef             ADCSSCTL0_Bit;
    };
    union
    {
        volatile const uint32_t   ADCSSFIFO0;
        ADCSSFIFO0_TypeDef             ADCSSFIFO0_Bit;
    };
    union
    {
        volatile const uint32_t   ADCSSFSTAT0;
        ADCSSFSTAT0_TypeDef            ADCSSFSTAT0_Bit;
    };
    union
    {
        volatile uint32_t        ADCSSOP0;
        ADCSSOP0_TypeDef              ADCSSOP0_Bit;
    };
    union
    {
        volatile uint32_t        ADCSSDC0;
        ADCSSDC0_TypeDef              ADCSSDC0_Bit;
    };
    const uint32_t               reserved2[2];

    union
    {
        volatile uint32_t        ADCSSMUX1;
        ADCSSMUX1_TypeDef             ADCSSMUX1_Bit;
    };
    union
    {
        volatile uint32_t        ADCSSCTL1;
        ADCSSCTL1_TypeDef             ADCSSCTL1_Bit;
    };
    union
    {
        volatile const uint32_t  ADCSSFIFO1;
        ADCSSFIFO1_TypeDef            ADCSSFIFO1_Bit;
    };
    union
    {
        volatile const uint32_t  ADCSSFSTAT1;
        ADCSSFSTAT1_TypeDef           ADCSSFSTAT1_Bit;
    };
    union
    {
        volatile uint32_t        ADCSSOP1;
        ADCSSOP1_TypeDef              ADCSSOP1_Bit;
    };
    union
    {
        volatile uint32_t        ADCSSDC1;
        ADCSSDC1_TypeDef              ADCSSDC1_Bit;
    };

    const uint32_t               reserved3[2];
    union
    {
        volatile uint32_t        ADCSSMUX2;
        ADCSSMUX2_TypeDef             ADCSSMUX2_Bit;
    };
    union
    {
        volatile uint32_t        ADCSSCTL2;
        ADCSSCTL2_TypeDef             ADCSSCTL2_Bit;
    };
    union
    {
        volatile const uint32_t  ADCSSFIFO2;
        ADCSSFIFO2_TypeDef            ADCSSFIFO2_Bit;
    };
    union
    {
        volatile const uint32_t  ADCSSFSTAT2;
        ADCSSFSTAT2_TypeDef           ADCSSFSTAT2_Bit;
    };
    union
    {
        volatile uint32_t        ADCSSOP2;
        ADCSSOP2_TypeDef              ADCSSOP2_Bit;
    };
    union
    {
        volatile uint32_t        ADCSSDC2;
        ADCSSDC2_TypeDef              ADCSSDC2_Bit;
    };

    const uint32_t               reserved4[2];
    union
    {
        volatile uint32_t       ADCSSMUX3;
        ADCSSMUX3_TypeDef            ADCSSMUX3_Bit;
    };
    union
    {
        volatile uint32_t       ADCSSCTL3;
        ADCSSCTL3_TypeDef            ADCSSCTL3_Bit;
    };
    union
    {
        volatile const uint32_t  ADCSSFIFO3;
        ADCSSFIFO3_TypeDef            ADCSSFIFO3_Bit;
    };
    union
    {
        volatile const uint32_t  ADCSSFSTAT3;
        ADCSSFSTAT3_TypeDef           ADCSSFSTAT3_Bit;
    };
    union
    {
        volatile uint32_t       ADCSSOP3;
        ADCSSOP3_TypeDef             ADCSSOP3_Bit;
    };
    union
    {
        volatile uint32_t       ADCSSDC3;
        ADCSSDC3_TypeDef             ADCSSDC3_Bit;
    };

    const uint32_t              reserved5[786];
    union
    {
        volatile uint32_t       ADCDCRIC;
        ADCDCRIC_TypeDef             ADCDCRIC_Bit;
    };

    const uint32_t              reserved6[63];
    union
    {
        volatile uint32_t       ADCDCCTL0;
        ADCDCCTL0_TypeDef            ADCDCCTL0_Bit;
    };
    union
    {
        volatile uint32_t       ADCDCCTL1;
        ADCDCCTL1_TypeDef            ADCDCCTL1_Bit;
    };
    union
    {
        volatile uint32_t       ADCDCCTL2;
        ADCDCCTL2_TypeDef            ADCDCCTL2_Bit;
    };
    union
    {
        volatile uint32_t       ADCDCCTL3;
        ADCDCCTL3_TypeDef   ADCDCCTL3_Bit;
    };
    union
    {
        volatile uint32_t       ADCDCCTL4;
        ADCDCCTL4_TypeDef            ADCDCCTL4_Bit;
    };
    union
    {
        volatile uint32_t       ADCDCCTL5;
        ADCDCCTL5_TypeDef            ADCDCCTL5_Bit;
    };
    union
    {
        volatile uint32_t       ADCDCCTL6;
        ADCDCCTL6_TypeDef            ADCDCCTL6_Bit;
    };
    union
    {
        volatile uint32_t       ADCDCCTL7;
        ADCDCCTL7_TypeDef            ADCDCCTL7_Bit;
    };
    const uint32_t              reserved7[8];
    union
    {
        volatile uint32_t       ADCDCCMP0;
        ADCDCCMP0_TypeDef            ADCDCCMP0_Bit;
    };
    union
    {
        volatile uint32_t       ADCDCCMP1;
        ADCDCCMP1_TypeDef            ADCDCCMP1_Bit;
    };
    union
    {
        volatile uint32_t       ADCDCCMP2;
        ADCDCCMP2_TypeDef            ADCDCCMP2_Bit;
    };
    union
    {
        volatile uint32_t       ADCDCCMP3;
        ADCDCCMP3_TypeDef   ADCDCCMP3_Bit;
    };
    union
    {
        volatile uint32_t       ADCDCCMP4;
        ADCDCCMP4_TypeDef            ADCDCCMP4_Bit;
    };
    union
    {
        volatile uint32_t       ADCDCCMP5;
        ADCDCCMP5_TypeDef            ADCDCCMP5_Bit;
    };
    union
    {
        volatile uint32_t       ADCDCCMP6;
        ADCDCCMP6_TypeDef            ADCDCCMP6_Bit;
    };
    union
    {
        volatile uint32_t       ADCDCCMP7;
        ADCDCCMP7_TypeDef            ADCDCCMP7_Bit;
    };

    const uint32_t              reserved8[88];
    union
    {
        volatile const uint32_t ADCPP;
        ADCPP_TypeDef                ADCPP_Bit;
    };
    union
    {
        volatile uint32_t       ADCPC;
        ADCPC_TypeDef                ADCPC_Bit;
    };
    union
    {
        volatile uint32_t       ADCCC;
        ADCCC_TypeDef                ADCCC_Bit;
    };

    const uint32_t              reserved9[13];
}ADC_TypeDef;




typedef volatile struct
{
    ADC_TypeDef AD[2];
}ADCS_TypeDef;




#define ADC0_BASE         (0x40038000)
#define ADC0_OFFSET       (0x00038000)
#define ADC1_BASE         (0x40039000)
#define ADC1_OFFSET       (0x00039000)


#define ADC               (((ADCS_TypeDef*)(ADC0_BASE)))
#define ADC0              (((ADC_TypeDef*)(ADC0_BASE)))
#define ADC1              (((ADC_TypeDef*)(ADC1_BASE)))



#define ADC_ADCACTSS_OFFSET     (0x0000)
#define ADC_ADCRIS_OFFSET       (0x0004)
#define ADC_ADCIM_OFFSET        (0x0008)
#define ADC_ADCISC_OFFSET       (0x000C)
#define ADC_ADCOSTAT_OFFSET     (0x0010)
#define ADC_ADCEMUX_OFFSET      (0x0014)
#define ADC_ADCUSTAT_OFFSET     (0x0018)
#define ADC_ADCTSSEL_OFFSET     (0x001C)
#define ADC_ADCSSPRI_OFFSET     (0x0020)
#define ADC_ADCSPC_OFFSET       (0x0024)
#define ADC_ADCPSSI_OFFSET      (0x0028)
#define ADC_ADCSAC_OFFSET       (0x0030)
#define ADC_ADCDCISC_OFFSET     (0x0034)
#define ADC_ADCCTL_OFFSET       (0x0038)
#define ADC_ADCSSMUX0_OFFSET    (0x0040)
#define ADC_ADCSSCTL0_OFFSET    (0x0044)
#define ADC_ADCSSFIFO0_OFFSET   (0x0048)
#define ADC_ADCSSFSTAT0_OFFSET  (0x004C)
#define ADC_ADCSSOP0_OFFSET     (0x0050)
#define ADC_ADCSSDC0_OFFSET     (0x0054)
#define ADC_ADCSSMUX1_OFFSET    (0x0060)
#define ADC_ADCSSCTL1_OFFSET    (0x0064)
#define ADC_ADCSSFIFO1_OFFSET   (0x0068)
#define ADC_ADCSSFSTAT1_OFFSET  (0x006C)
#define ADC_ADCSSOP1_OFFSET     (0x0070)
#define ADC_ADCSSDC1_OFFSET     (0x0074)
#define ADC_ADCSSMUX2_OFFSET    (0x0080)
#define ADC_ADCSSCTL2_OFFSET    (0x0084)
#define ADC_ADCSSFIFO2_OFFSET   (0x0088)
#define ADC_ADCSSFSTAT2_OFFSET  (0x008C)
#define ADC_ADCSSOP2_OFFSET     (0x0090)
#define ADC_ADCSSDC2_OFFSET     (0x0094)
#define ADC_ADCSSMUX3_OFFSET    (0x00A0)
#define ADC_ADCSSCTL3_OFFSET    (0x00A4)
#define ADC_ADCSSFIFO3_OFFSET   (0x00A8)
#define ADC_ADCSSFSTAT3_OFFSET  (0x00AC)
#define ADC_ADCSSOP3_OFFSET     (0x00B0)
#define ADC_ADCSSDC3_OFFSET     (0x00B4)
#define ADC_ADCDCRIC_OFFSET     (0x0D00)
#define ADC_ADCDCCTL0_OFFSET    (0x0E00)
#define ADC_ADCDCCTL1_OFFSET    (0x0E04)
#define ADC_ADCDCCTL2_OFFSET    (0x0E08)
#define ADC_ADCDCCTL3_OFFSET    (0x0E0C)
#define ADC_ADCDCCTL4_OFFSET    (0x0E10)
#define ADC_ADCDCCTL5_OFFSET    (0x0E14)
#define ADC_ADCDCCTL6_OFFSET    (0x0E18)
#define ADC_ADCDCCTL7_OFFSET    (0x0E1C)
#define ADC_ADCDCCMP0_OFFSET    (0x0E40)
#define ADC_ADCDCCMP1_OFFSET    (0x0E44)
#define ADC_ADCDCCMP2_OFFSET    (0x0E48)
#define ADC_ADCDCCMP3_OFFSET    (0x0E4C)
#define ADC_ADCDCCMP4_OFFSET    (0x0E50)
#define ADC_ADCDCCMP5_OFFSET    (0x0E54)
#define ADC_ADCDCCMP6_OFFSET    (0x0E58)
#define ADC_ADCDCCMP7_OFFSET    (0x0E5C)
#define ADC_ADCPP_OFFSET        (0x0FC0)
#define ADC_ADCPC_OFFSET        (0x0FC4)
#define ADC_ADCCC_OFFSET        (0x0FC8)


//ToDO ADC0


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 0 ADC0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.1 ADCACTSS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCACTSS            (((ADCACTSS_TypeDef*)(ADC0_BASE + ADC_ADCACTSS_OFFSET )))
#define ADC0_ADCACTSS_R          (*((volatile uint32_t*)(ADC0_BASE +ADC_ADCACTSS_OFFSET)))


//--------
#define ADC0_ADCACTSS_R_ASEN0_MASK      (0x00000001)
#define ADC0_ADCACTSS_R_ASEN0_BIT       (0)
#define ADC0_ADCACTSS_R_ASEN0_DIS       (0x00000000)
#define ADC0_ADCACTSS_R_ASEN0_EN        (0x00000001)

#define ADC0_ADCACTSS_ASEN0_MASK        (0x00000001)
#define ADC0_ADCACTSS_ASEN0_DIS         (0x00000000)
#define ADC0_ADCACTSS_ASEN0_EN          (0x00000001)
//--------

//--------
#define ADC0_ADCACTSS_R_ASEN1_MASK      (0x00000002)
#define ADC0_ADCACTSS_R_ASEN1_BIT       (1)
#define ADC0_ADCACTSS_R_ASEN1_DIS       (0x00000000)
#define ADC0_ADCACTSS_R_ASEN1_EN        (0x00000002)

#define ADC0_ADCACTSS_ASEN1_MASK        (0x00000001)
#define ADC0_ADCACTSS_ASEN1_DIS         (0x00000000)
#define ADC0_ADCACTSS_ASEN1_EN          (0x00000001)
//--------

//--------
#define ADC0_ADCACTSS_R_ASEN2_MASK      (0x00000004)
#define ADC0_ADCACTSS_R_ASEN2_BIT       (2)
#define ADC0_ADCACTSS_R_ASEN2_DIS       (0x00000000)
#define ADC0_ADCACTSS_R_ASEN2_EN        (0x00000004)

#define ADC0_ADCACTSS_ASEN2_MASK        (0x00000001)
#define ADC0_ADCACTSS_ASEN2_DIS         (0x00000000)
#define ADC0_ADCACTSS_ASEN2_EN          (0x00000001)
//--------

//--------
#define ADC0_ADCACTSS_R_ASEN3_MASK      (0x00000008)
#define ADC0_ADCACTSS_R_ASEN3_BIT       (3)
#define ADC0_ADCACTSS_R_ASEN3_DIS       (0x00000000)
#define ADC0_ADCACTSS_R_ASEN3_EN        (0x00000008)

#define ADC0_ADCACTSS_ASEN3_MASK        (0x00000001)
#define ADC0_ADCACTSS_ASEN3_DIS         (0x00000000)
#define ADC0_ADCACTSS_ASEN3_EN          (0x00000001)
//--------

//--------
#define ADC0_ADCACTSS_R_BUSY_MASK      (0x00010000)
#define ADC0_ADCACTSS_R_BUSY_BIT       (16)
#define ADC0_ADCACTSS_R_BUSY_IDLE      (0x00000000)
#define ADC0_ADCACTSS_R_BUSY_BUSY      (0x00010000)

#define ADC0_ADCACTSS_BUSY_MASK        (0x00000001)
#define ADC0_ADCACTSS_BUSY_IDLE        (0x00000000)
#define ADC0_ADCACTSS_BUSY_BUSY        (0x00000001)
//--------

#define ADC0_ADCACTSS_ASEN0_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCACTSS_OFFSET)*32)+(0*4))))
#define ADC0_ADCACTSS_ASEN1_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCACTSS_OFFSET)*32)+(1*4))))
#define ADC0_ADCACTSS_ASEN2_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCACTSS_OFFSET)*32)+(2*4))))
#define ADC0_ADCACTSS_ASEN3_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCACTSS_OFFSET)*32)+(3*4))))
#define ADC0_ADCACTSS_BUSY_BB      (*((volatile const uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCACTSS_OFFSET)*32)+(16*4))))

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.2 ADCRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCRIS            (((ADCRIS_TypeDef*)(ADC0_BASE + ADC_ADCRIS_OFFSET )))
#define ADC0_ADCRIS_R          (*((volatile uint32_t*)(ADC0_BASE +ADC_ADCRIS_OFFSET)))


//--------
#define ADC0_ADCRIS_R_INR0_MASK      (0x00000001)
#define ADC0_ADCRIS_R_INR0_BIT       (0)
#define ADC0_ADCRIS_R_INR0_NOACTIVE  (0x00000000)
#define ADC0_ADCRIS_R_INR0_ACTIVE    (0x00000001)

#define ADC0_ADCRIS_INR0_MASK        (0x00000001)
#define ADC0_ADCRIS_INR0_NOACTIVE    (0x00000000)
#define ADC0_ADCRIS_INR0_ACTIVE      (0x00000001)
//--------

//--------
#define ADC0_ADCRIS_R_INR1_MASK      (0x00000002)
#define ADC0_ADCRIS_R_INR1_BIT       (1)
#define ADC0_ADCRIS_R_INR1_NOACTIVE  (0x00000000)
#define ADC0_ADCRIS_R_INR1_ACTIVE    (0x00000002)

#define ADC0_ADCRIS_INR1_MASK        (0x00000001)
#define ADC0_ADCRIS_INR1_NOACTIVE    (0x00000000)
#define ADC0_ADCRIS_INR1_ACTIVE      (0x00000001)
//--------

//--------
#define ADC0_ADCRIS_R_INR2_MASK      (0x00000004)
#define ADC0_ADCRIS_R_INR2_BIT       (2)
#define ADC0_ADCRIS_R_INR2_NOACTIVE  (0x00000000)
#define ADC0_ADCRIS_R_INR2_ACTIVE    (0x00000004)

#define ADC0_ADCRIS_INR2_MASK        (0x00000001)
#define ADC0_ADCRIS_INR2_NOACTIVE    (0x00000000)
#define ADC0_ADCRIS_INR2_ACTIVE      (0x00000001)
//--------

//--------
#define ADC0_ADCRIS_R_INR3_MASK      (0x00000008)
#define ADC0_ADCRIS_R_INR3_BIT       (3)
#define ADC0_ADCRIS_R_INR3_NOACTIVE  (0x00000000)
#define ADC0_ADCRIS_R_INR3_ACTIVE    (0x00000008)

#define ADC0_ADCRIS_INR3_MASK        (0x00000001)
#define ADC0_ADCRIS_INR3_NOACTIVE    (0x00000000)
#define ADC0_ADCRIS_INR3_ACTIVE      (0x00000001)
//--------

//--------
#define ADC0_ADCRIS_R_INRDC_MASK      (0x00000008)
#define ADC0_ADCRIS_R_INRDC_BIT       (3)
#define ADC0_ADCRIS_R_INRDC_NOACTIVE  (0x00000000)
#define ADC0_ADCRIS_R_INRDC_ACTIVE    (0x00000008)

#define ADC0_ADCRIS_INRDC_MASK        (0x00000001)
#define ADC0_ADCRIS_INRDC_NOACTIVE    (0x00000000)
#define ADC0_ADCRIS_INRDC_ACTIVE      (0x00000001)
//--------

#define ADC0_ADCRIS_INR0_BB     (*((volatile const uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCRIS_OFFSET)*32)+(0*4))))
#define ADC0_ADCRIS_INR1_BB     (*((volatile const uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCRIS_OFFSET)*32)+(1*4))))
#define ADC0_ADCRIS_INR2_BB     (*((volatile const uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCRIS_OFFSET)*32)+(2*4))))
#define ADC0_ADCRIS_INR3_BB     (*((volatile const uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCRIS_OFFSET)*32)+(3*4))))
#define ADC0_ADCRIS_INRDC_BB    (*((volatile const uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCRIS_OFFSET)*32)+(16*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.3 ADCIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCIM            (((ADCIM_TypeDef*)(ADC0_BASE + ADC_ADCIM_OFFSET )))
#define ADC0_ADCIM_R          (*((volatile uint32_t*)(ADC0_BASE +ADC_ADCIM_OFFSET)))

//--------
#define ADC0_ADCIM_R_MASK0_MASK      (0x00000001)
#define ADC0_ADCIM_R_MASK0_BIT       (0)
#define ADC0_ADCIM_R_MASK0_DIS   (0x00000000)
#define ADC0_ADCIM_R_MASK0_EN     (0x00000001)

#define ADC0_ADCIM_MASK0_MASK        (0x00000001)
#define ADC0_ADCIM_MASK0_DIS     (0x00000000)
#define ADC0_ADCIM_MASK0_EN       (0x00000001)
//--------

//--------
#define ADC0_ADCIM_R_MASK1_MASK      (0x00000002)
#define ADC0_ADCIM_R_MASK1_BIT       (1)
#define ADC0_ADCIM_R_MASK1_DIS   (0x00000000)
#define ADC0_ADCIM_R_MASK1_EN     (0x00000002)

#define ADC0_ADCIM_MASK1_MASK        (0x00000001)
#define ADC0_ADCIM_MASK1_DIS     (0x00000000)
#define ADC0_ADCIM_MASK1_EN       (0x00000001)
//--------

//--------
#define ADC0_ADCIM_R_MASK2_MASK      (0x00000004)
#define ADC0_ADCIM_R_MASK2_BIT       (2)
#define ADC0_ADCIM_R_MASK2_DIS   (0x00000000)
#define ADC0_ADCIM_R_MASK2_EN     (0x00000004)

#define ADC0_ADCIM_MASK2_MASK        (0x00000001)
#define ADC0_ADCIM_MASK2_DIS     (0x00000000)
#define ADC0_ADCIM_MASK2_EN       (0x00000001)
//--------

//--------
#define ADC0_ADCIM_R_MASK3_MASK      (0x00000008)
#define ADC0_ADCIM_R_MASK3_BIT       (3)
#define ADC0_ADCIM_R_MASK3_DIS   (0x00000000)
#define ADC0_ADCIM_R_MASK3_EN     (0x00000008)

#define ADC0_ADCIM_MASK3_MASK        (0x00000001)
#define ADC0_ADCIM_MASK3_DIS     (0x00000000)
#define ADC0_ADCIM_MASK3_EN       (0x00000001)
//--------

//--------
#define ADC0_ADCIM_R_DCONSS0_MASK      (0x00010000)
#define ADC0_ADCIM_R_DCONSS0_BIT       (16)
#define ADC0_ADCIM_R_DCONSS0_DIS   (0x00000000)
#define ADC0_ADCIM_R_DCONSS0_EN     (0x00010000)

#define ADC0_ADCIM_DCONSS0_MASK        (0x00000001)
#define ADC0_ADCIM_DCONSS0_DIS     (0x00000000)
#define ADC0_ADCIM_DCONSS0_EN       (0x00000001)
//--------

//--------
#define ADC0_ADCIM_R_DCONSS1_MASK      (0x00020000)
#define ADC0_ADCIM_R_DCONSS1_BIT       (17)
#define ADC0_ADCIM_R_DCONSS1_DIS   (0x00000000)
#define ADC0_ADCIM_R_DCONSS1_EN     (0x00020000)

#define ADC0_ADCIM_DCONSS1_MASK        (0x00000001)
#define ADC0_ADCIM_DCONSS1_DIS     (0x00000000)
#define ADC0_ADCIM_DCONSS1_EN       (0x00000001)
//--------

//--------
#define ADC0_ADCIM_R_DCONSS2_MASK      (0x00040000)
#define ADC0_ADCIM_R_DCONSS2_BIT       (18)
#define ADC0_ADCIM_R_DCONSS2_DIS   (0x00000000)
#define ADC0_ADCIM_R_DCONSS2_EN     (0x00040000)

#define ADC0_ADCIM_DCONSS2_MASK        (0x00000001)
#define ADC0_ADCIM_DCONSS2_DIS     (0x00000000)
#define ADC0_ADCIM_DCONSS2_EN       (0x00000001)
//--------

//--------
#define ADC0_ADCIM_R_DCONSS3_MASK      (0x00080000)
#define ADC0_ADCIM_R_DCONSS3_BIT       (19)
#define ADC0_ADCIM_R_DCONSS3_DIS   (0x00000000)
#define ADC0_ADCIM_R_DCONSS3_EN     (0x00080000)

#define ADC0_ADCIM_DCONSS3_MASK        (0x00000001)
#define ADC0_ADCIM_DCONSS3_DIS     (0x00000000)
#define ADC0_ADCIM_DCONSS3_EN       (0x00000001)
//--------


#define ADC0_ADCIM_MASK0_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCIM_OFFSET)*32)+(0*4))))
#define ADC0_ADCIM_MASK1_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCIM_OFFSET)*32)+(1*4))))
#define ADC0_ADCIM_MASK2_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCIM_OFFSET)*32)+(2*4))))
#define ADC0_ADCIM_MASK3_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCIM_OFFSET)*32)+(3*4))))
#define ADC0_ADCIM_DCONSS0_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCIM_OFFSET)*32)+(16*4))))
#define ADC0_ADCIM_DCONSS1_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCIM_OFFSET)*32)+(17*4))))
#define ADC0_ADCIM_DCONSS2_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCIM_OFFSET)*32)+(18*4))))
#define ADC0_ADCIM_DCONSS3_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCIM_OFFSET)*32)+(19*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.4 ADCISC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCISC            (((ADCISC_TypeDef*)(ADC0_BASE + ADC_ADCISC_OFFSET )))
#define ADC0_ADCISC_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCISC_OFFSET)))

//--------
#define ADC0_ADCISC_R_IN0_MASK       (0x00000001)
#define ADC0_ADCISC_R_IN0_BIT        (0)
#define ADC0_ADCISC_R_IN0_CLEAR      (0x00000001)

#define ADC0_ADCISC_IN0_MASK       (0x00000001)
#define ADC0_ADCISC_IN0_CLEAR      (0x00000001)
//--------

//--------
#define ADC0_ADCISC_R_IN1_MASK       (0x00000002)
#define ADC0_ADCISC_R_IN1_BIT        (1)
#define ADC0_ADCISC_R_IN1_CLEAR      (0x00000002)

#define ADC0_ADCISC_IN1_MASK       (0x00000001)
#define ADC0_ADCISC_IN1_CLEAR      (0x00000001)
//--------

//--------
#define ADC0_ADCISC_R_IN2_MASK       (0x00000004)
#define ADC0_ADCISC_R_IN2_BIT        (2)
#define ADC0_ADCISC_R_IN2_CLEAR      (0x00000004)

#define ADC0_ADCISC_IN2_MASK       (0x00000001)
#define ADC0_ADCISC_IN2_CLEAR      (0x00000001)
//--------

//--------
#define ADC0_ADCISC_R_IN3_MASK       (0x00000008)
#define ADC0_ADCISC_R_IN3_BIT        (3)
#define ADC0_ADCISC_R_IN3_CLEAR      (0x00000008)

#define ADC0_ADCISC_IN3_MASK       (0x00000001)
#define ADC0_ADCISC_IN3_CLEAR      (0x00000001)
//--------

//--------
#define ADC0_ADCISC_R_DCINSS0_MASK       (0x00010000)
#define ADC0_ADCISC_R_DCINSS0_BIT        (16)
#define ADC0_ADCISC_R_DCINSS0_CLEAR      (0x00010000)

#define ADC0_ADCISC_DCINSS0_MASK       (0x00000001)
#define ADC0_ADCISC_DCINSS0_CLEAR      (0x00000001)
//--------

//--------
#define ADC0_ADCISC_R_DCINSS1_MASK       (0x00020000)
#define ADC0_ADCISC_R_DCINSS1_BIT        (17)
#define ADC0_ADCISC_R_DCINSS1_CLEAR      (0x00020000)

#define ADC0_ADCISC_DCINSS1_MASK       (0x00000001)
#define ADC0_ADCISC_DCINSS1_CLEAR      (0x00000001)
//--------

//--------
#define ADC0_ADCISC_R_DCINSS2_MASK       (0x00040000)
#define ADC0_ADCISC_R_DCINSS2_BIT        (18)
#define ADC0_ADCISC_R_DCINSS2_CLEAR      (0x00040000)

#define ADC0_ADCISC_DCINSS2_MASK       (0x00000001)
#define ADC0_ADCISC_DCINSS2_CLEAR      (0x00000001)
//--------

//--------
#define ADC0_ADCISC_R_DCINSS3_MASK       (0x00080000)
#define ADC0_ADCISC_R_DCINSS3_BIT        (19)
#define ADC0_ADCISC_R_DCINSS3_CLEAR      (0x00080000)

#define ADC0_ADCISC_DCINSS3_MASK       (0x00000001)
#define ADC0_ADCISC_DCINSS3_CLEAR      (0x00000001)
//--------

#define ADC0_ADCISC_DCINSS0        (0x00010000)
#define ADC0_ADCISC_DCINSS1        (0x00020000)
#define ADC0_ADCISC_DCINSS2        (0x00040000)
#define ADC0_ADCISC_DCINSS3        (0x00080000)


#define ADC0_ADCISC_IN0_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCISC_OFFSET)*32)+(0*4))))
#define ADC0_ADCISC_IN1_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCISC_OFFSET)*32)+(1*4))))
#define ADC0_ADCISC_IN2_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCISC_OFFSET)*32)+(2*4))))
#define ADC0_ADCISC_IN3_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCISC_OFFSET)*32)+(3*4))))
#define ADC0_ADCISC_DCINSS0_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCISC_OFFSET)*32)+(16*4))))
#define ADC0_ADCISC_DCINSS1_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCISC_OFFSET)*32)+(17*4))))
#define ADC0_ADCISC_DCINSS2_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCISC_OFFSET)*32)+(18*4))))
#define ADC0_ADCISC_DCINSS3_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCISC_OFFSET)*32)+(19*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.5 ADCOSTAT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCOSTAT            (((ADCOSTAT_TypeDef*)(ADC0_BASE + ADC_ADCOSTAT_OFFSET )))
#define ADC0_ADCOSTAT_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCOSTAT_OFFSET)))


//--------
#define ADC0_ADCOSTAT_R_OV0_MASK      (0x00000001)
#define ADC0_ADCOSTAT_R_OV0_BIT       (0)
#define ADC0_ADCOSTAT_R_OV0_NOFULL    (0x00000000)
#define ADC0_ADCOSTAT_R_OV0_FULL      (0x00000001)

#define ADC0_ADCOSTAT_OV0_MASK        (0x00000001)
#define ADC0_ADCOSTAT_OV0_NOFULL      (0x00000000)
#define ADC0_ADCOSTAT_OV0_FULL        (0x00000001)
//--------

//--------
#define ADC0_ADCOSTAT_R_OV1_MASK      (0x00000002)
#define ADC0_ADCOSTAT_R_OV1_BIT       (1)
#define ADC0_ADCOSTAT_R_OV1_NOFULL    (0x00000000)
#define ADC0_ADCOSTAT_R_OV1_FULL      (0x00000002)

#define ADC0_ADCOSTAT_OV1_MASK        (0x00000001)
#define ADC0_ADCOSTAT_OV1_NOFULL      (0x00000000)
#define ADC0_ADCOSTAT_OV1_FULL        (0x00000001)
//--------

//--------
#define ADC0_ADCOSTAT_R_OV2_MASK      (0x00000004)
#define ADC0_ADCOSTAT_R_OV2_BIT       (2)
#define ADC0_ADCOSTAT_R_OV2_NOFULL    (0x00000000)
#define ADC0_ADCOSTAT_R_OV2_FULL      (0x00000004)

#define ADC0_ADCOSTAT_OV2_MASK        (0x00000001)
#define ADC0_ADCOSTAT_OV2_NOFULL      (0x00000000)
#define ADC0_ADCOSTAT_OV2_FULL        (0x00000001)
//--------

//--------
#define ADC0_ADCOSTAT_R_OV3_MASK      (0x00000008)
#define ADC0_ADCOSTAT_R_OV3_BIT       (3)
#define ADC0_ADCOSTAT_R_OV3_NOFULL    (0x00000000)
#define ADC0_ADCOSTAT_R_OV3_FULL      (0x00000008)

#define ADC0_ADCOSTAT_OV3_MASK        (0x00000001)
#define ADC0_ADCOSTAT_OV3_NOFULL      (0x00000000)
#define ADC0_ADCOSTAT_OV3_FULL        (0x00000001)
//--------

#define ADC0_ADCOSTAT_OV0_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCOSTAT_OFFSET)*32)+(0*4))))
#define ADC0_ADCOSTAT_OV1_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCOSTAT_OFFSET)*32)+(1*4))))
#define ADC0_ADCOSTAT_OV2_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCOSTAT_OFFSET)*32)+(2*4))))
#define ADC0_ADCOSTAT_OV3_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCOSTAT_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.6 ADCEMUX ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCEMUX            (((ADCEMUX_TypeDef*)(ADC0_BASE + ADC_ADCEMUX_OFFSET )))
#define ADC0_ADCEMUX_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCEMUX_OFFSET)))

//--------
#define ADC0_ADCEMUX_R_EM0_MASK      (0x0000000F)
#define ADC0_ADCEMUX_R_EM0_BIT       (0)
#define ADC0_ADCEMUX_R_EM0_DEFAULT   (0x00000000)
#define ADC0_ADCEMUX_R_EM0_ACOMP0    (0x00000001)
#define ADC0_ADCEMUX_R_EM0_ACOMP1    (0x00000002)
#define ADC0_ADCEMUX_R_EM0_GPIO      (0x00000004)
#define ADC0_ADCEMUX_R_EM0_TIMER     (0x00000005)
#define ADC0_ADCEMUX_R_EM0_PWMGEN0   (0x00000006)
#define ADC0_ADCEMUX_R_EM0_PWMGEN1   (0x00000007)
#define ADC0_ADCEMUX_R_EM0_PWMGEN2   (0x00000008)
#define ADC0_ADCEMUX_R_EM0_PWMGEN3   (0x00000009)
#define ADC0_ADCEMUX_R_EM0_ALWAYS    (0x0000000F)

#define ADC0_ADCEMUX_EM0_MASK        (0x0000000F)
#define ADC0_ADCEMUX_EM0_DEFAULT     (0x00000000)
#define ADC0_ADCEMUX_EM0_ACOMP0      (0x00000001)
#define ADC0_ADCEMUX_EM0_ACOMP1      (0x00000002)
#define ADC0_ADCEMUX_EM0_GPIO        (0x00000004)
#define ADC0_ADCEMUX_EM0_TIMER       (0x00000005)
#define ADC0_ADCEMUX_EM0_PWMGEN0     (0x00000006)
#define ADC0_ADCEMUX_EM0_PWMGEN1     (0x00000007)
#define ADC0_ADCEMUX_EM0_PWMGEN2     (0x00000008)
#define ADC0_ADCEMUX_EM0_PWMGEN3     (0x00000009)
#define ADC0_ADCEMUX_EM0_ALWAYS      (0x0000000F)
//--------

//--------
#define ADC0_ADCEMUX_R_EM1_MASK      (0x000000F0)
#define ADC0_ADCEMUX_R_EM1_BIT       (4)
#define ADC0_ADCEMUX_R_EM1_DEFAULT   (0x00000000)
#define ADC0_ADCEMUX_R_EM1_ACOMP0    (0x00000010)
#define ADC0_ADCEMUX_R_EM1_ACOMP1    (0x00000020)
#define ADC0_ADCEMUX_R_EM1_GPIO      (0x00000040)
#define ADC0_ADCEMUX_R_EM1_TIMER     (0x00000050)
#define ADC0_ADCEMUX_R_EM1_PWMGEN0   (0x00000060)
#define ADC0_ADCEMUX_R_EM1_PWMGEN1   (0x00000070)
#define ADC0_ADCEMUX_R_EM1_PWMGEN2   (0x00000080)
#define ADC0_ADCEMUX_R_EM1_PWMGEN3   (0x00000090)
#define ADC0_ADCEMUX_R_EM1_ALWAYS    (0x000000F0)

#define ADC0_ADCEMUX_EM1_MASK        (0x0000000F)
#define ADC0_ADCEMUX_EM1_DEFAULT     (0x00000000)
#define ADC0_ADCEMUX_EM1_ACOMP0      (0x00000001)
#define ADC0_ADCEMUX_EM1_ACOMP1      (0x00000002)
#define ADC0_ADCEMUX_EM1_GPIO        (0x00000004)
#define ADC0_ADCEMUX_EM1_TIMER       (0x00000005)
#define ADC0_ADCEMUX_EM1_PWMGEN0     (0x00000006)
#define ADC0_ADCEMUX_EM1_PWMGEN1     (0x00000007)
#define ADC0_ADCEMUX_EM1_PWMGEN2     (0x00000008)
#define ADC0_ADCEMUX_EM1_PWMGEN3     (0x00000009)
#define ADC0_ADCEMUX_EM1_ALWAYS      (0x0000000F)
//--------

//--------
#define ADC0_ADCEMUX_R_EM2_MASK      (0x00000F00)
#define ADC0_ADCEMUX_R_EM2_BIT       (8)
#define ADC0_ADCEMUX_R_EM2_DEFAULT   (0x00000000)
#define ADC0_ADCEMUX_R_EM2_ACOMP0    (0x00000100)
#define ADC0_ADCEMUX_R_EM2_ACOMP1    (0x00000200)
#define ADC0_ADCEMUX_R_EM2_GPIO      (0x00000400)
#define ADC0_ADCEMUX_R_EM2_TIMER     (0x00000500)
#define ADC0_ADCEMUX_R_EM2_PWMGEN0   (0x00000600)
#define ADC0_ADCEMUX_R_EM2_PWMGEN1   (0x00000700)
#define ADC0_ADCEMUX_R_EM2_PWMGEN2   (0x00000800)
#define ADC0_ADCEMUX_R_EM2_PWMGEN3   (0x00000900)
#define ADC0_ADCEMUX_R_EM2_ALWAYS    (0x00000F00)

#define ADC0_ADCEMUX_EM2_MASK        (0x0000000F)
#define ADC0_ADCEMUX_EM2_DEFAULT     (0x00000000)
#define ADC0_ADCEMUX_EM2_ACOMP0      (0x00000001)
#define ADC0_ADCEMUX_EM2_ACOMP1      (0x00000002)
#define ADC0_ADCEMUX_EM2_GPIO        (0x00000004)
#define ADC0_ADCEMUX_EM2_TIMER       (0x00000005)
#define ADC0_ADCEMUX_EM2_PWMGEN0     (0x00000006)
#define ADC0_ADCEMUX_EM2_PWMGEN1     (0x00000007)
#define ADC0_ADCEMUX_EM2_PWMGEN2     (0x00000008)
#define ADC0_ADCEMUX_EM2_PWMGEN3     (0x00000009)
#define ADC0_ADCEMUX_EM2_ALWAYS      (0x0000000F)
//--------


//--------
#define ADC0_ADCEMUX_R_EM3_MASK      (0x0000F)
#define ADC0_ADCEMUX_R_EM3_BIT       (12)
#define ADC0_ADCEMUX_R_EM3_DEFAULT   (0x00000000)
#define ADC0_ADCEMUX_R_EM3_ACOMP0    (0x00001000)
#define ADC0_ADCEMUX_R_EM3_ACOMP1    (0x00002000)
#define ADC0_ADCEMUX_R_EM3_GPIO      (0x00004000)
#define ADC0_ADCEMUX_R_EM3_TIMER     (0x00005000)
#define ADC0_ADCEMUX_R_EM3_PWMGEN0   (0x00006000)
#define ADC0_ADCEMUX_R_EM3_PWMGEN1   (0x00007000)
#define ADC0_ADCEMUX_R_EM3_PWMGEN2   (0x00008000)
#define ADC0_ADCEMUX_R_EM3_PWMGEN3   (0x00009000)
#define ADC0_ADCEMUX_R_EM3_ALWAYS    (0x0000F000)

#define ADC0_ADCEMUX_EM3_MASK        (0x0000000F)
#define ADC0_ADCEMUX_EM3_DEFAULT     (0x00000000)
#define ADC0_ADCEMUX_EM3_ACOMP0      (0x00000001)
#define ADC0_ADCEMUX_EM3_ACOMP1      (0x00000002)
#define ADC0_ADCEMUX_EM3_GPIO        (0x00000004)
#define ADC0_ADCEMUX_EM3_TIMER       (0x00000005)
#define ADC0_ADCEMUX_EM3_PWMGEN0     (0x00000006)
#define ADC0_ADCEMUX_EM3_PWMGEN1     (0x00000007)
#define ADC0_ADCEMUX_EM3_PWMGEN2     (0x00000008)
#define ADC0_ADCEMUX_EM3_PWMGEN3     (0x00000009)
#define ADC0_ADCEMUX_EM3_ALWAYS      (0x0000000F)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.7 ADCUSTAT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCUSTAT            (((ADCUSTAT_TypeDef*)(ADC0_BASE + ADC_ADCUSTAT_OFFSET )))
#define ADC0_ADCUSTAT_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCUSTAT_OFFSET)))



//--------
#define ADC0_ADCUSTAT_R_UV0_MASK      (0x00000001)
#define ADC0_ADCUSTAT_R_UV0_BIT       (0)
#define ADC0_ADCUSTAT_R_UV0_NOEMPTY    (0x00000000)
#define ADC0_ADCUSTAT_R_UV0_EMPTY      (0x00000001)

#define ADC0_ADCUSTAT_UV0_MASK        (0x00000001)
#define ADC0_ADCUSTAT_UV0_NOEMPTY      (0x00000000)
#define ADC0_ADCUSTAT_UV0_EMPTY        (0x00000001)
//--------

//--------
#define ADC0_ADCUSTAT_R_UV1_MASK      (0x00000002)
#define ADC0_ADCUSTAT_R_UV1_BIT       (1)
#define ADC0_ADCUSTAT_R_UV1_NOEMPTY    (0x00000000)
#define ADC0_ADCUSTAT_R_UV1_EMPTY      (0x00000002)

#define ADC0_ADCUSTAT_UV1_MASK        (0x00000001)
#define ADC0_ADCUSTAT_UV1_NOEMPTY      (0x00000000)
#define ADC0_ADCUSTAT_UV1_EMPTY        (0x00000001)
//--------

//--------
#define ADC0_ADCUSTAT_R_UV2_MASK      (0x00000004)
#define ADC0_ADCUSTAT_R_UV2_BIT       (2)
#define ADC0_ADCUSTAT_R_UV2_NOEMPTY    (0x00000000)
#define ADC0_ADCUSTAT_R_UV2_EMPTY      (0x00000004)

#define ADC0_ADCUSTAT_UV2_MASK        (0x00000001)
#define ADC0_ADCUSTAT_UV2_NOEMPTY      (0x00000000)
#define ADC0_ADCUSTAT_UV2_EMPTY        (0x00000001)
//--------

//--------
#define ADC0_ADCUSTAT_R_UV3_MASK      (0x00000008)
#define ADC0_ADCUSTAT_R_UV3_BIT       (3)
#define ADC0_ADCUSTAT_R_UV3_NOEMPTY    (0x00000000)
#define ADC0_ADCUSTAT_R_UV3_EMPTY      (0x00000008)

#define ADC0_ADCUSTAT_UV3_MASK        (0x00000001)
#define ADC0_ADCUSTAT_UV3_NOEMPTY      (0x00000000)
#define ADC0_ADCUSTAT_UV3_EMPTY        (0x00000001)
//--------

#define ADC0_ADCUSTAT_UV0_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCUSTAT_OFFSET)*32)+(0*4))))
#define ADC0_ADCUSTAT_UV1_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCUSTAT_OFFSET)*32)+(1*4))))
#define ADC0_ADCUSTAT_UV2_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCUSTAT_OFFSET)*32)+(2*4))))
#define ADC0_ADCUSTAT_UV3_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCUSTAT_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.8 ADCTSSEL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCTSSEL            (((ADCTSSEL_TypeDef*)(ADC0_BASE + ADC_ADCTSSEL_OFFSET )))
#define ADC0_ADCTSSEL_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCTSSEL_OFFSET)))

//--------
#define ADC0_ADCTSSEL_R_PS0_MASK       (0x00000030)
#define ADC0_ADCTSSEL_R_PS0_BIT        (4)
#define ADC0_ADCTSSEL_R_PS0_PWM0       (0x00000000)
#define ADC0_ADCTSSEL_R_PS0_PWM1       (0x00000010)

#define ADC0_ADCTSSEL_PS0_MASK        (0x00000003)
#define ADC0_ADCTSSEL_PS0_PWM0        (0x00000000)
#define ADC0_ADCTSSEL_PS0_PWM1        (0x00000001)
//--------

//--------
#define ADC0_ADCTSSEL_R_PS1_MASK       (0x00003000)
#define ADC0_ADCTSSEL_R_PS1_BIT        (12)
#define ADC0_ADCTSSEL_R_PS1_PWM0       (0x00000000)
#define ADC0_ADCTSSEL_R_PS1_PWM1       (0x00001000)

#define ADC0_ADCTSSEL_PS1_MASK        (0x00000003)
#define ADC0_ADCTSSEL_PS1_PWM0        (0x00000000)
#define ADC0_ADCTSSEL_PS1_PWM1        (0x00000001)
//--------

//--------
#define ADC0_ADCTSSEL_R_PS2_MASK       (0x00300000)
#define ADC0_ADCTSSEL_R_PS2_BIT        (20)
#define ADC0_ADCTSSEL_R_PS2_PWM0       (0x00000000)
#define ADC0_ADCTSSEL_R_PS2_PWM1       (0x00100000)

#define ADC0_ADCTSSEL_PS2_MASK        (0x00000003)
#define ADC0_ADCTSSEL_PS2_PWM0        (0x00000000)
#define ADC0_ADCTSSEL_PS2_PWM1        (0x00000001)
//--------

//--------
#define ADC0_ADCTSSEL_R_PS3_MASK       (0x30000000)
#define ADC0_ADCTSSEL_R_PS3_BIT        (28)
#define ADC0_ADCTSSEL_R_PS3_PWM0       (0x00000000)
#define ADC0_ADCTSSEL_R_PS3_PWM1       (0x10000000)

#define ADC0_ADCTSSEL_PS3_MASK        (0x00000003)
#define ADC0_ADCTSSEL_PS3_PWM0        (0x00000000)
#define ADC0_ADCTSSEL_PS3_PWM1        (0x00000001)
//--------


#define ADC0_ADCTSSEL_PS0_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCTSSEL_OFFSET)*32)+(4*4))))
#define ADC0_ADCTSSEL_PS1_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCTSSEL_OFFSET)*32)+(12*4))))
#define ADC0_ADCTSSEL_PS2_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCTSSEL_OFFSET)*32)+(20*4))))
#define ADC0_ADCTSSEL_PS3_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCTSSEL_OFFSET)*32)+(28*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.9 ADCSSPRI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSPRI            (((ADCSSPRI_TypeDef*)(ADC0_BASE + ADC_ADCSSPRI_OFFSET )))
#define ADC0_ADCSSPRI_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSPRI_OFFSET)))

//--------
#define ADC0_ADCSSPRI_R_SS0_MASK       (0x00000003)
#define ADC0_ADCSSPRI_R_SS0_BIT        (0)

#define ADC0_ADCSSPRI_SS0_MASK         (0x00000003)
//--------

//--------
#define ADC0_ADCSSPRI_R_SS1_MASK       (0x00000030)
#define ADC0_ADCSSPRI_R_SS1_BIT        (4)

#define ADC0_ADCSSPRI_SSI1_MASK        (0x00000003)
//--------

//--------
#define ADC0_ADCSSPRI_R_SS2_MASK       (0x00000300)
#define ADC0_ADCSSPRI_R_SS2_BIT        (8)

#define ADC0_ADCSSPRI_SS2_MASK         (0x00000003)
//--------

//--------
#define ADC0_ADCSSPRI_R_SS3_MASK       (0x00003000)
#define ADC0_ADCSSPRI_R_SS3_BIT        (12)

#define ADC0_ADCSSPRI_SS3_MASK         (0x00000003)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.10 ADCSPC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSPC            (((ADCSPC_TypeDef*)(ADC0_BASE + ADC_ADCSPC_OFFSET )))
#define ADC0_ADCSPC_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSPC_OFFSET)))

//--------
#define ADC0_ADCSPC_R_PHASE_MASK       (0x0000000F)
#define ADC0_ADCSPC_R_PHASE_BIT        (0)
#define ADC0_ADCSPC_R_PHASE_0          (0x00000000)
#define ADC0_ADCSPC_R_PHASE_22_5       (0x00000001)
#define ADC0_ADCSPC_R_PHASE_45         (0x00000002)
#define ADC0_ADCSPC_R_PHASE_67_5       (0x00000003)
#define ADC0_ADCSPC_R_PHASE_90         (0x00000004)
#define ADC0_ADCSPC_R_PHASE_112_5      (0x00000005)
#define ADC0_ADCSPC_R_PHASE_135        (0x00000006)
#define ADC0_ADCSPC_R_PHASE_157_5      (0x00000007)
#define ADC0_ADCSPC_R_PHASE_180        (0x00000008)
#define ADC0_ADCSPC_R_PHASE_202_5      (0x00000009)
#define ADC0_ADCSPC_R_PHASE_225        (0x0000000A)
#define ADC0_ADCSPC_R_PHASE_247_5      (0x0000000B)
#define ADC0_ADCSPC_R_PHASE_270        (0x0000000C)
#define ADC0_ADCSPC_R_PHASE_292_5      (0x0000000D)
#define ADC0_ADCSPC_R_PHASE_315        (0x0000000E)
#define ADC0_ADCSPC_R_PHASE_337_5      (0x0000000F)

#define ADC0_ADCSPC_PHASE_MASK       (0x0000000F)
#define ADC0_ADCSPC_PHASE_0          (0x00000000)
#define ADC0_ADCSPC_PHASE_22_5       (0x00000001)
#define ADC0_ADCSPC_PHASE_45         (0x00000002)
#define ADC0_ADCSPC_PHASE_67_5       (0x00000003)
#define ADC0_ADCSPC_PHASE_90         (0x00000004)
#define ADC0_ADCSPC_PHASE_112_5      (0x00000005)
#define ADC0_ADCSPC_PHASE_135        (0x00000006)
#define ADC0_ADCSPC_PHASE_157_5      (0x00000007)
#define ADC0_ADCSPC_PHASE_180        (0x00000008)
#define ADC0_ADCSPC_PHASE_202_5      (0x00000009)
#define ADC0_ADCSPC_PHASE_225        (0x0000000A)
#define ADC0_ADCSPC_PHASE_247_5      (0x0000000B)
#define ADC0_ADCSPC_PHASE_270        (0x0000000C)
#define ADC0_ADCSPC_PHASE_292_5      (0x0000000D)
#define ADC0_ADCSPC_PHASE_315        (0x0000000E)
#define ADC0_ADCSPC_PHASE_337_5      (0x0000000F)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.11 ADCPSSI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCPSSI            (((ADCPSSI_TypeDef*)(ADC0_BASE + ADC_ADCPSSI_OFFSET )))
#define ADC0_ADCPSSI_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCPSSI_OFFSET)))

//--------
#define ADC0_ADCPSSI_R_SS0_MASK       (0x00000001)
#define ADC0_ADCPSSI_R_SS0_BIT        (0)
#define ADC0_ADCPSSI_R_SS0_NA         (0x00000000)
#define ADC0_ADCPSSI_R_SS0_INIT       (0x00000001)

#define ADC0_ADCPSSI_SS0_MASK         (0x00000001)
#define ADC0_ADCPSSI_SS0_NA           (0x00000000)
#define ADC0_ADCPSSI_SS0_INIT         (0x00000001)
//--------

//--------
#define ADC0_ADCPSSI_R_SS1_MASK       (0x00000002)
#define ADC0_ADCPSSI_R_SS1_BIT        (1)
#define ADC0_ADCPSSI_R_SS1_NA         (0x00000000)
#define ADC0_ADCPSSI_R_SS1_INIT       (0x00000002)

#define ADC0_ADCPSSI_SS1_MASK         (0x00000001)
#define ADC0_ADCPSSI_SS1_NA           (0x00000000)
#define ADC0_ADCPSSI_SS1_INIT         (0x00000001)
//--------

//--------
#define ADC0_ADCPSSI_R_SS2_MASK       (0x00000004)
#define ADC0_ADCPSSI_R_SS2_BIT        (2)
#define ADC0_ADCPSSI_R_SS2_NA         (0x00000000)
#define ADC0_ADCPSSI_R_SS2_INIT       (0x00000004)

#define ADC0_ADCPSSI_SS2_MASK         (0x00000001)
#define ADC0_ADCPSSI_SS2_NA           (0x00000000)
#define ADC0_ADCPSSI_SS2_INIT         (0x00000001)
//--------

//--------
#define ADC0_ADCPSSI_R_SS3_MASK       (0x00000008)
#define ADC0_ADCPSSI_R_SS3_BIT        (3)
#define ADC0_ADCPSSI_R_SS3_NA         (0x00000000)
#define ADC0_ADCPSSI_R_SS3_INIT       (0x00000008)

#define ADC0_ADCPSSI_SS3_MASK         (0x00000001)
#define ADC0_ADCPSSI_SS3_NA           (0x00000000)
#define ADC0_ADCPSSI_SS3_INIT         (0x00000001)
//--------

//--------
#define ADC0_ADCPSSI_R_SYNCWAIT_MASK       (0x08000000)
#define ADC0_ADCPSSI_R_SYNCWAIT_BIT        (17)
#define ADC0_ADCPSSI_R_SYNCWAIT_DIS        (0x00000000)
#define ADC0_ADCPSSI_R_SYNCWAIT_EN         (0x08000000)

#define ADC0_ADCPSSI_SYNCWAIT_MASK         (0x00000001)
#define ADC0_ADCPSSI_SYNCWAIT_DIS          (0x00000000)
#define ADC0_ADCPSSI_SYNCWAIT_EN           (0x00000001)
//--------

//--------
#define ADC0_ADCPSSI_R_GSYNC_MASK       (0x80000000)
#define ADC0_ADCPSSI_R_GSYNC_BIT        (31)
#define ADC0_ADCPSSI_R_GSYNC_NA         (0x00000000)
#define ADC0_ADCPSSI_R_GSYNC_INIT       (0x80000000)

#define ADC0_ADCPSSI_GSYNC_MASK         (0x00000001)
#define ADC0_ADCPSSI_GSYNC_NA           (0x00000000)
#define ADC0_ADCPSSI_GSYNC_INIT         (0x00000001)
//--------

#define ADC0_ADCPSSI_SS0_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCPSSI_OFFSET)*32)+(0*4))))
#define ADC0_ADCPSSI_SS1_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCPSSI_OFFSET)*32)+(1*4))))
#define ADC0_ADCPSSI_SS2_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCPSSI_OFFSET)*32)+(2*4))))
#define ADC0_ADCPSSI_SS3_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCPSSI_OFFSET)*32)+(3*4))))
#define ADC0_ADCPSSI_SYNCWAIT_BB (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCPSSI_OFFSET)*32)+(27*4))))
#define ADC0_ADCPSSI_GSYNC_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCPSSI_OFFSET)*32)+(31*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.12 ADCSAC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSAC            (((ADCSAC_TypeDef*)(ADC0_BASE + ADC_ADCSAC_OFFSET )))
#define ADC0_ADCSAC_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSAC_OFFSET)))

//--------
#define ADC0_ADCSAC_R_AVG_MASK       (0x00000007)
#define ADC0_ADCSAC_R_AVG_BIT        (0)
#define ADC0_ADCSAC_R_AVG_1          (0x00000000)
#define ADC0_ADCSAC_R_AVG_2          (0x00000001)
#define ADC0_ADCSAC_R_AVG_4          (0x00000002)
#define ADC0_ADCSAC_R_AVG_8          (0x00000003)
#define ADC0_ADCSAC_R_AVG_16         (0x00000004)
#define ADC0_ADCSAC_R_AVG_32         (0x00000005)
#define ADC0_ADCSAC_R_AVG_64         (0x00000006)

#define ADC0_ADCSAC_AVG_MASK       (0x00000007)
#define ADC0_ADCSAC_AVG_1          (0x00000000)
#define ADC0_ADCSAC_AVG_2          (0x00000001)
#define ADC0_ADCSAC_AVG_4          (0x00000002)
#define ADC0_ADCSAC_AVG_8          (0x00000003)
#define ADC0_ADCSAC_AVG_16         (0x00000004)
#define ADC0_ADCSAC_AVG_32         (0x00000005)
#define ADC0_ADCSAC_AVG_64         (0x00000006)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.13 ADCDCISC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCISC            (((ADCDCISC_TypeDef*)(ADC0_BASE + ADC_ADCDCISC_OFFSET )))
#define ADC0_ADCDCISC_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCISC_OFFSET)))

//--------
#define ADC0_ADCDCISC_R_ACINT0_MASK       (0x00000001)
#define ADC0_ADCDCISC_R_ACINT0_BIT        (0)
#define ADC0_ADCDCISC_R_ACINT0_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_R_ACINT0_OCCUR      (0x00000001)
#define ADC0_ADCDCISC_R_ACINT0_CLEAR      (0x00000001)

#define ADC0_ADCDCISC_ACINT0_MASK       (0x00000001)
#define ADC0_ADCDCISC_ACINT0_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_ACINT0_OCCUR      (0x00000001)
#define ADC0_ADCDCISC_ACINT0_CLEAR      (0x00000001)
//--------

//--------
#define ADC0_ADCDCISC_R_ACINT1_MASK       (0x00000002)
#define ADC0_ADCDCISC_R_ACINT1_BIT        (1)
#define ADC0_ADCDCISC_R_ACINT1_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_R_ACINT1_OCCUR      (0x00000002)
#define ADC0_ADCDCISC_R_ACINT1_CLEAR      (0x00000002)

#define ADC0_ADCDCISC_ACINT1_MASK       (0x00000001)
#define ADC0_ADCDCISC_ACINT1_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_ACINT1_OCCUR      (0x00000001)
#define ADC0_ADCDCISC_ACINT1_CLEAR      (0x00000001)
//--------

//--------
#define ADC0_ADCDCISC_R_ACINT2_MASK       (0x00000004)
#define ADC0_ADCDCISC_R_ACINT2_BIT        (2)
#define ADC0_ADCDCISC_R_ACINT2_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_R_ACINT2_OCCUR      (0x00000004)
#define ADC0_ADCDCISC_R_ACINT2_CLEAR      (0x00000004)

#define ADC0_ADCDCISC_ACINT2_MASK       (0x00000001)
#define ADC0_ADCDCISC_ACINT2_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_ACINT2_OCCUR      (0x00000001)
#define ADC0_ADCDCISC_ACINT2_CLEAR      (0x00000001)
//--------

//--------
#define ADC0_ADCDCISC_R_ACINT3_MASK       (0x00000008)
#define ADC0_ADCDCISC_R_ACINT3_BIT        (3)
#define ADC0_ADCDCISC_R_ACINT3_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_R_ACINT3_OCCUR      (0x00000008)
#define ADC0_ADCDCISC_R_ACINT3_CLEAR      (0x00000008)

#define ADC0_ADCDCISC_ACINT3_MASK       (0x00000001)
#define ADC0_ADCDCISC_ACINT3_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_ACINT3_OCCUR      (0x00000001)
#define ADC0_ADCDCISC_ACINT3_CLEAR      (0x00000001)
//--------

//--------
#define ADC0_ADCDCISC_R_ACINT4_MASK       (0x00000010)
#define ADC0_ADCDCISC_R_ACINT4_BIT        (4)
#define ADC0_ADCDCISC_R_ACINT4_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_R_ACINT4_OCCUR      (0x00000010)
#define ADC0_ADCDCISC_R_ACINT4_CLEAR      (0x00000010)

#define ADC0_ADCDCISC_ACINT4_MASK       (0x00000001)
#define ADC0_ADCDCISC_ACINT4_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_ACINT4_OCCUR      (0x00000001)
#define ADC0_ADCDCISC_ACINT4_CLEAR      (0x00000001)
//--------

//--------
#define ADC0_ADCDCISC_R_ACINT5_MASK       (0x00000020)
#define ADC0_ADCDCISC_R_ACINT5_BIT        (5)
#define ADC0_ADCDCISC_R_ACINT5_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_R_ACINT5_OCCUR      (0x00000020)
#define ADC0_ADCDCISC_R_ACINT5_CLEAR      (0x00000020)

#define ADC0_ADCDCISC_ACINT5_MASK       (0x00000001)
#define ADC0_ADCDCISC_ACINT5_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_ACINT5_OCCUR      (0x00000001)
#define ADC0_ADCDCISC_ACINT5_CLEAR      (0x00000001)
//--------

//--------
#define ADC0_ADCDCISC_R_ACINT6_MASK       (0x00000040)
#define ADC0_ADCDCISC_R_ACINT6_BIT        (6)
#define ADC0_ADCDCISC_R_ACINT6_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_R_ACINT6_OCCUR      (0x00000040)
#define ADC0_ADCDCISC_R_ACINT6_CLEAR      (0x00000040)

#define ADC0_ADCDCISC_ACINT6_MASK       (0x00000001)
#define ADC0_ADCDCISC_ACINT6_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_ACINT6_OCCUR      (0x00000001)
#define ADC0_ADCDCISC_ACINT6_CLEAR      (0x00000001)
//--------

//--------
#define ADC0_ADCDCISC_R_ACINT7_MASK       (0x00000080)
#define ADC0_ADCDCISC_R_ACINT7_BIT        (7)
#define ADC0_ADCDCISC_R_ACINT7_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_R_ACINT7_OCCUR      (0x00000080)
#define ADC0_ADCDCISC_R_ACINT7_CLEAR      (0x00000080)

#define ADC0_ADCDCISC_ACINT7_MASK       (0x00000001)
#define ADC0_ADCDCISC_ACINT7_NOOCCUR    (0x00000000)
#define ADC0_ADCDCISC_ACINT7_OCCUR      (0x00000001)
#define ADC0_ADCDCISC_ACINT7_CLEAR      (0x00000001)
//--------

#define ADC0_ADCDCISC_DCINT0_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(0*4))))
#define ADC0_ADCDCISC_DCINT1_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(1*4))))
#define ADC0_ADCDCISC_DCINT2_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(2*4))))
#define ADC0_ADCDCISC_DCINT3_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(3*4))))
#define ADC0_ADCDCISC_DCINT4_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(4*4))))
#define ADC0_ADCDCISC_DCINT5_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(5*4))))
#define ADC0_ADCDCISC_DCINT6_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(6*4))))
#define ADC0_ADCDCISC_DCINT7_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.14 ADCCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCCTL            (((ADCCTL_TypeDef*)(ADC0_BASE + ADC_ADCCTL_OFFSET )))
#define ADC0_ADCCTL_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCCTL_OFFSET)))

//--------
#define ADC0_ADCCTL_R_VREF_MASK       (0x00000001)
#define ADC0_ADCCTL_R_VREF_BIT        (0)

#define ADC0_ADCCTL_VREF_MASK         (0x00000001)
//--------

//--------
#define ADC0_ADCCTL_R_DITHER_MASK       (0x00000040)
#define ADC0_ADCCTL_R_DITHER_BIT        (6)
#define ADC0_ADCCTL_R_DITHER_DIS        (0x00000000)
#define ADC0_ADCCTL_R_DITHER_EN         (0x00000040)

#define ADC0_ADCCTL_DITHER_MASK         (0x00000001)
#define ADC0_ADCCTL_DITHER_DIS          (0x00000000)
#define ADC0_ADCCTL_DITHER_EN           (0x00000001)
//--------

#define ADC0_ADCCTL_VREF_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCCTL_OFFSET)*32)+(0*4))))
#define ADC0_ADCCTL_DITHER_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCCTL_OFFSET)*32)+(6*4))))

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.15 ADCSSMUX0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSMUX0            (((ADCSSMUX0_TypeDef*)(ADC0_BASE + ADC_ADCSSMUX0_OFFSET )))
#define ADC0_ADCSSMUX0_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSMUX0_OFFSET)))

//--------
#define ADC0_ADCSSMUX0_R_MUX0_MASK       (0x0000000F)
#define ADC0_ADCSSMUX0_R_MUX0_BIT        (0)
#define ADC0_ADCSSMUX0_R_MUX0_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_R_MUX0_AIN1       (0x00000001)
#define ADC0_ADCSSMUX0_R_MUX0_AIN2       (0x00000002)
#define ADC0_ADCSSMUX0_R_MUX0_AIN3       (0x00000003)
#define ADC0_ADCSSMUX0_R_MUX0_AIN4       (0x00000004)
#define ADC0_ADCSSMUX0_R_MUX0_AIN5       (0x00000005)
#define ADC0_ADCSSMUX0_R_MUX0_AIN6       (0x00000006)
#define ADC0_ADCSSMUX0_R_MUX0_AIN7       (0x00000007)
#define ADC0_ADCSSMUX0_R_MUX0_AIN8       (0x00000008)
#define ADC0_ADCSSMUX0_R_MUX0_AIN9       (0x00000009)
#define ADC0_ADCSSMUX0_R_MUX0_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX0_R_MUX0_AIN11      (0x0000000B)

#define ADC0_ADCSSMUX0_MUX0_MASK       (0x0000000F)
#define ADC0_ADCSSMUX0_MUX0_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_MUX0_AIN1       (0x00000001)
#define ADC0_ADCSSMUX0_MUX0_AIN2       (0x00000002)
#define ADC0_ADCSSMUX0_MUX0_AIN3       (0x00000003)
#define ADC0_ADCSSMUX0_MUX0_AIN4       (0x00000004)
#define ADC0_ADCSSMUX0_MUX0_AIN5       (0x00000005)
#define ADC0_ADCSSMUX0_MUX0_AIN6       (0x00000006)
#define ADC0_ADCSSMUX0_MUX0_AIN7       (0x00000007)
#define ADC0_ADCSSMUX0_MUX0_AIN8       (0x00000008)
#define ADC0_ADCSSMUX0_MUX0_AIN9       (0x00000009)
#define ADC0_ADCSSMUX0_MUX0_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX0_MUX0_AIN11      (0x0000000B)
//--------

//--------
#define ADC0_ADCSSMUX0_R_MUX1_MASK       (0x000000F0)
#define ADC0_ADCSSMUX0_R_MUX1_BIT        (4)
#define ADC0_ADCSSMUX0_R_MUX1_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_R_MUX1_AIN1       (0x00000010)
#define ADC0_ADCSSMUX0_R_MUX1_AIN2       (0x00000020)
#define ADC0_ADCSSMUX0_R_MUX1_AIN3       (0x00000030)
#define ADC0_ADCSSMUX0_R_MUX1_AIN4       (0x00000040)
#define ADC0_ADCSSMUX0_R_MUX1_AIN5       (0x00000050)
#define ADC0_ADCSSMUX0_R_MUX1_AIN6       (0x00000060)
#define ADC0_ADCSSMUX0_R_MUX1_AIN7       (0x00000070)
#define ADC0_ADCSSMUX0_R_MUX1_AIN8       (0x00000080)
#define ADC0_ADCSSMUX0_R_MUX1_AIN9       (0x00000090)
#define ADC0_ADCSSMUX0_R_MUX1_AIN10      (0x000000A0)
#define ADC0_ADCSSMUX0_R_MUX1_AIN11      (0x000000B0)

#define ADC0_ADCSSMUX0_MUX1_MASK       (0x0000000F)
#define ADC0_ADCSSMUX0_MUX1_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_MUX1_AIN1       (0x00000001)
#define ADC0_ADCSSMUX0_MUX1_AIN2       (0x00000002)
#define ADC0_ADCSSMUX0_MUX1_AIN3       (0x00000003)
#define ADC0_ADCSSMUX0_MUX1_AIN4       (0x00000004)
#define ADC0_ADCSSMUX0_MUX1_AIN5       (0x00000005)
#define ADC0_ADCSSMUX0_MUX1_AIN6       (0x00000006)
#define ADC0_ADCSSMUX0_MUX1_AIN7       (0x00000007)
#define ADC0_ADCSSMUX0_MUX1_AIN8       (0x00000008)
#define ADC0_ADCSSMUX0_MUX1_AIN9       (0x00000009)
#define ADC0_ADCSSMUX0_MUX1_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX0_MUX1_AIN11      (0x0000000B)
//--------

//--------
#define ADC0_ADCSSMUX0_R_MUX2_MASK       (0x00000F00)
#define ADC0_ADCSSMUX0_R_MUX2_BIT        (8)
#define ADC0_ADCSSMUX0_R_MUX2_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_R_MUX2_AIN1       (0x00000100)
#define ADC0_ADCSSMUX0_R_MUX2_AIN2       (0x00000200)
#define ADC0_ADCSSMUX0_R_MUX2_AIN3       (0x00000300)
#define ADC0_ADCSSMUX0_R_MUX2_AIN4       (0x00000400)
#define ADC0_ADCSSMUX0_R_MUX2_AIN5       (0x00000500)
#define ADC0_ADCSSMUX0_R_MUX2_AIN6       (0x00000600)
#define ADC0_ADCSSMUX0_R_MUX2_AIN7       (0x00000700)
#define ADC0_ADCSSMUX0_R_MUX2_AIN8       (0x00000800)
#define ADC0_ADCSSMUX0_R_MUX2_AIN9       (0x00000900)
#define ADC0_ADCSSMUX0_R_MUX2_AIN10      (0x00000A00)
#define ADC0_ADCSSMUX0_R_MUX2_AIN11      (0x00000B00)

#define ADC0_ADCSSMUX0_MUX2_MASK       (0x0000000F)
#define ADC0_ADCSSMUX0_MUX2_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_MUX2_AIN1       (0x00000001)
#define ADC0_ADCSSMUX0_MUX2_AIN2       (0x00000002)
#define ADC0_ADCSSMUX0_MUX2_AIN3       (0x00000003)
#define ADC0_ADCSSMUX0_MUX2_AIN4       (0x00000004)
#define ADC0_ADCSSMUX0_MUX2_AIN5       (0x00000005)
#define ADC0_ADCSSMUX0_MUX2_AIN6       (0x00000006)
#define ADC0_ADCSSMUX0_MUX2_AIN7       (0x00000007)
#define ADC0_ADCSSMUX0_MUX2_AIN8       (0x00000008)
#define ADC0_ADCSSMUX0_MUX2_AIN9       (0x00000009)
#define ADC0_ADCSSMUX0_MUX2_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX0_MUX2_AIN11      (0x0000000B)
//--------

//--------
#define ADC0_ADCSSMUX0_R_MUX3_MASK       (0x0000F000)
#define ADC0_ADCSSMUX0_R_MUX3_BIT        (12)
#define ADC0_ADCSSMUX0_R_MUX3_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_R_MUX3_AIN1       (0x00001000)
#define ADC0_ADCSSMUX0_R_MUX3_AIN2       (0x00002000)
#define ADC0_ADCSSMUX0_R_MUX3_AIN3       (0x00003000)
#define ADC0_ADCSSMUX0_R_MUX3_AIN4       (0x00004000)
#define ADC0_ADCSSMUX0_R_MUX3_AIN5       (0x00005000)
#define ADC0_ADCSSMUX0_R_MUX3_AIN6       (0x00006000)
#define ADC0_ADCSSMUX0_R_MUX3_AIN7       (0x00007000)
#define ADC0_ADCSSMUX0_R_MUX3_AIN8       (0x00008000)
#define ADC0_ADCSSMUX0_R_MUX3_AIN9       (0x00009000)
#define ADC0_ADCSSMUX0_R_MUX3_AIN10      (0x0000A000)
#define ADC0_ADCSSMUX0_R_MUX3_AIN11      (0x0000B000)

#define ADC0_ADCSSMUX0_MUX3_MASK       (0x0000000F)
#define ADC0_ADCSSMUX0_MUX3_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_MUX3_AIN1       (0x00000001)
#define ADC0_ADCSSMUX0_MUX3_AIN2       (0x00000002)
#define ADC0_ADCSSMUX0_MUX3_AIN3       (0x00000003)
#define ADC0_ADCSSMUX0_MUX3_AIN4       (0x00000004)
#define ADC0_ADCSSMUX0_MUX3_AIN5       (0x00000005)
#define ADC0_ADCSSMUX0_MUX3_AIN6       (0x00000006)
#define ADC0_ADCSSMUX0_MUX3_AIN7       (0x00000007)
#define ADC0_ADCSSMUX0_MUX3_AIN8       (0x00000008)
#define ADC0_ADCSSMUX0_MUX3_AIN9       (0x00000009)
#define ADC0_ADCSSMUX0_MUX3_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX0_MUX3_AIN11      (0x0000000B)
//--------

//--------
#define ADC0_ADCSSMUX0_R_MUX4_MASK       (0x000F0000)
#define ADC0_ADCSSMUX0_R_MUX4_BIT        (16)
#define ADC0_ADCSSMUX0_R_MUX4_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_R_MUX4_AIN1       (0x00010000)
#define ADC0_ADCSSMUX0_R_MUX4_AIN2       (0x00020000)
#define ADC0_ADCSSMUX0_R_MUX4_AIN3       (0x00030000)
#define ADC0_ADCSSMUX0_R_MUX4_AIN4       (0x00040000)
#define ADC0_ADCSSMUX0_R_MUX4_AIN5       (0x00050000)
#define ADC0_ADCSSMUX0_R_MUX4_AIN6       (0x00060000)
#define ADC0_ADCSSMUX0_R_MUX4_AIN7       (0x00070000)
#define ADC0_ADCSSMUX0_R_MUX4_AIN8       (0x00080000)
#define ADC0_ADCSSMUX0_R_MUX4_AIN9       (0x00090000)
#define ADC0_ADCSSMUX0_R_MUX4_AIN10      (0x000A0000)
#define ADC0_ADCSSMUX0_R_MUX4_AIN11      (0x000B0000)

#define ADC0_ADCSSMUX0_MUX4_MASK       (0x0000000F)
#define ADC0_ADCSSMUX0_MUX4_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_MUX4_AIN1       (0x00000001)
#define ADC0_ADCSSMUX0_MUX4_AIN2       (0x00000002)
#define ADC0_ADCSSMUX0_MUX4_AIN3       (0x00000003)
#define ADC0_ADCSSMUX0_MUX4_AIN4       (0x00000004)
#define ADC0_ADCSSMUX0_MUX4_AIN5       (0x00000005)
#define ADC0_ADCSSMUX0_MUX4_AIN6       (0x00000006)
#define ADC0_ADCSSMUX0_MUX4_AIN7       (0x00000007)
#define ADC0_ADCSSMUX0_MUX4_AIN8       (0x00000008)
#define ADC0_ADCSSMUX0_MUX4_AIN9       (0x00000009)
#define ADC0_ADCSSMUX0_MUX4_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX0_MUX4_AIN11      (0x0000000B)
//--------

//--------
#define ADC0_ADCSSMUX0_R_MUX5_MASK       (0x00F00000)
#define ADC0_ADCSSMUX0_R_MUX5_BIT        (20)
#define ADC0_ADCSSMUX0_R_MUX5_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_R_MUX5_AIN1       (0x00100000)
#define ADC0_ADCSSMUX0_R_MUX5_AIN2       (0x00200000)
#define ADC0_ADCSSMUX0_R_MUX5_AIN3       (0x00300000)
#define ADC0_ADCSSMUX0_R_MUX5_AIN4       (0x00400000)
#define ADC0_ADCSSMUX0_R_MUX5_AIN5       (0x00500000)
#define ADC0_ADCSSMUX0_R_MUX5_AIN6       (0x00600000)
#define ADC0_ADCSSMUX0_R_MUX5_AIN7       (0x00700000)
#define ADC0_ADCSSMUX0_R_MUX5_AIN8       (0x00800000)
#define ADC0_ADCSSMUX0_R_MUX5_AIN9       (0x00900000)
#define ADC0_ADCSSMUX0_R_MUX5_AIN10      (0x00A00000)
#define ADC0_ADCSSMUX0_R_MUX5_AIN11      (0x00B00000)

#define ADC0_ADCSSMUX0_MUX5_MASK       (0x0000000F)
#define ADC0_ADCSSMUX0_MUX5_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_MUX5_AIN1       (0x00000001)
#define ADC0_ADCSSMUX0_MUX5_AIN2       (0x00000002)
#define ADC0_ADCSSMUX0_MUX5_AIN3       (0x00000003)
#define ADC0_ADCSSMUX0_MUX5_AIN4       (0x00000004)
#define ADC0_ADCSSMUX0_MUX5_AIN5       (0x00000005)
#define ADC0_ADCSSMUX0_MUX5_AIN6       (0x00000006)
#define ADC0_ADCSSMUX0_MUX5_AIN7       (0x00000007)
#define ADC0_ADCSSMUX0_MUX5_AIN8       (0x00000008)
#define ADC0_ADCSSMUX0_MUX5_AIN9       (0x00000009)
#define ADC0_ADCSSMUX0_MUX5_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX0_MUX5_AIN11      (0x0000000B)
//--------

//--------
#define ADC0_ADCSSMUX0_R_MUX6_MASK       (0x0F000000)
#define ADC0_ADCSSMUX0_R_MUX6_BIT        (24)
#define ADC0_ADCSSMUX0_R_MUX6_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_R_MUX6_AIN1       (0x01000000)
#define ADC0_ADCSSMUX0_R_MUX6_AIN2       (0x02000000)
#define ADC0_ADCSSMUX0_R_MUX6_AIN3       (0x03000000)
#define ADC0_ADCSSMUX0_R_MUX6_AIN4       (0x04000000)
#define ADC0_ADCSSMUX0_R_MUX6_AIN5       (0x05000000)
#define ADC0_ADCSSMUX0_R_MUX6_AIN6       (0x06000000)
#define ADC0_ADCSSMUX0_R_MUX6_AIN7       (0x07000000)
#define ADC0_ADCSSMUX0_R_MUX6_AIN8       (0x08000000)
#define ADC0_ADCSSMUX0_R_MUX6_AIN9       (0x09000000)
#define ADC0_ADCSSMUX0_R_MUX6_AIN10      (0x0A000000)
#define ADC0_ADCSSMUX0_R_MUX6_AIN11      (0x0B000000)

#define ADC0_ADCSSMUX0_MUX6_MASK       (0x0000000F)
#define ADC0_ADCSSMUX0_MUX6_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_MUX6_AIN1       (0x00000001)
#define ADC0_ADCSSMUX0_MUX6_AIN2       (0x00000002)
#define ADC0_ADCSSMUX0_MUX6_AIN3       (0x00000003)
#define ADC0_ADCSSMUX0_MUX6_AIN4       (0x00000004)
#define ADC0_ADCSSMUX0_MUX6_AIN5       (0x00000005)
#define ADC0_ADCSSMUX0_MUX6_AIN6       (0x00000006)
#define ADC0_ADCSSMUX0_MUX6_AIN7       (0x00000007)
#define ADC0_ADCSSMUX0_MUX6_AIN8       (0x00000008)
#define ADC0_ADCSSMUX0_MUX6_AIN9       (0x00000009)
#define ADC0_ADCSSMUX0_MUX6_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX0_MUX6_AIN11      (0x0000000B)
//--------

//--------
#define ADC0_ADCSSMUX0_R_MUX7_MASK       (0xF0000000)
#define ADC0_ADCSSMUX0_R_MUX7_BIT        (28)
#define ADC0_ADCSSMUX0_R_MUX7_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_R_MUX7_AIN1       (0x10000000)
#define ADC0_ADCSSMUX0_R_MUX7_AIN2       (0x20000000)
#define ADC0_ADCSSMUX0_R_MUX7_AIN3       (0x30000000)
#define ADC0_ADCSSMUX0_R_MUX7_AIN4       (0x40000000)
#define ADC0_ADCSSMUX0_R_MUX7_AIN5       (0x50000000)
#define ADC0_ADCSSMUX0_R_MUX7_AIN6       (0x60000000)
#define ADC0_ADCSSMUX0_R_MUX7_AIN7       (0x70000000)
#define ADC0_ADCSSMUX0_R_MUX7_AIN8       (0x80000000)
#define ADC0_ADCSSMUX0_R_MUX7_AIN9       (0x90000000)
#define ADC0_ADCSSMUX0_R_MUX7_AIN10      (0xA0000000)
#define ADC0_ADCSSMUX0_R_MUX7_AIN11      (0xB0000000)

#define ADC0_ADCSSMUX0_MUX7_MASK       (0x0000000F)
#define ADC0_ADCSSMUX0_MUX7_AIN0       (0x00000000)
#define ADC0_ADCSSMUX0_MUX7_AIN1       (0x00000001)
#define ADC0_ADCSSMUX0_MUX7_AIN2       (0x00000002)
#define ADC0_ADCSSMUX0_MUX7_AIN3       (0x00000003)
#define ADC0_ADCSSMUX0_MUX7_AIN4       (0x00000004)
#define ADC0_ADCSSMUX0_MUX7_AIN5       (0x00000005)
#define ADC0_ADCSSMUX0_MUX7_AIN6       (0x00000006)
#define ADC0_ADCSSMUX0_MUX7_AIN7       (0x00000007)
#define ADC0_ADCSSMUX0_MUX7_AIN8       (0x00000008)
#define ADC0_ADCSSMUX0_MUX7_AIN9       (0x00000009)
#define ADC0_ADCSSMUX0_MUX7_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX0_MUX7_AIN11      (0x0000000B)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.16 ADCSSCTL0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSCTL0            (((ADCSSCTL0_TypeDef*)(ADC0_BASE + ADC_ADCSSCTL0_OFFSET )))
#define ADC0_ADCSSCTL0_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSCTL0_OFFSET)))

//--------
#define ADC0_ADCSSCTL0_R_D0_MASK       (0x00000001)
#define ADC0_ADCSSCTL0_R_D0_BIT        (0)
#define ADC0_ADCSSCTL0_R_D0_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL0_R_D0_DIFF       (0x00000001)

#define ADC0_ADCSSCTL0_D0_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_D0_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL0_D0_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_END0_MASK       (0x00000002)
#define ADC0_ADCSSCTL0_R_END0_BIT        (1)
#define ADC0_ADCSSCTL0_R_END0_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL0_R_END0_END        (0x00000002)

#define ADC0_ADCSSCTL0_END0_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_END0_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL0_END0_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_IE0_MASK       (0x00000004)
#define ADC0_ADCSSCTL0_R_IE0_BIT        (2)
#define ADC0_ADCSSCTL0_R_IE0_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_R_IE0_EN         (0x00000004)

#define ADC0_ADCSSCTL0_IE0_MASK       (0x00000001)
#define ADC0_ADCSSCTL0_IE0_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_IE0_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_TS0_MASK         (0x00000008)
#define ADC0_ADCSSCTL0_R_TS0_BIT          (3)
#define ADC0_ADCSSCTL0_R_TS0_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_R_TS0_TEMP         (0x00000008)

#define ADC0_ADCSSCTL0_TS0_MASK         (0x00000001)
#define ADC0_ADCSSCTL0_TS0_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_TS0_TEMP         (0x00000001)
//--------




//--------
#define ADC0_ADCSSCTL0_R_D1_MASK       (0x00000010)
#define ADC0_ADCSSCTL0_R_D1_BIT        (4)
#define ADC0_ADCSSCTL0_R_D1_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL0_R_D1_DIFF       (0x00000010)

#define ADC0_ADCSSCTL0_D1_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_D1_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL0_D1_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_END1_MASK       (0x00000020)
#define ADC0_ADCSSCTL0_R_END1_BIT        (5)
#define ADC0_ADCSSCTL0_R_END1_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL0_R_END1_END        (0x00000020)

#define ADC0_ADCSSCTL0_END1_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_END1_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL0_END1_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_IE1_MASK       (0x00000040)
#define ADC0_ADCSSCTL0_R_IE1_BIT        (6)
#define ADC0_ADCSSCTL0_R_IE1_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_R_IE1_EN         (0x00000040)

#define ADC0_ADCSSCTL0_IE1_MASK       (0x00000001)
#define ADC0_ADCSSCTL0_IE1_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_IE1_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_TS1_MASK         (0x00000080)
#define ADC0_ADCSSCTL0_R_TS1_BIT          (7)
#define ADC0_ADCSSCTL0_R_TS1_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_R_TS1_TEMP         (0x00000080)

#define ADC0_ADCSSCTL0_TS1_MASK         (0x00000001)
#define ADC0_ADCSSCTL0_TS1_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_TS1_TEMP         (0x00000001)
//--------





//--------
#define ADC0_ADCSSCTL0_R_D2_MASK       (0x00000100)
#define ADC0_ADCSSCTL0_R_D2_BIT        (8)
#define ADC0_ADCSSCTL0_R_D2_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL0_R_D2_DIFF       (0x00000100)

#define ADC0_ADCSSCTL0_D2_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_D2_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL0_D2_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_END2_MASK       (0x00000200)
#define ADC0_ADCSSCTL0_R_END2_BIT        (9)
#define ADC0_ADCSSCTL0_R_END2_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL0_R_END2_END        (0x00000200)

#define ADC0_ADCSSCTL0_END2_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_END2_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL0_END2_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_IE2_MASK       (0x00000400)
#define ADC0_ADCSSCTL0_R_IE2_BIT        (10)
#define ADC0_ADCSSCTL0_R_IE2_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_R_IE2_EN         (0x00000400)

#define ADC0_ADCSSCTL0_IE2_MASK       (0x00000001)
#define ADC0_ADCSSCTL0_IE2_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_IE2_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_TS2_MASK         (0x00000800)
#define ADC0_ADCSSCTL0_R_TS2_BIT          (11)
#define ADC0_ADCSSCTL0_R_TS2_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_R_TS2_TEMP         (0x00000800)

#define ADC0_ADCSSCTL0_TS2_MASK         (0x00000001)
#define ADC0_ADCSSCTL0_TS2_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_TS2_TEMP         (0x00000001)
//--------



//--------
#define ADC0_ADCSSCTL0_R_D3_MASK       (0x00001000)
#define ADC0_ADCSSCTL0_R_D3_BIT        (12)
#define ADC0_ADCSSCTL0_R_D3_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL0_R_D3_DIFF       (0x00001000)

#define ADC0_ADCSSCTL0_D3_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_D3_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL0_D3_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_END3_MASK       (0x00002000)
#define ADC0_ADCSSCTL0_R_END3_BIT        (13)
#define ADC0_ADCSSCTL0_R_END3_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL0_R_END3_END        (0x00002000)

#define ADC0_ADCSSCTL0_END3_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_END3_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL0_END3_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_IE3_MASK       (0x00004000)
#define ADC0_ADCSSCTL0_R_IE3_BIT        (14)
#define ADC0_ADCSSCTL0_R_IE3_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_R_IE3_EN         (0x00004000)

#define ADC0_ADCSSCTL0_IE3_MASK       (0x00000001)
#define ADC0_ADCSSCTL0_IE3_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_IE3_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_TS3_MASK         (0x00008000)
#define ADC0_ADCSSCTL0_R_TS3_BIT          (15)
#define ADC0_ADCSSCTL0_R_TS3_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_R_TS3_TEMP         (0x00008000)

#define ADC0_ADCSSCTL0_TS3_MASK         (0x00000001)
#define ADC0_ADCSSCTL0_TS3_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_TS3_TEMP         (0x00000001)
//--------


//--------
#define ADC0_ADCSSCTL0_R_D4_MASK       (0x00010000)
#define ADC0_ADCSSCTL0_R_D4_BIT        (16)
#define ADC0_ADCSSCTL0_R_D4_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL0_R_D4_DIFF       (0x00010000)

#define ADC0_ADCSSCTL0_D4_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_D4_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL0_D4_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_END4_MASK       (0x00020000)
#define ADC0_ADCSSCTL0_R_END4_BIT        (17)
#define ADC0_ADCSSCTL0_R_END4_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL0_R_END4_END        (0x00020000)

#define ADC0_ADCSSCTL0_END4_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_END4_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL0_END4_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_IE4_MASK       (0x00040000)
#define ADC0_ADCSSCTL0_R_IE4_BIT        (18)
#define ADC0_ADCSSCTL0_R_IE4_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_R_IE4_EN         (0x00040000)

#define ADC0_ADCSSCTL0_IE4_MASK       (0x00000001)
#define ADC0_ADCSSCTL0_IE4_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_IE4_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_TS4_MASK         (0x00080000)
#define ADC0_ADCSSCTL0_R_TS4_BIT          (19)
#define ADC0_ADCSSCTL0_R_TS4_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_R_TS4_TEMP         (0x00080000)

#define ADC0_ADCSSCTL0_TS4_MASK         (0x00000001)
#define ADC0_ADCSSCTL0_TS4_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_TS4_TEMP         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_D5_MASK       (0x00100000)
#define ADC0_ADCSSCTL0_R_D5_BIT        (20)
#define ADC0_ADCSSCTL0_R_D5_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL0_R_D5_DIFF       (0x00100000)

#define ADC0_ADCSSCTL0_D5_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_D5_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL0_D5_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_END5_MASK       (0x00200000)
#define ADC0_ADCSSCTL0_R_END5_BIT        (21)
#define ADC0_ADCSSCTL0_R_END5_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL0_R_END5_END        (0x00200000)

#define ADC0_ADCSSCTL0_END5_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_END5_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL0_END5_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_IE5_MASK       (0x00400000)
#define ADC0_ADCSSCTL0_R_IE5_BIT        (22)
#define ADC0_ADCSSCTL0_R_IE5_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_R_IE5_EN         (0x00400000)

#define ADC0_ADCSSCTL0_IE5_MASK       (0x00000001)
#define ADC0_ADCSSCTL0_IE5_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_IE5_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_TS5_MASK         (0x00800000)
#define ADC0_ADCSSCTL0_R_TS5_BIT          (23)
#define ADC0_ADCSSCTL0_R_TS5_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_R_TS5_TEMP         (0x00800000)

#define ADC0_ADCSSCTL0_TS5_MASK         (0x00000001)
#define ADC0_ADCSSCTL0_TS5_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_TS5_TEMP         (0x00000001)
//--------


//--------
#define ADC0_ADCSSCTL0_R_D6_MASK       (0x01000000)
#define ADC0_ADCSSCTL0_R_D6_BIT        (24)
#define ADC0_ADCSSCTL0_R_D6_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL0_R_D6_DIFF       (0x01000000)

#define ADC0_ADCSSCTL0_D6_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_D6_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL0_D6_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_END6_MASK       (0x02000000)
#define ADC0_ADCSSCTL0_R_END6_BIT        (25)
#define ADC0_ADCSSCTL0_R_END6_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL0_R_END6_END        (0x02000000)

#define ADC0_ADCSSCTL0_END6_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_END6_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL0_END6_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_IE6_MASK       (0x04000000)
#define ADC0_ADCSSCTL0_R_IE6_BIT        (26)
#define ADC0_ADCSSCTL0_R_IE6_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_R_IE6_EN         (0x04000000)

#define ADC0_ADCSSCTL0_IE6_MASK       (0x00000001)
#define ADC0_ADCSSCTL0_IE6_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_IE6_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_TS6_MASK         (0x0800000)
#define ADC0_ADCSSCTL0_R_TS6_BIT          (27)
#define ADC0_ADCSSCTL0_R_TS6_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_R_TS6_TEMP         (0x08000000)

#define ADC0_ADCSSCTL0_TS6_MASK         (0x00000001)
#define ADC0_ADCSSCTL0_TS6_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_TS6_TEMP         (0x00000001)
//--------


//--------
#define ADC0_ADCSSCTL0_R_D7_MASK       (0x10000000)
#define ADC0_ADCSSCTL0_R_D7_BIT        (28)
#define ADC0_ADCSSCTL0_R_D7_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL0_R_D7_DIFF       (0x10000000)

#define ADC0_ADCSSCTL0_D7_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_D7_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL0_D7_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_END7_MASK       (0x20000000)
#define ADC0_ADCSSCTL0_R_END7_BIT        (29)
#define ADC0_ADCSSCTL0_R_END7_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL0_R_END7_END        (0x20000000)

#define ADC0_ADCSSCTL0_END7_MASK        (0x00000001)
#define ADC0_ADCSSCTL0_END7_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL0_END7_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_IE7_MASK       (0x40000000)
#define ADC0_ADCSSCTL0_R_IE7_BIT        (30)
#define ADC0_ADCSSCTL0_R_IE7_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_R_IE7_EN         (0x40000000)

#define ADC0_ADCSSCTL0_IE7_MASK       (0x00000001)
#define ADC0_ADCSSCTL0_IE7_DIS        (0x00000000)
#define ADC0_ADCSSCTL0_IE7_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL0_R_TS7_MASK         (0x8000000)
#define ADC0_ADCSSCTL0_R_TS7_BIT          (31)
#define ADC0_ADCSSCTL0_R_TS7_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_R_TS7_TEMP         (0x80000000)

#define ADC0_ADCSSCTL0_TS7_MASK         (0x00000001)
#define ADC0_ADCSSCTL0_TS7_INPUT        (0x00000000)
#define ADC0_ADCSSCTL0_TS7_TEMP         (0x00000001)
//--------


#define ADC0_ADCSSCTL0_D0_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(0*4))))
#define ADC0_ADCSSCTL0_END0_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(1*4))))
#define ADC0_ADCSSCTL0_IE0_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(2*4))))
#define ADC0_ADCSSCTL0_TS0_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(3*4))))
#define ADC0_ADCSSCTL0_D1_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(4*4))))
#define ADC0_ADCSSCTL0_END1_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(5*4))))
#define ADC0_ADCSSCTL0_IE1_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(6*4))))
#define ADC0_ADCSSCTL0_TS1_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(7*4))))
#define ADC0_ADCSSCTL0_D2_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(8*4))))
#define ADC0_ADCSSCTL0_END2_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(9*4))))
#define ADC0_ADCSSCTL0_IE2_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(10*4))))
#define ADC0_ADCSSCTL0_TS2_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(11*4))))
#define ADC0_ADCSSCTL0_D3_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(12*4))))
#define ADC0_ADCSSCTL0_END3_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(13*4))))
#define ADC0_ADCSSCTL0_IE3_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(14*4))))
#define ADC0_ADCSSCTL0_TS3_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(15*4))))
#define ADC0_ADCSSCTL0_D4_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(16*4))))
#define ADC0_ADCSSCTL0_END4_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(17*4))))
#define ADC0_ADCSSCTL0_IE4_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(18*4))))
#define ADC0_ADCSSCTL0_TS4_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(19*4))))
#define ADC0_ADCSSCTL0_D5_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(20*4))))
#define ADC0_ADCSSCTL0_END5_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(21*4))))
#define ADC0_ADCSSCTL0_IE5_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(22*4))))
#define ADC0_ADCSSCTL0_TS5_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(23*4))))
#define ADC0_ADCSSCTL0_D6_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(24*4))))
#define ADC0_ADCSSCTL0_END6_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(25*4))))
#define ADC0_ADCSSCTL0_IE6_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(26*4))))
#define ADC0_ADCSSCTL0_TS6_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(27*4))))
#define ADC0_ADCSSCTL0_D7_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(28*4))))
#define ADC0_ADCSSCTL0_END7_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(29*4))))
#define ADC0_ADCSSCTL0_IE7_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(30*4))))
#define ADC0_ADCSSCTL0_TS7_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(31*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.17 ADCSSFIFO0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSFIFO0            (((ADCSSFIFO0_TypeDef*)(ADC0_BASE + ADC_ADCSSFIFO0_OFFSET )))
#define ADC0_ADCSSFIFO0_R          (*((volatile const uint32_t *)(ADC0_BASE +ADC_ADCSSFIFO0_OFFSET)))


//--------
#define ADC0_ADCSSFIFO0_R_DATA_MASK       (0x00000FFF)
#define ADC0_ADCSSFIFO0_R_DATA_BIT        (0)

#define ADC0_ADCSSFIFO0_DATA_MASK         (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.18 ADCSSFSTAT0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSFSTAT0            (((ADCSSFSTAT0_TypeDef*)(ADC0_BASE + ADC_ADCSSFSTAT0_OFFSET )))
#define ADC0_ADCSSFSTAT0_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSFSTAT0_OFFSET)))


//--------
#define ADC0_ADCSSFSTAT0_R_TPTR_MASK       (0x0000000F)
#define ADC0_ADCSSFSTAT0_R_TPTR_BIT        (0)
#define ADC0_ADCSSFSTAT0_R_TPTR_POS0       (0x00000000)
#define ADC0_ADCSSFSTAT0_R_TPTR_POS1       (0x00000001)
#define ADC0_ADCSSFSTAT0_R_TPTR_POS2       (0x00000002)
#define ADC0_ADCSSFSTAT0_R_TPTR_POS3       (0x00000003)
#define ADC0_ADCSSFSTAT0_R_TPTR_POS4       (0x00000004)
#define ADC0_ADCSSFSTAT0_R_TPTR_POS5       (0x00000005)
#define ADC0_ADCSSFSTAT0_R_TPTR_POS6       (0x00000006)
#define ADC0_ADCSSFSTAT0_R_TPTR_POS7       (0x00000007)

#define ADC0_ADCSSFSTAT0_TPTR_MASK       (0x0000000F)
#define ADC0_ADCSSFSTAT0_TPTR_POS0       (0x00000000)
#define ADC0_ADCSSFSTAT0_TPTR_POS1       (0x00000001)
#define ADC0_ADCSSFSTAT0_TPTR_POS2       (0x00000002)
#define ADC0_ADCSSFSTAT0_TPTR_POS3       (0x00000003)
#define ADC0_ADCSSFSTAT0_TPTR_POS4       (0x00000004)
#define ADC0_ADCSSFSTAT0_TPTR_POS5       (0x00000005)
#define ADC0_ADCSSFSTAT0_TPTR_POS6       (0x00000006)
#define ADC0_ADCSSFSTAT0_TPTR_POS7       (0x00000007)
//--------

//--------
#define ADC0_ADCSSFSTAT0_R_HPTR_MASK       (0x000000F0)
#define ADC0_ADCSSFSTAT0_R_HPTR_BIT        (4)
#define ADC0_ADCSSFSTAT0_R_HPTR_POS0       (0x00000000)
#define ADC0_ADCSSFSTAT0_R_HPTR_POS1       (0x00000010)
#define ADC0_ADCSSFSTAT0_R_HPTR_POS2       (0x00000020)
#define ADC0_ADCSSFSTAT0_R_HPTR_POS3       (0x00000030)
#define ADC0_ADCSSFSTAT0_R_HPTR_POS4       (0x00000040)
#define ADC0_ADCSSFSTAT0_R_HPTR_POS5       (0x00000050)
#define ADC0_ADCSSFSTAT0_R_HPTR_POS6       (0x00000060)
#define ADC0_ADCSSFSTAT0_R_HPTR_POS7       (0x00000070)

#define ADC0_ADCSSFSTAT0_HPTR_MASK       (0x0000000F)
#define ADC0_ADCSSFSTAT0_HPTR_POS0       (0x00000000)
#define ADC0_ADCSSFSTAT0_HPTR_POS1       (0x00000001)
#define ADC0_ADCSSFSTAT0_HPTR_POS2       (0x00000002)
#define ADC0_ADCSSFSTAT0_HPTR_POS3       (0x00000003)
#define ADC0_ADCSSFSTAT0_HPTR_POS4       (0x00000004)
#define ADC0_ADCSSFSTAT0_HPTR_POS5       (0x00000005)
#define ADC0_ADCSSFSTAT0_HPTR_POS6       (0x00000006)
#define ADC0_ADCSSFSTAT0_HPTR_POS7       (0x00000007)
//--------

//--------
#define ADC0_ADCSSFSTAT0_R_EMPTY_MASK       (0x00000100)
#define ADC0_ADCSSFSTAT0_R_EMPTY_BIT        (8)
#define ADC0_ADCSSFSTAT0_R_EMPTY_NOEMPTY    (0x00000000)
#define ADC0_ADCSSFSTAT0_R_EMPTY_EMPTY      (0x00000100)

#define ADC0_ADCSSFSTAT0_EMPTY_MASK        (0x00000001)
#define ADC0_ADCSSFSTAT0_EMPTY_NOEMPTY     (0x00000000)
#define ADC0_ADCSSFSTAT0_EMPTY_EMPTY       (0x00000001)
//--------

//--------
#define ADC0_ADCSSFSTAT0_R_FULL_MASK       (0x00000100)
#define ADC0_ADCSSFSTAT0_R_FULL_BIT        (8)
#define ADC0_ADCSSFSTAT0_R_FULL_NOFULL     (0x00000000)
#define ADC0_ADCSSFSTAT0_R_FULL_FULL       (0x00000100)

#define ADC0_ADCSSFSTAT0_FULL_MASK        (0x00000001)
#define ADC0_ADCSSFSTAT0_FULL_NOFULL      (0x00000000)
#define ADC0_ADCSSFSTAT0_FULL_FULL        (0x00000001)
//--------


#define ADC0_ADCSSFSTAT0_EMPTY_BB        (*((volatile const uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSFSTAT0_OFFSET)*32)+(8*4))))
#define ADC0_ADCSSFSTAT0_FULL_BB         (*((volatile const uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSFSTAT0_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.19 ADCSSOP0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSOP0            (((ADCSSOP0_TypeDef*)(ADC0_BASE + ADC_ADCSSOP0_OFFSET )))
#define ADC0_ADCSSOP0_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSOP0_OFFSET)))


//--------
#define ADC0_ADCSSOP0_R_S0DCOP_MASK       (0x00000001)
#define ADC0_ADCSSOP0_R_S0DCOP_BIT        (0)
#define ADC0_ADCSSOP0_R_S0DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP0_R_S0DCOP_DC         (0x00000001)

#define ADC0_ADCSSOP0_S0DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP0_S0DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP0_S0DCOP_DC          (0x00000001)
//--------

//--------
#define ADC0_ADCSSOP0_R_S1DCOP_MASK       (0x00000010)
#define ADC0_ADCSSOP0_R_S1DCOP_BIT        (4)
#define ADC0_ADCSSOP0_R_S1DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP0_R_S1DCOP_DC         (0x00000010)

#define ADC0_ADCSSOP0_S1DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP0_S1DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP0_S1DCOP_DC          (0x00000001)
//--------

//--------
#define ADC0_ADCSSOP0_R_S2DCOP_MASK       (0x00000100)
#define ADC0_ADCSSOP0_R_S2DCOP_BIT        (8)
#define ADC0_ADCSSOP0_R_S2DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP0_R_S2DCOP_DC         (0x00000100)

#define ADC0_ADCSSOP0_S2DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP0_S2DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP0_S2DCOP_DC          (0x00000001)
//--------

//--------
#define ADC0_ADCSSOP0_R_S3DCOP_MASK       (0x00001000)
#define ADC0_ADCSSOP0_R_S3DCOP_BIT        (12)
#define ADC0_ADCSSOP0_R_S3DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP0_R_S3DCOP_DC         (0x00001000)

#define ADC0_ADCSSOP0_S3DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP0_S3DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP0_S3DCOP_DC          (0x00000001)
//--------

//--------
#define ADC0_ADCSSOP0_R_S4DCOP_MASK       (0x00010000)
#define ADC0_ADCSSOP0_R_S4DCOP_BIT        (16)
#define ADC0_ADCSSOP0_R_S4DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP0_R_S4DCOP_DC         (0x00010000)

#define ADC0_ADCSSOP0_S4DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP0_S4DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP0_S4DCOP_DC          (0x00000001)
//--------

//--------
#define ADC0_ADCSSOP0_R_S5DCOP_MASK       (0x00100000)
#define ADC0_ADCSSOP0_R_S5DCOP_BIT        (20)
#define ADC0_ADCSSOP0_R_S5DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP0_R_S5DCOP_DC         (0x00100000)

#define ADC0_ADCSSOP0_S5DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP0_S5DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP0_S5DCOP_DC          (0x00000001)
//--------

//--------
#define ADC0_ADCSSOP0_R_S6DCOP_MASK       (0x01000000)
#define ADC0_ADCSSOP0_R_S6DCOP_BIT        (24)
#define ADC0_ADCSSOP0_R_S6DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP0_R_S6DCOP_DC         (0x01000000)

#define ADC0_ADCSSOP0_S6DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP0_S6DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP0_S6DCOP_DC          (0x00000001)
//--------

//--------
#define ADC0_ADCSSOP0_R_S7DCOP_MASK       (0x10000000)
#define ADC0_ADCSSOP0_R_S7DCOP_BIT        (28)
#define ADC0_ADCSSOP0_R_S7DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP0_R_S7DCOP_DC         (0x10000000)

#define ADC0_ADCSSOP0_S7DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP0_S7DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP0_S7DCOP_DC          (0x00000001)
//--------

#define ADC0_ADCSSOP0_S0DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(0*4))))
#define ADC0_ADCSSOP0_S1DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(4*4))))
#define ADC0_ADCSSOP0_S2DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(8*4))))
#define ADC0_ADCSSOP0_S3DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(12*4))))
#define ADC0_ADCSSOP0_S4DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(16*4))))
#define ADC0_ADCSSOP0_S5DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(20*4))))
#define ADC0_ADCSSOP0_S6DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(24*4))))
#define ADC0_ADCSSOP0_S7DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(28*4))))



////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.20 ADCSSDC0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSDC0            (((ADCSSDC0_TypeDef*)(ADC0_BASE + ADC_ADCSSDC0_OFFSET )))
#define ADC0_ADCSSDC0_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSDC0_OFFSET)))


//--------
#define ADC0_ADCSSDC0_R_S0DCSEL_MASK       (0x0000000F)
#define ADC0_ADCSSDC0_R_S0DCSEL_BIT        (0)
#define ADC0_ADCSSDC0_R_S0DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC0_R_S0DCSEL_DC1        (0x00000001)
#define ADC0_ADCSSDC0_R_S0DCSEL_DC2        (0x00000002)
#define ADC0_ADCSSDC0_R_S0DCSEL_DC3        (0x00000003)
#define ADC0_ADCSSDC0_R_S0DCSEL_DC4        (0x00000004)
#define ADC0_ADCSSDC0_R_S0DCSEL_DC5        (0x00000005)
#define ADC0_ADCSSDC0_R_S0DCSEL_DC6        (0x00000006)
#define ADC0_ADCSSDC0_R_S0DCSEL_DC7        (0x00000007)

#define ADC0_ADCSSDC0_S0DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC0_S0DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC0_S0DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC0_S0DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC0_S0DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC0_S0DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC0_S0DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC0_S0DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC0_S0DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC0_ADCSSDC0_R_S1DCSEL_MASK       (0x000000F0)
#define ADC0_ADCSSDC0_R_S1DCSEL_BIT        (4)
#define ADC0_ADCSSDC0_R_S1DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC0_R_S1DCSEL_DC1        (0x00000010)
#define ADC0_ADCSSDC0_R_S1DCSEL_DC2        (0x00000020)
#define ADC0_ADCSSDC0_R_S1DCSEL_DC3        (0x00000030)
#define ADC0_ADCSSDC0_R_S1DCSEL_DC4        (0x00000040)
#define ADC0_ADCSSDC0_R_S1DCSEL_DC5        (0x00000050)
#define ADC0_ADCSSDC0_R_S1DCSEL_DC6        (0x00000060)
#define ADC0_ADCSSDC0_R_S1DCSEL_DC7        (0x00000070)

#define ADC0_ADCSSDC0_S1DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC0_S1DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC0_S1DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC0_S1DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC0_S1DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC0_S1DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC0_S1DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC0_S1DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC0_S1DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC0_ADCSSDC0_R_S2DCSEL_MASK       (0x00000F00)
#define ADC0_ADCSSDC0_R_S2DCSEL_BIT        (8)
#define ADC0_ADCSSDC0_R_S2DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC0_R_S2DCSEL_DC1        (0x00000100)
#define ADC0_ADCSSDC0_R_S2DCSEL_DC2        (0x00000200)
#define ADC0_ADCSSDC0_R_S2DCSEL_DC3        (0x00000300)
#define ADC0_ADCSSDC0_R_S2DCSEL_DC4        (0x00000400)
#define ADC0_ADCSSDC0_R_S2DCSEL_DC5        (0x00000500)
#define ADC0_ADCSSDC0_R_S2DCSEL_DC6        (0x00000600)
#define ADC0_ADCSSDC0_R_S2DCSEL_DC7        (0x00000700)

#define ADC0_ADCSSDC0_S2DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC0_S2DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC0_S2DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC0_S2DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC0_S2DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC0_S2DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC0_S2DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC0_S2DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC0_S2DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC0_ADCSSDC0_R_S3DCSEL_MASK       (0x0000F000)
#define ADC0_ADCSSDC0_R_S3DCSEL_BIT        (12)
#define ADC0_ADCSSDC0_R_S3DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC0_R_S3DCSEL_DC1        (0x00001000)
#define ADC0_ADCSSDC0_R_S3DCSEL_DC2        (0x00002000)
#define ADC0_ADCSSDC0_R_S3DCSEL_DC3        (0x00003000)
#define ADC0_ADCSSDC0_R_S3DCSEL_DC4        (0x00004000)
#define ADC0_ADCSSDC0_R_S3DCSEL_DC5        (0x00005000)
#define ADC0_ADCSSDC0_R_S3DCSEL_DC6        (0x00006000)
#define ADC0_ADCSSDC0_R_S3DCSEL_DC7        (0x00007000)

#define ADC0_ADCSSDC0_S3DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC0_S3DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC0_S3DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC0_S3DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC0_S3DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC0_S3DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC0_S3DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC0_S3DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC0_S3DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC0_ADCSSDC0_R_S4DCSEL_MASK       (0x000F0000)
#define ADC0_ADCSSDC0_R_S4DCSEL_BIT        (16)
#define ADC0_ADCSSDC0_R_S4DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC0_R_S4DCSEL_DC1        (0x00010000)
#define ADC0_ADCSSDC0_R_S4DCSEL_DC2        (0x00020000)
#define ADC0_ADCSSDC0_R_S4DCSEL_DC3        (0x00030000)
#define ADC0_ADCSSDC0_R_S4DCSEL_DC4        (0x00040000)
#define ADC0_ADCSSDC0_R_S4DCSEL_DC5        (0x00050000)
#define ADC0_ADCSSDC0_R_S4DCSEL_DC6        (0x00060000)
#define ADC0_ADCSSDC0_R_S4DCSEL_DC7        (0x00070000)

#define ADC0_ADCSSDC0_S4DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC0_S4DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC0_S4DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC0_S4DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC0_S4DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC0_S4DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC0_S4DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC0_S4DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC0_S4DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC0_ADCSSDC0_R_S5DCSEL_MASK       (0x00F00000)
#define ADC0_ADCSSDC0_R_S5DCSEL_BIT        (20)
#define ADC0_ADCSSDC0_R_S5DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC0_R_S5DCSEL_DC1        (0x00100000)
#define ADC0_ADCSSDC0_R_S5DCSEL_DC2        (0x00200000)
#define ADC0_ADCSSDC0_R_S5DCSEL_DC3        (0x00300000)
#define ADC0_ADCSSDC0_R_S5DCSEL_DC4        (0x00400000)
#define ADC0_ADCSSDC0_R_S5DCSEL_DC5        (0x00500000)
#define ADC0_ADCSSDC0_R_S5DCSEL_DC6        (0x00600000)
#define ADC0_ADCSSDC0_R_S5DCSEL_DC7        (0x00700000)

#define ADC0_ADCSSDC0_S5DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC0_S5DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC0_S5DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC0_S5DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC0_S5DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC0_S5DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC0_S5DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC0_S5DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC0_S5DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC0_ADCSSDC0_R_S6DCSEL_MASK       (0x0F000000)
#define ADC0_ADCSSDC0_R_S6DCSEL_BIT        (24)
#define ADC0_ADCSSDC0_R_S6DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC0_R_S6DCSEL_DC1        (0x01000000)
#define ADC0_ADCSSDC0_R_S6DCSEL_DC2        (0x02000000)
#define ADC0_ADCSSDC0_R_S6DCSEL_DC3        (0x03000000)
#define ADC0_ADCSSDC0_R_S6DCSEL_DC4        (0x04000000)
#define ADC0_ADCSSDC0_R_S6DCSEL_DC5        (0x05000000)
#define ADC0_ADCSSDC0_R_S6DCSEL_DC6        (0x06000000)
#define ADC0_ADCSSDC0_R_S6DCSEL_DC7        (0x07000000)

#define ADC0_ADCSSDC0_S6DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC0_S6DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC0_S6DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC0_S6DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC0_S6DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC0_S6DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC0_S6DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC0_S6DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC0_S6DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC0_ADCSSDC0_R_S7DCSEL_MASK       (0xF0000000)
#define ADC0_ADCSSDC0_R_S7DCSEL_BIT        (28)
#define ADC0_ADCSSDC0_R_S7DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC0_R_S7DCSEL_DC1        (0x10000000)
#define ADC0_ADCSSDC0_R_S7DCSEL_DC2        (0x2000000)
#define ADC0_ADCSSDC0_R_S7DCSEL_DC3        (0x30000000)
#define ADC0_ADCSSDC0_R_S7DCSEL_DC4        (0x40000000)
#define ADC0_ADCSSDC0_R_S7DCSEL_DC5        (0x50000000)
#define ADC0_ADCSSDC0_R_S7DCSEL_DC6        (0x60000000)
#define ADC0_ADCSSDC0_R_S7DCSEL_DC7        (0x70000000)

#define ADC0_ADCSSDC0_S7DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC0_S7DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC0_S7DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC0_S7DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC0_S7DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC0_S7DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC0_S7DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC0_S7DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC0_S7DCSEL_DC7         (0x00000007)
//--------
////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.21 ADCSSMUX1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSMUX1            (((ADCSSMUX1_TypeDef*)(ADC0_BASE + ADC_ADCSSMUX1_OFFSET )))
#define ADC0_ADCSSMUX1_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSMUX1_OFFSET)))

//--------
#define ADC0_ADCSSMUX1_R_MUX0_MASK       (0x0000000F)
#define ADC0_ADCSSMUX1_R_MUX0_BIT        (0)
#define ADC0_ADCSSMUX1_R_MUX0_AIN0       (0x00000000)
#define ADC0_ADCSSMUX1_R_MUX0_AIN1       (0x00000001)
#define ADC0_ADCSSMUX1_R_MUX0_AIN2       (0x00000002)
#define ADC0_ADCSSMUX1_R_MUX0_AIN3       (0x00000003)
#define ADC0_ADCSSMUX1_R_MUX0_AIN4       (0x00000004)
#define ADC0_ADCSSMUX1_R_MUX0_AIN5       (0x00000005)
#define ADC0_ADCSSMUX1_R_MUX0_AIN6       (0x00000006)
#define ADC0_ADCSSMUX1_R_MUX0_AIN7       (0x00000007)
#define ADC0_ADCSSMUX1_R_MUX0_AIN8       (0x00000008)
#define ADC0_ADCSSMUX1_R_MUX0_AIN9       (0x00000009)
#define ADC0_ADCSSMUX1_R_MUX0_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX1_R_MUX0_AIN11      (0x0000000B)

#define ADC0_ADCSSMUX1_MUX0_MASK       (0x0000000F)
#define ADC0_ADCSSMUX1_MUX0_AIN0       (0x00000000)
#define ADC0_ADCSSMUX1_MUX0_AIN1       (0x00000001)
#define ADC0_ADCSSMUX1_MUX0_AIN2       (0x00000002)
#define ADC0_ADCSSMUX1_MUX0_AIN3       (0x00000003)
#define ADC0_ADCSSMUX1_MUX0_AIN4       (0x00000004)
#define ADC0_ADCSSMUX1_MUX0_AIN5       (0x00000005)
#define ADC0_ADCSSMUX1_MUX0_AIN6       (0x00000006)
#define ADC0_ADCSSMUX1_MUX0_AIN7       (0x00000007)
#define ADC0_ADCSSMUX1_MUX0_AIN8       (0x00000008)
#define ADC0_ADCSSMUX1_MUX0_AIN9       (0x00000009)
#define ADC0_ADCSSMUX1_MUX0_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX1_MUX0_AIN11      (0x0000000B)
//--------

//--------
#define ADC0_ADCSSMUX1_R_MUX1_MASK       (0x000000F0)
#define ADC0_ADCSSMUX1_R_MUX1_BIT        (4)
#define ADC0_ADCSSMUX1_R_MUX1_AIN0       (0x00000000)
#define ADC0_ADCSSMUX1_R_MUX1_AIN1       (0x00000010)
#define ADC0_ADCSSMUX1_R_MUX1_AIN2       (0x00000020)
#define ADC0_ADCSSMUX1_R_MUX1_AIN3       (0x00000030)
#define ADC0_ADCSSMUX1_R_MUX1_AIN4       (0x00000040)
#define ADC0_ADCSSMUX1_R_MUX1_AIN5       (0x00000050)
#define ADC0_ADCSSMUX1_R_MUX1_AIN6       (0x00000060)
#define ADC0_ADCSSMUX1_R_MUX1_AIN7       (0x00000070)
#define ADC0_ADCSSMUX1_R_MUX1_AIN8       (0x00000080)
#define ADC0_ADCSSMUX1_R_MUX1_AIN9       (0x00000090)
#define ADC0_ADCSSMUX1_R_MUX1_AIN10      (0x000000A0)
#define ADC0_ADCSSMUX1_R_MUX1_AIN11      (0x000000B0)

#define ADC0_ADCSSMUX1_MUX1_MASK       (0x0000000F)
#define ADC0_ADCSSMUX1_MUX1_AIN0       (0x00000000)
#define ADC0_ADCSSMUX1_MUX1_AIN1       (0x00000001)
#define ADC0_ADCSSMUX1_MUX1_AIN2       (0x00000002)
#define ADC0_ADCSSMUX1_MUX1_AIN3       (0x00000003)
#define ADC0_ADCSSMUX1_MUX1_AIN4       (0x00000004)
#define ADC0_ADCSSMUX1_MUX1_AIN5       (0x00000005)
#define ADC0_ADCSSMUX1_MUX1_AIN6       (0x00000006)
#define ADC0_ADCSSMUX1_MUX1_AIN7       (0x00000007)
#define ADC0_ADCSSMUX1_MUX1_AIN8       (0x00000008)
#define ADC0_ADCSSMUX1_MUX1_AIN9       (0x00000009)
#define ADC0_ADCSSMUX1_MUX1_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX1_MUX1_AIN11      (0x0000000B)
//--------

//--------
#define ADC0_ADCSSMUX1_R_MUX2_MASK       (0x00000F00)
#define ADC0_ADCSSMUX1_R_MUX2_BIT        (8)
#define ADC0_ADCSSMUX1_R_MUX2_AIN0       (0x00000000)
#define ADC0_ADCSSMUX1_R_MUX2_AIN1       (0x00000100)
#define ADC0_ADCSSMUX1_R_MUX2_AIN2       (0x00000200)
#define ADC0_ADCSSMUX1_R_MUX2_AIN3       (0x00000300)
#define ADC0_ADCSSMUX1_R_MUX2_AIN4       (0x00000400)
#define ADC0_ADCSSMUX1_R_MUX2_AIN5       (0x00000500)
#define ADC0_ADCSSMUX1_R_MUX2_AIN6       (0x00000600)
#define ADC0_ADCSSMUX1_R_MUX2_AIN7       (0x00000700)
#define ADC0_ADCSSMUX1_R_MUX2_AIN8       (0x00000800)
#define ADC0_ADCSSMUX1_R_MUX2_AIN9       (0x00000900)
#define ADC0_ADCSSMUX1_R_MUX2_AIN10      (0x00000A00)
#define ADC0_ADCSSMUX1_R_MUX2_AIN11      (0x00000B00)

#define ADC0_ADCSSMUX1_MUX2_MASK       (0x0000000F)
#define ADC0_ADCSSMUX1_MUX2_AIN0       (0x00000000)
#define ADC0_ADCSSMUX1_MUX2_AIN1       (0x00000001)
#define ADC0_ADCSSMUX1_MUX2_AIN2       (0x00000002)
#define ADC0_ADCSSMUX1_MUX2_AIN3       (0x00000003)
#define ADC0_ADCSSMUX1_MUX2_AIN4       (0x00000004)
#define ADC0_ADCSSMUX1_MUX2_AIN5       (0x00000005)
#define ADC0_ADCSSMUX1_MUX2_AIN6       (0x00000006)
#define ADC0_ADCSSMUX1_MUX2_AIN7       (0x00000007)
#define ADC0_ADCSSMUX1_MUX2_AIN8       (0x00000008)
#define ADC0_ADCSSMUX1_MUX2_AIN9       (0x00000009)
#define ADC0_ADCSSMUX1_MUX2_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX1_MUX2_AIN11      (0x0000000B)
//--------

//--------
#define ADC0_ADCSSMUX1_R_MUX3_MASK       (0x0000F000)
#define ADC0_ADCSSMUX1_R_MUX3_BIT        (12)
#define ADC0_ADCSSMUX1_R_MUX3_AIN0       (0x00000000)
#define ADC0_ADCSSMUX1_R_MUX3_AIN1       (0x00001000)
#define ADC0_ADCSSMUX1_R_MUX3_AIN2       (0x00002000)
#define ADC0_ADCSSMUX1_R_MUX3_AIN3       (0x00003000)
#define ADC0_ADCSSMUX1_R_MUX3_AIN4       (0x00004000)
#define ADC0_ADCSSMUX1_R_MUX3_AIN5       (0x00005000)
#define ADC0_ADCSSMUX1_R_MUX3_AIN6       (0x00006000)
#define ADC0_ADCSSMUX1_R_MUX3_AIN7       (0x00007000)
#define ADC0_ADCSSMUX1_R_MUX3_AIN8       (0x00008000)
#define ADC0_ADCSSMUX1_R_MUX3_AIN9       (0x00009000)
#define ADC0_ADCSSMUX1_R_MUX3_AIN10      (0x0000A000)
#define ADC0_ADCSSMUX1_R_MUX3_AIN11      (0x0000B000)

#define ADC0_ADCSSMUX1_MUX3_MASK       (0x0000000F)
#define ADC0_ADCSSMUX1_MUX3_AIN0       (0x00000000)
#define ADC0_ADCSSMUX1_MUX3_AIN1       (0x00000001)
#define ADC0_ADCSSMUX1_MUX3_AIN2       (0x00000002)
#define ADC0_ADCSSMUX1_MUX3_AIN3       (0x00000003)
#define ADC0_ADCSSMUX1_MUX3_AIN4       (0x00000004)
#define ADC0_ADCSSMUX1_MUX3_AIN5       (0x00000005)
#define ADC0_ADCSSMUX1_MUX3_AIN6       (0x00000006)
#define ADC0_ADCSSMUX1_MUX3_AIN7       (0x00000007)
#define ADC0_ADCSSMUX1_MUX3_AIN8       (0x00000008)
#define ADC0_ADCSSMUX1_MUX3_AIN9       (0x00000009)
#define ADC0_ADCSSMUX1_MUX3_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX1_MUX3_AIN11      (0x0000000B)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.22 ADCSSCTL1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSCTL1            (((ADCSSCTL1_TypeDef*)(ADC0_BASE + ADC_ADCSSCTL1_OFFSET )))
#define ADC0_ADCSSCTL1_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSCTL1_OFFSET)))


//--------
#define ADC0_ADCSSCTL1_R_D0_MASK       (0x00000001)
#define ADC0_ADCSSCTL1_R_D0_BIT        (0)
#define ADC0_ADCSSCTL1_R_D0_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL1_R_D0_DIFF       (0x00000001)

#define ADC0_ADCSSCTL1_D0_MASK        (0x00000001)
#define ADC0_ADCSSCTL1_D0_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL1_D0_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL1_R_END0_MASK       (0x00000002)
#define ADC0_ADCSSCTL1_R_END0_BIT        (1)
#define ADC0_ADCSSCTL1_R_END0_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL1_R_END0_END        (0x00000002)

#define ADC0_ADCSSCTL1_END0_MASK        (0x00000001)
#define ADC0_ADCSSCTL1_END0_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL1_END0_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL1_R_IE0_MASK       (0x00000004)
#define ADC0_ADCSSCTL1_R_IE0_BIT        (2)
#define ADC0_ADCSSCTL1_R_IE0_DIS        (0x00000000)
#define ADC0_ADCSSCTL1_R_IE0_EN         (0x00000004)

#define ADC0_ADCSSCTL1_IE0_MASK       (0x00000001)
#define ADC0_ADCSSCTL1_IE0_DIS        (0x00000000)
#define ADC0_ADCSSCTL1_IE0_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL1_R_TS0_MASK         (0x00000008)
#define ADC0_ADCSSCTL1_R_TS0_BIT          (3)
#define ADC0_ADCSSCTL1_R_TS0_INPUT        (0x00000000)
#define ADC0_ADCSSCTL1_R_TS0_TEMP         (0x00000008)

#define ADC0_ADCSSCTL1_TS0_MASK         (0x00000001)
#define ADC0_ADCSSCTL1_TS0_INPUT        (0x00000000)
#define ADC0_ADCSSCTL1_TS0_TEMP         (0x00000001)
//--------




//--------
#define ADC0_ADCSSCTL1_R_D1_MASK       (0x00000010)
#define ADC0_ADCSSCTL1_R_D1_BIT        (4)
#define ADC0_ADCSSCTL1_R_D1_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL1_R_D1_DIFF       (0x00000010)

#define ADC0_ADCSSCTL1_D1_MASK        (0x00000001)
#define ADC0_ADCSSCTL1_D1_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL1_D1_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL1_R_END1_MASK       (0x00000020)
#define ADC0_ADCSSCTL1_R_END1_BIT        (5)
#define ADC0_ADCSSCTL1_R_END1_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL1_R_END1_END        (0x00000020)

#define ADC0_ADCSSCTL1_END1_MASK        (0x00000001)
#define ADC0_ADCSSCTL1_END1_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL1_END1_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL1_R_IE1_MASK       (0x00000040)
#define ADC0_ADCSSCTL1_R_IE1_BIT        (6)
#define ADC0_ADCSSCTL1_R_IE1_DIS        (0x00000000)
#define ADC0_ADCSSCTL1_R_IE1_EN         (0x00000040)

#define ADC0_ADCSSCTL1_IE1_MASK       (0x00000001)
#define ADC0_ADCSSCTL1_IE1_DIS        (0x00000000)
#define ADC0_ADCSSCTL1_IE1_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL1_R_TS1_MASK         (0x00000080)
#define ADC0_ADCSSCTL1_R_TS1_BIT          (7)
#define ADC0_ADCSSCTL1_R_TS1_INPUT        (0x00000000)
#define ADC0_ADCSSCTL1_R_TS1_TEMP         (0x00000080)

#define ADC0_ADCSSCTL1_TS1_MASK         (0x00000001)
#define ADC0_ADCSSCTL1_TS1_INPUT        (0x00000000)
#define ADC0_ADCSSCTL1_TS1_TEMP         (0x00000001)
//--------





//--------
#define ADC0_ADCSSCTL1_R_D2_MASK       (0x00000100)
#define ADC0_ADCSSCTL1_R_D2_BIT        (8)
#define ADC0_ADCSSCTL1_R_D2_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL1_R_D2_DIFF       (0x00000100)

#define ADC0_ADCSSCTL1_D2_MASK        (0x00000001)
#define ADC0_ADCSSCTL1_D2_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL1_D2_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL1_R_END2_MASK       (0x00000200)
#define ADC0_ADCSSCTL1_R_END2_BIT        (9)
#define ADC0_ADCSSCTL1_R_END2_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL1_R_END2_END        (0x00000200)

#define ADC0_ADCSSCTL1_END2_MASK        (0x00000001)
#define ADC0_ADCSSCTL1_END2_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL1_END2_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL1_R_IE2_MASK       (0x00000400)
#define ADC0_ADCSSCTL1_R_IE2_BIT        (10)
#define ADC0_ADCSSCTL1_R_IE2_DIS        (0x00000000)
#define ADC0_ADCSSCTL1_R_IE2_EN         (0x00000400)

#define ADC0_ADCSSCTL1_IE2_MASK       (0x00000001)
#define ADC0_ADCSSCTL1_IE2_DIS        (0x00000000)
#define ADC0_ADCSSCTL1_IE2_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL1_R_TS2_MASK         (0x00000800)
#define ADC0_ADCSSCTL1_R_TS2_BIT          (11)
#define ADC0_ADCSSCTL1_R_TS2_INPUT        (0x00000000)
#define ADC0_ADCSSCTL1_R_TS2_TEMP         (0x00000800)

#define ADC0_ADCSSCTL1_TS2_MASK         (0x00000001)
#define ADC0_ADCSSCTL1_TS2_INPUT        (0x00000000)
#define ADC0_ADCSSCTL1_TS2_TEMP         (0x00000001)
//--------



//--------
#define ADC0_ADCSSCTL1_R_D3_MASK       (0x00001000)
#define ADC0_ADCSSCTL1_R_D3_BIT        (12)
#define ADC0_ADCSSCTL1_R_D3_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL1_R_D3_DIFF       (0x00001000)

#define ADC0_ADCSSCTL1_D3_MASK        (0x00000001)
#define ADC0_ADCSSCTL1_D3_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL1_D3_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL1_R_END3_MASK       (0x00002000)
#define ADC0_ADCSSCTL1_R_END3_BIT        (13)
#define ADC0_ADCSSCTL1_R_END3_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL1_R_END3_END        (0x00002000)

#define ADC0_ADCSSCTL1_END3_MASK        (0x00000001)
#define ADC0_ADCSSCTL1_END3_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL1_END3_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL1_R_IE3_MASK       (0x00004000)
#define ADC0_ADCSSCTL1_R_IE3_BIT        (14)
#define ADC0_ADCSSCTL1_R_IE3_DIS        (0x00000000)
#define ADC0_ADCSSCTL1_R_IE3_EN         (0x00004000)

#define ADC0_ADCSSCTL1_IE3_MASK       (0x00000001)
#define ADC0_ADCSSCTL1_IE3_DIS        (0x00000000)
#define ADC0_ADCSSCTL1_IE3_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL1_R_TS3_MASK         (0x00008000)
#define ADC0_ADCSSCTL1_R_TS3_BIT          (15)
#define ADC0_ADCSSCTL1_R_TS3_INPUT        (0x00000000)
#define ADC0_ADCSSCTL1_R_TS3_TEMP         (0x00008000)

#define ADC0_ADCSSCTL1_TS3_MASK         (0x00000001)
#define ADC0_ADCSSCTL1_TS3_INPUT        (0x00000000)
#define ADC0_ADCSSCTL1_TS3_TEMP         (0x00000001)
//--------

#define ADC0_ADCSSCTL1_D0_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(0*4))))
#define ADC0_ADCSSCTL1_END0_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(1*4))))
#define ADC0_ADCSSCTL1_IE0_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(2*4))))
#define ADC0_ADCSSCTL1_TS0_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(3*4))))
#define ADC0_ADCSSCTL1_D1_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(4*4))))
#define ADC0_ADCSSCTL1_END1_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(5*4))))
#define ADC0_ADCSSCTL1_IE1_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(6*4))))
#define ADC0_ADCSSCTL1_TS1_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(7*4))))
#define ADC0_ADCSSCTL1_D2_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(8*4))))
#define ADC0_ADCSSCTL1_END2_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(9*4))))
#define ADC0_ADCSSCTL1_IE2_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(10*4))))
#define ADC0_ADCSSCTL1_TS2_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(11*4))))
#define ADC0_ADCSSCTL1_D3_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(12*4))))
#define ADC0_ADCSSCTL1_END3_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(13*4))))
#define ADC0_ADCSSCTL1_IE3_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(14*4))))
#define ADC0_ADCSSCTL1_TS3_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.23 ADCSSFIFO1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSFIFO1            (((ADCSSFIFO1_TypeDef*)(ADC0_BASE + ADC_ADCSSFIFO1_OFFSET )))
#define ADC0_ADCSSFIFO1_R          (*((volatile const uint32_t *)(ADC0_BASE +ADC_ADCSSFIFO1_OFFSET)))

//--------
#define ADC0_ADCSSFIFO1_R_DATA_MASK       (0x00000FFF)
#define ADC0_ADCSSFIFO1_R_DATA_BIT        (0)

#define ADC0_ADCSSFIFO1_DATA_MASK         (0x00000FFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.24 ADCSSFSTAT1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSFSTAT1            (((ADCSSFSTAT1_TypeDef*)(ADC0_BASE + ADC_ADCSSFSTAT1_OFFSET )))
#define ADC0_ADCSSFSTAT1_R          (*((volatile const uint32_t *)(ADC0_BASE +ADC_ADCSSFSTAT1_OFFSET)))

//--------
#define ADC0_ADCSSFSTAT1_R_TPTR_MASK       (0x0000000F)
#define ADC0_ADCSSFSTAT1_R_TPTR_BIT        (0)
#define ADC0_ADCSSFSTAT1_R_TPTR_POS0       (0x00000000)
#define ADC0_ADCSSFSTAT1_R_TPTR_POS1       (0x00000001)
#define ADC0_ADCSSFSTAT1_R_TPTR_POS2       (0x00000002)
#define ADC0_ADCSSFSTAT1_R_TPTR_POS3       (0x00000003)

#define ADC0_ADCSSFSTAT1_TPTR_MASK       (0x0000000F)
#define ADC0_ADCSSFSTAT1_TPTR_POS0       (0x00000000)
#define ADC0_ADCSSFSTAT1_TPTR_POS1       (0x00000001)
#define ADC0_ADCSSFSTAT1_TPTR_POS2       (0x00000002)
#define ADC0_ADCSSFSTAT1_TPTR_POS3       (0x00000003)
//--------

//--------
#define ADC0_ADCSSFSTAT1_R_HPTR_MASK       (0x000000F0)
#define ADC0_ADCSSFSTAT1_R_HPTR_BIT        (4)
#define ADC0_ADCSSFSTAT1_R_HPTR_POS0       (0x00000000)
#define ADC0_ADCSSFSTAT1_R_HPTR_POS1       (0x00000010)
#define ADC0_ADCSSFSTAT1_R_HPTR_POS2       (0x00000020)
#define ADC0_ADCSSFSTAT1_R_HPTR_POS3       (0x00000030)

#define ADC0_ADCSSFSTAT1_HPTR_MASK       (0x0000000F)
#define ADC0_ADCSSFSTAT1_HPTR_POS0       (0x00000000)
#define ADC0_ADCSSFSTAT1_HPTR_POS1       (0x00000001)
#define ADC0_ADCSSFSTAT1_HPTR_POS2       (0x00000002)
#define ADC0_ADCSSFSTAT1_HPTR_POS3       (0x00000003)
//--------

//--------
#define ADC0_ADCSSFSTAT1_R_EMPTY_MASK       (0x00000100)
#define ADC0_ADCSSFSTAT1_R_EMPTY_BIT        (8)
#define ADC0_ADCSSFSTAT1_R_EMPTY_NOEMPTY    (0x00000000)
#define ADC0_ADCSSFSTAT1_R_EMPTY_EMPTY      (0x00000100)

#define ADC0_ADCSSFSTAT1_EMPTY_MASK        (0x00000001)
#define ADC0_ADCSSFSTAT1_EMPTY_NOEMPTY     (0x00000000)
#define ADC0_ADCSSFSTAT1_EMPTY_EMPTY       (0x00000001)
//--------

//--------
#define ADC0_ADCSSFSTAT1_R_FULL_MASK       (0x00000100)
#define ADC0_ADCSSFSTAT1_R_FULL_BIT        (8)
#define ADC0_ADCSSFSTAT1_R_FULL_NOFULL     (0x00000000)
#define ADC0_ADCSSFSTAT1_R_FULL_FULL       (0x00000100)

#define ADC0_ADCSSFSTAT1_FULL_MASK        (0x00000001)
#define ADC0_ADCSSFSTAT1_FULL_NOFULL      (0x00000000)
#define ADC0_ADCSSFSTAT1_FULL_FULL        (0x00000001)
//--------

#define ADC0_ADCSSFSTAT1_EMPTY_BB        (*((volatile const uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSFSTAT1_OFFSET)*32)+(8*4))))
#define ADC0_ADCSSFSTAT1_FULL_BB         (*((volatile const uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSFSTAT1_OFFSET)*32)+(12*4))))




////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.25 ADCSSOP1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSOP1            (((ADCSSOP1_TypeDef*)(ADC0_BASE + ADC_ADCSSOP1_OFFSET )))
#define ADC0_ADCSSOP1_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSOP1_OFFSET)))


//--------
#define ADC0_ADCSSOP1_R_S0DCOP_MASK       (0x00000001)
#define ADC0_ADCSSOP1_R_S0DCOP_BIT        (0)
#define ADC0_ADCSSOP1_R_S0DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP1_R_S0DCOP_DC         (0x00000001)

#define ADC0_ADCSSOP1_S0DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP1_S0DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP1_S0DCOP_DC          (0x00000001)
//--------

//--------
#define ADC0_ADCSSOP1_R_S1DCOP_MASK       (0x00000010)
#define ADC0_ADCSSOP1_R_S1DCOP_BIT        (4)
#define ADC0_ADCSSOP1_R_S1DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP1_R_S1DCOP_DC         (0x00000010)

#define ADC0_ADCSSOP1_S1DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP1_S1DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP1_S1DCOP_DC          (0x00000001)
//--------

//--------
#define ADC0_ADCSSOP1_R_S2DCOP_MASK       (0x00000100)
#define ADC0_ADCSSOP1_R_S2DCOP_BIT        (8)
#define ADC0_ADCSSOP1_R_S2DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP1_R_S2DCOP_DC         (0x00000100)

#define ADC0_ADCSSOP1_S2DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP1_S2DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP1_S2DCOP_DC          (0x00000001)
//--------

//--------
#define ADC0_ADCSSOP1_R_S3DCOP_MASK       (0x00001000)
#define ADC0_ADCSSOP1_R_S3DCOP_BIT        (12)
#define ADC0_ADCSSOP1_R_S3DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP1_R_S3DCOP_DC         (0x00001000)

#define ADC0_ADCSSOP1_S3DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP1_S3DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP1_S3DCOP_DC          (0x00000001)
//--------

#define ADC0_ADCSSOP1_S0DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP1_OFFSET)*32)+(0*4))))
#define ADC0_ADCSSOP1_S1DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP1_OFFSET)*32)+(4*4))))
#define ADC0_ADCSSOP1_S2DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP1_OFFSET)*32)+(8*4))))
#define ADC0_ADCSSOP1_S3DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP1_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.26 ADCSSDC1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSDC1            (((ADCSSDC1_TypeDef*)(ADC0_BASE + ADC_ADCSSDC1_OFFSET )))
#define ADC0_ADCSSDC1_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSDC1_OFFSET)))


//--------
#define ADC0_ADCSSDC1_R_S0DCSEL_MASK       (0x0000000F)
#define ADC0_ADCSSDC1_R_S0DCSEL_BIT        (0)
#define ADC0_ADCSSDC1_R_S0DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC1_R_S0DCSEL_DC1        (0x00000001)
#define ADC0_ADCSSDC1_R_S0DCSEL_DC2        (0x00000002)
#define ADC0_ADCSSDC1_R_S0DCSEL_DC3        (0x00000003)
#define ADC0_ADCSSDC1_R_S0DCSEL_DC4        (0x00000004)
#define ADC0_ADCSSDC1_R_S0DCSEL_DC5        (0x00000005)
#define ADC0_ADCSSDC1_R_S0DCSEL_DC6        (0x00000006)
#define ADC0_ADCSSDC1_R_S0DCSEL_DC7        (0x00000007)

#define ADC0_ADCSSDC1_S0DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC1_S0DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC1_S0DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC1_S0DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC1_S0DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC1_S0DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC1_S0DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC1_S0DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC1_S0DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC0_ADCSSDC1_R_S1DCSEL_MASK       (0x000000F0)
#define ADC0_ADCSSDC1_R_S1DCSEL_BIT        (4)
#define ADC0_ADCSSDC1_R_S1DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC1_R_S1DCSEL_DC1        (0x00000010)
#define ADC0_ADCSSDC1_R_S1DCSEL_DC2        (0x00000020)
#define ADC0_ADCSSDC1_R_S1DCSEL_DC3        (0x00000030)
#define ADC0_ADCSSDC1_R_S1DCSEL_DC4        (0x00000040)
#define ADC0_ADCSSDC1_R_S1DCSEL_DC5        (0x00000050)
#define ADC0_ADCSSDC1_R_S1DCSEL_DC6        (0x00000060)
#define ADC0_ADCSSDC1_R_S1DCSEL_DC7        (0x00000070)

#define ADC0_ADCSSDC1_S1DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC1_S1DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC1_S1DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC1_S1DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC1_S1DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC1_S1DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC1_S1DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC1_S1DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC1_S1DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC0_ADCSSDC1_R_S2DCSEL_MASK       (0x00000F00)
#define ADC0_ADCSSDC1_R_S2DCSEL_BIT        (8)
#define ADC0_ADCSSDC1_R_S2DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC1_R_S2DCSEL_DC1        (0x00000100)
#define ADC0_ADCSSDC1_R_S2DCSEL_DC2        (0x00000200)
#define ADC0_ADCSSDC1_R_S2DCSEL_DC3        (0x00000300)
#define ADC0_ADCSSDC1_R_S2DCSEL_DC4        (0x00000400)
#define ADC0_ADCSSDC1_R_S2DCSEL_DC5        (0x00000500)
#define ADC0_ADCSSDC1_R_S2DCSEL_DC6        (0x00000600)
#define ADC0_ADCSSDC1_R_S2DCSEL_DC7        (0x00000700)

#define ADC0_ADCSSDC1_S2DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC1_S2DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC1_S2DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC1_S2DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC1_S2DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC1_S2DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC1_S2DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC1_S2DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC1_S2DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC0_ADCSSDC1_R_S3DCSEL_MASK       (0x0000F000)
#define ADC0_ADCSSDC1_R_S3DCSEL_BIT        (12)
#define ADC0_ADCSSDC1_R_S3DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC1_R_S3DCSEL_DC1        (0x00001000)
#define ADC0_ADCSSDC1_R_S3DCSEL_DC2        (0x00002000)
#define ADC0_ADCSSDC1_R_S3DCSEL_DC3        (0x00003000)
#define ADC0_ADCSSDC1_R_S3DCSEL_DC4        (0x00004000)
#define ADC0_ADCSSDC1_R_S3DCSEL_DC5        (0x00005000)
#define ADC0_ADCSSDC1_R_S3DCSEL_DC6        (0x00006000)
#define ADC0_ADCSSDC1_R_S3DCSEL_DC7        (0x00007000)

#define ADC0_ADCSSDC1_S3DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC1_S3DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC1_S3DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC1_S3DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC1_S3DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC1_S3DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC1_S3DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC1_S3DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC1_S3DCSEL_DC7         (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.27 ADCSSMUX2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSMUX2            (((ADCSSMUX2_TypeDef*)(ADC0_BASE + ADC_ADCSSMUX2_OFFSET )))
#define ADC0_ADCSSMUX2_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSMUX2_OFFSET)))


//--------
#define ADC0_ADCSSMUX2_R_MUX0_MASK       (0x0000000F)
#define ADC0_ADCSSMUX2_R_MUX0_BIT        (0)
#define ADC0_ADCSSMUX2_R_MUX0_AIN0       (0x00000000)
#define ADC0_ADCSSMUX2_R_MUX0_AIN1       (0x00000001)
#define ADC0_ADCSSMUX2_R_MUX0_AIN2       (0x00000002)
#define ADC0_ADCSSMUX2_R_MUX0_AIN3       (0x00000003)
#define ADC0_ADCSSMUX2_R_MUX0_AIN4       (0x00000004)
#define ADC0_ADCSSMUX2_R_MUX0_AIN5       (0x00000005)
#define ADC0_ADCSSMUX2_R_MUX0_AIN6       (0x00000006)
#define ADC0_ADCSSMUX2_R_MUX0_AIN7       (0x00000007)
#define ADC0_ADCSSMUX2_R_MUX0_AIN8       (0x00000008)
#define ADC0_ADCSSMUX2_R_MUX0_AIN9       (0x00000009)
#define ADC0_ADCSSMUX2_R_MUX0_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX2_R_MUX0_AIN11      (0x0000000B)

#define ADC0_ADCSSMUX2_MUX0_MASK       (0x0000000F)
#define ADC0_ADCSSMUX2_MUX0_AIN0       (0x00000000)
#define ADC0_ADCSSMUX2_MUX0_AIN1       (0x00000001)
#define ADC0_ADCSSMUX2_MUX0_AIN2       (0x00000002)
#define ADC0_ADCSSMUX2_MUX0_AIN3       (0x00000003)
#define ADC0_ADCSSMUX2_MUX0_AIN4       (0x00000004)
#define ADC0_ADCSSMUX2_MUX0_AIN5       (0x00000005)
#define ADC0_ADCSSMUX2_MUX0_AIN6       (0x00000006)
#define ADC0_ADCSSMUX2_MUX0_AIN7       (0x00000007)
#define ADC0_ADCSSMUX2_MUX0_AIN8       (0x00000008)
#define ADC0_ADCSSMUX2_MUX0_AIN9       (0x00000009)
#define ADC0_ADCSSMUX2_MUX0_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX2_MUX0_AIN11      (0x0000000B)
//--------

//--------
#define ADC0_ADCSSMUX2_R_MUX1_MASK       (0x000000F0)
#define ADC0_ADCSSMUX2_R_MUX1_BIT        (4)
#define ADC0_ADCSSMUX2_R_MUX1_AIN0       (0x00000000)
#define ADC0_ADCSSMUX2_R_MUX1_AIN1       (0x00000010)
#define ADC0_ADCSSMUX2_R_MUX1_AIN2       (0x00000020)
#define ADC0_ADCSSMUX2_R_MUX1_AIN3       (0x00000030)
#define ADC0_ADCSSMUX2_R_MUX1_AIN4       (0x00000040)
#define ADC0_ADCSSMUX2_R_MUX1_AIN5       (0x00000050)
#define ADC0_ADCSSMUX2_R_MUX1_AIN6       (0x00000060)
#define ADC0_ADCSSMUX2_R_MUX1_AIN7       (0x00000070)
#define ADC0_ADCSSMUX2_R_MUX1_AIN8       (0x00000080)
#define ADC0_ADCSSMUX2_R_MUX1_AIN9       (0x00000090)
#define ADC0_ADCSSMUX2_R_MUX1_AIN10      (0x000000A0)
#define ADC0_ADCSSMUX2_R_MUX1_AIN11      (0x000000B0)

#define ADC0_ADCSSMUX2_MUX1_MASK       (0x0000000F)
#define ADC0_ADCSSMUX2_MUX1_AIN0       (0x00000000)
#define ADC0_ADCSSMUX2_MUX1_AIN1       (0x00000001)
#define ADC0_ADCSSMUX2_MUX1_AIN2       (0x00000002)
#define ADC0_ADCSSMUX2_MUX1_AIN3       (0x00000003)
#define ADC0_ADCSSMUX2_MUX1_AIN4       (0x00000004)
#define ADC0_ADCSSMUX2_MUX1_AIN5       (0x00000005)
#define ADC0_ADCSSMUX2_MUX1_AIN6       (0x00000006)
#define ADC0_ADCSSMUX2_MUX1_AIN7       (0x00000007)
#define ADC0_ADCSSMUX2_MUX1_AIN8       (0x00000008)
#define ADC0_ADCSSMUX2_MUX1_AIN9       (0x00000009)
#define ADC0_ADCSSMUX2_MUX1_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX2_MUX1_AIN11      (0x0000000B)
//--------

//--------
#define ADC0_ADCSSMUX2_R_MUX2_MASK       (0x00000F00)
#define ADC0_ADCSSMUX2_R_MUX2_BIT        (8)
#define ADC0_ADCSSMUX2_R_MUX2_AIN0       (0x00000000)
#define ADC0_ADCSSMUX2_R_MUX2_AIN1       (0x00000100)
#define ADC0_ADCSSMUX2_R_MUX2_AIN2       (0x00000200)
#define ADC0_ADCSSMUX2_R_MUX2_AIN3       (0x00000300)
#define ADC0_ADCSSMUX2_R_MUX2_AIN4       (0x00000400)
#define ADC0_ADCSSMUX2_R_MUX2_AIN5       (0x00000500)
#define ADC0_ADCSSMUX2_R_MUX2_AIN6       (0x00000600)
#define ADC0_ADCSSMUX2_R_MUX2_AIN7       (0x00000700)
#define ADC0_ADCSSMUX2_R_MUX2_AIN8       (0x00000800)
#define ADC0_ADCSSMUX2_R_MUX2_AIN9       (0x00000900)
#define ADC0_ADCSSMUX2_R_MUX2_AIN10      (0x00000A00)
#define ADC0_ADCSSMUX2_R_MUX2_AIN11      (0x00000B00)

#define ADC0_ADCSSMUX2_MUX2_MASK       (0x0000000F)
#define ADC0_ADCSSMUX2_MUX2_AIN0       (0x00000000)
#define ADC0_ADCSSMUX2_MUX2_AIN1       (0x00000001)
#define ADC0_ADCSSMUX2_MUX2_AIN2       (0x00000002)
#define ADC0_ADCSSMUX2_MUX2_AIN3       (0x00000003)
#define ADC0_ADCSSMUX2_MUX2_AIN4       (0x00000004)
#define ADC0_ADCSSMUX2_MUX2_AIN5       (0x00000005)
#define ADC0_ADCSSMUX2_MUX2_AIN6       (0x00000006)
#define ADC0_ADCSSMUX2_MUX2_AIN7       (0x00000007)
#define ADC0_ADCSSMUX2_MUX2_AIN8       (0x00000008)
#define ADC0_ADCSSMUX2_MUX2_AIN9       (0x00000009)
#define ADC0_ADCSSMUX2_MUX2_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX2_MUX2_AIN11      (0x0000000B)
//--------

//--------
#define ADC0_ADCSSMUX2_R_MUX3_MASK       (0x0000F000)
#define ADC0_ADCSSMUX2_R_MUX3_BIT        (12)
#define ADC0_ADCSSMUX2_R_MUX3_AIN0       (0x00000000)
#define ADC0_ADCSSMUX2_R_MUX3_AIN1       (0x00001000)
#define ADC0_ADCSSMUX2_R_MUX3_AIN2       (0x00002000)
#define ADC0_ADCSSMUX2_R_MUX3_AIN3       (0x00003000)
#define ADC0_ADCSSMUX2_R_MUX3_AIN4       (0x00004000)
#define ADC0_ADCSSMUX2_R_MUX3_AIN5       (0x00005000)
#define ADC0_ADCSSMUX2_R_MUX3_AIN6       (0x00006000)
#define ADC0_ADCSSMUX2_R_MUX3_AIN7       (0x00007000)
#define ADC0_ADCSSMUX2_R_MUX3_AIN8       (0x00008000)
#define ADC0_ADCSSMUX2_R_MUX3_AIN9       (0x00009000)
#define ADC0_ADCSSMUX2_R_MUX3_AIN10      (0x0000A000)
#define ADC0_ADCSSMUX2_R_MUX3_AIN11      (0x0000B000)

#define ADC0_ADCSSMUX2_MUX3_MASK       (0x0000000F)
#define ADC0_ADCSSMUX2_MUX3_AIN0       (0x00000000)
#define ADC0_ADCSSMUX2_MUX3_AIN1       (0x00000001)
#define ADC0_ADCSSMUX2_MUX3_AIN2       (0x00000002)
#define ADC0_ADCSSMUX2_MUX3_AIN3       (0x00000003)
#define ADC0_ADCSSMUX2_MUX3_AIN4       (0x00000004)
#define ADC0_ADCSSMUX2_MUX3_AIN5       (0x00000005)
#define ADC0_ADCSSMUX2_MUX3_AIN6       (0x00000006)
#define ADC0_ADCSSMUX2_MUX3_AIN7       (0x00000007)
#define ADC0_ADCSSMUX2_MUX3_AIN8       (0x00000008)
#define ADC0_ADCSSMUX2_MUX3_AIN9       (0x00000009)
#define ADC0_ADCSSMUX2_MUX3_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX2_MUX3_AIN11      (0x0000000B)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.28 ADCSSCTL2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSCTL2            (((ADCSSCTL2_TypeDef*)(ADC0_BASE + ADC_ADCSSCTL2_OFFSET )))
#define ADC0_ADCSSCTL2_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSCTL2_OFFSET)))


//--------
#define ADC0_ADCSSCTL2_R_D0_MASK       (0x00000001)
#define ADC0_ADCSSCTL2_R_D0_BIT        (0)
#define ADC0_ADCSSCTL2_R_D0_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL2_R_D0_DIFF       (0x00000001)

#define ADC0_ADCSSCTL2_D0_MASK        (0x00000001)
#define ADC0_ADCSSCTL2_D0_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL2_D0_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL2_R_END0_MASK       (0x00000002)
#define ADC0_ADCSSCTL2_R_END0_BIT        (1)
#define ADC0_ADCSSCTL2_R_END0_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL2_R_END0_END        (0x00000002)

#define ADC0_ADCSSCTL2_END0_MASK        (0x00000001)
#define ADC0_ADCSSCTL2_END0_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL2_END0_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL2_R_IE0_MASK       (0x00000004)
#define ADC0_ADCSSCTL2_R_IE0_BIT        (2)
#define ADC0_ADCSSCTL2_R_IE0_DIS        (0x00000000)
#define ADC0_ADCSSCTL2_R_IE0_EN         (0x00000004)

#define ADC0_ADCSSCTL2_IE0_MASK       (0x00000001)
#define ADC0_ADCSSCTL2_IE0_DIS        (0x00000000)
#define ADC0_ADCSSCTL2_IE0_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL2_R_TS0_MASK         (0x00000008)
#define ADC0_ADCSSCTL2_R_TS0_BIT          (3)
#define ADC0_ADCSSCTL2_R_TS0_INPUT        (0x00000000)
#define ADC0_ADCSSCTL2_R_TS0_TEMP         (0x00000008)

#define ADC0_ADCSSCTL2_TS0_MASK         (0x00000001)
#define ADC0_ADCSSCTL2_TS0_INPUT        (0x00000000)
#define ADC0_ADCSSCTL2_TS0_TEMP         (0x00000001)
//--------




//--------
#define ADC0_ADCSSCTL2_R_D1_MASK       (0x00000010)
#define ADC0_ADCSSCTL2_R_D1_BIT        (4)
#define ADC0_ADCSSCTL2_R_D1_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL2_R_D1_DIFF       (0x00000010)

#define ADC0_ADCSSCTL2_D1_MASK        (0x00000001)
#define ADC0_ADCSSCTL2_D1_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL2_D1_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL2_R_END1_MASK       (0x00000020)
#define ADC0_ADCSSCTL2_R_END1_BIT        (5)
#define ADC0_ADCSSCTL2_R_END1_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL2_R_END1_END        (0x00000020)

#define ADC0_ADCSSCTL2_END1_MASK        (0x00000001)
#define ADC0_ADCSSCTL2_END1_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL2_END1_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL2_R_IE1_MASK       (0x00000040)
#define ADC0_ADCSSCTL2_R_IE1_BIT        (6)
#define ADC0_ADCSSCTL2_R_IE1_DIS        (0x00000000)
#define ADC0_ADCSSCTL2_R_IE1_EN         (0x00000040)

#define ADC0_ADCSSCTL2_IE1_MASK       (0x00000001)
#define ADC0_ADCSSCTL2_IE1_DIS        (0x00000000)
#define ADC0_ADCSSCTL2_IE1_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL2_R_TS1_MASK         (0x00000080)
#define ADC0_ADCSSCTL2_R_TS1_BIT          (7)
#define ADC0_ADCSSCTL2_R_TS1_INPUT        (0x00000000)
#define ADC0_ADCSSCTL2_R_TS1_TEMP         (0x00000080)

#define ADC0_ADCSSCTL2_TS1_MASK         (0x00000001)
#define ADC0_ADCSSCTL2_TS1_INPUT        (0x00000000)
#define ADC0_ADCSSCTL2_TS1_TEMP         (0x00000001)
//--------





//--------
#define ADC0_ADCSSCTL2_R_D2_MASK       (0x00000100)
#define ADC0_ADCSSCTL2_R_D2_BIT        (8)
#define ADC0_ADCSSCTL2_R_D2_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL2_R_D2_DIFF       (0x00000100)

#define ADC0_ADCSSCTL2_D2_MASK        (0x00000001)
#define ADC0_ADCSSCTL2_D2_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL2_D2_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL2_R_END2_MASK       (0x00000200)
#define ADC0_ADCSSCTL2_R_END2_BIT        (9)
#define ADC0_ADCSSCTL2_R_END2_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL2_R_END2_END        (0x00000200)

#define ADC0_ADCSSCTL2_END2_MASK        (0x00000001)
#define ADC0_ADCSSCTL2_END2_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL2_END2_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL2_R_IE2_MASK       (0x00000400)
#define ADC0_ADCSSCTL2_R_IE2_BIT        (10)
#define ADC0_ADCSSCTL2_R_IE2_DIS        (0x00000000)
#define ADC0_ADCSSCTL2_R_IE2_EN         (0x00000400)

#define ADC0_ADCSSCTL2_IE2_MASK       (0x00000001)
#define ADC0_ADCSSCTL2_IE2_DIS        (0x00000000)
#define ADC0_ADCSSCTL2_IE2_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL2_R_TS2_MASK         (0x00000800)
#define ADC0_ADCSSCTL2_R_TS2_BIT          (11)
#define ADC0_ADCSSCTL2_R_TS2_INPUT        (0x00000000)
#define ADC0_ADCSSCTL2_R_TS2_TEMP         (0x00000800)

#define ADC0_ADCSSCTL2_TS2_MASK         (0x00000001)
#define ADC0_ADCSSCTL2_TS2_INPUT        (0x00000000)
#define ADC0_ADCSSCTL2_TS2_TEMP         (0x00000001)
//--------



//--------
#define ADC0_ADCSSCTL2_R_D3_MASK       (0x00001000)
#define ADC0_ADCSSCTL2_R_D3_BIT        (12)
#define ADC0_ADCSSCTL2_R_D3_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL2_R_D3_DIFF       (0x00001000)

#define ADC0_ADCSSCTL2_D3_MASK        (0x00000001)
#define ADC0_ADCSSCTL2_D3_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL2_D3_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL2_R_END3_MASK       (0x00002000)
#define ADC0_ADCSSCTL2_R_END3_BIT        (13)
#define ADC0_ADCSSCTL2_R_END3_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL2_R_END3_END        (0x00002000)

#define ADC0_ADCSSCTL2_END3_MASK        (0x00000001)
#define ADC0_ADCSSCTL2_END3_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL2_END3_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL2_R_IE3_MASK       (0x00004000)
#define ADC0_ADCSSCTL2_R_IE3_BIT        (14)
#define ADC0_ADCSSCTL2_R_IE3_DIS        (0x00000000)
#define ADC0_ADCSSCTL2_R_IE3_EN         (0x00004000)

#define ADC0_ADCSSCTL2_IE3_MASK       (0x00000001)
#define ADC0_ADCSSCTL2_IE3_DIS        (0x00000000)
#define ADC0_ADCSSCTL2_IE3_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL2_R_TS3_MASK         (0x00008000)
#define ADC0_ADCSSCTL2_R_TS3_BIT          (15)
#define ADC0_ADCSSCTL2_R_TS3_INPUT        (0x00000000)
#define ADC0_ADCSSCTL2_R_TS3_TEMP         (0x00008000)

#define ADC0_ADCSSCTL2_TS3_MASK         (0x00000001)
#define ADC0_ADCSSCTL2_TS3_INPUT        (0x00000000)
#define ADC0_ADCSSCTL2_TS3_TEMP         (0x00000001)
//--------


#define ADC0_ADCSSCTL2_D0_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(0*4))))
#define ADC0_ADCSSCTL2_END0_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(1*4))))
#define ADC0_ADCSSCTL2_IE0_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(2*4))))
#define ADC0_ADCSSCTL2_TS0_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(3*4))))
#define ADC0_ADCSSCTL2_D1_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(4*4))))
#define ADC0_ADCSSCTL2_END1_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(5*4))))
#define ADC0_ADCSSCTL2_IE1_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(6*4))))
#define ADC0_ADCSSCTL2_TS1_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(7*4))))
#define ADC0_ADCSSCTL2_D2_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(8*4))))
#define ADC0_ADCSSCTL2_END2_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(9*4))))
#define ADC0_ADCSSCTL2_IE2_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(10*4))))
#define ADC0_ADCSSCTL2_TS2_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(11*4))))
#define ADC0_ADCSSCTL2_D3_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(12*4))))
#define ADC0_ADCSSCTL2_END3_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(13*4))))
#define ADC0_ADCSSCTL2_IE3_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(14*4))))
#define ADC0_ADCSSCTL2_TS3_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.29 ADCSSFIFO2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSFIFO2            (((ADCSSFIFO2_TypeDef*)(ADC0_BASE + ADC_ADCSSFIFO2_OFFSET )))
#define ADC0_ADCSSFIFO2_R          (*((volatile const uint32_t *)(ADC0_BASE +ADC_ADCSSFIFO2_OFFSET)))

//--------
#define ADC0_ADCSSFIFO2_R_DATA_MASK       (0x00000FFF)
#define ADC0_ADCSSFIFO2_R_DATA_BIT        (0)

#define ADC0_ADCSSFIFO2_DATA_MASK         (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.30 ADCSSFSTAT2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSFSTAT2            (((ADCSSFSTAT2_TypeDef*)(ADC0_BASE + ADC_ADCSSFSTAT2_OFFSET )))
#define ADC0_ADCSSFSTAT2_R          (*((volatile const uint32_t *)(ADC0_BASE +ADC_ADCSSFSTAT2_OFFSET)))

//--------
#define ADC0_ADCSSFSTAT2_R_TPTR_MASK       (0x0000000F)
#define ADC0_ADCSSFSTAT2_R_TPTR_BIT        (0)
#define ADC0_ADCSSFSTAT2_R_TPTR_POS0       (0x00000000)
#define ADC0_ADCSSFSTAT2_R_TPTR_POS1       (0x00000001)
#define ADC0_ADCSSFSTAT2_R_TPTR_POS2       (0x00000002)
#define ADC0_ADCSSFSTAT2_R_TPTR_POS3       (0x00000003)

#define ADC0_ADCSSFSTAT2_TPTR_MASK       (0x0000000F)
#define ADC0_ADCSSFSTAT2_TPTR_POS0       (0x00000000)
#define ADC0_ADCSSFSTAT2_TPTR_POS1       (0x00000001)
#define ADC0_ADCSSFSTAT2_TPTR_POS2       (0x00000002)
#define ADC0_ADCSSFSTAT2_TPTR_POS3       (0x00000003)
//--------

//--------
#define ADC0_ADCSSFSTAT2_R_HPTR_MASK       (0x000000F0)
#define ADC0_ADCSSFSTAT2_R_HPTR_BIT        (4)
#define ADC0_ADCSSFSTAT2_R_HPTR_POS0       (0x00000000)
#define ADC0_ADCSSFSTAT2_R_HPTR_POS1       (0x00000010)
#define ADC0_ADCSSFSTAT2_R_HPTR_POS2       (0x00000020)
#define ADC0_ADCSSFSTAT2_R_HPTR_POS3       (0x00000030)

#define ADC0_ADCSSFSTAT2_HPTR_MASK       (0x0000000F)
#define ADC0_ADCSSFSTAT2_HPTR_POS0       (0x00000000)
#define ADC0_ADCSSFSTAT2_HPTR_POS1       (0x00000001)
#define ADC0_ADCSSFSTAT2_HPTR_POS2       (0x00000002)
#define ADC0_ADCSSFSTAT2_HPTR_POS3       (0x00000003)
//--------

//--------
#define ADC0_ADCSSFSTAT2_R_EMPTY_MASK       (0x00000100)
#define ADC0_ADCSSFSTAT2_R_EMPTY_BIT        (8)
#define ADC0_ADCSSFSTAT2_R_EMPTY_NOEMPTY    (0x00000000)
#define ADC0_ADCSSFSTAT2_R_EMPTY_EMPTY      (0x00000100)

#define ADC0_ADCSSFSTAT2_EMPTY_MASK        (0x00000001)
#define ADC0_ADCSSFSTAT2_EMPTY_NOEMPTY     (0x00000000)
#define ADC0_ADCSSFSTAT2_EMPTY_EMPTY       (0x00000001)
//--------

//--------
#define ADC0_ADCSSFSTAT2_R_FULL_MASK       (0x00000100)
#define ADC0_ADCSSFSTAT2_R_FULL_BIT        (8)
#define ADC0_ADCSSFSTAT2_R_FULL_NOFULL     (0x00000000)
#define ADC0_ADCSSFSTAT2_R_FULL_FULL       (0x00000100)

#define ADC0_ADCSSFSTAT2_FULL_MASK        (0x00000001)
#define ADC0_ADCSSFSTAT2_FULL_NOFULL      (0x00000000)
#define ADC0_ADCSSFSTAT2_FULL_FULL        (0x00000001)
//--------

#define ADC0_ADCSSFSTAT2_EMPTY_BB        (*((volatile const uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSFSTAT2_OFFSET)*32)+(8*4))))
#define ADC0_ADCSSFSTAT2_FULL_BB         (*((volatile const uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSFSTAT2_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.31 ADCSSOP2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSOP2            (((ADCSSOP2_TypeDef*)(ADC0_BASE + ADC_ADCSSOP2_OFFSET )))
#define ADC0_ADCSSOP2_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSOP2_OFFSET)))


//--------
#define ADC0_ADCSSOP2_R_S0DCOP_MASK       (0x00000001)
#define ADC0_ADCSSOP2_R_S0DCOP_BIT        (0)
#define ADC0_ADCSSOP2_R_S0DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP2_R_S0DCOP_DC         (0x00000001)

#define ADC0_ADCSSOP2_S0DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP2_S0DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP2_S0DCOP_DC          (0x00000001)
//--------

//--------
#define ADC0_ADCSSOP2_R_S1DCOP_MASK       (0x00000010)
#define ADC0_ADCSSOP2_R_S1DCOP_BIT        (4)
#define ADC0_ADCSSOP2_R_S1DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP2_R_S1DCOP_DC         (0x00000010)

#define ADC0_ADCSSOP2_S1DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP2_S1DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP2_S1DCOP_DC          (0x00000001)
//--------

//--------
#define ADC0_ADCSSOP2_R_S2DCOP_MASK       (0x00000100)
#define ADC0_ADCSSOP2_R_S2DCOP_BIT        (8)
#define ADC0_ADCSSOP2_R_S2DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP2_R_S2DCOP_DC         (0x00000100)

#define ADC0_ADCSSOP2_S2DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP2_S2DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP2_S2DCOP_DC          (0x00000001)
//--------

//--------
#define ADC0_ADCSSOP2_R_S3DCOP_MASK       (0x00001000)
#define ADC0_ADCSSOP2_R_S3DCOP_BIT        (12)
#define ADC0_ADCSSOP2_R_S3DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP2_R_S3DCOP_DC         (0x00001000)

#define ADC0_ADCSSOP2_S3DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP2_S3DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP2_S3DCOP_DC          (0x00000001)
//--------

#define ADC0_ADCSSOP2_S0DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP2_OFFSET)*32)+(0*4))))
#define ADC0_ADCSSOP2_S1DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP2_OFFSET)*32)+(4*4))))
#define ADC0_ADCSSOP2_S2DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP2_OFFSET)*32)+(8*4))))
#define ADC0_ADCSSOP2_S3DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP2_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.32 ADCSSDC2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSDC2            (((ADCSSDC2_TypeDef*)(ADC0_BASE + ADC_ADCSSDC2_OFFSET )))
#define ADC0_ADCSSDC2_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSDC2_OFFSET)))

//--------
#define ADC0_ADCSSDC2_R_S0DCSEL_MASK       (0x0000000F)
#define ADC0_ADCSSDC2_R_S0DCSEL_BIT        (0)
#define ADC0_ADCSSDC2_R_S0DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC2_R_S0DCSEL_DC1        (0x00000001)
#define ADC0_ADCSSDC2_R_S0DCSEL_DC2        (0x00000002)
#define ADC0_ADCSSDC2_R_S0DCSEL_DC3        (0x00000003)
#define ADC0_ADCSSDC2_R_S0DCSEL_DC4        (0x00000004)
#define ADC0_ADCSSDC2_R_S0DCSEL_DC5        (0x00000005)
#define ADC0_ADCSSDC2_R_S0DCSEL_DC6        (0x00000006)
#define ADC0_ADCSSDC2_R_S0DCSEL_DC7        (0x00000007)

#define ADC0_ADCSSDC2_S0DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC2_S0DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC2_S0DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC2_S0DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC2_S0DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC2_S0DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC2_S0DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC2_S0DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC2_S0DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC0_ADCSSDC2_R_S1DCSEL_MASK       (0x000000F0)
#define ADC0_ADCSSDC2_R_S1DCSEL_BIT        (4)
#define ADC0_ADCSSDC2_R_S1DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC2_R_S1DCSEL_DC1        (0x00000010)
#define ADC0_ADCSSDC2_R_S1DCSEL_DC2        (0x00000020)
#define ADC0_ADCSSDC2_R_S1DCSEL_DC3        (0x00000030)
#define ADC0_ADCSSDC2_R_S1DCSEL_DC4        (0x00000040)
#define ADC0_ADCSSDC2_R_S1DCSEL_DC5        (0x00000050)
#define ADC0_ADCSSDC2_R_S1DCSEL_DC6        (0x00000060)
#define ADC0_ADCSSDC2_R_S1DCSEL_DC7        (0x00000070)

#define ADC0_ADCSSDC2_S1DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC2_S1DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC2_S1DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC2_S1DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC2_S1DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC2_S1DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC2_S1DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC2_S1DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC2_S1DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC0_ADCSSDC2_R_S2DCSEL_MASK       (0x00000F00)
#define ADC0_ADCSSDC2_R_S2DCSEL_BIT        (8)
#define ADC0_ADCSSDC2_R_S2DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC2_R_S2DCSEL_DC1        (0x00000100)
#define ADC0_ADCSSDC2_R_S2DCSEL_DC2        (0x00000200)
#define ADC0_ADCSSDC2_R_S2DCSEL_DC3        (0x00000300)
#define ADC0_ADCSSDC2_R_S2DCSEL_DC4        (0x00000400)
#define ADC0_ADCSSDC2_R_S2DCSEL_DC5        (0x00000500)
#define ADC0_ADCSSDC2_R_S2DCSEL_DC6        (0x00000600)
#define ADC0_ADCSSDC2_R_S2DCSEL_DC7        (0x00000700)

#define ADC0_ADCSSDC2_S2DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC2_S2DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC2_S2DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC2_S2DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC2_S2DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC2_S2DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC2_S2DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC2_S2DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC2_S2DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC0_ADCSSDC2_R_S3DCSEL_MASK       (0x0000F000)
#define ADC0_ADCSSDC2_R_S3DCSEL_BIT        (12)
#define ADC0_ADCSSDC2_R_S3DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC2_R_S3DCSEL_DC1        (0x00001000)
#define ADC0_ADCSSDC2_R_S3DCSEL_DC2        (0x00002000)
#define ADC0_ADCSSDC2_R_S3DCSEL_DC3        (0x00003000)
#define ADC0_ADCSSDC2_R_S3DCSEL_DC4        (0x00004000)
#define ADC0_ADCSSDC2_R_S3DCSEL_DC5        (0x00005000)
#define ADC0_ADCSSDC2_R_S3DCSEL_DC6        (0x00006000)
#define ADC0_ADCSSDC2_R_S3DCSEL_DC7        (0x00007000)

#define ADC0_ADCSSDC2_S3DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC2_S3DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC2_S3DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC2_S3DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC2_S3DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC2_S3DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC2_S3DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC2_S3DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC2_S3DCSEL_DC7         (0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.33 ADCSSMUX3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSMUX3            (((ADCSSMUX3_TypeDef*)(ADC0_BASE + ADC_ADCSSMUX3_OFFSET )))
#define ADC0_ADCSSMUX3_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSMUX3_OFFSET)))


//--------
#define ADC0_ADCSSMUX3_R_MUX0_MASK       (0x0000000F)
#define ADC0_ADCSSMUX3_R_MUX0_BIT        (0)
#define ADC0_ADCSSMUX3_R_MUX0_AIN0       (0x00000000)
#define ADC0_ADCSSMUX3_R_MUX0_AIN1       (0x00000001)
#define ADC0_ADCSSMUX3_R_MUX0_AIN2       (0x00000002)
#define ADC0_ADCSSMUX3_R_MUX0_AIN3       (0x00000003)
#define ADC0_ADCSSMUX3_R_MUX0_AIN4       (0x00000004)
#define ADC0_ADCSSMUX3_R_MUX0_AIN5       (0x00000005)
#define ADC0_ADCSSMUX3_R_MUX0_AIN6       (0x00000006)
#define ADC0_ADCSSMUX3_R_MUX0_AIN7       (0x00000007)
#define ADC0_ADCSSMUX3_R_MUX0_AIN8       (0x00000008)
#define ADC0_ADCSSMUX3_R_MUX0_AIN9       (0x00000009)
#define ADC0_ADCSSMUX3_R_MUX0_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX3_R_MUX0_AIN11      (0x0000000B)

#define ADC0_ADCSSMUX3_MUX0_MASK       (0x0000000F)
#define ADC0_ADCSSMUX3_MUX0_AIN0       (0x00000000)
#define ADC0_ADCSSMUX3_MUX0_AIN1       (0x00000001)
#define ADC0_ADCSSMUX3_MUX0_AIN2       (0x00000002)
#define ADC0_ADCSSMUX3_MUX0_AIN3       (0x00000003)
#define ADC0_ADCSSMUX3_MUX0_AIN4       (0x00000004)
#define ADC0_ADCSSMUX3_MUX0_AIN5       (0x00000005)
#define ADC0_ADCSSMUX3_MUX0_AIN6       (0x00000006)
#define ADC0_ADCSSMUX3_MUX0_AIN7       (0x00000007)
#define ADC0_ADCSSMUX3_MUX0_AIN8       (0x00000008)
#define ADC0_ADCSSMUX3_MUX0_AIN9       (0x00000009)
#define ADC0_ADCSSMUX3_MUX0_AIN10      (0x0000000A)
#define ADC0_ADCSSMUX3_MUX0_AIN11      (0x0000000B)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.34 ADCSSCTL3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSCTL3            (((ADCSSCTL3_TypeDef*)(ADC0_BASE + ADC_ADCSSCTL3_OFFSET )))
#define ADC0_ADCSSCTL3_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSCTL3_OFFSET)))



//--------
#define ADC0_ADCSSCTL3_R_D0_MASK       (0x00000001)
#define ADC0_ADCSSCTL3_R_D0_BIT        (0)
#define ADC0_ADCSSCTL3_R_D0_SINGLE     (0x00000000)
#define ADC0_ADCSSCTL3_R_D0_DIFF       (0x00000001)

#define ADC0_ADCSSCTL3_D0_MASK        (0x00000001)
#define ADC0_ADCSSCTL3_D0_SINGLE      (0x00000000)
#define ADC0_ADCSSCTL3_D0_DIFF        (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL3_R_END0_MASK       (0x00000002)
#define ADC0_ADCSSCTL3_R_END0_BIT        (1)
#define ADC0_ADCSSCTL3_R_END0_CONTINUE   (0x00000000)
#define ADC0_ADCSSCTL3_R_END0_END        (0x00000002)

#define ADC0_ADCSSCTL3_END0_MASK        (0x00000001)
#define ADC0_ADCSSCTL3_END0_CONTINUE    (0x00000000)
#define ADC0_ADCSSCTL3_END0_END         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL3_R_IE0_MASK       (0x00000004)
#define ADC0_ADCSSCTL3_R_IE0_BIT        (2)
#define ADC0_ADCSSCTL3_R_IE0_DIS        (0x00000000)
#define ADC0_ADCSSCTL3_R_IE0_EN         (0x00000004)

#define ADC0_ADCSSCTL3_IE0_MASK       (0x00000001)
#define ADC0_ADCSSCTL3_IE0_DIS        (0x00000000)
#define ADC0_ADCSSCTL3_IE0_EN         (0x00000001)
//--------

//--------
#define ADC0_ADCSSCTL3_R_TS0_MASK         (0x00000008)
#define ADC0_ADCSSCTL3_R_TS0_BIT          (3)
#define ADC0_ADCSSCTL3_R_TS0_INPUT        (0x00000000)
#define ADC0_ADCSSCTL3_R_TS0_TEMP         (0x00000008)

#define ADC0_ADCSSCTL3_TS0_MASK         (0x00000001)
#define ADC0_ADCSSCTL3_TS0_INPUT        (0x00000000)
#define ADC0_ADCSSCTL3_TS0_TEMP         (0x00000001)
//--------

#define ADC0_ADCSSCTL3_D0_BB      (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL3_OFFSET)*32)+(0*4))))
#define ADC0_ADCSSCTL3_END0_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL3_OFFSET)*32)+(1*4))))
#define ADC0_ADCSSCTL3_IE0_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL3_OFFSET)*32)+(2*4))))
#define ADC0_ADCSSCTL3_TS0_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSCTL3_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.35 ADCSSFIFO3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSFIFO3            (((ADCSSFIFO3_TypeDef*)(ADC0_BASE + ADC_ADCSSFIFO3_OFFSET )))
#define ADC0_ADCSSFIFO3_R          (*((volatile const uint32_t *)(ADC0_BASE +ADC_ADCSSFIFO3_OFFSET)))

//--------
#define ADC0_ADCSSFIFO3_R_DATA_MASK       (0x00000FFF)
#define ADC0_ADCSSFIFO3_R_DATA_BIT        (0)

#define ADC0_ADCSSFIFO3_DATA_MASK         (0x00000FFF)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.36 ADCSSFSTAT3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSFSTAT3            (((ADCSSFSTAT3_TypeDef*)(ADC0_BASE + ADC_ADCSSFSTAT3_OFFSET )))
#define ADC0_ADCSSFSTAT3_R          (*((volatile const uint32_t *)(ADC0_BASE +ADC_ADCSSFSTAT3_OFFSET)))


//--------
#define ADC0_ADCSSFSTAT3_R_TPTR_MASK       (0x0000000F)
#define ADC0_ADCSSFSTAT3_R_TPTR_BIT        (0)
#define ADC0_ADCSSFSTAT3_R_TPTR_POS0       (0x00000000)

#define ADC0_ADCSSFSTAT3_TPTR_MASK       (0x0000000F)
#define ADC0_ADCSSFSTAT3_TPTR_POS0       (0x00000000)
//--------

//--------
#define ADC0_ADCSSFSTAT3_R_HPTR_MASK       (0x000000F0)
#define ADC0_ADCSSFSTAT3_R_HPTR_BIT        (4)
#define ADC0_ADCSSFSTAT3_R_HPTR_POS0       (0x00000000)

#define ADC0_ADCSSFSTAT3_HPTR_MASK       (0x0000000F)
#define ADC0_ADCSSFSTAT3_HPTR_POS0       (0x00000000)
//--------

//--------
#define ADC0_ADCSSFSTAT3_R_EMPTY_MASK       (0x00000100)
#define ADC0_ADCSSFSTAT3_R_EMPTY_BIT        (8)
#define ADC0_ADCSSFSTAT3_R_EMPTY_NOEMPTY    (0x00000000)
#define ADC0_ADCSSFSTAT3_R_EMPTY_EMPTY      (0x00000100)

#define ADC0_ADCSSFSTAT3_EMPTY_MASK        (0x00000001)
#define ADC0_ADCSSFSTAT3_EMPTY_NOEMPTY     (0x00000000)
#define ADC0_ADCSSFSTAT3_EMPTY_EMPTY       (0x00000001)
//--------

//--------
#define ADC0_ADCSSFSTAT3_R_FULL_MASK       (0x00000100)
#define ADC0_ADCSSFSTAT3_R_FULL_BIT        (8)
#define ADC0_ADCSSFSTAT3_R_FULL_NOFULL     (0x00000000)
#define ADC0_ADCSSFSTAT3_R_FULL_FULL       (0x00000100)

#define ADC0_ADCSSFSTAT3_FULL_MASK        (0x00000001)
#define ADC0_ADCSSFSTAT3_FULL_NOFULL      (0x00000000)
#define ADC0_ADCSSFSTAT3_FULL_FULL        (0x00000001)
//--------

#define ADC0_ADCSSFSTAT3_EMPTY_BB        (*((volatile const uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSFSTAT3_OFFSET)*32)+(8*4))))
#define ADC0_ADCSSFSTAT3_FULL_BB         (*((volatile const uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSFSTAT3_OFFSET)*32)+(12*4))))




////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.37 ADCSSOP3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSOP3            (((ADCSSOP3_TypeDef*)(ADC0_BASE + ADC_ADCSSOP3_OFFSET )))
#define ADC0_ADCSSOP3_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSOP3_OFFSET)))


//--------
#define ADC0_ADCSSOP3_R_S0DCOP_MASK       (0x00000001)
#define ADC0_ADCSSOP3_R_S0DCOP_BIT        (0)
#define ADC0_ADCSSOP3_R_S0DCOP_SS         (0x00000000)
#define ADC0_ADCSSOP3_R_S0DCOP_DC         (0x00000001)

#define ADC0_ADCSSOP3_S0DCOP_MASK        (0x00000001)
#define ADC0_ADCSSOP3_S0DCOP_SS          (0x00000000)
#define ADC0_ADCSSOP3_S0DCOP_DC          (0x00000001)
//--------

#define ADC0_ADCSSOP3_S0DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCSSOP3_OFFSET)*32)+(0*4))))



////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.38 ADCSSDC3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCSSDC3            (((ADCSSDC3_TypeDef*)(ADC0_BASE + ADC_ADCSSDC3_OFFSET )))
#define ADC0_ADCSSDC3_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCSSDC3_OFFSET)))

//--------
#define ADC0_ADCSSDC3_R_S0DCSEL_MASK       (0x0000000F)
#define ADC0_ADCSSDC3_R_S0DCSEL_BIT        (0)
#define ADC0_ADCSSDC3_R_S0DCSEL_DC0        (0x00000000)
#define ADC0_ADCSSDC3_R_S0DCSEL_DC1        (0x00000001)
#define ADC0_ADCSSDC3_R_S0DCSEL_DC2        (0x00000002)
#define ADC0_ADCSSDC3_R_S0DCSEL_DC3        (0x00000003)
#define ADC0_ADCSSDC3_R_S0DCSEL_DC4        (0x00000004)
#define ADC0_ADCSSDC3_R_S0DCSEL_DC5        (0x00000005)
#define ADC0_ADCSSDC3_R_S0DCSEL_DC6        (0x00000006)
#define ADC0_ADCSSDC3_R_S0DCSEL_DC7        (0x00000007)

#define ADC0_ADCSSDC3_S0DCSEL_MASK        (0x0000000F)
#define ADC0_ADCSSDC3_S0DCSEL_DC0         (0x00000000)
#define ADC0_ADCSSDC3_S0DCSEL_DC1         (0x00000001)
#define ADC0_ADCSSDC3_S0DCSEL_DC2         (0x00000002)
#define ADC0_ADCSSDC3_S0DCSEL_DC3         (0x00000003)
#define ADC0_ADCSSDC3_S0DCSEL_DC4         (0x00000004)
#define ADC0_ADCSSDC3_S0DCSEL_DC5         (0x00000005)
#define ADC0_ADCSSDC3_S0DCSEL_DC6         (0x00000006)
#define ADC0_ADCSSDC3_S0DCSEL_DC7         (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.39 ADCDCRIC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCRIC            (((ADCDCRIC_TypeDef*)(ADC0_BASE + ADC_ADCDCRIC_OFFSET )))
#define ADC0_ADCDCRIC_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCRIC_OFFSET)))

//--------
#define ADC0_ADCDCRIC_R_DCINT0_MASK      (0x00000001)
#define ADC0_ADCDCRIC_R_DCINT0_BIT       (0)
#define ADC0_ADCDCRIC_R_DCINT0_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCINT0_RESET     (0x00000001)

#define ADC0_ADCDCRIC_DCINT0_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCINT0_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCINT0_RESET       (0x00000001)
//--------

//--------
#define ADC0_ADCDCRIC_R_DCINT1_MASK      (0x00000002)
#define ADC0_ADCDCRIC_R_DCINT1_BIT       (1)
#define ADC0_ADCDCRIC_R_DCINT1_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCINT1_RESET     (0x00000002)

#define ADC0_ADCDCRIC_DCINT1_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCINT1_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCINT1_RESET       (0x00000001)
//--------

//--------
#define ADC0_ADCDCRIC_R_DCINT2_MASK      (0x00000004)
#define ADC0_ADCDCRIC_R_DCINT2_BIT       (2)
#define ADC0_ADCDCRIC_R_DCINT2_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCINT2_RESET     (0x00000004)

#define ADC0_ADCDCRIC_DCINT2_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCINT2_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCINT2_RESET       (0x00000001)
//--------

//--------
#define ADC0_ADCDCRIC_R_DCINT3_MASK      (0x00000008)
#define ADC0_ADCDCRIC_R_DCINT3_BIT       (3)
#define ADC0_ADCDCRIC_R_DCINT3_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCINT3_RESET     (0x00000008)

#define ADC0_ADCDCRIC_DCINT3_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCINT3_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCINT3_RESET       (0x00000001)
//--------

//--------
#define ADC0_ADCDCRIC_R_DCINT4_MASK      (0x00000010)
#define ADC0_ADCDCRIC_R_DCINT4_BIT       (4)
#define ADC0_ADCDCRIC_R_DCINT4_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCINT4_RESET     (0x00000010)

#define ADC0_ADCDCRIC_DCINT4_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCINT4_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCINT4_RESET       (0x00000001)
//--------

//--------
#define ADC0_ADCDCRIC_R_DCINT5_MASK      (0x00000020)
#define ADC0_ADCDCRIC_R_DCINT5_BIT       (5)
#define ADC0_ADCDCRIC_R_DCINT5_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCINT5_RESET     (0x00000020)

#define ADC0_ADCDCRIC_DCINT5_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCINT5_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCINT5_RESET       (0x00000001)
//--------

//--------
#define ADC0_ADCDCRIC_R_DCINT6_MASK      (0x00000040)
#define ADC0_ADCDCRIC_R_DCINT6_BIT       (6)
#define ADC0_ADCDCRIC_R_DCINT6_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCINT6_RESET     (0x00000040)

#define ADC0_ADCDCRIC_DCINT6_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCINT6_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCINT6_RESET       (0x00000001)
//--------

//--------
#define ADC0_ADCDCRIC_R_DCINT7_MASK      (0x00000080)
#define ADC0_ADCDCRIC_R_DCINT7_BIT       (7)
#define ADC0_ADCDCRIC_R_DCINT7_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCINT7_RESET     (0x00000080)

#define ADC0_ADCDCRIC_DCINT7_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCINT7_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCINT7_RESET       (0x00000001)
//--------


//--------
#define ADC0_ADCDCRIC_R_DCTRIG0_MASK      (0x00010000)
#define ADC0_ADCDCRIC_R_DCTRIG0_BIT       (16)
#define ADC0_ADCDCRIC_R_DCTRIG0_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCTRIG0_RESET     (0x00010000)

#define ADC0_ADCDCRIC_DCTRIG0_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCTRIG0_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCTRIG0_RESET       (0x00000001)
//--------

//--------
#define ADC0_ADCDCRIC_R_DCTRIG1_MASK      (0x00020000)
#define ADC0_ADCDCRIC_R_DCTRIG1_BIT       (17)
#define ADC0_ADCDCRIC_R_DCTRIG1_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCTRIG1_RESET     (0x00020000)

#define ADC0_ADCDCRIC_DCTRIG1_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCTRIG1_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCTRIG1_RESET       (0x00000001)
//--------

//--------
#define ADC0_ADCDCRIC_R_DCTRIG2_MASK      (0x00040000)
#define ADC0_ADCDCRIC_R_DCTRIG2_BIT       (18)
#define ADC0_ADCDCRIC_R_DCTRIG2_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCTRIG2_RESET     (0x00040000)

#define ADC0_ADCDCRIC_DCTRIG2_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCTRIG2_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCTRIG2_RESET       (0x00000001)
//--------

//--------
#define ADC0_ADCDCRIC_R_DCTRIG3_MASK      (0x00080000)
#define ADC0_ADCDCRIC_R_DCTRIG3_BIT       (19)
#define ADC0_ADCDCRIC_R_DCTRIG3_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCTRIG3_RESET     (0x00080000)

#define ADC0_ADCDCRIC_DCTRIG3_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCTRIG3_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCTRIG3_RESET       (0x00000001)
//--------

//--------
#define ADC0_ADCDCRIC_R_DCTRIG4_MASK      (0x00100000)
#define ADC0_ADCDCRIC_R_DCTRIG4_BIT       (20)
#define ADC0_ADCDCRIC_R_DCTRIG4_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCTRIG4_RESET     (0x00100000)

#define ADC0_ADCDCRIC_DCTRIG4_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCTRIG4_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCTRIG4_RESET       (0x00000001)
//--------

//--------
#define ADC0_ADCDCRIC_R_DCTRIG5_MASK      (0x00200000)
#define ADC0_ADCDCRIC_R_DCTRIG5_BIT       (21)
#define ADC0_ADCDCRIC_R_DCTRIG5_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCTRIG5_RESET     (0x00200000)

#define ADC0_ADCDCRIC_DCTRIG5_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCTRIG5_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCTRIG5_RESET       (0x00000001)
//--------

//--------
#define ADC0_ADCDCRIC_R_DCTRIG6_MASK      (0x00400000)
#define ADC0_ADCDCRIC_R_DCTRIG6_BIT       (22)
#define ADC0_ADCDCRIC_R_DCTRIG6_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCTRIG6_RESET     (0x00400000)

#define ADC0_ADCDCRIC_DCTRIG6_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCTRIG6_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCTRIG6_RESET       (0x00000001)
//--------

//--------
#define ADC0_ADCDCRIC_R_DCTRIG7_MASK      (0x00800000)
#define ADC0_ADCDCRIC_R_DCTRIG7_BIT       (23)
#define ADC0_ADCDCRIC_R_DCTRIG7_NA        (0x00000000)
#define ADC0_ADCDCRIC_R_DCTRIG7_RESET     (0x00800000)

#define ADC0_ADCDCRIC_DCTRIG7_MASK        (0x00000001)
#define ADC0_ADCDCRIC_DCTRIG7_NA          (0x00000000)
#define ADC0_ADCDCRIC_DCTRIG7_RESET       (0x00000001)
//--------

#define ADC0_ADCDCRIC_DCINT0_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(0*4))))
#define ADC0_ADCDCRIC_DCINT1_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(1*4))))
#define ADC0_ADCDCRIC_DCINT2_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(2*4))))
#define ADC0_ADCDCRIC_DCINT3_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(3*4))))
#define ADC0_ADCDCRIC_DCINT4_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(4*4))))
#define ADC0_ADCDCRIC_DCINT5_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(5*4))))
#define ADC0_ADCDCRIC_DCINT6_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(6*4))))
#define ADC0_ADCDCRIC_DCINT7_BB     (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(7*4))))
#define ADC0_ADCDCRIC_DCTRIG0_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(16*4))))
#define ADC0_ADCDCRIC_DCTRIG1_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(17*4))))
#define ADC0_ADCDCRIC_DCTRIG2_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(18*4))))
#define ADC0_ADCDCRIC_DCTRIG3_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(19*4))))
#define ADC0_ADCDCRIC_DCTRIG4_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(20*4))))
#define ADC0_ADCDCRIC_DCTRIG5_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(21*4))))
#define ADC0_ADCDCRIC_DCTRIG6_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(22*4))))
#define ADC0_ADCDCRIC_DCTRIG7_BB    (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(23*4))))






////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.40 ADCDCCTL0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCTL0            (((ADCDCCTL0_TypeDef*)(ADC0_BASE + ADC_ADCDCCTL0_OFFSET )))
#define ADC0_ADCDCCTL0_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCTL0_OFFSET)))

//--------
#define ADC0_ADCDCCTL0_R_CIM_MASK      (0x00000003)
#define ADC0_ADCDCCTL0_R_CIM_BIT       (0)
#define ADC0_ADCDCCTL0_R_CIM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL0_R_CIM_ONCE      (0x00000001)
#define ADC0_ADCDCCTL0_R_CIM_HYSALWAYS (0x00000002)
#define ADC0_ADCDCCTL0_R_CIM_HYSONCE   (0x00000003)

#define ADC0_ADCDCCTL0_CIM_MASK        (0x00000003)
#define ADC0_ADCDCCTL0_CIM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL0_CIM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL0_CIM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL0_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL0_R_CIC_MASK      (0x0000000C)
#define ADC0_ADCDCCTL0_R_CIC_BIT       (2)
#define ADC0_ADCDCCTL0_R_CIC_LOW       (0x00000000)
#define ADC0_ADCDCCTL0_R_CIC_MID       (0x00000004)
#define ADC0_ADCDCCTL0_R_CIC_HIGH      (0x0000000C)

#define ADC0_ADCDCCTL0_CIC_MASK        (0x00000003)
#define ADC0_ADCDCCTL0_CIC_LOW         (0x00000000)
#define ADC0_ADCDCCTL0_CIC_MID         (0x00000001)
#define ADC0_ADCDCCTL0_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL0_R_CIE_MASK      (0x00000010)
#define ADC0_ADCDCCTL0_R_CIE_BIT       (4)
#define ADC0_ADCDCCTL0_R_CIE_DIS       (0x00000000)
#define ADC0_ADCDCCTL0_R_CIE_EN        (0x00000010)

#define ADC0_ADCDCCTL0_CIE_MASK        (0x00000001)
#define ADC0_ADCDCCTL0_CIE_DIS         (0x00000000)
#define ADC0_ADCDCCTL0_CIE_EN          (0x00000001)
//--------


//--------
#define ADC0_ADCDCCTL0_R_CTM_MASK      (0x00000300)
#define ADC0_ADCDCCTL0_R_CTM_BIT       (8)
#define ADC0_ADCDCCTL0_R_CTM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL0_R_CTM_ONCE      (0x00000100)
#define ADC0_ADCDCCTL0_R_CTM_HYSALWAYS (0x00000200)
#define ADC0_ADCDCCTL0_R_CTM_HYSONCE   (0x00000300)

#define ADC0_ADCDCCTL0_CTM_MASK        (0x00000003)
#define ADC0_ADCDCCTL0_CTM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL0_CTM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL0_CTM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL0_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL0_R_CTC_MASK      (0x00000C00)
#define ADC0_ADCDCCTL0_R_CTC_BIT       (10)
#define ADC0_ADCDCCTL0_R_CTC_LOW       (0x00000000)
#define ADC0_ADCDCCTL0_R_CTC_MID       (0x00000400)
#define ADC0_ADCDCCTL0_R_CTC_HIGH      (0x00000C00)

#define ADC0_ADCDCCTL0_CTC_MASK        (0x00000003)
#define ADC0_ADCDCCTL0_CTC_LOW         (0x00000000)
#define ADC0_ADCDCCTL0_CTC_MID         (0x00000001)
#define ADC0_ADCDCCTL0_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL0_R_CTE_MASK      (0x00001000)
#define ADC0_ADCDCCTL0_R_CTE_BIT       (12)
#define ADC0_ADCDCCTL0_R_CTE_DIS       (0x00000000)
#define ADC0_ADCDCCTL0_R_CTE_EN        (0x00001000)

#define ADC0_ADCDCCTL0_CTE_MASK        (0x00000001)
#define ADC0_ADCDCCTL0_CTE_DIS         (0x00000000)
#define ADC0_ADCDCCTL0_CTE_EN          (0x00000001)
//--------

#define ADC0_ADCDCCTL0_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL0_OFFSET)*32)+(4*4))))
#define ADC0_ADCDCCTL0_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL0_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.41 ADCDCCTL1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCTL1            (((ADCDCCTL1_TypeDef*)(ADC0_BASE + ADC_ADCDCCTL1_OFFSET )))
#define ADC0_ADCDCCTL1_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCTL1_OFFSET)))

//--------
#define ADC0_ADCDCCTL1_R_CIM_MASK      (0x00000003)
#define ADC0_ADCDCCTL1_R_CIM_BIT       (0)
#define ADC0_ADCDCCTL1_R_CIM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL1_R_CIM_ONCE      (0x00000001)
#define ADC0_ADCDCCTL1_R_CIM_HYSALWAYS (0x00000002)
#define ADC0_ADCDCCTL1_R_CIM_HYSONCE   (0x00000003)

#define ADC0_ADCDCCTL1_CIM_MASK        (0x00000003)
#define ADC0_ADCDCCTL1_CIM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL1_CIM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL1_CIM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL1_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL1_R_CIC_MASK      (0x0000000C)
#define ADC0_ADCDCCTL1_R_CIC_BIT       (2)
#define ADC0_ADCDCCTL1_R_CIC_LOW       (0x00000000)
#define ADC0_ADCDCCTL1_R_CIC_MID       (0x00000004)
#define ADC0_ADCDCCTL1_R_CIC_HIGH      (0x0000000C)

#define ADC0_ADCDCCTL1_CIC_MASK        (0x00000003)
#define ADC0_ADCDCCTL1_CIC_LOW         (0x00000000)
#define ADC0_ADCDCCTL1_CIC_MID         (0x00000001)
#define ADC0_ADCDCCTL1_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL1_R_CIE_MASK      (0x00000010)
#define ADC0_ADCDCCTL1_R_CIE_BIT       (4)
#define ADC0_ADCDCCTL1_R_CIE_DIS       (0x00000000)
#define ADC0_ADCDCCTL1_R_CIE_EN        (0x00000010)

#define ADC0_ADCDCCTL1_CIE_MASK        (0x00000001)
#define ADC0_ADCDCCTL1_CIE_DIS         (0x00000000)
#define ADC0_ADCDCCTL1_CIE_EN          (0x00000001)
//--------


//--------
#define ADC0_ADCDCCTL1_R_CTM_MASK      (0x00000300)
#define ADC0_ADCDCCTL1_R_CTM_BIT       (8)
#define ADC0_ADCDCCTL1_R_CTM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL1_R_CTM_ONCE      (0x00000100)
#define ADC0_ADCDCCTL1_R_CTM_HYSALWAYS (0x00000200)
#define ADC0_ADCDCCTL1_R_CTM_HYSONCE   (0x00000300)

#define ADC0_ADCDCCTL1_CTM_MASK        (0x00000003)
#define ADC0_ADCDCCTL1_CTM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL1_CTM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL1_CTM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL1_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL1_R_CTC_MASK      (0x00000C00)
#define ADC0_ADCDCCTL1_R_CTC_BIT       (10)
#define ADC0_ADCDCCTL1_R_CTC_LOW       (0x00000000)
#define ADC0_ADCDCCTL1_R_CTC_MID       (0x00000400)
#define ADC0_ADCDCCTL1_R_CTC_HIGH      (0x00000C00)

#define ADC0_ADCDCCTL1_CTC_MASK        (0x00000003)
#define ADC0_ADCDCCTL1_CTC_LOW         (0x00000000)
#define ADC0_ADCDCCTL1_CTC_MID         (0x00000001)
#define ADC0_ADCDCCTL1_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL1_R_CTE_MASK      (0x00001000)
#define ADC0_ADCDCCTL1_R_CTE_BIT       (12)
#define ADC0_ADCDCCTL1_R_CTE_DIS       (0x00000000)
#define ADC0_ADCDCCTL1_R_CTE_EN        (0x00001000)

#define ADC0_ADCDCCTL1_CTE_MASK        (0x00000001)
#define ADC0_ADCDCCTL1_CTE_DIS         (0x00000000)
#define ADC0_ADCDCCTL1_CTE_EN          (0x00000001)
//--------

#define ADC0_ADCDCCTL1_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL1_OFFSET)*32)+(4*4))))
#define ADC0_ADCDCCTL1_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL1_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.42 ADCDCCTL2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCTL2            (((ADCDCCTL2_TypeDef*)(ADC0_BASE + ADC_ADCDCCTL2_OFFSET )))
#define ADC0_ADCDCCTL2_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCTL2_OFFSET)))

//--------
#define ADC0_ADCDCCTL2_R_CIM_MASK      (0x00000003)
#define ADC0_ADCDCCTL2_R_CIM_BIT       (0)
#define ADC0_ADCDCCTL2_R_CIM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL2_R_CIM_ONCE      (0x00000001)
#define ADC0_ADCDCCTL2_R_CIM_HYSALWAYS (0x00000002)
#define ADC0_ADCDCCTL2_R_CIM_HYSONCE   (0x00000003)

#define ADC0_ADCDCCTL2_CIM_MASK        (0x00000003)
#define ADC0_ADCDCCTL2_CIM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL2_CIM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL2_CIM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL2_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL2_R_CIC_MASK      (0x0000000C)
#define ADC0_ADCDCCTL2_R_CIC_BIT       (2)
#define ADC0_ADCDCCTL2_R_CIC_LOW       (0x00000000)
#define ADC0_ADCDCCTL2_R_CIC_MID       (0x00000004)
#define ADC0_ADCDCCTL2_R_CIC_HIGH      (0x0000000C)

#define ADC0_ADCDCCTL2_CIC_MASK        (0x00000003)
#define ADC0_ADCDCCTL2_CIC_LOW         (0x00000000)
#define ADC0_ADCDCCTL2_CIC_MID         (0x00000001)
#define ADC0_ADCDCCTL2_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL2_R_CIE_MASK      (0x00000010)
#define ADC0_ADCDCCTL2_R_CIE_BIT       (4)
#define ADC0_ADCDCCTL2_R_CIE_DIS       (0x00000000)
#define ADC0_ADCDCCTL2_R_CIE_EN        (0x00000010)

#define ADC0_ADCDCCTL2_CIE_MASK        (0x00000001)
#define ADC0_ADCDCCTL2_CIE_DIS         (0x00000000)
#define ADC0_ADCDCCTL2_CIE_EN          (0x00000001)
//--------


//--------
#define ADC0_ADCDCCTL2_R_CTM_MASK      (0x00000300)
#define ADC0_ADCDCCTL2_R_CTM_BIT       (8)
#define ADC0_ADCDCCTL2_R_CTM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL2_R_CTM_ONCE      (0x00000100)
#define ADC0_ADCDCCTL2_R_CTM_HYSALWAYS (0x00000200)
#define ADC0_ADCDCCTL2_R_CTM_HYSONCE   (0x00000300)

#define ADC0_ADCDCCTL2_CTM_MASK        (0x00000003)
#define ADC0_ADCDCCTL2_CTM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL2_CTM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL2_CTM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL2_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL2_R_CTC_MASK      (0x00000C00)
#define ADC0_ADCDCCTL2_R_CTC_BIT       (10)
#define ADC0_ADCDCCTL2_R_CTC_LOW       (0x00000000)
#define ADC0_ADCDCCTL2_R_CTC_MID       (0x00000400)
#define ADC0_ADCDCCTL2_R_CTC_HIGH      (0x00000C00)

#define ADC0_ADCDCCTL2_CTC_MASK        (0x00000003)
#define ADC0_ADCDCCTL2_CTC_LOW         (0x00000000)
#define ADC0_ADCDCCTL2_CTC_MID         (0x00000001)
#define ADC0_ADCDCCTL2_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL2_R_CTE_MASK      (0x00001000)
#define ADC0_ADCDCCTL2_R_CTE_BIT       (12)
#define ADC0_ADCDCCTL2_R_CTE_DIS       (0x00000000)
#define ADC0_ADCDCCTL2_R_CTE_EN        (0x00001000)

#define ADC0_ADCDCCTL2_CTE_MASK        (0x00000001)
#define ADC0_ADCDCCTL2_CTE_DIS         (0x00000000)
#define ADC0_ADCDCCTL2_CTE_EN          (0x00000001)
//--------

#define ADC0_ADCDCCTL2_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL2_OFFSET)*32)+(4*4))))
#define ADC0_ADCDCCTL2_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL2_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.43 ADCDCCTL3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCTL3            (((ADCDCCTL3_TypeDef*)(ADC0_BASE + ADC_ADCDCCTL3_OFFSET )))
#define ADC0_ADCDCCTL3_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCTL3_OFFSET)))

//--------
#define ADC0_ADCDCCTL3_R_CIM_MASK      (0x00000003)
#define ADC0_ADCDCCTL3_R_CIM_BIT       (0)
#define ADC0_ADCDCCTL3_R_CIM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL3_R_CIM_ONCE      (0x00000001)
#define ADC0_ADCDCCTL3_R_CIM_HYSALWAYS (0x00000002)
#define ADC0_ADCDCCTL3_R_CIM_HYSONCE   (0x00000003)

#define ADC0_ADCDCCTL3_CIM_MASK        (0x00000003)
#define ADC0_ADCDCCTL3_CIM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL3_CIM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL3_CIM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL3_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL3_R_CIC_MASK      (0x0000000C)
#define ADC0_ADCDCCTL3_R_CIC_BIT       (2)
#define ADC0_ADCDCCTL3_R_CIC_LOW       (0x00000000)
#define ADC0_ADCDCCTL3_R_CIC_MID       (0x00000004)
#define ADC0_ADCDCCTL3_R_CIC_HIGH      (0x0000000C)

#define ADC0_ADCDCCTL3_CIC_MASK        (0x00000003)
#define ADC0_ADCDCCTL3_CIC_LOW         (0x00000000)
#define ADC0_ADCDCCTL3_CIC_MID         (0x00000001)
#define ADC0_ADCDCCTL3_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL3_R_CIE_MASK      (0x00000010)
#define ADC0_ADCDCCTL3_R_CIE_BIT       (4)
#define ADC0_ADCDCCTL3_R_CIE_DIS       (0x00000000)
#define ADC0_ADCDCCTL3_R_CIE_EN        (0x00000010)

#define ADC0_ADCDCCTL3_CIE_MASK        (0x00000001)
#define ADC0_ADCDCCTL3_CIE_DIS         (0x00000000)
#define ADC0_ADCDCCTL3_CIE_EN          (0x00000001)
//--------


//--------
#define ADC0_ADCDCCTL3_R_CTM_MASK      (0x00000300)
#define ADC0_ADCDCCTL3_R_CTM_BIT       (8)
#define ADC0_ADCDCCTL3_R_CTM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL3_R_CTM_ONCE      (0x00000100)
#define ADC0_ADCDCCTL3_R_CTM_HYSALWAYS (0x00000200)
#define ADC0_ADCDCCTL3_R_CTM_HYSONCE   (0x00000300)

#define ADC0_ADCDCCTL3_CTM_MASK        (0x00000003)
#define ADC0_ADCDCCTL3_CTM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL3_CTM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL3_CTM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL3_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL3_R_CTC_MASK      (0x00000C00)
#define ADC0_ADCDCCTL3_R_CTC_BIT       (10)
#define ADC0_ADCDCCTL3_R_CTC_LOW       (0x00000000)
#define ADC0_ADCDCCTL3_R_CTC_MID       (0x00000400)
#define ADC0_ADCDCCTL3_R_CTC_HIGH      (0x00000C00)

#define ADC0_ADCDCCTL3_CTC_MASK        (0x00000003)
#define ADC0_ADCDCCTL3_CTC_LOW         (0x00000000)
#define ADC0_ADCDCCTL3_CTC_MID         (0x00000001)
#define ADC0_ADCDCCTL3_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL3_R_CTE_MASK      (0x00001000)
#define ADC0_ADCDCCTL3_R_CTE_BIT       (12)
#define ADC0_ADCDCCTL3_R_CTE_DIS       (0x00000000)
#define ADC0_ADCDCCTL3_R_CTE_EN        (0x00001000)

#define ADC0_ADCDCCTL3_CTE_MASK        (0x00000001)
#define ADC0_ADCDCCTL3_CTE_DIS         (0x00000000)
#define ADC0_ADCDCCTL3_CTE_EN          (0x00000001)
//--------

#define ADC0_ADCDCCTL3_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL3_OFFSET)*32)+(4*4))))
#define ADC0_ADCDCCTL3_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL3_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.44 ADCDCCTL4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCTL4            (((ADCDCCTL4_TypeDef*)(ADC0_BASE + ADC_ADCDCCTL4_OFFSET )))
#define ADC0_ADCDCCTL4_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCTL4_OFFSET)))

//--------
#define ADC0_ADCDCCTL4_R_CIM_MASK      (0x00000003)
#define ADC0_ADCDCCTL4_R_CIM_BIT       (0)
#define ADC0_ADCDCCTL4_R_CIM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL4_R_CIM_ONCE      (0x00000001)
#define ADC0_ADCDCCTL4_R_CIM_HYSALWAYS (0x00000002)
#define ADC0_ADCDCCTL4_R_CIM_HYSONCE   (0x00000003)

#define ADC0_ADCDCCTL4_CIM_MASK        (0x00000003)
#define ADC0_ADCDCCTL4_CIM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL4_CIM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL4_CIM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL4_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL4_R_CIC_MASK      (0x0000000C)
#define ADC0_ADCDCCTL4_R_CIC_BIT       (2)
#define ADC0_ADCDCCTL4_R_CIC_LOW       (0x00000000)
#define ADC0_ADCDCCTL4_R_CIC_MID       (0x00000004)
#define ADC0_ADCDCCTL4_R_CIC_HIGH      (0x0000000C)

#define ADC0_ADCDCCTL4_CIC_MASK        (0x00000003)
#define ADC0_ADCDCCTL4_CIC_LOW         (0x00000000)
#define ADC0_ADCDCCTL4_CIC_MID         (0x00000001)
#define ADC0_ADCDCCTL4_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL4_R_CIE_MASK      (0x00000010)
#define ADC0_ADCDCCTL4_R_CIE_BIT       (4)
#define ADC0_ADCDCCTL4_R_CIE_DIS       (0x00000000)
#define ADC0_ADCDCCTL4_R_CIE_EN        (0x00000010)

#define ADC0_ADCDCCTL4_CIE_MASK        (0x00000001)
#define ADC0_ADCDCCTL4_CIE_DIS         (0x00000000)
#define ADC0_ADCDCCTL4_CIE_EN          (0x00000001)
//--------


//--------
#define ADC0_ADCDCCTL4_R_CTM_MASK      (0x00000300)
#define ADC0_ADCDCCTL4_R_CTM_BIT       (8)
#define ADC0_ADCDCCTL4_R_CTM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL4_R_CTM_ONCE      (0x00000100)
#define ADC0_ADCDCCTL4_R_CTM_HYSALWAYS (0x00000200)
#define ADC0_ADCDCCTL4_R_CTM_HYSONCE   (0x00000300)

#define ADC0_ADCDCCTL4_CTM_MASK        (0x00000003)
#define ADC0_ADCDCCTL4_CTM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL4_CTM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL4_CTM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL4_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL4_R_CTC_MASK      (0x00000C00)
#define ADC0_ADCDCCTL4_R_CTC_BIT       (10)
#define ADC0_ADCDCCTL4_R_CTC_LOW       (0x00000000)
#define ADC0_ADCDCCTL4_R_CTC_MID       (0x00000400)
#define ADC0_ADCDCCTL4_R_CTC_HIGH      (0x00000C00)

#define ADC0_ADCDCCTL4_CTC_MASK        (0x00000003)
#define ADC0_ADCDCCTL4_CTC_LOW         (0x00000000)
#define ADC0_ADCDCCTL4_CTC_MID         (0x00000001)
#define ADC0_ADCDCCTL4_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL4_R_CTE_MASK      (0x00001000)
#define ADC0_ADCDCCTL4_R_CTE_BIT       (12)
#define ADC0_ADCDCCTL4_R_CTE_DIS       (0x00000000)
#define ADC0_ADCDCCTL4_R_CTE_EN        (0x00001000)

#define ADC0_ADCDCCTL4_CTE_MASK        (0x00000001)
#define ADC0_ADCDCCTL4_CTE_DIS         (0x00000000)
#define ADC0_ADCDCCTL4_CTE_EN          (0x00000001)
//--------

#define ADC0_ADCDCCTL4_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL4_OFFSET)*32)+(4*4))))
#define ADC0_ADCDCCTL4_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL4_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.45 ADCDCCTL5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCTL5            (((ADCDCCTL5_TypeDef*)(ADC0_BASE + ADC_ADCDCCTL5_OFFSET )))
#define ADC0_ADCDCCTL5_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCTL5_OFFSET)))


//--------
#define ADC0_ADCDCCTL5_R_CIM_MASK      (0x00000003)
#define ADC0_ADCDCCTL5_R_CIM_BIT       (0)
#define ADC0_ADCDCCTL5_R_CIM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL5_R_CIM_ONCE      (0x00000001)
#define ADC0_ADCDCCTL5_R_CIM_HYSALWAYS (0x00000002)
#define ADC0_ADCDCCTL5_R_CIM_HYSONCE   (0x00000003)

#define ADC0_ADCDCCTL5_CIM_MASK        (0x00000003)
#define ADC0_ADCDCCTL5_CIM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL5_CIM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL5_CIM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL5_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL5_R_CIC_MASK      (0x0000000C)
#define ADC0_ADCDCCTL5_R_CIC_BIT       (2)
#define ADC0_ADCDCCTL5_R_CIC_LOW       (0x00000000)
#define ADC0_ADCDCCTL5_R_CIC_MID       (0x00000004)
#define ADC0_ADCDCCTL5_R_CIC_HIGH      (0x0000000C)

#define ADC0_ADCDCCTL5_CIC_MASK        (0x00000003)
#define ADC0_ADCDCCTL5_CIC_LOW         (0x00000000)
#define ADC0_ADCDCCTL5_CIC_MID         (0x00000001)
#define ADC0_ADCDCCTL5_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL5_R_CIE_MASK      (0x00000010)
#define ADC0_ADCDCCTL5_R_CIE_BIT       (4)
#define ADC0_ADCDCCTL5_R_CIE_DIS       (0x00000000)
#define ADC0_ADCDCCTL5_R_CIE_EN        (0x00000010)

#define ADC0_ADCDCCTL5_CIE_MASK        (0x00000001)
#define ADC0_ADCDCCTL5_CIE_DIS         (0x00000000)
#define ADC0_ADCDCCTL5_CIE_EN          (0x00000001)
//--------


//--------
#define ADC0_ADCDCCTL5_R_CTM_MASK      (0x00000300)
#define ADC0_ADCDCCTL5_R_CTM_BIT       (8)
#define ADC0_ADCDCCTL5_R_CTM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL5_R_CTM_ONCE      (0x00000100)
#define ADC0_ADCDCCTL5_R_CTM_HYSALWAYS (0x00000200)
#define ADC0_ADCDCCTL5_R_CTM_HYSONCE   (0x00000300)

#define ADC0_ADCDCCTL5_CTM_MASK        (0x00000003)
#define ADC0_ADCDCCTL5_CTM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL5_CTM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL5_CTM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL5_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL5_R_CTC_MASK      (0x00000C00)
#define ADC0_ADCDCCTL5_R_CTC_BIT       (10)
#define ADC0_ADCDCCTL5_R_CTC_LOW       (0x00000000)
#define ADC0_ADCDCCTL5_R_CTC_MID       (0x00000400)
#define ADC0_ADCDCCTL5_R_CTC_HIGH      (0x00000C00)

#define ADC0_ADCDCCTL5_CTC_MASK        (0x00000003)
#define ADC0_ADCDCCTL5_CTC_LOW         (0x00000000)
#define ADC0_ADCDCCTL5_CTC_MID         (0x00000001)
#define ADC0_ADCDCCTL5_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL5_R_CTE_MASK      (0x00001000)
#define ADC0_ADCDCCTL5_R_CTE_BIT       (12)
#define ADC0_ADCDCCTL5_R_CTE_DIS       (0x00000000)
#define ADC0_ADCDCCTL5_R_CTE_EN        (0x00001000)

#define ADC0_ADCDCCTL5_CTE_MASK        (0x00000001)
#define ADC0_ADCDCCTL5_CTE_DIS         (0x00000000)
#define ADC0_ADCDCCTL5_CTE_EN          (0x00000001)
//--------

#define ADC0_ADCDCCTL5_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL5_OFFSET)*32)+(4*4))))
#define ADC0_ADCDCCTL5_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL5_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.46 ADCDCCTL6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCTL6            (((ADCDCCTL6_TypeDef*)(ADC0_BASE + ADC_ADCDCCTL6_OFFSET )))
#define ADC0_ADCDCCTL6_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCTL6_OFFSET)))


//--------
#define ADC0_ADCDCCTL6_R_CIM_MASK      (0x00000003)
#define ADC0_ADCDCCTL6_R_CIM_BIT       (0)
#define ADC0_ADCDCCTL6_R_CIM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL6_R_CIM_ONCE      (0x00000001)
#define ADC0_ADCDCCTL6_R_CIM_HYSALWAYS (0x00000002)
#define ADC0_ADCDCCTL6_R_CIM_HYSONCE   (0x00000003)

#define ADC0_ADCDCCTL6_CIM_MASK        (0x00000003)
#define ADC0_ADCDCCTL6_CIM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL6_CIM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL6_CIM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL6_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL6_R_CIC_MASK      (0x0000000C)
#define ADC0_ADCDCCTL6_R_CIC_BIT       (2)
#define ADC0_ADCDCCTL6_R_CIC_LOW       (0x00000000)
#define ADC0_ADCDCCTL6_R_CIC_MID       (0x00000004)
#define ADC0_ADCDCCTL6_R_CIC_HIGH      (0x0000000C)

#define ADC0_ADCDCCTL6_CIC_MASK        (0x00000003)
#define ADC0_ADCDCCTL6_CIC_LOW         (0x00000000)
#define ADC0_ADCDCCTL6_CIC_MID         (0x00000001)
#define ADC0_ADCDCCTL6_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL6_R_CIE_MASK      (0x00000010)
#define ADC0_ADCDCCTL6_R_CIE_BIT       (4)
#define ADC0_ADCDCCTL6_R_CIE_DIS       (0x00000000)
#define ADC0_ADCDCCTL6_R_CIE_EN        (0x00000010)

#define ADC0_ADCDCCTL6_CIE_MASK        (0x00000001)
#define ADC0_ADCDCCTL6_CIE_DIS         (0x00000000)
#define ADC0_ADCDCCTL6_CIE_EN          (0x00000001)
//--------


//--------
#define ADC0_ADCDCCTL6_R_CTM_MASK      (0x00000300)
#define ADC0_ADCDCCTL6_R_CTM_BIT       (8)
#define ADC0_ADCDCCTL6_R_CTM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL6_R_CTM_ONCE      (0x00000100)
#define ADC0_ADCDCCTL6_R_CTM_HYSALWAYS (0x00000200)
#define ADC0_ADCDCCTL6_R_CTM_HYSONCE   (0x00000300)

#define ADC0_ADCDCCTL6_CTM_MASK        (0x00000003)
#define ADC0_ADCDCCTL6_CTM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL6_CTM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL6_CTM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL6_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL6_R_CTC_MASK      (0x00000C00)
#define ADC0_ADCDCCTL6_R_CTC_BIT       (10)
#define ADC0_ADCDCCTL6_R_CTC_LOW       (0x00000000)
#define ADC0_ADCDCCTL6_R_CTC_MID       (0x00000400)
#define ADC0_ADCDCCTL6_R_CTC_HIGH      (0x00000C00)

#define ADC0_ADCDCCTL6_CTC_MASK        (0x00000003)
#define ADC0_ADCDCCTL6_CTC_LOW         (0x00000000)
#define ADC0_ADCDCCTL6_CTC_MID         (0x00000001)
#define ADC0_ADCDCCTL6_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL6_R_CTE_MASK      (0x00001000)
#define ADC0_ADCDCCTL6_R_CTE_BIT       (12)
#define ADC0_ADCDCCTL6_R_CTE_DIS       (0x00000000)
#define ADC0_ADCDCCTL6_R_CTE_EN        (0x00001000)

#define ADC0_ADCDCCTL6_CTE_MASK        (0x00000001)
#define ADC0_ADCDCCTL6_CTE_DIS         (0x00000000)
#define ADC0_ADCDCCTL6_CTE_EN          (0x00000001)
//--------

#define ADC0_ADCDCCTL6_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL6_OFFSET)*32)+(4*4))))
#define ADC0_ADCDCCTL6_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL6_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.47 ADCDCCTL7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCTL7            (((ADCDCCTL7_TypeDef*)(ADC0_BASE + ADC_ADCDCCTL7_OFFSET )))
#define ADC0_ADCDCCTL7_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCTL7_OFFSET)))


//--------
#define ADC0_ADCDCCTL7_R_CIM_MASK      (0x00000003)
#define ADC0_ADCDCCTL7_R_CIM_BIT       (0)
#define ADC0_ADCDCCTL7_R_CIM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL7_R_CIM_ONCE      (0x00000001)
#define ADC0_ADCDCCTL7_R_CIM_HYSALWAYS (0x00000002)
#define ADC0_ADCDCCTL7_R_CIM_HYSONCE   (0x00000003)

#define ADC0_ADCDCCTL7_CIM_MASK        (0x00000003)
#define ADC0_ADCDCCTL7_CIM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL7_CIM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL7_CIM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL7_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL7_R_CIC_MASK      (0x0000000C)
#define ADC0_ADCDCCTL7_R_CIC_BIT       (2)
#define ADC0_ADCDCCTL7_R_CIC_LOW       (0x00000000)
#define ADC0_ADCDCCTL7_R_CIC_MID       (0x00000004)
#define ADC0_ADCDCCTL7_R_CIC_HIGH      (0x0000000C)

#define ADC0_ADCDCCTL7_CIC_MASK        (0x00000003)
#define ADC0_ADCDCCTL7_CIC_LOW         (0x00000000)
#define ADC0_ADCDCCTL7_CIC_MID         (0x00000001)
#define ADC0_ADCDCCTL7_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL7_R_CIE_MASK      (0x00000010)
#define ADC0_ADCDCCTL7_R_CIE_BIT       (4)
#define ADC0_ADCDCCTL7_R_CIE_DIS       (0x00000000)
#define ADC0_ADCDCCTL7_R_CIE_EN        (0x00000010)

#define ADC0_ADCDCCTL7_CIE_MASK        (0x00000001)
#define ADC0_ADCDCCTL7_CIE_DIS         (0x00000000)
#define ADC0_ADCDCCTL7_CIE_EN          (0x00000001)
//--------


//--------
#define ADC0_ADCDCCTL7_R_CTM_MASK      (0x00000300)
#define ADC0_ADCDCCTL7_R_CTM_BIT       (8)
#define ADC0_ADCDCCTL7_R_CTM_ALWAYS    (0x00000000)
#define ADC0_ADCDCCTL7_R_CTM_ONCE      (0x00000100)
#define ADC0_ADCDCCTL7_R_CTM_HYSALWAYS (0x00000200)
#define ADC0_ADCDCCTL7_R_CTM_HYSONCE   (0x00000300)

#define ADC0_ADCDCCTL7_CTM_MASK        (0x00000003)
#define ADC0_ADCDCCTL7_CTM_ALWAYS      (0x00000000)
#define ADC0_ADCDCCTL7_CTM_ONCE        (0x00000001)
#define ADC0_ADCDCCTL7_CTM_HYSALWAYS   (0x00000002)
#define ADC0_ADCDCCTL7_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL7_R_CTC_MASK      (0x00000C00)
#define ADC0_ADCDCCTL7_R_CTC_BIT       (10)
#define ADC0_ADCDCCTL7_R_CTC_LOW       (0x00000000)
#define ADC0_ADCDCCTL7_R_CTC_MID       (0x00000400)
#define ADC0_ADCDCCTL7_R_CTC_HIGH      (0x00000C00)

#define ADC0_ADCDCCTL7_CTC_MASK        (0x00000003)
#define ADC0_ADCDCCTL7_CTC_LOW         (0x00000000)
#define ADC0_ADCDCCTL7_CTC_MID         (0x00000001)
#define ADC0_ADCDCCTL7_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC0_ADCDCCTL7_R_CTE_MASK      (0x00001000)
#define ADC0_ADCDCCTL7_R_CTE_BIT       (12)
#define ADC0_ADCDCCTL7_R_CTE_DIS       (0x00000000)
#define ADC0_ADCDCCTL7_R_CTE_EN        (0x00001000)

#define ADC0_ADCDCCTL7_CTE_MASK        (0x00000001)
#define ADC0_ADCDCCTL7_CTE_DIS         (0x00000000)
#define ADC0_ADCDCCTL7_CTE_EN          (0x00000001)
//--------

#define ADC0_ADCDCCTL7_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL7_OFFSET)*32)+(4*4))))
#define ADC0_ADCDCCTL7_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCDCCTL7_OFFSET)*32)+(12*4))))




////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.48 ADCDCCMP0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCMP0            (((ADCDCCMP0_TypeDef*)(ADC0_BASE + ADC_ADCDCCMP0_OFFSET )))
#define ADC0_ADCDCCMP0_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCMP0_OFFSET)))

//--------
#define ADC0_ADCDCCMP0_R_COMP0_MASK      (0x00000FFF)
#define ADC0_ADCDCCMP0_R_COMP0_BIT       (0)

#define ADC0_ADCDCCMP0_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC0_ADCDCCMP0_R_COMP1_MASK      (0x0FFF0000)
#define ADC0_ADCDCCMP0_R_COMP1_BIT       (16)

#define ADC0_ADCDCCMP0_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.49 ADCDCCMP1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCMP1            (((ADCDCCMP1_TypeDef*)(ADC0_BASE + ADC_ADCDCCMP1_OFFSET )))
#define ADC0_ADCDCCMP1_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCMP1_OFFSET)))

//--------
#define ADC0_ADCDCCMP1_R_COMP0_MASK      (0x00000FFF)
#define ADC0_ADCDCCMP1_R_COMP0_BIT       (0)

#define ADC0_ADCDCCMP1_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC0_ADCDCCMP1_R_COMP1_MASK      (0x0FFF0000)
#define ADC0_ADCDCCMP1_R_COMP1_BIT       (16)

#define ADC0_ADCDCCMP1_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.50 ADCDCCMP2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCMP2            (((ADCDCCMP2_TypeDef*)(ADC0_BASE + ADC_ADCDCCMP2_OFFSET )))
#define ADC0_ADCDCCMP2_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCMP2_OFFSET)))

//--------
#define ADC0_ADCDCCMP2_R_COMP0_MASK      (0x00000FFF)
#define ADC0_ADCDCCMP2_R_COMP0_BIT       (0)

#define ADC0_ADCDCCMP2_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC0_ADCDCCMP2_R_COMP1_MASK      (0x0FFF0000)
#define ADC0_ADCDCCMP2_R_COMP1_BIT       (16)

#define ADC0_ADCDCCMP2_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.51 ADCDCCMP3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCMP3            (((ADCDCCMP3_TypeDef*)(ADC0_BASE + ADC_ADCDCCMP3_OFFSET )))
#define ADC0_ADCDCCMP3_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCMP3_OFFSET)))

//--------
#define ADC0_ADCDCCMP3_R_COMP0_MASK      (0x00000FFF)
#define ADC0_ADCDCCMP3_R_COMP0_BIT       (0)

#define ADC0_ADCDCCMP3_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC0_ADCDCCMP3_R_COMP1_MASK      (0x0FFF0000)
#define ADC0_ADCDCCMP3_R_COMP1_BIT       (16)

#define ADC0_ADCDCCMP3_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.52 ADCDCCMP4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCMP4            (((ADCDCCMP4_TypeDef*)(ADC0_BASE + ADC_ADCDCCMP4_OFFSET )))
#define ADC0_ADCDCCMP4_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCMP4_OFFSET)))

//--------
#define ADC0_ADCDCCMP4_R_COMP0_MASK      (0x00000FFF)
#define ADC0_ADCDCCMP4_R_COMP0_BIT       (0)

#define ADC0_ADCDCCMP4_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC0_ADCDCCMP4_R_COMP1_MASK      (0x0FFF0000)
#define ADC0_ADCDCCMP4_R_COMP1_BIT       (16)

#define ADC0_ADCDCCMP4_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.53 ADCDCCMP5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCMP5            (((ADCDCCMP5_TypeDef*)(ADC0_BASE + ADC_ADCDCCMP5_OFFSET )))
#define ADC0_ADCDCCMP5_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCMP5_OFFSET)))

//--------
#define ADC0_ADCDCCMP5_R_COMP0_MASK      (0x00000FFF)
#define ADC0_ADCDCCMP5_R_COMP0_BIT       (0)

#define ADC0_ADCDCCMP5_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC0_ADCDCCMP5_R_COMP1_MASK      (0x0FFF0000)
#define ADC0_ADCDCCMP5_R_COMP1_BIT       (16)

#define ADC0_ADCDCCMP5_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.54 ADCDCCMP6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCMP6            (((ADCDCCMP6_TypeDef*)(ADC0_BASE + ADC_ADCDCCMP6_OFFSET )))
#define ADC0_ADCDCCMP6_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCMP6_OFFSET)))

//--------
#define ADC0_ADCDCCMP6_R_COMP0_MASK      (0x00000FFF)
#define ADC0_ADCDCCMP6_R_COMP0_BIT       (0)

#define ADC0_ADCDCCMP6_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC0_ADCDCCMP6_R_COMP1_MASK      (0x0FFF0000)
#define ADC0_ADCDCCMP6_R_COMP1_BIT       (16)

#define ADC0_ADCDCCMP6_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.55 ADCDCCMP7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCDCCMP7            (((ADCDCCMP7_TypeDef*)(ADC0_BASE + ADC_ADCDCCMP7_OFFSET )))
#define ADC0_ADCDCCMP7_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCDCCMP7_OFFSET)))

//--------
#define ADC0_ADCDCCMP7_R_COMP0_MASK      (0x00000FFF)
#define ADC0_ADCDCCMP7_R_COMP0_BIT       (0)

#define ADC0_ADCDCCMP7_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC0_ADCDCCMP7_R_COMP1_MASK      (0x0FFF0000)
#define ADC0_ADCDCCMP7_R_COMP1_BIT       (16)

#define ADC0_ADCDCCMP7_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.56 ADCPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCPP            (((ADCPP_TypeDef*)(ADC0_BASE + ADC_ADCPP_OFFSET )))
#define ADC0_ADCPP_R          (*((volatile const uint32_t *)(ADC0_BASE +ADC_ADCPP_OFFSET)))

//--------
#define ADC0_ADCPP_R_MSR_MASK      (0x0000000F)
#define ADC0_ADCPP_R_MSR_BIT       (0)
#define ADC0_ADCPP_R_MSR_125Ksps   (0x00000001)
#define ADC0_ADCPP_R_MSR_250Ksps   (0x00000003)
#define ADC0_ADCPP_R_MSR_500Ksps   (0x00000005)
#define ADC0_ADCPP_R_MSR_1000Ksps  (0x00000007)

#define ADC0_ADCPP_MSR_MASK        (0x0000000F)
#define ADC0_ADCPP_MSR_125Ksps     (0x00000001)
#define ADC0_ADCPP_MSR_250Ksps     (0x00000003)
#define ADC0_ADCPP_MSR_500Ksps     (0x00000005)
#define ADC0_ADCPP_MSR_1000Ksps    (0x00000007)
//--------

//--------
#define ADC0_ADCPP_R_CH_MASK      (0x000003F0)
#define ADC0_ADCPP_R_CH_BIT       (4)

#define ADC0_ADCPP_CH_MASK        (0x0000003F)
//--------

//--------
#define ADC0_ADCPP_R_DC_MASK      (0x0000FC00)
#define ADC0_ADCPP_R_DC_BIT       (10)

#define ADC0_ADCPP_DC_MASK        (0x0000003F)
//--------

//--------
#define ADC0_ADCPP_R_TYPE_MASK      (0x00030000)
#define ADC0_ADCPP_R_TYPE_BIT       (16)
#define ADC0_ADCPP_R_TYPE_SAR       (0x00000000)

#define ADC0_ADCPP_TYPE_MASK        (0x00000003)
#define ADC0_ADCPP_TYPE_SAR         (0x00000000)
//--------

//--------
#define ADC0_ADCPP_R_RSL_MASK      (0x007C0000)
#define ADC0_ADCPP_R_RSL_BIT       (18)

#define ADC0_ADCPP_RSL_MASK        (0x0000001F)
//--------

//--------
#define ADC0_ADCPP_R_TS_MASK      (0x00800000)
#define ADC0_ADCPP_R_TS_BIT       (23)
#define ADC0_ADCPP_R_TS_NOTEMP    (0x00000000)
#define ADC0_ADCPP_R_TS_TEMP      (0x00800000)

#define ADC0_ADCPP_TS_MASK        (0x00000001)
#define ADC0_ADCPP_TS_NOTEMP      (0x00000000)
#define ADC0_ADCPP_TS_TEMP        (0x00000001)
//--------

#define ADC0_ADCPP_TS_BB        (*((volatile const uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCPP_OFFSET)*32)+(23*4))))

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.57 ADCPC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCPC            (((ADCPC_TypeDef*)(ADC0_BASE + ADC_ADCPC_OFFSET )))
#define ADC0_ADCPC_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCPC_OFFSET)))

//--------
#define ADC0_ADCPC_R_SR_MASK      (0x0000000F)
#define ADC0_ADCPC_R_SR_BIT       (0)
#define ADC0_ADCPC_R_SR_125Ksps   (0x00000001)
#define ADC0_ADCPC_R_SR_250Ksps   (0x00000003)
#define ADC0_ADCPC_R_SR_500Ksps   (0x00000005)
#define ADC0_ADCPC_R_SR_1000Ksps  (0x00000007)

#define ADC0_ADCPC_SR_MASK        (0x0000000F)
#define ADC0_ADCPC_SR_125Ksps     (0x00000001)
#define ADC0_ADCPC_SR_250Ksps     (0x00000003)
#define ADC0_ADCPC_SR_500Ksps     (0x00000005)
#define ADC0_ADCPC_SR_1000Ksps    (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 0.58 ADCCC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC0_ADCCC            (((ADCCC_TypeDef*)(ADC0_BASE + ADC_ADCCC_OFFSET )))
#define ADC0_ADCCC_R          (*((volatile uint32_t *)(ADC0_BASE +ADC_ADCCC_OFFSET)))


//--------
#define ADC0_ADCCC_R_CS_MASK      (0x0000000F)
#define ADC0_ADCCC_R_CS_BIT       (0)
#define ADC0_ADCCC_R_CS_PLL       (0x00000000)
#define ADC0_ADCCC_R_CS_PIOSC     (0x00000001)

#define ADC0_ADCCC_CS_MASK        (0x0000000F)
#define ADC0_ADCCC_CS_PLL         (0x00000000)
#define ADC0_ADCCC_CS_PIOSC       (0x00000001)
//--------

#define ADC0_ADCCC_CS_BB        (*((volatile uint32_t *)(0x42000000+((ADC0_OFFSET+ADC_ADCCC_OFFSET)*32)+(0*4))))



//ToDO ADC1


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 ADC1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.1 ADCACTSS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCACTSS            (((ADCACTSS_TypeDef*)(ADC1_BASE + ADC_ADCACTSS_OFFSET )))
#define ADC1_ADCACTSS_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCACTSS_OFFSET)))


//--------
#define ADC1_ADCACTSS_R_ASEN0_MASK      (0x00000001)
#define ADC1_ADCACTSS_R_ASEN0_BIT       (0)
#define ADC1_ADCACTSS_R_ASEN0_DIS       (0x00000000)
#define ADC1_ADCACTSS_R_ASEN0_EN        (0x00000001)

#define ADC1_ADCACTSS_ASEN0_MASK        (0x00000001)
#define ADC1_ADCACTSS_ASEN0_DIS         (0x00000000)
#define ADC1_ADCACTSS_ASEN0_EN          (0x00000001)
//--------

//--------
#define ADC1_ADCACTSS_R_ASEN1_MASK      (0x00000002)
#define ADC1_ADCACTSS_R_ASEN1_BIT       (1)
#define ADC1_ADCACTSS_R_ASEN1_DIS       (0x00000000)
#define ADC1_ADCACTSS_R_ASEN1_EN        (0x00000002)

#define ADC1_ADCACTSS_ASEN1_MASK        (0x00000001)
#define ADC1_ADCACTSS_ASEN1_DIS         (0x00000000)
#define ADC1_ADCACTSS_ASEN1_EN          (0x00000001)
//--------

//--------
#define ADC1_ADCACTSS_R_ASEN2_MASK      (0x00000004)
#define ADC1_ADCACTSS_R_ASEN2_BIT       (2)
#define ADC1_ADCACTSS_R_ASEN2_DIS       (0x00000000)
#define ADC1_ADCACTSS_R_ASEN2_EN        (0x00000004)

#define ADC1_ADCACTSS_ASEN2_MASK        (0x00000001)
#define ADC1_ADCACTSS_ASEN2_DIS         (0x00000000)
#define ADC1_ADCACTSS_ASEN2_EN          (0x00000001)
//--------

//--------
#define ADC1_ADCACTSS_R_ASEN3_MASK      (0x00000008)
#define ADC1_ADCACTSS_R_ASEN3_BIT       (3)
#define ADC1_ADCACTSS_R_ASEN3_DIS       (0x00000000)
#define ADC1_ADCACTSS_R_ASEN3_EN        (0x00000008)

#define ADC1_ADCACTSS_ASEN3_MASK        (0x00000001)
#define ADC1_ADCACTSS_ASEN3_DIS         (0x00000000)
#define ADC1_ADCACTSS_ASEN3_EN          (0x00000001)
//--------

//--------
#define ADC1_ADCACTSS_R_BUSY_MASK      (0x00010000)
#define ADC1_ADCACTSS_R_BUSY_BIT       (16)
#define ADC1_ADCACTSS_R_BUSY_IDLE      (0x00000000)
#define ADC1_ADCACTSS_R_BUSY_BUSY      (0x00010000)

#define ADC1_ADCACTSS_BUSY_MASK        (0x00000001)
#define ADC1_ADCACTSS_BUSY_IDLE        (0x00000000)
#define ADC1_ADCACTSS_BUSY_BUSY        (0x00000001)
//--------

#define ADC1_ADCACTSS_ASEN0_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCACTSS_OFFSET)*32)+(0*4))))
#define ADC1_ADCACTSS_ASEN1_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCACTSS_OFFSET)*32)+(1*4))))
#define ADC1_ADCACTSS_ASEN2_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCACTSS_OFFSET)*32)+(2*4))))
#define ADC1_ADCACTSS_ASEN3_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCACTSS_OFFSET)*32)+(3*4))))
#define ADC1_ADCACTSS_BUSY_BB      (*((volatile const uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCACTSS_OFFSET)*32)+(16*4))))

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.2 ADCRIS ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCRIS            (((ADCRIS_TypeDef*)(ADC1_BASE + ADC_ADCRIS_OFFSET )))
#define ADC1_ADCRIS_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCRIS_OFFSET)))


//--------
#define ADC1_ADCRIS_R_INR0_MASK      (0x00000001)
#define ADC1_ADCRIS_R_INR0_BIT       (0)
#define ADC1_ADCRIS_R_INR0_NOACTIVE  (0x00000000)
#define ADC1_ADCRIS_R_INR0_ACTIVE    (0x00000001)

#define ADC1_ADCRIS_INR0_MASK        (0x00000001)
#define ADC1_ADCRIS_INR0_NOACTIVE    (0x00000000)
#define ADC1_ADCRIS_INR0_ACTIVE      (0x00000001)
//--------

//--------
#define ADC1_ADCRIS_R_INR1_MASK      (0x00000002)
#define ADC1_ADCRIS_R_INR1_BIT       (1)
#define ADC1_ADCRIS_R_INR1_NOACTIVE  (0x00000000)
#define ADC1_ADCRIS_R_INR1_ACTIVE    (0x00000002)

#define ADC1_ADCRIS_INR1_MASK        (0x00000001)
#define ADC1_ADCRIS_INR1_NOACTIVE    (0x00000000)
#define ADC1_ADCRIS_INR1_ACTIVE      (0x00000001)
//--------

//--------
#define ADC1_ADCRIS_R_INR2_MASK      (0x00000004)
#define ADC1_ADCRIS_R_INR2_BIT       (2)
#define ADC1_ADCRIS_R_INR2_NOACTIVE  (0x00000000)
#define ADC1_ADCRIS_R_INR2_ACTIVE    (0x00000004)

#define ADC1_ADCRIS_INR2_MASK        (0x00000001)
#define ADC1_ADCRIS_INR2_NOACTIVE    (0x00000000)
#define ADC1_ADCRIS_INR2_ACTIVE      (0x00000001)
//--------

//--------
#define ADC1_ADCRIS_R_INR3_MASK      (0x00000008)
#define ADC1_ADCRIS_R_INR3_BIT       (3)
#define ADC1_ADCRIS_R_INR3_NOACTIVE  (0x00000000)
#define ADC1_ADCRIS_R_INR3_ACTIVE    (0x00000008)

#define ADC1_ADCRIS_INR3_MASK        (0x00000001)
#define ADC1_ADCRIS_INR3_NOACTIVE    (0x00000000)
#define ADC1_ADCRIS_INR3_ACTIVE      (0x00000001)
//--------

//--------
#define ADC1_ADCRIS_R_INRDC_MASK      (0x00000008)
#define ADC1_ADCRIS_R_INRDC_BIT       (3)
#define ADC1_ADCRIS_R_INRDC_NOACTIVE  (0x00000000)
#define ADC1_ADCRIS_R_INRDC_ACTIVE    (0x00000008)

#define ADC1_ADCRIS_INRDC_MASK        (0x00000001)
#define ADC1_ADCRIS_INRDC_NOACTIVE    (0x00000000)
#define ADC1_ADCRIS_INRDC_ACTIVE      (0x00000001)
//--------

#define ADC1_ADCRIS_INR0_BB     (*((volatile const uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCRIS_OFFSET)*32)+(0*4))))
#define ADC1_ADCRIS_INR1_BB     (*((volatile const uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCRIS_OFFSET)*32)+(1*4))))
#define ADC1_ADCRIS_INR2_BB     (*((volatile const uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCRIS_OFFSET)*32)+(2*4))))
#define ADC1_ADCRIS_INR3_BB     (*((volatile const uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCRIS_OFFSET)*32)+(3*4))))
#define ADC1_ADCRIS_INRDC_BB    (*((volatile const uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCRIS_OFFSET)*32)+(16*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.3 ADCIM ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCIM            (((ADCIM_TypeDef*)(ADC1_BASE + ADC_ADCIM_OFFSET )))
#define ADC1_ADCIM_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCIM_OFFSET)))

//--------
#define ADC1_ADCIM_R_MASK0_MASK      (0x00000001)
#define ADC1_ADCIM_R_MASK0_BIT       (0)
#define ADC1_ADCIM_R_MASK0_DIS   (0x00000000)
#define ADC1_ADCIM_R_MASK0_EN     (0x00000001)

#define ADC1_ADCIM_MASK0_MASK        (0x00000001)
#define ADC1_ADCIM_MASK0_DIS     (0x00000000)
#define ADC1_ADCIM_MASK0_EN       (0x00000001)
//--------

//--------
#define ADC1_ADCIM_R_MASK1_MASK      (0x00000002)
#define ADC1_ADCIM_R_MASK1_BIT       (1)
#define ADC1_ADCIM_R_MASK1_DIS   (0x00000000)
#define ADC1_ADCIM_R_MASK1_EN     (0x00000002)

#define ADC1_ADCIM_MASK1_MASK        (0x00000001)
#define ADC1_ADCIM_MASK1_DIS     (0x00000000)
#define ADC1_ADCIM_MASK1_EN       (0x00000001)
//--------

//--------
#define ADC1_ADCIM_R_MASK2_MASK      (0x00000004)
#define ADC1_ADCIM_R_MASK2_BIT       (2)
#define ADC1_ADCIM_R_MASK2_DIS   (0x00000000)
#define ADC1_ADCIM_R_MASK2_EN     (0x00000004)

#define ADC1_ADCIM_MASK2_MASK        (0x00000001)
#define ADC1_ADCIM_MASK2_DIS     (0x00000000)
#define ADC1_ADCIM_MASK2_EN       (0x00000001)
//--------

//--------
#define ADC1_ADCIM_R_MASK3_MASK      (0x00000008)
#define ADC1_ADCIM_R_MASK3_BIT       (3)
#define ADC1_ADCIM_R_MASK3_DIS   (0x00000000)
#define ADC1_ADCIM_R_MASK3_EN     (0x00000008)

#define ADC1_ADCIM_MASK3_MASK        (0x00000001)
#define ADC1_ADCIM_MASK3_DIS     (0x00000000)
#define ADC1_ADCIM_MASK3_EN       (0x00000001)
//--------

//--------
#define ADC1_ADCIM_R_DCONSS0_MASK      (0x00010000)
#define ADC1_ADCIM_R_DCONSS0_BIT       (16)
#define ADC1_ADCIM_R_DCONSS0_DIS   (0x00000000)
#define ADC1_ADCIM_R_DCONSS0_EN     (0x00010000)

#define ADC1_ADCIM_DCONSS0_MASK        (0x00000001)
#define ADC1_ADCIM_DCONSS0_DIS     (0x00000000)
#define ADC1_ADCIM_DCONSS0_EN       (0x00000001)
//--------

//--------
#define ADC1_ADCIM_R_DCONSS1_MASK      (0x00020000)
#define ADC1_ADCIM_R_DCONSS1_BIT       (17)
#define ADC1_ADCIM_R_DCONSS1_DIS   (0x00000000)
#define ADC1_ADCIM_R_DCONSS1_EN     (0x00020000)

#define ADC1_ADCIM_DCONSS1_MASK        (0x00000001)
#define ADC1_ADCIM_DCONSS1_DIS     (0x00000000)
#define ADC1_ADCIM_DCONSS1_EN       (0x00000001)
//--------

//--------
#define ADC1_ADCIM_R_DCONSS2_MASK      (0x00040000)
#define ADC1_ADCIM_R_DCONSS2_BIT       (18)
#define ADC1_ADCIM_R_DCONSS2_DIS   (0x00000000)
#define ADC1_ADCIM_R_DCONSS2_EN     (0x00040000)

#define ADC1_ADCIM_DCONSS2_MASK        (0x00000001)
#define ADC1_ADCIM_DCONSS2_DIS     (0x00000000)
#define ADC1_ADCIM_DCONSS2_EN       (0x00000001)
//--------

//--------
#define ADC1_ADCIM_R_DCONSS3_MASK      (0x00080000)
#define ADC1_ADCIM_R_DCONSS3_BIT       (19)
#define ADC1_ADCIM_R_DCONSS3_DIS   (0x00000000)
#define ADC1_ADCIM_R_DCONSS3_EN     (0x00080000)

#define ADC1_ADCIM_DCONSS3_MASK        (0x00000001)
#define ADC1_ADCIM_DCONSS3_DIS     (0x00000000)
#define ADC1_ADCIM_DCONSS3_EN       (0x00000001)
//--------


#define ADC1_ADCIM_MASK0_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCIM_OFFSET)*32)+(0*4))))
#define ADC1_ADCIM_MASK1_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCIM_OFFSET)*32)+(1*4))))
#define ADC1_ADCIM_MASK2_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCIM_OFFSET)*32)+(2*4))))
#define ADC1_ADCIM_MASK3_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCIM_OFFSET)*32)+(3*4))))
#define ADC1_ADCIM_DCONSS0_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCIM_OFFSET)*32)+(16*4))))
#define ADC1_ADCIM_DCONSS1_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCIM_OFFSET)*32)+(17*4))))
#define ADC1_ADCIM_DCONSS2_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCIM_OFFSET)*32)+(18*4))))
#define ADC1_ADCIM_DCONSS3_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCIM_OFFSET)*32)+(19*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.4 ADCISC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCISC            (((ADCISC_TypeDef*)(ADC1_BASE + ADC_ADCISC_OFFSET )))
#define ADC1_ADCISC_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCISC_OFFSET)))

//--------
#define ADC1_ADCISC_R_IN0_MASK       (0x00000001)
#define ADC1_ADCISC_R_IN0_BIT        (0)
#define ADC1_ADCISC_R_IN0_CLEAR      (0x00000001)

#define ADC1_ADCISC_IN0_MASK       (0x00000001)
#define ADC1_ADCISC_IN0_CLEAR      (0x00000001)
//--------

//--------
#define ADC1_ADCISC_R_IN1_MASK       (0x00000002)
#define ADC1_ADCISC_R_IN1_BIT        (1)
#define ADC1_ADCISC_R_IN1_CLEAR      (0x00000002)

#define ADC1_ADCISC_IN1_MASK       (0x00000001)
#define ADC1_ADCISC_IN1_CLEAR      (0x00000001)
//--------

//--------
#define ADC1_ADCISC_R_IN2_MASK       (0x00000004)
#define ADC1_ADCISC_R_IN2_BIT        (2)
#define ADC1_ADCISC_R_IN2_CLEAR      (0x00000004)

#define ADC1_ADCISC_IN2_MASK       (0x00000001)
#define ADC1_ADCISC_IN2_CLEAR      (0x00000001)
//--------

//--------
#define ADC1_ADCISC_R_IN3_MASK       (0x00000008)
#define ADC1_ADCISC_R_IN3_BIT        (3)
#define ADC1_ADCISC_R_IN3_CLEAR      (0x00000008)

#define ADC1_ADCISC_IN3_MASK       (0x00000001)
#define ADC1_ADCISC_IN3_CLEAR      (0x00000001)
//--------

//--------
#define ADC1_ADCISC_R_DCINSS0_MASK       (0x00010000)
#define ADC1_ADCISC_R_DCINSS0_BIT        (16)
#define ADC1_ADCISC_R_DCINSS0_CLEAR      (0x00010000)

#define ADC1_ADCISC_DCINSS0_MASK       (0x00000001)
#define ADC1_ADCISC_DCINSS0_CLEAR      (0x00000001)
//--------

//--------
#define ADC1_ADCISC_R_DCINSS1_MASK       (0x00020000)
#define ADC1_ADCISC_R_DCINSS1_BIT        (17)
#define ADC1_ADCISC_R_DCINSS1_CLEAR      (0x00020000)

#define ADC1_ADCISC_DCINSS1_MASK       (0x00000001)
#define ADC1_ADCISC_DCINSS1_CLEAR      (0x00000001)
//--------

//--------
#define ADC1_ADCISC_R_DCINSS2_MASK       (0x00040000)
#define ADC1_ADCISC_R_DCINSS2_BIT        (18)
#define ADC1_ADCISC_R_DCINSS2_CLEAR      (0x00040000)

#define ADC1_ADCISC_DCINSS2_MASK       (0x00000001)
#define ADC1_ADCISC_DCINSS2_CLEAR      (0x00000001)
//--------

//--------
#define ADC1_ADCISC_R_DCINSS3_MASK       (0x00080000)
#define ADC1_ADCISC_R_DCINSS3_BIT        (19)
#define ADC1_ADCISC_R_DCINSS3_CLEAR      (0x00080000)

#define ADC1_ADCISC_DCINSS3_MASK       (0x00000001)
#define ADC1_ADCISC_DCINSS3_CLEAR      (0x00000001)
//--------

#define ADC1_ADCISC_DCINSS0        (0x00010000)
#define ADC1_ADCISC_DCINSS1        (0x00020000)
#define ADC1_ADCISC_DCINSS2        (0x00040000)
#define ADC1_ADCISC_DCINSS3        (0x00080000)


#define ADC1_ADCISC_IN0_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCISC_OFFSET)*32)+(0*4))))
#define ADC1_ADCISC_IN1_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCISC_OFFSET)*32)+(1*4))))
#define ADC1_ADCISC_IN2_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCISC_OFFSET)*32)+(2*4))))
#define ADC1_ADCISC_IN3_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCISC_OFFSET)*32)+(3*4))))
#define ADC1_ADCISC_DCINSS0_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCISC_OFFSET)*32)+(16*4))))
#define ADC1_ADCISC_DCINSS1_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCISC_OFFSET)*32)+(17*4))))
#define ADC1_ADCISC_DCINSS2_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCISC_OFFSET)*32)+(18*4))))
#define ADC1_ADCISC_DCINSS3_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCISC_OFFSET)*32)+(19*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.5 ADCOSTAT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCOSTAT            (((ADCOSTAT_TypeDef*)(ADC1_BASE + ADC_ADCOSTAT_OFFSET )))
#define ADC1_ADCOSTAT_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCOSTAT_OFFSET)))


//--------
#define ADC1_ADCOSTAT_R_OV0_MASK      (0x00000001)
#define ADC1_ADCOSTAT_R_OV0_BIT       (0)
#define ADC1_ADCOSTAT_R_OV0_NOFULL    (0x00000000)
#define ADC1_ADCOSTAT_R_OV0_FULL      (0x00000001)

#define ADC1_ADCOSTAT_OV0_MASK        (0x00000001)
#define ADC1_ADCOSTAT_OV0_NOFULL      (0x00000000)
#define ADC1_ADCOSTAT_OV0_FULL        (0x00000001)
//--------

//--------
#define ADC1_ADCOSTAT_R_OV1_MASK      (0x00000002)
#define ADC1_ADCOSTAT_R_OV1_BIT       (1)
#define ADC1_ADCOSTAT_R_OV1_NOFULL    (0x00000000)
#define ADC1_ADCOSTAT_R_OV1_FULL      (0x00000002)

#define ADC1_ADCOSTAT_OV1_MASK        (0x00000001)
#define ADC1_ADCOSTAT_OV1_NOFULL      (0x00000000)
#define ADC1_ADCOSTAT_OV1_FULL        (0x00000001)
//--------

//--------
#define ADC1_ADCOSTAT_R_OV2_MASK      (0x00000004)
#define ADC1_ADCOSTAT_R_OV2_BIT       (2)
#define ADC1_ADCOSTAT_R_OV2_NOFULL    (0x00000000)
#define ADC1_ADCOSTAT_R_OV2_FULL      (0x00000004)

#define ADC1_ADCOSTAT_OV2_MASK        (0x00000001)
#define ADC1_ADCOSTAT_OV2_NOFULL      (0x00000000)
#define ADC1_ADCOSTAT_OV2_FULL        (0x00000001)
//--------

//--------
#define ADC1_ADCOSTAT_R_OV3_MASK      (0x00000008)
#define ADC1_ADCOSTAT_R_OV3_BIT       (3)
#define ADC1_ADCOSTAT_R_OV3_NOFULL    (0x00000000)
#define ADC1_ADCOSTAT_R_OV3_FULL      (0x00000008)

#define ADC1_ADCOSTAT_OV3_MASK        (0x00000001)
#define ADC1_ADCOSTAT_OV3_NOFULL      (0x00000000)
#define ADC1_ADCOSTAT_OV3_FULL        (0x00000001)
//--------

#define ADC1_ADCOSTAT_OV0_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCOSTAT_OFFSET)*32)+(0*4))))
#define ADC1_ADCOSTAT_OV1_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCOSTAT_OFFSET)*32)+(1*4))))
#define ADC1_ADCOSTAT_OV2_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCOSTAT_OFFSET)*32)+(2*4))))
#define ADC1_ADCOSTAT_OV3_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCOSTAT_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.6 ADCEMUX ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCEMUX            (((ADCEMUX_TypeDef*)(ADC1_BASE + ADC_ADCEMUX_OFFSET )))
#define ADC1_ADCEMUX_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCEMUX_OFFSET)))

//--------
#define ADC1_ADCEMUX_R_EM0_MASK      (0x0000000F)
#define ADC1_ADCEMUX_R_EM0_BIT       (0)
#define ADC1_ADCEMUX_R_EM0_DEFAULT   (0x00000000)
#define ADC1_ADCEMUX_R_EM0_ACOMP0    (0x00000001)
#define ADC1_ADCEMUX_R_EM0_ACOMP1    (0x00000002)
#define ADC1_ADCEMUX_R_EM0_GPIO      (0x00000004)
#define ADC1_ADCEMUX_R_EM0_TIMER     (0x00000005)
#define ADC1_ADCEMUX_R_EM0_PWMGEN0   (0x00000006)
#define ADC1_ADCEMUX_R_EM0_PWMGEN1   (0x00000007)
#define ADC1_ADCEMUX_R_EM0_PWMGEN2   (0x00000008)
#define ADC1_ADCEMUX_R_EM0_PWMGEN3   (0x00000009)
#define ADC1_ADCEMUX_R_EM0_ALWAYS    (0x0000000F)

#define ADC1_ADCEMUX_EM0_MASK        (0x0000000F)
#define ADC1_ADCEMUX_EM0_DEFAULT     (0x00000000)
#define ADC1_ADCEMUX_EM0_ACOMP0      (0x00000001)
#define ADC1_ADCEMUX_EM0_ACOMP1      (0x00000002)
#define ADC1_ADCEMUX_EM0_GPIO        (0x00000004)
#define ADC1_ADCEMUX_EM0_TIMER       (0x00000005)
#define ADC1_ADCEMUX_EM0_PWMGEN0     (0x00000006)
#define ADC1_ADCEMUX_EM0_PWMGEN1     (0x00000007)
#define ADC1_ADCEMUX_EM0_PWMGEN2     (0x00000008)
#define ADC1_ADCEMUX_EM0_PWMGEN3     (0x00000009)
#define ADC1_ADCEMUX_EM0_ALWAYS      (0x0000000F)
//--------

//--------
#define ADC1_ADCEMUX_R_EM1_MASK      (0x000000F0)
#define ADC1_ADCEMUX_R_EM1_BIT       (4)
#define ADC1_ADCEMUX_R_EM1_DEFAULT   (0x00000000)
#define ADC1_ADCEMUX_R_EM1_ACOMP0    (0x00000010)
#define ADC1_ADCEMUX_R_EM1_ACOMP1    (0x00000020)
#define ADC1_ADCEMUX_R_EM1_GPIO      (0x00000040)
#define ADC1_ADCEMUX_R_EM1_TIMER     (0x00000050)
#define ADC1_ADCEMUX_R_EM1_PWMGEN0   (0x00000060)
#define ADC1_ADCEMUX_R_EM1_PWMGEN1   (0x00000070)
#define ADC1_ADCEMUX_R_EM1_PWMGEN2   (0x00000080)
#define ADC1_ADCEMUX_R_EM1_PWMGEN3   (0x00000090)
#define ADC1_ADCEMUX_R_EM1_ALWAYS    (0x000000F0)

#define ADC1_ADCEMUX_EM1_MASK        (0x0000000F)
#define ADC1_ADCEMUX_EM1_DEFAULT     (0x00000000)
#define ADC1_ADCEMUX_EM1_ACOMP0      (0x00000001)
#define ADC1_ADCEMUX_EM1_ACOMP1      (0x00000002)
#define ADC1_ADCEMUX_EM1_GPIO        (0x00000004)
#define ADC1_ADCEMUX_EM1_TIMER       (0x00000005)
#define ADC1_ADCEMUX_EM1_PWMGEN0     (0x00000006)
#define ADC1_ADCEMUX_EM1_PWMGEN1     (0x00000007)
#define ADC1_ADCEMUX_EM1_PWMGEN2     (0x00000008)
#define ADC1_ADCEMUX_EM1_PWMGEN3     (0x00000009)
#define ADC1_ADCEMUX_EM1_ALWAYS      (0x0000000F)
//--------

//--------
#define ADC1_ADCEMUX_R_EM2_MASK      (0x00000F00)
#define ADC1_ADCEMUX_R_EM2_BIT       (8)
#define ADC1_ADCEMUX_R_EM2_DEFAULT   (0x00000000)
#define ADC1_ADCEMUX_R_EM2_ACOMP0    (0x00000100)
#define ADC1_ADCEMUX_R_EM2_ACOMP1    (0x00000200)
#define ADC1_ADCEMUX_R_EM2_GPIO      (0x00000400)
#define ADC1_ADCEMUX_R_EM2_TIMER     (0x00000500)
#define ADC1_ADCEMUX_R_EM2_PWMGEN0   (0x00000600)
#define ADC1_ADCEMUX_R_EM2_PWMGEN1   (0x00000700)
#define ADC1_ADCEMUX_R_EM2_PWMGEN2   (0x00000800)
#define ADC1_ADCEMUX_R_EM2_PWMGEN3   (0x00000900)
#define ADC1_ADCEMUX_R_EM2_ALWAYS    (0x00000F00)

#define ADC1_ADCEMUX_EM2_MASK        (0x0000000F)
#define ADC1_ADCEMUX_EM2_DEFAULT     (0x00000000)
#define ADC1_ADCEMUX_EM2_ACOMP0      (0x00000001)
#define ADC1_ADCEMUX_EM2_ACOMP1      (0x00000002)
#define ADC1_ADCEMUX_EM2_GPIO        (0x00000004)
#define ADC1_ADCEMUX_EM2_TIMER       (0x00000005)
#define ADC1_ADCEMUX_EM2_PWMGEN0     (0x00000006)
#define ADC1_ADCEMUX_EM2_PWMGEN1     (0x00000007)
#define ADC1_ADCEMUX_EM2_PWMGEN2     (0x00000008)
#define ADC1_ADCEMUX_EM2_PWMGEN3     (0x00000009)
#define ADC1_ADCEMUX_EM2_ALWAYS      (0x0000000F)
//--------


//--------
#define ADC1_ADCEMUX_R_EM3_MASK      (0x0000F)
#define ADC1_ADCEMUX_R_EM3_BIT       (12)
#define ADC1_ADCEMUX_R_EM3_DEFAULT   (0x00000000)
#define ADC1_ADCEMUX_R_EM3_ACOMP0    (0x00001000)
#define ADC1_ADCEMUX_R_EM3_ACOMP1    (0x00002000)
#define ADC1_ADCEMUX_R_EM3_GPIO      (0x00004000)
#define ADC1_ADCEMUX_R_EM3_TIMER     (0x00005000)
#define ADC1_ADCEMUX_R_EM3_PWMGEN0   (0x00006000)
#define ADC1_ADCEMUX_R_EM3_PWMGEN1   (0x00007000)
#define ADC1_ADCEMUX_R_EM3_PWMGEN2   (0x00008000)
#define ADC1_ADCEMUX_R_EM3_PWMGEN3   (0x00009000)
#define ADC1_ADCEMUX_R_EM3_ALWAYS    (0x0000F000)

#define ADC1_ADCEMUX_EM3_MASK        (0x0000000F)
#define ADC1_ADCEMUX_EM3_DEFAULT     (0x00000000)
#define ADC1_ADCEMUX_EM3_ACOMP0      (0x00000001)
#define ADC1_ADCEMUX_EM3_ACOMP1      (0x00000002)
#define ADC1_ADCEMUX_EM3_GPIO        (0x00000004)
#define ADC1_ADCEMUX_EM3_TIMER       (0x00000005)
#define ADC1_ADCEMUX_EM3_PWMGEN0     (0x00000006)
#define ADC1_ADCEMUX_EM3_PWMGEN1     (0x00000007)
#define ADC1_ADCEMUX_EM3_PWMGEN2     (0x00000008)
#define ADC1_ADCEMUX_EM3_PWMGEN3     (0x00000009)
#define ADC1_ADCEMUX_EM3_ALWAYS      (0x0000000F)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.7 ADCUSTAT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCUSTAT            (((ADCUSTAT_TypeDef*)(ADC1_BASE + ADC_ADCUSTAT_OFFSET )))
#define ADC1_ADCUSTAT_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCUSTAT_OFFSET)))



//--------
#define ADC1_ADCUSTAT_R_UV0_MASK      (0x00000001)
#define ADC1_ADCUSTAT_R_UV0_BIT       (0)
#define ADC1_ADCUSTAT_R_UV0_NOEMPTY    (0x00000000)
#define ADC1_ADCUSTAT_R_UV0_EMPTY      (0x00000001)

#define ADC1_ADCUSTAT_UV0_MASK        (0x00000001)
#define ADC1_ADCUSTAT_UV0_NOEMPTY      (0x00000000)
#define ADC1_ADCUSTAT_UV0_EMPTY        (0x00000001)
//--------

//--------
#define ADC1_ADCUSTAT_R_UV1_MASK      (0x00000002)
#define ADC1_ADCUSTAT_R_UV1_BIT       (1)
#define ADC1_ADCUSTAT_R_UV1_NOEMPTY    (0x00000000)
#define ADC1_ADCUSTAT_R_UV1_EMPTY      (0x00000002)

#define ADC1_ADCUSTAT_UV1_MASK        (0x00000001)
#define ADC1_ADCUSTAT_UV1_NOEMPTY      (0x00000000)
#define ADC1_ADCUSTAT_UV1_EMPTY        (0x00000001)
//--------

//--------
#define ADC1_ADCUSTAT_R_UV2_MASK      (0x00000004)
#define ADC1_ADCUSTAT_R_UV2_BIT       (2)
#define ADC1_ADCUSTAT_R_UV2_NOEMPTY    (0x00000000)
#define ADC1_ADCUSTAT_R_UV2_EMPTY      (0x00000004)

#define ADC1_ADCUSTAT_UV2_MASK        (0x00000001)
#define ADC1_ADCUSTAT_UV2_NOEMPTY      (0x00000000)
#define ADC1_ADCUSTAT_UV2_EMPTY        (0x00000001)
//--------

//--------
#define ADC1_ADCUSTAT_R_UV3_MASK      (0x00000008)
#define ADC1_ADCUSTAT_R_UV3_BIT       (3)
#define ADC1_ADCUSTAT_R_UV3_NOEMPTY    (0x00000000)
#define ADC1_ADCUSTAT_R_UV3_EMPTY      (0x00000008)

#define ADC1_ADCUSTAT_UV3_MASK        (0x00000001)
#define ADC1_ADCUSTAT_UV3_NOEMPTY      (0x00000000)
#define ADC1_ADCUSTAT_UV3_EMPTY        (0x00000001)
//--------

#define ADC1_ADCUSTAT_UV0_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCUSTAT_OFFSET)*32)+(0*4))))
#define ADC1_ADCUSTAT_UV1_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCUSTAT_OFFSET)*32)+(1*4))))
#define ADC1_ADCUSTAT_UV2_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCUSTAT_OFFSET)*32)+(2*4))))
#define ADC1_ADCUSTAT_UV3_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCUSTAT_OFFSET)*32)+(3*4))))

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.8 ADCTSSEL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCTSSEL            (((ADCTSSEL_TypeDef*)(ADC1_BASE + ADC_ADCTSSEL_OFFSET )))
#define ADC1_ADCTSSEL_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCTSSEL_OFFSET)))

//--------
#define ADC1_ADCTSSEL_R_PS0_MASK       (0x00000030)
#define ADC1_ADCTSSEL_R_PS0_BIT        (4)
#define ADC1_ADCTSSEL_R_PS0_PWM0       (0x00000000)
#define ADC1_ADCTSSEL_R_PS0_PWM1       (0x00000010)

#define ADC1_ADCTSSEL_PS0_MASK        (0x00000003)
#define ADC1_ADCTSSEL_PS0_PWM0        (0x00000000)
#define ADC1_ADCTSSEL_PS0_PWM1        (0x00000001)
//--------

//--------
#define ADC1_ADCTSSEL_R_PS1_MASK       (0x00003000)
#define ADC1_ADCTSSEL_R_PS1_BIT        (12)
#define ADC1_ADCTSSEL_R_PS1_PWM0       (0x00000000)
#define ADC1_ADCTSSEL_R_PS1_PWM1       (0x00001000)

#define ADC1_ADCTSSEL_PS1_MASK        (0x00000003)
#define ADC1_ADCTSSEL_PS1_PWM0        (0x00000000)
#define ADC1_ADCTSSEL_PS1_PWM1        (0x00000001)
//--------

//--------
#define ADC1_ADCTSSEL_R_PS2_MASK       (0x00300000)
#define ADC1_ADCTSSEL_R_PS2_BIT        (20)
#define ADC1_ADCTSSEL_R_PS2_PWM0       (0x00000000)
#define ADC1_ADCTSSEL_R_PS2_PWM1       (0x00100000)

#define ADC1_ADCTSSEL_PS2_MASK        (0x00000003)
#define ADC1_ADCTSSEL_PS2_PWM0        (0x00000000)
#define ADC1_ADCTSSEL_PS2_PWM1        (0x00000001)
//--------

//--------
#define ADC1_ADCTSSEL_R_PS3_MASK       (0x30000000)
#define ADC1_ADCTSSEL_R_PS3_BIT        (28)
#define ADC1_ADCTSSEL_R_PS3_PWM0       (0x00000000)
#define ADC1_ADCTSSEL_R_PS3_PWM1       (0x10000000)

#define ADC1_ADCTSSEL_PS3_MASK        (0x00000003)
#define ADC1_ADCTSSEL_PS3_PWM0        (0x00000000)
#define ADC1_ADCTSSEL_PS3_PWM1        (0x00000001)
//--------


#define ADC1_ADCTSSEL_PS0_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCTSSEL_OFFSET)*32)+(4*4))))
#define ADC1_ADCTSSEL_PS1_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCTSSEL_OFFSET)*32)+(12*4))))
#define ADC1_ADCTSSEL_PS2_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCTSSEL_OFFSET)*32)+(20*4))))
#define ADC1_ADCTSSEL_PS3_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCTSSEL_OFFSET)*32)+(28*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.9 ADCSSPRI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSPRI            (((ADCSSPRI_TypeDef*)(ADC1_BASE + ADC_ADCSSPRI_OFFSET )))
#define ADC1_ADCSSPRI_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSPRI_OFFSET)))

//--------
#define ADC1_ADCSSPRI_R_SS0_MASK       (0x00000003)
#define ADC1_ADCSSPRI_R_SS0_BIT        (0)

#define ADC1_ADCSSPRI_SS0_MASK         (0x00000003)
//--------

//--------
#define ADC1_ADCSSPRI_R_SS1_MASK       (0x00000030)
#define ADC1_ADCSSPRI_R_SS1_BIT        (4)

#define ADC1_ADCSSPRI_SSI1_MASK        (0x00000003)
//--------

//--------
#define ADC1_ADCSSPRI_R_SS2_MASK       (0x00000300)
#define ADC1_ADCSSPRI_R_SS2_BIT        (8)

#define ADC1_ADCSSPRI_SS2_MASK         (0x00000003)
//--------

//--------
#define ADC1_ADCSSPRI_R_SS3_MASK       (0x00003000)
#define ADC1_ADCSSPRI_R_SS3_BIT        (12)

#define ADC1_ADCSSPRI_SS3_MASK         (0x00000003)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.10 ADCSPC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSPC            (((ADCSPC_TypeDef*)(ADC1_BASE + ADC_ADCSPC_OFFSET )))
#define ADC1_ADCSPC_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSPC_OFFSET)))

//--------
#define ADC1_ADCSPC_R_PHASE_MASK       (0x0000000F)
#define ADC1_ADCSPC_R_PHASE_BIT        (0)
#define ADC1_ADCSPC_R_PHASE_0          (0x00000000)
#define ADC1_ADCSPC_R_PHASE_22_5       (0x00000001)
#define ADC1_ADCSPC_R_PHASE_45         (0x00000002)
#define ADC1_ADCSPC_R_PHASE_67_5       (0x00000003)
#define ADC1_ADCSPC_R_PHASE_90         (0x00000004)
#define ADC1_ADCSPC_R_PHASE_112_5      (0x00000005)
#define ADC1_ADCSPC_R_PHASE_135        (0x00000006)
#define ADC1_ADCSPC_R_PHASE_157_5      (0x00000007)
#define ADC1_ADCSPC_R_PHASE_180        (0x00000008)
#define ADC1_ADCSPC_R_PHASE_202_5      (0x00000009)
#define ADC1_ADCSPC_R_PHASE_225        (0x0000000A)
#define ADC1_ADCSPC_R_PHASE_247_5      (0x0000000B)
#define ADC1_ADCSPC_R_PHASE_270        (0x0000000C)
#define ADC1_ADCSPC_R_PHASE_292_5      (0x0000000D)
#define ADC1_ADCSPC_R_PHASE_315        (0x0000000E)
#define ADC1_ADCSPC_R_PHASE_337_5      (0x0000000F)

#define ADC1_ADCSPC_PHASE_MASK       (0x0000000F)
#define ADC1_ADCSPC_PHASE_0          (0x00000000)
#define ADC1_ADCSPC_PHASE_22_5       (0x00000001)
#define ADC1_ADCSPC_PHASE_45         (0x00000002)
#define ADC1_ADCSPC_PHASE_67_5       (0x00000003)
#define ADC1_ADCSPC_PHASE_90         (0x00000004)
#define ADC1_ADCSPC_PHASE_112_5      (0x00000005)
#define ADC1_ADCSPC_PHASE_135        (0x00000006)
#define ADC1_ADCSPC_PHASE_157_5      (0x00000007)
#define ADC1_ADCSPC_PHASE_180        (0x00000008)
#define ADC1_ADCSPC_PHASE_202_5      (0x00000009)
#define ADC1_ADCSPC_PHASE_225        (0x0000000A)
#define ADC1_ADCSPC_PHASE_247_5      (0x0000000B)
#define ADC1_ADCSPC_PHASE_270        (0x0000000C)
#define ADC1_ADCSPC_PHASE_292_5      (0x0000000D)
#define ADC1_ADCSPC_PHASE_315        (0x0000000E)
#define ADC1_ADCSPC_PHASE_337_5      (0x0000000F)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.11 ADCPSSI ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCPSSI            (((ADCPSSI_TypeDef*)(ADC1_BASE + ADC_ADCPSSI_OFFSET )))
#define ADC1_ADCPSSI_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCPSSI_OFFSET)))

//--------
#define ADC1_ADCPSSI_R_SS0_MASK       (0x00000001)
#define ADC1_ADCPSSI_R_SS0_BIT        (0)
#define ADC1_ADCPSSI_R_SS0_NA         (0x00000000)
#define ADC1_ADCPSSI_R_SS0_INIT       (0x00000001)

#define ADC1_ADCPSSI_SS0_MASK         (0x00000001)
#define ADC1_ADCPSSI_SS0_NA           (0x00000000)
#define ADC1_ADCPSSI_SS0_INIT         (0x00000001)
//--------

//--------
#define ADC1_ADCPSSI_R_SS1_MASK       (0x00000002)
#define ADC1_ADCPSSI_R_SS1_BIT        (1)
#define ADC1_ADCPSSI_R_SS1_NA         (0x00000000)
#define ADC1_ADCPSSI_R_SS1_INIT       (0x00000002)

#define ADC1_ADCPSSI_SS1_MASK         (0x00000001)
#define ADC1_ADCPSSI_SS1_NA           (0x00000000)
#define ADC1_ADCPSSI_SS1_INIT         (0x00000001)
//--------

//--------
#define ADC1_ADCPSSI_R_SS2_MASK       (0x00000004)
#define ADC1_ADCPSSI_R_SS2_BIT        (2)
#define ADC1_ADCPSSI_R_SS2_NA         (0x00000000)
#define ADC1_ADCPSSI_R_SS2_INIT       (0x00000004)

#define ADC1_ADCPSSI_SS2_MASK         (0x00000001)
#define ADC1_ADCPSSI_SS2_NA           (0x00000000)
#define ADC1_ADCPSSI_SS2_INIT         (0x00000001)
//--------

//--------
#define ADC1_ADCPSSI_R_SS3_MASK       (0x00000008)
#define ADC1_ADCPSSI_R_SS3_BIT        (3)
#define ADC1_ADCPSSI_R_SS3_NA         (0x00000000)
#define ADC1_ADCPSSI_R_SS3_INIT       (0x00000008)

#define ADC1_ADCPSSI_SS3_MASK         (0x00000001)
#define ADC1_ADCPSSI_SS3_NA           (0x00000000)
#define ADC1_ADCPSSI_SS3_INIT         (0x00000001)
//--------

//--------
#define ADC1_ADCPSSI_R_SYNCWAIT_MASK       (0x08000000)
#define ADC1_ADCPSSI_R_SYNCWAIT_BIT        (17)
#define ADC1_ADCPSSI_R_SYNCWAIT_DIS        (0x00000000)
#define ADC1_ADCPSSI_R_SYNCWAIT_EN         (0x08000000)

#define ADC1_ADCPSSI_SYNCWAIT_MASK         (0x00000001)
#define ADC1_ADCPSSI_SYNCWAIT_DIS          (0x00000000)
#define ADC1_ADCPSSI_SYNCWAIT_EN           (0x00000001)
//--------

//--------
#define ADC1_ADCPSSI_R_GSYNC_MASK       (0x80000000)
#define ADC1_ADCPSSI_R_GSYNC_BIT        (31)
#define ADC1_ADCPSSI_R_GSYNC_NA         (0x00000000)
#define ADC1_ADCPSSI_R_GSYNC_INIT       (0x80000000)

#define ADC1_ADCPSSI_GSYNC_MASK         (0x00000001)
#define ADC1_ADCPSSI_GSYNC_NA           (0x00000000)
#define ADC1_ADCPSSI_GSYNC_INIT         (0x00000001)
//--------

#define ADC1_ADCPSSI_SS0_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCPSSI_OFFSET)*32)+(0*4))))
#define ADC1_ADCPSSI_SS1_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCPSSI_OFFSET)*32)+(1*4))))
#define ADC1_ADCPSSI_SS2_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCPSSI_OFFSET)*32)+(2*4))))
#define ADC1_ADCPSSI_SS3_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCPSSI_OFFSET)*32)+(3*4))))
#define ADC1_ADCPSSI_SYNCWAIT_BB (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCPSSI_OFFSET)*32)+(27*4))))
#define ADC1_ADCPSSI_GSYNC_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCPSSI_OFFSET)*32)+(31*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.12 ADCSAC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSAC            (((ADCSAC_TypeDef*)(ADC1_BASE + ADC_ADCSAC_OFFSET )))
#define ADC1_ADCSAC_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSAC_OFFSET)))

//--------
#define ADC1_ADCSAC_R_AVG_MASK       (0x00000007)
#define ADC1_ADCSAC_R_AVG_BIT        (0)
#define ADC1_ADCSAC_R_AVG_1          (0x00000000)
#define ADC1_ADCSAC_R_AVG_2          (0x00000001)
#define ADC1_ADCSAC_R_AVG_4          (0x00000002)
#define ADC1_ADCSAC_R_AVG_8          (0x00000003)
#define ADC1_ADCSAC_R_AVG_16         (0x00000004)
#define ADC1_ADCSAC_R_AVG_32         (0x00000005)
#define ADC1_ADCSAC_R_AVG_64         (0x00000006)

#define ADC1_ADCSAC_AVG_MASK       (0x00000007)
#define ADC1_ADCSAC_AVG_1          (0x00000000)
#define ADC1_ADCSAC_AVG_2          (0x00000001)
#define ADC1_ADCSAC_AVG_4          (0x00000002)
#define ADC1_ADCSAC_AVG_8          (0x00000003)
#define ADC1_ADCSAC_AVG_16         (0x00000004)
#define ADC1_ADCSAC_AVG_32         (0x00000005)
#define ADC1_ADCSAC_AVG_64         (0x00000006)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.13 ADCDCISC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCISC            (((ADCDCISC_TypeDef*)(ADC1_BASE + ADC_ADCDCISC_OFFSET )))
#define ADC1_ADCDCISC_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCISC_OFFSET)))

//--------
#define ADC1_ADCDCISC_R_ACINT0_MASK       (0x00000001)
#define ADC1_ADCDCISC_R_ACINT0_BIT        (0)
#define ADC1_ADCDCISC_R_ACINT0_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_R_ACINT0_OCCUR      (0x00000001)
#define ADC1_ADCDCISC_R_ACINT0_CLEAR      (0x00000001)

#define ADC1_ADCDCISC_ACINT0_MASK       (0x00000001)
#define ADC1_ADCDCISC_ACINT0_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_ACINT0_OCCUR      (0x00000001)
#define ADC1_ADCDCISC_ACINT0_CLEAR      (0x00000001)
//--------

//--------
#define ADC1_ADCDCISC_R_ACINT1_MASK       (0x00000002)
#define ADC1_ADCDCISC_R_ACINT1_BIT        (1)
#define ADC1_ADCDCISC_R_ACINT1_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_R_ACINT1_OCCUR      (0x00000002)
#define ADC1_ADCDCISC_R_ACINT1_CLEAR      (0x00000002)

#define ADC1_ADCDCISC_ACINT1_MASK       (0x00000001)
#define ADC1_ADCDCISC_ACINT1_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_ACINT1_OCCUR      (0x00000001)
#define ADC1_ADCDCISC_ACINT1_CLEAR      (0x00000001)
//--------

//--------
#define ADC1_ADCDCISC_R_ACINT2_MASK       (0x00000004)
#define ADC1_ADCDCISC_R_ACINT2_BIT        (2)
#define ADC1_ADCDCISC_R_ACINT2_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_R_ACINT2_OCCUR      (0x00000004)
#define ADC1_ADCDCISC_R_ACINT2_CLEAR      (0x00000004)

#define ADC1_ADCDCISC_ACINT2_MASK       (0x00000001)
#define ADC1_ADCDCISC_ACINT2_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_ACINT2_OCCUR      (0x00000001)
#define ADC1_ADCDCISC_ACINT2_CLEAR      (0x00000001)
//--------

//--------
#define ADC1_ADCDCISC_R_ACINT3_MASK       (0x00000008)
#define ADC1_ADCDCISC_R_ACINT3_BIT        (3)
#define ADC1_ADCDCISC_R_ACINT3_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_R_ACINT3_OCCUR      (0x00000008)
#define ADC1_ADCDCISC_R_ACINT3_CLEAR      (0x00000008)

#define ADC1_ADCDCISC_ACINT3_MASK       (0x00000001)
#define ADC1_ADCDCISC_ACINT3_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_ACINT3_OCCUR      (0x00000001)
#define ADC1_ADCDCISC_ACINT3_CLEAR      (0x00000001)
//--------

//--------
#define ADC1_ADCDCISC_R_ACINT4_MASK       (0x00000010)
#define ADC1_ADCDCISC_R_ACINT4_BIT        (4)
#define ADC1_ADCDCISC_R_ACINT4_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_R_ACINT4_OCCUR      (0x00000010)
#define ADC1_ADCDCISC_R_ACINT4_CLEAR      (0x00000010)

#define ADC1_ADCDCISC_ACINT4_MASK       (0x00000001)
#define ADC1_ADCDCISC_ACINT4_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_ACINT4_OCCUR      (0x00000001)
#define ADC1_ADCDCISC_ACINT4_CLEAR      (0x00000001)
//--------

//--------
#define ADC1_ADCDCISC_R_ACINT5_MASK       (0x00000020)
#define ADC1_ADCDCISC_R_ACINT5_BIT        (5)
#define ADC1_ADCDCISC_R_ACINT5_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_R_ACINT5_OCCUR      (0x00000020)
#define ADC1_ADCDCISC_R_ACINT5_CLEAR      (0x00000020)

#define ADC1_ADCDCISC_ACINT5_MASK       (0x00000001)
#define ADC1_ADCDCISC_ACINT5_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_ACINT5_OCCUR      (0x00000001)
#define ADC1_ADCDCISC_ACINT5_CLEAR      (0x00000001)
//--------

//--------
#define ADC1_ADCDCISC_R_ACINT6_MASK       (0x00000040)
#define ADC1_ADCDCISC_R_ACINT6_BIT        (6)
#define ADC1_ADCDCISC_R_ACINT6_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_R_ACINT6_OCCUR      (0x00000040)
#define ADC1_ADCDCISC_R_ACINT6_CLEAR      (0x00000040)

#define ADC1_ADCDCISC_ACINT6_MASK       (0x00000001)
#define ADC1_ADCDCISC_ACINT6_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_ACINT6_OCCUR      (0x00000001)
#define ADC1_ADCDCISC_ACINT6_CLEAR      (0x00000001)
//--------

//--------
#define ADC1_ADCDCISC_R_ACINT7_MASK       (0x00000080)
#define ADC1_ADCDCISC_R_ACINT7_BIT        (7)
#define ADC1_ADCDCISC_R_ACINT7_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_R_ACINT7_OCCUR      (0x00000080)
#define ADC1_ADCDCISC_R_ACINT7_CLEAR      (0x00000080)

#define ADC1_ADCDCISC_ACINT7_MASK       (0x00000001)
#define ADC1_ADCDCISC_ACINT7_NOOCCUR    (0x00000000)
#define ADC1_ADCDCISC_ACINT7_OCCUR      (0x00000001)
#define ADC1_ADCDCISC_ACINT7_CLEAR      (0x00000001)
//--------

#define ADC1_ADCDCISC_DCINT0_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(0*4))))
#define ADC1_ADCDCISC_DCINT1_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(1*4))))
#define ADC1_ADCDCISC_DCINT2_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(2*4))))
#define ADC1_ADCDCISC_DCINT3_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(3*4))))
#define ADC1_ADCDCISC_DCINT4_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(4*4))))
#define ADC1_ADCDCISC_DCINT5_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(5*4))))
#define ADC1_ADCDCISC_DCINT6_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(6*4))))
#define ADC1_ADCDCISC_DCINT7_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCISC_OFFSET)*32)+(7*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.14 ADCCTL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCCTL            (((ADCCTL_TypeDef*)(ADC1_BASE + ADC_ADCCTL_OFFSET )))
#define ADC1_ADCCTL_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCCTL_OFFSET)))

//--------
#define ADC1_ADCCTL_R_VREF_MASK       (0x00000001)
#define ADC1_ADCCTL_R_VREF_BIT        (0)

#define ADC1_ADCCTL_VREF_MASK         (0x00000001)
//--------

//--------
#define ADC1_ADCCTL_R_DITHER_MASK       (0x00000040)
#define ADC1_ADCCTL_R_DITHER_BIT        (6)
#define ADC1_ADCCTL_R_DITHER_DIS        (0x00000000)
#define ADC1_ADCCTL_R_DITHER_EN         (0x00000040)

#define ADC1_ADCCTL_DITHER_MASK         (0x00000001)
#define ADC1_ADCCTL_DITHER_DIS          (0x00000000)
#define ADC1_ADCCTL_DITHER_EN           (0x00000001)
//--------

#define ADC1_ADCCTL_VREF_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCCTL_OFFSET)*32)+(0*4))))
#define ADC1_ADCCTL_DITHER_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCCTL_OFFSET)*32)+(6*4))))

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.15 ADCSSMUX0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSMUX0            (((ADCSSMUX0_TypeDef*)(ADC1_BASE + ADC_ADCSSMUX0_OFFSET )))
#define ADC1_ADCSSMUX0_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSMUX0_OFFSET)))

//--------
#define ADC1_ADCSSMUX0_R_MUX0_MASK       (0x0000000F)
#define ADC1_ADCSSMUX0_R_MUX0_BIT        (0)
#define ADC1_ADCSSMUX0_R_MUX0_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_R_MUX0_AIN1       (0x00000001)
#define ADC1_ADCSSMUX0_R_MUX0_AIN2       (0x00000002)
#define ADC1_ADCSSMUX0_R_MUX0_AIN3       (0x00000003)
#define ADC1_ADCSSMUX0_R_MUX0_AIN4       (0x00000004)
#define ADC1_ADCSSMUX0_R_MUX0_AIN5       (0x00000005)
#define ADC1_ADCSSMUX0_R_MUX0_AIN6       (0x00000006)
#define ADC1_ADCSSMUX0_R_MUX0_AIN7       (0x00000007)
#define ADC1_ADCSSMUX0_R_MUX0_AIN8       (0x00000008)
#define ADC1_ADCSSMUX0_R_MUX0_AIN9       (0x00000009)
#define ADC1_ADCSSMUX0_R_MUX0_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX0_R_MUX0_AIN11      (0x0000000B)

#define ADC1_ADCSSMUX0_MUX0_MASK       (0x0000000F)
#define ADC1_ADCSSMUX0_MUX0_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_MUX0_AIN1       (0x00000001)
#define ADC1_ADCSSMUX0_MUX0_AIN2       (0x00000002)
#define ADC1_ADCSSMUX0_MUX0_AIN3       (0x00000003)
#define ADC1_ADCSSMUX0_MUX0_AIN4       (0x00000004)
#define ADC1_ADCSSMUX0_MUX0_AIN5       (0x00000005)
#define ADC1_ADCSSMUX0_MUX0_AIN6       (0x00000006)
#define ADC1_ADCSSMUX0_MUX0_AIN7       (0x00000007)
#define ADC1_ADCSSMUX0_MUX0_AIN8       (0x00000008)
#define ADC1_ADCSSMUX0_MUX0_AIN9       (0x00000009)
#define ADC1_ADCSSMUX0_MUX0_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX0_MUX0_AIN11      (0x0000000B)
//--------

//--------
#define ADC1_ADCSSMUX0_R_MUX1_MASK       (0x000000F0)
#define ADC1_ADCSSMUX0_R_MUX1_BIT        (4)
#define ADC1_ADCSSMUX0_R_MUX1_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_R_MUX1_AIN1       (0x00000010)
#define ADC1_ADCSSMUX0_R_MUX1_AIN2       (0x00000020)
#define ADC1_ADCSSMUX0_R_MUX1_AIN3       (0x00000030)
#define ADC1_ADCSSMUX0_R_MUX1_AIN4       (0x00000040)
#define ADC1_ADCSSMUX0_R_MUX1_AIN5       (0x00000050)
#define ADC1_ADCSSMUX0_R_MUX1_AIN6       (0x00000060)
#define ADC1_ADCSSMUX0_R_MUX1_AIN7       (0x00000070)
#define ADC1_ADCSSMUX0_R_MUX1_AIN8       (0x00000080)
#define ADC1_ADCSSMUX0_R_MUX1_AIN9       (0x00000090)
#define ADC1_ADCSSMUX0_R_MUX1_AIN10      (0x000000A0)
#define ADC1_ADCSSMUX0_R_MUX1_AIN11      (0x000000B0)

#define ADC1_ADCSSMUX0_MUX1_MASK       (0x0000000F)
#define ADC1_ADCSSMUX0_MUX1_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_MUX1_AIN1       (0x00000001)
#define ADC1_ADCSSMUX0_MUX1_AIN2       (0x00000002)
#define ADC1_ADCSSMUX0_MUX1_AIN3       (0x00000003)
#define ADC1_ADCSSMUX0_MUX1_AIN4       (0x00000004)
#define ADC1_ADCSSMUX0_MUX1_AIN5       (0x00000005)
#define ADC1_ADCSSMUX0_MUX1_AIN6       (0x00000006)
#define ADC1_ADCSSMUX0_MUX1_AIN7       (0x00000007)
#define ADC1_ADCSSMUX0_MUX1_AIN8       (0x00000008)
#define ADC1_ADCSSMUX0_MUX1_AIN9       (0x00000009)
#define ADC1_ADCSSMUX0_MUX1_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX0_MUX1_AIN11      (0x0000000B)
//--------

//--------
#define ADC1_ADCSSMUX0_R_MUX2_MASK       (0x00000F00)
#define ADC1_ADCSSMUX0_R_MUX2_BIT        (8)
#define ADC1_ADCSSMUX0_R_MUX2_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_R_MUX2_AIN1       (0x00000100)
#define ADC1_ADCSSMUX0_R_MUX2_AIN2       (0x00000200)
#define ADC1_ADCSSMUX0_R_MUX2_AIN3       (0x00000300)
#define ADC1_ADCSSMUX0_R_MUX2_AIN4       (0x00000400)
#define ADC1_ADCSSMUX0_R_MUX2_AIN5       (0x00000500)
#define ADC1_ADCSSMUX0_R_MUX2_AIN6       (0x00000600)
#define ADC1_ADCSSMUX0_R_MUX2_AIN7       (0x00000700)
#define ADC1_ADCSSMUX0_R_MUX2_AIN8       (0x00000800)
#define ADC1_ADCSSMUX0_R_MUX2_AIN9       (0x00000900)
#define ADC1_ADCSSMUX0_R_MUX2_AIN10      (0x00000A00)
#define ADC1_ADCSSMUX0_R_MUX2_AIN11      (0x00000B00)

#define ADC1_ADCSSMUX0_MUX2_MASK       (0x0000000F)
#define ADC1_ADCSSMUX0_MUX2_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_MUX2_AIN1       (0x00000001)
#define ADC1_ADCSSMUX0_MUX2_AIN2       (0x00000002)
#define ADC1_ADCSSMUX0_MUX2_AIN3       (0x00000003)
#define ADC1_ADCSSMUX0_MUX2_AIN4       (0x00000004)
#define ADC1_ADCSSMUX0_MUX2_AIN5       (0x00000005)
#define ADC1_ADCSSMUX0_MUX2_AIN6       (0x00000006)
#define ADC1_ADCSSMUX0_MUX2_AIN7       (0x00000007)
#define ADC1_ADCSSMUX0_MUX2_AIN8       (0x00000008)
#define ADC1_ADCSSMUX0_MUX2_AIN9       (0x00000009)
#define ADC1_ADCSSMUX0_MUX2_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX0_MUX2_AIN11      (0x0000000B)
//--------

//--------
#define ADC1_ADCSSMUX0_R_MUX3_MASK       (0x0000F000)
#define ADC1_ADCSSMUX0_R_MUX3_BIT        (12)
#define ADC1_ADCSSMUX0_R_MUX3_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_R_MUX3_AIN1       (0x00001000)
#define ADC1_ADCSSMUX0_R_MUX3_AIN2       (0x00002000)
#define ADC1_ADCSSMUX0_R_MUX3_AIN3       (0x00003000)
#define ADC1_ADCSSMUX0_R_MUX3_AIN4       (0x00004000)
#define ADC1_ADCSSMUX0_R_MUX3_AIN5       (0x00005000)
#define ADC1_ADCSSMUX0_R_MUX3_AIN6       (0x00006000)
#define ADC1_ADCSSMUX0_R_MUX3_AIN7       (0x00007000)
#define ADC1_ADCSSMUX0_R_MUX3_AIN8       (0x00008000)
#define ADC1_ADCSSMUX0_R_MUX3_AIN9       (0x00009000)
#define ADC1_ADCSSMUX0_R_MUX3_AIN10      (0x0000A000)
#define ADC1_ADCSSMUX0_R_MUX3_AIN11      (0x0000B000)

#define ADC1_ADCSSMUX0_MUX3_MASK       (0x0000000F)
#define ADC1_ADCSSMUX0_MUX3_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_MUX3_AIN1       (0x00000001)
#define ADC1_ADCSSMUX0_MUX3_AIN2       (0x00000002)
#define ADC1_ADCSSMUX0_MUX3_AIN3       (0x00000003)
#define ADC1_ADCSSMUX0_MUX3_AIN4       (0x00000004)
#define ADC1_ADCSSMUX0_MUX3_AIN5       (0x00000005)
#define ADC1_ADCSSMUX0_MUX3_AIN6       (0x00000006)
#define ADC1_ADCSSMUX0_MUX3_AIN7       (0x00000007)
#define ADC1_ADCSSMUX0_MUX3_AIN8       (0x00000008)
#define ADC1_ADCSSMUX0_MUX3_AIN9       (0x00000009)
#define ADC1_ADCSSMUX0_MUX3_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX0_MUX3_AIN11      (0x0000000B)
//--------

//--------
#define ADC1_ADCSSMUX0_R_MUX4_MASK       (0x000F0000)
#define ADC1_ADCSSMUX0_R_MUX4_BIT        (16)
#define ADC1_ADCSSMUX0_R_MUX4_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_R_MUX4_AIN1       (0x00010000)
#define ADC1_ADCSSMUX0_R_MUX4_AIN2       (0x00020000)
#define ADC1_ADCSSMUX0_R_MUX4_AIN3       (0x00030000)
#define ADC1_ADCSSMUX0_R_MUX4_AIN4       (0x00040000)
#define ADC1_ADCSSMUX0_R_MUX4_AIN5       (0x00050000)
#define ADC1_ADCSSMUX0_R_MUX4_AIN6       (0x00060000)
#define ADC1_ADCSSMUX0_R_MUX4_AIN7       (0x00070000)
#define ADC1_ADCSSMUX0_R_MUX4_AIN8       (0x00080000)
#define ADC1_ADCSSMUX0_R_MUX4_AIN9       (0x00090000)
#define ADC1_ADCSSMUX0_R_MUX4_AIN10      (0x000A0000)
#define ADC1_ADCSSMUX0_R_MUX4_AIN11      (0x000B0000)

#define ADC1_ADCSSMUX0_MUX4_MASK       (0x0000000F)
#define ADC1_ADCSSMUX0_MUX4_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_MUX4_AIN1       (0x00000001)
#define ADC1_ADCSSMUX0_MUX4_AIN2       (0x00000002)
#define ADC1_ADCSSMUX0_MUX4_AIN3       (0x00000003)
#define ADC1_ADCSSMUX0_MUX4_AIN4       (0x00000004)
#define ADC1_ADCSSMUX0_MUX4_AIN5       (0x00000005)
#define ADC1_ADCSSMUX0_MUX4_AIN6       (0x00000006)
#define ADC1_ADCSSMUX0_MUX4_AIN7       (0x00000007)
#define ADC1_ADCSSMUX0_MUX4_AIN8       (0x00000008)
#define ADC1_ADCSSMUX0_MUX4_AIN9       (0x00000009)
#define ADC1_ADCSSMUX0_MUX4_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX0_MUX4_AIN11      (0x0000000B)
//--------

//--------
#define ADC1_ADCSSMUX0_R_MUX5_MASK       (0x00F00000)
#define ADC1_ADCSSMUX0_R_MUX5_BIT        (20)
#define ADC1_ADCSSMUX0_R_MUX5_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_R_MUX5_AIN1       (0x00100000)
#define ADC1_ADCSSMUX0_R_MUX5_AIN2       (0x00200000)
#define ADC1_ADCSSMUX0_R_MUX5_AIN3       (0x00300000)
#define ADC1_ADCSSMUX0_R_MUX5_AIN4       (0x00400000)
#define ADC1_ADCSSMUX0_R_MUX5_AIN5       (0x00500000)
#define ADC1_ADCSSMUX0_R_MUX5_AIN6       (0x00600000)
#define ADC1_ADCSSMUX0_R_MUX5_AIN7       (0x00700000)
#define ADC1_ADCSSMUX0_R_MUX5_AIN8       (0x00800000)
#define ADC1_ADCSSMUX0_R_MUX5_AIN9       (0x00900000)
#define ADC1_ADCSSMUX0_R_MUX5_AIN10      (0x00A00000)
#define ADC1_ADCSSMUX0_R_MUX5_AIN11      (0x00B00000)

#define ADC1_ADCSSMUX0_MUX5_MASK       (0x0000000F)
#define ADC1_ADCSSMUX0_MUX5_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_MUX5_AIN1       (0x00000001)
#define ADC1_ADCSSMUX0_MUX5_AIN2       (0x00000002)
#define ADC1_ADCSSMUX0_MUX5_AIN3       (0x00000003)
#define ADC1_ADCSSMUX0_MUX5_AIN4       (0x00000004)
#define ADC1_ADCSSMUX0_MUX5_AIN5       (0x00000005)
#define ADC1_ADCSSMUX0_MUX5_AIN6       (0x00000006)
#define ADC1_ADCSSMUX0_MUX5_AIN7       (0x00000007)
#define ADC1_ADCSSMUX0_MUX5_AIN8       (0x00000008)
#define ADC1_ADCSSMUX0_MUX5_AIN9       (0x00000009)
#define ADC1_ADCSSMUX0_MUX5_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX0_MUX5_AIN11      (0x0000000B)
//--------

//--------
#define ADC1_ADCSSMUX0_R_MUX6_MASK       (0x0F000000)
#define ADC1_ADCSSMUX0_R_MUX6_BIT        (24)
#define ADC1_ADCSSMUX0_R_MUX6_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_R_MUX6_AIN1       (0x01000000)
#define ADC1_ADCSSMUX0_R_MUX6_AIN2       (0x02000000)
#define ADC1_ADCSSMUX0_R_MUX6_AIN3       (0x03000000)
#define ADC1_ADCSSMUX0_R_MUX6_AIN4       (0x04000000)
#define ADC1_ADCSSMUX0_R_MUX6_AIN5       (0x05000000)
#define ADC1_ADCSSMUX0_R_MUX6_AIN6       (0x06000000)
#define ADC1_ADCSSMUX0_R_MUX6_AIN7       (0x07000000)
#define ADC1_ADCSSMUX0_R_MUX6_AIN8       (0x08000000)
#define ADC1_ADCSSMUX0_R_MUX6_AIN9       (0x09000000)
#define ADC1_ADCSSMUX0_R_MUX6_AIN10      (0x0A000000)
#define ADC1_ADCSSMUX0_R_MUX6_AIN11      (0x0B000000)

#define ADC1_ADCSSMUX0_MUX6_MASK       (0x0000000F)
#define ADC1_ADCSSMUX0_MUX6_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_MUX6_AIN1       (0x00000001)
#define ADC1_ADCSSMUX0_MUX6_AIN2       (0x00000002)
#define ADC1_ADCSSMUX0_MUX6_AIN3       (0x00000003)
#define ADC1_ADCSSMUX0_MUX6_AIN4       (0x00000004)
#define ADC1_ADCSSMUX0_MUX6_AIN5       (0x00000005)
#define ADC1_ADCSSMUX0_MUX6_AIN6       (0x00000006)
#define ADC1_ADCSSMUX0_MUX6_AIN7       (0x00000007)
#define ADC1_ADCSSMUX0_MUX6_AIN8       (0x00000008)
#define ADC1_ADCSSMUX0_MUX6_AIN9       (0x00000009)
#define ADC1_ADCSSMUX0_MUX6_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX0_MUX6_AIN11      (0x0000000B)
//--------

//--------
#define ADC1_ADCSSMUX0_R_MUX7_MASK       (0xF0000000)
#define ADC1_ADCSSMUX0_R_MUX7_BIT        (28)
#define ADC1_ADCSSMUX0_R_MUX7_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_R_MUX7_AIN1       (0x10000000)
#define ADC1_ADCSSMUX0_R_MUX7_AIN2       (0x20000000)
#define ADC1_ADCSSMUX0_R_MUX7_AIN3       (0x30000000)
#define ADC1_ADCSSMUX0_R_MUX7_AIN4       (0x40000000)
#define ADC1_ADCSSMUX0_R_MUX7_AIN5       (0x50000000)
#define ADC1_ADCSSMUX0_R_MUX7_AIN6       (0x60000000)
#define ADC1_ADCSSMUX0_R_MUX7_AIN7       (0x70000000)
#define ADC1_ADCSSMUX0_R_MUX7_AIN8       (0x80000000)
#define ADC1_ADCSSMUX0_R_MUX7_AIN9       (0x90000000)
#define ADC1_ADCSSMUX0_R_MUX7_AIN10      (0xA0000000)
#define ADC1_ADCSSMUX0_R_MUX7_AIN11      (0xB0000000)

#define ADC1_ADCSSMUX0_MUX7_MASK       (0x0000000F)
#define ADC1_ADCSSMUX0_MUX7_AIN0       (0x00000000)
#define ADC1_ADCSSMUX0_MUX7_AIN1       (0x00000001)
#define ADC1_ADCSSMUX0_MUX7_AIN2       (0x00000002)
#define ADC1_ADCSSMUX0_MUX7_AIN3       (0x00000003)
#define ADC1_ADCSSMUX0_MUX7_AIN4       (0x00000004)
#define ADC1_ADCSSMUX0_MUX7_AIN5       (0x00000005)
#define ADC1_ADCSSMUX0_MUX7_AIN6       (0x00000006)
#define ADC1_ADCSSMUX0_MUX7_AIN7       (0x00000007)
#define ADC1_ADCSSMUX0_MUX7_AIN8       (0x00000008)
#define ADC1_ADCSSMUX0_MUX7_AIN9       (0x00000009)
#define ADC1_ADCSSMUX0_MUX7_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX0_MUX7_AIN11      (0x0000000B)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.16 ADCSSCTL0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSCTL0            (((ADCSSCTL0_TypeDef*)(ADC1_BASE + ADC_ADCSSCTL0_OFFSET )))
#define ADC1_ADCSSCTL0_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSCTL0_OFFSET)))

//--------
#define ADC1_ADCSSCTL0_R_D0_MASK       (0x00000001)
#define ADC1_ADCSSCTL0_R_D0_BIT        (0)
#define ADC1_ADCSSCTL0_R_D0_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL0_R_D0_DIFF       (0x00000001)

#define ADC1_ADCSSCTL0_D0_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_D0_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL0_D0_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_END0_MASK       (0x00000002)
#define ADC1_ADCSSCTL0_R_END0_BIT        (1)
#define ADC1_ADCSSCTL0_R_END0_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL0_R_END0_END        (0x00000002)

#define ADC1_ADCSSCTL0_END0_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_END0_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL0_END0_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_IE0_MASK       (0x00000004)
#define ADC1_ADCSSCTL0_R_IE0_BIT        (2)
#define ADC1_ADCSSCTL0_R_IE0_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_R_IE0_EN         (0x00000004)

#define ADC1_ADCSSCTL0_IE0_MASK       (0x00000001)
#define ADC1_ADCSSCTL0_IE0_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_IE0_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_TS0_MASK         (0x00000008)
#define ADC1_ADCSSCTL0_R_TS0_BIT          (3)
#define ADC1_ADCSSCTL0_R_TS0_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_R_TS0_TEMP         (0x00000008)

#define ADC1_ADCSSCTL0_TS0_MASK         (0x00000001)
#define ADC1_ADCSSCTL0_TS0_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_TS0_TEMP         (0x00000001)
//--------




//--------
#define ADC1_ADCSSCTL0_R_D1_MASK       (0x00000010)
#define ADC1_ADCSSCTL0_R_D1_BIT        (4)
#define ADC1_ADCSSCTL0_R_D1_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL0_R_D1_DIFF       (0x00000010)

#define ADC1_ADCSSCTL0_D1_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_D1_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL0_D1_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_END1_MASK       (0x00000020)
#define ADC1_ADCSSCTL0_R_END1_BIT        (5)
#define ADC1_ADCSSCTL0_R_END1_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL0_R_END1_END        (0x00000020)

#define ADC1_ADCSSCTL0_END1_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_END1_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL0_END1_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_IE1_MASK       (0x00000040)
#define ADC1_ADCSSCTL0_R_IE1_BIT        (6)
#define ADC1_ADCSSCTL0_R_IE1_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_R_IE1_EN         (0x00000040)

#define ADC1_ADCSSCTL0_IE1_MASK       (0x00000001)
#define ADC1_ADCSSCTL0_IE1_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_IE1_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_TS1_MASK         (0x00000080)
#define ADC1_ADCSSCTL0_R_TS1_BIT          (7)
#define ADC1_ADCSSCTL0_R_TS1_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_R_TS1_TEMP         (0x00000080)

#define ADC1_ADCSSCTL0_TS1_MASK         (0x00000001)
#define ADC1_ADCSSCTL0_TS1_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_TS1_TEMP         (0x00000001)
//--------





//--------
#define ADC1_ADCSSCTL0_R_D2_MASK       (0x00000100)
#define ADC1_ADCSSCTL0_R_D2_BIT        (8)
#define ADC1_ADCSSCTL0_R_D2_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL0_R_D2_DIFF       (0x00000100)

#define ADC1_ADCSSCTL0_D2_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_D2_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL0_D2_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_END2_MASK       (0x00000200)
#define ADC1_ADCSSCTL0_R_END2_BIT        (9)
#define ADC1_ADCSSCTL0_R_END2_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL0_R_END2_END        (0x00000200)

#define ADC1_ADCSSCTL0_END2_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_END2_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL0_END2_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_IE2_MASK       (0x00000400)
#define ADC1_ADCSSCTL0_R_IE2_BIT        (10)
#define ADC1_ADCSSCTL0_R_IE2_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_R_IE2_EN         (0x00000400)

#define ADC1_ADCSSCTL0_IE2_MASK       (0x00000001)
#define ADC1_ADCSSCTL0_IE2_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_IE2_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_TS2_MASK         (0x00000800)
#define ADC1_ADCSSCTL0_R_TS2_BIT          (11)
#define ADC1_ADCSSCTL0_R_TS2_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_R_TS2_TEMP         (0x00000800)

#define ADC1_ADCSSCTL0_TS2_MASK         (0x00000001)
#define ADC1_ADCSSCTL0_TS2_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_TS2_TEMP         (0x00000001)
//--------



//--------
#define ADC1_ADCSSCTL0_R_D3_MASK       (0x00001000)
#define ADC1_ADCSSCTL0_R_D3_BIT        (12)
#define ADC1_ADCSSCTL0_R_D3_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL0_R_D3_DIFF       (0x00001000)

#define ADC1_ADCSSCTL0_D3_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_D3_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL0_D3_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_END3_MASK       (0x00002000)
#define ADC1_ADCSSCTL0_R_END3_BIT        (13)
#define ADC1_ADCSSCTL0_R_END3_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL0_R_END3_END        (0x00002000)

#define ADC1_ADCSSCTL0_END3_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_END3_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL0_END3_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_IE3_MASK       (0x00004000)
#define ADC1_ADCSSCTL0_R_IE3_BIT        (14)
#define ADC1_ADCSSCTL0_R_IE3_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_R_IE3_EN         (0x00004000)

#define ADC1_ADCSSCTL0_IE3_MASK       (0x00000001)
#define ADC1_ADCSSCTL0_IE3_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_IE3_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_TS3_MASK         (0x00008000)
#define ADC1_ADCSSCTL0_R_TS3_BIT          (15)
#define ADC1_ADCSSCTL0_R_TS3_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_R_TS3_TEMP         (0x00008000)

#define ADC1_ADCSSCTL0_TS3_MASK         (0x00000001)
#define ADC1_ADCSSCTL0_TS3_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_TS3_TEMP         (0x00000001)
//--------


//--------
#define ADC1_ADCSSCTL0_R_D4_MASK       (0x00010000)
#define ADC1_ADCSSCTL0_R_D4_BIT        (16)
#define ADC1_ADCSSCTL0_R_D4_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL0_R_D4_DIFF       (0x00010000)

#define ADC1_ADCSSCTL0_D4_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_D4_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL0_D4_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_END4_MASK       (0x00020000)
#define ADC1_ADCSSCTL0_R_END4_BIT        (17)
#define ADC1_ADCSSCTL0_R_END4_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL0_R_END4_END        (0x00020000)

#define ADC1_ADCSSCTL0_END4_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_END4_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL0_END4_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_IE4_MASK       (0x00040000)
#define ADC1_ADCSSCTL0_R_IE4_BIT        (18)
#define ADC1_ADCSSCTL0_R_IE4_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_R_IE4_EN         (0x00040000)

#define ADC1_ADCSSCTL0_IE4_MASK       (0x00000001)
#define ADC1_ADCSSCTL0_IE4_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_IE4_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_TS4_MASK         (0x00080000)
#define ADC1_ADCSSCTL0_R_TS4_BIT          (19)
#define ADC1_ADCSSCTL0_R_TS4_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_R_TS4_TEMP         (0x00080000)

#define ADC1_ADCSSCTL0_TS4_MASK         (0x00000001)
#define ADC1_ADCSSCTL0_TS4_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_TS4_TEMP         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_D5_MASK       (0x00100000)
#define ADC1_ADCSSCTL0_R_D5_BIT        (20)
#define ADC1_ADCSSCTL0_R_D5_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL0_R_D5_DIFF       (0x00100000)

#define ADC1_ADCSSCTL0_D5_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_D5_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL0_D5_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_END5_MASK       (0x00200000)
#define ADC1_ADCSSCTL0_R_END5_BIT        (21)
#define ADC1_ADCSSCTL0_R_END5_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL0_R_END5_END        (0x00200000)

#define ADC1_ADCSSCTL0_END5_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_END5_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL0_END5_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_IE5_MASK       (0x00400000)
#define ADC1_ADCSSCTL0_R_IE5_BIT        (22)
#define ADC1_ADCSSCTL0_R_IE5_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_R_IE5_EN         (0x00400000)

#define ADC1_ADCSSCTL0_IE5_MASK       (0x00000001)
#define ADC1_ADCSSCTL0_IE5_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_IE5_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_TS5_MASK         (0x00800000)
#define ADC1_ADCSSCTL0_R_TS5_BIT          (23)
#define ADC1_ADCSSCTL0_R_TS5_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_R_TS5_TEMP         (0x00800000)

#define ADC1_ADCSSCTL0_TS5_MASK         (0x00000001)
#define ADC1_ADCSSCTL0_TS5_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_TS5_TEMP         (0x00000001)
//--------


//--------
#define ADC1_ADCSSCTL0_R_D6_MASK       (0x01000000)
#define ADC1_ADCSSCTL0_R_D6_BIT        (24)
#define ADC1_ADCSSCTL0_R_D6_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL0_R_D6_DIFF       (0x01000000)

#define ADC1_ADCSSCTL0_D6_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_D6_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL0_D6_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_END6_MASK       (0x02000000)
#define ADC1_ADCSSCTL0_R_END6_BIT        (25)
#define ADC1_ADCSSCTL0_R_END6_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL0_R_END6_END        (0x02000000)

#define ADC1_ADCSSCTL0_END6_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_END6_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL0_END6_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_IE6_MASK       (0x04000000)
#define ADC1_ADCSSCTL0_R_IE6_BIT        (26)
#define ADC1_ADCSSCTL0_R_IE6_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_R_IE6_EN         (0x04000000)

#define ADC1_ADCSSCTL0_IE6_MASK       (0x00000001)
#define ADC1_ADCSSCTL0_IE6_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_IE6_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_TS6_MASK         (0x0800000)
#define ADC1_ADCSSCTL0_R_TS6_BIT          (27)
#define ADC1_ADCSSCTL0_R_TS6_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_R_TS6_TEMP         (0x08000000)

#define ADC1_ADCSSCTL0_TS6_MASK         (0x00000001)
#define ADC1_ADCSSCTL0_TS6_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_TS6_TEMP         (0x00000001)
//--------


//--------
#define ADC1_ADCSSCTL0_R_D7_MASK       (0x10000000)
#define ADC1_ADCSSCTL0_R_D7_BIT        (28)
#define ADC1_ADCSSCTL0_R_D7_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL0_R_D7_DIFF       (0x10000000)

#define ADC1_ADCSSCTL0_D7_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_D7_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL0_D7_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_END7_MASK       (0x20000000)
#define ADC1_ADCSSCTL0_R_END7_BIT        (29)
#define ADC1_ADCSSCTL0_R_END7_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL0_R_END7_END        (0x20000000)

#define ADC1_ADCSSCTL0_END7_MASK        (0x00000001)
#define ADC1_ADCSSCTL0_END7_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL0_END7_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_IE7_MASK       (0x40000000)
#define ADC1_ADCSSCTL0_R_IE7_BIT        (30)
#define ADC1_ADCSSCTL0_R_IE7_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_R_IE7_EN         (0x40000000)

#define ADC1_ADCSSCTL0_IE7_MASK       (0x00000001)
#define ADC1_ADCSSCTL0_IE7_DIS        (0x00000000)
#define ADC1_ADCSSCTL0_IE7_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL0_R_TS7_MASK         (0x8000000)
#define ADC1_ADCSSCTL0_R_TS7_BIT          (31)
#define ADC1_ADCSSCTL0_R_TS7_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_R_TS7_TEMP         (0x80000000)

#define ADC1_ADCSSCTL0_TS7_MASK         (0x00000001)
#define ADC1_ADCSSCTL0_TS7_INPUT        (0x00000000)
#define ADC1_ADCSSCTL0_TS7_TEMP         (0x00000001)
//--------


#define ADC1_ADCSSCTL0_D0_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(0*4))))
#define ADC1_ADCSSCTL0_END0_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(1*4))))
#define ADC1_ADCSSCTL0_IE0_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(2*4))))
#define ADC1_ADCSSCTL0_TS0_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(3*4))))
#define ADC1_ADCSSCTL0_D1_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(4*4))))
#define ADC1_ADCSSCTL0_END1_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(5*4))))
#define ADC1_ADCSSCTL0_IE1_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(6*4))))
#define ADC1_ADCSSCTL0_TS1_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(7*4))))
#define ADC1_ADCSSCTL0_D2_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(8*4))))
#define ADC1_ADCSSCTL0_END2_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(9*4))))
#define ADC1_ADCSSCTL0_IE2_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(10*4))))
#define ADC1_ADCSSCTL0_TS2_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(11*4))))
#define ADC1_ADCSSCTL0_D3_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(12*4))))
#define ADC1_ADCSSCTL0_END3_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(13*4))))
#define ADC1_ADCSSCTL0_IE3_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(14*4))))
#define ADC1_ADCSSCTL0_TS3_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(15*4))))
#define ADC1_ADCSSCTL0_D4_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(16*4))))
#define ADC1_ADCSSCTL0_END4_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(17*4))))
#define ADC1_ADCSSCTL0_IE4_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(18*4))))
#define ADC1_ADCSSCTL0_TS4_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(19*4))))
#define ADC1_ADCSSCTL0_D5_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(20*4))))
#define ADC1_ADCSSCTL0_END5_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(21*4))))
#define ADC1_ADCSSCTL0_IE5_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(22*4))))
#define ADC1_ADCSSCTL0_TS5_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(23*4))))
#define ADC1_ADCSSCTL0_D6_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(24*4))))
#define ADC1_ADCSSCTL0_END6_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(25*4))))
#define ADC1_ADCSSCTL0_IE6_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(26*4))))
#define ADC1_ADCSSCTL0_TS6_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(27*4))))
#define ADC1_ADCSSCTL0_D7_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(28*4))))
#define ADC1_ADCSSCTL0_END7_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(29*4))))
#define ADC1_ADCSSCTL0_IE7_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(30*4))))
#define ADC1_ADCSSCTL0_TS7_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL0_OFFSET)*32)+(31*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.17 ADCSSFIFO0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSFIFO0            (((ADCSSFIFO0_TypeDef*)(ADC1_BASE + ADC_ADCSSFIFO0_OFFSET )))
#define ADC1_ADCSSFIFO0_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCSSFIFO0_OFFSET)))


//--------
#define ADC1_ADCSSFIFO0_R_DATA_MASK       (0x00000FFF)
#define ADC1_ADCSSFIFO0_R_DATA_BIT        (0)

#define ADC1_ADCSSFIFO0_DATA_MASK         (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.18 ADCSSFSTAT0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSFSTAT0            (((ADCSSFSTAT0_TypeDef*)(ADC1_BASE + ADC_ADCSSFSTAT0_OFFSET )))
#define ADC1_ADCSSFSTAT0_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSFSTAT0_OFFSET)))


//--------
#define ADC1_ADCSSFSTAT0_R_TPTR_MASK       (0x0000000F)
#define ADC1_ADCSSFSTAT0_R_TPTR_BIT        (0)
#define ADC1_ADCSSFSTAT0_R_TPTR_POS0       (0x00000000)
#define ADC1_ADCSSFSTAT0_R_TPTR_POS1       (0x00000001)
#define ADC1_ADCSSFSTAT0_R_TPTR_POS2       (0x00000002)
#define ADC1_ADCSSFSTAT0_R_TPTR_POS3       (0x00000003)
#define ADC1_ADCSSFSTAT0_R_TPTR_POS4       (0x00000004)
#define ADC1_ADCSSFSTAT0_R_TPTR_POS5       (0x00000005)
#define ADC1_ADCSSFSTAT0_R_TPTR_POS6       (0x00000006)
#define ADC1_ADCSSFSTAT0_R_TPTR_POS7       (0x00000007)

#define ADC1_ADCSSFSTAT0_TPTR_MASK       (0x0000000F)
#define ADC1_ADCSSFSTAT0_TPTR_POS0       (0x00000000)
#define ADC1_ADCSSFSTAT0_TPTR_POS1       (0x00000001)
#define ADC1_ADCSSFSTAT0_TPTR_POS2       (0x00000002)
#define ADC1_ADCSSFSTAT0_TPTR_POS3       (0x00000003)
#define ADC1_ADCSSFSTAT0_TPTR_POS4       (0x00000004)
#define ADC1_ADCSSFSTAT0_TPTR_POS5       (0x00000005)
#define ADC1_ADCSSFSTAT0_TPTR_POS6       (0x00000006)
#define ADC1_ADCSSFSTAT0_TPTR_POS7       (0x00000007)
//--------

//--------
#define ADC1_ADCSSFSTAT0_R_HPTR_MASK       (0x000000F0)
#define ADC1_ADCSSFSTAT0_R_HPTR_BIT        (4)
#define ADC1_ADCSSFSTAT0_R_HPTR_POS0       (0x00000000)
#define ADC1_ADCSSFSTAT0_R_HPTR_POS1       (0x00000010)
#define ADC1_ADCSSFSTAT0_R_HPTR_POS2       (0x00000020)
#define ADC1_ADCSSFSTAT0_R_HPTR_POS3       (0x00000030)
#define ADC1_ADCSSFSTAT0_R_HPTR_POS4       (0x00000040)
#define ADC1_ADCSSFSTAT0_R_HPTR_POS5       (0x00000050)
#define ADC1_ADCSSFSTAT0_R_HPTR_POS6       (0x00000060)
#define ADC1_ADCSSFSTAT0_R_HPTR_POS7       (0x00000070)

#define ADC1_ADCSSFSTAT0_HPTR_MASK       (0x0000000F)
#define ADC1_ADCSSFSTAT0_HPTR_POS0       (0x00000000)
#define ADC1_ADCSSFSTAT0_HPTR_POS1       (0x00000001)
#define ADC1_ADCSSFSTAT0_HPTR_POS2       (0x00000002)
#define ADC1_ADCSSFSTAT0_HPTR_POS3       (0x00000003)
#define ADC1_ADCSSFSTAT0_HPTR_POS4       (0x00000004)
#define ADC1_ADCSSFSTAT0_HPTR_POS5       (0x00000005)
#define ADC1_ADCSSFSTAT0_HPTR_POS6       (0x00000006)
#define ADC1_ADCSSFSTAT0_HPTR_POS7       (0x00000007)
//--------

//--------
#define ADC1_ADCSSFSTAT0_R_EMPTY_MASK       (0x00000100)
#define ADC1_ADCSSFSTAT0_R_EMPTY_BIT        (8)
#define ADC1_ADCSSFSTAT0_R_EMPTY_NOEMPTY    (0x00000000)
#define ADC1_ADCSSFSTAT0_R_EMPTY_EMPTY      (0x00000100)

#define ADC1_ADCSSFSTAT0_EMPTY_MASK        (0x00000001)
#define ADC1_ADCSSFSTAT0_EMPTY_NOEMPTY     (0x00000000)
#define ADC1_ADCSSFSTAT0_EMPTY_EMPTY       (0x00000001)
//--------

//--------
#define ADC1_ADCSSFSTAT0_R_FULL_MASK       (0x00000100)
#define ADC1_ADCSSFSTAT0_R_FULL_BIT        (8)
#define ADC1_ADCSSFSTAT0_R_FULL_NOFULL     (0x00000000)
#define ADC1_ADCSSFSTAT0_R_FULL_FULL       (0x00000100)

#define ADC1_ADCSSFSTAT0_FULL_MASK        (0x00000001)
#define ADC1_ADCSSFSTAT0_FULL_NOFULL      (0x00000000)
#define ADC1_ADCSSFSTAT0_FULL_FULL        (0x00000001)
//--------


#define ADC1_ADCSSFSTAT0_EMPTY_BB        (*((volatile const uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSFSTAT0_OFFSET)*32)+(8*4))))
#define ADC1_ADCSSFSTAT0_FULL_BB         (*((volatile const uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSFSTAT0_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.19 ADCSSOP0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSOP0            (((ADCSSOP0_TypeDef*)(ADC1_BASE + ADC_ADCSSOP0_OFFSET )))
#define ADC1_ADCSSOP0_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSOP0_OFFSET)))


//--------
#define ADC1_ADCSSOP0_R_S0DCOP_MASK       (0x00000001)
#define ADC1_ADCSSOP0_R_S0DCOP_BIT        (0)
#define ADC1_ADCSSOP0_R_S0DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP0_R_S0DCOP_DC         (0x00000001)

#define ADC1_ADCSSOP0_S0DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP0_S0DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP0_S0DCOP_DC          (0x00000001)
//--------

//--------
#define ADC1_ADCSSOP0_R_S1DCOP_MASK       (0x00000010)
#define ADC1_ADCSSOP0_R_S1DCOP_BIT        (4)
#define ADC1_ADCSSOP0_R_S1DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP0_R_S1DCOP_DC         (0x00000010)

#define ADC1_ADCSSOP0_S1DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP0_S1DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP0_S1DCOP_DC          (0x00000001)
//--------

//--------
#define ADC1_ADCSSOP0_R_S2DCOP_MASK       (0x00000100)
#define ADC1_ADCSSOP0_R_S2DCOP_BIT        (8)
#define ADC1_ADCSSOP0_R_S2DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP0_R_S2DCOP_DC         (0x00000100)

#define ADC1_ADCSSOP0_S2DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP0_S2DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP0_S2DCOP_DC          (0x00000001)
//--------

//--------
#define ADC1_ADCSSOP0_R_S3DCOP_MASK       (0x00001000)
#define ADC1_ADCSSOP0_R_S3DCOP_BIT        (12)
#define ADC1_ADCSSOP0_R_S3DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP0_R_S3DCOP_DC         (0x00001000)

#define ADC1_ADCSSOP0_S3DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP0_S3DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP0_S3DCOP_DC          (0x00000001)
//--------

//--------
#define ADC1_ADCSSOP0_R_S4DCOP_MASK       (0x00010000)
#define ADC1_ADCSSOP0_R_S4DCOP_BIT        (16)
#define ADC1_ADCSSOP0_R_S4DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP0_R_S4DCOP_DC         (0x00010000)

#define ADC1_ADCSSOP0_S4DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP0_S4DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP0_S4DCOP_DC          (0x00000001)
//--------

//--------
#define ADC1_ADCSSOP0_R_S5DCOP_MASK       (0x00100000)
#define ADC1_ADCSSOP0_R_S5DCOP_BIT        (20)
#define ADC1_ADCSSOP0_R_S5DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP0_R_S5DCOP_DC         (0x00100000)

#define ADC1_ADCSSOP0_S5DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP0_S5DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP0_S5DCOP_DC          (0x00000001)
//--------

//--------
#define ADC1_ADCSSOP0_R_S6DCOP_MASK       (0x01000000)
#define ADC1_ADCSSOP0_R_S6DCOP_BIT        (24)
#define ADC1_ADCSSOP0_R_S6DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP0_R_S6DCOP_DC         (0x01000000)

#define ADC1_ADCSSOP0_S6DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP0_S6DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP0_S6DCOP_DC          (0x00000001)
//--------

//--------
#define ADC1_ADCSSOP0_R_S7DCOP_MASK       (0x10000000)
#define ADC1_ADCSSOP0_R_S7DCOP_BIT        (28)
#define ADC1_ADCSSOP0_R_S7DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP0_R_S7DCOP_DC         (0x10000000)

#define ADC1_ADCSSOP0_S7DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP0_S7DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP0_S7DCOP_DC          (0x00000001)
//--------

#define ADC1_ADCSSOP0_S0DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(0*4))))
#define ADC1_ADCSSOP0_S1DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(4*4))))
#define ADC1_ADCSSOP0_S2DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(8*4))))
#define ADC1_ADCSSOP0_S3DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(12*4))))
#define ADC1_ADCSSOP0_S4DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(16*4))))
#define ADC1_ADCSSOP0_S5DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(20*4))))
#define ADC1_ADCSSOP0_S6DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(24*4))))
#define ADC1_ADCSSOP0_S7DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP0_OFFSET)*32)+(28*4))))



////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.20 ADCSSDC0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSDC0            (((ADCSSDC0_TypeDef*)(ADC1_BASE + ADC_ADCSSDC0_OFFSET )))
#define ADC1_ADCSSDC0_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSDC0_OFFSET)))


//--------
#define ADC1_ADCSSDC0_R_S0DCSEL_MASK       (0x0000000F)
#define ADC1_ADCSSDC0_R_S0DCSEL_BIT        (0)
#define ADC1_ADCSSDC0_R_S0DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC0_R_S0DCSEL_DC1        (0x00000001)
#define ADC1_ADCSSDC0_R_S0DCSEL_DC2        (0x00000002)
#define ADC1_ADCSSDC0_R_S0DCSEL_DC3        (0x00000003)
#define ADC1_ADCSSDC0_R_S0DCSEL_DC4        (0x00000004)
#define ADC1_ADCSSDC0_R_S0DCSEL_DC5        (0x00000005)
#define ADC1_ADCSSDC0_R_S0DCSEL_DC6        (0x00000006)
#define ADC1_ADCSSDC0_R_S0DCSEL_DC7        (0x00000007)

#define ADC1_ADCSSDC0_S0DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC0_S0DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC0_S0DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC0_S0DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC0_S0DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC0_S0DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC0_S0DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC0_S0DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC0_S0DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC1_ADCSSDC0_R_S1DCSEL_MASK       (0x000000F0)
#define ADC1_ADCSSDC0_R_S1DCSEL_BIT        (4)
#define ADC1_ADCSSDC0_R_S1DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC0_R_S1DCSEL_DC1        (0x00000010)
#define ADC1_ADCSSDC0_R_S1DCSEL_DC2        (0x00000020)
#define ADC1_ADCSSDC0_R_S1DCSEL_DC3        (0x00000030)
#define ADC1_ADCSSDC0_R_S1DCSEL_DC4        (0x00000040)
#define ADC1_ADCSSDC0_R_S1DCSEL_DC5        (0x00000050)
#define ADC1_ADCSSDC0_R_S1DCSEL_DC6        (0x00000060)
#define ADC1_ADCSSDC0_R_S1DCSEL_DC7        (0x00000070)

#define ADC1_ADCSSDC0_S1DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC0_S1DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC0_S1DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC0_S1DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC0_S1DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC0_S1DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC0_S1DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC0_S1DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC0_S1DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC1_ADCSSDC0_R_S2DCSEL_MASK       (0x00000F00)
#define ADC1_ADCSSDC0_R_S2DCSEL_BIT        (8)
#define ADC1_ADCSSDC0_R_S2DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC0_R_S2DCSEL_DC1        (0x00000100)
#define ADC1_ADCSSDC0_R_S2DCSEL_DC2        (0x00000200)
#define ADC1_ADCSSDC0_R_S2DCSEL_DC3        (0x00000300)
#define ADC1_ADCSSDC0_R_S2DCSEL_DC4        (0x00000400)
#define ADC1_ADCSSDC0_R_S2DCSEL_DC5        (0x00000500)
#define ADC1_ADCSSDC0_R_S2DCSEL_DC6        (0x00000600)
#define ADC1_ADCSSDC0_R_S2DCSEL_DC7        (0x00000700)

#define ADC1_ADCSSDC0_S2DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC0_S2DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC0_S2DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC0_S2DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC0_S2DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC0_S2DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC0_S2DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC0_S2DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC0_S2DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC1_ADCSSDC0_R_S3DCSEL_MASK       (0x0000F000)
#define ADC1_ADCSSDC0_R_S3DCSEL_BIT        (12)
#define ADC1_ADCSSDC0_R_S3DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC0_R_S3DCSEL_DC1        (0x00001000)
#define ADC1_ADCSSDC0_R_S3DCSEL_DC2        (0x00002000)
#define ADC1_ADCSSDC0_R_S3DCSEL_DC3        (0x00003000)
#define ADC1_ADCSSDC0_R_S3DCSEL_DC4        (0x00004000)
#define ADC1_ADCSSDC0_R_S3DCSEL_DC5        (0x00005000)
#define ADC1_ADCSSDC0_R_S3DCSEL_DC6        (0x00006000)
#define ADC1_ADCSSDC0_R_S3DCSEL_DC7        (0x00007000)

#define ADC1_ADCSSDC0_S3DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC0_S3DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC0_S3DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC0_S3DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC0_S3DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC0_S3DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC0_S3DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC0_S3DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC0_S3DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC1_ADCSSDC0_R_S4DCSEL_MASK       (0x000F0000)
#define ADC1_ADCSSDC0_R_S4DCSEL_BIT        (16)
#define ADC1_ADCSSDC0_R_S4DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC0_R_S4DCSEL_DC1        (0x00010000)
#define ADC1_ADCSSDC0_R_S4DCSEL_DC2        (0x00020000)
#define ADC1_ADCSSDC0_R_S4DCSEL_DC3        (0x00030000)
#define ADC1_ADCSSDC0_R_S4DCSEL_DC4        (0x00040000)
#define ADC1_ADCSSDC0_R_S4DCSEL_DC5        (0x00050000)
#define ADC1_ADCSSDC0_R_S4DCSEL_DC6        (0x00060000)
#define ADC1_ADCSSDC0_R_S4DCSEL_DC7        (0x00070000)

#define ADC1_ADCSSDC0_S4DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC0_S4DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC0_S4DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC0_S4DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC0_S4DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC0_S4DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC0_S4DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC0_S4DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC0_S4DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC1_ADCSSDC0_R_S5DCSEL_MASK       (0x00F00000)
#define ADC1_ADCSSDC0_R_S5DCSEL_BIT        (20)
#define ADC1_ADCSSDC0_R_S5DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC0_R_S5DCSEL_DC1        (0x00100000)
#define ADC1_ADCSSDC0_R_S5DCSEL_DC2        (0x00200000)
#define ADC1_ADCSSDC0_R_S5DCSEL_DC3        (0x00300000)
#define ADC1_ADCSSDC0_R_S5DCSEL_DC4        (0x00400000)
#define ADC1_ADCSSDC0_R_S5DCSEL_DC5        (0x00500000)
#define ADC1_ADCSSDC0_R_S5DCSEL_DC6        (0x00600000)
#define ADC1_ADCSSDC0_R_S5DCSEL_DC7        (0x00700000)

#define ADC1_ADCSSDC0_S5DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC0_S5DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC0_S5DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC0_S5DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC0_S5DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC0_S5DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC0_S5DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC0_S5DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC0_S5DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC1_ADCSSDC0_R_S6DCSEL_MASK       (0x0F000000)
#define ADC1_ADCSSDC0_R_S6DCSEL_BIT        (24)
#define ADC1_ADCSSDC0_R_S6DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC0_R_S6DCSEL_DC1        (0x01000000)
#define ADC1_ADCSSDC0_R_S6DCSEL_DC2        (0x02000000)
#define ADC1_ADCSSDC0_R_S6DCSEL_DC3        (0x03000000)
#define ADC1_ADCSSDC0_R_S6DCSEL_DC4        (0x04000000)
#define ADC1_ADCSSDC0_R_S6DCSEL_DC5        (0x05000000)
#define ADC1_ADCSSDC0_R_S6DCSEL_DC6        (0x06000000)
#define ADC1_ADCSSDC0_R_S6DCSEL_DC7        (0x07000000)

#define ADC1_ADCSSDC0_S6DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC0_S6DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC0_S6DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC0_S6DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC0_S6DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC0_S6DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC0_S6DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC0_S6DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC0_S6DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC1_ADCSSDC0_R_S7DCSEL_MASK       (0xF0000000)
#define ADC1_ADCSSDC0_R_S7DCSEL_BIT        (28)
#define ADC1_ADCSSDC0_R_S7DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC0_R_S7DCSEL_DC1        (0x10000000)
#define ADC1_ADCSSDC0_R_S7DCSEL_DC2        (0x2000000)
#define ADC1_ADCSSDC0_R_S7DCSEL_DC3        (0x30000000)
#define ADC1_ADCSSDC0_R_S7DCSEL_DC4        (0x40000000)
#define ADC1_ADCSSDC0_R_S7DCSEL_DC5        (0x50000000)
#define ADC1_ADCSSDC0_R_S7DCSEL_DC6        (0x60000000)
#define ADC1_ADCSSDC0_R_S7DCSEL_DC7        (0x70000000)

#define ADC1_ADCSSDC0_S7DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC0_S7DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC0_S7DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC0_S7DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC0_S7DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC0_S7DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC0_S7DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC0_S7DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC0_S7DCSEL_DC7         (0x00000007)
//--------
////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.21 ADCSSMUX1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSMUX1            (((ADCSSMUX1_TypeDef*)(ADC1_BASE + ADC_ADCSSMUX1_OFFSET )))
#define ADC1_ADCSSMUX1_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSMUX1_OFFSET)))

//--------
#define ADC1_ADCSSMUX1_R_MUX0_MASK       (0x0000000F)
#define ADC1_ADCSSMUX1_R_MUX0_BIT        (0)
#define ADC1_ADCSSMUX1_R_MUX0_AIN0       (0x00000000)
#define ADC1_ADCSSMUX1_R_MUX0_AIN1       (0x00000001)
#define ADC1_ADCSSMUX1_R_MUX0_AIN2       (0x00000002)
#define ADC1_ADCSSMUX1_R_MUX0_AIN3       (0x00000003)
#define ADC1_ADCSSMUX1_R_MUX0_AIN4       (0x00000004)
#define ADC1_ADCSSMUX1_R_MUX0_AIN5       (0x00000005)
#define ADC1_ADCSSMUX1_R_MUX0_AIN6       (0x00000006)
#define ADC1_ADCSSMUX1_R_MUX0_AIN7       (0x00000007)
#define ADC1_ADCSSMUX1_R_MUX0_AIN8       (0x00000008)
#define ADC1_ADCSSMUX1_R_MUX0_AIN9       (0x00000009)
#define ADC1_ADCSSMUX1_R_MUX0_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX1_R_MUX0_AIN11      (0x0000000B)

#define ADC1_ADCSSMUX1_MUX0_MASK       (0x0000000F)
#define ADC1_ADCSSMUX1_MUX0_AIN0       (0x00000000)
#define ADC1_ADCSSMUX1_MUX0_AIN1       (0x00000001)
#define ADC1_ADCSSMUX1_MUX0_AIN2       (0x00000002)
#define ADC1_ADCSSMUX1_MUX0_AIN3       (0x00000003)
#define ADC1_ADCSSMUX1_MUX0_AIN4       (0x00000004)
#define ADC1_ADCSSMUX1_MUX0_AIN5       (0x00000005)
#define ADC1_ADCSSMUX1_MUX0_AIN6       (0x00000006)
#define ADC1_ADCSSMUX1_MUX0_AIN7       (0x00000007)
#define ADC1_ADCSSMUX1_MUX0_AIN8       (0x00000008)
#define ADC1_ADCSSMUX1_MUX0_AIN9       (0x00000009)
#define ADC1_ADCSSMUX1_MUX0_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX1_MUX0_AIN11      (0x0000000B)
//--------

//--------
#define ADC1_ADCSSMUX1_R_MUX1_MASK       (0x000000F0)
#define ADC1_ADCSSMUX1_R_MUX1_BIT        (4)
#define ADC1_ADCSSMUX1_R_MUX1_AIN0       (0x00000000)
#define ADC1_ADCSSMUX1_R_MUX1_AIN1       (0x00000010)
#define ADC1_ADCSSMUX1_R_MUX1_AIN2       (0x00000020)
#define ADC1_ADCSSMUX1_R_MUX1_AIN3       (0x00000030)
#define ADC1_ADCSSMUX1_R_MUX1_AIN4       (0x00000040)
#define ADC1_ADCSSMUX1_R_MUX1_AIN5       (0x00000050)
#define ADC1_ADCSSMUX1_R_MUX1_AIN6       (0x00000060)
#define ADC1_ADCSSMUX1_R_MUX1_AIN7       (0x00000070)
#define ADC1_ADCSSMUX1_R_MUX1_AIN8       (0x00000080)
#define ADC1_ADCSSMUX1_R_MUX1_AIN9       (0x00000090)
#define ADC1_ADCSSMUX1_R_MUX1_AIN10      (0x000000A0)
#define ADC1_ADCSSMUX1_R_MUX1_AIN11      (0x000000B0)

#define ADC1_ADCSSMUX1_MUX1_MASK       (0x0000000F)
#define ADC1_ADCSSMUX1_MUX1_AIN0       (0x00000000)
#define ADC1_ADCSSMUX1_MUX1_AIN1       (0x00000001)
#define ADC1_ADCSSMUX1_MUX1_AIN2       (0x00000002)
#define ADC1_ADCSSMUX1_MUX1_AIN3       (0x00000003)
#define ADC1_ADCSSMUX1_MUX1_AIN4       (0x00000004)
#define ADC1_ADCSSMUX1_MUX1_AIN5       (0x00000005)
#define ADC1_ADCSSMUX1_MUX1_AIN6       (0x00000006)
#define ADC1_ADCSSMUX1_MUX1_AIN7       (0x00000007)
#define ADC1_ADCSSMUX1_MUX1_AIN8       (0x00000008)
#define ADC1_ADCSSMUX1_MUX1_AIN9       (0x00000009)
#define ADC1_ADCSSMUX1_MUX1_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX1_MUX1_AIN11      (0x0000000B)
//--------

//--------
#define ADC1_ADCSSMUX1_R_MUX2_MASK       (0x00000F00)
#define ADC1_ADCSSMUX1_R_MUX2_BIT        (8)
#define ADC1_ADCSSMUX1_R_MUX2_AIN0       (0x00000000)
#define ADC1_ADCSSMUX1_R_MUX2_AIN1       (0x00000100)
#define ADC1_ADCSSMUX1_R_MUX2_AIN2       (0x00000200)
#define ADC1_ADCSSMUX1_R_MUX2_AIN3       (0x00000300)
#define ADC1_ADCSSMUX1_R_MUX2_AIN4       (0x00000400)
#define ADC1_ADCSSMUX1_R_MUX2_AIN5       (0x00000500)
#define ADC1_ADCSSMUX1_R_MUX2_AIN6       (0x00000600)
#define ADC1_ADCSSMUX1_R_MUX2_AIN7       (0x00000700)
#define ADC1_ADCSSMUX1_R_MUX2_AIN8       (0x00000800)
#define ADC1_ADCSSMUX1_R_MUX2_AIN9       (0x00000900)
#define ADC1_ADCSSMUX1_R_MUX2_AIN10      (0x00000A00)
#define ADC1_ADCSSMUX1_R_MUX2_AIN11      (0x00000B00)

#define ADC1_ADCSSMUX1_MUX2_MASK       (0x0000000F)
#define ADC1_ADCSSMUX1_MUX2_AIN0       (0x00000000)
#define ADC1_ADCSSMUX1_MUX2_AIN1       (0x00000001)
#define ADC1_ADCSSMUX1_MUX2_AIN2       (0x00000002)
#define ADC1_ADCSSMUX1_MUX2_AIN3       (0x00000003)
#define ADC1_ADCSSMUX1_MUX2_AIN4       (0x00000004)
#define ADC1_ADCSSMUX1_MUX2_AIN5       (0x00000005)
#define ADC1_ADCSSMUX1_MUX2_AIN6       (0x00000006)
#define ADC1_ADCSSMUX1_MUX2_AIN7       (0x00000007)
#define ADC1_ADCSSMUX1_MUX2_AIN8       (0x00000008)
#define ADC1_ADCSSMUX1_MUX2_AIN9       (0x00000009)
#define ADC1_ADCSSMUX1_MUX2_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX1_MUX2_AIN11      (0x0000000B)
//--------

//--------
#define ADC1_ADCSSMUX1_R_MUX3_MASK       (0x0000F000)
#define ADC1_ADCSSMUX1_R_MUX3_BIT        (12)
#define ADC1_ADCSSMUX1_R_MUX3_AIN0       (0x00000000)
#define ADC1_ADCSSMUX1_R_MUX3_AIN1       (0x00001000)
#define ADC1_ADCSSMUX1_R_MUX3_AIN2       (0x00002000)
#define ADC1_ADCSSMUX1_R_MUX3_AIN3       (0x00003000)
#define ADC1_ADCSSMUX1_R_MUX3_AIN4       (0x00004000)
#define ADC1_ADCSSMUX1_R_MUX3_AIN5       (0x00005000)
#define ADC1_ADCSSMUX1_R_MUX3_AIN6       (0x00006000)
#define ADC1_ADCSSMUX1_R_MUX3_AIN7       (0x00007000)
#define ADC1_ADCSSMUX1_R_MUX3_AIN8       (0x00008000)
#define ADC1_ADCSSMUX1_R_MUX3_AIN9       (0x00009000)
#define ADC1_ADCSSMUX1_R_MUX3_AIN10      (0x0000A000)
#define ADC1_ADCSSMUX1_R_MUX3_AIN11      (0x0000B000)

#define ADC1_ADCSSMUX1_MUX3_MASK       (0x0000000F)
#define ADC1_ADCSSMUX1_MUX3_AIN0       (0x00000000)
#define ADC1_ADCSSMUX1_MUX3_AIN1       (0x00000001)
#define ADC1_ADCSSMUX1_MUX3_AIN2       (0x00000002)
#define ADC1_ADCSSMUX1_MUX3_AIN3       (0x00000003)
#define ADC1_ADCSSMUX1_MUX3_AIN4       (0x00000004)
#define ADC1_ADCSSMUX1_MUX3_AIN5       (0x00000005)
#define ADC1_ADCSSMUX1_MUX3_AIN6       (0x00000006)
#define ADC1_ADCSSMUX1_MUX3_AIN7       (0x00000007)
#define ADC1_ADCSSMUX1_MUX3_AIN8       (0x00000008)
#define ADC1_ADCSSMUX1_MUX3_AIN9       (0x00000009)
#define ADC1_ADCSSMUX1_MUX3_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX1_MUX3_AIN11      (0x0000000B)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.22 ADCSSCTL1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSCTL1            (((ADCSSCTL1_TypeDef*)(ADC1_BASE + ADC_ADCSSCTL1_OFFSET )))
#define ADC1_ADCSSCTL1_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSCTL1_OFFSET)))


//--------
#define ADC1_ADCSSCTL1_R_D0_MASK       (0x00000001)
#define ADC1_ADCSSCTL1_R_D0_BIT        (0)
#define ADC1_ADCSSCTL1_R_D0_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL1_R_D0_DIFF       (0x00000001)

#define ADC1_ADCSSCTL1_D0_MASK        (0x00000001)
#define ADC1_ADCSSCTL1_D0_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL1_D0_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL1_R_END0_MASK       (0x00000002)
#define ADC1_ADCSSCTL1_R_END0_BIT        (1)
#define ADC1_ADCSSCTL1_R_END0_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL1_R_END0_END        (0x00000002)

#define ADC1_ADCSSCTL1_END0_MASK        (0x00000001)
#define ADC1_ADCSSCTL1_END0_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL1_END0_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL1_R_IE0_MASK       (0x00000004)
#define ADC1_ADCSSCTL1_R_IE0_BIT        (2)
#define ADC1_ADCSSCTL1_R_IE0_DIS        (0x00000000)
#define ADC1_ADCSSCTL1_R_IE0_EN         (0x00000004)

#define ADC1_ADCSSCTL1_IE0_MASK       (0x00000001)
#define ADC1_ADCSSCTL1_IE0_DIS        (0x00000000)
#define ADC1_ADCSSCTL1_IE0_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL1_R_TS0_MASK         (0x00000008)
#define ADC1_ADCSSCTL1_R_TS0_BIT          (3)
#define ADC1_ADCSSCTL1_R_TS0_INPUT        (0x00000000)
#define ADC1_ADCSSCTL1_R_TS0_TEMP         (0x00000008)

#define ADC1_ADCSSCTL1_TS0_MASK         (0x00000001)
#define ADC1_ADCSSCTL1_TS0_INPUT        (0x00000000)
#define ADC1_ADCSSCTL1_TS0_TEMP         (0x00000001)
//--------




//--------
#define ADC1_ADCSSCTL1_R_D1_MASK       (0x00000010)
#define ADC1_ADCSSCTL1_R_D1_BIT        (4)
#define ADC1_ADCSSCTL1_R_D1_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL1_R_D1_DIFF       (0x00000010)

#define ADC1_ADCSSCTL1_D1_MASK        (0x00000001)
#define ADC1_ADCSSCTL1_D1_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL1_D1_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL1_R_END1_MASK       (0x00000020)
#define ADC1_ADCSSCTL1_R_END1_BIT        (5)
#define ADC1_ADCSSCTL1_R_END1_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL1_R_END1_END        (0x00000020)

#define ADC1_ADCSSCTL1_END1_MASK        (0x00000001)
#define ADC1_ADCSSCTL1_END1_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL1_END1_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL1_R_IE1_MASK       (0x00000040)
#define ADC1_ADCSSCTL1_R_IE1_BIT        (6)
#define ADC1_ADCSSCTL1_R_IE1_DIS        (0x00000000)
#define ADC1_ADCSSCTL1_R_IE1_EN         (0x00000040)

#define ADC1_ADCSSCTL1_IE1_MASK       (0x00000001)
#define ADC1_ADCSSCTL1_IE1_DIS        (0x00000000)
#define ADC1_ADCSSCTL1_IE1_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL1_R_TS1_MASK         (0x00000080)
#define ADC1_ADCSSCTL1_R_TS1_BIT          (7)
#define ADC1_ADCSSCTL1_R_TS1_INPUT        (0x00000000)
#define ADC1_ADCSSCTL1_R_TS1_TEMP         (0x00000080)

#define ADC1_ADCSSCTL1_TS1_MASK         (0x00000001)
#define ADC1_ADCSSCTL1_TS1_INPUT        (0x00000000)
#define ADC1_ADCSSCTL1_TS1_TEMP         (0x00000001)
//--------





//--------
#define ADC1_ADCSSCTL1_R_D2_MASK       (0x00000100)
#define ADC1_ADCSSCTL1_R_D2_BIT        (8)
#define ADC1_ADCSSCTL1_R_D2_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL1_R_D2_DIFF       (0x00000100)

#define ADC1_ADCSSCTL1_D2_MASK        (0x00000001)
#define ADC1_ADCSSCTL1_D2_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL1_D2_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL1_R_END2_MASK       (0x00000200)
#define ADC1_ADCSSCTL1_R_END2_BIT        (9)
#define ADC1_ADCSSCTL1_R_END2_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL1_R_END2_END        (0x00000200)

#define ADC1_ADCSSCTL1_END2_MASK        (0x00000001)
#define ADC1_ADCSSCTL1_END2_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL1_END2_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL1_R_IE2_MASK       (0x00000400)
#define ADC1_ADCSSCTL1_R_IE2_BIT        (10)
#define ADC1_ADCSSCTL1_R_IE2_DIS        (0x00000000)
#define ADC1_ADCSSCTL1_R_IE2_EN         (0x00000400)

#define ADC1_ADCSSCTL1_IE2_MASK       (0x00000001)
#define ADC1_ADCSSCTL1_IE2_DIS        (0x00000000)
#define ADC1_ADCSSCTL1_IE2_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL1_R_TS2_MASK         (0x00000800)
#define ADC1_ADCSSCTL1_R_TS2_BIT          (11)
#define ADC1_ADCSSCTL1_R_TS2_INPUT        (0x00000000)
#define ADC1_ADCSSCTL1_R_TS2_TEMP         (0x00000800)

#define ADC1_ADCSSCTL1_TS2_MASK         (0x00000001)
#define ADC1_ADCSSCTL1_TS2_INPUT        (0x00000000)
#define ADC1_ADCSSCTL1_TS2_TEMP         (0x00000001)
//--------



//--------
#define ADC1_ADCSSCTL1_R_D3_MASK       (0x00001000)
#define ADC1_ADCSSCTL1_R_D3_BIT        (12)
#define ADC1_ADCSSCTL1_R_D3_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL1_R_D3_DIFF       (0x00001000)

#define ADC1_ADCSSCTL1_D3_MASK        (0x00000001)
#define ADC1_ADCSSCTL1_D3_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL1_D3_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL1_R_END3_MASK       (0x00002000)
#define ADC1_ADCSSCTL1_R_END3_BIT        (13)
#define ADC1_ADCSSCTL1_R_END3_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL1_R_END3_END        (0x00002000)

#define ADC1_ADCSSCTL1_END3_MASK        (0x00000001)
#define ADC1_ADCSSCTL1_END3_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL1_END3_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL1_R_IE3_MASK       (0x00004000)
#define ADC1_ADCSSCTL1_R_IE3_BIT        (14)
#define ADC1_ADCSSCTL1_R_IE3_DIS        (0x00000000)
#define ADC1_ADCSSCTL1_R_IE3_EN         (0x00004000)

#define ADC1_ADCSSCTL1_IE3_MASK       (0x00000001)
#define ADC1_ADCSSCTL1_IE3_DIS        (0x00000000)
#define ADC1_ADCSSCTL1_IE3_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL1_R_TS3_MASK         (0x00008000)
#define ADC1_ADCSSCTL1_R_TS3_BIT          (15)
#define ADC1_ADCSSCTL1_R_TS3_INPUT        (0x00000000)
#define ADC1_ADCSSCTL1_R_TS3_TEMP         (0x00008000)

#define ADC1_ADCSSCTL1_TS3_MASK         (0x00000001)
#define ADC1_ADCSSCTL1_TS3_INPUT        (0x00000000)
#define ADC1_ADCSSCTL1_TS3_TEMP         (0x00000001)
//--------

#define ADC1_ADCSSCTL1_D0_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(0*4))))
#define ADC1_ADCSSCTL1_END0_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(1*4))))
#define ADC1_ADCSSCTL1_IE0_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(2*4))))
#define ADC1_ADCSSCTL1_TS0_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(3*4))))
#define ADC1_ADCSSCTL1_D1_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(4*4))))
#define ADC1_ADCSSCTL1_END1_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(5*4))))
#define ADC1_ADCSSCTL1_IE1_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(6*4))))
#define ADC1_ADCSSCTL1_TS1_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(7*4))))
#define ADC1_ADCSSCTL1_D2_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(8*4))))
#define ADC1_ADCSSCTL1_END2_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(9*4))))
#define ADC1_ADCSSCTL1_IE2_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(10*4))))
#define ADC1_ADCSSCTL1_TS2_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(11*4))))
#define ADC1_ADCSSCTL1_D3_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(12*4))))
#define ADC1_ADCSSCTL1_END3_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(13*4))))
#define ADC1_ADCSSCTL1_IE3_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(14*4))))
#define ADC1_ADCSSCTL1_TS3_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL1_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.23 ADCSSFIFO1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSFIFO1            (((ADCSSFIFO1_TypeDef*)(ADC1_BASE + ADC_ADCSSFIFO1_OFFSET )))
#define ADC1_ADCSSFIFO1_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCSSFIFO1_OFFSET)))

//--------
#define ADC1_ADCSSFIFO1_R_DATA_MASK       (0x00000FFF)
#define ADC1_ADCSSFIFO1_R_DATA_BIT        (0)

#define ADC1_ADCSSFIFO1_DATA_MASK         (0x00000FFF)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.24 ADCSSFSTAT1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSFSTAT1            (((ADCSSFSTAT1_TypeDef*)(ADC1_BASE + ADC_ADCSSFSTAT1_OFFSET )))
#define ADC1_ADCSSFSTAT1_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCSSFSTAT1_OFFSET)))

//--------
#define ADC1_ADCSSFSTAT1_R_TPTR_MASK       (0x0000000F)
#define ADC1_ADCSSFSTAT1_R_TPTR_BIT        (0)
#define ADC1_ADCSSFSTAT1_R_TPTR_POS0       (0x00000000)
#define ADC1_ADCSSFSTAT1_R_TPTR_POS1       (0x00000001)
#define ADC1_ADCSSFSTAT1_R_TPTR_POS2       (0x00000002)
#define ADC1_ADCSSFSTAT1_R_TPTR_POS3       (0x00000003)

#define ADC1_ADCSSFSTAT1_TPTR_MASK       (0x0000000F)
#define ADC1_ADCSSFSTAT1_TPTR_POS0       (0x00000000)
#define ADC1_ADCSSFSTAT1_TPTR_POS1       (0x00000001)
#define ADC1_ADCSSFSTAT1_TPTR_POS2       (0x00000002)
#define ADC1_ADCSSFSTAT1_TPTR_POS3       (0x00000003)
//--------

//--------
#define ADC1_ADCSSFSTAT1_R_HPTR_MASK       (0x000000F0)
#define ADC1_ADCSSFSTAT1_R_HPTR_BIT        (4)
#define ADC1_ADCSSFSTAT1_R_HPTR_POS0       (0x00000000)
#define ADC1_ADCSSFSTAT1_R_HPTR_POS1       (0x00000010)
#define ADC1_ADCSSFSTAT1_R_HPTR_POS2       (0x00000020)
#define ADC1_ADCSSFSTAT1_R_HPTR_POS3       (0x00000030)

#define ADC1_ADCSSFSTAT1_HPTR_MASK       (0x0000000F)
#define ADC1_ADCSSFSTAT1_HPTR_POS0       (0x00000000)
#define ADC1_ADCSSFSTAT1_HPTR_POS1       (0x00000001)
#define ADC1_ADCSSFSTAT1_HPTR_POS2       (0x00000002)
#define ADC1_ADCSSFSTAT1_HPTR_POS3       (0x00000003)
//--------

//--------
#define ADC1_ADCSSFSTAT1_R_EMPTY_MASK       (0x00000100)
#define ADC1_ADCSSFSTAT1_R_EMPTY_BIT        (8)
#define ADC1_ADCSSFSTAT1_R_EMPTY_NOEMPTY    (0x00000000)
#define ADC1_ADCSSFSTAT1_R_EMPTY_EMPTY      (0x00000100)

#define ADC1_ADCSSFSTAT1_EMPTY_MASK        (0x00000001)
#define ADC1_ADCSSFSTAT1_EMPTY_NOEMPTY     (0x00000000)
#define ADC1_ADCSSFSTAT1_EMPTY_EMPTY       (0x00000001)
//--------

//--------
#define ADC1_ADCSSFSTAT1_R_FULL_MASK       (0x00000100)
#define ADC1_ADCSSFSTAT1_R_FULL_BIT        (8)
#define ADC1_ADCSSFSTAT1_R_FULL_NOFULL     (0x00000000)
#define ADC1_ADCSSFSTAT1_R_FULL_FULL       (0x00000100)

#define ADC1_ADCSSFSTAT1_FULL_MASK        (0x00000001)
#define ADC1_ADCSSFSTAT1_FULL_NOFULL      (0x00000000)
#define ADC1_ADCSSFSTAT1_FULL_FULL        (0x00000001)
//--------

#define ADC1_ADCSSFSTAT1_EMPTY_BB        (*((volatile const uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSFSTAT1_OFFSET)*32)+(8*4))))
#define ADC1_ADCSSFSTAT1_FULL_BB         (*((volatile const uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSFSTAT1_OFFSET)*32)+(12*4))))




////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.25 ADCSSOP1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSOP1            (((ADCSSOP1_TypeDef*)(ADC1_BASE + ADC_ADCSSOP1_OFFSET )))
#define ADC1_ADCSSOP1_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSOP1_OFFSET)))


//--------
#define ADC1_ADCSSOP1_R_S0DCOP_MASK       (0x00000001)
#define ADC1_ADCSSOP1_R_S0DCOP_BIT        (0)
#define ADC1_ADCSSOP1_R_S0DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP1_R_S0DCOP_DC         (0x00000001)

#define ADC1_ADCSSOP1_S0DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP1_S0DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP1_S0DCOP_DC          (0x00000001)
//--------

//--------
#define ADC1_ADCSSOP1_R_S1DCOP_MASK       (0x00000010)
#define ADC1_ADCSSOP1_R_S1DCOP_BIT        (4)
#define ADC1_ADCSSOP1_R_S1DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP1_R_S1DCOP_DC         (0x00000010)

#define ADC1_ADCSSOP1_S1DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP1_S1DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP1_S1DCOP_DC          (0x00000001)
//--------

//--------
#define ADC1_ADCSSOP1_R_S2DCOP_MASK       (0x00000100)
#define ADC1_ADCSSOP1_R_S2DCOP_BIT        (8)
#define ADC1_ADCSSOP1_R_S2DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP1_R_S2DCOP_DC         (0x00000100)

#define ADC1_ADCSSOP1_S2DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP1_S2DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP1_S2DCOP_DC          (0x00000001)
//--------

//--------
#define ADC1_ADCSSOP1_R_S3DCOP_MASK       (0x00001000)
#define ADC1_ADCSSOP1_R_S3DCOP_BIT        (12)
#define ADC1_ADCSSOP1_R_S3DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP1_R_S3DCOP_DC         (0x00001000)

#define ADC1_ADCSSOP1_S3DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP1_S3DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP1_S3DCOP_DC          (0x00000001)
//--------

#define ADC1_ADCSSOP1_S0DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP1_OFFSET)*32)+(0*4))))
#define ADC1_ADCSSOP1_S1DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP1_OFFSET)*32)+(4*4))))
#define ADC1_ADCSSOP1_S2DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP1_OFFSET)*32)+(8*4))))
#define ADC1_ADCSSOP1_S3DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP1_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.26 ADCSSDC1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSDC1            (((ADCSSDC1_TypeDef*)(ADC1_BASE + ADC_ADCSSDC1_OFFSET )))
#define ADC1_ADCSSDC1_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSDC1_OFFSET)))


//--------
#define ADC1_ADCSSDC1_R_S0DCSEL_MASK       (0x0000000F)
#define ADC1_ADCSSDC1_R_S0DCSEL_BIT        (0)
#define ADC1_ADCSSDC1_R_S0DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC1_R_S0DCSEL_DC1        (0x00000001)
#define ADC1_ADCSSDC1_R_S0DCSEL_DC2        (0x00000002)
#define ADC1_ADCSSDC1_R_S0DCSEL_DC3        (0x00000003)
#define ADC1_ADCSSDC1_R_S0DCSEL_DC4        (0x00000004)
#define ADC1_ADCSSDC1_R_S0DCSEL_DC5        (0x00000005)
#define ADC1_ADCSSDC1_R_S0DCSEL_DC6        (0x00000006)
#define ADC1_ADCSSDC1_R_S0DCSEL_DC7        (0x00000007)

#define ADC1_ADCSSDC1_S0DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC1_S0DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC1_S0DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC1_S0DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC1_S0DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC1_S0DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC1_S0DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC1_S0DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC1_S0DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC1_ADCSSDC1_R_S1DCSEL_MASK       (0x000000F0)
#define ADC1_ADCSSDC1_R_S1DCSEL_BIT        (4)
#define ADC1_ADCSSDC1_R_S1DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC1_R_S1DCSEL_DC1        (0x00000010)
#define ADC1_ADCSSDC1_R_S1DCSEL_DC2        (0x00000020)
#define ADC1_ADCSSDC1_R_S1DCSEL_DC3        (0x00000030)
#define ADC1_ADCSSDC1_R_S1DCSEL_DC4        (0x00000040)
#define ADC1_ADCSSDC1_R_S1DCSEL_DC5        (0x00000050)
#define ADC1_ADCSSDC1_R_S1DCSEL_DC6        (0x00000060)
#define ADC1_ADCSSDC1_R_S1DCSEL_DC7        (0x00000070)

#define ADC1_ADCSSDC1_S1DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC1_S1DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC1_S1DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC1_S1DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC1_S1DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC1_S1DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC1_S1DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC1_S1DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC1_S1DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC1_ADCSSDC1_R_S2DCSEL_MASK       (0x00000F00)
#define ADC1_ADCSSDC1_R_S2DCSEL_BIT        (8)
#define ADC1_ADCSSDC1_R_S2DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC1_R_S2DCSEL_DC1        (0x00000100)
#define ADC1_ADCSSDC1_R_S2DCSEL_DC2        (0x00000200)
#define ADC1_ADCSSDC1_R_S2DCSEL_DC3        (0x00000300)
#define ADC1_ADCSSDC1_R_S2DCSEL_DC4        (0x00000400)
#define ADC1_ADCSSDC1_R_S2DCSEL_DC5        (0x00000500)
#define ADC1_ADCSSDC1_R_S2DCSEL_DC6        (0x00000600)
#define ADC1_ADCSSDC1_R_S2DCSEL_DC7        (0x00000700)

#define ADC1_ADCSSDC1_S2DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC1_S2DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC1_S2DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC1_S2DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC1_S2DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC1_S2DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC1_S2DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC1_S2DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC1_S2DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC1_ADCSSDC1_R_S3DCSEL_MASK       (0x0000F000)
#define ADC1_ADCSSDC1_R_S3DCSEL_BIT        (12)
#define ADC1_ADCSSDC1_R_S3DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC1_R_S3DCSEL_DC1        (0x00001000)
#define ADC1_ADCSSDC1_R_S3DCSEL_DC2        (0x00002000)
#define ADC1_ADCSSDC1_R_S3DCSEL_DC3        (0x00003000)
#define ADC1_ADCSSDC1_R_S3DCSEL_DC4        (0x00004000)
#define ADC1_ADCSSDC1_R_S3DCSEL_DC5        (0x00005000)
#define ADC1_ADCSSDC1_R_S3DCSEL_DC6        (0x00006000)
#define ADC1_ADCSSDC1_R_S3DCSEL_DC7        (0x00007000)

#define ADC1_ADCSSDC1_S3DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC1_S3DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC1_S3DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC1_S3DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC1_S3DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC1_S3DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC1_S3DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC1_S3DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC1_S3DCSEL_DC7         (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.27 ADCSSMUX2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSMUX2            (((ADCSSMUX2_TypeDef*)(ADC1_BASE + ADC_ADCSSMUX2_OFFSET )))
#define ADC1_ADCSSMUX2_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSMUX2_OFFSET)))


//--------
#define ADC1_ADCSSMUX2_R_MUX0_MASK       (0x0000000F)
#define ADC1_ADCSSMUX2_R_MUX0_BIT        (0)
#define ADC1_ADCSSMUX2_R_MUX0_AIN0       (0x00000000)
#define ADC1_ADCSSMUX2_R_MUX0_AIN1       (0x00000001)
#define ADC1_ADCSSMUX2_R_MUX0_AIN2       (0x00000002)
#define ADC1_ADCSSMUX2_R_MUX0_AIN3       (0x00000003)
#define ADC1_ADCSSMUX2_R_MUX0_AIN4       (0x00000004)
#define ADC1_ADCSSMUX2_R_MUX0_AIN5       (0x00000005)
#define ADC1_ADCSSMUX2_R_MUX0_AIN6       (0x00000006)
#define ADC1_ADCSSMUX2_R_MUX0_AIN7       (0x00000007)
#define ADC1_ADCSSMUX2_R_MUX0_AIN8       (0x00000008)
#define ADC1_ADCSSMUX2_R_MUX0_AIN9       (0x00000009)
#define ADC1_ADCSSMUX2_R_MUX0_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX2_R_MUX0_AIN11      (0x0000000B)

#define ADC1_ADCSSMUX2_MUX0_MASK       (0x0000000F)
#define ADC1_ADCSSMUX2_MUX0_AIN0       (0x00000000)
#define ADC1_ADCSSMUX2_MUX0_AIN1       (0x00000001)
#define ADC1_ADCSSMUX2_MUX0_AIN2       (0x00000002)
#define ADC1_ADCSSMUX2_MUX0_AIN3       (0x00000003)
#define ADC1_ADCSSMUX2_MUX0_AIN4       (0x00000004)
#define ADC1_ADCSSMUX2_MUX0_AIN5       (0x00000005)
#define ADC1_ADCSSMUX2_MUX0_AIN6       (0x00000006)
#define ADC1_ADCSSMUX2_MUX0_AIN7       (0x00000007)
#define ADC1_ADCSSMUX2_MUX0_AIN8       (0x00000008)
#define ADC1_ADCSSMUX2_MUX0_AIN9       (0x00000009)
#define ADC1_ADCSSMUX2_MUX0_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX2_MUX0_AIN11      (0x0000000B)
//--------

//--------
#define ADC1_ADCSSMUX2_R_MUX1_MASK       (0x000000F0)
#define ADC1_ADCSSMUX2_R_MUX1_BIT        (4)
#define ADC1_ADCSSMUX2_R_MUX1_AIN0       (0x00000000)
#define ADC1_ADCSSMUX2_R_MUX1_AIN1       (0x00000010)
#define ADC1_ADCSSMUX2_R_MUX1_AIN2       (0x00000020)
#define ADC1_ADCSSMUX2_R_MUX1_AIN3       (0x00000030)
#define ADC1_ADCSSMUX2_R_MUX1_AIN4       (0x00000040)
#define ADC1_ADCSSMUX2_R_MUX1_AIN5       (0x00000050)
#define ADC1_ADCSSMUX2_R_MUX1_AIN6       (0x00000060)
#define ADC1_ADCSSMUX2_R_MUX1_AIN7       (0x00000070)
#define ADC1_ADCSSMUX2_R_MUX1_AIN8       (0x00000080)
#define ADC1_ADCSSMUX2_R_MUX1_AIN9       (0x00000090)
#define ADC1_ADCSSMUX2_R_MUX1_AIN10      (0x000000A0)
#define ADC1_ADCSSMUX2_R_MUX1_AIN11      (0x000000B0)

#define ADC1_ADCSSMUX2_MUX1_MASK       (0x0000000F)
#define ADC1_ADCSSMUX2_MUX1_AIN0       (0x00000000)
#define ADC1_ADCSSMUX2_MUX1_AIN1       (0x00000001)
#define ADC1_ADCSSMUX2_MUX1_AIN2       (0x00000002)
#define ADC1_ADCSSMUX2_MUX1_AIN3       (0x00000003)
#define ADC1_ADCSSMUX2_MUX1_AIN4       (0x00000004)
#define ADC1_ADCSSMUX2_MUX1_AIN5       (0x00000005)
#define ADC1_ADCSSMUX2_MUX1_AIN6       (0x00000006)
#define ADC1_ADCSSMUX2_MUX1_AIN7       (0x00000007)
#define ADC1_ADCSSMUX2_MUX1_AIN8       (0x00000008)
#define ADC1_ADCSSMUX2_MUX1_AIN9       (0x00000009)
#define ADC1_ADCSSMUX2_MUX1_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX2_MUX1_AIN11      (0x0000000B)
//--------

//--------
#define ADC1_ADCSSMUX2_R_MUX2_MASK       (0x00000F00)
#define ADC1_ADCSSMUX2_R_MUX2_BIT        (8)
#define ADC1_ADCSSMUX2_R_MUX2_AIN0       (0x00000000)
#define ADC1_ADCSSMUX2_R_MUX2_AIN1       (0x00000100)
#define ADC1_ADCSSMUX2_R_MUX2_AIN2       (0x00000200)
#define ADC1_ADCSSMUX2_R_MUX2_AIN3       (0x00000300)
#define ADC1_ADCSSMUX2_R_MUX2_AIN4       (0x00000400)
#define ADC1_ADCSSMUX2_R_MUX2_AIN5       (0x00000500)
#define ADC1_ADCSSMUX2_R_MUX2_AIN6       (0x00000600)
#define ADC1_ADCSSMUX2_R_MUX2_AIN7       (0x00000700)
#define ADC1_ADCSSMUX2_R_MUX2_AIN8       (0x00000800)
#define ADC1_ADCSSMUX2_R_MUX2_AIN9       (0x00000900)
#define ADC1_ADCSSMUX2_R_MUX2_AIN10      (0x00000A00)
#define ADC1_ADCSSMUX2_R_MUX2_AIN11      (0x00000B00)

#define ADC1_ADCSSMUX2_MUX2_MASK       (0x0000000F)
#define ADC1_ADCSSMUX2_MUX2_AIN0       (0x00000000)
#define ADC1_ADCSSMUX2_MUX2_AIN1       (0x00000001)
#define ADC1_ADCSSMUX2_MUX2_AIN2       (0x00000002)
#define ADC1_ADCSSMUX2_MUX2_AIN3       (0x00000003)
#define ADC1_ADCSSMUX2_MUX2_AIN4       (0x00000004)
#define ADC1_ADCSSMUX2_MUX2_AIN5       (0x00000005)
#define ADC1_ADCSSMUX2_MUX2_AIN6       (0x00000006)
#define ADC1_ADCSSMUX2_MUX2_AIN7       (0x00000007)
#define ADC1_ADCSSMUX2_MUX2_AIN8       (0x00000008)
#define ADC1_ADCSSMUX2_MUX2_AIN9       (0x00000009)
#define ADC1_ADCSSMUX2_MUX2_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX2_MUX2_AIN11      (0x0000000B)
//--------

//--------
#define ADC1_ADCSSMUX2_R_MUX3_MASK       (0x0000F000)
#define ADC1_ADCSSMUX2_R_MUX3_BIT        (12)
#define ADC1_ADCSSMUX2_R_MUX3_AIN0       (0x00000000)
#define ADC1_ADCSSMUX2_R_MUX3_AIN1       (0x00001000)
#define ADC1_ADCSSMUX2_R_MUX3_AIN2       (0x00002000)
#define ADC1_ADCSSMUX2_R_MUX3_AIN3       (0x00003000)
#define ADC1_ADCSSMUX2_R_MUX3_AIN4       (0x00004000)
#define ADC1_ADCSSMUX2_R_MUX3_AIN5       (0x00005000)
#define ADC1_ADCSSMUX2_R_MUX3_AIN6       (0x00006000)
#define ADC1_ADCSSMUX2_R_MUX3_AIN7       (0x00007000)
#define ADC1_ADCSSMUX2_R_MUX3_AIN8       (0x00008000)
#define ADC1_ADCSSMUX2_R_MUX3_AIN9       (0x00009000)
#define ADC1_ADCSSMUX2_R_MUX3_AIN10      (0x0000A000)
#define ADC1_ADCSSMUX2_R_MUX3_AIN11      (0x0000B000)

#define ADC1_ADCSSMUX2_MUX3_MASK       (0x0000000F)
#define ADC1_ADCSSMUX2_MUX3_AIN0       (0x00000000)
#define ADC1_ADCSSMUX2_MUX3_AIN1       (0x00000001)
#define ADC1_ADCSSMUX2_MUX3_AIN2       (0x00000002)
#define ADC1_ADCSSMUX2_MUX3_AIN3       (0x00000003)
#define ADC1_ADCSSMUX2_MUX3_AIN4       (0x00000004)
#define ADC1_ADCSSMUX2_MUX3_AIN5       (0x00000005)
#define ADC1_ADCSSMUX2_MUX3_AIN6       (0x00000006)
#define ADC1_ADCSSMUX2_MUX3_AIN7       (0x00000007)
#define ADC1_ADCSSMUX2_MUX3_AIN8       (0x00000008)
#define ADC1_ADCSSMUX2_MUX3_AIN9       (0x00000009)
#define ADC1_ADCSSMUX2_MUX3_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX2_MUX3_AIN11      (0x0000000B)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.28 ADCSSCTL2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSCTL2            (((ADCSSCTL2_TypeDef*)(ADC1_BASE + ADC_ADCSSCTL2_OFFSET )))
#define ADC1_ADCSSCTL2_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSCTL2_OFFSET)))


//--------
#define ADC1_ADCSSCTL2_R_D0_MASK       (0x00000001)
#define ADC1_ADCSSCTL2_R_D0_BIT        (0)
#define ADC1_ADCSSCTL2_R_D0_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL2_R_D0_DIFF       (0x00000001)

#define ADC1_ADCSSCTL2_D0_MASK        (0x00000001)
#define ADC1_ADCSSCTL2_D0_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL2_D0_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL2_R_END0_MASK       (0x00000002)
#define ADC1_ADCSSCTL2_R_END0_BIT        (1)
#define ADC1_ADCSSCTL2_R_END0_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL2_R_END0_END        (0x00000002)

#define ADC1_ADCSSCTL2_END0_MASK        (0x00000001)
#define ADC1_ADCSSCTL2_END0_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL2_END0_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL2_R_IE0_MASK       (0x00000004)
#define ADC1_ADCSSCTL2_R_IE0_BIT        (2)
#define ADC1_ADCSSCTL2_R_IE0_DIS        (0x00000000)
#define ADC1_ADCSSCTL2_R_IE0_EN         (0x00000004)

#define ADC1_ADCSSCTL2_IE0_MASK       (0x00000001)
#define ADC1_ADCSSCTL2_IE0_DIS        (0x00000000)
#define ADC1_ADCSSCTL2_IE0_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL2_R_TS0_MASK         (0x00000008)
#define ADC1_ADCSSCTL2_R_TS0_BIT          (3)
#define ADC1_ADCSSCTL2_R_TS0_INPUT        (0x00000000)
#define ADC1_ADCSSCTL2_R_TS0_TEMP         (0x00000008)

#define ADC1_ADCSSCTL2_TS0_MASK         (0x00000001)
#define ADC1_ADCSSCTL2_TS0_INPUT        (0x00000000)
#define ADC1_ADCSSCTL2_TS0_TEMP         (0x00000001)
//--------




//--------
#define ADC1_ADCSSCTL2_R_D1_MASK       (0x00000010)
#define ADC1_ADCSSCTL2_R_D1_BIT        (4)
#define ADC1_ADCSSCTL2_R_D1_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL2_R_D1_DIFF       (0x00000010)

#define ADC1_ADCSSCTL2_D1_MASK        (0x00000001)
#define ADC1_ADCSSCTL2_D1_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL2_D1_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL2_R_END1_MASK       (0x00000020)
#define ADC1_ADCSSCTL2_R_END1_BIT        (5)
#define ADC1_ADCSSCTL2_R_END1_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL2_R_END1_END        (0x00000020)

#define ADC1_ADCSSCTL2_END1_MASK        (0x00000001)
#define ADC1_ADCSSCTL2_END1_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL2_END1_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL2_R_IE1_MASK       (0x00000040)
#define ADC1_ADCSSCTL2_R_IE1_BIT        (6)
#define ADC1_ADCSSCTL2_R_IE1_DIS        (0x00000000)
#define ADC1_ADCSSCTL2_R_IE1_EN         (0x00000040)

#define ADC1_ADCSSCTL2_IE1_MASK       (0x00000001)
#define ADC1_ADCSSCTL2_IE1_DIS        (0x00000000)
#define ADC1_ADCSSCTL2_IE1_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL2_R_TS1_MASK         (0x00000080)
#define ADC1_ADCSSCTL2_R_TS1_BIT          (7)
#define ADC1_ADCSSCTL2_R_TS1_INPUT        (0x00000000)
#define ADC1_ADCSSCTL2_R_TS1_TEMP         (0x00000080)

#define ADC1_ADCSSCTL2_TS1_MASK         (0x00000001)
#define ADC1_ADCSSCTL2_TS1_INPUT        (0x00000000)
#define ADC1_ADCSSCTL2_TS1_TEMP         (0x00000001)
//--------





//--------
#define ADC1_ADCSSCTL2_R_D2_MASK       (0x00000100)
#define ADC1_ADCSSCTL2_R_D2_BIT        (8)
#define ADC1_ADCSSCTL2_R_D2_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL2_R_D2_DIFF       (0x00000100)

#define ADC1_ADCSSCTL2_D2_MASK        (0x00000001)
#define ADC1_ADCSSCTL2_D2_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL2_D2_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL2_R_END2_MASK       (0x00000200)
#define ADC1_ADCSSCTL2_R_END2_BIT        (9)
#define ADC1_ADCSSCTL2_R_END2_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL2_R_END2_END        (0x00000200)

#define ADC1_ADCSSCTL2_END2_MASK        (0x00000001)
#define ADC1_ADCSSCTL2_END2_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL2_END2_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL2_R_IE2_MASK       (0x00000400)
#define ADC1_ADCSSCTL2_R_IE2_BIT        (10)
#define ADC1_ADCSSCTL2_R_IE2_DIS        (0x00000000)
#define ADC1_ADCSSCTL2_R_IE2_EN         (0x00000400)

#define ADC1_ADCSSCTL2_IE2_MASK       (0x00000001)
#define ADC1_ADCSSCTL2_IE2_DIS        (0x00000000)
#define ADC1_ADCSSCTL2_IE2_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL2_R_TS2_MASK         (0x00000800)
#define ADC1_ADCSSCTL2_R_TS2_BIT          (11)
#define ADC1_ADCSSCTL2_R_TS2_INPUT        (0x00000000)
#define ADC1_ADCSSCTL2_R_TS2_TEMP         (0x00000800)

#define ADC1_ADCSSCTL2_TS2_MASK         (0x00000001)
#define ADC1_ADCSSCTL2_TS2_INPUT        (0x00000000)
#define ADC1_ADCSSCTL2_TS2_TEMP         (0x00000001)
//--------



//--------
#define ADC1_ADCSSCTL2_R_D3_MASK       (0x00001000)
#define ADC1_ADCSSCTL2_R_D3_BIT        (12)
#define ADC1_ADCSSCTL2_R_D3_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL2_R_D3_DIFF       (0x00001000)

#define ADC1_ADCSSCTL2_D3_MASK        (0x00000001)
#define ADC1_ADCSSCTL2_D3_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL2_D3_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL2_R_END3_MASK       (0x00002000)
#define ADC1_ADCSSCTL2_R_END3_BIT        (13)
#define ADC1_ADCSSCTL2_R_END3_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL2_R_END3_END        (0x00002000)

#define ADC1_ADCSSCTL2_END3_MASK        (0x00000001)
#define ADC1_ADCSSCTL2_END3_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL2_END3_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL2_R_IE3_MASK       (0x00004000)
#define ADC1_ADCSSCTL2_R_IE3_BIT        (14)
#define ADC1_ADCSSCTL2_R_IE3_DIS        (0x00000000)
#define ADC1_ADCSSCTL2_R_IE3_EN         (0x00004000)

#define ADC1_ADCSSCTL2_IE3_MASK       (0x00000001)
#define ADC1_ADCSSCTL2_IE3_DIS        (0x00000000)
#define ADC1_ADCSSCTL2_IE3_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL2_R_TS3_MASK         (0x00008000)
#define ADC1_ADCSSCTL2_R_TS3_BIT          (15)
#define ADC1_ADCSSCTL2_R_TS3_INPUT        (0x00000000)
#define ADC1_ADCSSCTL2_R_TS3_TEMP         (0x00008000)

#define ADC1_ADCSSCTL2_TS3_MASK         (0x00000001)
#define ADC1_ADCSSCTL2_TS3_INPUT        (0x00000000)
#define ADC1_ADCSSCTL2_TS3_TEMP         (0x00000001)
//--------


#define ADC1_ADCSSCTL2_D0_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(0*4))))
#define ADC1_ADCSSCTL2_END0_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(1*4))))
#define ADC1_ADCSSCTL2_IE0_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(2*4))))
#define ADC1_ADCSSCTL2_TS0_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(3*4))))
#define ADC1_ADCSSCTL2_D1_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(4*4))))
#define ADC1_ADCSSCTL2_END1_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(5*4))))
#define ADC1_ADCSSCTL2_IE1_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(6*4))))
#define ADC1_ADCSSCTL2_TS1_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(7*4))))
#define ADC1_ADCSSCTL2_D2_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(8*4))))
#define ADC1_ADCSSCTL2_END2_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(9*4))))
#define ADC1_ADCSSCTL2_IE2_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(10*4))))
#define ADC1_ADCSSCTL2_TS2_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(11*4))))
#define ADC1_ADCSSCTL2_D3_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(12*4))))
#define ADC1_ADCSSCTL2_END3_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(13*4))))
#define ADC1_ADCSSCTL2_IE3_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(14*4))))
#define ADC1_ADCSSCTL2_TS3_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL2_OFFSET)*32)+(15*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.29 ADCSSFIFO2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSFIFO2            (((ADCSSFIFO2_TypeDef*)(ADC1_BASE + ADC_ADCSSFIFO2_OFFSET )))
#define ADC1_ADCSSFIFO2_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCSSFIFO2_OFFSET)))

//--------
#define ADC1_ADCSSFIFO2_R_DATA_MASK       (0x00000FFF)
#define ADC1_ADCSSFIFO2_R_DATA_BIT        (0)

#define ADC1_ADCSSFIFO2_DATA_MASK         (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.30 ADCSSFSTAT2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSFSTAT2            (((ADCSSFSTAT2_TypeDef*)(ADC1_BASE + ADC_ADCSSFSTAT2_OFFSET )))
#define ADC1_ADCSSFSTAT2_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCSSFSTAT2_OFFSET)))

//--------
#define ADC1_ADCSSFSTAT2_R_TPTR_MASK       (0x0000000F)
#define ADC1_ADCSSFSTAT2_R_TPTR_BIT        (0)
#define ADC1_ADCSSFSTAT2_R_TPTR_POS0       (0x00000000)
#define ADC1_ADCSSFSTAT2_R_TPTR_POS1       (0x00000001)
#define ADC1_ADCSSFSTAT2_R_TPTR_POS2       (0x00000002)
#define ADC1_ADCSSFSTAT2_R_TPTR_POS3       (0x00000003)

#define ADC1_ADCSSFSTAT2_TPTR_MASK       (0x0000000F)
#define ADC1_ADCSSFSTAT2_TPTR_POS0       (0x00000000)
#define ADC1_ADCSSFSTAT2_TPTR_POS1       (0x00000001)
#define ADC1_ADCSSFSTAT2_TPTR_POS2       (0x00000002)
#define ADC1_ADCSSFSTAT2_TPTR_POS3       (0x00000003)
//--------

//--------
#define ADC1_ADCSSFSTAT2_R_HPTR_MASK       (0x000000F0)
#define ADC1_ADCSSFSTAT2_R_HPTR_BIT        (4)
#define ADC1_ADCSSFSTAT2_R_HPTR_POS0       (0x00000000)
#define ADC1_ADCSSFSTAT2_R_HPTR_POS1       (0x00000010)
#define ADC1_ADCSSFSTAT2_R_HPTR_POS2       (0x00000020)
#define ADC1_ADCSSFSTAT2_R_HPTR_POS3       (0x00000030)

#define ADC1_ADCSSFSTAT2_HPTR_MASK       (0x0000000F)
#define ADC1_ADCSSFSTAT2_HPTR_POS0       (0x00000000)
#define ADC1_ADCSSFSTAT2_HPTR_POS1       (0x00000001)
#define ADC1_ADCSSFSTAT2_HPTR_POS2       (0x00000002)
#define ADC1_ADCSSFSTAT2_HPTR_POS3       (0x00000003)
//--------

//--------
#define ADC1_ADCSSFSTAT2_R_EMPTY_MASK       (0x00000100)
#define ADC1_ADCSSFSTAT2_R_EMPTY_BIT        (8)
#define ADC1_ADCSSFSTAT2_R_EMPTY_NOEMPTY    (0x00000000)
#define ADC1_ADCSSFSTAT2_R_EMPTY_EMPTY      (0x00000100)

#define ADC1_ADCSSFSTAT2_EMPTY_MASK        (0x00000001)
#define ADC1_ADCSSFSTAT2_EMPTY_NOEMPTY     (0x00000000)
#define ADC1_ADCSSFSTAT2_EMPTY_EMPTY       (0x00000001)
//--------

//--------
#define ADC1_ADCSSFSTAT2_R_FULL_MASK       (0x00000100)
#define ADC1_ADCSSFSTAT2_R_FULL_BIT        (8)
#define ADC1_ADCSSFSTAT2_R_FULL_NOFULL     (0x00000000)
#define ADC1_ADCSSFSTAT2_R_FULL_FULL       (0x00000100)

#define ADC1_ADCSSFSTAT2_FULL_MASK        (0x00000001)
#define ADC1_ADCSSFSTAT2_FULL_NOFULL      (0x00000000)
#define ADC1_ADCSSFSTAT2_FULL_FULL        (0x00000001)
//--------

#define ADC1_ADCSSFSTAT2_EMPTY_BB        (*((volatile const uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSFSTAT2_OFFSET)*32)+(8*4))))
#define ADC1_ADCSSFSTAT2_FULL_BB         (*((volatile const uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSFSTAT2_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.31 ADCSSOP2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSOP2            (((ADCSSOP2_TypeDef*)(ADC1_BASE + ADC_ADCSSOP2_OFFSET )))
#define ADC1_ADCSSOP2_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSOP2_OFFSET)))


//--------
#define ADC1_ADCSSOP2_R_S0DCOP_MASK       (0x00000001)
#define ADC1_ADCSSOP2_R_S0DCOP_BIT        (0)
#define ADC1_ADCSSOP2_R_S0DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP2_R_S0DCOP_DC         (0x00000001)

#define ADC1_ADCSSOP2_S0DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP2_S0DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP2_S0DCOP_DC          (0x00000001)
//--------

//--------
#define ADC1_ADCSSOP2_R_S1DCOP_MASK       (0x00000010)
#define ADC1_ADCSSOP2_R_S1DCOP_BIT        (4)
#define ADC1_ADCSSOP2_R_S1DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP2_R_S1DCOP_DC         (0x00000010)

#define ADC1_ADCSSOP2_S1DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP2_S1DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP2_S1DCOP_DC          (0x00000001)
//--------

//--------
#define ADC1_ADCSSOP2_R_S2DCOP_MASK       (0x00000100)
#define ADC1_ADCSSOP2_R_S2DCOP_BIT        (8)
#define ADC1_ADCSSOP2_R_S2DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP2_R_S2DCOP_DC         (0x00000100)

#define ADC1_ADCSSOP2_S2DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP2_S2DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP2_S2DCOP_DC          (0x00000001)
//--------

//--------
#define ADC1_ADCSSOP2_R_S3DCOP_MASK       (0x00001000)
#define ADC1_ADCSSOP2_R_S3DCOP_BIT        (12)
#define ADC1_ADCSSOP2_R_S3DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP2_R_S3DCOP_DC         (0x00001000)

#define ADC1_ADCSSOP2_S3DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP2_S3DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP2_S3DCOP_DC          (0x00000001)
//--------

#define ADC1_ADCSSOP2_S0DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP2_OFFSET)*32)+(0*4))))
#define ADC1_ADCSSOP2_S1DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP2_OFFSET)*32)+(4*4))))
#define ADC1_ADCSSOP2_S2DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP2_OFFSET)*32)+(8*4))))
#define ADC1_ADCSSOP2_S3DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP2_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.32 ADCSSDC2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSDC2            (((ADCSSDC2_TypeDef*)(ADC1_BASE + ADC_ADCSSDC2_OFFSET )))
#define ADC1_ADCSSDC2_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSDC2_OFFSET)))

//--------
#define ADC1_ADCSSDC2_R_S0DCSEL_MASK       (0x0000000F)
#define ADC1_ADCSSDC2_R_S0DCSEL_BIT        (0)
#define ADC1_ADCSSDC2_R_S0DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC2_R_S0DCSEL_DC1        (0x00000001)
#define ADC1_ADCSSDC2_R_S0DCSEL_DC2        (0x00000002)
#define ADC1_ADCSSDC2_R_S0DCSEL_DC3        (0x00000003)
#define ADC1_ADCSSDC2_R_S0DCSEL_DC4        (0x00000004)
#define ADC1_ADCSSDC2_R_S0DCSEL_DC5        (0x00000005)
#define ADC1_ADCSSDC2_R_S0DCSEL_DC6        (0x00000006)
#define ADC1_ADCSSDC2_R_S0DCSEL_DC7        (0x00000007)

#define ADC1_ADCSSDC2_S0DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC2_S0DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC2_S0DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC2_S0DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC2_S0DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC2_S0DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC2_S0DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC2_S0DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC2_S0DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC1_ADCSSDC2_R_S1DCSEL_MASK       (0x000000F0)
#define ADC1_ADCSSDC2_R_S1DCSEL_BIT        (4)
#define ADC1_ADCSSDC2_R_S1DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC2_R_S1DCSEL_DC1        (0x00000010)
#define ADC1_ADCSSDC2_R_S1DCSEL_DC2        (0x00000020)
#define ADC1_ADCSSDC2_R_S1DCSEL_DC3        (0x00000030)
#define ADC1_ADCSSDC2_R_S1DCSEL_DC4        (0x00000040)
#define ADC1_ADCSSDC2_R_S1DCSEL_DC5        (0x00000050)
#define ADC1_ADCSSDC2_R_S1DCSEL_DC6        (0x00000060)
#define ADC1_ADCSSDC2_R_S1DCSEL_DC7        (0x00000070)

#define ADC1_ADCSSDC2_S1DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC2_S1DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC2_S1DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC2_S1DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC2_S1DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC2_S1DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC2_S1DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC2_S1DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC2_S1DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC1_ADCSSDC2_R_S2DCSEL_MASK       (0x00000F00)
#define ADC1_ADCSSDC2_R_S2DCSEL_BIT        (8)
#define ADC1_ADCSSDC2_R_S2DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC2_R_S2DCSEL_DC1        (0x00000100)
#define ADC1_ADCSSDC2_R_S2DCSEL_DC2        (0x00000200)
#define ADC1_ADCSSDC2_R_S2DCSEL_DC3        (0x00000300)
#define ADC1_ADCSSDC2_R_S2DCSEL_DC4        (0x00000400)
#define ADC1_ADCSSDC2_R_S2DCSEL_DC5        (0x00000500)
#define ADC1_ADCSSDC2_R_S2DCSEL_DC6        (0x00000600)
#define ADC1_ADCSSDC2_R_S2DCSEL_DC7        (0x00000700)

#define ADC1_ADCSSDC2_S2DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC2_S2DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC2_S2DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC2_S2DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC2_S2DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC2_S2DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC2_S2DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC2_S2DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC2_S2DCSEL_DC7         (0x00000007)
//--------

//--------
#define ADC1_ADCSSDC2_R_S3DCSEL_MASK       (0x0000F000)
#define ADC1_ADCSSDC2_R_S3DCSEL_BIT        (12)
#define ADC1_ADCSSDC2_R_S3DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC2_R_S3DCSEL_DC1        (0x00001000)
#define ADC1_ADCSSDC2_R_S3DCSEL_DC2        (0x00002000)
#define ADC1_ADCSSDC2_R_S3DCSEL_DC3        (0x00003000)
#define ADC1_ADCSSDC2_R_S3DCSEL_DC4        (0x00004000)
#define ADC1_ADCSSDC2_R_S3DCSEL_DC5        (0x00005000)
#define ADC1_ADCSSDC2_R_S3DCSEL_DC6        (0x00006000)
#define ADC1_ADCSSDC2_R_S3DCSEL_DC7        (0x00007000)

#define ADC1_ADCSSDC2_S3DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC2_S3DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC2_S3DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC2_S3DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC2_S3DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC2_S3DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC2_S3DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC2_S3DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC2_S3DCSEL_DC7         (0x00000007)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.33 ADCSSMUX3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSMUX3            (((ADCSSMUX3_TypeDef*)(ADC1_BASE + ADC_ADCSSMUX3_OFFSET )))
#define ADC1_ADCSSMUX3_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSMUX3_OFFSET)))


//--------
#define ADC1_ADCSSMUX3_R_MUX0_MASK       (0x0000000F)
#define ADC1_ADCSSMUX3_R_MUX0_BIT        (0)
#define ADC1_ADCSSMUX3_R_MUX0_AIN0       (0x00000000)
#define ADC1_ADCSSMUX3_R_MUX0_AIN1       (0x00000001)
#define ADC1_ADCSSMUX3_R_MUX0_AIN2       (0x00000002)
#define ADC1_ADCSSMUX3_R_MUX0_AIN3       (0x00000003)
#define ADC1_ADCSSMUX3_R_MUX0_AIN4       (0x00000004)
#define ADC1_ADCSSMUX3_R_MUX0_AIN5       (0x00000005)
#define ADC1_ADCSSMUX3_R_MUX0_AIN6       (0x00000006)
#define ADC1_ADCSSMUX3_R_MUX0_AIN7       (0x00000007)
#define ADC1_ADCSSMUX3_R_MUX0_AIN8       (0x00000008)
#define ADC1_ADCSSMUX3_R_MUX0_AIN9       (0x00000009)
#define ADC1_ADCSSMUX3_R_MUX0_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX3_R_MUX0_AIN11      (0x0000000B)

#define ADC1_ADCSSMUX3_MUX0_MASK       (0x0000000F)
#define ADC1_ADCSSMUX3_MUX0_AIN0       (0x00000000)
#define ADC1_ADCSSMUX3_MUX0_AIN1       (0x00000001)
#define ADC1_ADCSSMUX3_MUX0_AIN2       (0x00000002)
#define ADC1_ADCSSMUX3_MUX0_AIN3       (0x00000003)
#define ADC1_ADCSSMUX3_MUX0_AIN4       (0x00000004)
#define ADC1_ADCSSMUX3_MUX0_AIN5       (0x00000005)
#define ADC1_ADCSSMUX3_MUX0_AIN6       (0x00000006)
#define ADC1_ADCSSMUX3_MUX0_AIN7       (0x00000007)
#define ADC1_ADCSSMUX3_MUX0_AIN8       (0x00000008)
#define ADC1_ADCSSMUX3_MUX0_AIN9       (0x00000009)
#define ADC1_ADCSSMUX3_MUX0_AIN10      (0x0000000A)
#define ADC1_ADCSSMUX3_MUX0_AIN11      (0x0000000B)
//--------


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.34 ADCSSCTL3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSCTL3            (((ADCSSCTL3_TypeDef*)(ADC1_BASE + ADC_ADCSSCTL3_OFFSET )))
#define ADC1_ADCSSCTL3_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSCTL3_OFFSET)))



//--------
#define ADC1_ADCSSCTL3_R_D0_MASK       (0x00000001)
#define ADC1_ADCSSCTL3_R_D0_BIT        (0)
#define ADC1_ADCSSCTL3_R_D0_SINGLE     (0x00000000)
#define ADC1_ADCSSCTL3_R_D0_DIFF       (0x00000001)

#define ADC1_ADCSSCTL3_D0_MASK        (0x00000001)
#define ADC1_ADCSSCTL3_D0_SINGLE      (0x00000000)
#define ADC1_ADCSSCTL3_D0_DIFF        (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL3_R_END0_MASK       (0x00000002)
#define ADC1_ADCSSCTL3_R_END0_BIT        (1)
#define ADC1_ADCSSCTL3_R_END0_CONTINUE   (0x00000000)
#define ADC1_ADCSSCTL3_R_END0_END        (0x00000002)

#define ADC1_ADCSSCTL3_END0_MASK        (0x00000001)
#define ADC1_ADCSSCTL3_END0_CONTINUE    (0x00000000)
#define ADC1_ADCSSCTL3_END0_END         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL3_R_IE0_MASK       (0x00000004)
#define ADC1_ADCSSCTL3_R_IE0_BIT        (2)
#define ADC1_ADCSSCTL3_R_IE0_DIS        (0x00000000)
#define ADC1_ADCSSCTL3_R_IE0_EN         (0x00000004)

#define ADC1_ADCSSCTL3_IE0_MASK       (0x00000001)
#define ADC1_ADCSSCTL3_IE0_DIS        (0x00000000)
#define ADC1_ADCSSCTL3_IE0_EN         (0x00000001)
//--------

//--------
#define ADC1_ADCSSCTL3_R_TS0_MASK         (0x00000008)
#define ADC1_ADCSSCTL3_R_TS0_BIT          (3)
#define ADC1_ADCSSCTL3_R_TS0_INPUT        (0x00000000)
#define ADC1_ADCSSCTL3_R_TS0_TEMP         (0x00000008)

#define ADC1_ADCSSCTL3_TS0_MASK         (0x00000001)
#define ADC1_ADCSSCTL3_TS0_INPUT        (0x00000000)
#define ADC1_ADCSSCTL3_TS0_TEMP         (0x00000001)
//--------

#define ADC1_ADCSSCTL3_D0_BB      (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL3_OFFSET)*32)+(0*4))))
#define ADC1_ADCSSCTL3_END0_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL3_OFFSET)*32)+(1*4))))
#define ADC1_ADCSSCTL3_IE0_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL3_OFFSET)*32)+(2*4))))
#define ADC1_ADCSSCTL3_TS0_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSCTL3_OFFSET)*32)+(3*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.35 ADCSSFIFO3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSFIFO3            (((ADCSSFIFO3_TypeDef*)(ADC1_BASE + ADC_ADCSSFIFO3_OFFSET )))
#define ADC1_ADCSSFIFO3_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCSSFIFO3_OFFSET)))

//--------
#define ADC1_ADCSSFIFO3_R_DATA_MASK       (0x00000FFF)
#define ADC1_ADCSSFIFO3_R_DATA_BIT        (0)

#define ADC1_ADCSSFIFO3_DATA_MASK         (0x00000FFF)
//--------



////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.36 ADCSSFSTAT3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSFSTAT3            (((ADCSSFSTAT3_TypeDef*)(ADC1_BASE + ADC_ADCSSFSTAT3_OFFSET )))
#define ADC1_ADCSSFSTAT3_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCSSFSTAT3_OFFSET)))


//--------
#define ADC1_ADCSSFSTAT3_R_TPTR_MASK       (0x0000000F)
#define ADC1_ADCSSFSTAT3_R_TPTR_BIT        (0)
#define ADC1_ADCSSFSTAT3_R_TPTR_POS0       (0x00000000)

#define ADC1_ADCSSFSTAT3_TPTR_MASK       (0x0000000F)
#define ADC1_ADCSSFSTAT3_TPTR_POS0       (0x00000000)
//--------

//--------
#define ADC1_ADCSSFSTAT3_R_HPTR_MASK       (0x000000F0)
#define ADC1_ADCSSFSTAT3_R_HPTR_BIT        (4)
#define ADC1_ADCSSFSTAT3_R_HPTR_POS0       (0x00000000)

#define ADC1_ADCSSFSTAT3_HPTR_MASK       (0x0000000F)
#define ADC1_ADCSSFSTAT3_HPTR_POS0       (0x00000000)
//--------

//--------
#define ADC1_ADCSSFSTAT3_R_EMPTY_MASK       (0x00000100)
#define ADC1_ADCSSFSTAT3_R_EMPTY_BIT        (8)
#define ADC1_ADCSSFSTAT3_R_EMPTY_NOEMPTY    (0x00000000)
#define ADC1_ADCSSFSTAT3_R_EMPTY_EMPTY      (0x00000100)

#define ADC1_ADCSSFSTAT3_EMPTY_MASK        (0x00000001)
#define ADC1_ADCSSFSTAT3_EMPTY_NOEMPTY     (0x00000000)
#define ADC1_ADCSSFSTAT3_EMPTY_EMPTY       (0x00000001)
//--------

//--------
#define ADC1_ADCSSFSTAT3_R_FULL_MASK       (0x00000100)
#define ADC1_ADCSSFSTAT3_R_FULL_BIT        (8)
#define ADC1_ADCSSFSTAT3_R_FULL_NOFULL     (0x00000000)
#define ADC1_ADCSSFSTAT3_R_FULL_FULL       (0x00000100)

#define ADC1_ADCSSFSTAT3_FULL_MASK        (0x00000001)
#define ADC1_ADCSSFSTAT3_FULL_NOFULL      (0x00000000)
#define ADC1_ADCSSFSTAT3_FULL_FULL        (0x00000001)
//--------

#define ADC1_ADCSSFSTAT3_EMPTY_BB        (*((volatile const uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSFSTAT3_OFFSET)*32)+(8*4))))
#define ADC1_ADCSSFSTAT3_FULL_BB         (*((volatile const uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSFSTAT3_OFFSET)*32)+(12*4))))




////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.37 ADCSSOP3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSOP3            (((ADCSSOP3_TypeDef*)(ADC1_BASE + ADC_ADCSSOP3_OFFSET )))
#define ADC1_ADCSSOP3_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSOP3_OFFSET)))


//--------
#define ADC1_ADCSSOP3_R_S0DCOP_MASK       (0x00000001)
#define ADC1_ADCSSOP3_R_S0DCOP_BIT        (0)
#define ADC1_ADCSSOP3_R_S0DCOP_SS         (0x00000000)
#define ADC1_ADCSSOP3_R_S0DCOP_DC         (0x00000001)

#define ADC1_ADCSSOP3_S0DCOP_MASK        (0x00000001)
#define ADC1_ADCSSOP3_S0DCOP_SS          (0x00000000)
#define ADC1_ADCSSOP3_S0DCOP_DC          (0x00000001)
//--------

#define ADC1_ADCSSOP3_S0DCOP_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCSSOP3_OFFSET)*32)+(0*4))))



////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.38 ADCSSDC3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCSSDC3            (((ADCSSDC3_TypeDef*)(ADC1_BASE + ADC_ADCSSDC3_OFFSET )))
#define ADC1_ADCSSDC3_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCSSDC3_OFFSET)))

//--------
#define ADC1_ADCSSDC3_R_S0DCSEL_MASK       (0x0000000F)
#define ADC1_ADCSSDC3_R_S0DCSEL_BIT        (0)
#define ADC1_ADCSSDC3_R_S0DCSEL_DC0        (0x00000000)
#define ADC1_ADCSSDC3_R_S0DCSEL_DC1        (0x00000001)
#define ADC1_ADCSSDC3_R_S0DCSEL_DC2        (0x00000002)
#define ADC1_ADCSSDC3_R_S0DCSEL_DC3        (0x00000003)
#define ADC1_ADCSSDC3_R_S0DCSEL_DC4        (0x00000004)
#define ADC1_ADCSSDC3_R_S0DCSEL_DC5        (0x00000005)
#define ADC1_ADCSSDC3_R_S0DCSEL_DC6        (0x00000006)
#define ADC1_ADCSSDC3_R_S0DCSEL_DC7        (0x00000007)

#define ADC1_ADCSSDC3_S0DCSEL_MASK        (0x0000000F)
#define ADC1_ADCSSDC3_S0DCSEL_DC0         (0x00000000)
#define ADC1_ADCSSDC3_S0DCSEL_DC1         (0x00000001)
#define ADC1_ADCSSDC3_S0DCSEL_DC2         (0x00000002)
#define ADC1_ADCSSDC3_S0DCSEL_DC3         (0x00000003)
#define ADC1_ADCSSDC3_S0DCSEL_DC4         (0x00000004)
#define ADC1_ADCSSDC3_S0DCSEL_DC5         (0x00000005)
#define ADC1_ADCSSDC3_S0DCSEL_DC6         (0x00000006)
#define ADC1_ADCSSDC3_S0DCSEL_DC7         (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.39 ADCDCRIC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCRIC            (((ADCDCRIC_TypeDef*)(ADC1_BASE + ADC_ADCDCRIC_OFFSET )))
#define ADC1_ADCDCRIC_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCRIC_OFFSET)))

//--------
#define ADC1_ADCDCRIC_R_DCINT0_MASK      (0x00000001)
#define ADC1_ADCDCRIC_R_DCINT0_BIT       (0)
#define ADC1_ADCDCRIC_R_DCINT0_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCINT0_RESET     (0x00000001)

#define ADC1_ADCDCRIC_DCINT0_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCINT0_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCINT0_RESET       (0x00000001)
//--------

//--------
#define ADC1_ADCDCRIC_R_DCINT1_MASK      (0x00000002)
#define ADC1_ADCDCRIC_R_DCINT1_BIT       (1)
#define ADC1_ADCDCRIC_R_DCINT1_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCINT1_RESET     (0x00000002)

#define ADC1_ADCDCRIC_DCINT1_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCINT1_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCINT1_RESET       (0x00000001)
//--------

//--------
#define ADC1_ADCDCRIC_R_DCINT2_MASK      (0x00000004)
#define ADC1_ADCDCRIC_R_DCINT2_BIT       (2)
#define ADC1_ADCDCRIC_R_DCINT2_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCINT2_RESET     (0x00000004)

#define ADC1_ADCDCRIC_DCINT2_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCINT2_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCINT2_RESET       (0x00000001)
//--------

//--------
#define ADC1_ADCDCRIC_R_DCINT3_MASK      (0x00000008)
#define ADC1_ADCDCRIC_R_DCINT3_BIT       (3)
#define ADC1_ADCDCRIC_R_DCINT3_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCINT3_RESET     (0x00000008)

#define ADC1_ADCDCRIC_DCINT3_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCINT3_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCINT3_RESET       (0x00000001)
//--------

//--------
#define ADC1_ADCDCRIC_R_DCINT4_MASK      (0x00000010)
#define ADC1_ADCDCRIC_R_DCINT4_BIT       (4)
#define ADC1_ADCDCRIC_R_DCINT4_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCINT4_RESET     (0x00000010)

#define ADC1_ADCDCRIC_DCINT4_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCINT4_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCINT4_RESET       (0x00000001)
//--------

//--------
#define ADC1_ADCDCRIC_R_DCINT5_MASK      (0x00000020)
#define ADC1_ADCDCRIC_R_DCINT5_BIT       (5)
#define ADC1_ADCDCRIC_R_DCINT5_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCINT5_RESET     (0x00000020)

#define ADC1_ADCDCRIC_DCINT5_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCINT5_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCINT5_RESET       (0x00000001)
//--------

//--------
#define ADC1_ADCDCRIC_R_DCINT6_MASK      (0x00000040)
#define ADC1_ADCDCRIC_R_DCINT6_BIT       (6)
#define ADC1_ADCDCRIC_R_DCINT6_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCINT6_RESET     (0x00000040)

#define ADC1_ADCDCRIC_DCINT6_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCINT6_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCINT6_RESET       (0x00000001)
//--------

//--------
#define ADC1_ADCDCRIC_R_DCINT7_MASK      (0x00000080)
#define ADC1_ADCDCRIC_R_DCINT7_BIT       (7)
#define ADC1_ADCDCRIC_R_DCINT7_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCINT7_RESET     (0x00000080)

#define ADC1_ADCDCRIC_DCINT7_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCINT7_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCINT7_RESET       (0x00000001)
//--------


//--------
#define ADC1_ADCDCRIC_R_DCTRIG0_MASK      (0x00010000)
#define ADC1_ADCDCRIC_R_DCTRIG0_BIT       (16)
#define ADC1_ADCDCRIC_R_DCTRIG0_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCTRIG0_RESET     (0x00010000)

#define ADC1_ADCDCRIC_DCTRIG0_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCTRIG0_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCTRIG0_RESET       (0x00000001)
//--------

//--------
#define ADC1_ADCDCRIC_R_DCTRIG1_MASK      (0x00020000)
#define ADC1_ADCDCRIC_R_DCTRIG1_BIT       (17)
#define ADC1_ADCDCRIC_R_DCTRIG1_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCTRIG1_RESET     (0x00020000)

#define ADC1_ADCDCRIC_DCTRIG1_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCTRIG1_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCTRIG1_RESET       (0x00000001)
//--------

//--------
#define ADC1_ADCDCRIC_R_DCTRIG2_MASK      (0x00040000)
#define ADC1_ADCDCRIC_R_DCTRIG2_BIT       (18)
#define ADC1_ADCDCRIC_R_DCTRIG2_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCTRIG2_RESET     (0x00040000)

#define ADC1_ADCDCRIC_DCTRIG2_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCTRIG2_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCTRIG2_RESET       (0x00000001)
//--------

//--------
#define ADC1_ADCDCRIC_R_DCTRIG3_MASK      (0x00080000)
#define ADC1_ADCDCRIC_R_DCTRIG3_BIT       (19)
#define ADC1_ADCDCRIC_R_DCTRIG3_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCTRIG3_RESET     (0x00080000)

#define ADC1_ADCDCRIC_DCTRIG3_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCTRIG3_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCTRIG3_RESET       (0x00000001)
//--------

//--------
#define ADC1_ADCDCRIC_R_DCTRIG4_MASK      (0x00100000)
#define ADC1_ADCDCRIC_R_DCTRIG4_BIT       (20)
#define ADC1_ADCDCRIC_R_DCTRIG4_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCTRIG4_RESET     (0x00100000)

#define ADC1_ADCDCRIC_DCTRIG4_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCTRIG4_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCTRIG4_RESET       (0x00000001)
//--------

//--------
#define ADC1_ADCDCRIC_R_DCTRIG5_MASK      (0x00200000)
#define ADC1_ADCDCRIC_R_DCTRIG5_BIT       (21)
#define ADC1_ADCDCRIC_R_DCTRIG5_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCTRIG5_RESET     (0x00200000)

#define ADC1_ADCDCRIC_DCTRIG5_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCTRIG5_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCTRIG5_RESET       (0x00000001)
//--------

//--------
#define ADC1_ADCDCRIC_R_DCTRIG6_MASK      (0x00400000)
#define ADC1_ADCDCRIC_R_DCTRIG6_BIT       (22)
#define ADC1_ADCDCRIC_R_DCTRIG6_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCTRIG6_RESET     (0x00400000)

#define ADC1_ADCDCRIC_DCTRIG6_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCTRIG6_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCTRIG6_RESET       (0x00000001)
//--------

//--------
#define ADC1_ADCDCRIC_R_DCTRIG7_MASK      (0x00800000)
#define ADC1_ADCDCRIC_R_DCTRIG7_BIT       (23)
#define ADC1_ADCDCRIC_R_DCTRIG7_NA        (0x00000000)
#define ADC1_ADCDCRIC_R_DCTRIG7_RESET     (0x00800000)

#define ADC1_ADCDCRIC_DCTRIG7_MASK        (0x00000001)
#define ADC1_ADCDCRIC_DCTRIG7_NA          (0x00000000)
#define ADC1_ADCDCRIC_DCTRIG7_RESET       (0x00000001)
//--------

#define ADC1_ADCDCRIC_DCINT0_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(0*4))))
#define ADC1_ADCDCRIC_DCINT1_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(1*4))))
#define ADC1_ADCDCRIC_DCINT2_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(2*4))))
#define ADC1_ADCDCRIC_DCINT3_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(3*4))))
#define ADC1_ADCDCRIC_DCINT4_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(4*4))))
#define ADC1_ADCDCRIC_DCINT5_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(5*4))))
#define ADC1_ADCDCRIC_DCINT6_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(6*4))))
#define ADC1_ADCDCRIC_DCINT7_BB     (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(7*4))))
#define ADC1_ADCDCRIC_DCTRIG0_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(16*4))))
#define ADC1_ADCDCRIC_DCTRIG1_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(17*4))))
#define ADC1_ADCDCRIC_DCTRIG2_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(18*4))))
#define ADC1_ADCDCRIC_DCTRIG3_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(19*4))))
#define ADC1_ADCDCRIC_DCTRIG4_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(20*4))))
#define ADC1_ADCDCRIC_DCTRIG5_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(21*4))))
#define ADC1_ADCDCRIC_DCTRIG6_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(22*4))))
#define ADC1_ADCDCRIC_DCTRIG7_BB    (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCRIC_OFFSET)*32)+(23*4))))






////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.40 ADCDCCTL0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCTL0            (((ADCDCCTL0_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL0_OFFSET )))
#define ADC1_ADCDCCTL0_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL0_OFFSET)))

//--------
#define ADC1_ADCDCCTL0_R_CIM_MASK      (0x00000003)
#define ADC1_ADCDCCTL0_R_CIM_BIT       (0)
#define ADC1_ADCDCCTL0_R_CIM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL0_R_CIM_ONCE      (0x00000001)
#define ADC1_ADCDCCTL0_R_CIM_HYSALWAYS (0x00000002)
#define ADC1_ADCDCCTL0_R_CIM_HYSONCE   (0x00000003)

#define ADC1_ADCDCCTL0_CIM_MASK        (0x00000003)
#define ADC1_ADCDCCTL0_CIM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL0_CIM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL0_CIM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL0_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL0_R_CIC_MASK      (0x0000000C)
#define ADC1_ADCDCCTL0_R_CIC_BIT       (2)
#define ADC1_ADCDCCTL0_R_CIC_LOW       (0x00000000)
#define ADC1_ADCDCCTL0_R_CIC_MID       (0x00000004)
#define ADC1_ADCDCCTL0_R_CIC_HIGH      (0x0000000C)

#define ADC1_ADCDCCTL0_CIC_MASK        (0x00000003)
#define ADC1_ADCDCCTL0_CIC_LOW         (0x00000000)
#define ADC1_ADCDCCTL0_CIC_MID         (0x00000001)
#define ADC1_ADCDCCTL0_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL0_R_CIE_MASK      (0x00000010)
#define ADC1_ADCDCCTL0_R_CIE_BIT       (4)
#define ADC1_ADCDCCTL0_R_CIE_DIS       (0x00000000)
#define ADC1_ADCDCCTL0_R_CIE_EN        (0x00000010)

#define ADC1_ADCDCCTL0_CIE_MASK        (0x00000001)
#define ADC1_ADCDCCTL0_CIE_DIS         (0x00000000)
#define ADC1_ADCDCCTL0_CIE_EN          (0x00000001)
//--------


//--------
#define ADC1_ADCDCCTL0_R_CTM_MASK      (0x00000300)
#define ADC1_ADCDCCTL0_R_CTM_BIT       (8)
#define ADC1_ADCDCCTL0_R_CTM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL0_R_CTM_ONCE      (0x00000100)
#define ADC1_ADCDCCTL0_R_CTM_HYSALWAYS (0x00000200)
#define ADC1_ADCDCCTL0_R_CTM_HYSONCE   (0x00000300)

#define ADC1_ADCDCCTL0_CTM_MASK        (0x00000003)
#define ADC1_ADCDCCTL0_CTM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL0_CTM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL0_CTM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL0_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL0_R_CTC_MASK      (0x00000C00)
#define ADC1_ADCDCCTL0_R_CTC_BIT       (10)
#define ADC1_ADCDCCTL0_R_CTC_LOW       (0x00000000)
#define ADC1_ADCDCCTL0_R_CTC_MID       (0x00000400)
#define ADC1_ADCDCCTL0_R_CTC_HIGH      (0x00000C00)

#define ADC1_ADCDCCTL0_CTC_MASK        (0x00000003)
#define ADC1_ADCDCCTL0_CTC_LOW         (0x00000000)
#define ADC1_ADCDCCTL0_CTC_MID         (0x00000001)
#define ADC1_ADCDCCTL0_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL0_R_CTE_MASK      (0x00001000)
#define ADC1_ADCDCCTL0_R_CTE_BIT       (12)
#define ADC1_ADCDCCTL0_R_CTE_DIS       (0x00000000)
#define ADC1_ADCDCCTL0_R_CTE_EN        (0x00001000)

#define ADC1_ADCDCCTL0_CTE_MASK        (0x00000001)
#define ADC1_ADCDCCTL0_CTE_DIS         (0x00000000)
#define ADC1_ADCDCCTL0_CTE_EN          (0x00000001)
//--------

#define ADC1_ADCDCCTL0_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL0_OFFSET)*32)+(4*4))))
#define ADC1_ADCDCCTL0_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL0_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.41 ADCDCCTL1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCTL1            (((ADCDCCTL1_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL1_OFFSET )))
#define ADC1_ADCDCCTL1_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL1_OFFSET)))

//--------
#define ADC1_ADCDCCTL1_R_CIM_MASK      (0x00000003)
#define ADC1_ADCDCCTL1_R_CIM_BIT       (0)
#define ADC1_ADCDCCTL1_R_CIM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL1_R_CIM_ONCE      (0x00000001)
#define ADC1_ADCDCCTL1_R_CIM_HYSALWAYS (0x00000002)
#define ADC1_ADCDCCTL1_R_CIM_HYSONCE   (0x00000003)

#define ADC1_ADCDCCTL1_CIM_MASK        (0x00000003)
#define ADC1_ADCDCCTL1_CIM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL1_CIM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL1_CIM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL1_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL1_R_CIC_MASK      (0x0000000C)
#define ADC1_ADCDCCTL1_R_CIC_BIT       (2)
#define ADC1_ADCDCCTL1_R_CIC_LOW       (0x00000000)
#define ADC1_ADCDCCTL1_R_CIC_MID       (0x00000004)
#define ADC1_ADCDCCTL1_R_CIC_HIGH      (0x0000000C)

#define ADC1_ADCDCCTL1_CIC_MASK        (0x00000003)
#define ADC1_ADCDCCTL1_CIC_LOW         (0x00000000)
#define ADC1_ADCDCCTL1_CIC_MID         (0x00000001)
#define ADC1_ADCDCCTL1_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL1_R_CIE_MASK      (0x00000010)
#define ADC1_ADCDCCTL1_R_CIE_BIT       (4)
#define ADC1_ADCDCCTL1_R_CIE_DIS       (0x00000000)
#define ADC1_ADCDCCTL1_R_CIE_EN        (0x00000010)

#define ADC1_ADCDCCTL1_CIE_MASK        (0x00000001)
#define ADC1_ADCDCCTL1_CIE_DIS         (0x00000000)
#define ADC1_ADCDCCTL1_CIE_EN          (0x00000001)
//--------


//--------
#define ADC1_ADCDCCTL1_R_CTM_MASK      (0x00000300)
#define ADC1_ADCDCCTL1_R_CTM_BIT       (8)
#define ADC1_ADCDCCTL1_R_CTM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL1_R_CTM_ONCE      (0x00000100)
#define ADC1_ADCDCCTL1_R_CTM_HYSALWAYS (0x00000200)
#define ADC1_ADCDCCTL1_R_CTM_HYSONCE   (0x00000300)

#define ADC1_ADCDCCTL1_CTM_MASK        (0x00000003)
#define ADC1_ADCDCCTL1_CTM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL1_CTM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL1_CTM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL1_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL1_R_CTC_MASK      (0x00000C00)
#define ADC1_ADCDCCTL1_R_CTC_BIT       (10)
#define ADC1_ADCDCCTL1_R_CTC_LOW       (0x00000000)
#define ADC1_ADCDCCTL1_R_CTC_MID       (0x00000400)
#define ADC1_ADCDCCTL1_R_CTC_HIGH      (0x00000C00)

#define ADC1_ADCDCCTL1_CTC_MASK        (0x00000003)
#define ADC1_ADCDCCTL1_CTC_LOW         (0x00000000)
#define ADC1_ADCDCCTL1_CTC_MID         (0x00000001)
#define ADC1_ADCDCCTL1_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL1_R_CTE_MASK      (0x00001000)
#define ADC1_ADCDCCTL1_R_CTE_BIT       (12)
#define ADC1_ADCDCCTL1_R_CTE_DIS       (0x00000000)
#define ADC1_ADCDCCTL1_R_CTE_EN        (0x00001000)

#define ADC1_ADCDCCTL1_CTE_MASK        (0x00000001)
#define ADC1_ADCDCCTL1_CTE_DIS         (0x00000000)
#define ADC1_ADCDCCTL1_CTE_EN          (0x00000001)
//--------

#define ADC1_ADCDCCTL1_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL1_OFFSET)*32)+(4*4))))
#define ADC1_ADCDCCTL1_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL1_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.42 ADCDCCTL2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCTL2            (((ADCDCCTL2_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL2_OFFSET )))
#define ADC1_ADCDCCTL2_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL2_OFFSET)))

//--------
#define ADC1_ADCDCCTL2_R_CIM_MASK      (0x00000003)
#define ADC1_ADCDCCTL2_R_CIM_BIT       (0)
#define ADC1_ADCDCCTL2_R_CIM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL2_R_CIM_ONCE      (0x00000001)
#define ADC1_ADCDCCTL2_R_CIM_HYSALWAYS (0x00000002)
#define ADC1_ADCDCCTL2_R_CIM_HYSONCE   (0x00000003)

#define ADC1_ADCDCCTL2_CIM_MASK        (0x00000003)
#define ADC1_ADCDCCTL2_CIM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL2_CIM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL2_CIM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL2_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL2_R_CIC_MASK      (0x0000000C)
#define ADC1_ADCDCCTL2_R_CIC_BIT       (2)
#define ADC1_ADCDCCTL2_R_CIC_LOW       (0x00000000)
#define ADC1_ADCDCCTL2_R_CIC_MID       (0x00000004)
#define ADC1_ADCDCCTL2_R_CIC_HIGH      (0x0000000C)

#define ADC1_ADCDCCTL2_CIC_MASK        (0x00000003)
#define ADC1_ADCDCCTL2_CIC_LOW         (0x00000000)
#define ADC1_ADCDCCTL2_CIC_MID         (0x00000001)
#define ADC1_ADCDCCTL2_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL2_R_CIE_MASK      (0x00000010)
#define ADC1_ADCDCCTL2_R_CIE_BIT       (4)
#define ADC1_ADCDCCTL2_R_CIE_DIS       (0x00000000)
#define ADC1_ADCDCCTL2_R_CIE_EN        (0x00000010)

#define ADC1_ADCDCCTL2_CIE_MASK        (0x00000001)
#define ADC1_ADCDCCTL2_CIE_DIS         (0x00000000)
#define ADC1_ADCDCCTL2_CIE_EN          (0x00000001)
//--------


//--------
#define ADC1_ADCDCCTL2_R_CTM_MASK      (0x00000300)
#define ADC1_ADCDCCTL2_R_CTM_BIT       (8)
#define ADC1_ADCDCCTL2_R_CTM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL2_R_CTM_ONCE      (0x00000100)
#define ADC1_ADCDCCTL2_R_CTM_HYSALWAYS (0x00000200)
#define ADC1_ADCDCCTL2_R_CTM_HYSONCE   (0x00000300)

#define ADC1_ADCDCCTL2_CTM_MASK        (0x00000003)
#define ADC1_ADCDCCTL2_CTM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL2_CTM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL2_CTM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL2_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL2_R_CTC_MASK      (0x00000C00)
#define ADC1_ADCDCCTL2_R_CTC_BIT       (10)
#define ADC1_ADCDCCTL2_R_CTC_LOW       (0x00000000)
#define ADC1_ADCDCCTL2_R_CTC_MID       (0x00000400)
#define ADC1_ADCDCCTL2_R_CTC_HIGH      (0x00000C00)

#define ADC1_ADCDCCTL2_CTC_MASK        (0x00000003)
#define ADC1_ADCDCCTL2_CTC_LOW         (0x00000000)
#define ADC1_ADCDCCTL2_CTC_MID         (0x00000001)
#define ADC1_ADCDCCTL2_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL2_R_CTE_MASK      (0x00001000)
#define ADC1_ADCDCCTL2_R_CTE_BIT       (12)
#define ADC1_ADCDCCTL2_R_CTE_DIS       (0x00000000)
#define ADC1_ADCDCCTL2_R_CTE_EN        (0x00001000)

#define ADC1_ADCDCCTL2_CTE_MASK        (0x00000001)
#define ADC1_ADCDCCTL2_CTE_DIS         (0x00000000)
#define ADC1_ADCDCCTL2_CTE_EN          (0x00000001)
//--------

#define ADC1_ADCDCCTL2_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL2_OFFSET)*32)+(4*4))))
#define ADC1_ADCDCCTL2_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL2_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.43 ADCDCCTL3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCTL3            (((ADCDCCTL3_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL3_OFFSET )))
#define ADC1_ADCDCCTL3_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL3_OFFSET)))

//--------
#define ADC1_ADCDCCTL3_R_CIM_MASK      (0x00000003)
#define ADC1_ADCDCCTL3_R_CIM_BIT       (0)
#define ADC1_ADCDCCTL3_R_CIM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL3_R_CIM_ONCE      (0x00000001)
#define ADC1_ADCDCCTL3_R_CIM_HYSALWAYS (0x00000002)
#define ADC1_ADCDCCTL3_R_CIM_HYSONCE   (0x00000003)

#define ADC1_ADCDCCTL3_CIM_MASK        (0x00000003)
#define ADC1_ADCDCCTL3_CIM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL3_CIM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL3_CIM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL3_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL3_R_CIC_MASK      (0x0000000C)
#define ADC1_ADCDCCTL3_R_CIC_BIT       (2)
#define ADC1_ADCDCCTL3_R_CIC_LOW       (0x00000000)
#define ADC1_ADCDCCTL3_R_CIC_MID       (0x00000004)
#define ADC1_ADCDCCTL3_R_CIC_HIGH      (0x0000000C)

#define ADC1_ADCDCCTL3_CIC_MASK        (0x00000003)
#define ADC1_ADCDCCTL3_CIC_LOW         (0x00000000)
#define ADC1_ADCDCCTL3_CIC_MID         (0x00000001)
#define ADC1_ADCDCCTL3_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL3_R_CIE_MASK      (0x00000010)
#define ADC1_ADCDCCTL3_R_CIE_BIT       (4)
#define ADC1_ADCDCCTL3_R_CIE_DIS       (0x00000000)
#define ADC1_ADCDCCTL3_R_CIE_EN        (0x00000010)

#define ADC1_ADCDCCTL3_CIE_MASK        (0x00000001)
#define ADC1_ADCDCCTL3_CIE_DIS         (0x00000000)
#define ADC1_ADCDCCTL3_CIE_EN          (0x00000001)
//--------


//--------
#define ADC1_ADCDCCTL3_R_CTM_MASK      (0x00000300)
#define ADC1_ADCDCCTL3_R_CTM_BIT       (8)
#define ADC1_ADCDCCTL3_R_CTM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL3_R_CTM_ONCE      (0x00000100)
#define ADC1_ADCDCCTL3_R_CTM_HYSALWAYS (0x00000200)
#define ADC1_ADCDCCTL3_R_CTM_HYSONCE   (0x00000300)

#define ADC1_ADCDCCTL3_CTM_MASK        (0x00000003)
#define ADC1_ADCDCCTL3_CTM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL3_CTM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL3_CTM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL3_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL3_R_CTC_MASK      (0x00000C00)
#define ADC1_ADCDCCTL3_R_CTC_BIT       (10)
#define ADC1_ADCDCCTL3_R_CTC_LOW       (0x00000000)
#define ADC1_ADCDCCTL3_R_CTC_MID       (0x00000400)
#define ADC1_ADCDCCTL3_R_CTC_HIGH      (0x00000C00)

#define ADC1_ADCDCCTL3_CTC_MASK        (0x00000003)
#define ADC1_ADCDCCTL3_CTC_LOW         (0x00000000)
#define ADC1_ADCDCCTL3_CTC_MID         (0x00000001)
#define ADC1_ADCDCCTL3_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL3_R_CTE_MASK      (0x00001000)
#define ADC1_ADCDCCTL3_R_CTE_BIT       (12)
#define ADC1_ADCDCCTL3_R_CTE_DIS       (0x00000000)
#define ADC1_ADCDCCTL3_R_CTE_EN        (0x00001000)

#define ADC1_ADCDCCTL3_CTE_MASK        (0x00000001)
#define ADC1_ADCDCCTL3_CTE_DIS         (0x00000000)
#define ADC1_ADCDCCTL3_CTE_EN          (0x00000001)
//--------

#define ADC1_ADCDCCTL3_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL3_OFFSET)*32)+(4*4))))
#define ADC1_ADCDCCTL3_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL3_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.44 ADCDCCTL4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCTL4            (((ADCDCCTL4_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL4_OFFSET )))
#define ADC1_ADCDCCTL4_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL4_OFFSET)))

//--------
#define ADC1_ADCDCCTL4_R_CIM_MASK      (0x00000003)
#define ADC1_ADCDCCTL4_R_CIM_BIT       (0)
#define ADC1_ADCDCCTL4_R_CIM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL4_R_CIM_ONCE      (0x00000001)
#define ADC1_ADCDCCTL4_R_CIM_HYSALWAYS (0x00000002)
#define ADC1_ADCDCCTL4_R_CIM_HYSONCE   (0x00000003)

#define ADC1_ADCDCCTL4_CIM_MASK        (0x00000003)
#define ADC1_ADCDCCTL4_CIM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL4_CIM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL4_CIM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL4_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL4_R_CIC_MASK      (0x0000000C)
#define ADC1_ADCDCCTL4_R_CIC_BIT       (2)
#define ADC1_ADCDCCTL4_R_CIC_LOW       (0x00000000)
#define ADC1_ADCDCCTL4_R_CIC_MID       (0x00000004)
#define ADC1_ADCDCCTL4_R_CIC_HIGH      (0x0000000C)

#define ADC1_ADCDCCTL4_CIC_MASK        (0x00000003)
#define ADC1_ADCDCCTL4_CIC_LOW         (0x00000000)
#define ADC1_ADCDCCTL4_CIC_MID         (0x00000001)
#define ADC1_ADCDCCTL4_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL4_R_CIE_MASK      (0x00000010)
#define ADC1_ADCDCCTL4_R_CIE_BIT       (4)
#define ADC1_ADCDCCTL4_R_CIE_DIS       (0x00000000)
#define ADC1_ADCDCCTL4_R_CIE_EN        (0x00000010)

#define ADC1_ADCDCCTL4_CIE_MASK        (0x00000001)
#define ADC1_ADCDCCTL4_CIE_DIS         (0x00000000)
#define ADC1_ADCDCCTL4_CIE_EN          (0x00000001)
//--------


//--------
#define ADC1_ADCDCCTL4_R_CTM_MASK      (0x00000300)
#define ADC1_ADCDCCTL4_R_CTM_BIT       (8)
#define ADC1_ADCDCCTL4_R_CTM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL4_R_CTM_ONCE      (0x00000100)
#define ADC1_ADCDCCTL4_R_CTM_HYSALWAYS (0x00000200)
#define ADC1_ADCDCCTL4_R_CTM_HYSONCE   (0x00000300)

#define ADC1_ADCDCCTL4_CTM_MASK        (0x00000003)
#define ADC1_ADCDCCTL4_CTM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL4_CTM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL4_CTM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL4_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL4_R_CTC_MASK      (0x00000C00)
#define ADC1_ADCDCCTL4_R_CTC_BIT       (10)
#define ADC1_ADCDCCTL4_R_CTC_LOW       (0x00000000)
#define ADC1_ADCDCCTL4_R_CTC_MID       (0x00000400)
#define ADC1_ADCDCCTL4_R_CTC_HIGH      (0x00000C00)

#define ADC1_ADCDCCTL4_CTC_MASK        (0x00000003)
#define ADC1_ADCDCCTL4_CTC_LOW         (0x00000000)
#define ADC1_ADCDCCTL4_CTC_MID         (0x00000001)
#define ADC1_ADCDCCTL4_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL4_R_CTE_MASK      (0x00001000)
#define ADC1_ADCDCCTL4_R_CTE_BIT       (12)
#define ADC1_ADCDCCTL4_R_CTE_DIS       (0x00000000)
#define ADC1_ADCDCCTL4_R_CTE_EN        (0x00001000)

#define ADC1_ADCDCCTL4_CTE_MASK        (0x00000001)
#define ADC1_ADCDCCTL4_CTE_DIS         (0x00000000)
#define ADC1_ADCDCCTL4_CTE_EN          (0x00000001)
//--------

#define ADC1_ADCDCCTL4_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL4_OFFSET)*32)+(4*4))))
#define ADC1_ADCDCCTL4_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL4_OFFSET)*32)+(12*4))))


////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.45 ADCDCCTL5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCTL5            (((ADCDCCTL5_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL5_OFFSET )))
#define ADC1_ADCDCCTL5_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL5_OFFSET)))


//--------
#define ADC1_ADCDCCTL5_R_CIM_MASK      (0x00000003)
#define ADC1_ADCDCCTL5_R_CIM_BIT       (0)
#define ADC1_ADCDCCTL5_R_CIM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL5_R_CIM_ONCE      (0x00000001)
#define ADC1_ADCDCCTL5_R_CIM_HYSALWAYS (0x00000002)
#define ADC1_ADCDCCTL5_R_CIM_HYSONCE   (0x00000003)

#define ADC1_ADCDCCTL5_CIM_MASK        (0x00000003)
#define ADC1_ADCDCCTL5_CIM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL5_CIM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL5_CIM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL5_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL5_R_CIC_MASK      (0x0000000C)
#define ADC1_ADCDCCTL5_R_CIC_BIT       (2)
#define ADC1_ADCDCCTL5_R_CIC_LOW       (0x00000000)
#define ADC1_ADCDCCTL5_R_CIC_MID       (0x00000004)
#define ADC1_ADCDCCTL5_R_CIC_HIGH      (0x0000000C)

#define ADC1_ADCDCCTL5_CIC_MASK        (0x00000003)
#define ADC1_ADCDCCTL5_CIC_LOW         (0x00000000)
#define ADC1_ADCDCCTL5_CIC_MID         (0x00000001)
#define ADC1_ADCDCCTL5_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL5_R_CIE_MASK      (0x00000010)
#define ADC1_ADCDCCTL5_R_CIE_BIT       (4)
#define ADC1_ADCDCCTL5_R_CIE_DIS       (0x00000000)
#define ADC1_ADCDCCTL5_R_CIE_EN        (0x00000010)

#define ADC1_ADCDCCTL5_CIE_MASK        (0x00000001)
#define ADC1_ADCDCCTL5_CIE_DIS         (0x00000000)
#define ADC1_ADCDCCTL5_CIE_EN          (0x00000001)
//--------


//--------
#define ADC1_ADCDCCTL5_R_CTM_MASK      (0x00000300)
#define ADC1_ADCDCCTL5_R_CTM_BIT       (8)
#define ADC1_ADCDCCTL5_R_CTM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL5_R_CTM_ONCE      (0x00000100)
#define ADC1_ADCDCCTL5_R_CTM_HYSALWAYS (0x00000200)
#define ADC1_ADCDCCTL5_R_CTM_HYSONCE   (0x00000300)

#define ADC1_ADCDCCTL5_CTM_MASK        (0x00000003)
#define ADC1_ADCDCCTL5_CTM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL5_CTM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL5_CTM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL5_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL5_R_CTC_MASK      (0x00000C00)
#define ADC1_ADCDCCTL5_R_CTC_BIT       (10)
#define ADC1_ADCDCCTL5_R_CTC_LOW       (0x00000000)
#define ADC1_ADCDCCTL5_R_CTC_MID       (0x00000400)
#define ADC1_ADCDCCTL5_R_CTC_HIGH      (0x00000C00)

#define ADC1_ADCDCCTL5_CTC_MASK        (0x00000003)
#define ADC1_ADCDCCTL5_CTC_LOW         (0x00000000)
#define ADC1_ADCDCCTL5_CTC_MID         (0x00000001)
#define ADC1_ADCDCCTL5_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL5_R_CTE_MASK      (0x00001000)
#define ADC1_ADCDCCTL5_R_CTE_BIT       (12)
#define ADC1_ADCDCCTL5_R_CTE_DIS       (0x00000000)
#define ADC1_ADCDCCTL5_R_CTE_EN        (0x00001000)

#define ADC1_ADCDCCTL5_CTE_MASK        (0x00000001)
#define ADC1_ADCDCCTL5_CTE_DIS         (0x00000000)
#define ADC1_ADCDCCTL5_CTE_EN          (0x00000001)
//--------

#define ADC1_ADCDCCTL5_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL5_OFFSET)*32)+(4*4))))
#define ADC1_ADCDCCTL5_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL5_OFFSET)*32)+(12*4))))



////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.46 ADCDCCTL6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCTL6            (((ADCDCCTL6_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL6_OFFSET )))
#define ADC1_ADCDCCTL6_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL6_OFFSET)))


//--------
#define ADC1_ADCDCCTL6_R_CIM_MASK      (0x00000003)
#define ADC1_ADCDCCTL6_R_CIM_BIT       (0)
#define ADC1_ADCDCCTL6_R_CIM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL6_R_CIM_ONCE      (0x00000001)
#define ADC1_ADCDCCTL6_R_CIM_HYSALWAYS (0x00000002)
#define ADC1_ADCDCCTL6_R_CIM_HYSONCE   (0x00000003)

#define ADC1_ADCDCCTL6_CIM_MASK        (0x00000003)
#define ADC1_ADCDCCTL6_CIM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL6_CIM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL6_CIM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL6_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL6_R_CIC_MASK      (0x0000000C)
#define ADC1_ADCDCCTL6_R_CIC_BIT       (2)
#define ADC1_ADCDCCTL6_R_CIC_LOW       (0x00000000)
#define ADC1_ADCDCCTL6_R_CIC_MID       (0x00000004)
#define ADC1_ADCDCCTL6_R_CIC_HIGH      (0x0000000C)

#define ADC1_ADCDCCTL6_CIC_MASK        (0x00000003)
#define ADC1_ADCDCCTL6_CIC_LOW         (0x00000000)
#define ADC1_ADCDCCTL6_CIC_MID         (0x00000001)
#define ADC1_ADCDCCTL6_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL6_R_CIE_MASK      (0x00000010)
#define ADC1_ADCDCCTL6_R_CIE_BIT       (4)
#define ADC1_ADCDCCTL6_R_CIE_DIS       (0x00000000)
#define ADC1_ADCDCCTL6_R_CIE_EN        (0x00000010)

#define ADC1_ADCDCCTL6_CIE_MASK        (0x00000001)
#define ADC1_ADCDCCTL6_CIE_DIS         (0x00000000)
#define ADC1_ADCDCCTL6_CIE_EN          (0x00000001)
//--------


//--------
#define ADC1_ADCDCCTL6_R_CTM_MASK      (0x00000300)
#define ADC1_ADCDCCTL6_R_CTM_BIT       (8)
#define ADC1_ADCDCCTL6_R_CTM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL6_R_CTM_ONCE      (0x00000100)
#define ADC1_ADCDCCTL6_R_CTM_HYSALWAYS (0x00000200)
#define ADC1_ADCDCCTL6_R_CTM_HYSONCE   (0x00000300)

#define ADC1_ADCDCCTL6_CTM_MASK        (0x00000003)
#define ADC1_ADCDCCTL6_CTM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL6_CTM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL6_CTM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL6_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL6_R_CTC_MASK      (0x00000C00)
#define ADC1_ADCDCCTL6_R_CTC_BIT       (10)
#define ADC1_ADCDCCTL6_R_CTC_LOW       (0x00000000)
#define ADC1_ADCDCCTL6_R_CTC_MID       (0x00000400)
#define ADC1_ADCDCCTL6_R_CTC_HIGH      (0x00000C00)

#define ADC1_ADCDCCTL6_CTC_MASK        (0x00000003)
#define ADC1_ADCDCCTL6_CTC_LOW         (0x00000000)
#define ADC1_ADCDCCTL6_CTC_MID         (0x00000001)
#define ADC1_ADCDCCTL6_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL6_R_CTE_MASK      (0x00001000)
#define ADC1_ADCDCCTL6_R_CTE_BIT       (12)
#define ADC1_ADCDCCTL6_R_CTE_DIS       (0x00000000)
#define ADC1_ADCDCCTL6_R_CTE_EN        (0x00001000)

#define ADC1_ADCDCCTL6_CTE_MASK        (0x00000001)
#define ADC1_ADCDCCTL6_CTE_DIS         (0x00000000)
#define ADC1_ADCDCCTL6_CTE_EN          (0x00000001)
//--------

#define ADC1_ADCDCCTL6_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL6_OFFSET)*32)+(4*4))))
#define ADC1_ADCDCCTL6_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL6_OFFSET)*32)+(12*4))))

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.47 ADCDCCTL7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCTL7            (((ADCDCCTL7_TypeDef*)(ADC1_BASE + ADC_ADCDCCTL7_OFFSET )))
#define ADC1_ADCDCCTL7_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCTL7_OFFSET)))


//--------
#define ADC1_ADCDCCTL7_R_CIM_MASK      (0x00000003)
#define ADC1_ADCDCCTL7_R_CIM_BIT       (0)
#define ADC1_ADCDCCTL7_R_CIM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL7_R_CIM_ONCE      (0x00000001)
#define ADC1_ADCDCCTL7_R_CIM_HYSALWAYS (0x00000002)
#define ADC1_ADCDCCTL7_R_CIM_HYSONCE   (0x00000003)

#define ADC1_ADCDCCTL7_CIM_MASK        (0x00000003)
#define ADC1_ADCDCCTL7_CIM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL7_CIM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL7_CIM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL7_CIM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL7_R_CIC_MASK      (0x0000000C)
#define ADC1_ADCDCCTL7_R_CIC_BIT       (2)
#define ADC1_ADCDCCTL7_R_CIC_LOW       (0x00000000)
#define ADC1_ADCDCCTL7_R_CIC_MID       (0x00000004)
#define ADC1_ADCDCCTL7_R_CIC_HIGH      (0x0000000C)

#define ADC1_ADCDCCTL7_CIC_MASK        (0x00000003)
#define ADC1_ADCDCCTL7_CIC_LOW         (0x00000000)
#define ADC1_ADCDCCTL7_CIC_MID         (0x00000001)
#define ADC1_ADCDCCTL7_CIC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL7_R_CIE_MASK      (0x00000010)
#define ADC1_ADCDCCTL7_R_CIE_BIT       (4)
#define ADC1_ADCDCCTL7_R_CIE_DIS       (0x00000000)
#define ADC1_ADCDCCTL7_R_CIE_EN        (0x00000010)

#define ADC1_ADCDCCTL7_CIE_MASK        (0x00000001)
#define ADC1_ADCDCCTL7_CIE_DIS         (0x00000000)
#define ADC1_ADCDCCTL7_CIE_EN          (0x00000001)
//--------


//--------
#define ADC1_ADCDCCTL7_R_CTM_MASK      (0x00000300)
#define ADC1_ADCDCCTL7_R_CTM_BIT       (8)
#define ADC1_ADCDCCTL7_R_CTM_ALWAYS    (0x00000000)
#define ADC1_ADCDCCTL7_R_CTM_ONCE      (0x00000100)
#define ADC1_ADCDCCTL7_R_CTM_HYSALWAYS (0x00000200)
#define ADC1_ADCDCCTL7_R_CTM_HYSONCE   (0x00000300)

#define ADC1_ADCDCCTL7_CTM_MASK        (0x00000003)
#define ADC1_ADCDCCTL7_CTM_ALWAYS      (0x00000000)
#define ADC1_ADCDCCTL7_CTM_ONCE        (0x00000001)
#define ADC1_ADCDCCTL7_CTM_HYSALWAYS   (0x00000002)
#define ADC1_ADCDCCTL7_CTM_HYSONCE     (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL7_R_CTC_MASK      (0x00000C00)
#define ADC1_ADCDCCTL7_R_CTC_BIT       (10)
#define ADC1_ADCDCCTL7_R_CTC_LOW       (0x00000000)
#define ADC1_ADCDCCTL7_R_CTC_MID       (0x00000400)
#define ADC1_ADCDCCTL7_R_CTC_HIGH      (0x00000C00)

#define ADC1_ADCDCCTL7_CTC_MASK        (0x00000003)
#define ADC1_ADCDCCTL7_CTC_LOW         (0x00000000)
#define ADC1_ADCDCCTL7_CTC_MID         (0x00000001)
#define ADC1_ADCDCCTL7_CTC_HIGH        (0x00000003)
//--------

//--------
#define ADC1_ADCDCCTL7_R_CTE_MASK      (0x00001000)
#define ADC1_ADCDCCTL7_R_CTE_BIT       (12)
#define ADC1_ADCDCCTL7_R_CTE_DIS       (0x00000000)
#define ADC1_ADCDCCTL7_R_CTE_EN        (0x00001000)

#define ADC1_ADCDCCTL7_CTE_MASK        (0x00000001)
#define ADC1_ADCDCCTL7_CTE_DIS         (0x00000000)
#define ADC1_ADCDCCTL7_CTE_EN          (0x00000001)
//--------

#define ADC1_ADCDCCTL7_CIE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL7_OFFSET)*32)+(4*4))))
#define ADC1_ADCDCCTL7_CTE_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCDCCTL7_OFFSET)*32)+(12*4))))




////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.48 ADCDCCMP0 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCMP0            (((ADCDCCMP0_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP0_OFFSET )))
#define ADC1_ADCDCCMP0_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP0_OFFSET)))

//--------
#define ADC1_ADCDCCMP0_R_COMP0_MASK      (0x00000FFF)
#define ADC1_ADCDCCMP0_R_COMP0_BIT       (0)

#define ADC1_ADCDCCMP0_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC1_ADCDCCMP0_R_COMP1_MASK      (0x0FFF0000)
#define ADC1_ADCDCCMP0_R_COMP1_BIT       (16)

#define ADC1_ADCDCCMP0_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.49 ADCDCCMP1 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCMP1            (((ADCDCCMP1_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP1_OFFSET )))
#define ADC1_ADCDCCMP1_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP1_OFFSET)))

//--------
#define ADC1_ADCDCCMP1_R_COMP0_MASK      (0x00000FFF)
#define ADC1_ADCDCCMP1_R_COMP0_BIT       (0)

#define ADC1_ADCDCCMP1_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC1_ADCDCCMP1_R_COMP1_MASK      (0x0FFF0000)
#define ADC1_ADCDCCMP1_R_COMP1_BIT       (16)

#define ADC1_ADCDCCMP1_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.50 ADCDCCMP2 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCMP2            (((ADCDCCMP2_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP2_OFFSET )))
#define ADC1_ADCDCCMP2_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP2_OFFSET)))

//--------
#define ADC1_ADCDCCMP2_R_COMP0_MASK      (0x00000FFF)
#define ADC1_ADCDCCMP2_R_COMP0_BIT       (0)

#define ADC1_ADCDCCMP2_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC1_ADCDCCMP2_R_COMP1_MASK      (0x0FFF0000)
#define ADC1_ADCDCCMP2_R_COMP1_BIT       (16)

#define ADC1_ADCDCCMP2_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.51 ADCDCCMP3 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCMP3            (((ADCDCCMP3_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP3_OFFSET )))
#define ADC1_ADCDCCMP3_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP3_OFFSET)))

//--------
#define ADC1_ADCDCCMP3_R_COMP0_MASK      (0x00000FFF)
#define ADC1_ADCDCCMP3_R_COMP0_BIT       (0)

#define ADC1_ADCDCCMP3_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC1_ADCDCCMP3_R_COMP1_MASK      (0x0FFF0000)
#define ADC1_ADCDCCMP3_R_COMP1_BIT       (16)

#define ADC1_ADCDCCMP3_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.52 ADCDCCMP4 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCMP4            (((ADCDCCMP4_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP4_OFFSET )))
#define ADC1_ADCDCCMP4_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP4_OFFSET)))

//--------
#define ADC1_ADCDCCMP4_R_COMP0_MASK      (0x00000FFF)
#define ADC1_ADCDCCMP4_R_COMP0_BIT       (0)

#define ADC1_ADCDCCMP4_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC1_ADCDCCMP4_R_COMP1_MASK      (0x0FFF0000)
#define ADC1_ADCDCCMP4_R_COMP1_BIT       (16)

#define ADC1_ADCDCCMP4_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.53 ADCDCCMP5 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCMP5            (((ADCDCCMP5_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP5_OFFSET )))
#define ADC1_ADCDCCMP5_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP5_OFFSET)))

//--------
#define ADC1_ADCDCCMP5_R_COMP0_MASK      (0x00000FFF)
#define ADC1_ADCDCCMP5_R_COMP0_BIT       (0)

#define ADC1_ADCDCCMP5_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC1_ADCDCCMP5_R_COMP1_MASK      (0x0FFF0000)
#define ADC1_ADCDCCMP5_R_COMP1_BIT       (16)

#define ADC1_ADCDCCMP5_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.54 ADCDCCMP6 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCMP6            (((ADCDCCMP6_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP6_OFFSET )))
#define ADC1_ADCDCCMP6_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP6_OFFSET)))

//--------
#define ADC1_ADCDCCMP6_R_COMP0_MASK      (0x00000FFF)
#define ADC1_ADCDCCMP6_R_COMP0_BIT       (0)

#define ADC1_ADCDCCMP6_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC1_ADCDCCMP6_R_COMP1_MASK      (0x0FFF0000)
#define ADC1_ADCDCCMP6_R_COMP1_BIT       (16)

#define ADC1_ADCDCCMP6_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.55 ADCDCCMP7 ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCDCCMP7            (((ADCDCCMP7_TypeDef*)(ADC1_BASE + ADC_ADCDCCMP7_OFFSET )))
#define ADC1_ADCDCCMP7_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCDCCMP7_OFFSET)))

//--------
#define ADC1_ADCDCCMP7_R_COMP0_MASK      (0x00000FFF)
#define ADC1_ADCDCCMP7_R_COMP0_BIT       (0)

#define ADC1_ADCDCCMP7_COMP0_MASK        (0x00000FFF)
//--------

//--------
#define ADC1_ADCDCCMP7_R_COMP1_MASK      (0x0FFF0000)
#define ADC1_ADCDCCMP7_R_COMP1_BIT       (16)

#define ADC1_ADCDCCMP7_COMP1_MASK        (0x00000FFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.56 ADCPP ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCPP            (((ADCPP_TypeDef*)(ADC1_BASE + ADC_ADCPP_OFFSET )))
#define ADC1_ADCPP_R          (*((volatile const uint32_t *)(ADC1_BASE +ADC_ADCPP_OFFSET)))

//--------
#define ADC1_ADCPP_R_MSR_MASK      (0x0000000F)
#define ADC1_ADCPP_R_MSR_BIT       (0)
#define ADC1_ADCPP_R_MSR_125Ksps   (0x00000001)
#define ADC1_ADCPP_R_MSR_250Ksps   (0x00000003)
#define ADC1_ADCPP_R_MSR_500Ksps   (0x00000005)
#define ADC1_ADCPP_R_MSR_1000Ksps  (0x00000007)

#define ADC1_ADCPP_MSR_MASK        (0x0000000F)
#define ADC1_ADCPP_MSR_125Ksps     (0x00000001)
#define ADC1_ADCPP_MSR_250Ksps     (0x00000003)
#define ADC1_ADCPP_MSR_500Ksps     (0x00000005)
#define ADC1_ADCPP_MSR_1000Ksps    (0x00000007)
//--------

//--------
#define ADC1_ADCPP_R_CH_MASK      (0x000003F0)
#define ADC1_ADCPP_R_CH_BIT       (4)

#define ADC1_ADCPP_CH_MASK        (0x0000003F)
//--------

//--------
#define ADC1_ADCPP_R_DC_MASK      (0x0000FC00)
#define ADC1_ADCPP_R_DC_BIT       (10)

#define ADC1_ADCPP_DC_MASK        (0x0000003F)
//--------

//--------
#define ADC1_ADCPP_R_TYPE_MASK      (0x00030000)
#define ADC1_ADCPP_R_TYPE_BIT       (16)
#define ADC1_ADCPP_R_TYPE_SAR       (0x00000000)

#define ADC1_ADCPP_TYPE_MASK        (0x00000003)
#define ADC1_ADCPP_TYPE_SAR         (0x00000000)
//--------

//--------
#define ADC1_ADCPP_R_RSL_MASK      (0x007C0000)
#define ADC1_ADCPP_R_RSL_BIT       (18)

#define ADC1_ADCPP_RSL_MASK        (0x0000001F)
//--------

//--------
#define ADC1_ADCPP_R_TS_MASK      (0x00800000)
#define ADC1_ADCPP_R_TS_BIT       (23)
#define ADC1_ADCPP_R_TS_NOTEMP    (0x00000000)
#define ADC1_ADCPP_R_TS_TEMP      (0x00800000)

#define ADC1_ADCPP_TS_MASK        (0x00000001)
#define ADC1_ADCPP_TS_NOTEMP      (0x00000000)
#define ADC1_ADCPP_TS_TEMP        (0x00000001)
//--------

#define ADC1_ADCPP_TS_BB        (*((volatile const uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCPP_OFFSET)*32)+(23*4))))

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.57 ADCPC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCPC            (((ADCPC_TypeDef*)(ADC1_BASE + ADC_ADCPC_OFFSET )))
#define ADC1_ADCPC_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCPC_OFFSET)))

//--------
#define ADC1_ADCPC_R_SR_MASK      (0x0000000F)
#define ADC1_ADCPC_R_SR_BIT       (0)
#define ADC1_ADCPC_R_SR_125Ksps   (0x00000001)
#define ADC1_ADCPC_R_SR_250Ksps   (0x00000003)
#define ADC1_ADCPC_R_SR_500Ksps   (0x00000005)
#define ADC1_ADCPC_R_SR_1000Ksps  (0x00000007)

#define ADC1_ADCPC_SR_MASK        (0x0000000F)
#define ADC1_ADCPC_SR_125Ksps     (0x00000001)
#define ADC1_ADCPC_SR_250Ksps     (0x00000003)
#define ADC1_ADCPC_SR_500Ksps     (0x00000005)
#define ADC1_ADCPC_SR_1000Ksps    (0x00000007)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// 1.58 ADCCC ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define ADC1_ADCCC            (((ADCCC_TypeDef*)(ADC1_BASE + ADC_ADCCC_OFFSET )))
#define ADC1_ADCCC_R          (*((volatile uint32_t *)(ADC1_BASE +ADC_ADCCC_OFFSET)))


//--------
#define ADC1_ADCCC_R_CS_MASK      (0x0000000F)
#define ADC1_ADCCC_R_CS_BIT       (0)
#define ADC1_ADCCC_R_CS_PLL       (0x00000000)
#define ADC1_ADCCC_R_CS_PIOSC     (0x00000001)

#define ADC1_ADCCC_CS_MASK        (0x0000000F)
#define ADC1_ADCCC_CS_PLL         (0x00000000)
#define ADC1_ADCCC_CS_PIOSC       (0x00000001)
//--------

#define ADC1_ADCCC_CS_BB        (*((volatile uint32_t *)(0x42000000+((ADC1_OFFSET+ADC_ADCCC_OFFSET)*32)+(0*4))))





#endif /* ADC_H_ */
