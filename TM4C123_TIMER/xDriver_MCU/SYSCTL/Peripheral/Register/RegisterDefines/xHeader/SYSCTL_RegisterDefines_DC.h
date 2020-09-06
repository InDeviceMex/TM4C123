/**
 *
 * @file SYSCTL_RegisterDefines_DC.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_DC_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_DC_H_

#include <xUtils/Standard/Standard.h>

/**********************************************************************************
************************************122 DC0 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_DC0_R_FLASHSZ_MASK       ((uint32_t)0x0000FFFFu)
#define SYSCTL_DC0_R_FLASHSZ_BIT        (0u)
#define SYSCTL_DC0_R_FLASHSZ_8K         ((uint32_t)0x00000003u)
#define SYSCTL_DC0_R_FLASHSZ_16K        ((uint32_t)0x00000007u)
#define SYSCTL_DC0_R_FLASHSZ_32K        ((uint32_t)0x0000000Fu)
#define SYSCTL_DC0_R_FLASHSZ_64K        ((uint32_t)0x0000001Fu)
#define SYSCTL_DC0_R_FLASHSZ_96K        ((uint32_t)0x0000002Fu)
#define SYSCTL_DC0_R_FLASHSZ_128K       ((uint32_t)0x0000003Fu)
#define SYSCTL_DC0_R_FLASHSZ_192K       ((uint32_t)0x0000005Fu)
#define SYSCTL_DC0_R_FLASHSZ_256K       ((uint32_t)0x0000007Fu)

#define SYSCTL_DC0_FLASHSZ_MASK       ((uint32_t)0x0000FFFFu)
#define SYSCTL_DC0_FLASHSZ_8K         ((uint32_t)0x00000003u)
#define SYSCTL_DC0_FLASHSZ_16K        ((uint32_t)0x00000007u)
#define SYSCTL_DC0_FLASHSZ_32K        ((uint32_t)0x0000000Fu)
#define SYSCTL_DC0_FLASHSZ_64K        ((uint32_t)0x0000001Fu)
#define SYSCTL_DC0_FLASHSZ_96K        ((uint32_t)0x0000002Fu)
#define SYSCTL_DC0_FLASHSZ_128K       ((uint32_t)0x0000003Fu)
#define SYSCTL_DC0_FLASHSZ_192K       ((uint32_t)0x0000005Fu)
#define SYSCTL_DC0_FLASHSZ_256K       ((uint32_t)0x0000007Fu)
/*----------*/

/*----------*/
#define SYSCTL_DC0_R_SRAMSZ_MASK       ((uint32_t)0xFFFF0000u)
#define SYSCTL_DC0_R_SRAMSZ_BIT        (16u)
#define SYSCTL_DC0_R_SRAMSZ_2K         ((uint32_t)0x00070000u)
#define SYSCTL_DC0_R_SRAMSZ_4K         ((uint32_t)0x000F0000u)
#define SYSCTL_DC0_R_SRAMSZ_6K         ((uint32_t)0x00170000u)
#define SYSCTL_DC0_R_SRAMSZ_8K         ((uint32_t)0x001F0000u)
#define SYSCTL_DC0_R_SRAMSZ_12K        ((uint32_t)0x002F0000u)
#define SYSCTL_DC0_R_SRAMSZ_16K        ((uint32_t)0x003F0000u)
#define SYSCTL_DC0_R_SRAMSZ_20K        ((uint32_t)0x004F0000u)
#define SYSCTL_DC0_R_SRAMSZ_24K        ((uint32_t)0x005F0000u)
#define SYSCTL_DC0_R_SRAMSZ_32K        ((uint32_t)0x007F0000u)

#define SYSCTL_DC0_SRAMSZ_MASK       ((uint32_t)0x0000FFFFu)
#define SYSCTL_DC0_SRAMSZ_2K         ((uint32_t)0x00000007u)
#define SYSCTL_DC0_SRAMSZ_4K         ((uint32_t)0x0000000Fu)
#define SYSCTL_DC0_SRAMSZ_6K         ((uint32_t)0x00000017u)
#define SYSCTL_DC0_SRAMSZ_8K         ((uint32_t)0x0000001Fu)
#define SYSCTL_DC0_SRAMSZ_12K        ((uint32_t)0x0000002Fu)
#define SYSCTL_DC0_SRAMSZ_16K        ((uint32_t)0x0000003Fu)
#define SYSCTL_DC0_SRAMSZ_20K        ((uint32_t)0x0000004Fu)
#define SYSCTL_DC0_SRAMSZ_24K        ((uint32_t)0x0000005Fu)
#define SYSCTL_DC0_SRAMSZ_32K        ((uint32_t)0x0000007Fu)
/*----------*/

/**********************************************************************************
************************************123 DC1 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_DC1_R_DCJTAG_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_R_DCJTAG_BIT        (0u)
#define SYSCTL_DC1_R_DCJTAG_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCJTAG_PRESENT    ((uint32_t)0x00000001u)

#define SYSCTL_DC1_DCJTAG_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCJTAG_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCJTAG_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCSWD_MASK       ((uint32_t)0x00000002u)
#define SYSCTL_DC1_R_DCSWD_BIT        (1u)
#define SYSCTL_DC1_R_DCSWD_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCSWD_PRESENT    ((uint32_t)0x00000002u)

#define SYSCTL_DC1_DCSWD_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCSWD_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCSWD_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCSWO_MASK       ((uint32_t)0x00000004u)
#define SYSCTL_DC1_R_DCSWO_BIT        (2u)
#define SYSCTL_DC1_R_DCSWO_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCSWO_PRESENT    ((uint32_t)0x00000004u)

#define SYSCTL_DC1_DCSWO_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCSWO_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCSWO_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCWDT0_MASK       ((uint32_t)0x00000008u)
#define SYSCTL_DC1_R_DCWDT0_BIT        (3u)
#define SYSCTL_DC1_R_DCWDT0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCWDT0_PRESENT    ((uint32_t)0x00000008u)

#define SYSCTL_DC1_DCWDT0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCWDT0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCWDT0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCPLL_MASK       ((uint32_t)0x00000010u)
#define SYSCTL_DC1_R_DCPLL_BIT        (4u)
#define SYSCTL_DC1_R_DCPLL_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCPLL_PRESENT    ((uint32_t)0x00000010u)

#define SYSCTL_DC1_DCPLL_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCPLL_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCPLL_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCTEMPSNS_MASK       ((uint32_t)0x00000020u)
#define SYSCTL_DC1_R_DCTEMPSNS_BIT        (5u)
#define SYSCTL_DC1_R_DCTEMPSNS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCTEMPSNS_PRESENT    ((uint32_t)0x00000010u)

#define SYSCTL_DC1_DCTEMPSNS_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCTEMPSNS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCTEMPSNS_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCHIB_MASK       ((uint32_t)0x00000040u)
#define SYSCTL_DC1_R_DCHIB_BIT        (6u)
#define SYSCTL_DC1_R_DCHIB_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCHIB_PRESENT    ((uint32_t)0x00000040u)

#define SYSCTL_DC1_DCHIB_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCHIB_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCHIB_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCMPU_MASK       ((uint32_t)0x00000080u)
#define SYSCTL_DC1_R_DCMPU_BIT        (7u)
#define SYSCTL_DC1_R_DCMPU_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCMPU_PRESENT    ((uint32_t)0x00000080u)

#define SYSCTL_DC1_DCMPU_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCMPU_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCMPU_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCMAXADC0SPD_MASK       ((uint32_t)0x00000300u)
#define SYSCTL_DC1_R_DCMAXADC0SPD_BIT        (8u)
#define SYSCTL_DC1_R_DCMAXADC0SPD_125K       ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCMAXADC0SPD_250K       ((uint32_t)0x00000100u)
#define SYSCTL_DC1_R_DCMAXADC0SPD_500K       ((uint32_t)0x00000200u)
#define SYSCTL_DC1_R_DCMAXADC0SPD_1M         ((uint32_t)0x00000300u)

#define SYSCTL_DC1_DCMAXADC0SPD_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_DC1_DCMAXADC0SPD_125K       ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCMAXADC0SPD_250K       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCMAXADC0SPD_500K       ((uint32_t)0x00000002u)
#define SYSCTL_DC1_DCMAXADC0SPD_1M         ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCMAXADC1SPD_MASK       ((uint32_t)0x00000C00u)
#define SYSCTL_DC1_R_DCMAXADC1SPD_BIT        (10u)
#define SYSCTL_DC1_R_DCMAXADC1SPD_125K       ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCMAXADC1SPD_250K       ((uint32_t)0x00000400u)
#define SYSCTL_DC1_R_DCMAXADC1SPD_500K       ((uint32_t)0x00000600u)
#define SYSCTL_DC1_R_DCMAXADC1SPD_1M         ((uint32_t)0x00000800u)

#define SYSCTL_DC1_DCMAXADC1SPD_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_DC1_DCMAXADC1SPD_125K       ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCMAXADC1SPD_250K       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCMAXADC1SPD_500K       ((uint32_t)0x00000002u)
#define SYSCTL_DC1_DCMAXADC1SPD_1M         ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCMINSYSDIV_MASK       ((uint32_t)0x0000F000u)
#define SYSCTL_DC1_R_DCMINSYSDIV_BIT        (12u)
#define SYSCTL_DC1_R_DCMINSYSDIV_PLL2_5     ((uint32_t)0x00002000u)
#define SYSCTL_DC1_R_DCMINSYSDIV_PLL4       ((uint32_t)0x00003000u)
#define SYSCTL_DC1_R_DCMINSYSDIV_PLL5       ((uint32_t)0x00004000u)
#define SYSCTL_DC1_R_DCMINSYSDIV_PLL8       ((uint32_t)0x00007000u)
#define SYSCTL_DC1_R_DCMINSYSDIV_PLL10      ((uint32_t)0x00009000u)

#define SYSCTL_DC1_DCMINSYSDIV_MASK       ((uint32_t)0x0000000Fu)
#define SYSCTL_DC1_DCMINSYSDIV_PLL2_5     ((uint32_t)0x00000002u)
#define SYSCTL_DC1_DCMINSYSDIV_PLL4       ((uint32_t)0x00000003u)
#define SYSCTL_DC1_DCMINSYSDIV_PLL5       ((uint32_t)0x00000004u)
#define SYSCTL_DC1_DCMINSYSDIV_PLL8       ((uint32_t)0x00000007u)
#define SYSCTL_DC1_DCMINSYSDIV_PLL10      ((uint32_t)0x00000009u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCADC0_MASK       ((uint32_t)0x00010000u)
#define SYSCTL_DC1_R_DCADC0_BIT        (16u)
#define SYSCTL_DC1_R_DCADC0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCADC0_PRESENT    ((uint32_t)0x00010000u)

#define SYSCTL_DC1_DCADC0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCADC0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCADC0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCADC1_MASK       ((uint32_t)0x00020000u)
#define SYSCTL_DC1_R_DCADC1_BIT        (17u)
#define SYSCTL_DC1_R_DCADC1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCADC1_PRESENT    ((uint32_t)0x00020000u)

#define SYSCTL_DC1_DCADC1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCADC1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCADC1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCPWM0_MASK       ((uint32_t)0x00100000u)
#define SYSCTL_DC1_R_DCPWM0_BIT        (20u)
#define SYSCTL_DC1_R_DCPWM0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCPWM0_PRESENT    ((uint32_t)0x00100000u)

#define SYSCTL_DC1_DCPWM0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCPWM0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCPWM0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCPWM1_MASK       ((uint32_t)0x00200000u)
#define SYSCTL_DC1_R_DCPWM1_BIT        (21u)
#define SYSCTL_DC1_R_DCPWM1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCPWM1_PRESENT    ((uint32_t)0x00200000u)

#define SYSCTL_DC1_DCPWM1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCPWM1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCPWM1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCCAN0_MASK       ((uint32_t)0x01000000u)
#define SYSCTL_DC1_R_DCCAN0_BIT        (24u)
#define SYSCTL_DC1_R_DCCAN0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCCAN0_PRESENT    ((uint32_t)0x01000000u)

#define SYSCTL_DC1_DCCAN0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCCAN0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCCAN0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCCAN1_MASK       ((uint32_t)0x02000000u)
#define SYSCTL_DC1_R_DCCAN1_BIT        (25u)
#define SYSCTL_DC1_R_DCCAN1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCCAN1_PRESENT    ((uint32_t)0x02000000u)

#define SYSCTL_DC1_DCCAN1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCCAN1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCCAN1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC1_R_DCWDT1_MASK       ((uint32_t)0x10000000u)
#define SYSCTL_DC1_R_DCWDT1_BIT        (28u)
#define SYSCTL_DC1_R_DCWDT1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_R_DCWDT1_PRESENT    ((uint32_t)0x10000000u)

#define SYSCTL_DC1_DCWDT1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC1_DCWDT1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC1_DCWDT1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/**********************************************************************************
************************************124 DC2 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_DC2_R_DCUART0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_R_DCUART0_BIT        (0u)
#define SYSCTL_DC2_R_DCUART0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCUART0_PRESENT    ((uint32_t)0x00000001u)

#define SYSCTL_DC2_DCUART0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCUART0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCUART0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCUART1_MASK       ((uint32_t)0x00000002u)
#define SYSCTL_DC2_R_DCUART1_BIT        (1u)
#define SYSCTL_DC2_R_DCUART1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCUART1_PRESENT    ((uint32_t)0x00000002u)

#define SYSCTL_DC2_DCUART1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCUART1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCUART1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCUART2_MASK       ((uint32_t)0x00000004u)
#define SYSCTL_DC2_R_DCUART2_BIT        (2u)
#define SYSCTL_DC2_R_DCUART2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCUART2_PRESENT    ((uint32_t)0x00000004u)

#define SYSCTL_DC2_DCUART2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCUART2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCUART2_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCSSI0_MASK       ((uint32_t)0x00000010u)
#define SYSCTL_DC2_R_DCSSI0_BIT        (4u)
#define SYSCTL_DC2_R_DCSSI0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCSSI0_PRESENT    ((uint32_t)0x00000010u)

#define SYSCTL_DC2_DCSSI0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCSSI0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCSSI0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCSSI1_MASK       ((uint32_t)0x00000020u)
#define SYSCTL_DC2_R_DCSSI1_BIT        (5u)
#define SYSCTL_DC2_R_DCSSI1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCSSI1_PRESENT    ((uint32_t)0x00000010u)

#define SYSCTL_DC2_DCSSI1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCSSI1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCSSI1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCQEI0_MASK       ((uint32_t)0x00000100u)
#define SYSCTL_DC2_R_DCQEI0_BIT        (8u)
#define SYSCTL_DC2_R_DCQEI0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCQEI0_PRESENT    ((uint32_t)0x00000100u)

#define SYSCTL_DC2_DCQEI0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCQEI0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCQEI0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCQEI1_MASK       ((uint32_t)0x00000200u)
#define SYSCTL_DC2_R_DCQEI1_BIT        (9u)
#define SYSCTL_DC2_R_DCQEI1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCQEI1_PRESENT    ((uint32_t)0x00000200u)

#define SYSCTL_DC2_DCQEI1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCQEI1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCQEI1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCI2C0_MASK       ((uint32_t)0x00001000u)
#define SYSCTL_DC2_R_DCI2C0_BIT        (12u)
#define SYSCTL_DC2_R_DCI2C0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCI2C0_PRESENT    ((uint32_t)0x00001000u)

#define SYSCTL_DC2_DCI2C0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCI2C0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCI2C0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCI2C0HS_MASK       ((uint32_t)0x00002000u)
#define SYSCTL_DC2_R_DCI2C0HS_BIT        (13u)
#define SYSCTL_DC2_R_DCI2C0HS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCI2C0HS_PRESENT    ((uint32_t)0x00002000u)

#define SYSCTL_DC2_DCI2C0HS_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCI2C0HS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCI2C0HS_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCI2C1_MASK       ((uint32_t)0x00004000u)
#define SYSCTL_DC2_R_DCI2C1_BIT        (14u)
#define SYSCTL_DC2_R_DCI2C1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCI2C1_PRESENT    ((uint32_t)0x00004000u)

#define SYSCTL_DC2_DCI2C1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCI2C1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCI2C1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCI2C1HS_MASK       ((uint32_t)0x00008000u)
#define SYSCTL_DC2_R_DCI2C1HS_BIT        (15u)
#define SYSCTL_DC2_R_DCI2C1HS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCI2C1HS_PRESENT    ((uint32_t)0x00008000u)

#define SYSCTL_DC2_DCI2C1HS_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCI2C1HS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCI2C1HS_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCTIMER0_MASK       ((uint32_t)0x00010000u)
#define SYSCTL_DC2_R_DCTIMER0_BIT        (16u)
#define SYSCTL_DC2_R_DCTIMER0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCTIMER0_PRESENT    ((uint32_t)0x00010000u)

#define SYSCTL_DC2_DCTIMER0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCTIMER0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCTIMER0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCTIMER1_MASK       ((uint32_t)0x00020000u)
#define SYSCTL_DC2_R_DCTIMER1_BIT        (17u)
#define SYSCTL_DC2_R_DCTIMER1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCTIMER1_PRESENT    ((uint32_t)0x00020000u)

#define SYSCTL_DC2_DCTIMER1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCTIMER1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCTIMER1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCTIMER2_MASK       ((uint32_t)0x00040000u)
#define SYSCTL_DC2_R_DCTIMER2_BIT        (18u)
#define SYSCTL_DC2_R_DCTIMER2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCTIMER2_PRESENT    ((uint32_t)0x00040000u)

#define SYSCTL_DC2_DCTIMER2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCTIMER2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCTIMER2_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCTIMER3_MASK       ((uint32_t)0x00080000u)
#define SYSCTL_DC2_R_DCTIMER3_BIT        (19u)
#define SYSCTL_DC2_R_DCTIMER3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCTIMER3_PRESENT    ((uint32_t)0x00080000u)

#define SYSCTL_DC2_DCTIMER3_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCTIMER3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCTIMER3_PRESENT    ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define SYSCTL_DC2_R_DCCOMP0_MASK       ((uint32_t)0x01000000u)
#define SYSCTL_DC2_R_DCCOMP0_BIT        (24u)
#define SYSCTL_DC2_R_DCCOMP0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCCOMP0_PRESENT    ((uint32_t)0x01000000u)

#define SYSCTL_DC2_DCCOMP0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCCOMP0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCCOMP0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCCOMP1_MASK       ((uint32_t)0x02000000u)
#define SYSCTL_DC2_R_DCCOMP1_BIT        (25u)
#define SYSCTL_DC2_R_DCCOMP1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCCOMP1_PRESENT    ((uint32_t)0x02000000u)

#define SYSCTL_DC2_DCCOMP1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCCOMP1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCCOMP1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCCOMP2_MASK       ((uint32_t)0x04000000u)
#define SYSCTL_DC2_R_DCCOMP2_BIT        (26u)
#define SYSCTL_DC2_R_DCCOMP2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCCOMP2_PRESENT    ((uint32_t)0x04000000u)

#define SYSCTL_DC2_DCCOMP2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCCOMP2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCCOMP2_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCI2S0_MASK       ((uint32_t)0x10000000u)
#define SYSCTL_DC2_R_DCI2S0_BIT        (28u)
#define SYSCTL_DC2_R_DCI2S0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCI2S0_PRESENT    ((uint32_t)0x10000000u)

#define SYSCTL_DC2_DCI2S0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCI2S0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCI2S0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC2_R_DCEPI0_MASK       ((uint32_t)0x40000000u)
#define SYSCTL_DC2_R_DCEPI0_BIT        (30u)
#define SYSCTL_DC2_R_DCEPI0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_R_DCEPI0_PRESENT    ((uint32_t)0x40000000u)

#define SYSCTL_DC2_DCEPI0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC2_DCEPI0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC2_DCEPI0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/**********************************************************************************
************************************125 DC3 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_DC3_R_DCPWM0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_R_DCPWM0_BIT        (0u)
#define SYSCTL_DC3_R_DCPWM0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCPWM0_PRESENT    ((uint32_t)0x00000001u)

#define SYSCTL_DC3_DCPWM0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCPWM0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCPWM0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCPWM1_MASK       ((uint32_t)0x00000002u)
#define SYSCTL_DC3_R_DCPWM1_BIT        (1u)
#define SYSCTL_DC3_R_DCPWM1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCPWM1_PRESENT    ((uint32_t)0x00000002u)

#define SYSCTL_DC3_DCPWM1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCPWM1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCPWM1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCPWM2_MASK       ((uint32_t)0x00000004u)
#define SYSCTL_DC3_R_DCPWM2_BIT        (2u)
#define SYSCTL_DC3_R_DCPWM2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCPWM2_PRESENT    ((uint32_t)0x00000004u)

#define SYSCTL_DC3_DCPWM2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCPWM2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCPWM2_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCPWM3_MASK       ((uint32_t)0x00000008u)
#define SYSCTL_DC3_R_DCPWM3_BIT        (3u)
#define SYSCTL_DC3_R_DCPWM3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCPWM3_PRESENT    ((uint32_t)0x00000008u)

#define SYSCTL_DC3_DCPWM3_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCPWM3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCPWM3_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCPWM4_MASK       ((uint32_t)0x00000010u)
#define SYSCTL_DC3_R_DCPWM4_BIT        (4u)
#define SYSCTL_DC3_R_DCPWM4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCPWM4_PRESENT    ((uint32_t)0x00000010u)

#define SYSCTL_DC3_DCPWM4_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCPWM4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCPWM4_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCPWM5_MASK       ((uint32_t)0x00000020u)
#define SYSCTL_DC3_R_DCPWM5_BIT        (5u)
#define SYSCTL_DC3_R_DCPWM5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCPWM5_PRESENT    ((uint32_t)0x00000020u)

#define SYSCTL_DC3_DCPWM5_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCPWM5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCPWM5_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC0MINUS_MASK       ((uint32_t)0x00000040u)
#define SYSCTL_DC3_R_DCC0MINUS_BIT        (6u)
#define SYSCTL_DC3_R_DCC0MINUS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCC0MINUS_PRESENT    ((uint32_t)0x00000040u)

#define SYSCTL_DC3_DCC0MINUS_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCC0MINUS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCC0MINUS_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC0PLUS_MASK       ((uint32_t)0x00000080u)
#define SYSCTL_DC3_R_DCC0PLUS_BIT        (7u)
#define SYSCTL_DC3_R_DCC0PLUS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCC0PLUS_PRESENT    ((uint32_t)0x00000080u)

#define SYSCTL_DC3_DCC0PLUS_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCC0PLUS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCC0PLUS_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC0O_MASK       ((uint32_t)0x00000100u)
#define SYSCTL_DC3_R_DCC0O_BIT        (8u)
#define SYSCTL_DC3_R_DCC0O_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCC0O_PRESENT    ((uint32_t)0x00000100u)

#define SYSCTL_DC3_DCC0O_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCC0O_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCC0O_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC1MINUS_MASK       ((uint32_t)0x00000200u)
#define SYSCTL_DC3_R_DCC1MINUS_BIT        (9u)
#define SYSCTL_DC3_R_DCC1MINUS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCC1MINUS_PRESENT    ((uint32_t)0x00000200u)

#define SYSCTL_DC3_DCC1MINUS_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCC1MINUS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCC1MINUS_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC1PLUS_MASK       ((uint32_t)0x00000400u)
#define SYSCTL_DC3_R_DCC1PLUS_BIT        (10u)
#define SYSCTL_DC3_R_DCC1PLUS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCC1PLUS_PRESENT    ((uint32_t)0x00000400u)

#define SYSCTL_DC3_DCC1PLUS_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCC1PLUS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCC1PLUS_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC1O_MASK       ((uint32_t)0x00000800u)
#define SYSCTL_DC3_R_DCC1O_BIT        (11u)
#define SYSCTL_DC3_R_DCC1O_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCC1O_PRESENT    ((uint32_t)0x00000800u)

#define SYSCTL_DC3_DCC1O_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCC1O_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCC1O_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC2MINUS_MASK       ((uint32_t)0x00001000u)
#define SYSCTL_DC3_R_DCC2MINUS_BIT        (12u)
#define SYSCTL_DC3_R_DCC2MINUS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCC2MINUS_PRESENT    ((uint32_t)0x00001000u)

#define SYSCTL_DC3_DCC2MINUS_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCC2MINUS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCC2MINUS_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC2PLUS_MASK       ((uint32_t)0x00002000u)
#define SYSCTL_DC3_R_DCC2PLUS_BIT        (13u)
#define SYSCTL_DC3_R_DCC2PLUS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCC2PLUS_PRESENT    ((uint32_t)0x00002000u)

#define SYSCTL_DC3_DCC2PLUS_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCC2PLUS_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCC2PLUS_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCC2O_MASK       ((uint32_t)0x00004000u)
#define SYSCTL_DC3_R_DCC2O_BIT        (14u)
#define SYSCTL_DC3_R_DCC2O_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCC2O_PRESENT    ((uint32_t)0x00004000u)

#define SYSCTL_DC3_DCC2O_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCC2O_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCC2O_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCPWMFAULT_MASK       ((uint32_t)0x00008000u)
#define SYSCTL_DC3_R_DCPWMFAULT_BIT        (15u)
#define SYSCTL_DC3_R_DCPWMFAULT_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCPWMFAULT_PRESENT    ((uint32_t)0x00008000u)

#define SYSCTL_DC3_DCPWMFAULT_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCPWMFAULT_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCPWMFAULT_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN0_MASK       ((uint32_t)0x00010000u)
#define SYSCTL_DC3_R_DCADC0AIN0_BIT        (16u)
#define SYSCTL_DC3_R_DCADC0AIN0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN0_PRESENT    ((uint32_t)0x00010000u)

#define SYSCTL_DC3_DCADC0AIN0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCADC0AIN0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCADC0AIN0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN1_MASK       ((uint32_t)0x00020000u)
#define SYSCTL_DC3_R_DCADC0AIN1_BIT        (17u)
#define SYSCTL_DC3_R_DCADC0AIN1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN1_PRESENT    ((uint32_t)0x00020000u)

#define SYSCTL_DC3_DCADC0AIN1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCADC0AIN1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCADC0AIN1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN2_MASK       ((uint32_t)0x00040000u)
#define SYSCTL_DC3_R_DCADC0AIN2_BIT        (18u)
#define SYSCTL_DC3_R_DCADC0AIN2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN2_PRESENT    ((uint32_t)0x00040000u)

#define SYSCTL_DC3_DCADC0AIN2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCADC0AIN2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCADC0AIN2_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN3_MASK       ((uint32_t)0x00080000u)
#define SYSCTL_DC3_R_DCADC0AIN3_BIT        (19u)
#define SYSCTL_DC3_R_DCADC0AIN3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN3_PRESENT    ((uint32_t)0x00080000u)

#define SYSCTL_DC3_DCADC0AIN3_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCADC0AIN3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCADC0AIN3_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN4_MASK       ((uint32_t)0x00100000u)
#define SYSCTL_DC3_R_DCADC0AIN4_BIT        (20u)
#define SYSCTL_DC3_R_DCADC0AIN4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN4_PRESENT    ((uint32_t)0x00100000u)

#define SYSCTL_DC3_DCADC0AIN4_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCADC0AIN4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCADC0AIN4_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN5_MASK       ((uint32_t)0x00200000u)
#define SYSCTL_DC3_R_DCADC0AIN5_BIT        (21u)
#define SYSCTL_DC3_R_DCADC0AIN5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN5_PRESENT    ((uint32_t)0x00200000u)

#define SYSCTL_DC3_DCADC0AIN5_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCADC0AIN5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCADC0AIN5_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN6_MASK       ((uint32_t)0x00400000u)
#define SYSCTL_DC3_R_DCADC0AIN6_BIT        (22u)
#define SYSCTL_DC3_R_DCADC0AIN6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN6_PRESENT    ((uint32_t)0x00400000u)

#define SYSCTL_DC3_DCADC0AIN6_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCADC0AIN6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCADC0AIN6_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCADC0AIN7_MASK       ((uint32_t)0x00800000u)
#define SYSCTL_DC3_R_DCADC0AIN7_BIT        (23u)
#define SYSCTL_DC3_R_DCADC0AIN7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCADC0AIN7_PRESENT    ((uint32_t)0x00800000u)

#define SYSCTL_DC3_DCADC0AIN7_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCADC0AIN7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCADC0AIN7_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCCCP0_MASK       ((uint32_t)0x01000000u)
#define SYSCTL_DC3_R_DCCCP0_BIT        (24u)
#define SYSCTL_DC3_R_DCCCP0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCCCP0_PRESENT    ((uint32_t)0x01000000u)

#define SYSCTL_DC3_DCCCP0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCCCP0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCCCP0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCCCP1_MASK       ((uint32_t)0x02000000u)
#define SYSCTL_DC3_R_DCCCP1_BIT        (25u)
#define SYSCTL_DC3_R_DCCCP1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCCCP1_PRESENT    ((uint32_t)0x02000000u)

#define SYSCTL_DC3_DCCCP1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCCCP1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCCCP1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCCCP2_MASK       ((uint32_t)0x04000000u)
#define SYSCTL_DC3_R_DCCCP2_BIT        (26u)
#define SYSCTL_DC3_R_DCCCP2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCCCP2_PRESENT    ((uint32_t)0x04000000u)

#define SYSCTL_DC3_DCCCP2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCCCP2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCCCP2_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCCCP3_MASK       ((uint32_t)0x08000000u)
#define SYSCTL_DC3_R_DCCCP3_BIT        (27u)
#define SYSCTL_DC3_R_DCCCP3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCCCP3_PRESENT    ((uint32_t)0x08000000u)

#define SYSCTL_DC3_DCCCP3_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCCCP3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCCCP3_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCCCP4_MASK       ((uint32_t)0x10000000u)
#define SYSCTL_DC3_R_DCCCP4_BIT        (28u)
#define SYSCTL_DC3_R_DCCCP4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCCCP4_PRESENT    ((uint32_t)0x10000000u)

#define SYSCTL_DC3_DCCCP4_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCCCP4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCCCP4_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DCCCP5_MASK       ((uint32_t)0x20000000u)
#define SYSCTL_DC3_R_DCCCP5_BIT        (29u)
#define SYSCTL_DC3_R_DCCCP5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DCCCP5_PRESENT    ((uint32_t)0x20000000u)

#define SYSCTL_DC3_DCCCP5_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DCCCP5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DCCCP5_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC3_R_DC32KHZ_MASK       ((uint32_t)0x80000000u)
#define SYSCTL_DC3_R_DC32KHZ_BIT        (31u)
#define SYSCTL_DC3_R_DC32KHZ_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_R_DC32KHZ_PRESENT    ((uint32_t)0x80000000u)

#define SYSCTL_DC3_DC32KHZ_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC3_DC32KHZ_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC3_DC32KHZ_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/**********************************************************************************
************************************126 DC4 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_DC4_R_DCGPIOA_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_R_DCGPIOA_BIT        (0u)
#define SYSCTL_DC4_R_DCGPIOA_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCGPIOA_PRESENT    ((uint32_t)0x00000001u)

#define SYSCTL_DC4_DCGPIOA_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCGPIOA_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCGPIOA_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOB_MASK       ((uint32_t)0x00000002u)
#define SYSCTL_DC4_R_DCGPIOB_BIT        (1u)
#define SYSCTL_DC4_R_DCGPIOB_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCGPIOB_PRESENT    ((uint32_t)0x00000002u)

#define SYSCTL_DC4_DCGPIOB_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCGPIOB_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCGPIOB_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOC_MASK       ((uint32_t)0x00000004u)
#define SYSCTL_DC4_R_DCGPIOC_BIT        (2u)
#define SYSCTL_DC4_R_DCGPIOC_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCGPIOC_PRESENT    ((uint32_t)0x00000004u)

#define SYSCTL_DC4_DCGPIOC_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCGPIOC_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCGPIOC_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOD_MASK       ((uint32_t)0x00000008u)
#define SYSCTL_DC4_R_DCGPIOD_BIT        (3u)
#define SYSCTL_DC4_R_DCGPIOD_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCGPIOD_PRESENT    ((uint32_t)0x00000008u)

#define SYSCTL_DC4_DCGPIOD_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCGPIOD_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCGPIOD_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOE_MASK       ((uint32_t)0x00000010u)
#define SYSCTL_DC4_R_DCGPIOE_BIT        (4u)
#define SYSCTL_DC4_R_DCGPIOE_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCGPIOE_PRESENT    ((uint32_t)0x00000010u)

#define SYSCTL_DC4_DCGPIOE_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCGPIOE_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCGPIOE_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOF_MASK       ((uint32_t)0x00000020u)
#define SYSCTL_DC4_R_DCGPIOF_BIT        (5u)
#define SYSCTL_DC4_R_DCGPIOF_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCGPIOF_PRESENT    ((uint32_t)0x00000020u)

#define SYSCTL_DC4_DCGPIOF_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCGPIOF_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCGPIOF_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOG_MASK       ((uint32_t)0x00000040u)
#define SYSCTL_DC4_R_DCGPIOG_BIT        (6u)
#define SYSCTL_DC4_R_DCGPIOG_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCGPIOG_PRESENT    ((uint32_t)0x00000040u)

#define SYSCTL_DC4_DCGPIOG_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCGPIOG_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCGPIOG_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOH_MASK       ((uint32_t)0x00000080u)
#define SYSCTL_DC4_R_DCGPIOH_BIT        (7u)
#define SYSCTL_DC4_R_DCGPIOH_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCGPIOH_PRESENT    ((uint32_t)0x00000080u)

#define SYSCTL_DC4_DCGPIOH_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCGPIOH_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCGPIOH_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCGPIOJ_MASK       ((uint32_t)0x00000100u)
#define SYSCTL_DC4_R_DCGPIOJ_BIT        (8u)
#define SYSCTL_DC4_R_DCGPIOJ_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCGPIOJ_PRESENT    ((uint32_t)0x00000100u)

#define SYSCTL_DC4_DCGPIOJ_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCGPIOJ_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCGPIOJ_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCROM_MASK       ((uint32_t)0x00001000u)
#define SYSCTL_DC4_R_DCROM_BIT        (12u)
#define SYSCTL_DC4_R_DCROM_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCROM_PRESENT    ((uint32_t)0x00001000u)

#define SYSCTL_DC4_DCROM_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCROM_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCROM_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCUDMA_MASK       ((uint32_t)0x00002000u)
#define SYSCTL_DC4_R_DCUDMA_BIT        (13u)
#define SYSCTL_DC4_R_DCUDMA_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCUDMA_PRESENT    ((uint32_t)0x00002000u)

#define SYSCTL_DC4_DCUDMA_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCUDMA_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCUDMA_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCCCP6_MASK       ((uint32_t)0x00004000u)
#define SYSCTL_DC4_R_DCCCP6_BIT        (14u)
#define SYSCTL_DC4_R_DCCCP6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCCCP6_PRESENT    ((uint32_t)0x00004000u)

#define SYSCTL_DC4_DCCCP6_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCCCP6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCCCP6_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCCCP7_MASK       ((uint32_t)0x00008000u)
#define SYSCTL_DC4_R_DCCCP7_BIT        (15u)
#define SYSCTL_DC4_R_DCCCP7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCCCP7_PRESENT    ((uint32_t)0x00008000u)

#define SYSCTL_DC4_DCCCP7_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCCCP7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCCCP7_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCPICAL_MASK       ((uint32_t)0x00040000u)
#define SYSCTL_DC4_R_DCPICAL_BIT        (18u)
#define SYSCTL_DC4_R_DCPICAL_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCPICAL_PRESENT    ((uint32_t)0x00040000u)

#define SYSCTL_DC4_DCPICAL_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCPICAL_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCPICAL_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCE1588_MASK       ((uint32_t)0x01000000u)
#define SYSCTL_DC4_R_DCE1588_BIT        (24u)
#define SYSCTL_DC4_R_DCE1588_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCE1588_PRESENT    ((uint32_t)0x01000000u)

#define SYSCTL_DC4_DCE1588_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCE1588_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCE1588_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCEMAC0_MASK       ((uint32_t)0x10000000u)
#define SYSCTL_DC4_R_DCEMAC0_BIT        (28u)
#define SYSCTL_DC4_R_DCEMAC0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCEMAC0_PRESENT    ((uint32_t)0x10000000u)

#define SYSCTL_DC4_DCEMAC0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCEMAC0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCEMAC0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC4_R_DCEPHY0_MASK       ((uint32_t)0x40000000u)
#define SYSCTL_DC4_R_DCEPHY0_BIT        (30u)
#define SYSCTL_DC4_R_DCEPHY0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_R_DCEPHY0_PRESENT    ((uint32_t)0x40000000u)

#define SYSCTL_DC4_DCEPHY0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC4_DCEPHY0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC4_DCEPHY0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/**********************************************************************************
************************************127 DC5 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_DC5_R_DCPWM0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC5_R_DCPWM0_BIT        (0u)
#define SYSCTL_DC5_R_DCPWM0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_R_DCPWM0_PRESENT    ((uint32_t)0x00000001u)

#define SYSCTL_DC5_DCPWM0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC5_DCPWM0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_DCPWM0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWM1_MASK       ((uint32_t)0x00000002u)
#define SYSCTL_DC5_R_DCPWM1_BIT        (1u)
#define SYSCTL_DC5_R_DCPWM1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_R_DCPWM1_PRESENT    ((uint32_t)0x00000002u)

#define SYSCTL_DC5_DCPWM1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC5_DCPWM1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_DCPWM1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWM2_MASK       ((uint32_t)0x00000004u)
#define SYSCTL_DC5_R_DCPWM2_BIT        (2u)
#define SYSCTL_DC5_R_DCPWM2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_R_DCPWM2_PRESENT    ((uint32_t)0x00000004u)

#define SYSCTL_DC5_DCPWM2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC5_DCPWM2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_DCPWM2_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWM3_MASK       ((uint32_t)0x00000008u)
#define SYSCTL_DC5_R_DCPWM3_BIT        (3u)
#define SYSCTL_DC5_R_DCPWM3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_R_DCPWM3_PRESENT    ((uint32_t)0x00000008u)

#define SYSCTL_DC5_DCPWM3_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC5_DCPWM3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_DCPWM3_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWM4_MASK       ((uint32_t)0x00000010u)
#define SYSCTL_DC5_R_DCPWM4_BIT        (4u)
#define SYSCTL_DC5_R_DCPWM4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_R_DCPWM4_PRESENT    ((uint32_t)0x00000010u)

#define SYSCTL_DC5_DCPWM4_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC5_DCPWM4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_DCPWM4_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWM5_MASK       ((uint32_t)0x00000020u)
#define SYSCTL_DC5_R_DCPWM5_BIT        (5u)
#define SYSCTL_DC5_R_DCPWM5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_R_DCPWM5_PRESENT    ((uint32_t)0x00000020u)

#define SYSCTL_DC5_DCPWM5_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC5_DCPWM5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_DCPWM5_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWM6_MASK       ((uint32_t)0x00000040u)
#define SYSCTL_DC5_R_DCPWM6_BIT        (6u)
#define SYSCTL_DC5_R_DCPWM6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_R_DCPWM6_PRESENT    ((uint32_t)0x00000040u)

#define SYSCTL_DC5_DCPWM6_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC5_DCPWM6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_DCPWM6_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWM7_MASK       ((uint32_t)0x00000080u)
#define SYSCTL_DC5_R_DCPWM7_BIT        (7u)
#define SYSCTL_DC5_R_DCPWM7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_R_DCPWM7_PRESENT    ((uint32_t)0x00000080u)

#define SYSCTL_DC5_DCPWM7_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC5_DCPWM7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_DCPWM7_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWMESYNC_MASK       ((uint32_t)0x00100000u)
#define SYSCTL_DC5_R_DCPWMESYNC_BIT        (20u)
#define SYSCTL_DC5_R_DCPWMESYNC_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_R_DCPWMESYNC_PRESENT    ((uint32_t)0x00100000u)

#define SYSCTL_DC5_DCPWMESYNC_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC5_DCPWMESYNC_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_DCPWMESYNC_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWMEFLT_MASK       ((uint32_t)0x00200000u)
#define SYSCTL_DC5_R_DCPWMEFLT_BIT        (21u)
#define SYSCTL_DC5_R_DCPWMEFLT_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_R_DCPWMEFLT_PRESENT    ((uint32_t)0x00200000u)

#define SYSCTL_DC5_DCPWMEFLT_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC5_DCPWMEFLT_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_DCPWMEFLT_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWMFAULT0_MASK       ((uint32_t)0x01000000u)
#define SYSCTL_DC5_R_DCPWMFAULT0_BIT        (24u)
#define SYSCTL_DC5_R_DCPWMFAULT0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_R_DCPWMFAULT0_PRESENT    ((uint32_t)0x01000000u)

#define SYSCTL_DC5_DCPWMFAULT0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC5_DCPWMFAULT0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_DCPWMFAULT0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWMFAULT1_MASK       ((uint32_t)0x02000000u)
#define SYSCTL_DC5_R_DCPWMFAULT1_BIT        (25u)
#define SYSCTL_DC5_R_DCPWMFAULT1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_R_DCPWMFAULT1_PRESENT    ((uint32_t)0x02000000u)

#define SYSCTL_DC5_DCPWMFAULT1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC5_DCPWMFAULT1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_DCPWMFAULT1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWMFAULT2_MASK       ((uint32_t)0x04000000u)
#define SYSCTL_DC5_R_DCPWMFAULT2_BIT        (26u)
#define SYSCTL_DC5_R_DCPWMFAULT2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_R_DCPWMFAULT2_PRESENT    ((uint32_t)0x04000000u)

#define SYSCTL_DC5_DCPWMFAULT2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC5_DCPWMFAULT2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_DCPWMFAULT2_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC5_R_DCPWMFAULT3_MASK       ((uint32_t)0x08000000u)
#define SYSCTL_DC5_R_DCPWMFAULT3_BIT        (27u)
#define SYSCTL_DC5_R_DCPWMFAULT3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_R_DCPWMFAULT3_PRESENT    ((uint32_t)0x08000000u)

#define SYSCTL_DC5_DCPWMFAULT0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC5_DCPWMFAULT0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC5_DCPWMFAULT0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/**********************************************************************************
************************************128 DC6 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_DC6_R_DCUSB0_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_DC6_R_DCUSB0_BIT        (0u)
#define SYSCTL_DC6_R_DCUSB0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC6_R_DCUSB0_DEVICE     ((uint32_t)0x00000001u)
#define SYSCTL_DC6_R_DCUSB0_HOST       ((uint32_t)0x00000002u)
#define SYSCTL_DC6_R_DCUSB0_OTG        ((uint32_t)0x00000003u)

#define SYSCTL_DC6_DCUSB0_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_DC6_DCUSB0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC6_DCUSB0_DEVICE     ((uint32_t)0x00000001u)
#define SYSCTL_DC6_DCUSB0_HOST       ((uint32_t)0x00000002u)
#define SYSCTL_DC6_DCUSB0_OTG        ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define SYSCTL_DC6_R_DCUSB0PHY_MASK       ((uint32_t)0x00000010u)
#define SYSCTL_DC6_R_DCUSB0PHY_BIT        (4u)
#define SYSCTL_DC6_R_DCUSB0PHY_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC6_R_DCUSB0PHY_PRESENT    ((uint32_t)0x00000010u)

#define SYSCTL_DC6_DCUSB0PHY_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC6_DCUSB0PHY_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC6_DCUSB0PHY_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/**********************************************************************************
************************************129 DC7 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_DC7_R_DCDMACH0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_R_DCDMACH0_BIT        (0u)
#define SYSCTL_DC7_R_DCDMACH0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH0_PRESENT    ((uint32_t)0x00000001u)

#define SYSCTL_DC7_DCDMACH0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH1_MASK       ((uint32_t)0x00000002u)
#define SYSCTL_DC7_R_DCDMACH1_BIT        (1u)
#define SYSCTL_DC7_R_DCDMACH1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH1_PRESENT    ((uint32_t)0x00000002u)

#define SYSCTL_DC7_DCDMACH1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH2_MASK       ((uint32_t)0x00000004u)
#define SYSCTL_DC7_R_DCDMACH2_BIT        (2u)
#define SYSCTL_DC7_R_DCDMACH2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH2_PRESENT    ((uint32_t)0x00000004u)

#define SYSCTL_DC7_DCDMACH2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH2_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH3_MASK       ((uint32_t)0x00000008u)
#define SYSCTL_DC7_R_DCDMACH3_BIT        (3u)
#define SYSCTL_DC7_R_DCDMACH3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH3_PRESENT    ((uint32_t)0x00000008u)

#define SYSCTL_DC7_DCDMACH3_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH3_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH4_MASK       ((uint32_t)0x00000010u)
#define SYSCTL_DC7_R_DCDMACH4_BIT        (4u)
#define SYSCTL_DC7_R_DCDMACH4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH4_PRESENT    ((uint32_t)0x00000010u)

#define SYSCTL_DC7_DCDMACH4_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH4_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH5_MASK       ((uint32_t)0x00000020u)
#define SYSCTL_DC7_R_DCDMACH5_BIT        (5u)
#define SYSCTL_DC7_R_DCDMACH5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH5_PRESENT    ((uint32_t)0x00000020u)

#define SYSCTL_DC7_DCDMACH5_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH5_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH6_MASK       ((uint32_t)0x00000040u)
#define SYSCTL_DC7_R_DCDMACH6_BIT        (6u)
#define SYSCTL_DC7_R_DCDMACH6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH6_PRESENT    ((uint32_t)0x00000040u)

#define SYSCTL_DC7_DCDMACH6_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH6_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH7_MASK       ((uint32_t)0x00000080u)
#define SYSCTL_DC7_R_DCDMACH7_BIT        (7u)
#define SYSCTL_DC7_R_DCDMACH7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH7_PRESENT    ((uint32_t)0x00000080u)

#define SYSCTL_DC7_DCDMACH7_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH7_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH8_MASK       ((uint32_t)0x00000100u)
#define SYSCTL_DC7_R_DCDMACH8_BIT        (8u)
#define SYSCTL_DC7_R_DCDMACH8_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH8_PRESENT    ((uint32_t)0x00000100u)

#define SYSCTL_DC7_DCDMACH8_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH8_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH8_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH9_MASK       ((uint32_t)0x00000200u)
#define SYSCTL_DC7_R_DCDMACH9_BIT        (9u)
#define SYSCTL_DC7_R_DCDMACH9_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH9_PRESENT    ((uint32_t)0x00000200u)

#define SYSCTL_DC7_DCDMACH9_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH9_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH9_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH10_MASK       ((uint32_t)0x00000400u)
#define SYSCTL_DC7_R_DCDMACH10_BIT        (10u)
#define SYSCTL_DC7_R_DCDMACH10_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH10_PRESENT    ((uint32_t)0x00000400u)

#define SYSCTL_DC7_DCDMACH10_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH10_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH10_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH11_MASK       ((uint32_t)0x00000800u)
#define SYSCTL_DC7_R_DCDMACH11_BIT        (11u)
#define SYSCTL_DC7_R_DCDMACH11_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH11_PRESENT    ((uint32_t)0x00000800u)

#define SYSCTL_DC7_DCDMACH11_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH11_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH11_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH12_MASK       ((uint32_t)0x00001000u)
#define SYSCTL_DC7_R_DCDMACH12_BIT        (12u)
#define SYSCTL_DC7_R_DCDMACH12_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH12_PRESENT    ((uint32_t)0x00001000u)

#define SYSCTL_DC7_DCDMACH12_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH12_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH12_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH13_MASK       ((uint32_t)0x00002000u)
#define SYSCTL_DC7_R_DCDMACH13_BIT        (13u)
#define SYSCTL_DC7_R_DCDMACH13_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH13_PRESENT    ((uint32_t)0x00002000u)

#define SYSCTL_DC7_DCDMACH13_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH13_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH13_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH14_MASK       ((uint32_t)0x00004000u)
#define SYSCTL_DC7_R_DCDMACH14_BIT        (14u)
#define SYSCTL_DC7_R_DCDMACH14_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH14_PRESENT    ((uint32_t)0x00004000u)

#define SYSCTL_DC7_DCDMACH14_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH14_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH14_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH15_MASK       ((uint32_t)0x00008000u)
#define SYSCTL_DC7_R_DCDMACH15_BIT        (15u)
#define SYSCTL_DC7_R_DCDMACH15_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH15_PRESENT    ((uint32_t)0x00008000u)

#define SYSCTL_DC7_DCDMACH15_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH15_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH15_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH16_MASK       ((uint32_t)0x00010000u)
#define SYSCTL_DC7_R_DCDMACH16_BIT        (16u)
#define SYSCTL_DC7_R_DCDMACH16_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH16_PRESENT    ((uint32_t)0x00010000u)

#define SYSCTL_DC7_DCDMACH16_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH16_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH16_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH17_MASK       ((uint32_t)0x00020000u)
#define SYSCTL_DC7_R_DCDMACH17_BIT        (17u)
#define SYSCTL_DC7_R_DCDMACH17_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH17_PRESENT    ((uint32_t)0x00020000u)

#define SYSCTL_DC7_DCDMACH17_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH17_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH17_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH18_MASK       ((uint32_t)0x00040000u)
#define SYSCTL_DC7_R_DCDMACH18_BIT        (18u)
#define SYSCTL_DC7_R_DCDMACH18_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH18_PRESENT    ((uint32_t)0x00040000u)

#define SYSCTL_DC7_DCDMACH18_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH18_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH18_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH19_MASK       ((uint32_t)0x00080000u)
#define SYSCTL_DC7_R_DCDMACH19_BIT        (19u)
#define SYSCTL_DC7_R_DCDMACH19_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH19_PRESENT    ((uint32_t)0x00080000u)

#define SYSCTL_DC7_DCDMACH19_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH19_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH19_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH20_MASK       ((uint32_t)0x00100000u)
#define SYSCTL_DC7_R_DCDMACH20_BIT        (20u)
#define SYSCTL_DC7_R_DCDMACH20_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH20_PRESENT    ((uint32_t)0x00100000u)

#define SYSCTL_DC7_DCDMACH20_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH20_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH20_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH21_MASK       ((uint32_t)0x00200000u)
#define SYSCTL_DC7_R_DCDMACH21_BIT        (21u)
#define SYSCTL_DC7_R_DCDMACH21_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH21_PRESENT    ((uint32_t)0x00200000u)

#define SYSCTL_DC7_DCDMACH21_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH21_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH21_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH22_MASK       ((uint32_t)0x00400000u)
#define SYSCTL_DC7_R_DCDMACH22_BIT        (22u)
#define SYSCTL_DC7_R_DCDMACH22_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH22_PRESENT    ((uint32_t)0x00400000u)

#define SYSCTL_DC7_DCDMACH22_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH22_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH22_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH23_MASK       ((uint32_t)0x00800000u)
#define SYSCTL_DC7_R_DCDMACH23_BIT        (23u)
#define SYSCTL_DC7_R_DCDMACH23_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH23_PRESENT    ((uint32_t)0x00800000u)

#define SYSCTL_DC7_DCDMACH23_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH23_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH23_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH24_MASK       ((uint32_t)0x01000000u)
#define SYSCTL_DC7_R_DCDMACH24_BIT        (24u)
#define SYSCTL_DC7_R_DCDMACH24_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH24_PRESENT    ((uint32_t)0x01000000u)

#define SYSCTL_DC7_DCDMACH24_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH24_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH24_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH25_MASK       ((uint32_t)0x02000000u)
#define SYSCTL_DC7_R_DCDMACH25_BIT        (25u)
#define SYSCTL_DC7_R_DCDMACH25_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH25_PRESENT    ((uint32_t)0x02000000u)

#define SYSCTL_DC7_DCDMACH25_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH25_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH25_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH26_MASK       ((uint32_t)0x04000000u)
#define SYSCTL_DC7_R_DCDMACH26_BIT        (26u)
#define SYSCTL_DC7_R_DCDMACH26_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH26_PRESENT    ((uint32_t)0x04000000u)

#define SYSCTL_DC7_DCDMACH26_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH26_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH26_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH27_MASK       ((uint32_t)0x08000000u)
#define SYSCTL_DC7_R_DCDMACH27_BIT        (27u)
#define SYSCTL_DC7_R_DCDMACH27_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH27_PRESENT    ((uint32_t)0x08000000u)

#define SYSCTL_DC7_DCDMACH27_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH27_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH27_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH28_MASK       ((uint32_t)0x10000000u)
#define SYSCTL_DC7_R_DCDMACH28_BIT        (28u)
#define SYSCTL_DC7_R_DCDMACH28_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH28_PRESENT    ((uint32_t)0x10000000u)

#define SYSCTL_DC7_DCDMACH28_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH28_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH28_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH29_MASK       ((uint32_t)0x20000000u)
#define SYSCTL_DC7_R_DCDMACH29_BIT        (29u)
#define SYSCTL_DC7_R_DCDMACH29_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH29_PRESENT    ((uint32_t)0x20000000u)

#define SYSCTL_DC7_DCDMACH29_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH29_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH29_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC7_R_DCDMACH30_MASK       ((uint32_t)0x40000000u)
#define SYSCTL_DC7_R_DCDMACH30_BIT        (30u)
#define SYSCTL_DC7_R_DCDMACH30_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_R_DCDMACH30_PRESENT    ((uint32_t)0x40000000u)

#define SYSCTL_DC7_DCDMACH30_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC7_DCDMACH30_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC7_DCDMACH30_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/**********************************************************************************
************************************130 DC8 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_R_DCADC0AIN0_BIT        (0u)
#define SYSCTL_DC8_R_DCADC0AIN0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN0_PRESENT    ((uint32_t)0x00000001u)

#define SYSCTL_DC8_DCADC0AIN0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN1_MASK       ((uint32_t)0x00000002u)
#define SYSCTL_DC8_R_DCADC0AIN1_BIT        (1u)
#define SYSCTL_DC8_R_DCADC0AIN1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN1_PRESENT    ((uint32_t)0x00000002u)

#define SYSCTL_DC8_DCADC0AIN1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN2_MASK       ((uint32_t)0x00000004u)
#define SYSCTL_DC8_R_DCADC0AIN2_BIT        (2u)
#define SYSCTL_DC8_R_DCADC0AIN2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN2_PRESENT    ((uint32_t)0x00000004u)

#define SYSCTL_DC8_DCADC0AIN2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN2_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN3_MASK       ((uint32_t)0x00000008u)
#define SYSCTL_DC8_R_DCADC0AIN3_BIT        (3u)
#define SYSCTL_DC8_R_DCADC0AIN3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN3_PRESENT    ((uint32_t)0x00000008u)

#define SYSCTL_DC8_DCADC0AIN3_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN3_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN4_MASK       ((uint32_t)0x00000010u)
#define SYSCTL_DC8_R_DCADC0AIN4_BIT        (4u)
#define SYSCTL_DC8_R_DCADC0AIN4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN4_PRESENT    ((uint32_t)0x00000010u)

#define SYSCTL_DC8_DCADC0AIN4_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN4_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN5_MASK       ((uint32_t)0x00000020u)
#define SYSCTL_DC8_R_DCADC0AIN5_BIT        (5u)
#define SYSCTL_DC8_R_DCADC0AIN5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN5_PRESENT    ((uint32_t)0x00000020u)

#define SYSCTL_DC8_DCADC0AIN5_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN5_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN6_MASK       ((uint32_t)0x00000040u)
#define SYSCTL_DC8_R_DCADC0AIN6_BIT        (6u)
#define SYSCTL_DC8_R_DCADC0AIN6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN6_PRESENT    ((uint32_t)0x00000040u)

#define SYSCTL_DC8_DCADC0AIN6_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN6_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN7_MASK       ((uint32_t)0x00000080u)
#define SYSCTL_DC8_R_DCADC0AIN7_BIT        (7u)
#define SYSCTL_DC8_R_DCADC0AIN7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN7_PRESENT    ((uint32_t)0x00000080u)

#define SYSCTL_DC8_DCADC0AIN7_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN7_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN8_MASK       ((uint32_t)0x00000100u)
#define SYSCTL_DC8_R_DCADC0AIN8_BIT        (8u)
#define SYSCTL_DC8_R_DCADC0AIN8_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN8_PRESENT    ((uint32_t)0x00000100u)

#define SYSCTL_DC8_DCADC0AIN8_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN8_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN8_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN9_MASK       ((uint32_t)0x00000200u)
#define SYSCTL_DC8_R_DCADC0AIN9_BIT        (9u)
#define SYSCTL_DC8_R_DCADC0AIN9_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN9_PRESENT    ((uint32_t)0x00000200u)

#define SYSCTL_DC8_DCADC0AIN9_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN9_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN9_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN10_MASK       ((uint32_t)0x00000400u)
#define SYSCTL_DC8_R_DCADC0AIN10_BIT        (10u)
#define SYSCTL_DC8_R_DCADC0AIN10_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN10_PRESENT    ((uint32_t)0x00000400u)

#define SYSCTL_DC8_DCADC0AIN10_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN10_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN10_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN11_MASK       ((uint32_t)0x00000800u)
#define SYSCTL_DC8_R_DCADC0AIN11_BIT        (11u)
#define SYSCTL_DC8_R_DCADC0AIN11_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN11_PRESENT    ((uint32_t)0x00000800u)

#define SYSCTL_DC8_DCADC0AIN11_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN11_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN11_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN12_MASK       ((uint32_t)0x00001000u)
#define SYSCTL_DC8_R_DCADC0AIN12_BIT        (12u)
#define SYSCTL_DC8_R_DCADC0AIN12_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN12_PRESENT    ((uint32_t)0x00001000u)

#define SYSCTL_DC8_DCADC0AIN12_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN12_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN12_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN13_MASK       ((uint32_t)0x00002000u)
#define SYSCTL_DC8_R_DCADC0AIN13_BIT        (13u)
#define SYSCTL_DC8_R_DCADC0AIN13_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN13_PRESENT    ((uint32_t)0x00002000u)

#define SYSCTL_DC8_DCADC0AIN13_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN13_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN13_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN14_MASK       ((uint32_t)0x00004000u)
#define SYSCTL_DC8_R_DCADC0AIN14_BIT        (14u)
#define SYSCTL_DC8_R_DCADC0AIN14_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN14_PRESENT    ((uint32_t)0x00004000u)

#define SYSCTL_DC8_DCADC0AIN14_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN14_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN14_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC0AIN15_MASK       ((uint32_t)0x00008000u)
#define SYSCTL_DC8_R_DCADC0AIN15_BIT        (15u)
#define SYSCTL_DC8_R_DCADC0AIN15_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC0AIN15_PRESENT    ((uint32_t)0x00008000u)

#define SYSCTL_DC8_DCADC0AIN15_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC0AIN15_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC0AIN15_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN0_MASK       ((uint32_t)0x00010000u)
#define SYSCTL_DC8_R_DCADC1AIN0_BIT        (16u)
#define SYSCTL_DC8_R_DCADC1AIN0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN0_PRESENT    ((uint32_t)0x00010000u)

#define SYSCTL_DC8_DCADC1AIN0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN1_MASK       ((uint32_t)0x00020000u)
#define SYSCTL_DC8_R_DCADC1AIN1_BIT        (17u)
#define SYSCTL_DC8_R_DCADC1AIN1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN1_PRESENT    ((uint32_t)0x00020000u)

#define SYSCTL_DC8_DCADC1AIN1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN2_MASK       ((uint32_t)0x00040000u)
#define SYSCTL_DC8_R_DCADC1AIN2_BIT        (18u)
#define SYSCTL_DC8_R_DCADC1AIN2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN2_PRESENT    ((uint32_t)0x00040000u)

#define SYSCTL_DC8_DCADC1AIN2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN2_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN3_MASK       ((uint32_t)0x00080000u)
#define SYSCTL_DC8_R_DCADC1AIN3_BIT        (19u)
#define SYSCTL_DC8_R_DCADC1AIN3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN3_PRESENT    ((uint32_t)0x00080000u)

#define SYSCTL_DC8_DCADC1AIN3_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN3_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN4_MASK       ((uint32_t)0x00100000u)
#define SYSCTL_DC8_R_DCADC1AIN4_BIT        (20u)
#define SYSCTL_DC8_R_DCADC1AIN4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN4_PRESENT    ((uint32_t)0x00100000u)

#define SYSCTL_DC8_DCADC1AIN4_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN4_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN5_MASK       ((uint32_t)0x00200000u)
#define SYSCTL_DC8_R_DCADC1AIN5_BIT        (21u)
#define SYSCTL_DC8_R_DCADC1AIN5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN5_PRESENT    ((uint32_t)0x00200000u)

#define SYSCTL_DC8_DCADC1AIN5_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN5_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN6_MASK       ((uint32_t)0x00400000u)
#define SYSCTL_DC8_R_DCADC1AIN6_BIT        (22u)
#define SYSCTL_DC8_R_DCADC1AIN6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN6_PRESENT    ((uint32_t)0x00400000u)

#define SYSCTL_DC8_DCADC1AIN6_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN6_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN7_MASK       ((uint32_t)0x00800000u)
#define SYSCTL_DC8_R_DCADC1AIN7_BIT        (23u)
#define SYSCTL_DC8_R_DCADC1AIN7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN7_PRESENT    ((uint32_t)0x00800000u)

#define SYSCTL_DC8_DCADC1AIN7_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN7_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN8_MASK       ((uint32_t)0x01000000u)
#define SYSCTL_DC8_R_DCADC1AIN8_BIT        (24u)
#define SYSCTL_DC8_R_DCADC1AIN8_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN8_PRESENT    ((uint32_t)0x01000000u)

#define SYSCTL_DC8_DCADC1AIN8_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN8_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN8_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN9_MASK       ((uint32_t)0x02000000u)
#define SYSCTL_DC8_R_DCADC1AIN9_BIT        (25u)
#define SYSCTL_DC8_R_DCADC1AIN9_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN9_PRESENT    ((uint32_t)0x02000000u)

#define SYSCTL_DC8_DCADC1AIN9_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN9_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN9_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN10_MASK       ((uint32_t)0x04000000u)
#define SYSCTL_DC8_R_DCADC1AIN10_BIT        (26u)
#define SYSCTL_DC8_R_DCADC1AIN10_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN10_PRESENT    ((uint32_t)0x04000000u)

#define SYSCTL_DC8_DCADC1AIN10_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN10_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN10_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN11_MASK       ((uint32_t)0x08000000u)
#define SYSCTL_DC8_R_DCADC1AIN11_BIT        (27u)
#define SYSCTL_DC8_R_DCADC1AIN11_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN11_PRESENT    ((uint32_t)0x08000000u)

#define SYSCTL_DC8_DCADC1AIN11_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN11_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN11_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN12_MASK       ((uint32_t)0x10000000u)
#define SYSCTL_DC8_R_DCADC1AIN12_BIT        (28u)
#define SYSCTL_DC8_R_DCADC1AIN12_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN12_PRESENT    ((uint32_t)0x10000000u)

#define SYSCTL_DC8_DCADC1AIN12_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN12_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN12_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN13_MASK       ((uint32_t)0x20000000u)
#define SYSCTL_DC8_R_DCADC1AIN13_BIT        (29u)
#define SYSCTL_DC8_R_DCADC1AIN13_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN13_PRESENT    ((uint32_t)0x20000000u)

#define SYSCTL_DC8_DCADC1AIN13_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN13_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN13_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN14_MASK       ((uint32_t)0x40000000u)
#define SYSCTL_DC8_R_DCADC1AIN14_BIT        (30u)
#define SYSCTL_DC8_R_DCADC1AIN14_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN14_PRESENT    ((uint32_t)0x40000000u)

#define SYSCTL_DC8_DCADC1AIN14_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN14_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN14_PRESENT    ((uint32_t)0x00000001u)
/*----------*/


/*----------*/
#define SYSCTL_DC8_R_DCADC1AIN15_MASK       ((uint32_t)0x80000000u)
#define SYSCTL_DC8_R_DCADC1AIN15_BIT        (31u)
#define SYSCTL_DC8_R_DCADC1AIN15_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_R_DCADC1AIN15_PRESENT    ((uint32_t)0x80000000u)

#define SYSCTL_DC8_DCADC1AIN15_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC8_DCADC1AIN15_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC8_DCADC1AIN15_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/**********************************************************************************
************************************143 DC9 *********************************************
******************************************************************************************/
/*----------*/
#define SYSCTL_DC9_R_DCADC0DC0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_R_DCADC0DC0_BIT        (0u)
#define SYSCTL_DC9_R_DCADC0DC0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC0_PRESENT    ((uint32_t)0x00000001u)

#define SYSCTL_DC9_DCADC0DC0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC0DC0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC0DC0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC0DC1_MASK       ((uint32_t)0x00000002u)
#define SYSCTL_DC9_R_DCADC0DC1_BIT        (1u)
#define SYSCTL_DC9_R_DCADC0DC1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC1_PRESENT    ((uint32_t)0x00000002u)

#define SYSCTL_DC9_DCADC0DC1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC0DC1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC0DC1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC0DC2_MASK       ((uint32_t)0x00000004u)
#define SYSCTL_DC9_R_DCADC0DC2_BIT        (2u)
#define SYSCTL_DC9_R_DCADC0DC2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC2_PRESENT    ((uint32_t)0x00000004u)

#define SYSCTL_DC9_DCADC0DC2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC0DC2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC0DC2_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC0DC3_MASK       ((uint32_t)0x00000008u)
#define SYSCTL_DC9_R_DCADC0DC3_BIT        (3u)
#define SYSCTL_DC9_R_DCADC0DC3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC3_PRESENT    ((uint32_t)0x00000008u)

#define SYSCTL_DC9_DCADC0DC3_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC0DC3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC0DC3_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC0DC4_MASK       ((uint32_t)0x00000010u)
#define SYSCTL_DC9_R_DCADC0DC4_BIT        (4u)
#define SYSCTL_DC9_R_DCADC0DC4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC4_PRESENT    ((uint32_t)0x00000010u)

#define SYSCTL_DC9_DCADC0DC4_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC0DC4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC0DC4_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC0DC5_MASK       ((uint32_t)0x00000020u)
#define SYSCTL_DC9_R_DCADC0DC5_BIT        (5u)
#define SYSCTL_DC9_R_DCADC0DC5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC5_PRESENT    ((uint32_t)0x00000020u)

#define SYSCTL_DC9_DCADC0DC5_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC0DC5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC0DC5_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC0DC6_MASK       ((uint32_t)0x00000040u)
#define SYSCTL_DC9_R_DCADC0DC6_BIT        (6u)
#define SYSCTL_DC9_R_DCADC0DC6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC6_PRESENT    ((uint32_t)0x00000040u)

#define SYSCTL_DC9_DCADC0DC6_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC0DC6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC0DC6_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC0DC7_MASK       ((uint32_t)0x00000080u)
#define SYSCTL_DC9_R_DCADC0DC7_BIT        (7u)
#define SYSCTL_DC9_R_DCADC0DC7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC0DC7_PRESENT    ((uint32_t)0x00000080u)

#define SYSCTL_DC9_DCADC0DC7_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC0DC7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC0DC7_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC0_MASK       ((uint32_t)0x00010000u)
#define SYSCTL_DC9_R_DCADC1DC0_BIT        (16u)
#define SYSCTL_DC9_R_DCADC1DC0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC0_PRESENT    ((uint32_t)0x00010000u)

#define SYSCTL_DC9_DCADC1DC0_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC1DC0_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC1DC0_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC1_MASK       ((uint32_t)0x00020000u)
#define SYSCTL_DC9_R_DCADC1DC1_BIT        (17u)
#define SYSCTL_DC9_R_DCADC1DC1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC1_PRESENT    ((uint32_t)0x00020000u)

#define SYSCTL_DC9_DCADC1DC1_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC1DC1_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC1DC1_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC2_MASK       ((uint32_t)0x00040000u)
#define SYSCTL_DC9_R_DCADC1DC2_BIT        (18u)
#define SYSCTL_DC9_R_DCADC1DC2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC2_PRESENT    ((uint32_t)0x00040000u)

#define SYSCTL_DC9_DCADC1DC2_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC1DC2_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC1DC2_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC3_MASK       ((uint32_t)0x00080000u)
#define SYSCTL_DC9_R_DCADC1DC3_BIT        (19u)
#define SYSCTL_DC9_R_DCADC1DC3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC3_PRESENT    ((uint32_t)0x00080000u)

#define SYSCTL_DC9_DCADC1DC3_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC1DC3_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC1DC3_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC4_MASK       ((uint32_t)0x00100000u)
#define SYSCTL_DC9_R_DCADC1DC4_BIT        (20u)
#define SYSCTL_DC9_R_DCADC1DC4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC4_PRESENT    ((uint32_t)0x00100000u)

#define SYSCTL_DC9_DCADC1DC4_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC1DC4_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC1DC4_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC5_MASK       ((uint32_t)0x00200000u)
#define SYSCTL_DC9_R_DCADC1DC5_BIT        (21u)
#define SYSCTL_DC9_R_DCADC1DC5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC5_PRESENT    ((uint32_t)0x00200000u)

#define SYSCTL_DC9_DCADC1DC5_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC1DC5_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC1DC5_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC6_MASK       ((uint32_t)0x00400000u)
#define SYSCTL_DC9_R_DCADC1DC6_BIT        (22u)
#define SYSCTL_DC9_R_DCADC1DC6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC6_PRESENT    ((uint32_t)0x00400000u)

#define SYSCTL_DC9_DCADC1DC6_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC1DC6_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC1DC6_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define SYSCTL_DC9_R_DCADC1DC7_MASK       ((uint32_t)0x00800000u)
#define SYSCTL_DC9_R_DCADC1DC7_BIT        (23u)
#define SYSCTL_DC9_R_DCADC1DC7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_R_DCADC1DC7_PRESENT    ((uint32_t)0x00800000u)

#define SYSCTL_DC9_DCADC1DC7_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_DC9_DCADC1DC7_NOPRESENT  ((uint32_t)0x00000000u)
#define SYSCTL_DC9_DCADC1DC7_PRESENT    ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_DC_H_ */
