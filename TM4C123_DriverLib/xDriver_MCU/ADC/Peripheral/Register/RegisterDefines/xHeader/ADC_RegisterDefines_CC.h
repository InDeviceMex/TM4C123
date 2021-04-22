/**
 *
 * @file ADC_RegisterDefines_CC.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_CC_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_CC_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 26 CC *********************************************
******************************************************************************************/
/*--------*/
#define ADC_CC_R_CS_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_CC_R_CS_BIT    ((uint32_t) 0UL)
#define ADC_CC_R_CS_PLL    ((uint32_t) 0x00000000UL)
#define ADC_CC_R_CS_PIOSC    ((uint32_t) 0x00000001UL)

#define ADC_CC_CS_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_CC_CS_PLL    ((uint32_t) 0x00000000UL)
#define ADC_CC_CS_PIOSC    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_CC_H_ */
