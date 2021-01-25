/**
 *
 * @file SYSCTL_RegisterDefines_BOR.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_BOR_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_BOR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 3 PBORCTL *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_PBORCTL_R_BOR1_MASK  ((uint32_t)0x00000002U)
#define SYSCTL_PBORCTL_R_BOR1_BIT   (1U)
#define SYSCTL_PBORCTL_R_BOR1_INT   ((uint32_t)0x00000000U)
#define SYSCTL_PBORCTL_R_BOR1_RESET ((uint32_t)0x00000002U)

#define SYSCTL_PBORCTL_BOR1_MASK    ((uint32_t)0x00000001U)
#define SYSCTL_PBORCTL_BOR1_INT     ((uint32_t)0x00000000U)
#define SYSCTL_PBORCTL_BOR1_RESET   ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_PBORCTL_R_BOR0_MASK  ((uint32_t)0x00000004U)
#define SYSCTL_PBORCTL_R_BOR0_BIT   (2U)
#define SYSCTL_PBORCTL_R_BOR0_INT   ((uint32_t)0x00000000U)
#define SYSCTL_PBORCTL_R_BOR0_RESET ((uint32_t)0x00000004U)

#define SYSCTL_PBORCTL_BOR0_MASK    ((uint32_t)0x00000001U)
#define SYSCTL_PBORCTL_BOR0_INT     ((uint32_t)0x00000000U)
#define SYSCTL_PBORCTL_BOR0_RESET   ((uint32_t)0x00000001U)
/*--------*/





#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_BOR_H_ */
