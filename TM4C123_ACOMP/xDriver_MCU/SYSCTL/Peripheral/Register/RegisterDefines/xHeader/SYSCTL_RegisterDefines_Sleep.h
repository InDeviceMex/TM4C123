/**
 *
 * @file SYSCTL_RegisterDefines_Sleep.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_SLEEP_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_SLEEP_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************12 DSLPCLKCFG *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_MASK    ((uint32_t)0x00000002U)
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_BIT     (1U)
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_NOACTION ((uint32_t)0x00000000U)
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_DOWN    ((uint32_t)0x00000002U)

#define SYSCTL_DSLPCLKCFG_PIOSCPD_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_DSLPCLKCFG_PIOSCPD_NOACTION  ((uint32_t)0x00000000U)
#define SYSCTL_DSLPCLKCFG_PIOSCPD_DOWN      ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_MASK    ((uint32_t)0x00000070U)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_BIT     (4U)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_MOSC    ((uint32_t)0x00000000U)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_PIOSC   ((uint32_t)0x00000010U)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_LFIOSC  ((uint32_t)0x00000030U)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_32_768KHZ  ((uint32_t)0x00000070U)

#define SYSCTL_DSLPCLKCFG_DSOSCSRC_MASK         ((uint32_t)0x00000007U)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_MOSC         ((uint32_t)0x00000000U)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_PIOSC        ((uint32_t)0x00000001U)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_LFIOSC       ((uint32_t)0x00000003U)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_32_768KHZ    ((uint32_t)0x00000007U)
/*--------*/

/*--------*/
#define SYSCTL_DSLPCLKCFG_R_DSDIVORIDE_MASK    ((uint32_t)0x1F800000U)
#define SYSCTL_DSLPCLKCFG_R_DSDIVORIDE_BIT     (23U)

#define SYSCTL_DSLPCLKCFG_DSDIVORIDE_MASK      ((uint32_t)0x0000003FU)
/*--------*/

/******************************************************************************************
************************************19 SLSRWRCFG *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SLSRWRCFG_R_SRAMPM_MASK       ((uint32_t)0x00000003U)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_BIT        (0U)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_ACTIVE     ((uint32_t)0x00000000U)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_STANDBY    ((uint32_t)0x00000001U)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_LOWPOWER   ((uint32_t)0x00000003U)

#define SYSCTL_SLSRWRCFG_SRAMPM_MASK       ((uint32_t)0x00000003U)
#define SYSCTL_SLSRWRCFG_SRAMPM_ACTIVE     ((uint32_t)0x00000000U)
#define SYSCTL_SLSRWRCFG_SRAMPM_STANDBY    ((uint32_t)0x00000001U)
#define SYSCTL_SLSRWRCFG_SRAMPM_LOWPOWER   ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define SYSCTL_SLSRWRCFG_R_FLASHPM_MASK       ((uint32_t)0x00000030U)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_BIT        (2U)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_ACTIVE     ((uint32_t)0x00000000U)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_LOWPOWER   ((uint32_t)0x00000020U)

#define SYSCTL_SLSRWRCFG_FLASHPM_MASK       ((uint32_t)0x00000003U)
#define SYSCTL_SLSRWRCFG_FLASHPM_ACTIVE     ((uint32_t)0x00000000U)
#define SYSCTL_SLSRWRCFG_FLASHPM_LOWPOWER   ((uint32_t)0x00000002U)
/*--------*/

/******************************************************************************************
************************************20 DSLSRWRCFG *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_MASK       ((uint32_t)0x00000003U)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_BIT        (0U)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_ACTIVE     ((uint32_t)0x00000000U)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_STANDBY    ((uint32_t)0x00000001U)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_LOWPOWER   ((uint32_t)0x00000003U)

#define SYSCTL_DSLSRWRCFG_SRAMPM_MASK       ((uint32_t)0x00000003U)
#define SYSCTL_DSLSRWRCFG_SRAMPM_ACTIVE     ((uint32_t)0x00000000U)
#define SYSCTL_DSLSRWRCFG_SRAMPM_STANDBY    ((uint32_t)0x00000001U)
#define SYSCTL_DSLSRWRCFG_SRAMPM_LOWPOWER   ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_MASK       ((uint32_t)0x00000030U)
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_BIT        (2U)
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_ACTIVE     ((uint32_t)0x00000000U)
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_LOWPOWER   ((uint32_t)0x00000020U)

#define SYSCTL_DSLSRWRCFG_FLASHPM_MASK       ((uint32_t)0x00000003U)
#define SYSCTL_DSLSRWRCFG_FLASHPM_ACTIVE     ((uint32_t)0x00000000U)
#define SYSCTL_DSLSRWRCFG_FLASHPM_LOWPOWER   ((uint32_t)0x00000002U)
/*--------*/





#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_SLEEP_H_ */
