/**
 *
 * @file TIMER_RegisterDefines_Control_32_SYNC.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_CONTROL_32_TIMER_REGISTERDEFINES_CONTROL_32_SYNC_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_CONTROL_32_TIMER_REGISTERDEFINES_CONTROL_32_SYNC_H_

#include <stdint.h>

/******************************************************************************************
************************************ 5 GPTMSYNC *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_CTL_GPTMSYNC_R_SYNCT0_MASK      ((uint32_t)0x00000003u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT0_BIT       (0u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT0_NA        ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT0_TA        ((uint32_t)0x00000001u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT0_TB        ((uint32_t)0x00000002u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT0_BOTH      ((uint32_t)0x00000003u)

#define GPTM_CTL_GPTMSYNC_SYNCT0_MASK        ((uint32_t)0x00000003u)
#define GPTM_CTL_GPTMSYNC_SYNCT0_NA          ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_SYNCT0_TA          ((uint32_t)0x00000001u)
#define GPTM_CTL_GPTMSYNC_SYNCT0_TB          ((uint32_t)0x00000002u)
#define GPTM_CTL_GPTMSYNC_SYNCT0_BOTH        ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPTM_CTL_GPTMSYNC_R_SYNCT1_MASK      ((uint32_t)0x0000000Cu)
#define GPTM_CTL_GPTMSYNC_R_SYNCT1_BIT       (2u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT1_NA        ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT1_TA        ((uint32_t)0x00000004u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT1_TB        ((uint32_t)0x00000008u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT1_BOTH      ((uint32_t)0x0000000Cu)

#define GPTM_CTL_GPTMSYNC_SYNCT1_MASK        ((uint32_t)0x00000003u)
#define GPTM_CTL_GPTMSYNC_SYNCT1_NA          ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_SYNCT1_TA          ((uint32_t)0x00000001u)
#define GPTM_CTL_GPTMSYNC_SYNCT1_TB          ((uint32_t)0x00000002u)
#define GPTM_CTL_GPTMSYNC_SYNCT1_BOTH        ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPTM_CTL_GPTMSYNC_R_SYNCT2_MASK      ((uint32_t)0x00000030u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT2_BIT       (4u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT2_NA        ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT2_TA        ((uint32_t)0x00000010u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT2_TB        ((uint32_t)0x00000020u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT2_BOTH      ((uint32_t)0x00000030u)

#define GPTM_CTL_GPTMSYNC_SYNCT2_MASK        ((uint32_t)0x00000003u)
#define GPTM_CTL_GPTMSYNC_SYNCT2_NA          ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_SYNCT2_TA          ((uint32_t)0x00000001u)
#define GPTM_CTL_GPTMSYNC_SYNCT2_TB          ((uint32_t)0x00000002u)
#define GPTM_CTL_GPTMSYNC_SYNCT2_BOTH        ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPTM_CTL_GPTMSYNC_R_SYNCT3_MASK      ((uint32_t)0x000000C0u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT3_BIT       (6u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT3_NA        ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT3_TA        ((uint32_t)0x00000040u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT3_TB        ((uint32_t)0x00000080u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT3_BOTH      ((uint32_t)0x000000C0u)

#define GPTM_CTL_GPTMSYNC_SYNCT3_MASK        ((uint32_t)0x00000003u)
#define GPTM_CTL_GPTMSYNC_SYNCT3_NA          ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_SYNCT3_TA          ((uint32_t)0x00000001u)
#define GPTM_CTL_GPTMSYNC_SYNCT3_TB          ((uint32_t)0x00000002u)
#define GPTM_CTL_GPTMSYNC_SYNCT3_BOTH        ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPTM_CTL_GPTMSYNC_R_SYNCT4_MASK      ((uint32_t)0x00000300u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT4_BIT       (8u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT4_NA        ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT4_TA        ((uint32_t)0x00000100u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT4_TB        ((uint32_t)0x00000200u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT4_BOTH      ((uint32_t)0x00000300u)

#define GPTM_CTL_GPTMSYNC_SYNCT4_MASK        ((uint32_t)0x00000003u)
#define GPTM_CTL_GPTMSYNC_SYNCT4_NA          ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_SYNCT4_TA          ((uint32_t)0x00000001u)
#define GPTM_CTL_GPTMSYNC_SYNCT4_TB          ((uint32_t)0x00000002u)
#define GPTM_CTL_GPTMSYNC_SYNCT4_BOTH        ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPTM_CTL_GPTMSYNC_R_SYNCT5_MASK      ((uint32_t)0x00000C00u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT5_BIT       (10u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT5_NA        ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT5_TA        ((uint32_t)0x00000400u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT5_TB        ((uint32_t)0x00000800u)
#define GPTM_CTL_GPTMSYNC_R_SYNCT5_BOTH      ((uint32_t)0x00000C00u)

#define GPTM_CTL_GPTMSYNC_SYNCT5_MASK        ((uint32_t)0x00000003u)
#define GPTM_CTL_GPTMSYNC_SYNCT5_NA          ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_SYNCT5_TA          ((uint32_t)0x00000001u)
#define GPTM_CTL_GPTMSYNC_SYNCT5_TB          ((uint32_t)0x00000002u)
#define GPTM_CTL_GPTMSYNC_SYNCT5_BOTH        ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPTM_CTL_GPTMSYNC_R_SYNCWT0_MASK      ((uint32_t)0x00003000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT0_BIT       (12u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT0_NA        ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT0_TA        ((uint32_t)0x00001000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT0_TB        ((uint32_t)0x00002000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT0_BOTH      ((uint32_t)0x00003000u)

#define GPTM_CTL_GPTMSYNC_SYNCWT0_MASK        ((uint32_t)0x00000003u)
#define GPTM_CTL_GPTMSYNC_SYNCWT0_NA          ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_SYNCWT0_TA          ((uint32_t)0x00000001u)
#define GPTM_CTL_GPTMSYNC_SYNCWT0_TB          ((uint32_t)0x00000002u)
#define GPTM_CTL_GPTMSYNC_SYNCWT0_BOTH        ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPTM_CTL_GPTMSYNC_R_SYNCWT1_MASK      ((uint32_t)0x0000C000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT1_BIT       (14u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT1_NA        ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT1_TA        ((uint32_t)0x00004000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT1_TB        ((uint32_t)0x00008000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT1_BOTH      ((uint32_t)0x0000C000u)

#define GPTM_CTL_GPTMSYNC_SYNCWT1_MASK        ((uint32_t)0x00000003u)
#define GPTM_CTL_GPTMSYNC_SYNCWT1_NA          ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_SYNCWT1_TA          ((uint32_t)0x00000001u)
#define GPTM_CTL_GPTMSYNC_SYNCWT1_TB          ((uint32_t)0x00000002u)
#define GPTM_CTL_GPTMSYNC_SYNCWT1_BOTH        ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPTM_CTL_GPTMSYNC_R_SYNCWT2_MASK      ((uint32_t)0x00030000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT2_BIT       (16u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT2_NA        ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT2_TA        ((uint32_t)0x00010000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT2_TB        ((uint32_t)0x00020000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT2_BOTH      ((uint32_t)0x00030000u)

#define GPTM_CTL_GPTMSYNC_SYNCWT2_MASK        ((uint32_t)0x00000003u)
#define GPTM_CTL_GPTMSYNC_SYNCWT2_NA          ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_SYNCWT2_TA          ((uint32_t)0x00000001u)
#define GPTM_CTL_GPTMSYNC_SYNCWT2_TB          ((uint32_t)0x00000002u)
#define GPTM_CTL_GPTMSYNC_SYNCWT2_BOTH        ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPTM_CTL_GPTMSYNC_R_SYNCWT3_MASK      ((uint32_t)0x000C0000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT3_BIT       (18u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT3_NA        ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT3_TA        ((uint32_t)0x00040000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT3_TB        ((uint32_t)0x00080000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT3_BOTH      ((uint32_t)0x000C0000u)

#define GPTM_CTL_GPTMSYNC_SYNCWT3_MASK        ((uint32_t)0x00000003u)
#define GPTM_CTL_GPTMSYNC_SYNCWT3_NA          ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_SYNCWT3_TA          ((uint32_t)0x00000001u)
#define GPTM_CTL_GPTMSYNC_SYNCWT3_TB          ((uint32_t)0x00000002u)
#define GPTM_CTL_GPTMSYNC_SYNCWT3_BOTH        ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPTM_CTL_GPTMSYNC_R_SYNCWT4_MASK      ((uint32_t)0x0030000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT4_BIT       (20u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT4_NA        ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT4_TA        ((uint32_t)0x00100000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT4_TB        ((uint32_t)0x00200000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT4_BOTH      ((uint32_t)0x00300000u)

#define GPTM_CTL_GPTMSYNC_SYNCWT4_MASK        ((uint32_t)0x00000003u)
#define GPTM_CTL_GPTMSYNC_SYNCWT4_NA          ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_SYNCWT4_TA          ((uint32_t)0x00000001u)
#define GPTM_CTL_GPTMSYNC_SYNCWT4_TB          ((uint32_t)0x00000002u)
#define GPTM_CTL_GPTMSYNC_SYNCWT4_BOTH        ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPTM_CTL_GPTMSYNC_R_SYNCWT5_MASK      ((uint32_t)0x00C00000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT5_BIT       (22u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT5_NA        ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT5_TA        ((uint32_t)0x00400000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT5_TB        ((uint32_t)0x00800000u)
#define GPTM_CTL_GPTMSYNC_R_SYNCWT5_BOTH      ((uint32_t)0x00C00000u)

#define GPTM_CTL_GPTMSYNC_SYNCWT5_MASK        ((uint32_t)0x00000003u)
#define GPTM_CTL_GPTMSYNC_SYNCWT5_NA          ((uint32_t)0x00000000u)
#define GPTM_CTL_GPTMSYNC_SYNCWT5_TA          ((uint32_t)0x00000001u)
#define GPTM_CTL_GPTMSYNC_SYNCWT5_TB          ((uint32_t)0x00000002u)
#define GPTM_CTL_GPTMSYNC_SYNCWT5_BOTH        ((uint32_t)0x00000003u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_CONTROL_32_TIMER_REGISTERDEFINES_CONTROL_32_SYNC_H_ */
