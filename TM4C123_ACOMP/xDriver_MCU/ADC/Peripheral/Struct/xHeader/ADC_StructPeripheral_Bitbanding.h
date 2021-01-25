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
 * Date           Author     Version     Description
 * 18 oct. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/ADC/Peripheral/Struct/xHeader/ADC_StructRegister_Bitbanding.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Enum.h>

typedef volatile struct
{
        union
          {
              volatile uint32_t         ADCSSMUX[32];
              BITBANDING_ADCSSMUX8_TypeDef ADCSSMUX_Bit;
          };
          union
          {
              volatile uint32_t       ADCSSCTL[32];
              BITBANDING_ADCSSCTL8_TypeDef ADCSSCTL_Bit;
          };
          union
          {
              volatile const uint32_t ADCSSFIFO[32];
              BITBANDING_ADCSSFIFO_TypeDef      ADCSSFIFO_Bit;
          };
          union
          {
              volatile const uint32_t ADCSSFSTAT[32];
              BITBANDING_ADCSSFSTAT_TypeDef    ADCSSFSTAT_Bit;
          };
          union
          {
              volatile uint32_t      ADCSSOP[32];
              BITBANDING_ADCSSOP8_TypeDef ADCSSOP_Bit;
          };
          union
          {
              volatile uint32_t      ADCSSDC[32];
              BITBANDING_ADCSSDC8_TypeDef ADCSSDC_Bit;
          };
          const uint32_t reserved2[2*32];
}BITBANDING_ADCINPUT_Typedef;

typedef volatile struct
{
    union
    {
        volatile uint32_t      ADCACTSS[32];
        BITBANDING_ADCACTSS_TypeDef ADCACTSS_Bit;
    };
    union
    {
        volatile const uint32_t ADCRIS[32];
        BITBANDING_ADCRIS_TypeDef            ADCRIS_Bit;
    };
    union
    {
        volatile uint32_t ADCIM[32];
        BITBANDING_ADCIM_TypeDef  ADCIM_Bit;
    };
    union
    {
        volatile uint32_t ADCISC[32];
        BITBANDING_ADCISC_TypeDef ADCISC_Bit;
    };
    union
    {
        volatile uint32_t      ADCOSTAT[32];
        BITBANDING_ADCOSTAT_TypeDef ADCOSTAT_Bit;
    };
    union
    {
        volatile uint32_t      ADCEMUX[32];
        BITBANDING_ADCEMUX_TypeDef ADCEMUX_Bit;
    };
    union
    {
        volatile uint32_t      ADCUSTAT[32];
        BITBANDING_ADCUSTAT_TypeDef ADCUSTAT_Bit;
    };
    union
    {
        volatile uint32_t      ADCTSSEL[32];
        BITBANDING_ADCTSSEL_TypeDef  ADCTSSEL_Bit;
    };
    union
    {
        volatile uint32_t     ADCSSPRI[32];
        BITBANDING_ADCSSPRI_TypeDef ADCSSPRI_Bit;
    };
    union
    {
        volatile uint32_t  ADCSPC[32];
        BITBANDING_ADCSPC_TypeDef ADCSPC_Bit;
    };
    union
    {
        volatile uint32_t   ADCPSSI[32];
        BITBANDING_ADCPSSI_TypeDef ADCPSSI_Bit;
    };

    const    uint32_t reserved[32];
    union
    {
        volatile uint32_t  ADCSAC[32];
        BITBANDING_ADCSAC_TypeDef ADCSAC_Bit;
    };
    union
    {
        volatile uint32_t      ADCDCISC[32];
        BITBANDING_ADCDCISC_TypeDef ADCDCISC_Bit;
    };
    union
    {
        volatile uint32_t ADCCTL[32];
        BITBANDING_ADCCTL_TypeDef ADCCTL_Bit;
    };

    const    uint32_t reserved1[32];

    BITBANDING_ADCINPUT_Typedef ADCINPUT[4];

    const uint32_t reserved5[32*784];
    union
    {
        volatile uint32_t      ADCDCRIC[32];
        BITBANDING_ADCDCRIC_TypeDef ADCDCRIC_Bit;
    };

    const uint32_t reserved6[63*32];
    union
    {
        volatile uint32_t      ADCDCCTL[8][32];
        BITBANDING_ADCDCCTL_TypeDef ADCDCCTL_Bit[8];
    };
    const uint32_t reserved7[8*32];
    union
    {
        volatile uint32_t        ADCDCCMP[8][32];
        BITBANDING_ADCDCCMP_TypeDef ADCDCCMP_Bit;
    };

    const uint32_t reserved8[88*32];
    union
    {
        volatile const uint32_t ADCPP[32];
        BITBANDING_ADCPP_TypeDef             ADCPP_Bit;
    };
    union
    {
        volatile uint32_t ADCPC[32];
        BITBANDING_ADCPC_TypeDef  ADCPC_Bit;
    };
    union
    {
        volatile uint32_t ADCCC[32];
        BITBANDING_ADCCC_TypeDef  ADCCC_Bit;
    };

    const uint32_t reserved9[13*32];
}ADC_BITBANDING_TypeDef;

typedef volatile struct
{
        ADC_BITBANDING_TypeDef MODULE[(uint32_t)ADC_enMODULE_MAX +1U];
}ADCS_BITBANDING_TypeDef;



#endif /* XDRIVER_MCU_ADC_PERIPHERAL_STRUCT_XHEADER_ADC_STRUCTPERIPHERAL_BITBANDING_H_ */
