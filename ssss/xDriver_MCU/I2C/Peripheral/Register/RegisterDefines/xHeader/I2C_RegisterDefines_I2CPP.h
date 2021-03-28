/**
 *
 * @file I2C_RegisterDefines_I2CPP.h
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
 * @verbatim 7 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CPP_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CPP_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 22 I2CPP *********************************************
******************************************************************************************/

/*--------*/
#define I2C_I2CPP_R_HS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CPP_R_HS_BIT    ((uint32_t) 0UL)
#define I2C_I2CPP_R_HS_STD    ((uint32_t) 0x00000000UL)
#define I2C_I2CPP_R_HS_HS    ((uint32_t) 0x00000001UL)

#define I2C_I2CPP_HS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CPP_HS_STD    ((uint32_t) 0x00000000UL)
#define I2C_I2CPP_HS_HS    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CPP_H_ */
