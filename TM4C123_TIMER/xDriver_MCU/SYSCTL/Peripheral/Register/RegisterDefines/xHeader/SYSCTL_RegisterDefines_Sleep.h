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
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_MASK    ((uint32_t)0x00000002u)
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_BIT     (1u)
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_NOACTION ((uint32_t)0x00000000u)
#define SYSCTL_DSLPCLKCFG_R_PIOSCPD_DOWN    ((uint32_t)0x00000002u)

#define SYSCTL_DSLPCLKCFG_PIOSCPD_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_DSLPCLKCFG_PIOSCPD_NOACTION  ((uint32_t)0x00000000u)
#define SYSCTL_DSLPCLKCFG_PIOSCPD_DOWN      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_MASK    ((uint32_t)0x00000070u)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_BIT     (4u)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_MOSC    ((uint32_t)0x00000000u)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_PIOSC   ((uint32_t)0x00000010u)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_LFIOSC  ((uint32_t)0x00000030u)
#define SYSCTL_DSLPCLKCFG_R_DSOSCSRC_32_768KHZ  ((uint32_t)0x00000070u)

#define SYSCTL_DSLPCLKCFG_DSOSCSRC_MASK         ((uint32_t)0x00000007u)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_MOSC         ((uint32_t)0x00000000u)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_PIOSC        ((uint32_t)0x00000001u)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_LFIOSC       ((uint32_t)0x00000003u)
#define SYSCTL_DSLPCLKCFG_DSOSCSRC_32_768KHZ    ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define SYSCTL_DSLPCLKCFG_R_DSDIVORIDE_MASK    ((uint32_t)0x1F800000u)
#define SYSCTL_DSLPCLKCFG_R_DSDIVORIDE_BIT     (23u)

#define SYSCTL_DSLPCLKCFG_DSDIVORIDE_MASK      ((uint32_t)0x0000003Fu)
/*--------*/

/******************************************************************************************
************************************19 SLSRWRCFG *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SLSRWRCFG_R_SRAMPM_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_BIT        (0u)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_STANDBY    ((uint32_t)0x00000001u)
#define SYSCTL_SLSRWRCFG_R_SRAMPM_LOWPOWER   ((uint32_t)0x00000003u)

#define SYSCTL_SLSRWRCFG_SRAMPM_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_SLSRWRCFG_SRAMPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_SLSRWRCFG_SRAMPM_STANDBY    ((uint32_t)0x00000001u)
#define SYSCTL_SLSRWRCFG_SRAMPM_LOWPOWER   ((uint32_t)0x00000003u)
/*--------*/

/*--------*/
#define SYSCTL_SLSRWRCFG_R_FLASHPM_MASK       ((uint32_t)0x00000030u)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_BIT        (2u)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_SLSRWRCFG_R_FLASHPM_LOWPOWER   ((uint32_t)0x00000020u)

#define SYSCTL_SLSRWRCFG_FLASHPM_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_SLSRWRCFG_FLASHPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_SLSRWRCFG_FLASHPM_LOWPOWER   ((uint32_t)0x00000002u)
/*--------*/

/******************************************************************************************
************************************20 DSLSRWRCFG *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_BIT        (0u)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_STANDBY    ((uint32_t)0x00000001u)
#define SYSCTL_DSLSRWRCFG_R_SRAMPM_LOWPOWER   ((uint32_t)0x00000003u)

#define SYSCTL_DSLSRWRCFG_SRAMPM_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_DSLSRWRCFG_SRAMPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_DSLSRWRCFG_SRAMPM_STANDBY    ((uint32_t)0x00000001u)
#define SYSCTL_DSLSRWRCFG_SRAMPM_LOWPOWER   ((uint32_t)0x00000003u)
/*--------*/

/*--------*/
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_MASK       ((uint32_t)0x00000030u)
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_BIT        (2u)
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_DSLSRWRCFG_R_FLASHPM_LOWPOWER   ((uint32_t)0x00000020u)

#define SYSCTL_DSLSRWRCFG_FLASHPM_MASK       ((uint32_t)0x00000003u)
#define SYSCTL_DSLSRWRCFG_FLASHPM_ACTIVE     ((uint32_t)0x00000000u)
#define SYSCTL_DSLSRWRCFG_FLASHPM_LOWPOWER   ((uint32_t)0x00000002u)
/*--------*/





#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_SLEEP_H_ */
