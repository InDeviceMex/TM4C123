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
 * Date Author Version Description
 * 18 oct. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/ADC/Peripheral/Struct/xHeader/ADC_StructRegister.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

typedef volatile struct
{
        union
          {
              volatile uint32_t ADCSSMUX;
              ADCSSMUX8_TypeDef ADCSSMUX_Bit;
          };
          union
          {
              volatile uint32_t ADCSSCTL;
              ADCSSCTL8_TypeDef ADCSSCTL_Bit;
          };
          union
          {
              volatile const uint32_t ADCSSFIFO;
              ADCSSFIFO_TypeDef ADCSSFIFO_Bit;
          };
          union
          {
              volatile const uint32_t ADCSSFSTAT;
              ADCSSFSTAT_TypeDef ADCSSFSTAT_Bit;
          };
          union
          {
              volatile uint32_t ADCSSOP;
              ADCSSOP8_TypeDef ADCSSOP_Bit;
          };
          union
          {
              volatile uint32_t ADCSSDC;
              ADCSSDC8_TypeDef ADCSSDC_Bit;
          };
          const uint32_t reserved2 [2UL];
}ADCINPUT_Typedef;

typedef volatile struct
{
    union
    {
        volatile uint32_t ADCACTSS;
        ADCACTSS_TypeDef ADCACTSS_Bit;
    };
    union
    {
        volatile const uint32_t ADCRIS;
        ADCRIS_TypeDef ADCRIS_Bit;
    };
    union
    {
        volatile uint32_t ADCIM;
        ADCIM_TypeDef ADCIM_Bit;
    };
    union
    {
        volatile uint32_t ADCISC;
        ADCISC_TypeDef ADCISC_Bit;
    };
    union
    {
        volatile uint32_t ADCOSTAT;
        ADCOSTAT_TypeDef ADCOSTAT_Bit;
    };
    union
    {
        volatile uint32_t ADCEMUX;
        ADCEMUX_TypeDef ADCEMUX_Bit;
    };
    union
    {
        volatile uint32_t ADCUSTAT;
        ADCUSTAT_TypeDef ADCUSTAT_Bit;
    };
    union
    {
        volatile uint32_t ADCTSSEL;
        ADCTSSEL_TypeDef ADCTSSEL_Bit;
    };
    union
    {
        volatile uint32_t ADCSSPRI;
        ADCSSPRI_TypeDef ADCSSPRI_Bit;
    };
    union
    {
        volatile uint32_t ADCSPC;
        ADCSPC_TypeDef ADCSPC_Bit;
    };
    union
    {
        volatile uint32_t ADCPSSI;
        ADCPSSI_TypeDef ADCPSSI_Bit;
    };

    const uint32_t reserved;
    union
    {
        volatile uint32_t ADCSAC;
        ADCSAC_TypeDef ADCSAC_Bit;
    };
    union
    {
        volatile uint32_t ADCDCISC;
        ADCDCISC_TypeDef ADCDCISC_Bit;
    };
    union
    {
        volatile uint32_t ADCCTL;
        ADCCTL_TypeDef ADCCTL_Bit;
    };

    const uint32_t reserved1;

    ADCINPUT_Typedef ADCINPUT [4UL];

    const uint32_t reserved5 [784UL];
    union
    {
        volatile uint32_t ADCDCRIC;
        ADCDCRIC_TypeDef ADCDCRIC_Bit;
    };

    const uint32_t reserved6 [63UL];
    union
    {
        volatile uint32_t ADCDCCTL [8UL];
        ADCDCCTL_TypeDef ADCDCCTL_Bit [8UL];
    };
    const uint32_t reserved7 [8UL];
    union
    {
        volatile uint32_t ADCDCCMP [8UL];
        ADCDCCMP_TypeDef ADCDCCMP_Bit [8UL];
    };

    const uint32_t reserved8 [88UL];
    union
    {
        volatile const uint32_t ADCPP;
        ADCPP_TypeDef ADCPP_Bit;
    };
    union
    {
        volatile uint32_t ADCPC;
        ADCPC_TypeDef ADCPC_Bit;
    };
    union
    {
        volatile uint32_t ADCCC;
        ADCCC_TypeDef ADCCC_Bit;
    };

    const uint32_t reserved9 [13UL];
}ADC_TypeDef;

typedef volatile struct
{
    ADC_TypeDef MODULE [(uint32_t) ADC_enMODULE_MAX];
}ADCS_TypeDef;


#endif /* XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_H_ */
