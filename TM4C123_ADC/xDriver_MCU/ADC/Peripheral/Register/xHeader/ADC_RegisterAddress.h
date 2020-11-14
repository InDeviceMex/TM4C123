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

#define ADC0_BASE         (0x40038000)
#define ADC1_BASE         (0x40039000)

#define ADC0_OFFSET       (0x00038000)
#define ADC1_OFFSET       (0x00039000)

#define ADC_BITBANDING_BASE        ((uint32_t)0x42000000u)



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





#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_XHEADER_ADC_REGISTERADDRESS_H_ */
