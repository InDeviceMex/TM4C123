/**
 *
 * @file TIMER_RegisterDefines_Standard_32_SYNC.h
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
 * @verbatim 6 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_SYNC_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_SYNC_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 5 GPTMSYNC *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_GPTMSYNC_R_SYNCT0_MASK        ((uint32_t)0x00000003U)
#define GPTM_GPTMSYNC_R_SYNCT0_BIT         (0U)
#define GPTM_GPTMSYNC_R_SYNCT0_NA          ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_R_SYNCT0_TA          ((uint32_t)0x00000001U)
#define GPTM_GPTMSYNC_R_SYNCT0_TB          ((uint32_t)0x00000002U)
#define GPTM_GPTMSYNC_R_SYNCT0_BOTH        ((uint32_t)0x00000003U)

#define GPTM_GPTMSYNC_SYNCT0_MASK          ((uint32_t)0x00000003U)
#define GPTM_GPTMSYNC_SYNCT0_NA            ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_SYNCT0_TA            ((uint32_t)0x00000001U)
#define GPTM_GPTMSYNC_SYNCT0_TB            ((uint32_t)0x00000002U)
#define GPTM_GPTMSYNC_SYNCT0_BOTH          ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPTM_GPTMSYNC_R_SYNCT1_MASK        ((uint32_t)0x0000000CU)
#define GPTM_GPTMSYNC_R_SYNCT1_BIT         (2U)
#define GPTM_GPTMSYNC_R_SYNCT1_NA          ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_R_SYNCT1_TA          ((uint32_t)0x00000004U)
#define GPTM_GPTMSYNC_R_SYNCT1_TB          ((uint32_t)0x00000008U)
#define GPTM_GPTMSYNC_R_SYNCT1_BOTH        ((uint32_t)0x0000000CU)

#define GPTM_GPTMSYNC_SYNCT1_MASK          ((uint32_t)0x00000003U)
#define GPTM_GPTMSYNC_SYNCT1_NA            ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_SYNCT1_TA            ((uint32_t)0x00000001U)
#define GPTM_GPTMSYNC_SYNCT1_TB            ((uint32_t)0x00000002U)
#define GPTM_GPTMSYNC_SYNCT1_BOTH          ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPTM_GPTMSYNC_R_SYNCT2_MASK        ((uint32_t)0x00000030U)
#define GPTM_GPTMSYNC_R_SYNCT2_BIT         (4U)
#define GPTM_GPTMSYNC_R_SYNCT2_NA          ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_R_SYNCT2_TA          ((uint32_t)0x00000010U)
#define GPTM_GPTMSYNC_R_SYNCT2_TB          ((uint32_t)0x00000020U)
#define GPTM_GPTMSYNC_R_SYNCT2_BOTH        ((uint32_t)0x00000030U)

#define GPTM_GPTMSYNC_SYNCT2_MASK          ((uint32_t)0x00000003U)
#define GPTM_GPTMSYNC_SYNCT2_NA            ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_SYNCT2_TA            ((uint32_t)0x00000001U)
#define GPTM_GPTMSYNC_SYNCT2_TB            ((uint32_t)0x00000002U)
#define GPTM_GPTMSYNC_SYNCT2_BOTH          ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPTM_GPTMSYNC_R_SYNCT3_MASK        ((uint32_t)0x000000C0U)
#define GPTM_GPTMSYNC_R_SYNCT3_BIT         (6U)
#define GPTM_GPTMSYNC_R_SYNCT3_NA          ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_R_SYNCT3_TA          ((uint32_t)0x00000040U)
#define GPTM_GPTMSYNC_R_SYNCT3_TB          ((uint32_t)0x00000080U)
#define GPTM_GPTMSYNC_R_SYNCT3_BOTH        ((uint32_t)0x000000C0U)

#define GPTM_GPTMSYNC_SYNCT3_MASK          ((uint32_t)0x00000003U)
#define GPTM_GPTMSYNC_SYNCT3_NA            ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_SYNCT3_TA            ((uint32_t)0x00000001U)
#define GPTM_GPTMSYNC_SYNCT3_TB            ((uint32_t)0x00000002U)
#define GPTM_GPTMSYNC_SYNCT3_BOTH          ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPTM_GPTMSYNC_R_SYNCT4_MASK        ((uint32_t)0x00000300U)
#define GPTM_GPTMSYNC_R_SYNCT4_BIT         (8U)
#define GPTM_GPTMSYNC_R_SYNCT4_NA          ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_R_SYNCT4_TA          ((uint32_t)0x00000100U)
#define GPTM_GPTMSYNC_R_SYNCT4_TB          ((uint32_t)0x00000200U)
#define GPTM_GPTMSYNC_R_SYNCT4_BOTH        ((uint32_t)0x00000300U)

#define GPTM_GPTMSYNC_SYNCT4_MASK          ((uint32_t)0x00000003U)
#define GPTM_GPTMSYNC_SYNCT4_NA            ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_SYNCT4_TA            ((uint32_t)0x00000001U)
#define GPTM_GPTMSYNC_SYNCT4_TB            ((uint32_t)0x00000002U)
#define GPTM_GPTMSYNC_SYNCT4_BOTH          ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPTM_GPTMSYNC_R_SYNCT5_MASK        ((uint32_t)0x00000C00U)
#define GPTM_GPTMSYNC_R_SYNCT5_BIT         (10U)
#define GPTM_GPTMSYNC_R_SYNCT5_NA          ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_R_SYNCT5_TA          ((uint32_t)0x00000400U)
#define GPTM_GPTMSYNC_R_SYNCT5_TB          ((uint32_t)0x00000800U)
#define GPTM_GPTMSYNC_R_SYNCT5_BOTH        ((uint32_t)0x00000C00U)

#define GPTM_GPTMSYNC_SYNCT5_MASK          ((uint32_t)0x00000003U)
#define GPTM_GPTMSYNC_SYNCT5_NA            ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_SYNCT5_TA            ((uint32_t)0x00000001U)
#define GPTM_GPTMSYNC_SYNCT5_TB            ((uint32_t)0x00000002U)
#define GPTM_GPTMSYNC_SYNCT5_BOTH          ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPTM_GPTMSYNC_R_SYNCWT0_MASK       ((uint32_t)0x00003000U)
#define GPTM_GPTMSYNC_R_SYNCWT0_BIT        (12U)
#define GPTM_GPTMSYNC_R_SYNCWT0_NA         ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_R_SYNCWT0_TA         ((uint32_t)0x00001000U)
#define GPTM_GPTMSYNC_R_SYNCWT0_TB         ((uint32_t)0x00002000U)
#define GPTM_GPTMSYNC_R_SYNCWT0_BOTH       ((uint32_t)0x00003000U)

#define GPTM_GPTMSYNC_SYNCWT0_MASK         ((uint32_t)0x00000003U)
#define GPTM_GPTMSYNC_SYNCWT0_NA           ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_SYNCWT0_TA           ((uint32_t)0x00000001U)
#define GPTM_GPTMSYNC_SYNCWT0_TB           ((uint32_t)0x00000002U)
#define GPTM_GPTMSYNC_SYNCWT0_BOTH         ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPTM_GPTMSYNC_R_SYNCWT1_MASK       ((uint32_t)0x0000C000U)
#define GPTM_GPTMSYNC_R_SYNCWT1_BIT        (14U)
#define GPTM_GPTMSYNC_R_SYNCWT1_NA         ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_R_SYNCWT1_TA         ((uint32_t)0x00004000U)
#define GPTM_GPTMSYNC_R_SYNCWT1_TB         ((uint32_t)0x00008000U)
#define GPTM_GPTMSYNC_R_SYNCWT1_BOTH       ((uint32_t)0x0000C000U)

#define GPTM_GPTMSYNC_SYNCWT1_MASK         ((uint32_t)0x00000003U)
#define GPTM_GPTMSYNC_SYNCWT1_NA           ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_SYNCWT1_TA           ((uint32_t)0x00000001U)
#define GPTM_GPTMSYNC_SYNCWT1_TB           ((uint32_t)0x00000002U)
#define GPTM_GPTMSYNC_SYNCWT1_BOTH         ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPTM_GPTMSYNC_R_SYNCWT2_MASK       ((uint32_t)0x00030000U)
#define GPTM_GPTMSYNC_R_SYNCWT2_BIT        (16U)
#define GPTM_GPTMSYNC_R_SYNCWT2_NA         ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_R_SYNCWT2_TA         ((uint32_t)0x00010000U)
#define GPTM_GPTMSYNC_R_SYNCWT2_TB         ((uint32_t)0x00020000U)
#define GPTM_GPTMSYNC_R_SYNCWT2_BOTH       ((uint32_t)0x00030000U)

#define GPTM_GPTMSYNC_SYNCWT2_MASK         ((uint32_t)0x00000003U)
#define GPTM_GPTMSYNC_SYNCWT2_NA           ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_SYNCWT2_TA           ((uint32_t)0x00000001U)
#define GPTM_GPTMSYNC_SYNCWT2_TB           ((uint32_t)0x00000002U)
#define GPTM_GPTMSYNC_SYNCWT2_BOTH         ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPTM_GPTMSYNC_R_SYNCWT3_MASK       ((uint32_t)0x000C0000U)
#define GPTM_GPTMSYNC_R_SYNCWT3_BIT        (18U)
#define GPTM_GPTMSYNC_R_SYNCWT3_NA         ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_R_SYNCWT3_TA         ((uint32_t)0x00040000U)
#define GPTM_GPTMSYNC_R_SYNCWT3_TB         ((uint32_t)0x00080000U)
#define GPTM_GPTMSYNC_R_SYNCWT3_BOTH       ((uint32_t)0x000C0000U)

#define GPTM_GPTMSYNC_SYNCWT3_MASK         ((uint32_t)0x00000003U)
#define GPTM_GPTMSYNC_SYNCWT3_NA           ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_SYNCWT3_TA           ((uint32_t)0x00000001U)
#define GPTM_GPTMSYNC_SYNCWT3_TB           ((uint32_t)0x00000002U)
#define GPTM_GPTMSYNC_SYNCWT3_BOTH         ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPTM_GPTMSYNC_R_SYNCWT4_MASK       ((uint32_t)0x0030000U)
#define GPTM_GPTMSYNC_R_SYNCWT4_BIT        (20U)
#define GPTM_GPTMSYNC_R_SYNCWT4_NA         ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_R_SYNCWT4_TA         ((uint32_t)0x00100000U)
#define GPTM_GPTMSYNC_R_SYNCWT4_TB         ((uint32_t)0x00200000U)
#define GPTM_GPTMSYNC_R_SYNCWT4_BOTH       ((uint32_t)0x00300000U)

#define GPTM_GPTMSYNC_SYNCWT4_MASK         ((uint32_t)0x00000003U)
#define GPTM_GPTMSYNC_SYNCWT4_NA           ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_SYNCWT4_TA           ((uint32_t)0x00000001U)
#define GPTM_GPTMSYNC_SYNCWT4_TB           ((uint32_t)0x00000002U)
#define GPTM_GPTMSYNC_SYNCWT4_BOTH         ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPTM_GPTMSYNC_R_SYNCWT5_MASK       ((uint32_t)0x00C00000U)
#define GPTM_GPTMSYNC_R_SYNCWT5_BIT        (22U)
#define GPTM_GPTMSYNC_R_SYNCWT5_NA         ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_R_SYNCWT5_TA         ((uint32_t)0x00400000U)
#define GPTM_GPTMSYNC_R_SYNCWT5_TB         ((uint32_t)0x00800000U)
#define GPTM_GPTMSYNC_R_SYNCWT5_BOTH       ((uint32_t)0x00C00000U)

#define GPTM_GPTMSYNC_SYNCWT5_MASK         ((uint32_t)0x00000003U)
#define GPTM_GPTMSYNC_SYNCWT5_NA           ((uint32_t)0x00000000U)
#define GPTM_GPTMSYNC_SYNCWT5_TA           ((uint32_t)0x00000001U)
#define GPTM_GPTMSYNC_SYNCWT5_TB           ((uint32_t)0x00000002U)
#define GPTM_GPTMSYNC_SYNCWT5_BOTH         ((uint32_t)0x00000003U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_SYNC_H_ */
