/**
 *
 * @file I2C_RegisterDefines_I2CMICR.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CMICR_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CMICR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 8 I2CMICR *********************************************
******************************************************************************************/

/*--------*/
#define I2C_I2CMICR_R_IC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMICR_R_IC_BIT    ((uint32_t) 0UL)
#define I2C_I2CMICR_R_IC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_I2CMICR_R_IC_CLEAR    ((uint32_t) 0x00000001UL)

#define I2C_I2CMICR_IC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMICR_IC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_I2CMICR_IC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMICR_R_CLKIC_MASK    ((uint32_t) 0x00000002UL)
#define I2C_I2CMICR_R_CLKIC_BIT    ((uint32_t) 1UL)
#define I2C_I2CMICR_R_CLKIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_I2CMICR_R_CLKIC_CLEAR    ((uint32_t) 0x00000002UL)

#define I2C_I2CMICR_CLKIC_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMICR_CLKIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define I2C_I2CMICR_CLKIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CMICR_H_ */
