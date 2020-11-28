/**
 *
 * @file SYSCTL_RegisterDefines_Reset.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_RESET_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_RESET_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 7 RESC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RESC_R_EXT_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RESC_R_EXT_BIT       (0u)
#define SYSCTL_RESC_R_EXT_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_RESC_R_EXT_RESET     ((uint32_t)0x00000001u)

#define SYSCTL_RESC_EXT_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RESC_EXT_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_RESC_EXT_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_POR_MASK      ((uint32_t)0x00000002u)
#define SYSCTL_RESC_R_POR_BIT       (1u)
#define SYSCTL_RESC_R_POR_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_RESC_R_POR_RESET     ((uint32_t)0x00000002u)

#define SYSCTL_RESC_POR_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RESC_POR_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_RESC_POR_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_BOR_MASK      ((uint32_t)0x00000004u)
#define SYSCTL_RESC_R_BOR_BIT       (2u)
#define SYSCTL_RESC_R_BOR_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_RESC_R_BOR_RESET     ((uint32_t)0x00000004u)

#define SYSCTL_RESC_BOR_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RESC_BOR_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_RESC_BOR_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_WDT0_MASK      ((uint32_t)0x00000008u)
#define SYSCTL_RESC_R_WDT0_BIT       (3u)
#define SYSCTL_RESC_R_WDT0_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_RESC_R_WDT0_RESET     ((uint32_t)0x00000008u)

#define SYSCTL_RESC_WDT0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RESC_WDT0_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_RESC_WDT0_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_SW_MASK      ((uint32_t)0x00000010u)
#define SYSCTL_RESC_R_SW_BIT       (4u)
#define SYSCTL_RESC_R_SW_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_RESC_R_SW_RESET     ((uint32_t)0x00000010u)

#define SYSCTL_RESC_SW_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RESC_SW_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_RESC_SW_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_WDT1_MASK      ((uint32_t)0x00000020u)
#define SYSCTL_RESC_R_WDT1_BIT       (5u)
#define SYSCTL_RESC_R_WDT1_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_RESC_R_WDT1_RESET     ((uint32_t)0x00000020u)

#define SYSCTL_RESC_WDT1_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RESC_WDT1_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_RESC_WDT1_RESET       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_RESC_R_MOSCFAIL_MASK      ((uint32_t)0x00010000u)
#define SYSCTL_RESC_R_MOSCFAIL_BIT       (16u)
#define SYSCTL_RESC_R_MOSCFAIL_NORESET   ((uint32_t)0x00000000u)
#define SYSCTL_RESC_R_MOSCFAIL_RESET     ((uint32_t)0x00010000u)

#define SYSCTL_RESC_MOSCFAIL_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_RESC_MOSCFAIL_NORESET     ((uint32_t)0x00000000u)
#define SYSCTL_RESC_MOSCFAIL_RESET       ((uint32_t)0x00000001u)
/*--------*/




#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_RESET_H_ */
