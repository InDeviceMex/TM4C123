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

#define ADC_BASE            ((uint32_t)0x40038000U)
#define ADC0_BASE           ((uint32_t)0x40038000U)
#define ADC1_BASE           ((uint32_t)0x40039000U)

#define ADC_OFFSET         ((uint32_t)0x00038000U)
#define ADC0_OFFSET       ((uint32_t)0x00038000U)
#define ADC1_OFFSET       ((uint32_t)0x00039000U)

#define ADC_BITBANDING_BASE        ((uint32_t)0x42000000U)



#define ADC_ADCACTSS_OFFSET         ((uint32_t)0x0000U)
#define ADC_ADCRIS_OFFSET               ((uint32_t)0x0004U)
#define ADC_ADCIM_OFFSET                ((uint32_t)0x0008U)
#define ADC_ADCISC_OFFSET               ((uint32_t)0x000CU)
#define ADC_ADCOSTAT_OFFSET         ((uint32_t)0x0010U)
#define ADC_ADCEMUX_OFFSET          ((uint32_t)0x0014U)
#define ADC_ADCUSTAT_OFFSET         ((uint32_t)0x0018U)
#define ADC_ADCTSSEL_OFFSET         ((uint32_t)0x001CU)
#define ADC_ADCSSPRI_OFFSET         ((uint32_t)0x0020U)
#define ADC_ADCSPC_OFFSET           ((uint32_t)0x0024U)
#define ADC_ADCPSSI_OFFSET          ((uint32_t)0x0028U)
#define ADC_ADCSAC_OFFSET           ((uint32_t)0x0030U)
#define ADC_ADCDCISC_OFFSET         ((uint32_t)0x0034U)
#define ADC_ADCCTL_OFFSET           ((uint32_t)0x0038U)

#define ADC_ADCSSMUX_OFFSET    ((uint32_t)0x0000U)
#define ADC_ADCSSCTL_OFFSET    ((uint32_t)0x0004U)
#define ADC_ADCSSFIFO_OFFSET   ((uint32_t)0x0008U)
#define ADC_ADCSSFSTAT_OFFSET  ((uint32_t)0x000CU)
#define ADC_ADCSSOP_OFFSET     ((uint32_t)0x0010U)
#define ADC_ADCSSDC_OFFSET     ((uint32_t)0x0014U)

#define ADC_ADCSSMUX0_OFFSET    ((uint32_t)0x0040U)
#define ADC_ADCSSCTL0_OFFSET    ((uint32_t)0x0044U)
#define ADC_ADCSSFIFO0_OFFSET   ((uint32_t)0x0048U)
#define ADC_ADCSSFSTAT0_OFFSET  ((uint32_t)0x004CU)
#define ADC_ADCSSOP0_OFFSET     ((uint32_t)0x0050U)
#define ADC_ADCSSDC0_OFFSET     ((uint32_t)0x0054U)
#define ADC_ADCSSMUX1_OFFSET    ((uint32_t)0x0060U)
#define ADC_ADCSSCTL1_OFFSET    ((uint32_t)0x0064U)
#define ADC_ADCSSFIFO1_OFFSET   ((uint32_t)0x0068U)
#define ADC_ADCSSFSTAT1_OFFSET  ((uint32_t)0x006CU)
#define ADC_ADCSSOP1_OFFSET     ((uint32_t)0x0070U)
#define ADC_ADCSSDC1_OFFSET     ((uint32_t)0x0074U)
#define ADC_ADCSSMUX2_OFFSET    ((uint32_t)0x0080U)
#define ADC_ADCSSCTL2_OFFSET    ((uint32_t)0x0084U)
#define ADC_ADCSSFIFO2_OFFSET   ((uint32_t)0x0088U)
#define ADC_ADCSSFSTAT2_OFFSET  ((uint32_t)0x008CU)
#define ADC_ADCSSOP2_OFFSET     ((uint32_t)0x0090U)
#define ADC_ADCSSDC2_OFFSET     ((uint32_t)0x0094U)
#define ADC_ADCSSMUX3_OFFSET    ((uint32_t)0x00A0U)
#define ADC_ADCSSCTL3_OFFSET    ((uint32_t)0x00A4U)
#define ADC_ADCSSFIFO3_OFFSET   ((uint32_t)0x00A8U)
#define ADC_ADCSSFSTAT3_OFFSET  ((uint32_t)0x00ACU)
#define ADC_ADCSSOP3_OFFSET     ((uint32_t)0x00B0U)
#define ADC_ADCSSDC3_OFFSET     ((uint32_t)0x00B4U)
#define ADC_ADCDCRIC_OFFSET     ((uint32_t)0x0D00U)
#define ADC_ADCDCCTL0_OFFSET    ((uint32_t)0x0E00U)
#define ADC_ADCDCCTL1_OFFSET    ((uint32_t)0x0E04U)
#define ADC_ADCDCCTL2_OFFSET    ((uint32_t)0x0E08U)
#define ADC_ADCDCCTL3_OFFSET    ((uint32_t)0x0E0CU)
#define ADC_ADCDCCTL4_OFFSET    ((uint32_t)0x0E10U)
#define ADC_ADCDCCTL5_OFFSET    ((uint32_t)0x0E14U)
#define ADC_ADCDCCTL6_OFFSET    ((uint32_t)0x0E18U)
#define ADC_ADCDCCTL7_OFFSET    ((uint32_t)0x0E1CU)
#define ADC_ADCDCCMP0_OFFSET    ((uint32_t)0x0E40U)
#define ADC_ADCDCCMP1_OFFSET    ((uint32_t)0x0E44U)
#define ADC_ADCDCCMP2_OFFSET    ((uint32_t)0x0E48U)
#define ADC_ADCDCCMP3_OFFSET    ((uint32_t)0x0E4CU)
#define ADC_ADCDCCMP4_OFFSET    ((uint32_t)0x0E50U)
#define ADC_ADCDCCMP5_OFFSET    ((uint32_t)0x0E54U)
#define ADC_ADCDCCMP6_OFFSET    ((uint32_t)0x0E58U)
#define ADC_ADCDCCMP7_OFFSET    ((uint32_t)0x0E5CU)
#define ADC_ADCPP_OFFSET        ((uint32_t)0x0FC0U)
#define ADC_ADCPC_OFFSET        ((uint32_t)0x0FC4U)
#define ADC_ADCCC_OFFSET        ((uint32_t)0x0FC8U)





#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_XHEADER_ADC_REGISTERADDRESS_H_ */
