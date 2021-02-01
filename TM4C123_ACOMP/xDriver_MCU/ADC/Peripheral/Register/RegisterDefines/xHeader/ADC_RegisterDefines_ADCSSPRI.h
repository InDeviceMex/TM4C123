/**
 *
 * @file ADC_RegisterDefines_ADCSSPRI.h
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
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSPRI_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSPRI_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 9 ADCSSPRI *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCSSPRI_R_SS_MASK    ((uint32_t) 0x00003333U)
#define ADC_ADCSSPRI_R_SS_BIT    ((uint32_t) 0U)
#define ADC_ADCSSPRI_R_SS_HIGH    ((uint32_t) 0x00000000U)
#define ADC_ADCSSPRI_R_SS_MEDIUM    ((uint32_t) 0x00001111U)
#define ADC_ADCSSPRI_R_SS_LOW    ((uint32_t) 0x00002222U)
#define ADC_ADCSSPRI_R_SS_VERY_LOW    ((uint32_t) 0x00003333U)

#define ADC_ADCSSPRI_SS_MASK    ((uint32_t) 0x00000003U)
#define ADC_ADCSSPRI_SS_HIGH    ((uint32_t) 0x00000000U)
#define ADC_ADCSSPRI_SS_MEDIUM    ((uint32_t) 0x00001111U)
#define ADC_ADCSSPRI_SS_LOW    ((uint32_t) 0x00002222U)
#define ADC_ADCSSPRI_SS_VERY_LOW    ((uint32_t) 0x00003333U)
/*--------*/

/*--------*/
#define ADC_ADCSSPRI_R_SS0_MASK    ((uint32_t) 0x00000003U)
#define ADC_ADCSSPRI_R_SS0_BIT    ((uint32_t) 0U)
#define ADC_ADCSSPRI_R_SS0_HIGH    ((uint32_t) 0x00000000U)
#define ADC_ADCSSPRI_R_SS0_MEDIUM    ((uint32_t) 0x00000001U)
#define ADC_ADCSSPRI_R_SS0_LOW    ((uint32_t) 0x00000002U)
#define ADC_ADCSSPRI_R_SS0_VERY_LOW    ((uint32_t) 0x00000003U)

#define ADC_ADCSSPRI_SS0_MASK    ((uint32_t) 0x00000003U)
#define ADC_ADCSSPRI_SS0_HIGH    ((uint32_t) 0x00000000U)
#define ADC_ADCSSPRI_SS0_MEDIUM    ((uint32_t) 0x00000001U)
#define ADC_ADCSSPRI_SS0_LOW    ((uint32_t) 0x00000002U)
#define ADC_ADCSSPRI_SS0_VERY_LOW    ((uint32_t) 0x00000003U)
/*--------*/

/*--------*/
#define ADC_ADCSSPRI_R_SS1_MASK    ((uint32_t) 0x00000030U)
#define ADC_ADCSSPRI_R_SS1_BIT    ((uint32_t) 4U)
#define ADC_ADCSSPRI_R_SS1_HIGH    ((uint32_t) 0x00000000U)
#define ADC_ADCSSPRI_R_SS1_MEDIUM    ((uint32_t) 0x00000010U)
#define ADC_ADCSSPRI_R_SS1_LOW    ((uint32_t) 0x00000020U)
#define ADC_ADCSSPRI_R_SS1_VERY_LOW    ((uint32_t) 0x00000030U)

#define ADC_ADCSSPRI_SS1_MASK    ((uint32_t) 0x00000003U)
#define ADC_ADCSSPRI_SS1_HIGH    ((uint32_t) 0x00000000U)
#define ADC_ADCSSPRI_SS1_MEDIUM    ((uint32_t) 0x00000001U)
#define ADC_ADCSSPRI_SS1_LOW    ((uint32_t) 0x00000002U)
#define ADC_ADCSSPRI_SS1_VERY_LOW    ((uint32_t) 0x00000003U)
/*--------*/

/*--------*/
#define ADC_ADCSSPRI_R_SS2_MASK    ((uint32_t) 0x00000300U)
#define ADC_ADCSSPRI_R_SS2_BIT    ((uint32_t) 8U)
#define ADC_ADCSSPRI_R_SS2_HIGH    ((uint32_t) 0x00000000U)
#define ADC_ADCSSPRI_R_SS2_MEDIUM    ((uint32_t) 0x00000100U)
#define ADC_ADCSSPRI_R_SS2_LOW    ((uint32_t) 0x00000200U)
#define ADC_ADCSSPRI_R_SS2_VERY_LOW    ((uint32_t) 0x00000300U)

#define ADC_ADCSSPRI_SS2_MASK    ((uint32_t) 0x00000003U)
#define ADC_ADCSSPRI_SS2_HIGH    ((uint32_t) 0x00000000U)
#define ADC_ADCSSPRI_SS2_MEDIUM    ((uint32_t) 0x00000001U)
#define ADC_ADCSSPRI_SS2_LOW    ((uint32_t) 0x00000002U)
#define ADC_ADCSSPRI_SS2_VERY_LOW    ((uint32_t) 0x00000003U)
/*--------*/

/*--------*/
#define ADC_ADCSSPRI_R_SS3_MASK    ((uint32_t) 0x00003000U)
#define ADC_ADCSSPRI_R_SS3_BIT    ((uint32_t) 12U)
#define ADC_ADCSSPRI_R_SS3_HIGH    ((uint32_t) 0x00000000U)
#define ADC_ADCSSPRI_R_SS3_MEDIUM    ((uint32_t) 0x00001000U)
#define ADC_ADCSSPRI_R_SS3_LOW    ((uint32_t) 0x00002000U)
#define ADC_ADCSSPRI_R_SS3_VERY_LOW    ((uint32_t) 0x00003000U)

#define ADC_ADCSSPRI_SS3_MASK    ((uint32_t) 0x00000003U)
#define ADC_ADCSSPRI_SS3_HIGH    ((uint32_t) 0x00000000U)
#define ADC_ADCSSPRI_SS3_MEDIUM    ((uint32_t) 0x00000001U)
#define ADC_ADCSSPRI_SS3_LOW    ((uint32_t) 0x00000002U)
#define ADC_ADCSSPRI_SS3_VERY_LOW    ((uint32_t) 0x00000003U)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSPRI_H_ */
