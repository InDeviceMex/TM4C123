/**
 *
 * @file ADC_RegisterDefines_ADCIM.h
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
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCIM_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCIM_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 3 ADCIM *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCIM_R_MASK_MASK      ((uint32_t)0x0000000Fu)
#define ADC_ADCIM_R_MASK_BIT       ((uint32_t)0u)
#define ADC_ADCIM_R_MASK_DIS       ((uint32_t)0x00000000u)
#define ADC_ADCIM_R_MASK_EN        ((uint32_t)0x0000000Fu)

#define ADC_ADCIM_MASK_MASK        ((uint32_t)0x0000000Fu)
#define ADC_ADCIM_MASK_DIS         ((uint32_t)0x00000000u)
#define ADC_ADCIM_MASK_EN          ((uint32_t)0x0000000Fu)
/*--------*/

/*--------*/
#define ADC_ADCIM_R_MASK0_MASK      ((uint32_t)0x00000001u)
#define ADC_ADCIM_R_MASK0_BIT       ((uint32_t)0u)
#define ADC_ADCIM_R_MASK0_DIS       ((uint32_t)0x00000000u)
#define ADC_ADCIM_R_MASK0_EN        ((uint32_t)0x00000001u)

#define ADC_ADCIM_MASK0_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCIM_MASK0_DIS         ((uint32_t)0x00000000u)
#define ADC_ADCIM_MASK0_EN          ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCIM_R_MASK1_MASK      ((uint32_t)0x00000002u)
#define ADC_ADCIM_R_MASK1_BIT       ((uint32_t)1u)
#define ADC_ADCIM_R_MASK1_DIS       ((uint32_t)0x00000000u)
#define ADC_ADCIM_R_MASK1_EN        ((uint32_t)0x00000002u)

#define ADC_ADCIM_MASK1_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCIM_MASK1_DIS         ((uint32_t)0x00000000u)
#define ADC_ADCIM_MASK1_EN          ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCIM_R_MASK2_MASK      ((uint32_t)0x00000004u)
#define ADC_ADCIM_R_MASK2_BIT       ((uint32_t)2u)
#define ADC_ADCIM_R_MASK2_DIS       ((uint32_t)0x00000000u)
#define ADC_ADCIM_R_MASK2_EN        ((uint32_t)0x00000004u)

#define ADC_ADCIM_MASK2_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCIM_MASK2_DIS         ((uint32_t)0x00000000u)
#define ADC_ADCIM_MASK2_EN          ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCIM_R_MASK3_MASK      ((uint32_t)0x00000008u)
#define ADC_ADCIM_R_MASK3_BIT       ((uint32_t)3u)
#define ADC_ADCIM_R_MASK3_DIS       ((uint32_t)0x00000000u)
#define ADC_ADCIM_R_MASK3_EN        ((uint32_t)0x00000008u)

#define ADC_ADCIM_MASK3_MASK        ((uint32_t)0x00000001u)
#define ADC_ADCIM_MASK3_DIS         ((uint32_t)0x00000000u)
#define ADC_ADCIM_MASK3_EN          ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCIM_R_DCONSS_MASK       ((uint32_t)0x000F0000u)
#define ADC_ADCIM_R_DCONSS_BIT       ((uint32_t)16u)
#define ADC_ADCIM_R_DCONSS_DIS       ((uint32_t)0x00000000u)
#define ADC_ADCIM_R_DCONSS_EN        ((uint32_t)0x000F0000u)

#define ADC_ADCIM_DCONSS_DCONSS        ((uint32_t)0x0000000Fu)
#define ADC_ADCIM_DCONSS_DIS         ((uint32_t)0x00000000u)
#define ADC_ADCIM_DCONSS_EN          ((uint32_t)0x0000000Fu)
/*--------*/

/*--------*/
#define ADC_ADCIM_R_DCONSS0_MASK      ((uint32_t)0x00010000u)
#define ADC_ADCIM_R_DCONSS0_BIT       ((uint32_t)16u)
#define ADC_ADCIM_R_DCONSS0_DIS       ((uint32_t)0x00000000u)
#define ADC_ADCIM_R_DCONSS0_EN        ((uint32_t)0x00010000u)

#define ADC_ADCIM_DCONSS0_DCONSS        ((uint32_t)0x00000001u)
#define ADC_ADCIM_DCONSS0_DIS         ((uint32_t)0x00000000u)
#define ADC_ADCIM_DCONSS0_EN          ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCIM_R_DCONSS1_MASK       ((uint32_t)0x00020000u)
#define ADC_ADCIM_R_DCONSS1_BIT       ((uint32_t)17u)
#define ADC_ADCIM_R_DCONSS1_DIS       ((uint32_t)0x00000000u)
#define ADC_ADCIM_R_DCONSS1_EN        ((uint32_t)0x00020000u)

#define ADC_ADCIM_DCONSS1_DCONSS        ((uint32_t)0x00000001u)
#define ADC_ADCIM_DCONSS1_DIS         ((uint32_t)0x00000000u)
#define ADC_ADCIM_DCONSS1_EN          ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCIM_R_DCONSS2_MASK       ((uint32_t)0x00040000u)
#define ADC_ADCIM_R_DCONSS2_BIT       ((uint32_t)18u)
#define ADC_ADCIM_R_DCONSS2_DIS       ((uint32_t)0x00000000u)
#define ADC_ADCIM_R_DCONSS2_EN        ((uint32_t)0x00040000u)

#define ADC_ADCIM_DCONSS2_DCONSS        ((uint32_t)0x00000001u)
#define ADC_ADCIM_DCONSS2_DIS         ((uint32_t)0x00000000u)
#define ADC_ADCIM_DCONSS2_EN          ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define ADC_ADCIM_R_DCONSS3_MASK      ((uint32_t)0x00080000u)
#define ADC_ADCIM_R_DCONSS3_BIT       ((uint32_t)19u)
#define ADC_ADCIM_R_DCONSS3_DIS       ((uint32_t)0x00000000u)
#define ADC_ADCIM_R_DCONSS3_EN        ((uint32_t)0x00080000u)

#define ADC_ADCIM_DCONSS3_MASK         ((uint32_t)0x00000001u)
#define ADC_ADCIM_DCONSS3_DIS         ((uint32_t)0x00000000u)
#define ADC_ADCIM_DCONSS3_EN          ((uint32_t)0x00000001u)
/*--------*/


#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCIM_H_ */
