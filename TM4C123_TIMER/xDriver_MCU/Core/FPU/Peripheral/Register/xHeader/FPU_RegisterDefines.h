/**
 *
 * @file FPU_RegisterDefines.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERDEFINES_H_

#include <stdint.h>

/*********************************************************************************************/
/************************************* 1 CPACR ***********************************************/
/*********************************************************************************************/

/*----------*/
#define FPU_CPACR_R_CP10_MASK      ((uint32_t)0x00300000u)
#define FPU_CPACR_R_CP10_BIT       (20u)
#define FPU_CPACR_R_CP10_DENIED    ((uint32_t)0x00000000u)
#define FPU_CPACR_R_CP10_PRIVILEGE ((uint32_t)0x00100000u)
#define FPU_CPACR_R_CP10_FULL      ((uint32_t)0x00300000u)

#define FPU_CPACR_CP10_MASK        ((uint32_t)0x00000003u)
#define FPU_CPACR_CP10_DENIED      ((uint32_t)0x00000000u)
#define FPU_CPACR_CP10_PRIVILEGE   ((uint32_t)0x00000001u)
#define FPU_CPACR_CP10_FULL        ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define FPU_CPACR_R_CP11_MASK      ((uint32_t)0x00C00000u)
#define FPU_CPACR_R_CP11_BIT       (22u)
#define FPU_CPACR_R_CP11_DENIED    ((uint32_t)0x00000000u)
#define FPU_CPACR_R_CP11_PRIVILEGE ((uint32_t)0x00400000u)
#define FPU_CPACR_R_CP11_FULL      ((uint32_t)0x00C00000u)

#define FPU_CPACR_CP11_MASK        ((uint32_t)0x00000003u)
#define FPU_CPACR_CP11_DENIED      ((uint32_t)0x00000000u)
#define FPU_CPACR_CP11_PRIVILEGE   ((uint32_t)0x00000001u)
#define FPU_CPACR_CP11_FULL        ((uint32_t)0x00000003u)
/*----------*/

/*********************************************************************************************/
/************************************* 2 FPCCR ***********************************************/
/*********************************************************************************************/

/*----------*/
#define FPU_FPCCR_R_LSPACT_MASK      ((uint32_t)0x00000001u)
#define FPU_FPCCR_R_LSPACT_BIT       (0u)
#define FPU_FPCCR_R_LSPACT_NOSET     ((uint32_t)0x00000000u)
#define FPU_FPCCR_R_LSPACT_SET       ((uint32_t)0x00000001u)

#define FPU_FPCCR_LSPACT_MASK        ((uint32_t)0x00000001u)
#define FPU_FPCCR_LSPACT_NOSET       ((uint32_t)0x00000000u)
#define FPU_FPCCR_LSPACT_SET         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FPU_FPCCR_R_USER_MASK      ((uint32_t)0x00000002u)
#define FPU_FPCCR_R_USER_BIT       (1u)
#define FPU_FPCCR_R_USER_NOSET     ((uint32_t)0x00000000u)
#define FPU_FPCCR_R_USER_SET       ((uint32_t)0x00000002u)

#define FPU_FPCCR_USER_MASK        ((uint32_t)0x00000001u)
#define FPU_FPCCR_USER_NOSET       ((uint32_t)0x00000000u)
#define FPU_FPCCR_USER_SET         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FPU_FPCCR_R_THREAD_MASK      ((uint32_t)0x00000008u)
#define FPU_FPCCR_R_THREAD_BIT       (3u)
#define FPU_FPCCR_R_THREAD_NOSET     ((uint32_t)0x00000000u)
#define FPU_FPCCR_R_THREAD_SET       ((uint32_t)0x00000008u)

#define FPU_FPCCR_THREAD_MASK        ((uint32_t)0x00000001u)
#define FPU_FPCCR_THREAD_NOSET       ((uint32_t)0x00000000u)
#define FPU_FPCCR_THREAD_SET         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FPU_FPCCR_R_HFRDY_MASK      ((uint32_t)0x00000010u)
#define FPU_FPCCR_R_HFRDY_BIT       (4u)
#define FPU_FPCCR_R_HFRDY_NOSET     ((uint32_t)0x00000000u)
#define FPU_FPCCR_R_HFRDY_SET       ((uint32_t)0x00000010u)

#define FPU_FPCCR_HFRDY_MASK        ((uint32_t)0x00000001u)
#define FPU_FPCCR_HFRDY_NOSET       ((uint32_t)0x00000000u)
#define FPU_FPCCR_HFRDY_SET         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FPU_FPCCR_R_MMRDY_MASK      ((uint32_t)0x00000020u)
#define FPU_FPCCR_R_MMRDY_BIT       (5u)
#define FPU_FPCCR_R_MMRDY_NOSET     ((uint32_t)0x00000000u)
#define FPU_FPCCR_R_MMRDY_SET       ((uint32_t)0x00000020u)

#define FPU_FPCCR_MMRDY_MASK        ((uint32_t)0x00000001u)
#define FPU_FPCCR_MMRDY_NOSET       ((uint32_t)0x00000000u)
#define FPU_FPCCR_MMRDY_SET         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FPU_FPCCR_R_BFRDY_MASK      ((uint32_t)0x00000040u)
#define FPU_FPCCR_R_BFRDY_BIT       (6u)
#define FPU_FPCCR_R_BFRDY_NOSET     ((uint32_t)0x00000000u)
#define FPU_FPCCR_R_BFRDY_SET       ((uint32_t)0x00000040u)

#define FPU_FPCCR_BFRDY_MASK        ((uint32_t)0x00000001u)
#define FPU_FPCCR_BFRDY_NOSET       ((uint32_t)0x00000000u)
#define FPU_FPCCR_BFRDY_SET         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FPU_FPCCR_R_MONRDY_MASK      ((uint32_t)0x00000100u)
#define FPU_FPCCR_R_MONRDY_BIT       (8u)
#define FPU_FPCCR_R_MONRDY_NOSET     ((uint32_t)0x00000000u)
#define FPU_FPCCR_R_MONRDY_SET       ((uint32_t)0x00000100u)

#define FPU_FPCCR_MONRDY_MASK        ((uint32_t)0x00000001u)
#define FPU_FPCCR_MONRDY_NOSET       ((uint32_t)0x00000000u)
#define FPU_FPCCR_MONRDY_SET         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FPU_FPCCR_R_LSPEN_MASK      ((uint32_t)0x40000000u)
#define FPU_FPCCR_R_LSPEN_BIT       (30u)
#define FPU_FPCCR_R_LSPEN_NOSET     ((uint32_t)0x00000000u)
#define FPU_FPCCR_R_LSPEN_SET       ((uint32_t)0x40000000u)

#define FPU_FPCCR_LSPEN_MASK        ((uint32_t)0x00000001u)
#define FPU_FPCCR_LSPEN_NOSET       ((uint32_t)0x00000000u)
#define FPU_FPCCR_LSPEN_SET         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FPU_FPCCR_R_ASPEN_MASK      ((uint32_t)0x80000000u)
#define FPU_FPCCR_R_ASPEN_BIT       (31u)
#define FPU_FPCCR_R_ASPEN_NOSET     ((uint32_t)0x00000000u)
#define FPU_FPCCR_R_ASPEN_SET       ((uint32_t)0x80000000u)

#define FPU_FPCCR_ASPEN_MASK        ((uint32_t)0x00000001u)
#define FPU_FPCCR_ASPEN_NOSET       ((uint32_t)0x00000000u)
#define FPU_FPCCR_ASPEN_SET         ((uint32_t)0x00000001u)
/*----------*/

/*********************************************************************************************/
/************************************* 3 FPCAR ***********************************************/
/*********************************************************************************************/

/*----------*/
#define FPU_FPCAR_R_ADDRESS_MASK      ((uint32_t)0xFFFFFFF8u)
#define FPU_FPCAR_R_ADDRESS_BIT       (3u)

#define FPU_FPCAR_ADDRESS_MASK        ((uint32_t)0x1FFFFFFFu)
/*----------*/

/*********************************************************************************************/
/************************************* 4 FPDSCR ***********************************************/
/*********************************************************************************************/

/*----------*/
#define FPU_FPDSCR_R_RMODE_MASK      ((uint32_t)0x00C00000u)
#define FPU_FPDSCR_R_RMODE_BIT       (22u)
#define FPU_FPDSCR_R_RMODE_RN        ((uint32_t)0x00000000u)
#define FPU_FPDSCR_R_RMODE_RP        ((uint32_t)0x00400000u)
#define FPU_FPDSCR_R_RMODE_RM        ((uint32_t)0x00800000u)
#define FPU_FPDSCR_R_RMODE_RZ        ((uint32_t)0x00C00000u)

#define FPU_FPDSCR_RMODE_MASK        ((uint32_t)0x00000003u)
#define FPU_FPDSCR_RMODE_RN          ((uint32_t)0x00000000u)
#define FPU_FPDSCR_RMODE_RP          ((uint32_t)0x00000001u)
#define FPU_FPDSCR_RMODE_RM          ((uint32_t)0x00000002u)
#define FPU_FPDSCR_RMODE_RZ          ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define FPU_FPDSCR_R_FZ_MASK      ((uint32_t)0x01000000u)
#define FPU_FPDSCR_R_FZ_BIT       (24u)
#define FPU_FPDSCR_R_FZ_0         ((uint32_t)0x00000000u)
#define FPU_FPDSCR_R_FZ_1         ((uint32_t)0x01000000u)

#define FPU_FPDSCR_FZ_MASK        ((uint32_t)0x00000001u)
#define FPU_FPDSCR_FZ_0           ((uint32_t)0x00000000u)
#define FPU_FPDSCR_FZ_1           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FPU_FPDSCR_R_DN_MASK      ((uint32_t)0x02000000u)
#define FPU_FPDSCR_R_DN_BIT       (25u)
#define FPU_FPDSCR_R_DN_0         ((uint32_t)0x00000000u)
#define FPU_FPDSCR_R_DN_1         ((uint32_t)0x02000000u)

#define FPU_FPDSCR_DN_MASK        ((uint32_t)0x00000001u)
#define FPU_FPDSCR_DN_0           ((uint32_t)0x00000000u)
#define FPU_FPDSCR_DN_1           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define FPU_FPDSCR_R_AHP_MASK      ((uint32_t)0x04000000u)
#define FPU_FPDSCR_R_AHP_BIT       (26u)
#define FPU_FPDSCR_R_AHP_0         ((uint32_t)0x00000000u)
#define FPU_FPDSCR_R_AHP_1         ((uint32_t)0x04000000u)

#define FPU_FPDSCR_AHP_MASK        ((uint32_t)0x00000001u)
#define FPU_FPDSCR_AHP_0           ((uint32_t)0x00000000u)
#define FPU_FPDSCR_AHP_1           ((uint32_t)0x00000001u)
/*----------*/

/*********************************************************************************************/
/************************************* 6 MVFR0 ***********************************************/
/*********************************************************************************************/

/*----------*/
#define FPU_MVFR0_R_A_SIMD_registers_MASK      ((uint32_t)0x0000000Fu)
#define FPU_MVFR0_R_A_SIMD_registers_BIT       (0u)

#define FPU_MVFR0_A_SIMD_registers_MASK        ((uint32_t)0x0000000Fu)
/*----------*/

/*----------*/
#define FPU_MVFR0_R_Single_precision_MASK      ((uint32_t)0x000000F0u)
#define FPU_MVFR0_R_Single_precision_BIT       (4u)
#define FPU_MVFR0_R_Single_precision_PRESENT   ((uint32_t)0x00000020u)
#define FPU_MVFR0_R_Single_precision_NOPRESENT ((uint32_t)0x00000000u)

#define FPU_MVFR0_Single_precision_MASK        ((uint32_t)0x0000000Fu)
#define FPU_MVFR0_Single_precision_PRESENT     ((uint32_t)0x00000002u)
#define FPU_MVFR0_Single_precision_NOPRESENT   ((uint32_t)0x00000000u)
/*----------*/

/*----------*/
#define FPU_MVFR0_R_Double_precision_MASK      ((uint32_t)0x00000F00u)
#define FPU_MVFR0_R_Double_precision_BIT       (8u)
#define FPU_MVFR0_R_Double_precision_PRESENT   ((uint32_t)0x00000200u)
#define FPU_MVFR0_R_Double_precision_NOPRESENT ((uint32_t)0x00000000u)

#define FPU_MVFR0_Double_precision_MASK        ((uint32_t)0x0000000Fu)
#define FPU_MVFR0_Double_precision_PRESENT     ((uint32_t)0x00000002u)
#define FPU_MVFR0_Double_precision_NOPRESENT   ((uint32_t)0x00000000u)
/*----------*/

/*----------*/
#define FPU_MVFR0_R_FP_excep_trapping_MASK      ((uint32_t)0x0000F000u)
#define FPU_MVFR0_R_FP_excep_trapping_BIT       (12u)

#define FPU_MVFR0_FP_excep_trapping_MASK        ((uint32_t)0x0000000Fu)
/*----------*/

/*----------*/
#define FPU_MVFR0_R_Divide_MASK                 ((uint32_t)0x000F0000u)
#define FPU_MVFR0_R_Divide_BIT                  (16u)

#define FPU_MVFR0_Divide_MASK                   ((uint32_t)0x0000000Fu)
/*----------*/

/*----------*/
#define FPU_MVFR0_R_Square_root_MASK            ((uint32_t)0x00F00000u)
#define FPU_MVFR0_R_Square_root_BIT             (20u)

#define FPU_MVFR0_Square_root_MASK              ((uint32_t)0x0000000Fu)
/*----------*/

/*----------*/
#define FPU_MVFR0_R_Short_vectors_MASK          ((uint32_t)0x0F000000u)
#define FPU_MVFR0_R_Short_vectors_BIT           (24u)

#define FPU_MVFR0_Short_vectors_MASK            ((uint32_t)0x0000000Fu)
/*----------*/

/*----------*/
#define FPU_MVFR0_R_FP_rounding_modes_MASK      ((uint32_t)0xF0000000u)
#define FPU_MVFR0_R_FP_rounding_modes_BIT       (28u)

#define FPU_MVFR0_FP_rounding_modes_MASK        ((uint32_t)0x0000000Fu)
/*----------*/

/*********************************************************************************************/
/************************************* 7 MVFR1 ***********************************************/
/*********************************************************************************************/

/*----------*/
#define FPU_MVFR1_R_FtZ_mode_MASK      ((uint32_t)0x0000000Fu)
#define FPU_MVFR1_R_FtZ_mode_BIT       (0u)

#define FPU_MVFR1_FtZ_mode_MASK        ((uint32_t)0x0000000Fu)
/*----------*/

/*----------*/
#define FPU_MVFR1_R_D_NaN_mode_MASK      ((uint32_t)0x000000F0u)
#define FPU_MVFR1_R_D_NaN_mode_BIT       (4u)

#define FPU_MVFR1_D_NaN_mode_MASK        ((uint32_t)0x0000000Fu)
/*----------*/

/*----------*/
#define FPU_MVFR1_R_FP_HPFP_MASK        ((uint32_t)0x0F000000u)
#define FPU_MVFR1_R_FP_HPFP_BIT         (24u)

#define FPU_MVFR1_FP_HPFP_MASK          ((uint32_t)0x0000000Fu)
/*----------*/

/*----------*/
#define FPU_MVFR1_R_FP_fused_MAC_MASK      ((uint32_t)0xF0000000u)
#define FPU_MVFR1_R_FP_fused_MAC_BIT       (28u)

#define FPU_MVFR1_FP_fused_MAC_MASK        ((uint32_t)0x0000000Fu)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERDEFINES_H_ */
