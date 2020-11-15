/**
 *
 * @file ADC_RegisterDefines_ADCOSTAT.h
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
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCOSTAT_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCOSTAT_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 5 ADCOSTAT *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCOSTAT_R_OV_MASK           ((uint32_t)0x0000000Fu)
#define ADC_ADCOSTAT_R_OV_BIT               ((uint32_t)0u)
#define ADC_ADCOSTAT_R_OV_NOFULL   ((uint32_t)0x00000000u)
#define ADC_ADCOSTAT_R_OV_FULL         ((uint32_t)0x0000000Fu)

#define ADC_ADCOSTAT_OV_MASK                 ((uint32_t)0x0000000Fu)
#define ADC_ADCOSTAT_OV_NOFULL         ((uint32_t)0x00000000u)
#define ADC_ADCOSTAT_OV_FULL               ((uint32_t)0x0000000Fu)
/*--------*/

/*--------*/
#define ADC_ADCOSTAT_R_OV0_MASK              ((uint32_t)0x00000001u)
#define ADC_ADCOSTAT_R_OV0_BIT                    ((uint32_t)0u)
#define ADC_ADCOSTAT_R_OV0_NOFULL       ((uint32_t)0x00000000u)
#define ADC_ADCOSTAT_R_OV0_FULL            ((uint32_t)0x00000001u)

#define ADC_ADCOSTAT_OV0_MASK                ((uint32_t)0x00000001u)
#define ADC_ADCOSTAT_OV0_NOFULL         ((uint32_t)0x00000000u)
#define ADC_ADCOSTAT_OV0_FULL              ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCOSTAT_R_OV1_MASK              ((uint32_t)0x00000002u)
#define ADC_ADCOSTAT_R_OV1_BIT                   ((uint32_t)1u)
#define ADC_ADCOSTAT_R_OV1_NOFULL       ((uint32_t)0x00000000u)
#define ADC_ADCOSTAT_R_OV1_FULL            ((uint32_t)0x00000002u)

#define ADC_ADCOSTAT_OV1_MASK                ((uint32_t)0x00000001u)
#define ADC_ADCOSTAT_OV1_NOFULL         ((uint32_t)0x00000000u)
#define ADC_ADCOSTAT_OV1_FULL              ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCOSTAT_R_OV2_MASK              ((uint32_t)0x00000004u)
#define ADC_ADCOSTAT_R_OV2_BIT                   ((uint32_t)2u)
#define ADC_ADCOSTAT_R_OV2_NOFULL       ((uint32_t)0x00000000u)
#define ADC_ADCOSTAT_R_OV2_FULL            ((uint32_t)0x00000004u)

#define ADC_ADCOSTAT_OV2_MASK                ((uint32_t)0x00000001u)
#define ADC_ADCOSTAT_OV2_NOFULL         ((uint32_t)0x00000000u)
#define ADC_ADCOSTAT_OV2_FULL              ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCOSTAT_R_OV3_MASK              ((uint32_t)0x00000008u)
#define ADC_ADCOSTAT_R_OV3_BIT                   ((uint32_t)3u)
#define ADC_ADCOSTAT_R_OV3_NOFULL       ((uint32_t)0x00000000u)
#define ADC_ADCOSTAT_R_OV3_FULL            ((uint32_t)0x00000008u)

#define ADC_ADCOSTAT_OV3_MASK                ((uint32_t)0x00000001u)
#define ADC_ADCOSTAT_OV3_NOFULL         ((uint32_t)0x00000000u)
#define ADC_ADCOSTAT_OV3_FULL              ((uint32_t)0x00000001u)
/*--------*/


#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCOSTAT_H_ */
