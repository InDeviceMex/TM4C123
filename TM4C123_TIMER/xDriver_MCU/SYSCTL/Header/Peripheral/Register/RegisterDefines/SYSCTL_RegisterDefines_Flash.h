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

#include <stdint.h>

/******************************************************************************************
************************************ 145-Flash RMCTL *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_RMCTL_R_BA_MASK    ((uint32_t)0x00000001u)
#define SYSCTL_RMCTL_R_BA_BIT     (0u)
#define SYSCTL_RMCTL_R_BA_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_RMCTL_R_BA_EN      ((uint32_t)0x00000001u)

#define SYSCTL_RMCTL_BA_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_RMCTL_BA_DIS       ((uint32_t)0x00000000u)
#define SYSCTL_RMCTL_BA_EN        ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************ 146-Flash FMPRE0_ALIAS *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPRE0_ALIAS_R_READ_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPRE0_ALIAS_R_READ_ENABLE_BIT     (0u)

#define SYSCTL_FMPRE0_ALIAS_READ_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 147-Flash FMPRE0 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPRE0_R_READ_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPRE0_R_READ_ENABLE_BIT     (0u)

#define SYSCTL_FMPRE0_READ_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 148-Flash FMPRE1 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPRE1_R_READ_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPRE1_R_READ_ENABLE_BIT     (0u)

#define SYSCTL_FMPRE1_READ_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 149-Flash FMPRE2 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPRE2_R_READ_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPRE2_R_READ_ENABLE_BIT     (0u)

#define SYSCTL_FMPRE2_READ_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 150-Flash FMPRE3 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPRE3_R_READ_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPRE3_R_READ_ENABLE_BIT     (0u)

#define SYSCTL_FMPRE3_READ_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 151-Flash FMPPE0_ALIAS *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPPE0_ALIAS_R_PROG_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPPE0_ALIAS_R_PROG_ENABLE_BIT     (0u)

#define SYSCTL_FMPPE0_ALIAS_PROG_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 152-Flash FMPPE0 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPPE0_R_PROG_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPPE0_R_PROG_ENABLE_BIT     (0u)

#define SYSCTL_FMPPE0_PROG_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 153-Flash FMPPE1 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPPE1_R_PROG_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPPE1_R_PROG_ENABLE_BIT     (0u)

#define SYSCTL_FMPPE1_PROG_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 154-Flash FMPPE2 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPPE2_R_PROG_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPPE2_R_PROG_ENABLE_BIT     (0u)

#define SYSCTL_FMPPE2_PROG_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 155-Flash FMPPE3 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_FMPPE3_R_PROG_ENABLE_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_FMPPE3_R_PROG_ENABLE_BIT     (0u)

#define SYSCTL_FMPPE3_PROG_ENABLE_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 156-Flash BOOTCFG *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_BOOTCFG_R_DBG0_MASK    ((uint32_t)0x00000001u)
#define SYSCTL_BOOTCFG_R_DBG0_BIT     (0u)

#define SYSCTL_BOOTCFG_DBG0_MASK      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_DBG1_MASK    ((uint32_t)0x00000002u)
#define SYSCTL_BOOTCFG_R_DBG1_BIT     (1u)

#define SYSCTL_BOOTCFG_DBG1_MASK      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_KEY_MASK    ((uint32_t)0x00000010u)
#define SYSCTL_BOOTCFG_R_KEY_BIT     (4u)
#define SYSCTL_BOOTCFG_R_KEY_71D5    ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_R_KEY_A442    ((uint32_t)0x00000010u)

#define SYSCTL_BOOTCFG_KEY_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_BOOTCFG_KEY_71D5      ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_KEY_A442      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_EN_MASK    ((uint32_t)0x00000100u)
#define SYSCTL_BOOTCFG_R_EN_BIT     (8u)
#define SYSCTL_BOOTCFG_R_EN_GPIO    ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_R_EN_ADDRESS ((uint32_t)0x00000100u)

#define SYSCTL_BOOTCFG_EN_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_BOOTCFG_EN_GPIO      ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_EN_ADDRESS   ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_POL_MASK    ((uint32_t)0x00000200u)
#define SYSCTL_BOOTCFG_R_POL_BIT     (9u)
#define SYSCTL_BOOTCFG_R_POL_LOW     ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_R_POL_HIGH    ((uint32_t)0x00000200u)

#define SYSCTL_BOOTCFG_POL_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_BOOTCFG_POL_LOW       ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_POL_HIGH      ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_PIN_MASK    ((uint32_t)0x00001C00u)
#define SYSCTL_BOOTCFG_R_PIN_BIT     (10u)
#define SYSCTL_BOOTCFG_R_PIN_0       ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_R_PIN_1       ((uint32_t)0x00000400u)
#define SYSCTL_BOOTCFG_R_PIN_2       ((uint32_t)0x00000800u)
#define SYSCTL_BOOTCFG_R_PIN_3       ((uint32_t)0x00000C00u)
#define SYSCTL_BOOTCFG_R_PIN_4       ((uint32_t)0x00001000u)
#define SYSCTL_BOOTCFG_R_PIN_5       ((uint32_t)0x00001400u)
#define SYSCTL_BOOTCFG_R_PIN_6       ((uint32_t)0x00001800u)
#define SYSCTL_BOOTCFG_R_PIN_7       ((uint32_t)0x00001C00u)

#define SYSCTL_BOOTCFG_PIN_MASK      ((uint32_t)0x00000007u)
#define SYSCTL_BOOTCFG_PIN_0         ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_PIN_1         ((uint32_t)0x00000001u)
#define SYSCTL_BOOTCFG_PIN_2         ((uint32_t)0x00000002u)
#define SYSCTL_BOOTCFG_PIN_3         ((uint32_t)0x00000003u)
#define SYSCTL_BOOTCFG_PIN_4         ((uint32_t)0x00000004u)
#define SYSCTL_BOOTCFG_PIN_5         ((uint32_t)0x00000005u)
#define SYSCTL_BOOTCFG_PIN_6         ((uint32_t)0x00000006u)
#define SYSCTL_BOOTCFG_PIN_7         ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_PORT_MASK    ((uint32_t)0x0000E000u)
#define SYSCTL_BOOTCFG_R_PORT_BIT     (13u)
#define SYSCTL_BOOTCFG_R_PORT_A       ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_R_PORT_B       ((uint32_t)0x00002000u)
#define SYSCTL_BOOTCFG_R_PORT_C       ((uint32_t)0x00004000u)
#define SYSCTL_BOOTCFG_R_PORT_D       ((uint32_t)0x00006000u)
#define SYSCTL_BOOTCFG_R_PORT_E       ((uint32_t)0x00008000u)
#define SYSCTL_BOOTCFG_R_PORT_F       ((uint32_t)0x0000A000u)
#define SYSCTL_BOOTCFG_R_PORT_G       ((uint32_t)0x0000C000u)
#define SYSCTL_BOOTCFG_R_PORT_H       ((uint32_t)0x0000E000u)

#define SYSCTL_BOOTCFG_PORT_MASK      ((uint32_t)0x00000007u)
#define SYSCTL_BOOTCFG_PORT_A         ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_PORT_B         ((uint32_t)0x00000001u)
#define SYSCTL_BOOTCFG_PORT_C         ((uint32_t)0x00000002u)
#define SYSCTL_BOOTCFG_PORT_D         ((uint32_t)0x00000003u)
#define SYSCTL_BOOTCFG_PORT_E         ((uint32_t)0x00000004u)
#define SYSCTL_BOOTCFG_PORT_F         ((uint32_t)0x00000005u)
#define SYSCTL_BOOTCFG_PORT_G         ((uint32_t)0x00000006u)
#define SYSCTL_BOOTCFG_PORT_H         ((uint32_t)0x00000007u)
/*--------*/

/*--------*/
#define SYSCTL_BOOTCFG_R_NW_MASK    ((uint32_t)0x80000000u)
#define SYSCTL_BOOTCFG_R_NW_BIT     (31u)
#define SYSCTL_BOOTCFG_R_NW_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_R_NW_EN      ((uint32_t)0x80000000u)

#define SYSCTL_BOOTCFG_NW_MASK      ((uint32_t)0x00000001u)
#define SYSCTL_BOOTCFG_NW_DIS       ((uint32_t)0x00000000u)
#define SYSCTL_BOOTCFG_NW_EN        ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************ 157-Flash USER_REG0 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_USER_REG0_R_DATA_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_USER_REG0_R_DATA_BIT     (0u)

#define SYSCTL_USER_REG0_DATA_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 158-Flash USER_REG1 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_USER_REG1_R_DATA_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_USER_REG1_R_DATA_BIT     (0u)

#define SYSCTL_USER_REG1_DATA_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 159-Flash USER_REG2 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_USER_REG2_R_DATA_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_USER_REG2_R_DATA_BIT     (0u)

#define SYSCTL_USER_REG2_DATA_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/

/******************************************************************************************
************************************ 160-Flash USER_REG3 *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_USER_REG3_R_DATA_MASK    ((uint32_t)0xFFFFFFFFu)
#define SYSCTL_USER_REG3_R_DATA_BIT     (0u)

#define SYSCTL_USER_REG3_DATA_MASK      ((uint32_t)0xFFFFFFFFu)
/*--------*/





#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_FLASH_H_ */
