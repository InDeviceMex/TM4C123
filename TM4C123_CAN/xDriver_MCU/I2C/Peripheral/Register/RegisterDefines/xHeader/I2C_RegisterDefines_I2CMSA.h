/**
 *
 * @file I2C_RegisterDefines_I2CMSA.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CMSA_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CMSA_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 1 I2CMSA *********************************************
******************************************************************************************/
/*--------*/
#define I2C_I2CMSA_R_RS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMSA_R_RS_BIT    ((uint32_t) 0UL)
#define I2C_I2CMSA_R_RS_TRANSMIT    ((uint32_t) 0x00000000UL)
#define I2C_I2CMSA_R_RS_RECEIVE    ((uint32_t) 0x00000001UL)

#define I2C_I2CMSA_RS_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMSA_RS_TRANSMIT    ((uint32_t) 0x00000000UL)
#define I2C_I2CMSA_RS_RECEIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMSA_R_SA_MASK    ((uint32_t) 0x000000FEUL)
#define I2C_I2CMSA_R_SA_BIT    ((uint32_t) 1UL)

#define I2C_I2CMSA_SA_MASK    ((uint32_t) 0x0000007FUL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CMSA_H_ */
