/**
 *
 * @file ADC_StructRegister.h
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
 * @verbatim 26 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTREGISTER_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTREGISTER_H_

#include <xUtils/Standard/Standard.h>

/**
 *  Global Struct Definitions for ADC Sequences
 */

typedef volatile struct
{
    volatile uint32_t ASEN0: 1;
    volatile uint32_t ASEN1: 1;
    volatile uint32_t ASEN2: 1;
    volatile uint32_t ASEN3: 1;
    const uint32_t reserved: 12;
    volatile const uint32_t BUSY: 1;
    const uint32_t reserved1: 15;
}ADCACTSS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t INR0: 1;
    volatile const uint32_t INR1: 1;
    volatile const uint32_t INR2: 1;
    volatile const uint32_t INR3: 1;
    const uint32_t reserved: 12;
    volatile const uint32_t INRDC: 1;
    const uint32_t reserved1: 15;
}ADCRIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t MASK0: 1;
    volatile uint32_t MASK1: 1;
    volatile uint32_t MASK2: 1;
    volatile uint32_t MASK3: 1;
    const uint32_t    reserved: 12;
    volatile uint32_t DCONSS0: 1;
    volatile uint32_t DCONSS1: 1;
    volatile uint32_t DCONSS2: 1;
    volatile uint32_t DCONSS3: 1;
    const uint32_t    reserved1: 12;
}ADCIM_TypeDef;

typedef volatile struct
{
    volatile uint32_t IN0: 1;
    volatile uint32_t IN1: 1;
    volatile uint32_t IN2: 1;
    volatile uint32_t IN3: 1;
    const uint32_t reserved: 12;
    volatile const uint32_t DCINSS0: 1;
    volatile const uint32_t DCINSS1: 1;
    volatile const uint32_t DCINSS2: 1;
    volatile const uint32_t DCINSS3: 1;
    const uint32_t reserved1: 12;
}ADCISC_TypeDef;

typedef volatile struct
{
    volatile uint32_t OV0: 1;
    volatile uint32_t OV1: 1;
    volatile uint32_t OV2: 1;
    volatile uint32_t OV3: 1;
    const uint32_t reserved: 28;
}ADCOSTAT_TypeDef;

typedef volatile struct
{
    volatile uint32_t EM0: 4;
    volatile uint32_t EM1: 4;
    volatile uint32_t EM2: 4;
    volatile uint32_t EM3: 4;
    const uint32_t reserved: 16;
}ADCEMUX_TypeDef;

typedef volatile struct
{
    volatile uint32_t UV0: 1;
    volatile uint32_t UV1: 1;
    volatile uint32_t UV2: 1;
    volatile uint32_t UV3: 1;
    const uint32_t reserved: 28;
}ADCUSTAT_TypeDef;

typedef volatile struct
{
    const uint32_t reserved: 4;
    volatile uint32_t PS0: 2;
    const uint32_t reserved1: 6;
    volatile uint32_t PS1: 2;
    const uint32_t reserved2: 6;
    volatile uint32_t PS2: 2;
    const uint32_t reserved3: 6;
    volatile uint32_t PS3: 2;
    const uint32_t reserved4: 2;
}ADCTSSEL_TypeDef;

typedef volatile struct
{
    volatile uint32_t SS0: 2;
    const uint32_t reserved1: 2;
    volatile uint32_t SS1: 2;
    const uint32_t reserved2: 2;
    volatile uint32_t SS2: 2;
    const uint32_t reserved3: 2;
    volatile uint32_t SS3: 2;
    const uint32_t reserved4: 18;
}ADCSSPRI_TypeDef;

typedef volatile struct
{
    volatile uint32_t SS0: 1;
    volatile uint32_t SS1: 1;
    volatile uint32_t SS2: 1;
    volatile uint32_t SS3: 1;
    const uint32_t reserved: 23;
    volatile uint32_t SYNCWAIT: 1;
    const uint32_t reserved1: 3;
    volatile uint32_t GSYNC: 1;
}ADCPSSI_TypeDef;

/**
 *  Global Struct Definitions for ADC Properties
 */

typedef volatile struct
{
    volatile uint32_t PHASE: 4;
    const uint32_t reserved: 28;
}ADCSPC_TypeDef;

typedef volatile struct
{
    volatile uint32_t AVG: 3;
    const uint32_t reserved: 29;
}ADCSAC_TypeDef;

typedef volatile struct
{
    volatile uint32_t VREF: 1;
    const uint32_t reserved1: 5;
    volatile uint32_t DITHER: 1;
    const uint32_t reserved2: 25;
}ADCCTL_TypeDef;

typedef volatile struct
{
    volatile const uint32_t MSR: 4;
    volatile const uint32_t CH: 6;
    volatile const uint32_t DC: 6;
    volatile const uint32_t TYPE: 2;
    volatile const uint32_t RSL: 5;
    volatile const uint32_t TS: 1;
    const uint32_t reserved: 8;
}ADCPP_TypeDef;

typedef volatile struct
{
    volatile uint32_t SR: 4;
    const uint32_t reserved: 28;
}ADCPC_TypeDef;

typedef volatile struct
{
    volatile uint32_t CS: 4;
    const uint32_t reserved: 28;
}ADCCC_TypeDef;

/**
 *  Global Struct Definitions for ADC Digital Comparators
 */

typedef volatile struct
{
    volatile uint32_t DCINT0: 1;
    volatile uint32_t DCINT1: 1;
    volatile uint32_t DCINT2: 1;
    volatile uint32_t DCINT3: 1;
    volatile uint32_t DCINT4: 1;
    volatile uint32_t DCINT5: 1;
    volatile uint32_t DCINT6: 1;
    volatile uint32_t DCINT7: 1;
    const uint32_t reserved: 24;
}ADCDCISC_TypeDef;

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

/**
 * ADC Sequences inputs configurations
 */

typedef volatile struct
{
    volatile uint32_t MUX0: 4;
    volatile uint32_t MUX1: 4;
    volatile uint32_t MUX2: 4;
    volatile uint32_t MUX3: 4;
    volatile uint32_t MUX4: 4;
    volatile uint32_t MUX5: 4;
    volatile uint32_t MUX6: 4;
    volatile uint32_t MUX7: 4;
}ADCSSMUX8_TypeDef;

typedef volatile struct
{
    volatile uint32_t MUX0: 4;
    volatile uint32_t MUX1: 4;
    volatile uint32_t MUX2: 4;
    volatile uint32_t MUX3: 4;
    const uint32_t reserved: 16;
}ADCSSMUX4_TypeDef;

typedef volatile struct
{
    volatile uint32_t MUX0: 4;
    const uint32_t reserved: 28;
}ADCSSMUX1_TypeDef;

typedef volatile struct
{
    volatile uint32_t D0: 1;
    volatile uint32_t END0: 1;
    volatile uint32_t IE0: 1;
    volatile uint32_t TS0: 1;
    volatile uint32_t D1: 1;
    volatile uint32_t END1: 1;
    volatile uint32_t IE1: 1;
    volatile uint32_t TS1: 1;
    volatile uint32_t D2: 1;
    volatile uint32_t END2: 1;
    volatile uint32_t IE2: 1;
    volatile uint32_t TS2: 1;
    volatile uint32_t D3: 1;
    volatile uint32_t END3: 1;
    volatile uint32_t IE3: 1;
    volatile uint32_t TS3: 1;
    volatile uint32_t D4: 1;
    volatile uint32_t END4: 1;
    volatile uint32_t IE4: 1;
    volatile uint32_t TS4: 1;
    volatile uint32_t D5: 1;
    volatile uint32_t END5: 1;
    volatile uint32_t IE5: 1;
    volatile uint32_t TS5: 1;
    volatile uint32_t D6: 1;
    volatile uint32_t END6: 1;
    volatile uint32_t IE6: 1;
    volatile uint32_t TS6: 1;
    volatile uint32_t D7: 1;
    volatile uint32_t END7: 1;
    volatile uint32_t IE7: 1;
    volatile uint32_t TS7: 1;
}ADCSSCTL8_TypeDef;

typedef volatile struct
{
    volatile uint32_t D0: 1;
    volatile uint32_t END0: 1;
    volatile uint32_t IE0: 1;
    volatile uint32_t TS0: 1;
    volatile uint32_t D1: 1;
    volatile uint32_t END1: 1;
    volatile uint32_t IE1: 1;
    volatile uint32_t TS1: 1;
    volatile uint32_t D2: 1;
    volatile uint32_t END2: 1;
    volatile uint32_t IE2: 1;
    volatile uint32_t TS2: 1;
    volatile uint32_t D3: 1;
    volatile uint32_t END3: 1;
    volatile uint32_t IE3: 1;
    volatile uint32_t TS3: 1;
    const uint32_t reserved: 16;
}ADCSSCTL4_TypeDef;

typedef volatile struct
{
    volatile uint32_t D0: 1;
    volatile uint32_t END0: 1;
    volatile uint32_t IE0: 1;
    volatile uint32_t TS0: 1;
    const uint32_t reserved: 28;
}ADCSSCTL1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t DATA: 12;
    const uint32_t reserved: 20;
}ADCSSFIFO_TypeDef;

typedef volatile struct
{
    volatile const uint32_t TPTR: 4;
    volatile const uint32_t HPTR: 4;
    volatile const uint32_t EMPTY: 1;
    const uint32_t reserved: 3;
    volatile const uint32_t FULL: 1;
    const uint32_t reserved1: 19;
}ADCSSFSTAT_TypeDef;

typedef volatile struct
{
    volatile uint32_t S0DCOP: 1;
    const uint32_t reserved: 3;
    volatile uint32_t S1DCOP: 1;
    const uint32_t reserved1: 3;
    volatile uint32_t S2DCOP: 1;
    const uint32_t reserved2: 3;
    volatile uint32_t S3DCOP: 1;
    const uint32_t reserved3: 3;
    volatile uint32_t S4DCOP: 1;
    const uint32_t reserved4: 3;
    volatile uint32_t S5DCOP: 1;
    const uint32_t reserved5: 3;
    volatile uint32_t S6DCOP: 1;
    const  uint32_t reserved6: 3;
    volatile uint32_t S7DCOP: 1;
    const uint32_t reserved7: 3;
}ADCSSOP8_TypeDef;

typedef volatile struct
{
    volatile uint32_t S0DCOP: 1;
    const uint32_t reserved: 3;
    volatile uint32_t S1DCOP: 1;
    const uint32_t reserved1: 3;
    volatile uint32_t S2DCOP: 1;
    const uint32_t reserved2: 3;
    volatile uint32_t S3DCOP: 1;
    const uint32_t reserved3: 19;
}ADCSSOP4_TypeDef;

typedef volatile struct
{
    volatile uint32_t S0DCOP: 1;
    const uint32_t reserved: 31;
}ADCSSOP1_TypeDef;

typedef volatile struct
{
    volatile uint32_t S0DCSEL: 4;
    volatile uint32_t S1DCSEL: 4;
    volatile uint32_t S2DCSEL: 4;
    volatile uint32_t S3DCSEL: 4;
    volatile uint32_t S4DCSEL: 4;
    volatile uint32_t S5DCSEL: 4;
    volatile uint32_t S6DCSEL: 4;
    volatile uint32_t S7DCSEL: 4;
}ADCSSDC8_TypeDef;

typedef volatile struct
{
    volatile uint32_t S0DCSEL: 4;
    volatile uint32_t S1DCSEL: 4;
    volatile uint32_t S2DCSEL: 4;
    volatile uint32_t S3DCSEL: 4;
    const uint32_t reserved: 16;
}ADCSSDC4_TypeDef;

typedef volatile struct
{
    volatile uint32_t S0DCSEL: 4;
    const uint32_t reserved: 28;
}ADCSSDC1_TypeDef;

/**
 * ADC Sequence Digital Comparator configurations
 */

typedef volatile struct
{
    volatile uint32_t CIM: 2;
    volatile uint32_t CIC: 2;
    volatile uint32_t CIE: 1;
    const uint32_t reserved: 3;
    volatile uint32_t CTM: 2;
    volatile uint32_t CTC: 2;
    volatile uint32_t CTE: 1;
    const uint32_t reserved1: 19;
}ADCDCCTL_TypeDef;

typedef volatile struct
{
    volatile uint32_t COMP0: 12;
    const uint32_t reserved: 4;
    volatile uint32_t COMP1: 12;
    const uint32_t reserved1: 4;
}ADCDCCMP_TypeDef;

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTREGISTER_H_ */
