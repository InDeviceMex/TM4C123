/**
 *
 * @file SYSCTL_RegisterDefines_RCGC_Legacy.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_RCGC_LEGACY_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_RCGC_LEGACY_H_

#include <xUtils/Standard/Standard.h>

/**********************************************************************************
************************************134 RCGC0 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_RCGC0_R_RCGCWDT0_MASK       ((uint32_t)0x00000008U)
#define SYSCTL_RCGC0_R_RCGCWDT0_BIT        (3U)
#define SYSCTL_RCGC0_R_RCGCWDT0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_R_RCGCWDT0_CLOCK         ((uint32_t)0x00000008U)

#define SYSCTL_RCGC0_RCGCWDT0_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC0_RCGCWDT0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_RCGCWDT0_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCHIB_MASK       ((uint32_t)0x00000040U)
#define SYSCTL_RCGC0_R_RCGCHIB_BIT        (6U)
#define SYSCTL_RCGC0_R_RCGCHIB_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_R_RCGCHIB_CLOCK         ((uint32_t)0x00000040U)

#define SYSCTL_RCGC0_RCGCHIB_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC0_RCGCHIB_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_RCGCHIB_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_MASK       ((uint32_t)0x00000030U)
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_BIT        (8U)
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_125K       ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_250K       ((uint32_t)0x00000010U)
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_500K       ((uint32_t)0x00000020U)
#define SYSCTL_RCGC0_R_RCGCMAXADC0SPD_1M         ((uint32_t)0x00000030U)

#define SYSCTL_RCGC0_RCGCMAXADC0SPD_MASK         ((uint32_t)0x00000003U)
#define SYSCTL_RCGC0_RCGCMAXADC0SPD_125K         ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_RCGCMAXADC0SPD_250K         ((uint32_t)0x00000001U)
#define SYSCTL_RCGC0_RCGCMAXADC0SPD_500K         ((uint32_t)0x00000002U)
#define SYSCTL_RCGC0_RCGCMAXADC0SPD_1M           ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_MASK       ((uint32_t)0x000000C0U)
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_BIT        (10U)
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_125K       ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_250K       ((uint32_t)0x00000040U)
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_500K       ((uint32_t)0x00000080U)
#define SYSCTL_RCGC0_R_RCGCMAXADC1SPD_1M         ((uint32_t)0x000000C0U)

#define SYSCTL_RCGC0_RCGCMAXADC1SPD_MASK         ((uint32_t)0x00000003U)
#define SYSCTL_RCGC0_RCGCMAXADC1SPD_125K         ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_RCGCMAXADC1SPD_250K         ((uint32_t)0x00000001U)
#define SYSCTL_RCGC0_RCGCMAXADC1SPD_500K         ((uint32_t)0x00000002U)
#define SYSCTL_RCGC0_RCGCMAXADC1SPD_1M           ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCADC0_MASK       ((uint32_t)0x00010000U)
#define SYSCTL_RCGC0_R_RCGCADC0_BIT        (16U)
#define SYSCTL_RCGC0_R_RCGCADC0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_R_RCGCADC0_CLOCK         ((uint32_t)0x00010000U)

#define SYSCTL_RCGC0_RCGCADC0_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC0_RCGCADC0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_RCGCADC0_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCADC1_MASK       ((uint32_t)0x00020000U)
#define SYSCTL_RCGC0_R_RCGCADC1_BIT        (17U)
#define SYSCTL_RCGC0_R_RCGCADC1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_R_RCGCADC1_CLOCK         ((uint32_t)0x00020000U)

#define SYSCTL_RCGC0_RCGCADC1_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC0_RCGCADC1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_RCGCADC1_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCPWM0_MASK       ((uint32_t)0x00100000U)
#define SYSCTL_RCGC0_R_RCGCPWM0_BIT        (20U)
#define SYSCTL_RCGC0_R_RCGCPWM0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_R_RCGCPWM0_CLOCK         ((uint32_t)0x00100000U)

#define SYSCTL_RCGC0_RCGCPWM0_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC0_RCGCPWM0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_RCGCPWM0_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCCAN0_MASK       ((uint32_t)0x01000000U)
#define SYSCTL_RCGC0_R_RCGCCAN0_BIT        (24U)
#define SYSCTL_RCGC0_R_RCGCCAN0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_R_RCGCCAN0_CLOCK         ((uint32_t)0x01000000U)

#define SYSCTL_RCGC0_RCGCCAN0_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC0_RCGCCAN0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_RCGCCAN0_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCCAN1_MASK       ((uint32_t)0x02000000U)
#define SYSCTL_RCGC0_R_RCGCCAN1_BIT        (25U)
#define SYSCTL_RCGC0_R_RCGCCAN1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_R_RCGCCAN1_CLOCK         ((uint32_t)0x02000000U)

#define SYSCTL_RCGC0_RCGCCAN1_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC0_RCGCCAN1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_RCGCCAN1_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC0_R_RCGCWDT1_MASK       ((uint32_t)0x10000000U)
#define SYSCTL_RCGC0_R_RCGCWDT1_BIT        (28U)
#define SYSCTL_RCGC0_R_RCGCWDT1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_R_RCGCWDT1_CLOCK         ((uint32_t)0x10000000U)

#define SYSCTL_RCGC0_RCGCWDT1_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC0_RCGCWDT1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC0_RCGCWDT1_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/**********************************************************************************
************************************135 RCGC1 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_RCGC1_R_RCGCUART0_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_R_RCGCUART0_BIT        (0U)
#define SYSCTL_RCGC1_R_RCGCUART0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_R_RCGCUART0_CLOCK         ((uint32_t)0x00000001U)

#define SYSCTL_RCGC1_RCGCUART0_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_RCGCUART0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_RCGCUART0_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCUART1_MASK       ((uint32_t)0x00000002U)
#define SYSCTL_RCGC1_R_RCGCUART1_BIT        (1U)
#define SYSCTL_RCGC1_R_RCGCUART1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_R_RCGCUART1_CLOCK         ((uint32_t)0x00000002U)

#define SYSCTL_RCGC1_RCGCUART1_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_RCGCUART1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_RCGCUART1_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCUART2_MASK       ((uint32_t)0x00000004U)
#define SYSCTL_RCGC1_R_RCGCUART2_BIT        (2U)
#define SYSCTL_RCGC1_R_RCGCUART2_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_R_RCGCUART2_CLOCK         ((uint32_t)0x00000004U)

#define SYSCTL_RCGC1_RCGCUART2_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_RCGCUART2_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_RCGCUART2_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCSSI0_MASK       ((uint32_t)0x00000010U)
#define SYSCTL_RCGC1_R_RCGCSSI0_BIT        (4U)
#define SYSCTL_RCGC1_R_RCGCSSI0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_R_RCGCSSI0_CLOCK         ((uint32_t)0x00000010U)

#define SYSCTL_RCGC1_RCGCSSI0_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_RCGCSSI0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_RCGCSSI0_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCSSI1_MASK       ((uint32_t)0x00000020U)
#define SYSCTL_RCGC1_R_RCGCSSI1_BIT        (5U)
#define SYSCTL_RCGC1_R_RCGCSSI1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_R_RCGCSSI1_CLOCK         ((uint32_t)0x00000010U)

#define SYSCTL_RCGC1_RCGCSSI1_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_RCGCSSI1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_RCGCSSI1_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCQEI0_MASK       ((uint32_t)0x00000100U)
#define SYSCTL_RCGC1_R_RCGCQEI0_BIT        (8U)
#define SYSCTL_RCGC1_R_RCGCQEI0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_R_RCGCQEI0_CLOCK         ((uint32_t)0x00000100U)

#define SYSCTL_RCGC1_RCGCQEI0_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_RCGCQEI0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_RCGCQEI0_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCQEI1_MASK       ((uint32_t)0x00000200U)
#define SYSCTL_RCGC1_R_RCGCQEI1_BIT        (9U)
#define SYSCTL_RCGC1_R_RCGCQEI1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_R_RCGCQEI1_CLOCK         ((uint32_t)0x00000200U)

#define SYSCTL_RCGC1_RCGCQEI1_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_RCGCQEI1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_RCGCQEI1_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCI2C0_MASK       ((uint32_t)0x00001000U)
#define SYSCTL_RCGC1_R_RCGCI2C0_BIT        (12U)
#define SYSCTL_RCGC1_R_RCGCI2C0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_R_RCGCI2C0_CLOCK         ((uint32_t)0x00001000U)

#define SYSCTL_RCGC1_RCGCI2C0_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_RCGCI2C0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_RCGCI2C0_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCI2C1_MASK       ((uint32_t)0x00004000U)
#define SYSCTL_RCGC1_R_RCGCI2C1_BIT        (14U)
#define SYSCTL_RCGC1_R_RCGCI2C1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_R_RCGCI2C1_CLOCK         ((uint32_t)0x00004000U)

#define SYSCTL_RCGC1_RCGCI2C1_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_RCGCI2C1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_RCGCI2C1_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCTIMER0_MASK       ((uint32_t)0x00010000U)
#define SYSCTL_RCGC1_R_RCGCTIMER0_BIT        (16U)
#define SYSCTL_RCGC1_R_RCGCTIMER0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_R_RCGCTIMER0_CLOCK         ((uint32_t)0x00010000U)

#define SYSCTL_RCGC1_RCGCTIMER0_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_RCGCTIMER0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_RCGCTIMER0_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCTIMER1_MASK       ((uint32_t)0x00020000U)
#define SYSCTL_RCGC1_R_RCGCTIMER1_BIT        (17U)
#define SYSCTL_RCGC1_R_RCGCTIMER1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_R_RCGCTIMER1_CLOCK         ((uint32_t)0x00020000U)

#define SYSCTL_RCGC1_RCGCTIMER1_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_RCGCTIMER1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_RCGCTIMER1_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCTIMER2_MASK       ((uint32_t)0x00040000U)
#define SYSCTL_RCGC1_R_RCGCTIMER2_BIT        (18U)
#define SYSCTL_RCGC1_R_RCGCTIMER2_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_R_RCGCTIMER2_CLOCK         ((uint32_t)0x00040000U)

#define SYSCTL_RCGC1_RCGCTIMER2_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_RCGCTIMER2_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_RCGCTIMER2_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCTIMER3_MASK       ((uint32_t)0x00080000U)
#define SYSCTL_RCGC1_R_RCGCTIMER3_BIT        (19U)
#define SYSCTL_RCGC1_R_RCGCTIMER3_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_R_RCGCTIMER3_CLOCK         ((uint32_t)0x00080000U)

#define SYSCTL_RCGC1_RCGCTIMER3_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_RCGCTIMER3_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_RCGCTIMER3_CLOCK         ((uint32_t)0x00000001U)
/*----------*/


/*----------*/
#define SYSCTL_RCGC1_R_RCGCCOMP0_MASK       ((uint32_t)0x01000000U)
#define SYSCTL_RCGC1_R_RCGCCOMP0_BIT        (24U)
#define SYSCTL_RCGC1_R_RCGCCOMP0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_R_RCGCCOMP0_CLOCK         ((uint32_t)0x01000000U)

#define SYSCTL_RCGC1_RCGCCOMP0_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_RCGCCOMP0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_RCGCCOMP0_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC1_R_RCGCCOMP1_MASK       ((uint32_t)0x02000000U)
#define SYSCTL_RCGC1_R_RCGCCOMP1_BIT        (25U)
#define SYSCTL_RCGC1_R_RCGCCOMP1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_R_RCGCCOMP1_CLOCK         ((uint32_t)0x02000000U)

#define SYSCTL_RCGC1_RCGCCOMP1_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC1_RCGCCOMP1_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC1_RCGCCOMP1_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/**********************************************************************************
************************************136 RCGC2 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_RCGC2_R_RCGCGPIOA_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC2_R_RCGCGPIOA_BIT        (0U)
#define SYSCTL_RCGC2_R_RCGCGPIOA_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_R_RCGCGPIOA_CLOCK         ((uint32_t)0x00000001U)

#define SYSCTL_RCGC2_RCGCGPIOA_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC2_RCGCGPIOA_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_RCGCGPIOA_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC2_R_RCGCGPIOB_MASK       ((uint32_t)0x00000002U)
#define SYSCTL_RCGC2_R_RCGCGPIOB_BIT        (1U)
#define SYSCTL_RCGC2_R_RCGCGPIOB_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_R_RCGCGPIOB_CLOCK         ((uint32_t)0x00000002U)

#define SYSCTL_RCGC2_RCGCGPIOB_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC2_RCGCGPIOB_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_RCGCGPIOB_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC2_R_RCGCGPIOC_MASK       ((uint32_t)0x00000004U)
#define SYSCTL_RCGC2_R_RCGCGPIOC_BIT        (2U)
#define SYSCTL_RCGC2_R_RCGCGPIOC_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_R_RCGCGPIOC_CLOCK         ((uint32_t)0x00000004U)

#define SYSCTL_RCGC2_RCGCGPIOC_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC2_RCGCGPIOC_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_RCGCGPIOC_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC2_R_RCGCGPIOD_MASK       ((uint32_t)0x00000008U)
#define SYSCTL_RCGC2_R_RCGCGPIOD_BIT        (3U)
#define SYSCTL_RCGC2_R_RCGCGPIOD_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_R_RCGCGPIOD_CLOCK         ((uint32_t)0x00000008U)

#define SYSCTL_RCGC2_RCGCGPIOD_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC2_RCGCGPIOD_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_RCGCGPIOD_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC2_R_RCGCGPIOE_MASK       ((uint32_t)0x00000010U)
#define SYSCTL_RCGC2_R_RCGCGPIOE_BIT        (4U)
#define SYSCTL_RCGC2_R_RCGCGPIOE_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_R_RCGCGPIOE_CLOCK         ((uint32_t)0x00000010U)

#define SYSCTL_RCGC2_RCGCGPIOE_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC2_RCGCGPIOE_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_RCGCGPIOE_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC2_R_RCGCGPIOF_MASK       ((uint32_t)0x00000020U)
#define SYSCTL_RCGC2_R_RCGCGPIOF_BIT        (5U)
#define SYSCTL_RCGC2_R_RCGCGPIOF_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_R_RCGCGPIOF_CLOCK         ((uint32_t)0x00000020U)

#define SYSCTL_RCGC2_RCGCGPIOF_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC2_RCGCGPIOF_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_RCGCGPIOF_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC2_R_RCGCUDMA_MASK       ((uint32_t)0x00002000U)
#define SYSCTL_RCGC2_R_RCGCUDMA_BIT        (13U)
#define SYSCTL_RCGC2_R_RCGCUDMA_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_R_RCGCUDMA_CLOCK         ((uint32_t)0x00002000U)

#define SYSCTL_RCGC2_RCGCUDMA_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC2_RCGCUDMA_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_RCGCUDMA_CLOCK         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define SYSCTL_RCGC2_R_RCGCUSB0_MASK       ((uint32_t)0x00010000U)
#define SYSCTL_RCGC2_R_RCGCUSB0_BIT        (16U)
#define SYSCTL_RCGC2_R_RCGCUSB0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_R_RCGCUSB0_CLOCK         ((uint32_t)0x00010000U)

#define SYSCTL_RCGC2_RCGCUSB0_MASK       ((uint32_t)0x00000001U)
#define SYSCTL_RCGC2_RCGCUSB0_UNCLOCK        ((uint32_t)0x00000000U)
#define SYSCTL_RCGC2_RCGCUSB0_CLOCK         ((uint32_t)0x00000001U)
/*----------*/





#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_RCGC_LEGACY_H_ */
