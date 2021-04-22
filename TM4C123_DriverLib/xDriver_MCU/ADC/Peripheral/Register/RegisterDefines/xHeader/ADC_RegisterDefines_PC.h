/**
 *
 * @file ADC_RegisterDefines_PC.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_PC_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_PC_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 25 PC *********************************************
******************************************************************************************/
/*--------*/
#define ADC_PC_R_SR_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_PC_R_SR_BIT    ((uint32_t) 0UL)
#define ADC_PC_R_SR_125Ksps    ((uint32_t) 0x00000001UL)
#define ADC_PC_R_SR_250Ksps    ((uint32_t) 0x00000003UL)
#define ADC_PC_R_SR_500Ksps    ((uint32_t) 0x00000005UL)
#define ADC_PC_R_SR_1000Ksps    ((uint32_t) 0x00000007UL)

#define ADC_PC_SR_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_PC_SR_125Ksps    ((uint32_t) 0x00000001UL)
#define ADC_PC_SR_250Ksps    ((uint32_t) 0x00000003UL)
#define ADC_PC_SR_500Ksps    ((uint32_t) 0x00000005UL)
#define ADC_PC_SR_1000Ksps    ((uint32_t) 0x00000007UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_PC_H_ */
