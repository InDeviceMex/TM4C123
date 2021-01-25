/**
 *
 * @file SYSCTL_RegisterDefines_RCC.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_RCC_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_RCC_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 8 RCC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCC_R_MOSCDIS_MASK    ((uint32_t)0x00000001U)
#define SYSCTL_RCC_R_MOSCDIS_BIT     (0U)
#define SYSCTL_RCC_R_MOSCDIS_EN      ((uint32_t)0x00000000U)
#define SYSCTL_RCC_R_MOSCDIS_DIS     ((uint32_t)0x00000001U)

#define SYSCTL_RCC_MOSCDIS_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_RCC_MOSCDIS_EN        ((uint32_t)0x00000000U)
#define SYSCTL_RCC_MOSCDIS_DIS       ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_OSCSRC_MASK    ((uint32_t)0x00000030U)
#define SYSCTL_RCC_R_OSCSRC_BIT     (4U)
#define SYSCTL_RCC_R_OSCSRC_MOSC    ((uint32_t)0x00000000U)
#define SYSCTL_RCC_R_OSCSRC_PIOSC   ((uint32_t)0x00000010U)
#define SYSCTL_RCC_R_OSCSRC_PIOSC4  ((uint32_t)0x00000020U)
#define SYSCTL_RCC_R_OSCSRC_LFIOSC  ((uint32_t)0x00000030U)

#define SYSCTL_RCC_OSCSRC_MASK      ((uint32_t)0x00000003U)
#define SYSCTL_RCC_OSCSRC_MOSC      ((uint32_t)0x00000000U)
#define SYSCTL_RCC_OSCSRC_PIOSC     ((uint32_t)0x00000001U)
#define SYSCTL_RCC_OSCSRC_PIOSC4    ((uint32_t)0x00000002U)
#define SYSCTL_RCC_OSCSRC_LFIOSC    ((uint32_t)0x00000003U)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_XTAL_MASK      ((uint32_t)0x000007C0U)
#define SYSCTL_RCC_R_XTAL_BIT       (6U)
#define SYSCTL_RCC_R_XTAL_4MHZ      ((uint32_t)0x00000180U)
#define SYSCTL_RCC_R_XTAL_4_096MHZ  ((uint32_t)0x000001C0U)
#define SYSCTL_RCC_R_XTAL_4_9152MHZ ((uint32_t)0x00000200U)
#define SYSCTL_RCC_R_XTAL_5MHZ      ((uint32_t)0x00000240U)
#define SYSCTL_RCC_R_XTAL_5_12MHZ   ((uint32_t)0x00000280U)
#define SYSCTL_RCC_R_XTAL_6MHZ      ((uint32_t)0x000002C0U)
#define SYSCTL_RCC_R_XTAL_6_144MHZ  ((uint32_t)0x00000300U)
#define SYSCTL_RCC_R_XTAL_7_3728MHZ ((uint32_t)0x00000340U)
#define SYSCTL_RCC_R_XTAL_8MHZ      ((uint32_t)0x00000380U)
#define SYSCTL_RCC_R_XTAL_8_192MHZ  ((uint32_t)0x000003C0U)
#define SYSCTL_RCC_R_XTAL_10MHZ     ((uint32_t)0x00000400U)
#define SYSCTL_RCC_R_XTAL_12MHZ     ((uint32_t)0x00000440U)
#define SYSCTL_RCC_R_XTAL_12_288MHZ ((uint32_t)0x00000480U)
#define SYSCTL_RCC_R_XTAL_13_56MHZ  ((uint32_t)0x000004C0U)
#define SYSCTL_RCC_R_XTAL_14_31818MHZ     ((uint32_t)0x00000500U)
#define SYSCTL_RCC_R_XTAL_16MHZ     ((uint32_t)0x00000540U)
#define SYSCTL_RCC_R_XTAL_16_384MHZ ((uint32_t)0x00000580U)
#define SYSCTL_RCC_R_XTAL_18MHZ     ((uint32_t)0x000005C0U)
#define SYSCTL_RCC_R_XTAL_20MHZ     ((uint32_t)0x00000600U)
#define SYSCTL_RCC_R_XTAL_24MHZ     ((uint32_t)0x00000640U)
#define SYSCTL_RCC_R_XTAL_25MHZ     ((uint32_t)0x00000680U)

#define SYSCTL_RCC_XTAL_MASK      ((uint32_t)0x0000001FU)
#define SYSCTL_RCC_XTAL_4MHZ      ((uint32_t)0x00000006U)
#define SYSCTL_RCC_XTAL_4_096MHZ  ((uint32_t)0x00000007U)
#define SYSCTL_RCC_XTAL_4_9152MHZ ((uint32_t)0x00000008U)
#define SYSCTL_RCC_XTAL_5MHZ      ((uint32_t)0x00000009U)
#define SYSCTL_RCC_XTAL_5_12MHZ   ((uint32_t)0x0000000AU)
#define SYSCTL_RCC_XTAL_6MHZ      ((uint32_t)0x0000000BU)
#define SYSCTL_RCC_XTAL_6_144MHZ  ((uint32_t)0x0000000CU)
#define SYSCTL_RCC_XTAL_7_3728MHZ ((uint32_t)0x0000000DU)
#define SYSCTL_RCC_XTAL_8MHZ      ((uint32_t)0x0000000EU)
#define SYSCTL_RCC_XTAL_8_192MHZ  ((uint32_t)0x0000000FU)
#define SYSCTL_RCC_XTAL_10MHZ     ((uint32_t)0x00000010U)
#define SYSCTL_RCC_XTAL_12MHZ     ((uint32_t)0x00000011U)
#define SYSCTL_RCC_XTAL_12_288MHZ ((uint32_t)0x00000012U)
#define SYSCTL_RCC_XTAL_13_56MHZ  ((uint32_t)0x00000013U)
#define SYSCTL_RCC_XTAL_14_31818MHZ     ((uint32_t)0x00000014U)
#define SYSCTL_RCC_XTAL_16MHZ     ((uint32_t)0x00000015U)
#define SYSCTL_RCC_XTAL_16_384MHZ ((uint32_t)0x00000016U)
#define SYSCTL_RCC_XTAL_18MHZ     ((uint32_t)0x00000017U)
#define SYSCTL_RCC_XTAL_20MHZ     ((uint32_t)0x00000018U)
#define SYSCTL_RCC_XTAL_24MHZ     ((uint32_t)0x00000019U)
#define SYSCTL_RCC_XTAL_25MHZ     ((uint32_t)0x0000001AU)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_BYPASS_MASK    ((uint32_t)0x00000800U)
#define SYSCTL_RCC_R_BYPASS_BIT     (11U)
#define SYSCTL_RCC_R_BYPASS_PLL     ((uint32_t)0x00000000U)
#define SYSCTL_RCC_R_BYPASS_OSC     ((uint32_t)0x00000800U)

#define SYSCTL_RCC_BYPASS_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_RCC_BYPASS_PLL       ((uint32_t)0x00000000U)
#define SYSCTL_RCC_BYPASS_OSC       ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_PWRDN_MASK    ((uint32_t)0x00002000U)
#define SYSCTL_RCC_R_PWRDN_BIT     (13U)
#define SYSCTL_RCC_R_PWRDN_ON      ((uint32_t)0x00000000U)
#define SYSCTL_RCC_R_PWRDN_DOWN    ((uint32_t)0x00002000U)

#define SYSCTL_RCC_PWRDN_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_RCC_PWRDN_ON        ((uint32_t)0x00000000U)
#define SYSCTL_RCC_PWRDN_DOWN      ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_PWMDIV_MASK    ((uint32_t)0x000E0000U)
#define SYSCTL_RCC_R_PWMDIV_BIT     (17U)
#define SYSCTL_RCC_R_PWMDIV_2       ((uint32_t)0x00000000U)
#define SYSCTL_RCC_R_PWMDIV_4       ((uint32_t)0x00020000U)
#define SYSCTL_RCC_R_PWMDIV_8       ((uint32_t)0x00040000U)
#define SYSCTL_RCC_R_PWMDIV_16      ((uint32_t)0x00060000U)
#define SYSCTL_RCC_R_PWMDIV_32      ((uint32_t)0x00080000U)
#define SYSCTL_RCC_R_PWMDIV_64      ((uint32_t)0x000E0000U)

#define SYSCTL_RCC_PWMDIV_MASK      ((uint32_t)0x00000007U)
#define SYSCTL_RCC_PWMDIV_2         ((uint32_t)0x00000000U)
#define SYSCTL_RCC_PWMDIV_4         ((uint32_t)0x00000001U)
#define SYSCTL_RCC_PWMDIV_8         ((uint32_t)0x00000002U)
#define SYSCTL_RCC_PWMDIV_16        ((uint32_t)0x00000003U)
#define SYSCTL_RCC_PWMDIV_32        ((uint32_t)0x00000004U)
#define SYSCTL_RCC_PWMDIV_64        ((uint32_t)0x00000007U)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_USEPWMDIV_MASK    ((uint32_t)0x00100000U)
#define SYSCTL_RCC_R_USEPWMDIV_BIT     (20U)
#define SYSCTL_RCC_R_USEPWMDIV_SYSCLK  ((uint32_t)0x00000000U)
#define SYSCTL_RCC_R_USEPWMDIV_PWMDIV  ((uint32_t)0x00100000U)

#define SYSCTL_RCC_USEPWMDIV_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_RCC_USEPWMDIV_SYSCLK    ((uint32_t)0x00000000U)
#define SYSCTL_RCC_USEPWMDIV_PWMDIV    ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_USESYSDIV_MASK    ((uint32_t)0x00400000U)
#define SYSCTL_RCC_R_USESYSDIV_BIT     (22U)
#define SYSCTL_RCC_R_USESYSDIV_SYSCLK  ((uint32_t)0x00000000U)
#define SYSCTL_RCC_R_USESYSDIV_SYSDIV  ((uint32_t)0x00400000U)

#define SYSCTL_RCC_USESYSDIV_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_RCC_USESYSDIV_SYSCLK    ((uint32_t)0x00000000U)
#define SYSCTL_RCC_USESYSDIV_SYSDIV    ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_SYSDIV_MASK    ((uint32_t)0x07800000U)
#define SYSCTL_RCC_R_SYSDIV_BIT     (23U)

#define SYSCTL_RCC_SYSDIV_MASK      ((uint32_t)0x0000000FU)
/*--------*/

/*--------*/
#define SYSCTL_RCC_R_ACG_MASK    ((uint32_t)0x08000000U)
#define SYSCTL_RCC_R_ACG_BIT     (27U)
#define SYSCTL_RCC_R_ACG_RCGCn  ((uint32_t)0x00000000U)
#define SYSCTL_RCC_R_ACG_SCGCn  ((uint32_t)0x08000000U)

#define SYSCTL_RCC_ACG_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_RCC_ACG_RCGCn    ((uint32_t)0x00000000U)
#define SYSCTL_RCC_ACG_SCGCn    ((uint32_t)0x00000001U)
/*--------*/


/******************************************************************************************
************************************ 10 RCC2 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RCC2_R_OSCSRC2_MASK    ((uint32_t)0x00000070U)
#define SYSCTL_RCC2_R_OSCSRC2_BIT     (4U)
#define SYSCTL_RCC2_R_OSCSRC2_MOSC    ((uint32_t)0x00000000U)
#define SYSCTL_RCC2_R_OSCSRC2_PIOSC   ((uint32_t)0x00000010U)
#define SYSCTL_RCC2_R_OSCSRC2_PIOSC4  ((uint32_t)0x00000020U)
#define SYSCTL_RCC2_R_OSCSRC2_LFIOSC  ((uint32_t)0x00000030U)
#define SYSCTL_RCC2_R_OSCSRC2_32_768KHZ  ((uint32_t)0x00000070U)

#define SYSCTL_RCC2_OSCSRC2_MASK      ((uint32_t)0x00000007U)
#define SYSCTL_RCC2_OSCSRC2_MOSC      ((uint32_t)0x00000000U)
#define SYSCTL_RCC2_OSCSRC2_PIOSC     ((uint32_t)0x00000001U)
#define SYSCTL_RCC2_OSCSRC2_PIOSC4    ((uint32_t)0x00000002U)
#define SYSCTL_RCC2_OSCSRC2_LFIOSC    ((uint32_t)0x00000003U)
#define SYSCTL_RCC2_OSCSRC2_32_768KHZ    ((uint32_t)0x00000007U)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_BYPASS2_MASK    ((uint32_t)0x00000800U)
#define SYSCTL_RCC2_R_BYPASS2_BIT     (11U)
#define SYSCTL_RCC2_R_BYPASS2_PLL     ((uint32_t)0x00000000U)
#define SYSCTL_RCC2_R_BYPASS2_OSC     ((uint32_t)0x00000800U)

#define SYSCTL_RCC2_BYPASS2_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_RCC2_BYPASS2_PLL       ((uint32_t)0x00000000U)
#define SYSCTL_RCC2_BYPASS2_OSC       ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_PWRDN2_MASK    ((uint32_t)0x00002000U)
#define SYSCTL_RCC2_R_PWRDN2_BIT     (13U)
#define SYSCTL_RCC2_R_PWRDN2_ON      ((uint32_t)0x00000000U)
#define SYSCTL_RCC2_R_PWRDN2_DOWN    ((uint32_t)0x00002000U)

#define SYSCTL_RCC2_PWRDN2_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_RCC2_PWRDN2_ON        ((uint32_t)0x00000000U)
#define SYSCTL_RCC2_PWRDN2_DOWN      ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_USBPWRDN_MASK    ((uint32_t)0x00004000U)
#define SYSCTL_RCC2_R_USBPWRDN_BIT     (14U)
#define SYSCTL_RCC2_R_USBPWRDN_ON      ((uint32_t)0x00000000U)
#define SYSCTL_RCC2_R_USBPWRDN_DOWN    ((uint32_t)0x00004000U)

#define SYSCTL_RCC2_USBPWRDN_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_RCC2_USBPWRDN_ON        ((uint32_t)0x00000000U)
#define SYSCTL_RCC2_USBPWRDN_DOWN      ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_SYSDIV2LSB_MASK    ((uint32_t)0x00400000U)
#define SYSCTL_RCC2_R_SYSDIV2LSB_BIT     (22U)
#define SYSCTL_RCC2_R_SYSDIV2LSB_CLEAR   ((uint32_t)0x00000000U)
#define SYSCTL_RCC2_R_SYSDIV2LSB_SET     ((uint32_t)0x00400000U)

#define SYSCTL_RCC2_SYSDIV2LSB_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_RCC2_SYSDIV2LSB_CLEAR     ((uint32_t)0x00000000U)
#define SYSCTL_RCC2_SYSDIV2LSB_SET       ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_SYSDIV2_MASK    ((uint32_t)0x1F800000U)
#define SYSCTL_RCC2_R_SYSDIV2_BIT     (23U)

#define SYSCTL_RCC2_SYSDIV2_MASK      ((uint32_t)0x0000003FU)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_DIV400_MASK    ((uint32_t)0x40000000U)
#define SYSCTL_RCC2_R_DIV400_BIT     (30U)
#define SYSCTL_RCC2_R_DIV400_200MHZ  ((uint32_t)0x00000000U)
#define SYSCTL_RCC2_R_DIV400_400MHZ  ((uint32_t)0x40000000U)

#define SYSCTL_RCC2_DIV400_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_RCC2_DIV400_200MHZ    ((uint32_t)0x00000000U)
#define SYSCTL_RCC2_DIV400_400MHZ    ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_RCC2_R_USERCC2_MASK    ((uint32_t)0x80000000U)
#define SYSCTL_RCC2_R_USERCC2_BIT     (31U)
#define SYSCTL_RCC2_R_USERCC2_RCC     ((uint32_t)0x00000000U)
#define SYSCTL_RCC2_R_USERCC2_RCC2    ((uint32_t)0x80000000U)

#define SYSCTL_RCC2_USERCC2_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_RCC2_USERCC2_RCC       ((uint32_t)0x00000000U)
#define SYSCTL_RCC2_USERCC2_RCC2      ((uint32_t)0x00000001U)
/*--------*/



#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_RCC_H_ */
