/**
 *
 * @file I2C_RegisterDefines_I2CMBMON.h
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
 * @verbatim 6 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CMBMON_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CMBMON_H_
#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 11 I2CMBMON *********************************************
******************************************************************************************/
/*--------*/
#define I2C_I2CMBMON_R_SCL_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMBMON_R_SCL_BIT    ((uint32_t) 0UL)
#define I2C_I2CMBMON_R_SCL_NORMAL    ((uint32_t) 0x00000000UL)
#define I2C_I2CMBMON_R_SCL_LOOPBACK    ((uint32_t) 0x00000001UL)

#define I2C_I2CMBMON_SCL_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMBMON_SCL_NORMAL    ((uint32_t) 0x00000000UL)
#define I2C_I2CMBMON_SCL_LOOPBACK    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMBMON_R_SDA_MASK    ((uint32_t) 0x00000002UL)
#define I2C_I2CMBMON_R_SDA_BIT    ((uint32_t) 1UL)
#define I2C_I2CMBMON_R_SDA_LOW    ((uint32_t) 0x00000000UL)
#define I2C_I2CMBMON_R_SDA_HIGH    ((uint32_t) 0x00000002UL)

#define I2C_I2CMBMON_SDA_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMBMON_SDA_LOW    ((uint32_t) 0x00000000UL)
#define I2C_I2CMBMON_SDA_HIGH    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CMBMON_H_ */
