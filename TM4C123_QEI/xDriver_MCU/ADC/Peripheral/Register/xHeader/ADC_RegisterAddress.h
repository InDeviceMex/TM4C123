/**
 *
 * @file ADC_RegisterAddress.h
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
 * @verbatim 21 oct. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 oct. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_XHEADER_ADC_REGISTERADDRESS_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_XHEADER_ADC_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define ADC_INPUT_REGISTER_NUM    ((uint32_t) 8UL)

#define ADC_BASE    ((uint32_t) 0x40038000UL)
#define ADC0_BASE    ((uint32_t) 0x40038000UL)
#define ADC1_BASE    ((uint32_t) 0x40039000UL)

#define ADC_OFFSET    ((uint32_t) 0x00038000UL)
#define ADC0_OFFSET    ((uint32_t) 0x00038000UL)
#define ADC1_OFFSET    ((uint32_t) 0x00039000UL)

#define ADC_BITBANDING_BASE    ((uint32_t) 0x42000000UL)

#define ADC_ADCACTSS_OFFSET    ((uint32_t) 0x0000UL)
#define ADC_ADCRIS_OFFSET    ((uint32_t) 0x0004UL)
#define ADC_ADCIM_OFFSET    ((uint32_t) 0x0008UL)
#define ADC_ADCISC_OFFSET    ((uint32_t) 0x000CUL)
#define ADC_ADCOSTAT_OFFSET    ((uint32_t) 0x0010UL)
#define ADC_ADCEMUX_OFFSET    ((uint32_t) 0x0014UL)
#define ADC_ADCUSTAT_OFFSET    ((uint32_t) 0x0018UL)
#define ADC_ADCTSSEL_OFFSET    ((uint32_t) 0x001CUL)
#define ADC_ADCSSPRI_OFFSET    ((uint32_t) 0x0020UL)
#define ADC_ADCSPC_OFFSET    ((uint32_t) 0x0024UL)
#define ADC_ADCPSSI_OFFSET    ((uint32_t) 0x0028UL)
#define ADC_ADCSAC_OFFSET    ((uint32_t) 0x0030UL)
#define ADC_ADCDCISC_OFFSET    ((uint32_t) 0x0034UL)
#define ADC_ADCCTL_OFFSET    ((uint32_t) 0x0038UL)

#define ADC_ADCSSMUX_OFFSET    ((uint32_t) 0x0000UL)
#define ADC_ADCSSCTL_OFFSET    ((uint32_t) 0x0004UL)
#define ADC_ADCSSFIFO_OFFSET    ((uint32_t) 0x0008UL)
#define ADC_ADCSSFSTAT_OFFSET    ((uint32_t) 0x000CUL)
#define ADC_ADCSSOP_OFFSET    ((uint32_t) 0x0010UL)
#define ADC_ADCSSDC_OFFSET    ((uint32_t) 0x0014UL)

#define ADC_INPUT_REGISTER_OFFSET    ((uint32_t) 0x0020UL)

#define ADC_ADCSSMUX0_OFFSET    ((uint32_t) 0x0040UL)
#define ADC_ADCSSCTL0_OFFSET    ((uint32_t) 0x0044UL)
#define ADC_ADCSSFIFO0_OFFSET    ((uint32_t) 0x0048UL)
#define ADC_ADCSSFSTAT0_OFFSET    ((uint32_t) 0x004CUL)
#define ADC_ADCSSOP0_OFFSET    ((uint32_t) 0x0050UL)
#define ADC_ADCSSDC0_OFFSET    ((uint32_t) 0x0054UL)

#define ADC_ADCSSMUX1_OFFSET    ((uint32_t) 0x0060UL)
#define ADC_ADCSSCTL1_OFFSET    ((uint32_t) 0x0064UL)
#define ADC_ADCSSFIFO1_OFFSET    ((uint32_t) 0x0068UL)
#define ADC_ADCSSFSTAT1_OFFSET    ((uint32_t) 0x006CUL)
#define ADC_ADCSSOP1_OFFSET    ((uint32_t) 0x0070UL)
#define ADC_ADCSSDC1_OFFSET    ((uint32_t) 0x0074UL)

#define ADC_ADCSSMUX2_OFFSET    ((uint32_t) 0x0080UL)
#define ADC_ADCSSCTL2_OFFSET    ((uint32_t) 0x0084UL)
#define ADC_ADCSSFIFO2_OFFSET    ((uint32_t) 0x0088UL)
#define ADC_ADCSSFSTAT2_OFFSET    ((uint32_t) 0x008CUL)
#define ADC_ADCSSOP2_OFFSET    ((uint32_t) 0x0090UL)
#define ADC_ADCSSDC2_OFFSET    ((uint32_t) 0x0094UL)

#define ADC_ADCSSMUX3_OFFSET    ((uint32_t) 0x00A0UL)
#define ADC_ADCSSCTL3_OFFSET    ((uint32_t) 0x00A4UL)
#define ADC_ADCSSFIFO3_OFFSET    ((uint32_t) 0x00A8UL)
#define ADC_ADCSSFSTAT3_OFFSET    ((uint32_t) 0x00ACUL)
#define ADC_ADCSSOP3_OFFSET    ((uint32_t) 0x00B0UL)
#define ADC_ADCSSDC3_OFFSET    ((uint32_t) 0x00B4UL)

#define ADC_ADCDCRIC_OFFSET    ((uint32_t) 0x0D00UL)

#define ADC_ADCDCCTL_OFFSET    ((uint32_t) 0x0E00UL)
#define ADC_ADCDCCTL0_OFFSET    ((uint32_t) 0x0E00UL)
#define ADC_ADCDCCTL1_OFFSET    ((uint32_t) 0x0E04UL)
#define ADC_ADCDCCTL2_OFFSET    ((uint32_t) 0x0E08UL)
#define ADC_ADCDCCTL3_OFFSET    ((uint32_t) 0x0E0CUL)
#define ADC_ADCDCCTL4_OFFSET    ((uint32_t) 0x0E10UL)
#define ADC_ADCDCCTL5_OFFSET    ((uint32_t) 0x0E14UL)
#define ADC_ADCDCCTL6_OFFSET    ((uint32_t) 0x0E18UL)
#define ADC_ADCDCCTL7_OFFSET    ((uint32_t) 0x0E1CUL)

#define ADC_ADCDCCMP_OFFSET    ((uint32_t) 0x0E40UL)
#define ADC_ADCDCCMP0_OFFSET    ((uint32_t) 0x0E40UL)
#define ADC_ADCDCCMP1_OFFSET    ((uint32_t) 0x0E44UL)
#define ADC_ADCDCCMP2_OFFSET    ((uint32_t) 0x0E48UL)
#define ADC_ADCDCCMP3_OFFSET    ((uint32_t) 0x0E4CUL)
#define ADC_ADCDCCMP4_OFFSET    ((uint32_t) 0x0E50UL)
#define ADC_ADCDCCMP5_OFFSET    ((uint32_t) 0x0E54UL)
#define ADC_ADCDCCMP6_OFFSET    ((uint32_t) 0x0E58UL)
#define ADC_ADCDCCMP7_OFFSET    ((uint32_t) 0x0E5CUL)

#define ADC_ADCPP_OFFSET    ((uint32_t) 0x0FC0UL)
#define ADC_ADCPC_OFFSET    ((uint32_t) 0x0FC4UL)
#define ADC_ADCCC_OFFSET    ((uint32_t) 0x0FC8UL)

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_XHEADER_ADC_REGISTERADDRESS_H_ */
