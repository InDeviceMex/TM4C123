/**
 *
 * @file SYSCTL_RegisterDefines_MOSC.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_MOSC_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_MOSC_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 11 MOSCCTL *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_MOSCCTL_R_CVAL_MASK    ((uint32_t)0x00000001U)
#define SYSCTL_MOSCCTL_R_CVAL_BIT     (0U)
#define SYSCTL_MOSCCTL_R_CVAL_DIS     ((uint32_t)0x00000000U)
#define SYSCTL_MOSCCTL_R_CVAL_EN      ((uint32_t)0x00000001U)

#define SYSCTL_MOSCCTL_CVAL_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_MOSCCTL_CVAL_DIS       ((uint32_t)0x00000000U)
#define SYSCTL_MOSCCTL_CVAL_EN        ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_MOSCCTL_R_MOSCIM_MASK    ((uint32_t)0x00000002U)
#define SYSCTL_MOSCCTL_R_MOSCIM_BIT     (1U)
#define SYSCTL_MOSCCTL_R_MOSCIM_RESET   ((uint32_t)0x00000000U)
#define SYSCTL_MOSCCTL_R_MOSCIM_INT     ((uint32_t)0x00000002U)

#define SYSCTL_MOSCCTL_MOSCIM_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_MOSCCTL_MOSCIM_RESET     ((uint32_t)0x00000000U)
#define SYSCTL_MOSCCTL_MOSCIM_INT       ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_MOSCCTL_R_NOXTAL_MASK        ((uint32_t)0x00000004U)
#define SYSCTL_MOSCCTL_R_NOXTAL_BIT         (2U)
#define SYSCTL_MOSCCTL_R_NOXTAL_PRESENT     ((uint32_t)0x00000000U)
#define SYSCTL_MOSCCTL_R_NOXTAL_NOPRESENT   ((uint32_t)0x00000004U)

#define SYSCTL_MOSCCTL_NOXTAL_MASK          ((uint32_t)0x00000001U)
#define SYSCTL_MOSCCTL_NOXTAL_PRESENT       ((uint32_t)0x00000000U)
#define SYSCTL_MOSCCTL_NOXTAL_NOPRESENT     ((uint32_t)0x00000001U)
/*--------*/




#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_MOSC_H_ */
