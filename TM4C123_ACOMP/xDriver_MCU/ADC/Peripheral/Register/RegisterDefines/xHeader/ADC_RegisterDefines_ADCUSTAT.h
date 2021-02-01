/**
 *
 * @file ADC_RegisterDefines_ADCUSTAT.h
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
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCUSTAT_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCUSTAT_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 7 ADCUSTAT *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCUSTAT_R_UV_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCUSTAT_R_UV_BIT    ((uint32_t) 0U)
#define ADC_ADCUSTAT_R_UV_NOEMPTY    ((uint32_t) 0x00000000U)
#define ADC_ADCUSTAT_R_UV_EMPTY    ((uint32_t) 0x0000000FU)

#define ADC_ADCUSTAT_UV_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCUSTAT_UV_NOEMPTY    ((uint32_t) 0x00000000U)
#define ADC_ADCUSTAT_UV_EMPTY    ((uint32_t) 0x0000000FU)
/*--------*/

/*--------*/
#define ADC_ADCUSTAT_R_UV0_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCUSTAT_R_UV0_BIT    ((uint32_t) 0U)
#define ADC_ADCUSTAT_R_UV0_NOEMPTY    ((uint32_t) 0x00000000U)
#define ADC_ADCUSTAT_R_UV0_EMPTY    ((uint32_t) 0x00000001U)

#define ADC_ADCUSTAT_UV0_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCUSTAT_UV0_NOEMPTY    ((uint32_t) 0x00000000U)
#define ADC_ADCUSTAT_UV0_EMPTY    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCUSTAT_R_UV1_MASK    ((uint32_t) 0x00000002U)
#define ADC_ADCUSTAT_R_UV1_BIT    ((uint32_t) 1U)
#define ADC_ADCUSTAT_R_UV1_NOEMPTY    ((uint32_t) 0x00000000U)
#define ADC_ADCUSTAT_R_UV1_EMPTY    ((uint32_t) 0x00000002U)

#define ADC_ADCUSTAT_UV1_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCUSTAT_UV1_NOEMPTY    ((uint32_t) 0x00000000U)
#define ADC_ADCUSTAT_UV1_EMPTY    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCUSTAT_R_UV2_MASK    ((uint32_t) 0x00000004U)
#define ADC_ADCUSTAT_R_UV2_BIT    ((uint32_t) 2U)
#define ADC_ADCUSTAT_R_UV2_NOEMPTY    ((uint32_t) 0x00000000U)
#define ADC_ADCUSTAT_R_UV2_EMPTY    ((uint32_t) 0x00000004U)

#define ADC_ADCUSTAT_UV2_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCUSTAT_UV2_NOEMPTY    ((uint32_t) 0x00000000U)
#define ADC_ADCUSTAT_UV2_EMPTY    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCUSTAT_R_UV3_MASK    ((uint32_t) 0x00000008U)
#define ADC_ADCUSTAT_R_UV3_BIT    ((uint32_t) 3U)
#define ADC_ADCUSTAT_R_UV3_NOEMPTY    ((uint32_t) 0x00000000U)
#define ADC_ADCUSTAT_R_UV3_EMPTY    ((uint32_t) 0x00000008U)

#define ADC_ADCUSTAT_UV3_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCUSTAT_UV3_NOEMPTY    ((uint32_t) 0x00000000U)
#define ADC_ADCUSTAT_UV3_EMPTY    ((uint32_t) 0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCUSTAT_H_ */
