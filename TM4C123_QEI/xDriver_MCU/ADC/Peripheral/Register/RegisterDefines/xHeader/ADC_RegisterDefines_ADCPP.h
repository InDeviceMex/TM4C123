/**
 *
 * @file ADC_RegisterDefines_ADCPP.h
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
 * @verbatim 15 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCPP_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCPP_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 24 ADCPP *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCPP_R_MSR_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_ADCPP_R_MSR_BIT    ((uint32_t) 0UL)
#define ADC_ADCPP_R_MSR_125Ksps    ((uint32_t) 0x00000001UL)
#define ADC_ADCPP_R_MSR_250Ksps    ((uint32_t) 0x00000003UL)
#define ADC_ADCPP_R_MSR_500Ksps    ((uint32_t) 0x00000005UL)
#define ADC_ADCPP_R_MSR_1000Ksps    ((uint32_t) 0x00000007UL)

#define ADC_ADCPP_MSR_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_ADCPP_MSR_125Ksps    ((uint32_t) 0x00000001UL)
#define ADC_ADCPP_MSR_250Ksps    ((uint32_t) 0x00000003UL)
#define ADC_ADCPP_MSR_500Ksps    ((uint32_t) 0x00000005UL)
#define ADC_ADCPP_MSR_1000Ksps    ((uint32_t) 0x00000007UL)
/*--------*/

/*--------*/
#define ADC_ADCPP_R_CH_MASK    ((uint32_t) 0x000003F0UL)
#define ADC_ADCPP_R_CH_BIT    ((uint32_t) 4UL)

#define ADC_ADCPP_CH_MASK    ((uint32_t) 0x0000003FUL)
/*--------*/

/*--------*/
#define ADC_ADCPP_R_DC_MASK    ((uint32_t) 0x0000FC00UL)
#define ADC_ADCPP_R_DC_BIT    ((uint32_t) 10UL)

#define ADC_ADCPP_DC_MASK    ((uint32_t) 0x0000003FUL)
/*--------*/

/*--------*/
#define ADC_ADCPP_R_TYPE_MASK    ((uint32_t) 0x00030000UL)
#define ADC_ADCPP_R_TYPE_BIT    ((uint32_t) 16UL)
#define ADC_ADCPP_R_TYPE_SAR    ((uint32_t) 0x00000000UL)

#define ADC_ADCPP_TYPE_MASK    ((uint32_t) 0x00000003UL)
#define ADC_ADCPP_TYPE_SAR    ((uint32_t) 0x00000000UL)
/*--------*/

/*--------*/
#define ADC_ADCPP_R_RSL_MASK    ((uint32_t) 0x007C0000UL)
#define ADC_ADCPP_R_RSL_BIT    ((uint32_t) 18UL)

#define ADC_ADCPP_RSL_MASK    ((uint32_t) 0x0000001FUL)
/*--------*/

/*--------*/
#define ADC_ADCPP_R_TS_MASK    ((uint32_t) 0x00800000UL)
#define ADC_ADCPP_R_TS_BIT    ((uint32_t) 23UL)
#define ADC_ADCPP_R_TS_NOTEMP    ((uint32_t) 0x00000000UL)
#define ADC_ADCPP_R_TS_TEMP    ((uint32_t) 0x00800000UL)

#define ADC_ADCPP_TS_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ADCPP_TS_NOTEMP    ((uint32_t) 0x00000000UL)
#define ADC_ADCPP_TS_TEMP    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCPP_H_ */
