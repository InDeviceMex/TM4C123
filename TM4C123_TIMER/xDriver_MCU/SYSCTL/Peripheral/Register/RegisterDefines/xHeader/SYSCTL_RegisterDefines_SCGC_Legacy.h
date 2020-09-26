/**
 *
 * @file SYSCTL_RegisterDefines_SCGC_Legacy.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_SCGC_LEGACY_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_SCGC_LEGACY_H_

#include <xUtils/Standard/Standard.h>

/**********************************************************************************
************************************137 SCGC0 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_SCGC0_R_SCGCWDT0_MASK       ((uint32_t)0x00000008u)
#define SYSCTL_SCGC0_R_SCGCWDT0_BIT        (3u)
#define SYSCTL_SCGC0_R_SCGCWDT0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_R_SCGCWDT0_CLOCK         ((uint32_t)0x00000008u)

#define SYSCTL_SCGC0_SCGCWDT0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC0_SCGCWDT0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_SCGCWDT0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCHIB_MASK       ((uint32_t)0x00000040u)
#define SYSCTL_SCGC0_R_SCGCHIB_BIT        (6u)
#define SYSCTL_SCGC0_R_SCGCHIB_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_R_SCGCHIB_CLOCK         ((uint32_t)0x00000040u)

#define SYSCTL_SCGC0_SCGCHIB_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC0_SCGCHIB_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_SCGCHIB_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_MASK       ((uint32_t)0x00000030u)
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_BIT        (8u)
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_125K       ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_250K       ((uint32_t)0x00000010u)
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_500K       ((uint32_t)0x00000020u)
#define SYSCTL_SCGC0_R_SCGCMAXADC0SPD_1M         ((uint32_t)0x00000030u)

#define SYSCTL_SCGC0_SCGCMAXADC0SPD_MASK         ((uint32_t)0x00000003u)
#define SYSCTL_SCGC0_SCGCMAXADC0SPD_125K         ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_SCGCMAXADC0SPD_250K         ((uint32_t)0x00000001u)
#define SYSCTL_SCGC0_SCGCMAXADC0SPD_500K         ((uint32_t)0x00000002u)
#define SYSCTL_SCGC0_SCGCMAXADC0SPD_1M           ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_MASK       ((uint32_t)0x000000C0u)
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_BIT        (10u)
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_125K       ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_250K       ((uint32_t)0x00000040u)
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_500K       ((uint32_t)0x00000080u)
#define SYSCTL_SCGC0_R_SCGCMAXADC1SPD_1M         ((uint32_t)0x000000C0u)

#define SYSCTL_SCGC0_SCGCMAXADC1SPD_MASK         ((uint32_t)0x00000003u)
#define SYSCTL_SCGC0_SCGCMAXADC1SPD_125K         ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_SCGCMAXADC1SPD_250K         ((uint32_t)0x00000001u)
#define SYSCTL_SCGC0_SCGCMAXADC1SPD_500K         ((uint32_t)0x00000002u)
#define SYSCTL_SCGC0_SCGCMAXADC1SPD_1M           ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCADC0_MASK       ((uint32_t)0x00010000u)
#define SYSCTL_SCGC0_R_SCGCADC0_BIT        (16u)
#define SYSCTL_SCGC0_R_SCGCADC0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_R_SCGCADC0_CLOCK         ((uint32_t)0x00010000u)

#define SYSCTL_SCGC0_SCGCADC0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC0_SCGCADC0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_SCGCADC0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCADC1_MASK       ((uint32_t)0x00020000u)
#define SYSCTL_SCGC0_R_SCGCADC1_BIT        (17u)
#define SYSCTL_SCGC0_R_SCGCADC1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_R_SCGCADC1_CLOCK         ((uint32_t)0x00020000u)

#define SYSCTL_SCGC0_SCGCADC1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC0_SCGCADC1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_SCGCADC1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCPWM0_MASK       ((uint32_t)0x00100000u)
#define SYSCTL_SCGC0_R_SCGCPWM0_BIT        (20u)
#define SYSCTL_SCGC0_R_SCGCPWM0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_R_SCGCPWM0_CLOCK         ((uint32_t)0x00100000u)

#define SYSCTL_SCGC0_SCGCPWM0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC0_SCGCPWM0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_SCGCPWM0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCCAN0_MASK       ((uint32_t)0x01000000u)
#define SYSCTL_SCGC0_R_SCGCCAN0_BIT        (24u)
#define SYSCTL_SCGC0_R_SCGCCAN0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_R_SCGCCAN0_CLOCK         ((uint32_t)0x01000000u)

#define SYSCTL_SCGC0_SCGCCAN0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC0_SCGCCAN0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_SCGCCAN0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCCAN1_MASK       ((uint32_t)0x02000000u)
#define SYSCTL_SCGC0_R_SCGCCAN1_BIT        (25u)
#define SYSCTL_SCGC0_R_SCGCCAN1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_R_SCGCCAN1_CLOCK         ((uint32_t)0x02000000u)

#define SYSCTL_SCGC0_SCGCCAN1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC0_SCGCCAN1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_SCGCCAN1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC0_R_SCGCWDT1_MASK       ((uint32_t)0x10000000u)
#define SYSCTL_SCGC0_R_SCGCWDT1_BIT        (28u)
#define SYSCTL_SCGC0_R_SCGCWDT1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_R_SCGCWDT1_CLOCK         ((uint32_t)0x10000000u)

#define SYSCTL_SCGC0_SCGCWDT1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC0_SCGCWDT1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC0_SCGCWDT1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/**********************************************************************************
************************************138 SCGC1 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_SCGC1_R_SCGCUART0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_R_SCGCUART0_BIT        (0u)
#define SYSCTL_SCGC1_R_SCGCUART0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_R_SCGCUART0_CLOCK         ((uint32_t)0x00000001u)

#define SYSCTL_SCGC1_SCGCUART0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_SCGCUART0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_SCGCUART0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCUART1_MASK       ((uint32_t)0x00000002u)
#define SYSCTL_SCGC1_R_SCGCUART1_BIT        (1u)
#define SYSCTL_SCGC1_R_SCGCUART1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_R_SCGCUART1_CLOCK         ((uint32_t)0x00000002u)

#define SYSCTL_SCGC1_SCGCUART1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_SCGCUART1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_SCGCUART1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCUART2_MASK       ((uint32_t)0x00000004u)
#define SYSCTL_SCGC1_R_SCGCUART2_BIT        (2u)
#define SYSCTL_SCGC1_R_SCGCUART2_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_R_SCGCUART2_CLOCK         ((uint32_t)0x00000004u)

#define SYSCTL_SCGC1_SCGCUART2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_SCGCUART2_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_SCGCUART2_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCSSI0_MASK       ((uint32_t)0x00000010u)
#define SYSCTL_SCGC1_R_SCGCSSI0_BIT        (4u)
#define SYSCTL_SCGC1_R_SCGCSSI0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_R_SCGCSSI0_CLOCK         ((uint32_t)0x00000010u)

#define SYSCTL_SCGC1_SCGCSSI0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_SCGCSSI0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_SCGCSSI0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCSSI1_MASK       ((uint32_t)0x00000020u)
#define SYSCTL_SCGC1_R_SCGCSSI1_BIT        (5u)
#define SYSCTL_SCGC1_R_SCGCSSI1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_R_SCGCSSI1_CLOCK         ((uint32_t)0x00000010u)

#define SYSCTL_SCGC1_SCGCSSI1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_SCGCSSI1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_SCGCSSI1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCQEI0_MASK       ((uint32_t)0x00000100u)
#define SYSCTL_SCGC1_R_SCGCQEI0_BIT        (8u)
#define SYSCTL_SCGC1_R_SCGCQEI0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_R_SCGCQEI0_CLOCK         ((uint32_t)0x00000100u)

#define SYSCTL_SCGC1_SCGCQEI0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_SCGCQEI0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_SCGCQEI0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCQEI1_MASK       ((uint32_t)0x00000200u)
#define SYSCTL_SCGC1_R_SCGCQEI1_BIT        (9u)
#define SYSCTL_SCGC1_R_SCGCQEI1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_R_SCGCQEI1_CLOCK         ((uint32_t)0x00000200u)

#define SYSCTL_SCGC1_SCGCQEI1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_SCGCQEI1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_SCGCQEI1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCI2C0_MASK       ((uint32_t)0x00001000u)
#define SYSCTL_SCGC1_R_SCGCI2C0_BIT        (12u)
#define SYSCTL_SCGC1_R_SCGCI2C0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_R_SCGCI2C0_CLOCK         ((uint32_t)0x00001000u)

#define SYSCTL_SCGC1_SCGCI2C0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_SCGCI2C0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_SCGCI2C0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCI2C1_MASK       ((uint32_t)0x00004000u)
#define SYSCTL_SCGC1_R_SCGCI2C1_BIT        (14u)
#define SYSCTL_SCGC1_R_SCGCI2C1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_R_SCGCI2C1_CLOCK         ((uint32_t)0x00004000u)

#define SYSCTL_SCGC1_SCGCI2C1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_SCGCI2C1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_SCGCI2C1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCTIMER0_MASK       ((uint32_t)0x00010000u)
#define SYSCTL_SCGC1_R_SCGCTIMER0_BIT        (16u)
#define SYSCTL_SCGC1_R_SCGCTIMER0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_R_SCGCTIMER0_CLOCK         ((uint32_t)0x00010000u)

#define SYSCTL_SCGC1_SCGCTIMER0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_SCGCTIMER0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_SCGCTIMER0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCTIMER1_MASK       ((uint32_t)0x00020000u)
#define SYSCTL_SCGC1_R_SCGCTIMER1_BIT        (17u)
#define SYSCTL_SCGC1_R_SCGCTIMER1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_R_SCGCTIMER1_CLOCK         ((uint32_t)0x00020000u)

#define SYSCTL_SCGC1_SCGCTIMER1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_SCGCTIMER1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_SCGCTIMER1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCTIMER2_MASK       ((uint32_t)0x00040000u)
#define SYSCTL_SCGC1_R_SCGCTIMER2_BIT        (18u)
#define SYSCTL_SCGC1_R_SCGCTIMER2_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_R_SCGCTIMER2_CLOCK         ((uint32_t)0x00040000u)

#define SYSCTL_SCGC1_SCGCTIMER2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_SCGCTIMER2_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_SCGCTIMER2_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCTIMER3_MASK       ((uint32_t)0x00080000u)
#define SYSCTL_SCGC1_R_SCGCTIMER3_BIT        (19u)
#define SYSCTL_SCGC1_R_SCGCTIMER3_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_R_SCGCTIMER3_CLOCK         ((uint32_t)0x00080000u)

#define SYSCTL_SCGC1_SCGCTIMER3_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_SCGCTIMER3_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_SCGCTIMER3_CLOCK         ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define SYSCTL_SCGC1_R_SCGCCOMP0_MASK       ((uint32_t)0x01000000u)
#define SYSCTL_SCGC1_R_SCGCCOMP0_BIT        (24u)
#define SYSCTL_SCGC1_R_SCGCCOMP0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_R_SCGCCOMP0_CLOCK         ((uint32_t)0x01000000u)

#define SYSCTL_SCGC1_SCGCCOMP0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_SCGCCOMP0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_SCGCCOMP0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC1_R_SCGCCOMP1_MASK       ((uint32_t)0x02000000u)
#define SYSCTL_SCGC1_R_SCGCCOMP1_BIT        (25u)
#define SYSCTL_SCGC1_R_SCGCCOMP1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_R_SCGCCOMP1_CLOCK         ((uint32_t)0x02000000u)

#define SYSCTL_SCGC1_SCGCCOMP1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC1_SCGCCOMP1_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC1_SCGCCOMP1_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/**********************************************************************************
************************************139 SCGC2 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_SCGC2_R_SCGCGPIOA_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC2_R_SCGCGPIOA_BIT        (0u)
#define SYSCTL_SCGC2_R_SCGCGPIOA_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_R_SCGCGPIOA_CLOCK         ((uint32_t)0x00000001u)

#define SYSCTL_SCGC2_SCGCGPIOA_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC2_SCGCGPIOA_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_SCGCGPIOA_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC2_R_SCGCGPIOB_MASK       ((uint32_t)0x00000002u)
#define SYSCTL_SCGC2_R_SCGCGPIOB_BIT        (1u)
#define SYSCTL_SCGC2_R_SCGCGPIOB_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_R_SCGCGPIOB_CLOCK         ((uint32_t)0x00000002u)

#define SYSCTL_SCGC2_SCGCGPIOB_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC2_SCGCGPIOB_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_SCGCGPIOB_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC2_R_SCGCGPIOC_MASK       ((uint32_t)0x00000004u)
#define SYSCTL_SCGC2_R_SCGCGPIOC_BIT        (2u)
#define SYSCTL_SCGC2_R_SCGCGPIOC_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_R_SCGCGPIOC_CLOCK         ((uint32_t)0x00000004u)

#define SYSCTL_SCGC2_SCGCGPIOC_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC2_SCGCGPIOC_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_SCGCGPIOC_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC2_R_SCGCGPIOD_MASK       ((uint32_t)0x00000008u)
#define SYSCTL_SCGC2_R_SCGCGPIOD_BIT        (3u)
#define SYSCTL_SCGC2_R_SCGCGPIOD_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_R_SCGCGPIOD_CLOCK         ((uint32_t)0x00000008u)

#define SYSCTL_SCGC2_SCGCGPIOD_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC2_SCGCGPIOD_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_SCGCGPIOD_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC2_R_SCGCGPIOE_MASK       ((uint32_t)0x00000010u)
#define SYSCTL_SCGC2_R_SCGCGPIOE_BIT        (4u)
#define SYSCTL_SCGC2_R_SCGCGPIOE_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_R_SCGCGPIOE_CLOCK         ((uint32_t)0x00000010u)

#define SYSCTL_SCGC2_SCGCGPIOE_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC2_SCGCGPIOE_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_SCGCGPIOE_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC2_R_SCGCGPIOF_MASK       ((uint32_t)0x00000020u)
#define SYSCTL_SCGC2_R_SCGCGPIOF_BIT        (5u)
#define SYSCTL_SCGC2_R_SCGCGPIOF_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_R_SCGCGPIOF_CLOCK         ((uint32_t)0x00000020u)

#define SYSCTL_SCGC2_SCGCGPIOF_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC2_SCGCGPIOF_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_SCGCGPIOF_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC2_R_SCGCUDMA_MASK       ((uint32_t)0x00002000u)
#define SYSCTL_SCGC2_R_SCGCUDMA_BIT        (13u)
#define SYSCTL_SCGC2_R_SCGCUDMA_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_R_SCGCUDMA_CLOCK         ((uint32_t)0x00002000u)

#define SYSCTL_SCGC2_SCGCUDMA_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC2_SCGCUDMA_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_SCGCUDMA_CLOCK         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_SCGC2_R_SCGCUSB0_MASK       ((uint32_t)0x00010000u)
#define SYSCTL_SCGC2_R_SCGCUSB0_BIT        (16u)
#define SYSCTL_SCGC2_R_SCGCUSB0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_R_SCGCUSB0_CLOCK         ((uint32_t)0x00010000u)

#define SYSCTL_SCGC2_SCGCUSB0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_SCGC2_SCGCUSB0_UNCLOCK        ((uint32_t)0x00000000u)
#define SYSCTL_SCGC2_SCGCUSB0_CLOCK         ((uint32_t)0x00000001u)
/*----------*/




#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_SCGC_LEGACY_H_ */
