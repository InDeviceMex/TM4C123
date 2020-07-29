/**
 *
 * @file SYSCTL_RegisterDefines_PLL.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PLL_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PLL_H_

#include <stdint.h>

/******************************************************************************************
************************************16 PLLFREQ0 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PLLFREQ0_R_MINT_MASK    ((uint32_t)0x000003FFu)
#define SYSCTL_PLLFREQ0_R_MINT_BIT     (0u)

#define SYSCTL_PLLFREQ0_MINT_MASK      ((uint32_t)0x000003FFu)
/*--------*/

/*--------*/
#define SYSCTL_PLLFREQ0_R_MFRAC_MASK    ((uint32_t)0x000FFC00u)
#define SYSCTL_PLLFREQ0_R_MFRAC_BIT     (10u)

#define SYSCTL_PLLFREQ0_MFRAC_MASK      ((uint32_t)0x000003FFu)
/*--------*/

/******************************************************************************************
************************************17 PLLFREQ1 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PLLFREQ1_R_N_MASK    ((uint32_t)0x0000001Fu)
#define SYSCTL_PLLFREQ1_R_N_BIT     (0u)

#define SYSCTL_PLLFREQ1_N_MASK      ((uint32_t)0x0000001Fu)
/*--------*/

/*--------*/
#define SYSCTL_PLLFREQ1_R_Q_MASK    ((uint32_t)0x00001F00u)
#define SYSCTL_PLLFREQ1_R_Q_BIT     (8u)

#define SYSCTL_PLLFREQ1_Q_MASK      ((uint32_t)0x0000001Fu)
/*--------*/

/******************************************************************************************
************************************18 PLLSTAT *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PLLSTAT_R_LOCK_MASK       ((uint32_t)0x00000001u)
#define SYSCTL_PLLSTAT_R_LOCK_BIT        (0u)
#define SYSCTL_PLLSTAT_R_LOCK_NOLOCK    ((uint32_t)0x00000000u)
#define SYSCTL_PLLSTAT_R_LOCK_LOCK      ((uint32_t)0x00000001u)

#define SYSCTL_PLLSTAT_LOCK_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_PLLSTAT_LOCK_NOLOCK      ((uint32_t)0x00000000u)
#define SYSCTL_PLLSTAT_LOCK_LOCK        ((uint32_t)0x00000001u)
/*--------*/



#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PLL_H_ */
