/**
 *
 * @file ADC_StructPeripheral.h
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
 * @verbatim 18 oct. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 oct. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/ADC/Peripheral/Struct/xHeader/ADC_StructRegister.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>


typedef volatile struct
{
    union
    {
        volatile uint32_t      ADCACTSS;
        ADCACTSS_TypeDef ADCACTSS_Bit;
    };
    union
    {
        volatile const uint32_t ADCRIS;
        ADCRIS_TypeDef            ADCRIS_Bit;
    };
    union
    {
        volatile uint32_t ADCIM;
        ADCIM_TypeDef  ADCIM_Bit;
    };
    union
    {
        volatile uint32_t ADCISC;
        ADCISC_TypeDef ADCISC_Bit;
    };
    union
    {
        volatile uint32_t      ADCOSTAT;
        ADCOSTAT_TypeDef ADCOSTAT_Bit;
    };
    union
    {
        volatile uint32_t      ADCEMUX;
        ADCEMUX_TypeDef ADCEMUX_Bit;
    };
    union
    {
        volatile uint32_t      ADCUSTAT;
        ADCUSTAT_TypeDef ADCUSTAT_Bit;
    };
    union
    {
        volatile uint32_t      ADCTSSEL;
        ADCTSSEL_TypeDef  ADCTSSEL_Bit;
    };
    union
    {
        volatile uint32_t     ADCSSPRI;
        ADCSSPRI_TypeDef ADCSSPRI_Bit;
    };
    union
    {
        volatile uint32_t  ADCSPC;
        ADCSPC_TypeDef ADCSPC_Bit;
    };
    union
    {
        volatile uint32_t   ADCPSSI;
        ADCPSSI_TypeDef ADCPSSI_Bit;
    };

    const    uint32_t reserved;
    union
    {
        volatile uint32_t  ADCSAC;
        ADCSAC_TypeDef ADCSAC_Bit;
    };
    union
    {
        volatile uint32_t      ADCDCISC;
        ADCDCISC_TypeDef ADCDCISC_Bit;
    };
    union
    {
        volatile uint32_t ADCCTL;
        ADCCTL_TypeDef ADCCTL_Bit;
    };

    const    uint32_t reserved1;
    union
    {
        volatile uint32_t         ADCSSMUX0;
        ADCSSMUX8_TypeDef ADCSSMUX0_Bit;
    };
    union
    {
        volatile uint32_t       ADCSSCTL0;
        ADCSSCTL8_TypeDef ADCSSCTL0_Bit;
    };
    union
    {
        volatile const uint32_t ADCSSFIFO0;
        ADCSSFIFO_TypeDef      ADCSSFIFO0_Bit;
    };
    union
    {
        volatile const uint32_t ADCSSFSTAT0;
        ADCSSFSTAT_TypeDef    ADCSSFSTAT0_Bit;
    };
    union
    {
        volatile uint32_t      ADCSSOP0;
        ADCSSOP8_TypeDef ADCSSOP0_Bit;
    };
    union
    {
        volatile uint32_t      ADCSSDC0;
        ADCSSDC8_TypeDef ADCSSDC0_Bit;
    };
    const uint32_t reserved2[2];

    union
    {
        volatile uint32_t         ADCSSMUX1;
        ADCSSMUX4_TypeDef ADCSSMUX1_Bit;
    };
    union
    {
        volatile uint32_t       ADCSSCTL1;
        ADCSSCTL4_TypeDef ADCSSCTL1_Bit;
    };
    union
    {
        volatile const uint32_t ADCSSFIFO1;
        ADCSSFIFO_TypeDef      ADCSSFIFO1_Bit;
    };
    union
    {
        volatile const uint32_t ADCSSFSTAT1;
        ADCSSFSTAT_TypeDef    ADCSSFSTAT1_Bit;
    };
    union
    {
        volatile uint32_t      ADCSSOP1;
        ADCSSOP4_TypeDef ADCSSOP1_Bit;
    };
    union
    {
        volatile uint32_t      ADCSSDC1;
        ADCSSDC4_TypeDef ADCSSDC1_Bit;
    };

    const uint32_t reserved3[2];
    union
    {
        volatile uint32_t         ADCSSMUX2;
        ADCSSMUX4_TypeDef ADCSSMUX2_Bit;
    };
    union
    {
        volatile uint32_t       ADCSSCTL2;
        ADCSSCTL4_TypeDef ADCSSCTL2_Bit;
    };
    union
    {
        volatile const uint32_t ADCSSFIFO2;
        ADCSSFIFO_TypeDef      ADCSSFIFO2_Bit;
    };
    union
    {
        volatile const uint32_t ADCSSFSTAT2;
        ADCSSFSTAT_TypeDef    ADCSSFSTAT2_Bit;
    };
    union
    {
        volatile uint32_t      ADCSSOP2;
        ADCSSOP4_TypeDef ADCSSOP2_Bit;
    };
    union
    {
        volatile uint32_t       ADCSSDC2;
        ADCSSDC4_TypeDef ADCSSDC2_Bit;
    };

    const uint32_t reserved4[2];
    union
    {
        volatile uint32_t         ADCSSMUX3;
        ADCSSMUX1_TypeDef ADCSSMUX3_Bit;
    };
    union
    {
        volatile uint32_t       ADCSSCTL3;
        ADCSSCTL1_TypeDef ADCSSCTL3_Bit;
    };
    union
    {
        volatile const uint32_t ADCSSFIFO3;
        ADCSSFIFO_TypeDef      ADCSSFIFO3_Bit;
    };
    union
    {
        volatile const uint32_t ADCSSFSTAT3;
        ADCSSFSTAT_TypeDef    ADCSSFSTAT3_Bit;
    };
    union
    {
        volatile uint32_t      ADCSSOP3;
        ADCSSOP1_TypeDef ADCSSOP3_Bit;
    };
    union
    {
        volatile uint32_t      ADCSSDC3;
        ADCSSDC1_TypeDef ADCSSDC3_Bit;
    };

    const uint32_t reserved5[786];
    union
    {
        volatile uint32_t      ADCDCRIC;
        ADCDCRIC_TypeDef ADCDCRIC_Bit;
    };

    const uint32_t reserved6[63];
    union
    {
        volatile uint32_t      ADCDCCTL0;
        ADCDCCTL_TypeDef ADCDCCTL0_Bit;
    };
    union
    {
        volatile uint32_t      ADCDCCTL1;
        ADCDCCTL_TypeDef ADCDCCTL1_Bit;
    };
    union
    {
        volatile uint32_t      ADCDCCTL2;
        ADCDCCTL_TypeDef ADCDCCTL2_Bit;
    };
    union
    {
        volatile uint32_t      ADCDCCTL3;
        ADCDCCTL_TypeDef ADCDCCTL3_Bit;
    };
    union
    {
        volatile uint32_t      ADCDCCTL4;
        ADCDCCTL_TypeDef ADCDCCTL4_Bit;
    };
    union
    {
        volatile uint32_t      ADCDCCTL5;
        ADCDCCTL_TypeDef ADCDCCTL5_Bit;
    };
    union
    {
        volatile uint32_t      ADCDCCTL6;
        ADCDCCTL_TypeDef ADCDCCTL6_Bit;
    };
    union
    {
        volatile uint32_t      ADCDCCTL7;
        ADCDCCTL_TypeDef ADCDCCTL7_Bit;
    };
    const uint32_t reserved7[8];
    union
    {
        volatile uint32_t        ADCDCCMP0;
        ADCDCCMP_TypeDef ADCDCCMP0_Bit;
    };
    union
    {
        volatile uint32_t        ADCDCCMP1;
        ADCDCCMP_TypeDef ADCDCCMP1_Bit;
    };
    union
    {
        volatile uint32_t        ADCDCCMP2;
        ADCDCCMP_TypeDef ADCDCCMP2_Bit;
    };
    union
    {
        volatile uint32_t        ADCDCCMP3;
        ADCDCCMP_TypeDef ADCDCCMP3_Bit;
    };
    union
    {
        volatile uint32_t        ADCDCCMP4;
        ADCDCCMP_TypeDef ADCDCCMP4_Bit;
    };
    union
    {
        volatile uint32_t        ADCDCCMP5;
        ADCDCCMP_TypeDef ADCDCCMP5_Bit;
    };
    union
    {
        volatile uint32_t        ADCDCCMP6;
        ADCDCCMP_TypeDef ADCDCCMP6_Bit;
    };
    union
    {
        volatile uint32_t        ADCDCCMP7;
        ADCDCCMP_TypeDef ADCDCCMP7_Bit;
    };

    const uint32_t reserved8[88];
    union
    {
        volatile const uint32_t ADCPP;
        ADCPP_TypeDef             ADCPP_Bit;
    };
    union
    {
        volatile uint32_t ADCPC;
        ADCPC_TypeDef  ADCPC_Bit;
    };
    union
    {
        volatile uint32_t ADCCC;
        ADCCC_TypeDef  ADCCC_Bit;
    };

    const uint32_t reserved9[13];
}ADC_TypeDef;

typedef volatile struct
{
    ADC_TypeDef AD[(uint32_t)ADC_enMODULE_MAX +1u];
}ADCS_TypeDef;


#endif /* XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_H_ */
