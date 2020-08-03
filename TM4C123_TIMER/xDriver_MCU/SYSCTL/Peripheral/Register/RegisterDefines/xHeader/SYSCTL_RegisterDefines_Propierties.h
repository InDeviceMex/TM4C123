/**
 *
 * @file SYSCTL_RegisterDefines_Propierties.h
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PROPIERTIES_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PROPIERTIES_H_

#include <stdint.h>

/*******************************************************************************************
************************************ 1 DID0 *********************************************
*******************************************************************************************/
/*--------*/
#define SYSCTL_DID0_R_MINOR_MASK    ((uint32_t)0x000000FFu)
#define SYSCTL_DID0_R_MINOR_BIT     (0u)
#define SYSCTL_DID0_R_MINOR_INI     ((uint32_t)0x00000000u)
#define SYSCTL_DID0_R_MINOR_1METAL  ((uint32_t)0x00000001u)
#define SYSCTL_DID0_R_MINOR_2METAL  ((uint32_t)0x00000002u)
#define SYSCTL_DID0_R_MINOR_3METAL  ((uint32_t)0x00000003u)
#define SYSCTL_DID0_R_MINOR_4METAL  ((uint32_t)0x00000004u)

#define SYSCTL_DID0_MINOR_MASK      ((uint32_t)0x000000FFu)
#define SYSCTL_DID0_MINOR_INI       ((uint32_t)0x00000000u)
#define SYSCTL_DID0_MINOR_1METAL    ((uint32_t)0x00000001u)
#define SYSCTL_DID0_MINOR_2METAL    ((uint32_t)0x00000002u)
#define SYSCTL_DID0_MINOR_3METAL    ((uint32_t)0x00000003u)
#define SYSCTL_DID0_MINOR_4METAL    ((uint32_t)0x00000004u)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_MAJOR_MASK    ((uint32_t)0x0000FF00u)
#define SYSCTL_DID0_R_MAJOR_BIT     ((uint32_t)8)
#define SYSCTL_DID0_R_MAJOR_REVA    ((uint32_t)0x00000000u)
#define SYSCTL_DID0_R_MAJOR_REVB    ((uint32_t)0x00000100u)
#define SYSCTL_DID0_R_MAJOR_REVC    ((uint32_t)0x00000200u)
#define SYSCTL_DID0_R_MAJOR_REVD    ((uint32_t)0x00000300u)
#define SYSCTL_DID0_R_MAJOR_REVE    ((uint32_t)0x00000400u)
#define SYSCTL_DID0_R_MAJOR_REVF    ((uint32_t)0x00000500u)

#define SYSCTL_DID0_MAJOR_MASK      ((uint32_t)0x000000FFu)
#define SYSCTL_DID0_MAJOR_REVA      ((uint32_t)0x00000000u)
#define SYSCTL_DID0_MAJOR_REVB      ((uint32_t)0x00000001u)
#define SYSCTL_DID0_MAJOR_REVC      ((uint32_t)0x00000002u)
#define SYSCTL_DID0_MAJOR_REVD      ((uint32_t)0x00000003u)
#define SYSCTL_DID0_MAJOR_REVE      ((uint32_t)0x00000004u)
#define SYSCTL_DID0_MAJOR_REVF      ((uint32_t)0x00000005u)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_CLASS_MASK    ((uint32_t)0x00FF0000u)
#define SYSCTL_DID0_R_CLASS_BIT     (16u)
#define SYSCTL_DID0_R_CLASS_TIVAC   ((uint32_t)0x00050000u)

#define SYSCTL_DID0_CLASS_MASK      ((uint32_t)0x000000FFu)
#define SYSCTL_DID0_CLASS_TIVAC     ((uint32_t)0x00000005u)
/*--------*/

/*--------*/
#define SYSCTL_DID0_R_VER_MASK      ((uint32_t)0x70000000u)
#define SYSCTL_DID0_R_VER_BIT       (28u)
#define SYSCTL_DID0_R_VER_DID0      ((uint32_t)0x10000000u)

#define SYSCTL_DID0_VER_MASK        ((uint32_t)0x00000007u)
#define SYSCTL_DID0_VER_DID0        ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************ 2 DID1 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DID1_R_QUAL_MASK     ((uint32_t)0x00000003u)
#define SYSCTL_DID1_R_QUAL_BIT      (0u)
#define SYSCTL_DID1_R_QUAL_ENG      ((uint32_t)0x00000000u)
#define SYSCTL_DID1_R_QUAL_PILOT    ((uint32_t)0x00000001u)
#define SYSCTL_DID1_R_QUAL_FULLY    ((uint32_t)0x00000002u)

#define SYSCTL_DID1_QUAL_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_DID1_QUAL_ENG        ((uint32_t)0x00000000u)
#define SYSCTL_DID1_QUAL_PILOT      ((uint32_t)0x00000001u)
#define SYSCTL_DID1_QUAL_FULLY      ((uint32_t)0x00000002u)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_ROHS_MASK     ((uint32_t)0x00000004u)
#define SYSCTL_DID1_R_ROHS_BIT      (2u)
#define SYSCTL_DID1_R_ROHS_NOROHS   ((uint32_t)0x00000000u)
#define SYSCTL_DID1_R_ROHS_ROHS     ((uint32_t)0x00000004u)

#define SYSCTL_DID1_ROHS_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DID1_ROHS_NOROHS     ((uint32_t)0x00000000u)
#define SYSCTL_DID1_ROHS_ROHS       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PKG_MASK      ((uint32_t)0x00000018u)
#define SYSCTL_DID1_R_PKG_BIT       (3u)
#define SYSCTL_DID1_R_PKG_LQFP      ((uint32_t)0x00000008u)
#define SYSCTL_DID1_R_PKG_BGA       ((uint32_t)0x00000010u)

#define SYSCTL_DID1_PKG_MASK        ((uint32_t)0x00000003u)
#define SYSCTL_DID1_PKG_LQFP        ((uint32_t)0x00000001u)
#define SYSCTL_DID1_PKG_BGA         ((uint32_t)0x00000002u)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_TEMP_MASK     ((uint32_t)0x000000E0u)
#define SYSCTL_DID1_R_TEMP_BIT      (5u)
#define SYSCTL_DID1_R_TEMP_IND      ((uint32_t)0x00000020u)
#define SYSCTL_DID1_R_TEMP_EXT      ((uint32_t)0x00000040u)
#define SYSCTL_DID1_R_TEMP_BOTH     ((uint32_t)0x00000060u)

#define SYSCTL_DID1_TEMP_MASK       ((uint32_t)0x00000007u)
#define SYSCTL_DID1_TEMP_IND        ((uint32_t)0x00000001u)
#define SYSCTL_DID1_TEMP_EXT        ((uint32_t)0x00000002u)
#define SYSCTL_DID1_TEMP_BOTH       ((uint32_t)0x00000003u)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PINCOUNT_MASK ((uint32_t)0x0000E000u)
#define SYSCTL_DID1_R_PINCOUNT_BIT  (13u)
#define SYSCTL_DID1_R_PINCOUNT_100  ((uint32_t)0x00004000u)
#define SYSCTL_DID1_R_PINCOUNT_64   ((uint32_t)0x00006000u)
#define SYSCTL_DID1_R_PINCOUNT_144  ((uint32_t)0x00008000u)
#define SYSCTL_DID1_R_PINCOUNT_157  ((uint32_t)0x0000A000u)
#define SYSCTL_DID1_R_PINCOUNT_168  ((uint32_t)0x0000C000u)

#define SYSCTL_DID1_PINCOUNT_MASK   ((uint32_t)0x00000007u)
#define SYSCTL_DID1_PINCOUNT_100    ((uint32_t)0x00000002u)
#define SYSCTL_DID1_PINCOUNT_64     ((uint32_t)0x00000003u)
#define SYSCTL_DID1_PINCOUNT_144    ((uint32_t)0x00000004u)
#define SYSCTL_DID1_PINCOUNT_157    ((uint32_t)0x00000005u)
#define SYSCTL_DID1_PINCOUNT_168    ((uint32_t)0x00000006u)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_PARTNO_MASK       ((uint32_t)0x00FF0000u)
#define SYSCTL_DID1_R_PARTNO_BIT        (16u)
#define SYSCTL_DID1_R_PARTNO_TM4C123    ((uint32_t)0x00A10000u)

#define SYSCTL_DID1_PARTNO_MASK         ((uint32_t)0x000000FFu)
#define SYSCTL_DID1_PARTNO_TM4C123      ((uint32_t)0x000000A1u)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_FAM_MASK      ((uint32_t)0x0F000000u)
#define SYSCTL_DID1_R_FAM_BIT       (24u)
#define SYSCTL_DID1_R_FAM_TIVAC     ((uint32_t)0x00000000u)

#define SYSCTL_DID1_FAM_MASK        ((uint32_t)0x0000000Fu)
#define SYSCTL_DID1_FAM_TIVAC       ((uint32_t)0x00000000u)
/*--------*/

/*--------*/
#define SYSCTL_DID1_R_VER_MASK      ((uint32_t)0xF0000000u)
#define SYSCTL_DID1_R_VER_BIT       (28u)
#define SYSCTL_DID1_R_VER_INI       ((uint32_t)0x00000000u)
#define SYSCTL_DID1_R_VER_SECOND    ((uint32_t)0x10000000u)

#define SYSCTL_DID1_VER_MASK        ((uint32_t)0x0000000Fu)
#define SYSCTL_DID1_VER_INI         ((uint32_t)0x00000000u)
#define SYSCTL_DID1_VER_SECOND      ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************13 SYSPROP *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SYSPROP_R_FPU_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SYSPROP_R_FPU_BIT        (0u)
#define SYSCTL_SYSPROP_R_FPU_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_R_FPU_PRESENT    ((uint32_t)0x00000001u)

#define SYSCTL_SYSPROP_FPU_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_SYSPROP_FPU_NOPRESENT    ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_FPU_PRESENT      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_FLASHLPM_MASK       ((uint32_t)0x00000100u)
#define SYSCTL_SYSPROP_R_FLASHLPM_BIT        (8u)
#define SYSCTL_SYSPROP_R_FLASHLPM_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_R_FLASHLPM_PRESENT    ((uint32_t)0x00000100u)

#define SYSCTL_SYSPROP_FLASHLPM_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_SYSPROP_FLASHLPM_NOPRESENT    ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_FLASHLPM_PRESENT      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_SRAMLPM_MASK       ((uint32_t)0x00000400u)
#define SYSCTL_SYSPROP_R_SRAMLPM_BIT        (10u)
#define SYSCTL_SYSPROP_R_SRAMLPM_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_R_SRAMLPM_PRESENT    ((uint32_t)0x00000400u)

#define SYSCTL_SYSPROP_SRAMLPM_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_SYSPROP_SRAMLPM_NOPRESENT    ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_SRAMLPM_PRESENT      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_SRAMSM_MASK       ((uint32_t)0x00000800u)
#define SYSCTL_SYSPROP_R_SRAMSM_BIT        (11u)
#define SYSCTL_SYSPROP_R_SRAMSM_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_R_SRAMSM_PRESENT    ((uint32_t)0x00000800u)

#define SYSCTL_SYSPROP_SRAMSM_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_SYSPROP_SRAMSM_NOPRESENT    ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_SRAMSM_PRESENT      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SYSPROP_R_PIOSCPDE_MASK       ((uint32_t)0x00001000u)
#define SYSCTL_SYSPROP_R_PIOSCPDE_BIT        (12u)
#define SYSCTL_SYSPROP_R_PIOSCPDE_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_R_PIOSCPDE_PRESENT    ((uint32_t)0x00001000u)

#define SYSCTL_SYSPROP_PIOSCPDE_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_SYSPROP_PIOSCPDE_NOPRESENT    ((uint32_t)0x00000000u)
#define SYSCTL_SYSPROP_PIOSCPDE_PRESENT      ((uint32_t)0x00000001u)
/*--------*/

/**********************************************************************************
************************************144 NVMSTAT *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_NVMSTAT_R_FWB_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_NVMSTAT_R_FWB_BIT        (0u)
#define SYSCTL_NVMSTAT_R_FWB_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_NVMSTAT_R_FWB_PRESENT    ((uint32_t)0x00000001u)

#define SYSCTL_NVMSTAT_FWB_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_NVMSTAT_FWB_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_NVMSTAT_FWB_PRESENT    ((uint32_t)0x00000001u)
/*----------*/




#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PROPIERTIES_H_ */
