/**
 *
 * @file ADC_RegisterDefines_ADCISC.h
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

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCISC_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCISC_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 4 ADCISC *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCISC_R_IN_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_ADCISC_R_IN_BIT    ((uint32_t) 0UL)
#define ADC_ADCISC_R_IN_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_R_IN_CLEAR    ((uint32_t) 0x0000000FUL)

#define ADC_ADCISC_IN_MASK    ((uint32_t) 0x0000000FUL)
#define ADC_ADCISC_IN_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_IN_CLEAR    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_IN0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ADCISC_R_IN0_BIT    ((uint32_t) 0UL)
#define ADC_ADCISC_R_IN0_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_R_IN0_CLEAR    ((uint32_t) 0x00000001UL)

#define ADC_ADCISC_IN0_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ADCISC_IN0_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_IN0_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_IN1_MASK    ((uint32_t) 0x00000002UL)
#define ADC_ADCISC_R_IN1_BIT    ((uint32_t) 1UL)
#define ADC_ADCISC_R_IN1_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_R_IN1_CLEAR    ((uint32_t) 0x00000002UL)

#define ADC_ADCISC_IN1_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ADCISC_IN1_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_IN1_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_IN2_MASK    ((uint32_t) 0x00000004UL)
#define ADC_ADCISC_R_IN2_BIT    ((uint32_t) 2UL)
#define ADC_ADCISC_R_IN2_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_R_IN2_CLEAR    ((uint32_t) 0x00000004UL)

#define ADC_ADCISC_IN2_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ADCISC_IN2_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_IN2_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_IN3_MASK    ((uint32_t) 0x00000008UL)
#define ADC_ADCISC_R_IN3_BIT    ((uint32_t) 3UL)
#define ADC_ADCISC_R_IN3_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_R_IN3_CLEAR    ((uint32_t) 0x00000008UL)

#define ADC_ADCISC_IN3_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ADCISC_IN3_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_IN3_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_DCINSS_MASK    ((uint32_t) 0x000F0000UL)
#define ADC_ADCISC_R_DCINSS_BIT    ((uint32_t) 16UL)
#define ADC_ADCISC_R_DCINSS_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_R_DCINSS_CLEAR    ((uint32_t) 0x000F0000UL)

#define ADC_ADCISC_DCINSS_DCINSS    ((uint32_t) 0x0000000FUL)
#define ADC_ADCISC_DCINSS_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_DCINSS_CLEAR    ((uint32_t) 0x0000000FUL)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_DCINSS0_MASK    ((uint32_t) 0x00010000UL)
#define ADC_ADCISC_R_DCINSS0_BIT    ((uint32_t) 16UL)
#define ADC_ADCISC_R_DCINSS0_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_R_DCINSS0_CLEAR    ((uint32_t) 0x00010000UL)

#define ADC_ADCISC_DCINSS0_DCINSS    ((uint32_t) 0x00000001UL)
#define ADC_ADCISC_DCINSS0_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_DCINSS0_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_DCINSS1_MASK    ((uint32_t) 0x00020000UL)
#define ADC_ADCISC_R_DCINSS1_BIT    ((uint32_t) 17UL)
#define ADC_ADCISC_R_DCINSS1_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_R_DCINSS1_CLEAR    ((uint32_t) 0x00020000UL)

#define ADC_ADCISC_DCINSS1_DCINSS    ((uint32_t) 0x00000001UL)
#define ADC_ADCISC_DCINSS1_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_DCINSS1_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_DCINSS2_MASK    ((uint32_t) 0x00040000UL)
#define ADC_ADCISC_R_DCINSS2_BIT    ((uint32_t) 18UL)
#define ADC_ADCISC_R_DCINSS2_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_R_DCINSS2_CLEAR    ((uint32_t) 0x00040000UL)

#define ADC_ADCISC_DCINSS2_DCINSS    ((uint32_t) 0x00000001UL)
#define ADC_ADCISC_DCINSS2_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_DCINSS2_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_DCINSS3_MASK    ((uint32_t) 0x00080000UL)
#define ADC_ADCISC_R_DCINSS3_BIT    ((uint32_t) 19UL)
#define ADC_ADCISC_R_DCINSS3_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_R_DCINSS3_CLEAR    ((uint32_t) 0x00080000UL)

#define ADC_ADCISC_DCINSS3_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ADCISC_DCINSS3_NA    ((uint32_t) 0x00000000UL)
#define ADC_ADCISC_DCINSS3_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCISC_H_ */
