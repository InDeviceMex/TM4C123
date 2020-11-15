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

#define ADC_BASE            ((uint32_t)0x40038000u)
#define ADC0_BASE           ((uint32_t)0x40038000u)
#define ADC1_BASE           ((uint32_t)0x40039000u)

#define ADC_OFFSET         ((uint32_t)0x00038000u)
#define ADC0_OFFSET       ((uint32_t)0x00038000u)
#define ADC1_OFFSET       ((uint32_t)0x00039000u)

#define ADC_BITBANDING_BASE        ((uint32_t)0x42000000u)



#define ADC_ADCACTSS_OFFSET         ((uint32_t)0x0000u)
#define ADC_ADCRIS_OFFSET               ((uint32_t)0x0004u)
#define ADC_ADCIM_OFFSET                ((uint32_t)0x0008u)
#define ADC_ADCISC_OFFSET               ((uint32_t)0x000Cu)
#define ADC_ADCOSTAT_OFFSET         ((uint32_t)0x0010u)
#define ADC_ADCEMUX_OFFSET          ((uint32_t)0x0014u)
#define ADC_ADCUSTAT_OFFSET         ((uint32_t)0x0018u)
#define ADC_ADCTSSEL_OFFSET         ((uint32_t)0x001Cu)
#define ADC_ADCSSPRI_OFFSET         ((uint32_t)0x0020u)
#define ADC_ADCSPC_OFFSET           ((uint32_t)0x0024u)
#define ADC_ADCPSSI_OFFSET          ((uint32_t)0x0028u)
#define ADC_ADCSAC_OFFSET           ((uint32_t)0x0030u)
#define ADC_ADCDCISC_OFFSET         ((uint32_t)0x0034u)
#define ADC_ADCCTL_OFFSET           ((uint32_t)0x0038u)
#define ADC_ADCSSMUX0_OFFSET    ((uint32_t)0x0040u)
#define ADC_ADCSSCTL0_OFFSET    ((uint32_t)0x0044u)
#define ADC_ADCSSFIFO0_OFFSET   ((uint32_t)0x0048u)
#define ADC_ADCSSFSTAT0_OFFSET  ((uint32_t)0x004Cu)
#define ADC_ADCSSOP0_OFFSET     ((uint32_t)0x0050u)
#define ADC_ADCSSDC0_OFFSET     ((uint32_t)0x0054u)
#define ADC_ADCSSMUX1_OFFSET    ((uint32_t)0x0060u)
#define ADC_ADCSSCTL1_OFFSET    ((uint32_t)0x0064u)
#define ADC_ADCSSFIFO1_OFFSET   ((uint32_t)0x0068u)
#define ADC_ADCSSFSTAT1_OFFSET  ((uint32_t)0x006Cu)
#define ADC_ADCSSOP1_OFFSET     ((uint32_t)0x0070u)
#define ADC_ADCSSDC1_OFFSET     ((uint32_t)0x0074u)
#define ADC_ADCSSMUX2_OFFSET    ((uint32_t)0x0080u)
#define ADC_ADCSSCTL2_OFFSET    ((uint32_t)0x0084u)
#define ADC_ADCSSFIFO2_OFFSET   ((uint32_t)0x0088u)
#define ADC_ADCSSFSTAT2_OFFSET  ((uint32_t)0x008Cu)
#define ADC_ADCSSOP2_OFFSET     ((uint32_t)0x0090u)
#define ADC_ADCSSDC2_OFFSET     ((uint32_t)0x0094u)
#define ADC_ADCSSMUX3_OFFSET    ((uint32_t)0x00A0u)
#define ADC_ADCSSCTL3_OFFSET    ((uint32_t)0x00A4u)
#define ADC_ADCSSFIFO3_OFFSET   ((uint32_t)0x00A8u)
#define ADC_ADCSSFSTAT3_OFFSET  ((uint32_t)0x00ACu)
#define ADC_ADCSSOP3_OFFSET     ((uint32_t)0x00B0u)
#define ADC_ADCSSDC3_OFFSET     ((uint32_t)0x00B4u)
#define ADC_ADCDCRIC_OFFSET     ((uint32_t)0x0D00u)
#define ADC_ADCDCCTL0_OFFSET    ((uint32_t)0x0E00u)
#define ADC_ADCDCCTL1_OFFSET    ((uint32_t)0x0E04u)
#define ADC_ADCDCCTL2_OFFSET    ((uint32_t)0x0E08u)
#define ADC_ADCDCCTL3_OFFSET    ((uint32_t)0x0E0Cu)
#define ADC_ADCDCCTL4_OFFSET    ((uint32_t)0x0E10u)
#define ADC_ADCDCCTL5_OFFSET    ((uint32_t)0x0E14u)
#define ADC_ADCDCCTL6_OFFSET    ((uint32_t)0x0E18u)
#define ADC_ADCDCCTL7_OFFSET    ((uint32_t)0x0E1Cu)
#define ADC_ADCDCCMP0_OFFSET    ((uint32_t)0x0E40u)
#define ADC_ADCDCCMP1_OFFSET    ((uint32_t)0x0E44u)
#define ADC_ADCDCCMP2_OFFSET    ((uint32_t)0x0E48u)
#define ADC_ADCDCCMP3_OFFSET    ((uint32_t)0x0E4Cu)
#define ADC_ADCDCCMP4_OFFSET    ((uint32_t)0x0E50u)
#define ADC_ADCDCCMP5_OFFSET    ((uint32_t)0x0E54u)
#define ADC_ADCDCCMP6_OFFSET    ((uint32_t)0x0E58u)
#define ADC_ADCDCCMP7_OFFSET    ((uint32_t)0x0E5Cu)
#define ADC_ADCPP_OFFSET        ((uint32_t)0x0FC0u)
#define ADC_ADCPC_OFFSET        ((uint32_t)0x0FC4u)
#define ADC_ADCCC_OFFSET        ((uint32_t)0x0FC8u)





#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_XHEADER_ADC_REGISTERADDRESS_H_ */
