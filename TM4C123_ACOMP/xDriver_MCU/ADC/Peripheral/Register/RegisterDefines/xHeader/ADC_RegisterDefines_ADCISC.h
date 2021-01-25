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
#define ADC_ADCISC_R_IN_MASK        ((uint32_t)0x0000000FU)
#define ADC_ADCISC_R_IN_BIT             ((uint32_t)0U)
#define ADC_ADCISC_R_IN_NA              ((uint32_t)0x00000000U)
#define ADC_ADCISC_R_IN_CLEAR        ((uint32_t)0x0000000FU)

#define ADC_ADCISC_IN_MASK          ((uint32_t)0x0000000FU)
#define ADC_ADCISC_IN_NA                ((uint32_t)0x00000000U)
#define ADC_ADCISC_IN_CLEAR          ((uint32_t)0x0000000FU)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_IN0_MASK      ((uint32_t)0x00000001U)
#define ADC_ADCISC_R_IN0_BIT            ((uint32_t)0U)
#define ADC_ADCISC_R_IN0_NA             ((uint32_t)0x00000000U)
#define ADC_ADCISC_R_IN0_CLEAR        ((uint32_t)0x00000001U)

#define ADC_ADCISC_IN0_MASK         ((uint32_t)0x00000001U)
#define ADC_ADCISC_IN0_NA               ((uint32_t)0x00000000U)
#define ADC_ADCISC_IN0_CLEAR          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_IN1_MASK       ((uint32_t)0x00000002U)
#define ADC_ADCISC_R_IN1_BIT            ((uint32_t)1U)
#define ADC_ADCISC_R_IN1_NA             ((uint32_t)0x00000000U)
#define ADC_ADCISC_R_IN1_CLEAR        ((uint32_t)0x00000002U)

#define ADC_ADCISC_IN1_MASK         ((uint32_t)0x00000001U)
#define ADC_ADCISC_IN1_NA               ((uint32_t)0x00000000U)
#define ADC_ADCISC_IN1_CLEAR          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_IN2_MASK       ((uint32_t)0x00000004U)
#define ADC_ADCISC_R_IN2_BIT            ((uint32_t)2U)
#define ADC_ADCISC_R_IN2_NA             ((uint32_t)0x00000000U)
#define ADC_ADCISC_R_IN2_CLEAR        ((uint32_t)0x00000004U)

#define ADC_ADCISC_IN2_MASK             ((uint32_t)0x00000001U)
#define ADC_ADCISC_IN2_NA                   ((uint32_t)0x00000000U)
#define ADC_ADCISC_IN2_CLEAR            ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_IN3_MASK       ((uint32_t)0x00000008U)
#define ADC_ADCISC_R_IN3_BIT            ((uint32_t)3U)
#define ADC_ADCISC_R_IN3_NA             ((uint32_t)0x00000000U)
#define ADC_ADCISC_R_IN3_CLEAR        ((uint32_t)0x00000008U)

#define ADC_ADCISC_IN3_MASK             ((uint32_t)0x00000001U)
#define ADC_ADCISC_IN3_NA               ((uint32_t)0x00000000U)
#define ADC_ADCISC_IN3_CLEAR          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_DCINSS_MASK       ((uint32_t)0x000F0000U)
#define ADC_ADCISC_R_DCINSS_BIT       ((uint32_t)16U)
#define ADC_ADCISC_R_DCINSS_NA       ((uint32_t)0x00000000U)
#define ADC_ADCISC_R_DCINSS_CLEAR        ((uint32_t)0x000F0000U)

#define ADC_ADCISC_DCINSS_DCINSS        ((uint32_t)0x0000000FU)
#define ADC_ADCISC_DCINSS_NA         ((uint32_t)0x00000000U)
#define ADC_ADCISC_DCINSS_CLEAR          ((uint32_t)0x0000000FU)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_DCINSS0_MASK      ((uint32_t)0x00010000U)
#define ADC_ADCISC_R_DCINSS0_BIT       ((uint32_t)16U)
#define ADC_ADCISC_R_DCINSS0_NA       ((uint32_t)0x00000000U)
#define ADC_ADCISC_R_DCINSS0_CLEAR        ((uint32_t)0x00010000U)

#define ADC_ADCISC_DCINSS0_DCINSS        ((uint32_t)0x00000001U)
#define ADC_ADCISC_DCINSS0_NA         ((uint32_t)0x00000000U)
#define ADC_ADCISC_DCINSS0_CLEAR          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_DCINSS1_MASK       ((uint32_t)0x00020000U)
#define ADC_ADCISC_R_DCINSS1_BIT       ((uint32_t)17U)
#define ADC_ADCISC_R_DCINSS1_NA       ((uint32_t)0x00000000U)
#define ADC_ADCISC_R_DCINSS1_CLEAR        ((uint32_t)0x00020000U)

#define ADC_ADCISC_DCINSS1_DCINSS        ((uint32_t)0x00000001U)
#define ADC_ADCISC_DCINSS1_NA         ((uint32_t)0x00000000U)
#define ADC_ADCISC_DCINSS1_CLEAR          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_DCINSS2_MASK       ((uint32_t)0x00040000U)
#define ADC_ADCISC_R_DCINSS2_BIT       ((uint32_t)18U)
#define ADC_ADCISC_R_DCINSS2_NA       ((uint32_t)0x00000000U)
#define ADC_ADCISC_R_DCINSS2_CLEAR        ((uint32_t)0x00040000U)

#define ADC_ADCISC_DCINSS2_DCINSS        ((uint32_t)0x00000001U)
#define ADC_ADCISC_DCINSS2_NA         ((uint32_t)0x00000000U)
#define ADC_ADCISC_DCINSS2_CLEAR          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCISC_R_DCINSS3_MASK      ((uint32_t)0x00080000U)
#define ADC_ADCISC_R_DCINSS3_BIT       ((uint32_t)19U)
#define ADC_ADCISC_R_DCINSS3_NA       ((uint32_t)0x00000000U)
#define ADC_ADCISC_R_DCINSS3_CLEAR        ((uint32_t)0x00080000U)

#define ADC_ADCISC_DCINSS3_MASK         ((uint32_t)0x00000001U)
#define ADC_ADCISC_DCINSS3_NA         ((uint32_t)0x00000000U)
#define ADC_ADCISC_DCINSS3_CLEAR          ((uint32_t)0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCISC_H_ */
