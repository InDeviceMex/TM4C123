/**
 *
 * @file NVIC_RegisterDefines_IPR7.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_IPR_NVIC_REGISTERDEFINES_IPR7_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_IPR_NVIC_REGISTERDEFINES_IPR7_H_

#include <xUtils/Standard/Standard.h>

/********************************************************************************************/
/************************************* IPR7 ***********************************************/
/******************************************************************************************/

/*----------*/
#define NVIC_IPR7_R_NVIC_SYSCTL_MASK      ((uint32_t)0x000000E0U)
#define NVIC_IPR7_R_NVIC_SYSCTL_BIT       (5U)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP0       ((uint32_t)0x00000000U)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP1       ((uint32_t)0x00000020U)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP2       ((uint32_t)0x00000040U)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP3       ((uint32_t)0x00000060U)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP4       ((uint32_t)0x00000080U)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP5       ((uint32_t)0x000000A0U)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP6       ((uint32_t)0x000000C0U)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP7       ((uint32_t)0x000000E0U)

#define NVIC_IPR7_NVIC_SYSCTL_MASK        ((uint32_t)0x00000007U)
#define NVIC_IPR7_NVIC_SYSCTL_IP0         ((uint32_t)0x00000000U)
#define NVIC_IPR7_NVIC_SYSCTL_IP1         ((uint32_t)0x00000001U)
#define NVIC_IPR7_NVIC_SYSCTL_IP2         ((uint32_t)0x00000002U)
#define NVIC_IPR7_NVIC_SYSCTL_IP3         ((uint32_t)0x00000003U)
#define NVIC_IPR7_NVIC_SYSCTL_IP4         ((uint32_t)0x00000004U)
#define NVIC_IPR7_NVIC_SYSCTL_IP5         ((uint32_t)0x00000005U)
#define NVIC_IPR7_NVIC_SYSCTL_IP6         ((uint32_t)0x00000006U)
#define NVIC_IPR7_NVIC_SYSCTL_IP7         ((uint32_t)0x00000007U)
/*----------*/

/*----------*/
#define NVIC_IPR7_R_NVIC_FLASH_MASK  ((uint32_t)0x0000E000U)
#define NVIC_IPR7_R_NVIC_FLASH_BIT   (13U)
#define NVIC_IPR7_R_NVIC_FLASH_IP0   ((uint32_t)0x00000000U)
#define NVIC_IPR7_R_NVIC_FLASH_IP1   ((uint32_t)0x00002000U)
#define NVIC_IPR7_R_NVIC_FLASH_IP2   ((uint32_t)0x00004000U)
#define NVIC_IPR7_R_NVIC_FLASH_IP3   ((uint32_t)0x00006000U)
#define NVIC_IPR7_R_NVIC_FLASH_IP4   ((uint32_t)0x00008000U)
#define NVIC_IPR7_R_NVIC_FLASH_IP5   ((uint32_t)0x0000A000U)
#define NVIC_IPR7_R_NVIC_FLASH_IP6   ((uint32_t)0x0000C000U)
#define NVIC_IPR7_R_NVIC_FLASH_IP7   ((uint32_t)0x0000E000U)

#define NVIC_IPR7_NVIC_FLASH_MASK    ((uint32_t)0x00000007U)
#define NVIC_IPR7_NVIC_FLASH_IP0     ((uint32_t)0x00000000U)
#define NVIC_IPR7_NVIC_FLASH_IP1     ((uint32_t)0x00000001U)
#define NVIC_IPR7_NVIC_FLASH_IP2     ((uint32_t)0x00000002U)
#define NVIC_IPR7_NVIC_FLASH_IP3     ((uint32_t)0x00000003U)
#define NVIC_IPR7_NVIC_FLASH_IP4     ((uint32_t)0x00000004U)
#define NVIC_IPR7_NVIC_FLASH_IP5     ((uint32_t)0x00000005U)
#define NVIC_IPR7_NVIC_FLASH_IP6     ((uint32_t)0x00000006U)
#define NVIC_IPR7_NVIC_FLASH_IP7     ((uint32_t)0x00000007U)
/*----------*/

/*----------*/
#define NVIC_IPR7_R_NVIC_GPIOF_MASK   ((uint32_t)0x00E00000U)
#define NVIC_IPR7_R_NVIC_GPIOF_BIT    (21U)
#define NVIC_IPR7_R_NVIC_GPIOF_IP0    ((uint32_t)0x00000000U)
#define NVIC_IPR7_R_NVIC_GPIOF_IP1    ((uint32_t)0x00200000U)
#define NVIC_IPR7_R_NVIC_GPIOF_IP2    ((uint32_t)0x00400000U)
#define NVIC_IPR7_R_NVIC_GPIOF_IP3    ((uint32_t)0x00600000U)
#define NVIC_IPR7_R_NVIC_GPIOF_IP4    ((uint32_t)0x00800000U)
#define NVIC_IPR7_R_NVIC_GPIOF_IP5    ((uint32_t)0x00A00000U)
#define NVIC_IPR7_R_NVIC_GPIOF_IP6    ((uint32_t)0x00C00000U)
#define NVIC_IPR7_R_NVIC_GPIOF_IP7    ((uint32_t)0x00E00000U)

#define NVIC_IPR7_NVIC_GPIOF_MASK     ((uint32_t)0x00000007U)
#define NVIC_IPR7_NVIC_GPIOF_IP0      ((uint32_t)0x00000000U)
#define NVIC_IPR7_NVIC_GPIOF_IP1      ((uint32_t)0x00000001U)
#define NVIC_IPR7_NVIC_GPIOF_IP2      ((uint32_t)0x00000002U)
#define NVIC_IPR7_NVIC_GPIOF_IP3      ((uint32_t)0x00000003U)
#define NVIC_IPR7_NVIC_GPIOF_IP4      ((uint32_t)0x00000004U)
#define NVIC_IPR7_NVIC_GPIOF_IP5      ((uint32_t)0x00000005U)
#define NVIC_IPR7_NVIC_GPIOF_IP6      ((uint32_t)0x00000006U)
#define NVIC_IPR7_NVIC_GPIOF_IP7      ((uint32_t)0x00000007U)
/*----------*/

/*----------*/
#define NVIC_IPR7_R_NVIC_RES47_MASK   ((uint32_t)0xE0000000U)
#define NVIC_IPR7_R_NVIC_RES47_BIT    (29U)
#define NVIC_IPR7_R_NVIC_RES47_IP0    ((uint32_t)0x00000000U)
#define NVIC_IPR7_R_NVIC_RES47_IP1    ((uint32_t)0x20000000U)
#define NVIC_IPR7_R_NVIC_RES47_IP2    ((uint32_t)0x40000000U)
#define NVIC_IPR7_R_NVIC_RES47_IP3    ((uint32_t)0x60000000U)
#define NVIC_IPR7_R_NVIC_RES47_IP4    ((uint32_t)0x80000000U)
#define NVIC_IPR7_R_NVIC_RES47_IP5    ((uint32_t)0xA0000000U)
#define NVIC_IPR7_R_NVIC_RES47_IP6    ((uint32_t)0xC0000000U)
#define NVIC_IPR7_R_NVIC_RES47_IP7    ((uint32_t)0xE0000000U)

#define NVIC_IPR7_NVIC_RES47_MASK     ((uint32_t)0x00000007U)
#define NVIC_IPR7_NVIC_RES47_IP0      ((uint32_t)0x00000000U)
#define NVIC_IPR7_NVIC_RES47_IP1      ((uint32_t)0x00000001U)
#define NVIC_IPR7_NVIC_RES47_IP2      ((uint32_t)0x00000002U)
#define NVIC_IPR7_NVIC_RES47_IP3      ((uint32_t)0x00000003U)
#define NVIC_IPR7_NVIC_RES47_IP4      ((uint32_t)0x00000004U)
#define NVIC_IPR7_NVIC_RES47_IP5      ((uint32_t)0x00000005U)
#define NVIC_IPR7_NVIC_RES47_IP6      ((uint32_t)0x00000006U)
#define NVIC_IPR7_NVIC_RES47_IP7      ((uint32_t)0x00000007U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_IPR_NVIC_REGISTERDEFINES_IPR7_H_ */
