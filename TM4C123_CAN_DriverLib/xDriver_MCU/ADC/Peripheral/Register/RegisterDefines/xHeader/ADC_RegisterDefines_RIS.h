/**
 *
 * @file ADC_RegisterDefines_RIS.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_RIS_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_RIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 2 RIS *********************************************
******************************************************************************************/
/*--------*/
#define ADC_RIS_R_INR_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_RIS_R_INR_BIT    ((uint32_t) 0UL)
#define ADC_RIS_R_INR_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_INR_ACTIVE    ((uint32_t) 0x0000000FUL)

#define ADC_RIS_INR_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_RIS_INR_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_INR_ACTIVE    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_RIS_R_INR0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_R_INR0_BIT    ((uint32_t) 0UL)
#define ADC_RIS_R_INR0_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_INR0_ACTIVE    ((uint32_t) 0x00000001UL)

#define ADC_RIS_INR0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_INR0_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_INR0_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_INR1_MASK    ((uint32_t) 0x00000002UL)
#define ADC_RIS_R_INR1_BIT    ((uint32_t) 1UL)
#define ADC_RIS_R_INR1_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_INR1_ACTIVE    ((uint32_t) 0x00000002UL)

#define ADC_RIS_INR1_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_INR1_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_INR1_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_INR2_MASK    ((uint32_t) 0x00000004UL)
#define ADC_RIS_R_INR2_BIT    ((uint32_t) 2UL)
#define ADC_RIS_R_INR2_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_INR2_ACTIVE    ((uint32_t) 0x00000004UL)

#define ADC_RIS_INR2_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_INR2_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_INR2_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_INR3_MASK    ((uint32_t) 0x00000008UL)
#define ADC_RIS_R_INR3_BIT    ((uint32_t) 3UL)
#define ADC_RIS_R_INR3_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_INR3_ACTIVE    ((uint32_t) 0x00000008UL)

#define ADC_RIS_INR3_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_INR3_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_INR3_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_RIS_R_INRDC_MASK    ((uint32_t) 0x00010000UL)
#define ADC_RIS_R_INRDC_BIT    ((uint32_t) 16UL)
#define ADC_RIS_R_INRDC_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_R_INRDC_ACTIVE    ((uint32_t) 0x00010000UL)

#define ADC_RIS_INRDC_MASK    ((uint32_t) 0x00000001UL)
#define ADC_RIS_INRDC_NOACTIVE    ((uint32_t) 0x00000000UL)
#define ADC_RIS_INRDC_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_RIS_H_ */
