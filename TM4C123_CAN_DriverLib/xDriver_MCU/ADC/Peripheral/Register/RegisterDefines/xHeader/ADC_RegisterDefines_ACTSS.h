/**
 *
 * @file ADC_RegisterDefines_ACTSS.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ACTSS_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ACTSS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 1 ACTSS *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ACTSS_R_ASEN_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_ACTSS_R_ASEN_BIT    ((uint32_t) 0UL)
#define ADC_ACTSS_R_ASEN_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ACTSS_R_ASEN_ENA    ((uint32_t) 0x0000000FUL)

#define ADC_ACTSS_ASEN_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_ACTSS_ASEN_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ACTSS_ASEN_ENA    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_ACTSS_R_ASEN0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ACTSS_R_ASEN0_BIT    ((uint32_t) 0UL)
#define ADC_ACTSS_R_ASEN0_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ACTSS_R_ASEN0_ENA    ((uint32_t) 0x00000001UL)

#define ADC_ACTSS_ASEN0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ACTSS_ASEN0_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ACTSS_ASEN0_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_ACTSS_R_ASEN1_MASK    ((uint32_t) 0x00000002UL)
#define ADC_ACTSS_R_ASEN1_BIT    ((uint32_t) 1UL)
#define ADC_ACTSS_R_ASEN1_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ACTSS_R_ASEN1_ENA    ((uint32_t) 0x00000002UL)

#define ADC_ACTSS_ASEN1_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ACTSS_ASEN1_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ACTSS_ASEN1_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_ACTSS_R_ASEN2_MASK    ((uint32_t) 0x00000004UL)
#define ADC_ACTSS_R_ASEN2_BIT    ((uint32_t) 2UL)
#define ADC_ACTSS_R_ASEN2_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ACTSS_R_ASEN2_ENA    ((uint32_t) 0x00000004UL)

#define ADC_ACTSS_ASEN2_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ACTSS_ASEN2_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ACTSS_ASEN2_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_ACTSS_R_ASEN3_MASK    ((uint32_t) 0x00000008UL)
#define ADC_ACTSS_R_ASEN3_BIT    ((uint32_t) 3UL)
#define ADC_ACTSS_R_ASEN3_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ACTSS_R_ASEN3_ENA    ((uint32_t) 0x00000008UL)

#define ADC_ACTSS_ASEN3_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ACTSS_ASEN3_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ACTSS_ASEN3_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_ACTSS_R_BUSY_MASK    ((uint32_t) 0x00010000UL)
#define ADC_ACTSS_R_BUSY_BIT    ((uint32_t) 16UL)
#define ADC_ACTSS_R_BUSY_IDLE    ((uint32_t) 0x00000000UL)
#define ADC_ACTSS_R_BUSY_BUSY    ((uint32_t) 0x00010000UL)

#define ADC_ACTSS_BUSY_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ACTSS_BUSY_IDLE    ((uint32_t) 0x00000000UL)
#define ADC_ACTSS_BUSY_BUSY    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ACTSS_H_ */
