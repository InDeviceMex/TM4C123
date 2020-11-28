/**
 *
 * @file ADC_RegisterDefines_ADCTSSEL.h
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
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCTSSEL_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCTSSEL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 8 ADCTSSEL *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCTSSEL_R_PS_MASK           ((uint32_t)0x30303030u)
#define ADC_ADCTSSEL_R_PS_BIT               ((uint32_t)4u)
#define ADC_ADCTSSEL_R_PS_PWM0          ((uint32_t)0x00000000u)
#define ADC_ADCTSSEL_R_PS_PWM1          ((uint32_t)0x00000001u)

#define ADC_ADCTSSEL_PS_MASK                 ((uint32_t)0x00000003u)
#define ADC_ADCTSSEL_PS_PWM0                ((uint32_t)0x00000000u)
#define ADC_ADCTSSEL_PS_PWM1                ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCTSSEL_R_PS0_MASK           ((uint32_t)0x00000030u)
#define ADC_ADCTSSEL_R_PS0_BIT               ((uint32_t)4u)
#define ADC_ADCTSSEL_R_PS0_PWM0          ((uint32_t)0x00000000u)
#define ADC_ADCTSSEL_R_PS0_PWM1          ((uint32_t)0x00000010u)

#define ADC_ADCTSSEL_PS0_MASK                 ((uint32_t)0x00000003u)
#define ADC_ADCTSSEL_PS0_PWM0                ((uint32_t)0x00000000u)
#define ADC_ADCTSSEL_PS0_PWM1                ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCTSSEL_R_PS1_MASK              ((uint32_t)0x00003000u)
#define ADC_ADCTSSEL_R_PS1_BIT                   ((uint32_t)12u)
#define ADC_ADCTSSEL_R_PS1_PWM0             ((uint32_t)0x00000000u)
#define ADC_ADCTSSEL_R_PS1_PWM1             ((uint32_t)0x00001000u)

#define ADC_ADCTSSEL_PS1_MASK                ((uint32_t)0x00000003u)
#define ADC_ADCTSSEL_PS1_PWM0               ((uint32_t)0x00000000u)
#define ADC_ADCTSSEL_PS1_PWM1               ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCTSSEL_R_PS2_MASK              ((uint32_t)0x00300000u)
#define ADC_ADCTSSEL_R_PS2_BIT                   ((uint32_t)20u)
#define ADC_ADCTSSEL_R_PS2_PWM0             ((uint32_t)0x00000000u)
#define ADC_ADCTSSEL_R_PS2_PWM1             ((uint32_t)0x00100000u)

#define ADC_ADCTSSEL_PS2_MASK                ((uint32_t)0x00000003u)
#define ADC_ADCTSSEL_PS2_PWM0               ((uint32_t)0x00000000u)
#define ADC_ADCTSSEL_PS2_PWM1              ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCTSSEL_R_PS3_MASK              ((uint32_t)0x30000000u)
#define ADC_ADCTSSEL_R_PS3_BIT                   ((uint32_t)28u)
#define ADC_ADCTSSEL_R_PS3_PWM0       ((uint32_t)0x00000000u)
#define ADC_ADCTSSEL_R_PS3_PWM1            ((uint32_t)0x10000000u)

#define ADC_ADCTSSEL_PS3_MASK                ((uint32_t)0x00000003u)
#define ADC_ADCTSSEL_PS3_PWM0               ((uint32_t)0x00000000u)
#define ADC_ADCTSSEL_PS3_PWM1               ((uint32_t)0x00000001u)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCTSSEL_H_ */
