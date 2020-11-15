/**
 *
 * @file ADC_RegisterDefines_ADCACTSS.h
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
 * @verbatim 14 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCACTSS_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCACTSS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 1 ADCACTSS *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCACTSS_R_ASEN_MASK      ((uint32_t)0x0000000Fu)
#define ADC_ADCACTSS_R_ASEN_BIT       ((uint32_t)0u)
#define ADC_ADCACTSS_R_ASEN_DIS       ((uint32_t)0x00000000u)
#define ADC_ADCACTSS_R_ASEN_EN        ((uint32_t)0x0000000Fu)

#define ADC_ADCACTSS_ASEN_MASK        ((uint32_t)0x0000000Fu)
#define ADC_ADCACTSS_ASEN_DIS         ((uint32_t)0x00000000u)
#define ADC_ADCACTSS_ASEN_EN          ((uint32_t)0x0000000Fu)
/*--------*/

/*--------*/
#define ADC_ADCACTSS_R_ASEN0_MASK      ((uint32_t)0x00000001u)
#define ADC_ADCACTSS_R_ASEN0_BIT       ((uint32_t)0u)
#define ADC_ADCACTSS_R_ASEN0_DIS       ((uint32_t)0x00000000u)
#define ADC_ADCACTSS_R_ASEN0_EN        ((uint32_t)0x00000001u)

#define ADC_ADCACTSS_ASEN0_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCACTSS_ASEN0_DIS         ((uint32_t)0x00000000u)
#define ADC_ADCACTSS_ASEN0_EN          ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCACTSS_R_ASEN1_MASK      ((uint32_t)0x00000002u)
#define ADC_ADCACTSS_R_ASEN1_BIT       ((uint32_t)1u)
#define ADC_ADCACTSS_R_ASEN1_DIS       ((uint32_t)0x00000000u)
#define ADC_ADCACTSS_R_ASEN1_EN        ((uint32_t)0x00000002u)

#define ADC_ADCACTSS_ASEN1_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCACTSS_ASEN1_DIS         ((uint32_t)0x00000000u)
#define ADC_ADCACTSS_ASEN1_EN          ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCACTSS_R_ASEN2_MASK      ((uint32_t)0x00000004u)
#define ADC_ADCACTSS_R_ASEN2_BIT       ((uint32_t)2u)
#define ADC_ADCACTSS_R_ASEN2_DIS       ((uint32_t)0x00000000u)
#define ADC_ADCACTSS_R_ASEN2_EN        ((uint32_t)0x00000004u)

#define ADC_ADCACTSS_ASEN2_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCACTSS_ASEN2_DIS         ((uint32_t)0x00000000u)
#define ADC_ADCACTSS_ASEN2_EN          ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCACTSS_R_ASEN3_MASK      ((uint32_t)0x00000008u)
#define ADC_ADCACTSS_R_ASEN3_BIT       ((uint32_t)3u)
#define ADC_ADCACTSS_R_ASEN3_DIS       ((uint32_t)0x00000000u)
#define ADC_ADCACTSS_R_ASEN3_EN        ((uint32_t)0x00000008u)

#define ADC_ADCACTSS_ASEN3_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCACTSS_ASEN3_DIS         ((uint32_t)0x00000000u)
#define ADC_ADCACTSS_ASEN3_EN          ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCACTSS_R_BUSY_MASK      ((uint32_t)0x00010000u)
#define ADC_ADCACTSS_R_BUSY_BIT       ((uint32_t)16u)
#define ADC_ADCACTSS_R_BUSY_IDLE      ((uint32_t)0x00000000u)
#define ADC_ADCACTSS_R_BUSY_BUSY      ((uint32_t)0x00010000u)

#define ADC_ADCACTSS_BUSY_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCACTSS_BUSY_IDLE        ((uint32_t)0x00000000u)
#define ADC_ADCACTSS_BUSY_BUSY        ((uint32_t)0x00000001u)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCACTSS_H_ */
