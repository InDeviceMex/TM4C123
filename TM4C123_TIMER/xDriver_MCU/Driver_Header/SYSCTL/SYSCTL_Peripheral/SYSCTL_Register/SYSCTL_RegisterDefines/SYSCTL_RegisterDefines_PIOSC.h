/**
 *
 * @file SYSCTL_RegisterDefines_PIOSC.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PIOSC_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PIOSC_H_

#include <stdint.h>

/******************************************************************************************
************************************14 PIOSCCAL *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PIOSCCAL_R_UT_MASK    ((uint32_t)0x0000007Fu)
#define SYSCTL_PIOSCCAL_R_UT_BIT     (0u)

#define SYSCTL_PIOSCCAL_UT_MASK      ((uint32_t)0x0000007Fu)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCCAL_R_UPDATE_MASK       ((uint32_t)0x00000100u)
#define SYSCTL_PIOSCCAL_R_UPDATE_BIT        (8u)
#define SYSCTL_PIOSCCAL_R_UPDATE_NOACTION   ((uint32_t)0x00000000u)
#define SYSCTL_PIOSCCAL_R_UPDATE_UPDATE     ((uint32_t)0x00000100u)

#define SYSCTL_PIOSCCAL_UPDATE_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_PIOSCCAL_UPDATE_NOACTION     ((uint32_t)0x00000000u)
#define SYSCTL_PIOSCCAL_UPDATE_UPDATE       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCCAL_R_CAL_MASK       ((uint32_t)0x00000200u)
#define SYSCTL_PIOSCCAL_R_CAL_BIT        (9u)
#define SYSCTL_PIOSCCAL_R_CAL_NOACTION   ((uint32_t)0x00000000u)
#define SYSCTL_PIOSCCAL_R_CAL_START      ((uint32_t)0x00000200u)

#define SYSCTL_PIOSCCAL_CAL_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_PIOSCCAL_CAL_NOACTION     ((uint32_t)0x00000000u)
#define SYSCTL_PIOSCCAL_CAL_START        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCCAL_R_UTEN_MASK       ((uint32_t)0x80000000u)
#define SYSCTL_PIOSCCAL_R_UTEN_BIT        (31u)
#define SYSCTL_PIOSCCAL_R_UTEN_FACTORY    ((uint32_t)0x00000000u)
#define SYSCTL_PIOSCCAL_R_UTEN_TRIM       ((uint32_t)0x80000000u)

#define SYSCTL_PIOSCCAL_UTEN_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_PIOSCCAL_UTEN_FACTORY      ((uint32_t)0x00000000u)
#define SYSCTL_PIOSCCAL_UTEN_TRIM         ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************15 PIOSCSTAT *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PIOSCSTAT_R_CT_MASK    ((uint32_t)0x0000007Fu)
#define SYSCTL_PIOSCSTAT_R_CT_BIT     (0u)

#define SYSCTL_PIOSCSTAT_CT_MASK      ((uint32_t)0x0000007Fu)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCSTAT_R_RESULT_MASK    ((uint32_t)0x00000300u)
#define SYSCTL_PIOSCSTAT_R_RESULT_BIT     (8u)

#define SYSCTL_PIOSCSTAT_RESULT_MASK      ((uint32_t)0x00000003u)
/*--------*/

/*--------*/
#define SYSCTL_PIOSCSTAT_R_DT_MASK      ((uint32_t)0x007F0000u)
#define SYSCTL_PIOSCSTAT_R_DT_BIT       (16u)

#define SYSCTL_PIOSCSTAT_v_MASK         ((uint32_t)0x0000007Fu)
/*--------*/





#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_PIOSC_H_ */
