/**
 *
 * @file SYSCTL_RegisterDefines_DCGC_Legacy.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_DCGC_LEGACY_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_DCGC_LEGACY_H_

#include <stdint.h>

/**********************************************************************************
************************************140 DCGC0 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_DCGC0_R_DCGCWDT0_MASK       ((uint32_t)0x00000008u)
#define SYSCTL_DCGC0_R_DCGCWDT0_BIT        (3u)
#define SYSCTL_DCGC0_R_DCGCWDT0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_R_DCGCWDT0_CLOCK         ((uint32_t)0x00000008u)

#define SYSCTL_DCGC0_DCGCWDT0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC0_DCGCWDT0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_DCGCWDT0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCHIB_MASK       ((uint32_t)0x00000040u)
#define SYSCTL_DCGC0_R_DCGCHIB_BIT        (6u)
#define SYSCTL_DCGC0_R_DCGCHIB_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_R_DCGCHIB_CLOCK         ((uint32_t)0x00000040u)

#define SYSCTL_DCGC0_DCGCHIB_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC0_DCGCHIB_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_DCGCHIB_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_MASK       ((uint32_t)0x00000030u)
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_BIT        (8u)
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_125K       ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_250K       ((uint32_t)0x00000010u)
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_500K       ((uint32_t)0x00000020u)
#define SYSCTL_DCGC0_R_DCGCMAXADC0SPD_1M         ((uint32_t)0x00000030u)

#define SYSCTL_DCGC0_DCGCMAXADC0SPD_MASK         ((uint32_t)0x00000003u)
#define SYSCTL_DCGC0_DCGCMAXADC0SPD_125K         ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_DCGCMAXADC0SPD_250K         ((uint32_t)0x00000001u)
#define SYSCTL_DCGC0_DCGCMAXADC0SPD_500K         ((uint32_t)0x00000002u)
#define SYSCTL_DCGC0_DCGCMAXADC0SPD_1M           ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_MASK       ((uint32_t)0x000000C0u)
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_BIT        (10u)
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_125K       ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_250K       ((uint32_t)0x00000040u)
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_500K       ((uint32_t)0x00000080u)
#define SYSCTL_DCGC0_R_DCGCMAXADC1SPD_1M         ((uint32_t)0x000000C0u)

#define SYSCTL_DCGC0_DCGCMAXADC1SPD_MASK         ((uint32_t)0x00000003u)
#define SYSCTL_DCGC0_DCGCMAXADC1SPD_125K         ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_DCGCMAXADC1SPD_250K         ((uint32_t)0x00000001u)
#define SYSCTL_DCGC0_DCGCMAXADC1SPD_500K         ((uint32_t)0x00000002u)
#define SYSCTL_DCGC0_DCGCMAXADC1SPD_1M           ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCADC0_MASK       ((uint32_t)0x00010000u)
#define SYSCTL_DCGC0_R_DCGCADC0_BIT        (16u)
#define SYSCTL_DCGC0_R_DCGCADC0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_R_DCGCADC0_CLOCK         ((uint32_t)0x00010000u)

#define SYSCTL_DCGC0_DCGCADC0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC0_DCGCADC0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_DCGCADC0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCADC1_MASK       ((uint32_t)0x00020000u)
#define SYSCTL_DCGC0_R_DCGCADC1_BIT        (17u)
#define SYSCTL_DCGC0_R_DCGCADC1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_R_DCGCADC1_CLOCK         ((uint32_t)0x00020000u)

#define SYSCTL_DCGC0_DCGCADC1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC0_DCGCADC1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_DCGCADC1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCPWM0_MASK       ((uint32_t)0x00100000u)
#define SYSCTL_DCGC0_R_DCGCPWM0_BIT        (20u)
#define SYSCTL_DCGC0_R_DCGCPWM0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_R_DCGCPWM0_CLOCK         ((uint32_t)0x00100000u)

#define SYSCTL_DCGC0_DCGCPWM0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC0_DCGCPWM0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_DCGCPWM0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCCAN0_MASK       ((uint32_t)0x01000000u)
#define SYSCTL_DCGC0_R_DCGCCAN0_BIT        (24u)
#define SYSCTL_DCGC0_R_DCGCCAN0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_R_DCGCCAN0_CLOCK         ((uint32_t)0x01000000u)

#define SYSCTL_DCGC0_DCGCCAN0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC0_DCGCCAN0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_DCGCCAN0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCCAN1_MASK       ((uint32_t)0x02000000u)
#define SYSCTL_DCGC0_R_DCGCCAN1_BIT        (25u)
#define SYSCTL_DCGC0_R_DCGCCAN1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_R_DCGCCAN1_CLOCK         ((uint32_t)0x02000000u)

#define SYSCTL_DCGC0_DCGCCAN1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC0_DCGCCAN1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_DCGCCAN1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC0_R_DCGCWDT1_MASK       ((uint32_t)0x10000000u)
#define SYSCTL_DCGC0_R_DCGCWDT1_BIT        (28u)
#define SYSCTL_DCGC0_R_DCGCWDT1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_R_DCGCWDT1_CLOCK         ((uint32_t)0x10000000u)

#define SYSCTL_DCGC0_DCGCWDT1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC0_DCGCWDT1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC0_DCGCWDT1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/**********************************************************************************
************************************141 DCGC1 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_DCGC1_R_DCGCUART0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_R_DCGCUART0_BIT        (0u)
#define SYSCTL_DCGC1_R_DCGCUART0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_R_DCGCUART0_CLOCK         ((uint32_t)0x00000001u)

#define SYSCTL_DCGC1_DCGCUART0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_DCGCUART0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_DCGCUART0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCUART1_MASK       ((uint32_t)0x00000002u)
#define SYSCTL_DCGC1_R_DCGCUART1_BIT        (1u)
#define SYSCTL_DCGC1_R_DCGCUART1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_R_DCGCUART1_CLOCK         ((uint32_t)0x00000002u)

#define SYSCTL_DCGC1_DCGCUART1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_DCGCUART1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_DCGCUART1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCUART2_MASK       ((uint32_t)0x00000004u)
#define SYSCTL_DCGC1_R_DCGCUART2_BIT        (2u)
#define SYSCTL_DCGC1_R_DCGCUART2_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_R_DCGCUART2_CLOCK         ((uint32_t)0x00000004u)

#define SYSCTL_DCGC1_DCGCUART2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_DCGCUART2_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_DCGCUART2_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCSSI0_MASK       ((uint32_t)0x00000010u)
#define SYSCTL_DCGC1_R_DCGCSSI0_BIT        (4u)
#define SYSCTL_DCGC1_R_DCGCSSI0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_R_DCGCSSI0_CLOCK         ((uint32_t)0x00000010u)

#define SYSCTL_DCGC1_DCGCSSI0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_DCGCSSI0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_DCGCSSI0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCSSI1_MASK       ((uint32_t)0x00000020u)
#define SYSCTL_DCGC1_R_DCGCSSI1_BIT        (5u)
#define SYSCTL_DCGC1_R_DCGCSSI1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_R_DCGCSSI1_CLOCK         ((uint32_t)0x00000010u)

#define SYSCTL_DCGC1_DCGCSSI1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_DCGCSSI1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_DCGCSSI1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCQEI0_MASK       ((uint32_t)0x00000100u)
#define SYSCTL_DCGC1_R_DCGCQEI0_BIT        (8u)
#define SYSCTL_DCGC1_R_DCGCQEI0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_R_DCGCQEI0_CLOCK         ((uint32_t)0x00000100u)

#define SYSCTL_DCGC1_DCGCQEI0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_DCGCQEI0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_DCGCQEI0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCQEI1_MASK       ((uint32_t)0x00000200u)
#define SYSCTL_DCGC1_R_DCGCQEI1_BIT        (9u)
#define SYSCTL_DCGC1_R_DCGCQEI1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_R_DCGCQEI1_CLOCK         ((uint32_t)0x00000200u)

#define SYSCTL_DCGC1_DCGCQEI1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_DCGCQEI1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_DCGCQEI1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCI2C0_MASK       ((uint32_t)0x00001000u)
#define SYSCTL_DCGC1_R_DCGCI2C0_BIT        (12u)
#define SYSCTL_DCGC1_R_DCGCI2C0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_R_DCGCI2C0_CLOCK         ((uint32_t)0x00001000u)

#define SYSCTL_DCGC1_DCGCI2C0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_DCGCI2C0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_DCGCI2C0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCI2C1_MASK       ((uint32_t)0x00004000u)
#define SYSCTL_DCGC1_R_DCGCI2C1_BIT        (14u)
#define SYSCTL_DCGC1_R_DCGCI2C1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_R_DCGCI2C1_CLOCK         ((uint32_t)0x00004000u)

#define SYSCTL_DCGC1_DCGCI2C1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_DCGCI2C1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_DCGCI2C1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCTIMER0_MASK       ((uint32_t)0x00010000u)
#define SYSCTL_DCGC1_R_DCGCTIMER0_BIT        (16u)
#define SYSCTL_DCGC1_R_DCGCTIMER0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_R_DCGCTIMER0_CLOCK         ((uint32_t)0x00010000u)

#define SYSCTL_DCGC1_DCGCTIMER0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_DCGCTIMER0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_DCGCTIMER0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCTIMER1_MASK       ((uint32_t)0x00020000u)
#define SYSCTL_DCGC1_R_DCGCTIMER1_BIT        (17u)
#define SYSCTL_DCGC1_R_DCGCTIMER1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_R_DCGCTIMER1_CLOCK         ((uint32_t)0x00020000u)

#define SYSCTL_DCGC1_DCGCTIMER1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_DCGCTIMER1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_DCGCTIMER1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCTIMER2_MASK       ((uint32_t)0x00040000u)
#define SYSCTL_DCGC1_R_DCGCTIMER2_BIT        (18u)
#define SYSCTL_DCGC1_R_DCGCTIMER2_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_R_DCGCTIMER2_CLOCK         ((uint32_t)0x00040000u)

#define SYSCTL_DCGC1_DCGCTIMER2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_DCGCTIMER2_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_DCGCTIMER2_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCTIMER3_MASK       ((uint32_t)0x00080000u)
#define SYSCTL_DCGC1_R_DCGCTIMER3_BIT        (19u)
#define SYSCTL_DCGC1_R_DCGCTIMER3_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_R_DCGCTIMER3_CLOCK         ((uint32_t)0x00080000u)

#define SYSCTL_DCGC1_DCGCTIMER3_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_DCGCTIMER3_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_DCGCTIMER3_CLOCK         ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define SYSCTL_DCGC1_R_DCGCCOMP0_MASK       ((uint32_t)0x01000000u)
#define SYSCTL_DCGC1_R_DCGCCOMP0_BIT        (24u)
#define SYSCTL_DCGC1_R_DCGCCOMP0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_R_DCGCCOMP0_CLOCK         ((uint32_t)0x01000000u)

#define SYSCTL_DCGC1_DCGCCOMP0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_DCGCCOMP0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_DCGCCOMP0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC1_R_DCGCCOMP1_MASK       ((uint32_t)0x02000000u)
#define SYSCTL_DCGC1_R_DCGCCOMP1_BIT        (25u)
#define SYSCTL_DCGC1_R_DCGCCOMP1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_R_DCGCCOMP1_CLOCK         ((uint32_t)0x02000000u)

#define SYSCTL_DCGC1_DCGCCOMP1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC1_DCGCCOMP1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC1_DCGCCOMP1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/**********************************************************************************
************************************142 DCGC2 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_DCGC2_R_DCGCGPIOA_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC2_R_DCGCGPIOA_BIT        (0u)
#define SYSCTL_DCGC2_R_DCGCGPIOA_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_R_DCGCGPIOA_CLOCK         ((uint32_t)0x00000001u)

#define SYSCTL_DCGC2_DCGCGPIOA_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC2_DCGCGPIOA_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_DCGCGPIOA_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC2_R_DCGCGPIOB_MASK       ((uint32_t)0x00000002u)
#define SYSCTL_DCGC2_R_DCGCGPIOB_BIT        (1u)
#define SYSCTL_DCGC2_R_DCGCGPIOB_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_R_DCGCGPIOB_CLOCK         ((uint32_t)0x00000002u)

#define SYSCTL_DCGC2_DCGCGPIOB_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC2_DCGCGPIOB_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_DCGCGPIOB_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC2_R_DCGCGPIOC_MASK       ((uint32_t)0x00000004u)
#define SYSCTL_DCGC2_R_DCGCGPIOC_BIT        (2u)
#define SYSCTL_DCGC2_R_DCGCGPIOC_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_R_DCGCGPIOC_CLOCK         ((uint32_t)0x00000004u)

#define SYSCTL_DCGC2_DCGCGPIOC_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC2_DCGCGPIOC_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_DCGCGPIOC_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC2_R_DCGCGPIOD_MASK       ((uint32_t)0x00000008u)
#define SYSCTL_DCGC2_R_DCGCGPIOD_BIT        (3u)
#define SYSCTL_DCGC2_R_DCGCGPIOD_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_R_DCGCGPIOD_CLOCK         ((uint32_t)0x00000008u)

#define SYSCTL_DCGC2_DCGCGPIOD_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC2_DCGCGPIOD_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_DCGCGPIOD_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC2_R_DCGCGPIOE_MASK       ((uint32_t)0x00000010u)
#define SYSCTL_DCGC2_R_DCGCGPIOE_BIT        (4u)
#define SYSCTL_DCGC2_R_DCGCGPIOE_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_R_DCGCGPIOE_CLOCK         ((uint32_t)0x00000010u)

#define SYSCTL_DCGC2_DCGCGPIOE_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC2_DCGCGPIOE_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_DCGCGPIOE_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC2_R_DCGCGPIOF_MASK       ((uint32_t)0x00000020u)
#define SYSCTL_DCGC2_R_DCGCGPIOF_BIT        (5u)
#define SYSCTL_DCGC2_R_DCGCGPIOF_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_R_DCGCGPIOF_CLOCK         ((uint32_t)0x00000020u)

#define SYSCTL_DCGC2_DCGCGPIOF_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC2_DCGCGPIOF_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_DCGCGPIOF_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC2_R_DCGCUDMA_MASK       ((uint32_t)0x00002000u)
#define SYSCTL_DCGC2_R_DCGCUDMA_BIT        (13u)
#define SYSCTL_DCGC2_R_DCGCUDMA_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_R_DCGCUDMA_CLOCK         ((uint32_t)0x00002000u)

#define SYSCTL_DCGC2_DCGCUDMA_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC2_DCGCUDMA_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_DCGCUDMA_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DCGC2_R_DCGCUSB0_MASK       ((uint32_t)0x00010000u)
#define SYSCTL_DCGC2_R_DCGCUSB0_BIT        (16u)
#define SYSCTL_DCGC2_R_DCGCUSB0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_R_DCGCUSB0_CLOCK         ((uint32_t)0x00010000u)

#define SYSCTL_DCGC2_DCGCUSB0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DCGC2_DCGCUSB0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_DCGC2_DCGCUSB0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/




#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_DCGC_LEGACY_H_ */
