/**
 *
 * @file ADC_StructRegister_Bitbanding.h
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
 * @verbatim 27 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTREGISTER_BITBANDING_H_

#include <xUtils/Standard/Standard.h>

/**
 *  Global Struct Definitions for ADC Sequences
 */

typedef volatile struct
{
    volatile uint32_t ASEN0;
    volatile uint32_t ASEN1;
    volatile uint32_t ASEN2;
    volatile uint32_t ASEN3;
    const uint32_t reserved[12];
    volatile const uint32_t BUSY;
    const uint32_t reserved1[15];
}BITBANDING_ADCACTSS_TypeDef ;

typedef volatile struct
{
    volatile const uint32_t INR0;
    volatile const uint32_t INR1;
    volatile const uint32_t INR2;
    volatile const uint32_t INR3;
    const uint32_t reserved[12];
    volatile const uint32_t INRDC;
    const uint32_t reserved1[15];
}BITBANDING_ADCRIS_TypeDef ;

typedef volatile struct
{
    volatile uint32_t MASK0;
    volatile uint32_t MASK1;
    volatile uint32_t MASK2;
    volatile uint32_t MASK3;
    const uint32_t    reserved[12];
    volatile uint32_t DCONSS0;
    volatile uint32_t DCONSS1;
    volatile uint32_t DCONSS2;
    volatile uint32_t DCONSS3;
    const uint32_t    reserved1[12];
}BITBANDING_ADCIM_TypeDef ;

typedef volatile struct
{
    volatile uint32_t IN0;
    volatile uint32_t IN1;
    volatile uint32_t IN2;
    volatile uint32_t IN3;
    const uint32_t reserved[12];
    volatile const uint32_t DCINSS0;
    volatile const uint32_t DCINSS1;
    volatile const uint32_t DCINSS2;
    volatile const uint32_t DCINSS3;
    const uint32_t reserved1[12];
}BITBANDING_ADCISC_TypeDef ;

typedef volatile struct
{
    volatile uint32_t OV0;
    volatile uint32_t OV1;
    volatile uint32_t OV2;
    volatile uint32_t OV3;
    const uint32_t reserved[28];
}BITBANDING_ADCOSTAT_TypeDef ;

typedef volatile struct
{
    volatile uint32_t EM0[4];
    volatile uint32_t EM1[4];
    volatile uint32_t EM2[4];
    volatile uint32_t EM3[4];
    const uint32_t reserved[16];
}BITBANDING_ADCEMUX_TypeDef ;

typedef volatile struct
{
    volatile uint32_t UV0;
    volatile uint32_t UV1;
    volatile uint32_t UV2;
    volatile uint32_t UV3;
    const uint32_t reserved[28];
}BITBANDING_ADCUSTAT_TypeDef ;

typedef volatile struct
{
    const uint32_t reserved[4];
    volatile uint32_t PS0[2];
    const uint32_t reserved1[6];
    volatile uint32_t PS1[2];
    const uint32_t reserved2[6];
    volatile uint32_t PS2[2];
    const uint32_t reserved3[6];
    volatile uint32_t PS3[2];
    const uint32_t reserved4[2];
}BITBANDING_ADCTSSEL_TypeDef ;

typedef volatile struct
{
    volatile uint32_t SS0[2];
    const uint32_t reserved1[2];
    volatile uint32_t SS1[2];
    const uint32_t reserved2[2];
    volatile uint32_t SS2[2];
    const uint32_t reserved3[2];
    volatile uint32_t SS3[2];
    const uint32_t reserved4[18];
}BITBANDING_ADCSSPRI_TypeDef ;

typedef volatile struct
{
    volatile uint32_t SS0;
    volatile uint32_t SS1;
    volatile uint32_t SS2;
    volatile uint32_t SS3;
    const uint32_t reserved[23];
    volatile uint32_t SYNCWAIT;
    const uint32_t reserved1[3];
    volatile uint32_t GSYNC;
}BITBANDING_ADCPSSI_TypeDef ;

/**
 *  Global Struct Definitions for ADC Properties
 */

typedef volatile struct
{
    volatile uint32_t PHASE[4];
    const uint32_t reserved[28];
}BITBANDING_ADCSPC_TypeDef ;

typedef volatile struct
{
    volatile uint32_t AVG[3];
    const uint32_t reserved[29];
}BITBANDING_ADCSAC_TypeDef ;

typedef volatile struct
{
    volatile uint32_t VREF;
    const uint32_t reserved1[5];
    volatile uint32_t DITHER;
    const uint32_t reserved2[25];
}BITBANDING_ADCCTL_TypeDef ;

typedef volatile struct
{
    volatile const uint32_t MSR[4];
    volatile const uint32_t CH[6];
    volatile const uint32_t DC[6];
    volatile const uint32_t TYPE[2];
    volatile const uint32_t RSL[5];
    volatile const uint32_t TS;
    const uint32_t reserved[8];
}BITBANDING_ADCPP_TypeDef ;

typedef volatile struct
{
    volatile uint32_t SR[4];
    const uint32_t reserved[28];
}BITBANDING_ADCPC_TypeDef ;

typedef volatile struct
{
    volatile uint32_t CS[4];
    const uint32_t reserved[28];
}BITBANDING_ADCCC_TypeDef ;

/**
 *  Global Struct Definitions for ADC Digital Comparators
 */

typedef volatile struct
{
    volatile uint32_t DCINT0;
    volatile uint32_t DCINT1;
    volatile uint32_t DCINT2;
    volatile uint32_t DCINT3;
    volatile uint32_t DCINT4;
    volatile uint32_t DCINT5;
    volatile uint32_t DCINT6;
    volatile uint32_t DCINT7;
    const uint32_t reserved[24];
}BITBANDING_ADCDCISC_TypeDef ;

typedef volatile struct
{
    volatile uint32_t DCINT0   ;
    volatile uint32_t DCINT1   ;
    volatile uint32_t DCINT2   ;
    volatile uint32_t DCINT3   ;
    volatile uint32_t DCINT4   ;
    volatile uint32_t DCINT5   ;
    volatile uint32_t DCINT6   ;
    volatile uint32_t DCINT7   ;
    const    uint32_t reserved [8];
    volatile uint32_t DCTRIG0  ;
    volatile uint32_t DCTRIG1  ;
    volatile uint32_t DCTRIG2  ;
    volatile uint32_t DCTRIG3  ;
    volatile uint32_t DCTRIG4  ;
    volatile uint32_t DCTRIG5  ;
    volatile uint32_t DCTRIG6  ;
    volatile uint32_t DCTRIG7  ;
    const    uint32_t reserved1[8];
}BITBANDING_ADCDCRIC_TypeDef ;

/**
 * ADC Sequences inputs configurations
 */

typedef volatile struct
{
    volatile uint32_t MUX0[4];
    volatile uint32_t MUX1[4];
    volatile uint32_t MUX2[4];
    volatile uint32_t MUX3[4];
    volatile uint32_t MUX4[4];
    volatile uint32_t MUX5[4];
    volatile uint32_t MUX6[4];
    volatile uint32_t MUX7[4];
}BITBANDING_ADCSSMUX8_TypeDef ;

typedef volatile struct
{
    volatile uint32_t MUX0[4];
    volatile uint32_t MUX1[4];
    volatile uint32_t MUX2[4];
    volatile uint32_t MUX3[4];
    const uint32_t reserved[16];
}BITBANDING_ADCSSMUX4_TypeDef ;

typedef volatile struct
{
    volatile uint32_t MUX0[4];
    const uint32_t reserved[28];
}BITBANDING_ADCSSMUX1_TypeDef ;

typedef volatile struct
{
    volatile uint32_t D0;
    volatile uint32_t END0;
    volatile uint32_t IE0;
    volatile uint32_t TS0;
    volatile uint32_t D1;
    volatile uint32_t END1;
    volatile uint32_t IE1;
    volatile uint32_t TS1;
    volatile uint32_t D2;
    volatile uint32_t END2;
    volatile uint32_t IE2;
    volatile uint32_t TS2;
    volatile uint32_t D3;
    volatile uint32_t END3;
    volatile uint32_t IE3;
    volatile uint32_t TS3;
    volatile uint32_t D4;
    volatile uint32_t END4;
    volatile uint32_t IE4;
    volatile uint32_t TS4;
    volatile uint32_t D5;
    volatile uint32_t END5;
    volatile uint32_t IE5;
    volatile uint32_t TS5;
    volatile uint32_t D6;
    volatile uint32_t END6;
    volatile uint32_t IE6;
    volatile uint32_t TS6;
    volatile uint32_t D7;
    volatile uint32_t END7;
    volatile uint32_t IE7;
    volatile uint32_t TS7;
}BITBANDING_ADCSSCTL8_TypeDef ;

typedef volatile struct
{
    volatile uint32_t D0;
    volatile uint32_t END0;
    volatile uint32_t IE0;
    volatile uint32_t TS0;
    volatile uint32_t D1;
    volatile uint32_t END1;
    volatile uint32_t IE1;
    volatile uint32_t TS1;
    volatile uint32_t D2;
    volatile uint32_t END2;
    volatile uint32_t IE2;
    volatile uint32_t TS2;
    volatile uint32_t D3;
    volatile uint32_t END3;
    volatile uint32_t IE3;
    volatile uint32_t TS3;
    const uint32_t reserved[16];
}BITBANDING_ADCSSCTL4_TypeDef ;

typedef volatile struct
{
    volatile uint32_t D0;
    volatile uint32_t END0;
    volatile uint32_t IE0;
    volatile uint32_t TS0;
    const uint32_t reserved[28];
}BITBANDING_ADCSSCTL1_TypeDef ;

typedef volatile struct
{
    volatile const uint32_t DATA[12];
    const uint32_t reserved[20];
}BITBANDING_ADCSSFIFO_TypeDef ;

typedef volatile struct
{
    volatile const uint32_t TPTR[4];
    volatile const uint32_t HPTR[4];
    volatile const uint32_t EMPTY;
    const uint32_t reserved[3];
    volatile const uint32_t FULL;
    const uint32_t reserved1[19];
}BITBANDING_ADCSSFSTAT_TypeDef ;

typedef volatile struct
{
    volatile uint32_t S0DCOP;
    const uint32_t reserved[3];
    volatile uint32_t S1DCOP;
    const uint32_t reserved1[3];
    volatile uint32_t S2DCOP;
    const uint32_t reserved2[3];
    volatile uint32_t S3DCOP;
    const uint32_t reserved3[3];
    volatile uint32_t S4DCOP;
    const uint32_t reserved4[3];
    volatile uint32_t S5DCOP;
    const uint32_t reserved5[3];
    volatile uint32_t S6DCOP;
    const  uint32_t reserved6[3];
    volatile uint32_t S7DCOP;
    const uint32_t reserved7[3];
}BITBANDING_ADCSSOP8_TypeDef ;

typedef volatile struct
{
    volatile uint32_t S0DCOP;
    const uint32_t reserved[3];
    volatile uint32_t S1DCOP;
    const uint32_t reserved1[3];
    volatile uint32_t S2DCOP;
    const uint32_t reserved2[3];
    volatile uint32_t S3DCOP;
    const uint32_t reserved3[19];
}BITBANDING_ADCSSOP4_TypeDef ;

typedef volatile struct
{
    volatile uint32_t S0DCOP;
    const uint32_t reserved[31];
}BITBANDING_ADCSSOP1_TypeDef ;

typedef volatile struct
{
    volatile uint32_t S0DCSEL[4];
    volatile uint32_t S1DCSEL[4];
    volatile uint32_t S2DCSEL[4];
    volatile uint32_t S3DCSEL[4];
    volatile uint32_t S4DCSEL[4];
    volatile uint32_t S5DCSEL[4];
    volatile uint32_t S6DCSEL[4];
    volatile uint32_t S7DCSEL[4];
}BITBANDING_ADCSSDC8_TypeDef ;

typedef volatile struct
{
    volatile uint32_t S0DCSEL[4];
    volatile uint32_t S1DCSEL[4];
    volatile uint32_t S2DCSEL[4];
    volatile uint32_t S3DCSEL[4];
    const uint32_t reserved[16];
}BITBANDING_ADCSSDC4_TypeDef ;

typedef volatile struct
{
    volatile uint32_t S0DCSEL[4];
    const uint32_t reserved[28];
}BITBANDING_ADCSSDC1_TypeDef ;

/**
 * ADC Digital Comparator configurations
 */

typedef volatile struct
{
    volatile uint32_t CIM[2];
    volatile uint32_t CIC[2];
    volatile uint32_t CIE;
    const uint32_t reserved[3];
    volatile uint32_t CTM[2];
    volatile uint32_t CTC[2];
    volatile uint32_t CTE;
    const uint32_t reserved1[19];
}BITBANDING_ADCDCCTL_TypeDef ;

typedef volatile struct
{
    volatile uint32_t COMP0[12];
    const uint32_t reserved[4];
    volatile uint32_t COMP1[12];
    const uint32_t reserved1[4];
}BITBANDING_ADCDCCMP_TypeDef ;




#endif /* XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTREGISTER_BITBANDING_H_ */
