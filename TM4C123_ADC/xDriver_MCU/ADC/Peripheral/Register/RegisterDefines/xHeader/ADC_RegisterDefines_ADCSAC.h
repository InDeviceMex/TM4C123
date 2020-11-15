/**
 *
 * @file ADC_RegisterDefines_ADCSAC.h
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
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSAC_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSAC_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 12 ADCSAC *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCSAC_R_AVG_MASK       ((uint32_t)0x00000007u)
#define ADC_ADCSAC_R_AVG_BIT        ((uint32_t)0u)
#define ADC_ADCSAC_R_AVG_1          ((uint32_t)0x00000000u)
#define ADC_ADCSAC_R_AVG_2          ((uint32_t)0x00000001u)
#define ADC_ADCSAC_R_AVG_4          ((uint32_t)0x00000002u)
#define ADC_ADCSAC_R_AVG_8          ((uint32_t)0x00000003u)
#define ADC_ADCSAC_R_AVG_16         ((uint32_t)0x00000004u)
#define ADC_ADCSAC_R_AVG_32         ((uint32_t)0x00000005u)
#define ADC_ADCSAC_R_AVG_64         ((uint32_t)0x00000006u)
#define ADC_ADCSAC_R_RESERVED         ((uint32_t)0x00000007u)

#define ADC_ADCSAC_AVG_MASK       ((uint32_t)0x00000007u)
#define ADC_ADCSAC_AVG_1          ((uint32_t)0x00000000u)
#define ADC_ADCSAC_AVG_2          ((uint32_t)0x00000001u)
#define ADC_ADCSAC_AVG_4          ((uint32_t)0x00000002u)
#define ADC_ADCSAC_AVG_8          ((uint32_t)0x00000003u)
#define ADC_ADCSAC_AVG_16         ((uint32_t)0x00000004u)
#define ADC_ADCSAC_AVG_32         ((uint32_t)0x00000005u)
#define ADC_ADCSAC_AVG_64         ((uint32_t)0x00000006u)
#define ADC_ADCSAC_RESERVED         ((uint32_t)0x00000007u)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSAC_H_ */
