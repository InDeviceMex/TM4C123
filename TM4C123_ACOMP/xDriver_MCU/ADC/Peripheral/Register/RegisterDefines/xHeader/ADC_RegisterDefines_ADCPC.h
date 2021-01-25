/**
 *
 * @file ADC_RegisterDefines_ADCPC.h
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
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCPC_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCPC_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 25 ADCPC *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCPC_R_SR_MASK      ((uint32_t)0x0000000FU)
#define ADC_ADCPC_R_SR_BIT       ((uint32_t)0U)
#define ADC_ADCPC_R_SR_125Ksps   ((uint32_t)0x00000001U)
#define ADC_ADCPC_R_SR_250Ksps   ((uint32_t)0x00000003U)
#define ADC_ADCPC_R_SR_500Ksps   ((uint32_t)0x00000005U)
#define ADC_ADCPC_R_SR_1000Ksps  ((uint32_t)0x00000007U)

#define ADC_ADCPC_SR_MASK        ((uint32_t)0x0000000FU)
#define ADC_ADCPC_SR_125Ksps     ((uint32_t)0x00000001U)
#define ADC_ADCPC_SR_250Ksps     ((uint32_t)0x00000003U)
#define ADC_ADCPC_SR_500Ksps     ((uint32_t)0x00000005U)
#define ADC_ADCPC_SR_1000Ksps    ((uint32_t)0x00000007U)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCPC_H_ */
