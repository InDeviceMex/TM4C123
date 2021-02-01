/**
 *
 * @file ADC_RegisterDefines_ADCSSFSTAT.h
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
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSFSTAT_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSFSTAT_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 18 ADCSSFSTAT *********************************************
******************************************************************************************/

/*--------*/
#define ADC_ADCSSFSTAT_R_TPTR_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCSSFSTAT_R_TPTR_BIT    ((uint32_t) 0U)
#define ADC_ADCSSFSTAT_R_TPTR_POS0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSFSTAT_R_TPTR_POS1    ((uint32_t) 0x00000001U)
#define ADC_ADCSSFSTAT_R_TPTR_POS2    ((uint32_t) 0x00000002U)
#define ADC_ADCSSFSTAT_R_TPTR_POS3    ((uint32_t) 0x00000003U)
#define ADC_ADCSSFSTAT_R_TPTR_POS4    ((uint32_t) 0x00000004U)
#define ADC_ADCSSFSTAT_R_TPTR_POS5    ((uint32_t) 0x00000005U)
#define ADC_ADCSSFSTAT_R_TPTR_POS6    ((uint32_t) 0x00000006U)
#define ADC_ADCSSFSTAT_R_TPTR_POS7    ((uint32_t) 0x00000007U)

#define ADC_ADCSSFSTAT_TPTR_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCSSFSTAT_TPTR_POS0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSFSTAT_TPTR_POS1    ((uint32_t) 0x00000001U)
#define ADC_ADCSSFSTAT_TPTR_POS2    ((uint32_t) 0x00000002U)
#define ADC_ADCSSFSTAT_TPTR_POS3    ((uint32_t) 0x00000003U)
#define ADC_ADCSSFSTAT_TPTR_POS4    ((uint32_t) 0x00000004U)
#define ADC_ADCSSFSTAT_TPTR_POS5    ((uint32_t) 0x00000005U)
#define ADC_ADCSSFSTAT_TPTR_POS6    ((uint32_t) 0x00000006U)
#define ADC_ADCSSFSTAT_TPTR_POS7    ((uint32_t) 0x00000007U)
/*--------*/

/*--------*/
#define ADC_ADCSSFSTAT_R_HPTR_MASK    ((uint32_t) 0x000000F0U)
#define ADC_ADCSSFSTAT_R_HPTR_BIT    ((uint32_t) 4U)
#define ADC_ADCSSFSTAT_R_HPTR_POS0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSFSTAT_R_HPTR_POS1    ((uint32_t) 0x00000010U)
#define ADC_ADCSSFSTAT_R_HPTR_POS2    ((uint32_t) 0x00000020U)
#define ADC_ADCSSFSTAT_R_HPTR_POS3    ((uint32_t) 0x00000030U)
#define ADC_ADCSSFSTAT_R_HPTR_POS4    ((uint32_t) 0x00000040U)
#define ADC_ADCSSFSTAT_R_HPTR_POS5    ((uint32_t) 0x00000050U)
#define ADC_ADCSSFSTAT_R_HPTR_POS6    ((uint32_t) 0x00000060U)
#define ADC_ADCSSFSTAT_R_HPTR_POS7    ((uint32_t) 0x00000070U)

#define ADC_ADCSSFSTAT_HPTR_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCSSFSTAT_HPTR_POS0    ((uint32_t) 0x00000000U)
#define ADC_ADCSSFSTAT_HPTR_POS1    ((uint32_t) 0x00000001U)
#define ADC_ADCSSFSTAT_HPTR_POS2    ((uint32_t) 0x00000002U)
#define ADC_ADCSSFSTAT_HPTR_POS3    ((uint32_t) 0x00000003U)
#define ADC_ADCSSFSTAT_HPTR_POS4    ((uint32_t) 0x00000004U)
#define ADC_ADCSSFSTAT_HPTR_POS5    ((uint32_t) 0x00000005U)
#define ADC_ADCSSFSTAT_HPTR_POS6    ((uint32_t) 0x00000006U)
#define ADC_ADCSSFSTAT_HPTR_POS7    ((uint32_t) 0x00000007U)
/*--------*/

/*--------*/
#define ADC_ADCSSFSTAT_R_EMPTY_MASK    ((uint32_t) 0x00000100U)
#define ADC_ADCSSFSTAT_R_EMPTY_BIT    ((uint32_t) 8U)
#define ADC_ADCSSFSTAT_R_EMPTY_NOEMPTY    ((uint32_t) 0x00000000U)
#define ADC_ADCSSFSTAT_R_EMPTY_EMPTY    ((uint32_t) 0x00000100U)

#define ADC_ADCSSFSTAT_EMPTY_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSFSTAT_EMPTY_NOEMPTY    ((uint32_t) 0x00000000U)
#define ADC_ADCSSFSTAT_EMPTY_EMPTY    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCSSFSTAT_R_FULL_MASK    ((uint32_t) 0x00001000U)
#define ADC_ADCSSFSTAT_R_FULL_BIT    ((uint32_t) 12U)
#define ADC_ADCSSFSTAT_R_FULL_NOFULL    ((uint32_t) 0x00000000U)
#define ADC_ADCSSFSTAT_R_FULL_FULL    ((uint32_t) 0x00001000U)

#define ADC_ADCSSFSTAT_FULL_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCSSFSTAT_FULL_NOFULL    ((uint32_t) 0x00000000U)
#define ADC_ADCSSFSTAT_FULL_FULL    ((uint32_t) 0x00000001U)
/*--------*/


#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCSSFSTAT_H_ */
