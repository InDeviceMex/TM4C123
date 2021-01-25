/**
 *
 * @file ADC_RegisterDefines_ADCCC.h
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
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCCC_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCCC_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 26 ADCCC *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCCC_R_CS_MASK      ((uint32_t)0x0000000FU)
#define ADC_ADCCC_R_CS_BIT       ((uint32_t)0U)
#define ADC_ADCCC_R_CS_PLL       ((uint32_t)0x00000000U)
#define ADC_ADCCC_R_CS_PIOSC     ((uint32_t)0x00000001U)

#define ADC_ADCCC_CS_MASK        ((uint32_t)0x0000000FU)
#define ADC_ADCCC_CS_PLL         ((uint32_t)0x00000000U)
#define ADC_ADCCC_CS_PIOSC       ((uint32_t)0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCCC_H_ */
