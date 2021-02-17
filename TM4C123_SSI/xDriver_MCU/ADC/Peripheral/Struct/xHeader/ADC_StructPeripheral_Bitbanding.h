/**
 *
 * @file ADC_StructPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/ADC/Peripheral/Struct/xHeader/ADC_StructRegister_Bitbanding.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

typedef volatile struct
{
        union
          {
              volatile uint32_t ADCSSMUX [32UL];
              BITBANDING_ADCSSMUX8_TypeDef ADCSSMUX_Bit;
          };
          union
          {
              volatile uint32_t ADCSSCTL [32UL];
              BITBANDING_ADCSSCTL8_TypeDef ADCSSCTL_Bit;
          };
          union
          {
              volatile const uint32_t ADCSSFIFO [32UL];
              BITBANDING_ADCSSFIFO_TypeDef ADCSSFIFO_Bit;
          };
          union
          {
              volatile const uint32_t ADCSSFSTAT [32UL];
              BITBANDING_ADCSSFSTAT_TypeDef ADCSSFSTAT_Bit;
          };
          union
          {
              volatile uint32_t ADCSSOP [32UL];
              BITBANDING_ADCSSOP8_TypeDef ADCSSOP_Bit;
          };
          union
          {
              volatile uint32_t ADCSSDC [32UL];
              BITBANDING_ADCSSDC8_TypeDef ADCSSDC_Bit;
          };
          const uint32_t reserved2 [2UL * 32UL];
}BITBANDING_ADCINPUT_Typedef;

typedef volatile struct
{
    union
    {
        volatile uint32_t ADCACTSS [32UL];
        BITBANDING_ADCACTSS_TypeDef ADCACTSS_Bit;
    };
    union
    {
        volatile const uint32_t ADCRIS [32UL];
        BITBANDING_ADCRIS_TypeDef ADCRIS_Bit;
    };
    union
    {
        volatile uint32_t ADCIM [32UL];
        BITBANDING_ADCIM_TypeDef ADCIM_Bit;
    };
    union
    {
        volatile uint32_t ADCISC [32UL];
        BITBANDING_ADCISC_TypeDef ADCISC_Bit;
    };
    union
    {
        volatile uint32_t ADCOSTAT [32UL];
        BITBANDING_ADCOSTAT_TypeDef ADCOSTAT_Bit;
    };
    union
    {
        volatile uint32_t ADCEMUX [32UL];
        BITBANDING_ADCEMUX_TypeDef ADCEMUX_Bit;
    };
    union
    {
        volatile uint32_t ADCUSTAT [32UL];
        BITBANDING_ADCUSTAT_TypeDef ADCUSTAT_Bit;
    };
    union
    {
        volatile uint32_t ADCTSSEL [32UL];
        BITBANDING_ADCTSSEL_TypeDef ADCTSSEL_Bit;
    };
    union
    {
        volatile uint32_t ADCSSPRI [32UL];
        BITBANDING_ADCSSPRI_TypeDef ADCSSPRI_Bit;
    };
    union
    {
        volatile uint32_t ADCSPC [32UL];
        BITBANDING_ADCSPC_TypeDef ADCSPC_Bit;
    };
    union
    {
        volatile uint32_t ADCPSSI [32UL];
        BITBANDING_ADCPSSI_TypeDef ADCPSSI_Bit;
    };

    const uint32_t reserved [32UL];
    union
    {
        volatile uint32_t ADCSAC [32UL];
        BITBANDING_ADCSAC_TypeDef ADCSAC_Bit;
    };
    union
    {
        volatile uint32_t ADCDCISC [32UL];
        BITBANDING_ADCDCISC_TypeDef ADCDCISC_Bit;
    };
    union
    {
        volatile uint32_t ADCCTL [32UL];
        BITBANDING_ADCCTL_TypeDef ADCCTL_Bit;
    };

    const uint32_t reserved1 [32UL];

    BITBANDING_ADCINPUT_Typedef ADCINPUT [4UL];

    const uint32_t reserved5 [32UL * 784UL];
    union
    {
        volatile uint32_t ADCDCRIC [32UL];
        BITBANDING_ADCDCRIC_TypeDef ADCDCRIC_Bit;
    };

    const uint32_t reserved6 [63UL * 32UL];
    union
    {
        volatile uint32_t ADCDCCTL [8UL][32UL];
        BITBANDING_ADCDCCTL_TypeDef ADCDCCTL_Bit [8UL];
    };
    const uint32_t reserved7 [8UL * 32UL];
    union
    {
        volatile uint32_t ADCDCCMP [8UL][32UL];
        BITBANDING_ADCDCCMP_TypeDef ADCDCCMP_Bit;
    };

    const uint32_t reserved8 [88UL * 32UL];
    union
    {
        volatile const uint32_t ADCPP [32UL];
        BITBANDING_ADCPP_TypeDef ADCPP_Bit;
    };
    union
    {
        volatile uint32_t ADCPC [32UL];
        BITBANDING_ADCPC_TypeDef ADCPC_Bit;
    };
    union
    {
        volatile uint32_t ADCCC [32UL];
        BITBANDING_ADCCC_TypeDef ADCCC_Bit;
    };

    const uint32_t reserved9 [13UL * 32UL];
}ADC_BITBANDING_TypeDef;

typedef volatile struct
{
        ADC_BITBANDING_TypeDef MODULE [(uint32_t) ADC_enMODULE_MAX];
}ADCS_BITBANDING_TypeDef;



#endif /* XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_BITBANDING_H_ */
