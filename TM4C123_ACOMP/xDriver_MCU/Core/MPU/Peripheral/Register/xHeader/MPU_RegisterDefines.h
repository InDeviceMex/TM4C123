/**
 *
 * @file MPU_RegisterDefines.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERDEFINES_H_

#include <xUtils/Standard/Standard.h>

/**********************************************************************************************
************************************** 1 TYPER ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_TYPER_R_SEPARATE_MASK       ((uint32_t)0x00000001U)
#define MPU_TYPER_R_SEPARATE_BIT        (0U)
#define MPU_TYPER_R_SEPARATE_UNIFIED    ((uint32_t)0x00000000U)
#define MPU_TYPER_R_SEPARATE_SEPARATE   ((uint32_t)0x00000001U)

#define MPU_TYPER_SEPARATE_MASK         ((uint32_t)0x00000001U)
#define MPU_TYPER_SEPARATE_UNIFIED      ((uint32_t)0x00000000U)
#define MPU_TYPER_SEPARATE_SEPARATE     ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_TYPER_R_DREGION_MASK        ((uint32_t)0x0000FF00U)
#define MPU_TYPER_R_DREGION_BIT         (8U)
#define MPU_TYPER_R_DREGION_D8          ((uint32_t)0x00000800U)
#define MPU_TYPER_R_DREGION_D16         ((uint32_t)0x00000F00U)

#define MPU_TYPER_DREGION_MASK          ((uint32_t)0x000000FFU)
#define MPU_TYPER_DREGION_D8            ((uint32_t)0x00000008U)
#define MPU_TYPER_DREGION_D16           ((uint32_t)0x0000000FU)
/*--------*/

/*--------*/
#define MPU_TYPER_R_IREGION_MASK      ((uint32_t)0x00FF0000U)
#define MPU_TYPER_R_IREGION_BIT       (16U)
#define MPU_TYPER_R_IREGION_I0        ((uint32_t)0x00000000U)

#define MPU_TYPER_IREGION_MASK        ((uint32_t)0x000000FFU)
#define MPU_TYPER_IREGION_I0          ((uint32_t)0x00000000U)
/*--------*/

/**********************************************************************************************
************************************** 2 CTRL ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_CTRL_R_ENABLE_MASK          ((uint32_t)0x00000001U)
#define MPU_CTRL_R_ENABLE_BIT           (0U)
#define MPU_CTRL_R_ENABLE_DIS           ((uint32_t)0x00000000U)
#define MPU_CTRL_R_ENABLE_EN            ((uint32_t)0x00000001U)

#define MPU_CTRL_ENABLE_MASK            ((uint32_t)0x00000001U)
#define MPU_CTRL_ENABLE_DIS             ((uint32_t)0x00000000U)
#define MPU_CTRL_ENABLE_EN              ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_CTRL_R_HFNMIENA_MASK        ((uint32_t)0x00000002U)
#define MPU_CTRL_R_HFNMIENA_BIT         (1U)
#define MPU_CTRL_R_HFNMIENA_DIS         ((uint32_t)0x00000000U)
#define MPU_CTRL_R_HFNMIENA_EN          ((uint32_t)0x00000002U)

#define MPU_CTRL_HFNMIENA_MASK          ((uint32_t)0x00000001U)
#define MPU_CTRL_HFNMIENA_DIS           ((uint32_t)0x00000000U)
#define MPU_CTRL_HFNMIENA_EN            ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_CTRL_R_PRIVDEFENA_MASK      ((uint32_t)0x00000004U)
#define MPU_CTRL_R_PRIVDEFENA_BIT       (2U)
#define MPU_CTRL_R_PRIVDEFENA_DIS       ((uint32_t)0x00000000U)
#define MPU_CTRL_R_PRIVDEFENA_EN        ((uint32_t)0x00000004U)

#define MPU_CTRL_PRIVDEFENA_MASK        ((uint32_t)0x00000001U)
#define MPU_CTRL_PRIVDEFENA_DIS         ((uint32_t)0x00000000U)
#define MPU_CTRL_PRIVDEFENA_EN          ((uint32_t)0x00000001U)
/*--------*/

/**********************************************************************************************
**************************************3 RNR ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RNR_R_REGION_MASK      ((uint32_t)0x0000000FU)
#define MPU_RNR_R_REGION_BIT       (0U)
#define MPU_RNR_R_REGION_REG0      ((uint32_t)0x00000000U)
#define MPU_RNR_R_REGION_REG1      ((uint32_t)0x00000001U)
#define MPU_RNR_R_REGION_REG2      ((uint32_t)0x00000002U)
#define MPU_RNR_R_REGION_REG3      ((uint32_t)0x00000003U)
#define MPU_RNR_R_REGION_REG4      ((uint32_t)0x00000004U)
#define MPU_RNR_R_REGION_REG5      ((uint32_t)0x00000005U)
#define MPU_RNR_R_REGION_REG6      ((uint32_t)0x00000006U)
#define MPU_RNR_R_REGION_REG7      ((uint32_t)0x00000007U)
#define MPU_RNR_R_REGION_REG8      ((uint32_t)0x00000008U)
#define MPU_RNR_R_REGION_REG9      ((uint32_t)0x00000009U)
#define MPU_RNR_R_REGION_REG10     ((uint32_t)0x0000000AU)
#define MPU_RNR_R_REGION_REG11     ((uint32_t)0x0000000BU)
#define MPU_RNR_R_REGION_REG12     ((uint32_t)0x0000000CU)
#define MPU_RNR_R_REGION_REG13     ((uint32_t)0x0000000DU)
#define MPU_RNR_R_REGION_REG14     ((uint32_t)0x0000000EU)
#define MPU_RNR_R_REGION_REG15     ((uint32_t)0x0000000FU)

#define MPU_RNR_REGION_MASK        ((uint32_t)0x0000000FU)
#define MPU_RNR_REGION_REG0        ((uint32_t)0x00000000U)
#define MPU_RNR_REGION_REG1        ((uint32_t)0x00000001U)
#define MPU_RNR_REGION_REG2        ((uint32_t)0x00000002U)
#define MPU_RNR_REGION_REG3        ((uint32_t)0x00000003U)
#define MPU_RNR_REGION_REG4        ((uint32_t)0x00000004U)
#define MPU_RNR_REGION_REG5        ((uint32_t)0x00000005U)
#define MPU_RNR_REGION_REG6        ((uint32_t)0x00000006U)
#define MPU_RNR_REGION_REG7        ((uint32_t)0x00000007U)
#define MPU_RNR_REGION_REG8        ((uint32_t)0x00000008U)
#define MPU_RNR_REGION_REG9        ((uint32_t)0x00000009U)
#define MPU_RNR_REGION_REG10       ((uint32_t)0x0000000AU)
#define MPU_RNR_REGION_REG11       ((uint32_t)0x0000000BU)
#define MPU_RNR_REGION_REG12       ((uint32_t)0x0000000CU)
#define MPU_RNR_REGION_REG13       ((uint32_t)0x0000000DU)
#define MPU_RNR_REGION_REG14       ((uint32_t)0x0000000EU)
#define MPU_RNR_REGION_REG15       ((uint32_t)0x0000000FU)
/*--------*/

/**********************************************************************************************
**************************************4 RBAR ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RBAR_R_REGION_MASK      ((uint32_t)0x0000000FU)
#define MPU_RBAR_R_REGION_BIT       (0U)
#define MPU_RBAR_R_REGION_REG0      ((uint32_t)0x00000000U)
#define MPU_RBAR_R_REGION_REG1      ((uint32_t)0x00000001U)
#define MPU_RBAR_R_REGION_REG2      ((uint32_t)0x00000002U)
#define MPU_RBAR_R_REGION_REG3      ((uint32_t)0x00000003U)
#define MPU_RBAR_R_REGION_REG4      ((uint32_t)0x00000004U)
#define MPU_RBAR_R_REGION_REG5      ((uint32_t)0x00000005U)
#define MPU_RBAR_R_REGION_REG6      ((uint32_t)0x00000006U)
#define MPU_RBAR_R_REGION_REG7      ((uint32_t)0x00000007U)
#define MPU_RBAR_R_REGION_REG8      ((uint32_t)0x00000008U)
#define MPU_RBAR_R_REGION_REG9      ((uint32_t)0x00000009U)
#define MPU_RBAR_R_REGION_REG10     ((uint32_t)0x0000000AU)
#define MPU_RBAR_R_REGION_REG11     ((uint32_t)0x0000000BU)
#define MPU_RBAR_R_REGION_REG12     ((uint32_t)0x0000000CU)
#define MPU_RBAR_R_REGION_REG13     ((uint32_t)0x0000000DU)
#define MPU_RBAR_R_REGION_REG14     ((uint32_t)0x0000000EU)
#define MPU_RBAR_R_REGION_REG15     ((uint32_t)0x0000000FU)

#define MPU_RBAR_REGION_MASK        ((uint32_t)0x0000000FU)
#define MPU_RBAR_REGION_REG0        ((uint32_t)0x00000000U)
#define MPU_RBAR_REGION_REG1        ((uint32_t)0x00000001U)
#define MPU_RBAR_REGION_REG2        ((uint32_t)0x00000002U)
#define MPU_RBAR_REGION_REG3        ((uint32_t)0x00000003U)
#define MPU_RBAR_REGION_REG4        ((uint32_t)0x00000004U)
#define MPU_RBAR_REGION_REG5        ((uint32_t)0x00000005U)
#define MPU_RBAR_REGION_REG6        ((uint32_t)0x00000006U)
#define MPU_RBAR_REGION_REG7        ((uint32_t)0x00000007U)
#define MPU_RBAR_REGION_REG8        ((uint32_t)0x00000008U)
#define MPU_RBAR_REGION_REG9        ((uint32_t)0x00000009U)
#define MPU_RBAR_REGION_REG10       ((uint32_t)0x0000000AU)
#define MPU_RBAR_REGION_REG11       ((uint32_t)0x0000000BU)
#define MPU_RBAR_REGION_REG12       ((uint32_t)0x0000000CU)
#define MPU_RBAR_REGION_REG13       ((uint32_t)0x0000000DU)
#define MPU_RBAR_REGION_REG14       ((uint32_t)0x0000000EU)
#define MPU_RBAR_REGION_REG15       ((uint32_t)0x0000000FU)
/*--------*/

/*--------*/
#define MPU_RBAR_R_VALID_MASK      ((uint32_t)0x00000010U)
#define MPU_RBAR_R_VALID_BIT       (4U)
#define MPU_RBAR_R_VALID_DIS       ((uint32_t)0x00000000U)
#define MPU_RBAR_R_VALID_EN        ((uint32_t)0x00000010U)

#define MPU_RBAR_VALID_MASK        ((uint32_t)0x00000001U)
#define MPU_RBAR_VALID_DIS         ((uint32_t)0x00000000U)
#define MPU_RBAR_VALID_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RBAR_R_ADDR_MASK      ((uint32_t)0xFFFFFFE0U)
#define MPU_RBAR_R_ADDR_BIT       (5U)

#define MPU_RBAR_ADDR_MASK        ((uint32_t)0x01FFFFFFU)
/*--------*/

/**********************************************************************************************
**************************************5 RASR ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RASR_R_ENABLE_MASK      ((uint32_t)0x00000001U)
#define MPU_RASR_R_ENABLE_BIT       (0U)
#define MPU_RASR_R_ENABLE_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR_R_ENABLE_EN        ((uint32_t)0x00000001U)

#define MPU_RASR_ENABLE_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR_ENABLE_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR_ENABLE_EN          ((uint32_t)0x00000001U)
/*--------*/


/*--------*/
#define MPU_RASR_R_SIZE_MASK      ((uint32_t)0x0000003EU)
#define MPU_RASR_R_SIZE_BIT       (1U)
#define MPU_RASR_R_SIZE_32B       ((uint32_t)0x00000008U)
#define MPU_RASR_R_SIZE_1KB       ((uint32_t)0x00000012U)
#define MPU_RASR_R_SIZE_1MB       ((uint32_t)0x00000026U)
#define MPU_RASR_R_SIZE_1GB       ((uint32_t)0x0000003AU)
#define MPU_RASR_R_SIZE_4GB       ((uint32_t)0x0000003EU)

#define MPU_RASR_SIZE_MASK        ((uint32_t)0x0000001FU)
#define MPU_RASR_SIZE_32B         ((uint32_t)0x00000004U)
#define MPU_RASR_SIZE_1KB         ((uint32_t)0x00000009U)
#define MPU_RASR_SIZE_1MB         ((uint32_t)0x00000013U)
#define MPU_RASR_SIZE_1GB         ((uint32_t)0x0000001DU)
#define MPU_RASR_SIZE_4GB         ((uint32_t)0x0000001FU)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD0_MASK      ((uint32_t)0x00000100U)
#define MPU_RASR_R_SRD0_BIT       (8U)
#define MPU_RASR_R_SRD0_EN        ((uint32_t)0x00000000U)
#define MPU_RASR_R_SRD0_DIS       ((uint32_t)0x00000100U)

#define MPU_RASR_SRD0_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR_SRD0_EN          ((uint32_t)0x00000000U)
#define MPU_RASR_SRD0_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD1_MASK      ((uint32_t)0x00000200U)
#define MPU_RASR_R_SRD1_BIT       (9U)
#define MPU_RASR_R_SRD1_EN        ((uint32_t)0x00000000U)
#define MPU_RASR_R_SRD1_DIS       ((uint32_t)0x00000200U)

#define MPU_RASR_SRD1_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR_SRD1_EN          ((uint32_t)0x00000000U)
#define MPU_RASR_SRD1_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD2_MASK      ((uint32_t)0x00000400U)
#define MPU_RASR_R_SRD2_BIT       (10U)
#define MPU_RASR_R_SRD2_EN        ((uint32_t)0x00000000U)
#define MPU_RASR_R_SRD2_DIS       ((uint32_t)0x00000400U)

#define MPU_RASR_SRD2_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR_SRD2_EN          ((uint32_t)0x00000000U)
#define MPU_RASR_SRD2_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD3_MASK      ((uint32_t)0x00000800U)
#define MPU_RASR_R_SRD3_BIT       (11U)
#define MPU_RASR_R_SRD3_EN        ((uint32_t)0x00000000U)
#define MPU_RASR_R_SRD3_DIS       ((uint32_t)0x00000800U)

#define MPU_RASR_SRD3_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR_SRD3_EN          ((uint32_t)0x00000000U)
#define MPU_RASR_SRD3_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD4_MASK      ((uint32_t)0x00001000U)
#define MPU_RASR_R_SRD4_BIT       (12U)
#define MPU_RASR_R_SRD4_EN        ((uint32_t)0x00000000U)
#define MPU_RASR_R_SRD4_DIS       ((uint32_t)0x00001000U)

#define MPU_RASR_SRD4_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR_SRD4_EN          ((uint32_t)0x00000000U)
#define MPU_RASR_SRD4_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD5_MASK      ((uint32_t)0x00002000U)
#define MPU_RASR_R_SRD5_BIT       (13U)
#define MPU_RASR_R_SRD5_EN        ((uint32_t)0x00000000U)
#define MPU_RASR_R_SRD5_DIS       ((uint32_t)0x00002000U)

#define MPU_RASR_SRD5_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR_SRD5_EN          ((uint32_t)0x00000000U)
#define MPU_RASR_SRD5_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD6_MASK      ((uint32_t)0x00004000U)
#define MPU_RASR_R_SRD6_BIT       (14U)
#define MPU_RASR_R_SRD6_EN        ((uint32_t)0x00000000U)
#define MPU_RASR_R_SRD6_DIS       ((uint32_t)0x00004000U)

#define MPU_RASR_SRD6_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR_SRD6_EN          ((uint32_t)0x00000000U)
#define MPU_RASR_SRD6_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR_R_SRD7_MASK      ((uint32_t)0x00008000U)
#define MPU_RASR_R_SRD7_BIT       (15U)
#define MPU_RASR_R_SRD7_EN        ((uint32_t)0x00000000U)
#define MPU_RASR_R_SRD7_DIS       ((uint32_t)0x00008000U)

#define MPU_RASR_SRD7_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR_SRD7_EN          ((uint32_t)0x00000000U)
#define MPU_RASR_SRD7_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR_R_B_MASK      ((uint32_t)0x00010000U)
#define MPU_RASR_R_B_BIT       (16U)
#define MPU_RASR_R_B_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR_R_B_EN        ((uint32_t)0x00010000U)

#define MPU_RASR_B_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR_B_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR_B_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR_R_C_MASK      ((uint32_t)0x00020000U)
#define MPU_RASR_R_C_BIT       (17U)
#define MPU_RASR_R_C_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR_R_C_EN        ((uint32_t)0x00020000U)

#define MPU_RASR_C_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR_C_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR_C_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR_R_S_MASK      ((uint32_t)0x00040000U)
#define MPU_RASR_R_S_BIT       (18U)
#define MPU_RASR_R_S_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR_R_S_EN        ((uint32_t)0x00040000U)

#define MPU_RASR_S_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR_S_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR_S_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR_R_TEX_MASK      ((uint32_t)0x00380000U)
#define MPU_RASR_R_TEX_BIT       (19U)
#define MPU_RASR_R_TEX_NC        ((uint32_t)0x00000000U)
#define MPU_RASR_R_TEX_WB_WRA    ((uint32_t)0x00080000U)
#define MPU_RASR_R_TEX_WT_NWA    ((uint32_t)0x00100000U)
#define MPU_RASR_R_TEX_WB_NWA    ((uint32_t)0x00180000U)

#define MPU_RASR_TEX_MASK        ((uint32_t)0x00000007U)
#define MPU_RASR_TEX_NC          ((uint32_t)0x00000000U)
#define MPU_RASR_TEX_WB_WRA      ((uint32_t)0x00000001U)
#define MPU_RASR_TEX_WT_NWA      ((uint32_t)0x00000002U)
#define MPU_RASR_TEX_WB_NWA      ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define MPU_RASR_R_AP_MASK      ((uint32_t)0x07000000U)
#define MPU_RASR_R_AP_BIT       (24U)
#define MPU_RASR_R_AP_NANA      ((uint32_t)0x00000000U)
#define MPU_RASR_R_AP_RWNA      ((uint32_t)0x01000000U)
#define MPU_RASR_R_AP_RWRO      ((uint32_t)0x02000000U)
#define MPU_RASR_R_AP_RWRW      ((uint32_t)0x03000000U)
#define MPU_RASR_R_AP_RONA      ((uint32_t)0x05000000U)
#define MPU_RASR_R_AP_RORO      ((uint32_t)0x06000000U)

#define MPU_RASR_AP_MASK      ((uint32_t)0x00000007U)
#define MPU_RASR_AP_NANA      ((uint32_t)0x00000000U)
#define MPU_RASR_AP_RWNA      ((uint32_t)0x00000001U)
#define MPU_RASR_AP_RWRO      ((uint32_t)0x00000002U)
#define MPU_RASR_AP_RWRW      ((uint32_t)0x00000003U)
#define MPU_RASR_AP_RONA      ((uint32_t)0x00000005U)
#define MPU_RASR_AP_RORO      ((uint32_t)0x00000006U)
/*--------*/

/*--------*/
#define MPU_RASR_R_XN_MASK      ((uint32_t)0x10000000U)
#define MPU_RASR_R_XN_BIT       (28U)
#define MPU_RASR_R_XN_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR_R_XN_EN        ((uint32_t)0x10000000U)

#define MPU_RASR_XN_MASK       ((uint32_t)0x00000001U)
#define MPU_RASR_XN_DIS        ((uint32_t)0x00000000U)
#define MPU_RASR_XN_EN         ((uint32_t)0x00000001U)
/*--------*/

/**********************************************************************************************
**************************************6 RBAR1 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RBAR1_R_REGION_MASK      ((uint32_t)0x0000000FU)
#define MPU_RBAR1_R_REGION_BIT       (0U)
#define MPU_RBAR1_R_REGION_REG0      ((uint32_t)0x00000000U)
#define MPU_RBAR1_R_REGION_REG1      ((uint32_t)0x00000001U)
#define MPU_RBAR1_R_REGION_REG2      ((uint32_t)0x00000002U)
#define MPU_RBAR1_R_REGION_REG3      ((uint32_t)0x00000003U)
#define MPU_RBAR1_R_REGION_REG4      ((uint32_t)0x00000004U)
#define MPU_RBAR1_R_REGION_REG5      ((uint32_t)0x00000005U)
#define MPU_RBAR1_R_REGION_REG6      ((uint32_t)0x00000006U)
#define MPU_RBAR1_R_REGION_REG7      ((uint32_t)0x00000007U)
#define MPU_RBAR1_R_REGION_REG8      ((uint32_t)0x00000008U)
#define MPU_RBAR1_R_REGION_REG9      ((uint32_t)0x00000009U)
#define MPU_RBAR1_R_REGION_REG10     ((uint32_t)0x0000000AU)
#define MPU_RBAR1_R_REGION_REG11     ((uint32_t)0x0000000BU)
#define MPU_RBAR1_R_REGION_REG12     ((uint32_t)0x0000000CU)
#define MPU_RBAR1_R_REGION_REG13     ((uint32_t)0x0000000DU)
#define MPU_RBAR1_R_REGION_REG14     ((uint32_t)0x0000000EU)
#define MPU_RBAR1_R_REGION_REG15     ((uint32_t)0x0000000FU)

#define MPU_RBAR1_REGION_MASK        ((uint32_t)0x0000000FU)
#define MPU_RBAR1_REGION_REG0        ((uint32_t)0x00000000U)
#define MPU_RBAR1_REGION_REG1        ((uint32_t)0x00000001U)
#define MPU_RBAR1_REGION_REG2        ((uint32_t)0x00000002U)
#define MPU_RBAR1_REGION_REG3        ((uint32_t)0x00000003U)
#define MPU_RBAR1_REGION_REG4        ((uint32_t)0x00000004U)
#define MPU_RBAR1_REGION_REG5        ((uint32_t)0x00000005U)
#define MPU_RBAR1_REGION_REG6        ((uint32_t)0x00000006U)
#define MPU_RBAR1_REGION_REG7        ((uint32_t)0x00000007U)
#define MPU_RBAR1_REGION_REG8        ((uint32_t)0x00000008U)
#define MPU_RBAR1_REGION_REG9        ((uint32_t)0x00000009U)
#define MPU_RBAR1_REGION_REG10       ((uint32_t)0x0000000AU)
#define MPU_RBAR1_REGION_REG11       ((uint32_t)0x0000000BU)
#define MPU_RBAR1_REGION_REG12       ((uint32_t)0x0000000CU)
#define MPU_RBAR1_REGION_REG13       ((uint32_t)0x0000000DU)
#define MPU_RBAR1_REGION_REG14       ((uint32_t)0x0000000EU)
#define MPU_RBAR1_REGION_REG15       ((uint32_t)0x0000000FU)
/*--------*/

/*--------*/
#define MPU_RBAR1_R_VALID_MASK      ((uint32_t)0x00000010U)
#define MPU_RBAR1_R_VALID_BIT       (4U)
#define MPU_RBAR1_R_VALID_DIS       ((uint32_t)0x00000000U)
#define MPU_RBAR1_R_VALID_EN        ((uint32_t)0x00000010U)

#define MPU_RBAR1_VALID_MASK        ((uint32_t)0x00000001U)
#define MPU_RBAR1_VALID_DIS         ((uint32_t)0x00000000U)
#define MPU_RBAR1_VALID_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RBAR1_R_ADDR_MASK      ((uint32_t)0xFFFFFFE0U)
#define MPU_RBAR1_R_ADDR_BIT       (5U)

#define MPU_RBAR1_ADDR_MASK        ((uint32_t)0x01FFFFFFU)
/*--------*/

/**********************************************************************************************
**************************************7 RASR1 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RASR1_R_ENABLE_MASK      ((uint32_t)0x00000001U)
#define MPU_RASR1_R_ENABLE_BIT       (0U)
#define MPU_RASR1_R_ENABLE_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR1_R_ENABLE_EN        ((uint32_t)0x00000001U)

#define MPU_RASR1_ENABLE_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR1_ENABLE_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR1_ENABLE_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SIZE_MASK      ((uint32_t)0x0000003EU)
#define MPU_RASR1_R_SIZE_BIT       (1U)
#define MPU_RASR1_R_SIZE_32B       ((uint32_t)0x00000008U)
#define MPU_RASR1_R_SIZE_1KB       ((uint32_t)0x00000012U)
#define MPU_RASR1_R_SIZE_1MB       ((uint32_t)0x00000026U)
#define MPU_RASR1_R_SIZE_1GB       ((uint32_t)0x0000003AU)
#define MPU_RASR1_R_SIZE_4GB       ((uint32_t)0x0000003EU)

#define MPU_RASR1_SIZE_MASK        ((uint32_t)0x0000001FU)
#define MPU_RASR1_SIZE_32B         ((uint32_t)0x00000004U)
#define MPU_RASR1_SIZE_1KB         ((uint32_t)0x00000009U)
#define MPU_RASR1_SIZE_1MB         ((uint32_t)0x00000013U)
#define MPU_RASR1_SIZE_1GB         ((uint32_t)0x0000001DU)
#define MPU_RASR1_SIZE_4GB         ((uint32_t)0x0000001FU)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD0_MASK      ((uint32_t)0x00000100U)
#define MPU_RASR1_R_SRD0_BIT       (8U)
#define MPU_RASR1_R_SRD0_EN           ((uint32_t)0x00000000U)
#define MPU_RASR1_R_SRD0_DIS       ((uint32_t)0x00000100U)

#define MPU_RASR1_SRD0_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR1_SRD0_EN          ((uint32_t)0x00000000U)
#define MPU_RASR1_SRD0_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD1_MASK      ((uint32_t)0x00000200U)
#define MPU_RASR1_R_SRD1_BIT       (9U)
#define MPU_RASR1_R_SRD1_EN           ((uint32_t)0x00000000U)
#define MPU_RASR1_R_SRD1_DIS       ((uint32_t)0x00000200U)

#define MPU_RASR1_SRD1_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR1_SRD1_EN          ((uint32_t)0x00000000U)
#define MPU_RASR1_SRD1_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD2_MASK      ((uint32_t)0x00000400U)
#define MPU_RASR1_R_SRD2_BIT       (10U)
#define MPU_RASR1_R_SRD2_EN           ((uint32_t)0x00000000U)
#define MPU_RASR1_R_SRD2_DIS       ((uint32_t)0x00000400U)

#define MPU_RASR1_SRD2_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR1_SRD2_EN          ((uint32_t)0x00000000U)
#define MPU_RASR1_SRD2_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD3_MASK      ((uint32_t)0x00000800U)
#define MPU_RASR1_R_SRD3_BIT       (11U)
#define MPU_RASR1_R_SRD3_EN           ((uint32_t)0x00000000U)
#define MPU_RASR1_R_SRD3_DIS       ((uint32_t)0x00000800U)

#define MPU_RASR1_SRD3_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR1_SRD3_EN          ((uint32_t)0x00000000U)
#define MPU_RASR1_SRD3_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD4_MASK      ((uint32_t)0x00001000U)
#define MPU_RASR1_R_SRD4_BIT       (12U)
#define MPU_RASR1_R_SRD4_EN           ((uint32_t)0x00000000U)
#define MPU_RASR1_R_SRD4_DIS       ((uint32_t)0x00001000U)

#define MPU_RASR1_SRD4_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR1_SRD4_EN          ((uint32_t)0x00000000U)
#define MPU_RASR1_SRD4_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD5_MASK      ((uint32_t)0x00002000U)
#define MPU_RASR1_R_SRD5_BIT       (13U)
#define MPU_RASR1_R_SRD5_EN           ((uint32_t)0x00000000U)
#define MPU_RASR1_R_SRD5_DIS       ((uint32_t)0x00002000U)

#define MPU_RASR1_SRD5_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR1_SRD5_EN          ((uint32_t)0x00000000U)
#define MPU_RASR1_SRD5_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD6_MASK      ((uint32_t)0x00004000U)
#define MPU_RASR1_R_SRD6_BIT       (14U)
#define MPU_RASR1_R_SRD6_EN           ((uint32_t)0x00000000U)
#define MPU_RASR1_R_SRD6_DIS       ((uint32_t)0x00004000U)

#define MPU_RASR1_SRD6_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR1_SRD6_EN          ((uint32_t)0x00000000U)
#define MPU_RASR1_SRD6_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR1_R_SRD7_MASK      ((uint32_t)0x00008000U)
#define MPU_RASR1_R_SRD7_BIT       (15U)
#define MPU_RASR1_R_SRD7_EN           ((uint32_t)0x00000000U)
#define MPU_RASR1_R_SRD7_DIS       ((uint32_t)0x00008000U)

#define MPU_RASR1_SRD7_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR1_SRD7_EN          ((uint32_t)0x00000000U)
#define MPU_RASR1_SRD7_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR1_R_B_MASK      ((uint32_t)0x00010000U)
#define MPU_RASR1_R_B_BIT       (16U)
#define MPU_RASR1_R_B_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR1_R_B_EN        ((uint32_t)0x00010000U)

#define MPU_RASR1_B_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR1_B_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR1_B_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR1_R_C_MASK      ((uint32_t)0x00020000U)
#define MPU_RASR1_R_C_BIT       (17U)
#define MPU_RASR1_R_C_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR1_R_C_EN        ((uint32_t)0x00020000U)

#define MPU_RASR1_C_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR1_C_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR1_C_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR1_R_S_MASK      ((uint32_t)0x00040000U)
#define MPU_RASR1_R_S_BIT       (18U)
#define MPU_RASR1_R_S_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR1_R_S_EN        ((uint32_t)0x00040000U)

#define MPU_RASR1_S_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR1_S_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR1_S_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR1_R_TEX_MASK      ((uint32_t)0x00380000U)
#define MPU_RASR1_R_TEX_BIT       (19U)
#define MPU_RASR1_R_TEX_NC        ((uint32_t)0x00000000U)
#define MPU_RASR1_R_TEX_WB_WRA    ((uint32_t)0x00080000U)
#define MPU_RASR1_R_TEX_WT_NWA    ((uint32_t)0x00100000U)
#define MPU_RASR1_R_TEX_WB_NWA    ((uint32_t)0x00180000U)

#define MPU_RASR1_TEX_MASK        ((uint32_t)0x00000007U)
#define MPU_RASR1_TEX_NC          ((uint32_t)0x00000000U)
#define MPU_RASR1_TEX_WB_WRA      ((uint32_t)0x00000001U)
#define MPU_RASR1_TEX_WT_NWA      ((uint32_t)0x00000002U)
#define MPU_RASR1_TEX_WB_NWA      ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define MPU_RASR1_R_AP_MASK      ((uint32_t)0x07000000U)
#define MPU_RASR1_R_AP_BIT       (24U)
#define MPU_RASR1_R_AP_NANA      ((uint32_t)0x00000000U)
#define MPU_RASR1_R_AP_RWNA      ((uint32_t)0x01000000U)
#define MPU_RASR1_R_AP_RWRO      ((uint32_t)0x02000000U)
#define MPU_RASR1_R_AP_RWRW      ((uint32_t)0x03000000U)
#define MPU_RASR1_R_AP_RONA      ((uint32_t)0x05000000U)
#define MPU_RASR1_R_AP_RORO      ((uint32_t)0x06000000U)

#define MPU_RASR1_AP_MASK      ((uint32_t)0x00000007U)
#define MPU_RASR1_AP_NANA      ((uint32_t)0x00000000U)
#define MPU_RASR1_AP_RWNA      ((uint32_t)0x00000001U)
#define MPU_RASR1_AP_RWRO      ((uint32_t)0x00000002U)
#define MPU_RASR1_AP_RWRW      ((uint32_t)0x00000003U)
#define MPU_RASR1_AP_RONA      ((uint32_t)0x00000005U)
#define MPU_RASR1_AP_RORO      ((uint32_t)0x00000006U)
/*--------*/

/*--------*/
#define MPU_RASR1_R_XN_MASK      ((uint32_t)0x10000000U)
#define MPU_RASR1_R_XN_BIT       (28U)
#define MPU_RASR1_R_XN_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR1_R_XN_EN        ((uint32_t)0x10000000U)

#define MPU_RASR1_XN_MASK       ((uint32_t)0x00000001U)
#define MPU_RASR1_XN_DIS        ((uint32_t)0x00000000U)
#define MPU_RASR1_XN_EN         ((uint32_t)0x00000001U)
/*--------*/

/**********************************************************************************************
**************************************8 RBAR2 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RBAR2_R_REGION_MASK      ((uint32_t)0x0000000FU)
#define MPU_RBAR2_R_REGION_BIT       (0U)
#define MPU_RBAR2_R_REGION_REG0      ((uint32_t)0x00000000U)
#define MPU_RBAR2_R_REGION_REG1      ((uint32_t)0x00000001U)
#define MPU_RBAR2_R_REGION_REG2      ((uint32_t)0x00000002U)
#define MPU_RBAR2_R_REGION_REG3      ((uint32_t)0x00000003U)
#define MPU_RBAR2_R_REGION_REG4      ((uint32_t)0x00000004U)
#define MPU_RBAR2_R_REGION_REG5      ((uint32_t)0x00000005U)
#define MPU_RBAR2_R_REGION_REG6      ((uint32_t)0x00000006U)
#define MPU_RBAR2_R_REGION_REG7      ((uint32_t)0x00000007U)
#define MPU_RBAR2_R_REGION_REG8      ((uint32_t)0x00000008U)
#define MPU_RBAR2_R_REGION_REG9      ((uint32_t)0x00000009U)
#define MPU_RBAR2_R_REGION_REG10     ((uint32_t)0x0000000AU)
#define MPU_RBAR2_R_REGION_REG11     ((uint32_t)0x0000000BU)
#define MPU_RBAR2_R_REGION_REG12     ((uint32_t)0x0000000CU)
#define MPU_RBAR2_R_REGION_REG13     ((uint32_t)0x0000000DU)
#define MPU_RBAR2_R_REGION_REG14     ((uint32_t)0x0000000EU)
#define MPU_RBAR2_R_REGION_REG15     ((uint32_t)0x0000000FU)

#define MPU_RBAR2_REGION_MASK        ((uint32_t)0x0000000FU)
#define MPU_RBAR2_REGION_REG0        ((uint32_t)0x00000000U)
#define MPU_RBAR2_REGION_REG1        ((uint32_t)0x00000001U)
#define MPU_RBAR2_REGION_REG2        ((uint32_t)0x00000002U)
#define MPU_RBAR2_REGION_REG3        ((uint32_t)0x00000003U)
#define MPU_RBAR2_REGION_REG4        ((uint32_t)0x00000004U)
#define MPU_RBAR2_REGION_REG5        ((uint32_t)0x00000005U)
#define MPU_RBAR2_REGION_REG6        ((uint32_t)0x00000006U)
#define MPU_RBAR2_REGION_REG7        ((uint32_t)0x00000007U)
#define MPU_RBAR2_REGION_REG8        ((uint32_t)0x00000008U)
#define MPU_RBAR2_REGION_REG9        ((uint32_t)0x00000009U)
#define MPU_RBAR2_REGION_REG10       ((uint32_t)0x0000000AU)
#define MPU_RBAR2_REGION_REG11       ((uint32_t)0x0000000BU)
#define MPU_RBAR2_REGION_REG12       ((uint32_t)0x0000000CU)
#define MPU_RBAR2_REGION_REG13       ((uint32_t)0x0000000DU)
#define MPU_RBAR2_REGION_REG14       ((uint32_t)0x0000000EU)
#define MPU_RBAR2_REGION_REG15       ((uint32_t)0x0000000FU)
/*--------*/

/*--------*/
#define MPU_RBAR2_R_VALID_MASK      ((uint32_t)0x00000010U)
#define MPU_RBAR2_R_VALID_BIT       (4U)
#define MPU_RBAR2_R_VALID_DIS       ((uint32_t)0x00000000U)
#define MPU_RBAR2_R_VALID_EN        ((uint32_t)0x00000010U)

#define MPU_RBAR2_VALID_MASK        ((uint32_t)0x00000001U)
#define MPU_RBAR2_VALID_DIS         ((uint32_t)0x00000000U)
#define MPU_RBAR2_VALID_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RBAR2_R_ADDR_MASK      ((uint32_t)0xFFFFFFE0U)
#define MPU_RBAR2_R_ADDR_BIT       (5U)

#define MPU_RBAR2_ADDR_MASK        ((uint32_t)0x01FFFFFFU)
/*--------*/

/**********************************************************************************************
**************************************9 RASR2 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RASR2_R_ENABLE_MASK      ((uint32_t)0x00000001U)
#define MPU_RASR2_R_ENABLE_BIT       (0U)
#define MPU_RASR2_R_ENABLE_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR2_R_ENABLE_EN        ((uint32_t)0x00000001U)

#define MPU_RASR2_ENABLE_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR2_ENABLE_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR2_ENABLE_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SIZE_MASK      ((uint32_t)0x0000003EU)
#define MPU_RASR2_R_SIZE_BIT       (1U)
#define MPU_RASR2_R_SIZE_32B       ((uint32_t)0x00000008U)
#define MPU_RASR2_R_SIZE_1KB       ((uint32_t)0x00000012U)
#define MPU_RASR2_R_SIZE_1MB       ((uint32_t)0x00000026U)
#define MPU_RASR2_R_SIZE_1GB       ((uint32_t)0x0000003AU)
#define MPU_RASR2_R_SIZE_4GB       ((uint32_t)0x0000003EU)

#define MPU_RASR2_SIZE_MASK        ((uint32_t)0x0000001FU)
#define MPU_RASR2_SIZE_32B         ((uint32_t)0x00000004U)
#define MPU_RASR2_SIZE_1KB         ((uint32_t)0x00000009U)
#define MPU_RASR2_SIZE_1MB         ((uint32_t)0x00000013U)
#define MPU_RASR2_SIZE_1GB         ((uint32_t)0x0000001DU)
#define MPU_RASR2_SIZE_4GB         ((uint32_t)0x0000001FU)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD0_MASK      ((uint32_t)0x00000100U)
#define MPU_RASR2_R_SRD0_BIT       (8U)
#define MPU_RASR2_R_SRD0_EN           ((uint32_t)0x00000000U)
#define MPU_RASR2_R_SRD0_DIS       ((uint32_t)0x00000100U)

#define MPU_RASR2_SRD0_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR2_SRD0_EN          ((uint32_t)0x00000000U)
#define MPU_RASR2_SRD0_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD1_MASK      ((uint32_t)0x00000200U)
#define MPU_RASR2_R_SRD1_BIT       (9U)
#define MPU_RASR2_R_SRD1_EN           ((uint32_t)0x00000000U)
#define MPU_RASR2_R_SRD1_DIS       ((uint32_t)0x00000200U)

#define MPU_RASR2_SRD1_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR2_SRD1_EN          ((uint32_t)0x00000000U)
#define MPU_RASR2_SRD1_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD2_MASK      ((uint32_t)0x00000400U)
#define MPU_RASR2_R_SRD2_BIT       (10U)
#define MPU_RASR2_R_SRD2_EN           ((uint32_t)0x00000000U)
#define MPU_RASR2_R_SRD2_DIS       ((uint32_t)0x00000400U)

#define MPU_RASR2_SRD2_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR2_SRD2_EN          ((uint32_t)0x00000000U)
#define MPU_RASR2_SRD2_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD3_MASK      ((uint32_t)0x00000800U)
#define MPU_RASR2_R_SRD3_BIT       (11U)
#define MPU_RASR2_R_SRD3_EN           ((uint32_t)0x00000000U)
#define MPU_RASR2_R_SRD3_DIS       ((uint32_t)0x00000800U)

#define MPU_RASR2_SRD3_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR2_SRD3_EN          ((uint32_t)0x00000000U)
#define MPU_RASR2_SRD3_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD4_MASK      ((uint32_t)0x00001000U)
#define MPU_RASR2_R_SRD4_BIT       (12U)
#define MPU_RASR2_R_SRD4_EN           ((uint32_t)0x00000000U)
#define MPU_RASR2_R_SRD4_DIS       ((uint32_t)0x00001000U)

#define MPU_RASR2_SRD4_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR2_SRD4_EN          ((uint32_t)0x00000000U)
#define MPU_RASR2_SRD4_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD5_MASK      ((uint32_t)0x00002000U)
#define MPU_RASR2_R_SRD5_BIT       (13U)
#define MPU_RASR2_R_SRD5_EN           ((uint32_t)0x00000000U)
#define MPU_RASR2_R_SRD5_DIS       ((uint32_t)0x00002000U)

#define MPU_RASR2_SRD5_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR2_SRD5_EN          ((uint32_t)0x00000000U)
#define MPU_RASR2_SRD5_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD6_MASK      ((uint32_t)0x00004000U)
#define MPU_RASR2_R_SRD6_BIT       (14U)
#define MPU_RASR2_R_SRD6_EN           ((uint32_t)0x00000000U)
#define MPU_RASR2_R_SRD6_DIS       ((uint32_t)0x00004000U)

#define MPU_RASR2_SRD6_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR2_SRD6_EN          ((uint32_t)0x00000000U)
#define MPU_RASR2_SRD6_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR2_R_SRD7_MASK      ((uint32_t)0x00008000U)
#define MPU_RASR2_R_SRD7_BIT       (15U)
#define MPU_RASR2_R_SRD7_EN           ((uint32_t)0x00000000U)
#define MPU_RASR2_R_SRD7_DIS       ((uint32_t)0x00008000U)

#define MPU_RASR2_SRD7_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR2_SRD7_EN          ((uint32_t)0x00000000U)
#define MPU_RASR2_SRD7_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR2_R_B_MASK      ((uint32_t)0x00010000U)
#define MPU_RASR2_R_B_BIT       (16U)
#define MPU_RASR2_R_B_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR2_R_B_EN        ((uint32_t)0x00010000U)

#define MPU_RASR2_B_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR2_B_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR2_B_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR2_R_C_MASK      ((uint32_t)0x00020000U)
#define MPU_RASR2_R_C_BIT       (17U)
#define MPU_RASR2_R_C_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR2_R_C_EN        ((uint32_t)0x00020000U)

#define MPU_RASR2_C_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR2_C_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR2_C_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR2_R_S_MASK      ((uint32_t)0x00040000U)
#define MPU_RASR2_R_S_BIT       (18U)
#define MPU_RASR2_R_S_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR2_R_S_EN        ((uint32_t)0x00040000U)

#define MPU_RASR2_S_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR2_S_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR2_S_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR2_R_TEX_MASK      ((uint32_t)0x00380000U)
#define MPU_RASR2_R_TEX_BIT       (19U)
#define MPU_RASR2_R_TEX_NC        ((uint32_t)0x00000000U)
#define MPU_RASR2_R_TEX_WB_WRA    ((uint32_t)0x00080000U)
#define MPU_RASR2_R_TEX_WT_NWA    ((uint32_t)0x00100000U)
#define MPU_RASR2_R_TEX_WB_NWA    ((uint32_t)0x00180000U)

#define MPU_RASR2_TEX_MASK        ((uint32_t)0x00000007U)
#define MPU_RASR2_TEX_NC          ((uint32_t)0x00000000U)
#define MPU_RASR2_TEX_WB_WRA      ((uint32_t)0x00000001U)
#define MPU_RASR2_TEX_WT_NWA      ((uint32_t)0x00000002U)
#define MPU_RASR2_TEX_WB_NWA      ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define MPU_RASR2_R_AP_MASK      ((uint32_t)0x07000000U)
#define MPU_RASR2_R_AP_BIT       (24U)
#define MPU_RASR2_R_AP_NANA      ((uint32_t)0x00000000U)
#define MPU_RASR2_R_AP_RWNA      ((uint32_t)0x01000000U)
#define MPU_RASR2_R_AP_RWRO      ((uint32_t)0x02000000U)
#define MPU_RASR2_R_AP_RWRW      ((uint32_t)0x03000000U)
#define MPU_RASR2_R_AP_RONA      ((uint32_t)0x05000000U)
#define MPU_RASR2_R_AP_RORO      ((uint32_t)0x06000000U)

#define MPU_RASR2_AP_MASK      ((uint32_t)0x00000007U)
#define MPU_RASR2_AP_NANA      ((uint32_t)0x00000000U)
#define MPU_RASR2_AP_RWNA      ((uint32_t)0x00000001U)
#define MPU_RASR2_AP_RWRO      ((uint32_t)0x00000002U)
#define MPU_RASR2_AP_RWRW      ((uint32_t)0x00000003U)
#define MPU_RASR2_AP_RONA      ((uint32_t)0x00000005U)
#define MPU_RASR2_AP_RORO      ((uint32_t)0x00000006U)
/*--------*/

/*--------*/
#define MPU_RASR2_R_XN_MASK      ((uint32_t)0x10000000U)
#define MPU_RASR2_R_XN_BIT       (28U)
#define MPU_RASR2_R_XN_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR2_R_XN_EN        ((uint32_t)0x10000000U)

#define MPU_RASR2_XN_MASK       ((uint32_t)0x00000001U)
#define MPU_RASR2_XN_DIS        ((uint32_t)0x00000000U)
#define MPU_RASR2_XN_EN         ((uint32_t)0x00000001U)
/*--------*/

/**********************************************************************************************
**************************************10 RBAR3 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RBAR3_R_REGION_MASK      ((uint32_t)0x0000000FU)
#define MPU_RBAR3_R_REGION_BIT       (0U)
#define MPU_RBAR3_R_REGION_REG0      ((uint32_t)0x00000000U)
#define MPU_RBAR3_R_REGION_REG1      ((uint32_t)0x00000001U)
#define MPU_RBAR3_R_REGION_REG2      ((uint32_t)0x00000002U)
#define MPU_RBAR3_R_REGION_REG3      ((uint32_t)0x00000003U)
#define MPU_RBAR3_R_REGION_REG4      ((uint32_t)0x00000004U)
#define MPU_RBAR3_R_REGION_REG5      ((uint32_t)0x00000005U)
#define MPU_RBAR3_R_REGION_REG6      ((uint32_t)0x00000006U)
#define MPU_RBAR3_R_REGION_REG7      ((uint32_t)0x00000007U)
#define MPU_RBAR3_R_REGION_REG8      ((uint32_t)0x00000008U)
#define MPU_RBAR3_R_REGION_REG9      ((uint32_t)0x00000009U)
#define MPU_RBAR3_R_REGION_REG10     ((uint32_t)0x0000000AU)
#define MPU_RBAR3_R_REGION_REG11     ((uint32_t)0x0000000BU)
#define MPU_RBAR3_R_REGION_REG12     ((uint32_t)0x0000000CU)
#define MPU_RBAR3_R_REGION_REG13     ((uint32_t)0x0000000DU)
#define MPU_RBAR3_R_REGION_REG14     ((uint32_t)0x0000000EU)
#define MPU_RBAR3_R_REGION_REG15     ((uint32_t)0x0000000FU)

#define MPU_RBAR3_REGION_MASK        ((uint32_t)0x0000000FU)
#define MPU_RBAR3_REGION_REG0        ((uint32_t)0x00000000U)
#define MPU_RBAR3_REGION_REG1        ((uint32_t)0x00000001U)
#define MPU_RBAR3_REGION_REG2        ((uint32_t)0x00000002U)
#define MPU_RBAR3_REGION_REG3        ((uint32_t)0x00000003U)
#define MPU_RBAR3_REGION_REG4        ((uint32_t)0x00000004U)
#define MPU_RBAR3_REGION_REG5        ((uint32_t)0x00000005U)
#define MPU_RBAR3_REGION_REG6        ((uint32_t)0x00000006U)
#define MPU_RBAR3_REGION_REG7        ((uint32_t)0x00000007U)
#define MPU_RBAR3_REGION_REG8        ((uint32_t)0x00000008U)
#define MPU_RBAR3_REGION_REG9        ((uint32_t)0x00000009U)
#define MPU_RBAR3_REGION_REG10       ((uint32_t)0x0000000AU)
#define MPU_RBAR3_REGION_REG11       ((uint32_t)0x0000000BU)
#define MPU_RBAR3_REGION_REG12       ((uint32_t)0x0000000CU)
#define MPU_RBAR3_REGION_REG13       ((uint32_t)0x0000000DU)
#define MPU_RBAR3_REGION_REG14       ((uint32_t)0x0000000EU)
#define MPU_RBAR3_REGION_REG15       ((uint32_t)0x0000000FU)
/*--------*/

/*--------*/
#define MPU_RBAR3_R_VALID_MASK      ((uint32_t)0x00000010U)
#define MPU_RBAR3_R_VALID_BIT       (4U)
#define MPU_RBAR3_R_VALID_DIS       ((uint32_t)0x00000000U)
#define MPU_RBAR3_R_VALID_EN        ((uint32_t)0x00000010U)

#define MPU_RBAR3_VALID_MASK        ((uint32_t)0x00000001U)
#define MPU_RBAR3_VALID_DIS         ((uint32_t)0x00000000U)
#define MPU_RBAR3_VALID_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RBAR3_R_ADDR_MASK      ((uint32_t)0xFFFFFFE0U)
#define MPU_RBAR3_R_ADDR_BIT       (5U)

#define MPU_RBAR3_ADDR_MASK        ((uint32_t)0x01FFFFFFU)
/*--------*/

/**********************************************************************************************
**************************************11 RASR3 ***********************************************
**********************************************************************************************/

/*--------*/
#define MPU_RASR3_R_ENABLE_MASK      ((uint32_t)0x00000001U)
#define MPU_RASR3_R_ENABLE_BIT       (0U)
#define MPU_RASR3_R_ENABLE_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR3_R_ENABLE_EN        ((uint32_t)0x00000001U)

#define MPU_RASR3_ENABLE_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR3_ENABLE_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR3_ENABLE_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SIZE_MASK      ((uint32_t)0x0000003EU)
#define MPU_RASR3_R_SIZE_BIT       (1U)
#define MPU_RASR3_R_SIZE_32B       ((uint32_t)0x00000008U)
#define MPU_RASR3_R_SIZE_1KB       ((uint32_t)0x00000012U)
#define MPU_RASR3_R_SIZE_1MB       ((uint32_t)0x00000026U)
#define MPU_RASR3_R_SIZE_1GB       ((uint32_t)0x0000003AU)
#define MPU_RASR3_R_SIZE_4GB       ((uint32_t)0x0000003EU)

#define MPU_RASR3_SIZE_MASK        ((uint32_t)0x0000001FU)
#define MPU_RASR3_SIZE_32B         ((uint32_t)0x00000004U)
#define MPU_RASR3_SIZE_1KB         ((uint32_t)0x00000009U)
#define MPU_RASR3_SIZE_1MB         ((uint32_t)0x00000013U)
#define MPU_RASR3_SIZE_1GB         ((uint32_t)0x0000001DU)
#define MPU_RASR3_SIZE_4GB         ((uint32_t)0x0000001FU)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD0_MASK      ((uint32_t)0x00000100U)
#define MPU_RASR3_R_SRD0_BIT       (8U)
#define MPU_RASR3_R_SRD0_EN           ((uint32_t)0x00000000U)
#define MPU_RASR3_R_SRD0_DIS       ((uint32_t)0x00000100U)

#define MPU_RASR3_SRD0_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR3_SRD0_EN          ((uint32_t)0x00000000U)
#define MPU_RASR3_SRD0_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD1_MASK      ((uint32_t)0x00000200U)
#define MPU_RASR3_R_SRD1_BIT       (9U)
#define MPU_RASR3_R_SRD1_EN           ((uint32_t)0x00000000U)
#define MPU_RASR3_R_SRD1_DIS       ((uint32_t)0x00000200U)

#define MPU_RASR3_SRD1_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR3_SRD1_EN          ((uint32_t)0x00000000U)
#define MPU_RASR3_SRD1_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD2_MASK      ((uint32_t)0x00000400U)
#define MPU_RASR3_R_SRD2_BIT       (10U)
#define MPU_RASR3_R_SRD2_EN           ((uint32_t)0x00000000U)
#define MPU_RASR3_R_SRD2_DIS       ((uint32_t)0x00000400U)

#define MPU_RASR3_SRD2_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR3_SRD2_EN          ((uint32_t)0x00000000U)
#define MPU_RASR3_SRD2_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD3_MASK      ((uint32_t)0x00000800U)
#define MPU_RASR3_R_SRD3_BIT       (11U)
#define MPU_RASR3_R_SRD3_EN           ((uint32_t)0x00000000U)
#define MPU_RASR3_R_SRD3_DIS       ((uint32_t)0x00000800U)

#define MPU_RASR3_SRD3_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR3_SRD3_EN          ((uint32_t)0x00000000U)
#define MPU_RASR3_SRD3_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD4_MASK      ((uint32_t)0x00001000U)
#define MPU_RASR3_R_SRD4_BIT       (12U)
#define MPU_RASR3_R_SRD4_EN           ((uint32_t)0x00000000U)
#define MPU_RASR3_R_SRD4_DIS       ((uint32_t)0x00001000U)

#define MPU_RASR3_SRD4_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR3_SRD4_EN          ((uint32_t)0x00000000U)
#define MPU_RASR3_SRD4_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD5_MASK      ((uint32_t)0x00002000U)
#define MPU_RASR3_R_SRD5_BIT       (13U)
#define MPU_RASR3_R_SRD5_EN           ((uint32_t)0x00000000U)
#define MPU_RASR3_R_SRD5_DIS       ((uint32_t)0x00002000U)

#define MPU_RASR3_SRD5_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR3_SRD5_EN          ((uint32_t)0x00000000U)
#define MPU_RASR3_SRD5_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD6_MASK      ((uint32_t)0x00004000U)
#define MPU_RASR3_R_SRD6_BIT       (14U)
#define MPU_RASR3_R_SRD6_EN           ((uint32_t)0x00000000U)
#define MPU_RASR3_R_SRD6_DIS       ((uint32_t)0x00004000U)

#define MPU_RASR3_SRD6_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR3_SRD6_EN          ((uint32_t)0x00000000U)
#define MPU_RASR3_SRD6_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR3_R_SRD7_MASK      ((uint32_t)0x00008000U)
#define MPU_RASR3_R_SRD7_BIT       (15U)
#define MPU_RASR3_R_SRD7_EN           ((uint32_t)0x00000000U)
#define MPU_RASR3_R_SRD7_DIS       ((uint32_t)0x00008000U)

#define MPU_RASR3_SRD7_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR3_SRD7_EN          ((uint32_t)0x00000000U)
#define MPU_RASR3_SRD7_DIS         ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR3_R_B_MASK      ((uint32_t)0x00010000U)
#define MPU_RASR3_R_B_BIT       (16U)
#define MPU_RASR3_R_B_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR3_R_B_EN        ((uint32_t)0x00010000U)

#define MPU_RASR3_B_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR3_B_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR3_B_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR3_R_C_MASK      ((uint32_t)0x00020000U)
#define MPU_RASR3_R_C_BIT       (17U)
#define MPU_RASR3_R_C_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR3_R_C_EN        ((uint32_t)0x00020000U)

#define MPU_RASR3_C_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR3_C_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR3_C_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR3_R_S_MASK      ((uint32_t)0x00040000U)
#define MPU_RASR3_R_S_BIT       (18U)
#define MPU_RASR3_R_S_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR3_R_S_EN        ((uint32_t)0x00040000U)

#define MPU_RASR3_S_MASK        ((uint32_t)0x00000001U)
#define MPU_RASR3_S_DIS         ((uint32_t)0x00000000U)
#define MPU_RASR3_S_EN          ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define MPU_RASR3_R_TEX_MASK      ((uint32_t)0x00380000U)
#define MPU_RASR3_R_TEX_BIT       (19U)
#define MPU_RASR3_R_TEX_NC        ((uint32_t)0x00000000U)
#define MPU_RASR3_R_TEX_WB_WRA    ((uint32_t)0x00080000U)
#define MPU_RASR3_R_TEX_WT_NWA    ((uint32_t)0x00100000U)
#define MPU_RASR3_R_TEX_WB_NWA    ((uint32_t)0x00180000U)

#define MPU_RASR3_TEX_MASK        ((uint32_t)0x00000007U)
#define MPU_RASR3_TEX_NC          ((uint32_t)0x00000000U)
#define MPU_RASR3_TEX_WB_WRA      ((uint32_t)0x00000001U)
#define MPU_RASR3_TEX_WT_NWA      ((uint32_t)0x00000002U)
#define MPU_RASR3_TEX_WB_NWA      ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define MPU_RASR3_R_AP_MASK      ((uint32_t)0x07000000U)
#define MPU_RASR3_R_AP_BIT       (24U)
#define MPU_RASR3_R_AP_NANA      ((uint32_t)0x00000000U)
#define MPU_RASR3_R_AP_RWNA      ((uint32_t)0x01000000U)
#define MPU_RASR3_R_AP_RWRO      ((uint32_t)0x02000000U)
#define MPU_RASR3_R_AP_RWRW      ((uint32_t)0x03000000U)
#define MPU_RASR3_R_AP_RONA      ((uint32_t)0x05000000U)
#define MPU_RASR3_R_AP_RORO      ((uint32_t)0x06000000U)

#define MPU_RASR3_AP_MASK      ((uint32_t)0x00000007U)
#define MPU_RASR3_AP_NANA      ((uint32_t)0x00000000U)
#define MPU_RASR3_AP_RWNA      ((uint32_t)0x00000001U)
#define MPU_RASR3_AP_RWRO      ((uint32_t)0x00000002U)
#define MPU_RASR3_AP_RWRW      ((uint32_t)0x00000003U)
#define MPU_RASR3_AP_RONA      ((uint32_t)0x00000005U)
#define MPU_RASR3_AP_RORO      ((uint32_t)0x00000006U)
/*--------*/

/*--------*/
#define MPU_RASR3_R_XN_MASK      ((uint32_t)0x10000000U)
#define MPU_RASR3_R_XN_BIT       (28U)
#define MPU_RASR3_R_XN_DIS       ((uint32_t)0x00000000U)
#define MPU_RASR3_R_XN_EN        ((uint32_t)0x10000000U)

#define MPU_RASR3_XN_MASK       ((uint32_t)0x00000001U)
#define MPU_RASR3_XN_DIS        ((uint32_t)0x00000000U)
#define MPU_RASR3_XN_EN         ((uint32_t)0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERDEFINES_H_ */
