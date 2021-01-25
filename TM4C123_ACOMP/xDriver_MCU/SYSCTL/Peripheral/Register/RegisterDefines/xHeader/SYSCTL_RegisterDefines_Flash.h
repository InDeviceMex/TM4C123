/**
 *
 * @file SYSCTL_RegisterDefines_Flash.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_FLASH_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_FLASH_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 145-Flash RMCTL *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RMCTL_R_BA_MASK    ((uint32_t)0x00000001U)
#define SYSCTL_RMCTL_R_BA_BIT     (0U)
#define SYSCTL_RMCTL_R_BA_DIS     ((uint32_t)0x00000000U)
#define SYSCTL_RMCTL_R_BA_EN      ((uint32_t)0x00000001U)

#define SYSCTL_RMCTL_BA_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_RMCTL_BA_DIS       ((uint32_t)0x00000000U)
#define SYSCTL_RMCTL_BA_EN        ((uint32_t)0x00000001U)
/*--------*/

/******************************************************************************************
************************************ 146-Flash FMPRE0_ALIAS *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPRE0_ALIAS_R_READ_ENABLE_MASK    ((uint32_t)0xFFFFFFFFU)
#define SYSCTL_FMPRE0_ALIAS_R_READ_ENABLE_BIT     (0U)

#define SYSCTL_FMPRE0_ALIAS_READ_ENABLE_MASK      ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 147-Flash FMPRE0 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPRE0_R_READ_ENABLE_MASK    ((uint32_t)0xFFFFFFFFU)
#define SYSCTL_FMPRE0_R_READ_ENABLE_BIT     (0U)

#define SYSCTL_FMPRE0_READ_ENABLE_MASK      ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 148-Flash FMPRE1 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPRE1_R_READ_ENABLE_MASK    ((uint32_t)0xFFFFFFFFU)
#define SYSCTL_FMPRE1_R_READ_ENABLE_BIT     (0U)

#define SYSCTL_FMPRE1_READ_ENABLE_MASK      ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 149-Flash FMPRE2 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPRE2_R_READ_ENABLE_MASK    ((uint32_t)0xFFFFFFFFU)
#define SYSCTL_FMPRE2_R_READ_ENABLE_BIT     (0U)

#define SYSCTL_FMPRE2_READ_ENABLE_MASK      ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 150-Flash FMPRE3 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPRE3_R_READ_ENABLE_MASK    ((uint32_t)0xFFFFFFFFU)
#define SYSCTL_FMPRE3_R_READ_ENABLE_BIT     (0U)

#define SYSCTL_FMPRE3_READ_ENABLE_MASK      ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 151-Flash FMPPE0_ALIAS *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPPE0_ALIAS_R_PROG_ENABLE_MASK    ((uint32_t)0xFFFFFFFFU)
#define SYSCTL_FMPPE0_ALIAS_R_PROG_ENABLE_BIT     (0U)

#define SYSCTL_FMPPE0_ALIAS_PROG_ENABLE_MASK      ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 152-Flash FMPPE0 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPPE0_R_PROG_ENABLE_MASK    ((uint32_t)0xFFFFFFFFU)
#define SYSCTL_FMPPE0_R_PROG_ENABLE_BIT     (0U)

#define SYSCTL_FMPPE0_PROG_ENABLE_MASK      ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 153-Flash FMPPE1 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPPE1_R_PROG_ENABLE_MASK    ((uint32_t)0xFFFFFFFFU)
#define SYSCTL_FMPPE1_R_PROG_ENABLE_BIT     (0U)

#define SYSCTL_FMPPE1_PROG_ENABLE_MASK      ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 154-Flash FMPPE2 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPPE2_R_PROG_ENABLE_MASK    ((uint32_t)0xFFFFFFFFU)
#define SYSCTL_FMPPE2_R_PROG_ENABLE_BIT     (0U)

#define SYSCTL_FMPPE2_PROG_ENABLE_MASK      ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 155-Flash FMPPE3 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPPE3_R_PROG_ENABLE_MASK    ((uint32_t)0xFFFFFFFFU)
#define SYSCTL_FMPPE3_R_PROG_ENABLE_BIT     (0U)

#define SYSCTL_FMPPE3_PROG_ENABLE_MASK      ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 156-Flash BOOTCFG *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_BOOTCFG_R_DBG0_MASK    ((uint32_t)0x00000001U)
#define SYSCTL_BOOTCFG_R_DBG0_BIT     (0U)

#define SYSCTL_BOOTCFG_DBG0_MASK      ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_DBG1_MASK    ((uint32_t)0x00000002U)
#define SYSCTL_BOOTCFG_R_DBG1_BIT     (1U)

#define SYSCTL_BOOTCFG_DBG1_MASK      ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_KEY_MASK    ((uint32_t)0x00000010U)
#define SYSCTL_BOOTCFG_R_KEY_BIT     (4U)
#define SYSCTL_BOOTCFG_R_KEY_71D5    ((uint32_t)0x00000000U)
#define SYSCTL_BOOTCFG_R_KEY_A442    ((uint32_t)0x00000010U)

#define SYSCTL_BOOTCFG_KEY_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_BOOTCFG_KEY_71D5      ((uint32_t)0x00000000U)
#define SYSCTL_BOOTCFG_KEY_A442      ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_EN_MASK    ((uint32_t)0x00000100U)
#define SYSCTL_BOOTCFG_R_EN_BIT     (8U)
#define SYSCTL_BOOTCFG_R_EN_GPIO    ((uint32_t)0x00000000U)
#define SYSCTL_BOOTCFG_R_EN_ADDRESS ((uint32_t)0x00000100U)

#define SYSCTL_BOOTCFG_EN_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_BOOTCFG_EN_GPIO      ((uint32_t)0x00000000U)
#define SYSCTL_BOOTCFG_EN_ADDRESS   ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_POL_MASK    ((uint32_t)0x00000200U)
#define SYSCTL_BOOTCFG_R_POL_BIT     (9U)
#define SYSCTL_BOOTCFG_R_POL_LOW     ((uint32_t)0x00000000U)
#define SYSCTL_BOOTCFG_R_POL_HIGH    ((uint32_t)0x00000200U)

#define SYSCTL_BOOTCFG_POL_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_BOOTCFG_POL_LOW       ((uint32_t)0x00000000U)
#define SYSCTL_BOOTCFG_POL_HIGH      ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_PIN_MASK    ((uint32_t)0x00001C00U)
#define SYSCTL_BOOTCFG_R_PIN_BIT     (10U)
#define SYSCTL_BOOTCFG_R_PIN_0       ((uint32_t)0x00000000U)
#define SYSCTL_BOOTCFG_R_PIN_1       ((uint32_t)0x00000400U)
#define SYSCTL_BOOTCFG_R_PIN_2       ((uint32_t)0x00000800U)
#define SYSCTL_BOOTCFG_R_PIN_3       ((uint32_t)0x00000C00U)
#define SYSCTL_BOOTCFG_R_PIN_4       ((uint32_t)0x00001000U)
#define SYSCTL_BOOTCFG_R_PIN_5       ((uint32_t)0x00001400U)
#define SYSCTL_BOOTCFG_R_PIN_6       ((uint32_t)0x00001800U)
#define SYSCTL_BOOTCFG_R_PIN_7       ((uint32_t)0x00001C00U)

#define SYSCTL_BOOTCFG_PIN_MASK      ((uint32_t)0x00000007U)
#define SYSCTL_BOOTCFG_PIN_0         ((uint32_t)0x00000000U)
#define SYSCTL_BOOTCFG_PIN_1         ((uint32_t)0x00000001U)
#define SYSCTL_BOOTCFG_PIN_2         ((uint32_t)0x00000002U)
#define SYSCTL_BOOTCFG_PIN_3         ((uint32_t)0x00000003U)
#define SYSCTL_BOOTCFG_PIN_4         ((uint32_t)0x00000004U)
#define SYSCTL_BOOTCFG_PIN_5         ((uint32_t)0x00000005U)
#define SYSCTL_BOOTCFG_PIN_6         ((uint32_t)0x00000006U)
#define SYSCTL_BOOTCFG_PIN_7         ((uint32_t)0x00000007U)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_PORT_MASK    ((uint32_t)0x0000E000U)
#define SYSCTL_BOOTCFG_R_PORT_BIT     (13U)
#define SYSCTL_BOOTCFG_R_PORT_A       ((uint32_t)0x00000000U)
#define SYSCTL_BOOTCFG_R_PORT_B       ((uint32_t)0x00002000U)
#define SYSCTL_BOOTCFG_R_PORT_C       ((uint32_t)0x00004000U)
#define SYSCTL_BOOTCFG_R_PORT_D       ((uint32_t)0x00006000U)
#define SYSCTL_BOOTCFG_R_PORT_E       ((uint32_t)0x00008000U)
#define SYSCTL_BOOTCFG_R_PORT_F       ((uint32_t)0x0000A000U)
#define SYSCTL_BOOTCFG_R_PORT_G       ((uint32_t)0x0000C000U)
#define SYSCTL_BOOTCFG_R_PORT_H       ((uint32_t)0x0000E000U)

#define SYSCTL_BOOTCFG_PORT_MASK      ((uint32_t)0x00000007U)
#define SYSCTL_BOOTCFG_PORT_A         ((uint32_t)0x00000000U)
#define SYSCTL_BOOTCFG_PORT_B         ((uint32_t)0x00000001U)
#define SYSCTL_BOOTCFG_PORT_C         ((uint32_t)0x00000002U)
#define SYSCTL_BOOTCFG_PORT_D         ((uint32_t)0x00000003U)
#define SYSCTL_BOOTCFG_PORT_E         ((uint32_t)0x00000004U)
#define SYSCTL_BOOTCFG_PORT_F         ((uint32_t)0x00000005U)
#define SYSCTL_BOOTCFG_PORT_G         ((uint32_t)0x00000006U)
#define SYSCTL_BOOTCFG_PORT_H         ((uint32_t)0x00000007U)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_NW_MASK    ((uint32_t)0x80000000U)
#define SYSCTL_BOOTCFG_R_NW_BIT     (31U)
#define SYSCTL_BOOTCFG_R_NW_DIS     ((uint32_t)0x00000000U)
#define SYSCTL_BOOTCFG_R_NW_EN      ((uint32_t)0x80000000U)

#define SYSCTL_BOOTCFG_NW_MASK      ((uint32_t)0x00000001U)
#define SYSCTL_BOOTCFG_NW_DIS       ((uint32_t)0x00000000U)
#define SYSCTL_BOOTCFG_NW_EN        ((uint32_t)0x00000001U)
/*--------*/

/******************************************************************************************
************************************ 157-Flash USER_REG0 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_USER_REG0_R_DATA_MASK    ((uint32_t)0xFFFFFFFFU)
#define SYSCTL_USER_REG0_R_DATA_BIT     (0U)

#define SYSCTL_USER_REG0_DATA_MASK      ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 158-Flash USER_REG1 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_USER_REG1_R_DATA_MASK    ((uint32_t)0xFFFFFFFFU)
#define SYSCTL_USER_REG1_R_DATA_BIT     (0U)

#define SYSCTL_USER_REG1_DATA_MASK      ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 159-Flash USER_REG2 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_USER_REG2_R_DATA_MASK    ((uint32_t)0xFFFFFFFFU)
#define SYSCTL_USER_REG2_R_DATA_BIT     (0U)

#define SYSCTL_USER_REG2_DATA_MASK      ((uint32_t)0xFFFFFFFFU)
/*--------*/

/******************************************************************************************
************************************ 160-Flash USER_REG3 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_USER_REG3_R_DATA_MASK    ((uint32_t)0xFFFFFFFFU)
#define SYSCTL_USER_REG3_R_DATA_BIT     (0U)

#define SYSCTL_USER_REG3_DATA_MASK      ((uint32_t)0xFFFFFFFFU)
/*--------*/





#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_FLASH_H_ */
