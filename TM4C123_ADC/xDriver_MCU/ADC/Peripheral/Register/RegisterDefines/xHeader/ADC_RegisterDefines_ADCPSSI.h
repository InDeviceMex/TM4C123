/**
 *
 * @file ADC_RegisterDefines_ADCPSSI.h
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
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCPSSI_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCPSSI_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 11 ADCPSSI *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCPSSI_R_SS_MASK           ((uint32_t)0x0000000Fu)
#define ADC_ADCPSSI_R_SS_BIT               ((uint32_t)0u)
#define ADC_ADCPSSI_R_SS_NA             ((uint32_t)0x00000000u)
#define ADC_ADCPSSI_R_SS_INIT           ((uint32_t)0x0000000Fu)

#define ADC_ADCPSSI_SS_MASK                 ((uint32_t)0x0000000Fu)
#define ADC_ADCPSSI_SS_NA                   ((uint32_t)0x00000000u)
#define ADC_ADCPSSI_SS_INIT                 ((uint32_t)0x0000000Fu)
/*--------*/

/*--------*/
#define ADC_ADCPSSI_R_SS0_MASK              ((uint32_t)0x00000001u)
#define ADC_ADCPSSI_R_SS0_BIT                    ((uint32_t)0u)
#define ADC_ADCPSSI_R_SS0_NA                ((uint32_t)0x00000000u)
#define ADC_ADCPSSI_R_SS0_INIT              ((uint32_t)0x00000001u)

#define ADC_ADCPSSI_SS0_MASK                ((uint32_t)0x00000001u)
#define ADC_ADCPSSI_SS0_NA                  ((uint32_t)0x00000000u)
#define ADC_ADCPSSI_SS0_INIT                ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCPSSI_R_SS1_MASK              ((uint32_t)0x00000002u)
#define ADC_ADCPSSI_R_SS1_BIT                   ((uint32_t)1u)
#define ADC_ADCPSSI_R_SS1_NA                ((uint32_t)0x00000000u)
#define ADC_ADCPSSI_R_SS1_INIT              ((uint32_t)0x00000002u)

#define ADC_ADCPSSI_SS1_MASK                ((uint32_t)0x00000001u)
#define ADC_ADCPSSI_SS1_NA                      ((uint32_t)0x00000000u)
#define ADC_ADCPSSI_SS1_INIT                ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCPSSI_R_SS2_MASK              ((uint32_t)0x00000004u)
#define ADC_ADCPSSI_R_SS2_BIT                   ((uint32_t)2u)
#define ADC_ADCPSSI_R_SS2_NA                ((uint32_t)0x00000000u)
#define ADC_ADCPSSI_R_SS2_INIT              ((uint32_t)0x00000004u)

#define ADC_ADCPSSI_SS2_MASK                ((uint32_t)0x00000001u)
#define ADC_ADCPSSI_SS2_NA                      ((uint32_t)0x00000000u)
#define ADC_ADCPSSI_SS2_INIT                    ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCPSSI_R_SS3_MASK              ((uint32_t)0x00000008u)
#define ADC_ADCPSSI_R_SS3_BIT                   ((uint32_t)3u)
#define ADC_ADCPSSI_R_SS3_NA                    ((uint32_t)0x00000000u)
#define ADC_ADCPSSI_R_SS3_INIT                  ((uint32_t)0x00000008u)

#define ADC_ADCPSSI_SS3_MASK                ((uint32_t)0x00000001u)
#define ADC_ADCPSSI_SS3_NA                      ((uint32_t)0x00000000u)
#define ADC_ADCPSSI_SS3_INIT                     ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCPSSI_R_SYNCWAIT_MASK          ((uint32_t)0x08000000u)
#define ADC_ADCPSSI_R_SYNCWAIT_BIT               ((uint32_t)27u)
#define ADC_ADCPSSI_R_SYNCWAIT_DIS              ((uint32_t)0x00000000u)
#define ADC_ADCPSSI_R_SYNCWAIT_EN               ((uint32_t)0x08000000u)

#define ADC_ADCPSSI_SYNCWAIT_MASK            ((uint32_t)0x00000001u)
#define ADC_ADCPSSI_SYNCWAIT_DIS            ((uint32_t)0x00000000u)
#define ADC_ADCPSSI_SYNCWAIT_EN              ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCPSSI_R_GSYNC_MASK          ((uint32_t)0x80000000u)
#define ADC_ADCPSSI_R_GSYNC_BIT               ((uint32_t)31u)
#define ADC_ADCPSSI_R_GSYNC_NA              ((uint32_t)0x00000000u)
#define ADC_ADCPSSI_R_GSYNC_INIT               ((uint32_t)0x80000000u)

#define ADC_ADCPSSI_GSYNC_MASK            ((uint32_t)0x00000001u)
#define ADC_ADCPSSI_GSYNC_NA            ((uint32_t)0x00000000u)
#define ADC_ADCPSSI_GSYNC_INIT              ((uint32_t)0x00000001u)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCPSSI_H_ */
