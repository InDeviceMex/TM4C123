/**
 *
 * @file I2C_RegisterDefines_I2CSRIS.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CSRIS_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CSRIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 17 I2CSRIS *********************************************
******************************************************************************************/

/*--------*/
#define SSI_I2CSRIS_R_DATARIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_I2CSRIS_R_DATARIS_BIT    ((uint32_t) 0UL)
#define SSI_I2CSRIS_R_DATARIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_I2CSRIS_R_DATARIS_ACTIVE    ((uint32_t) 0x00000001UL)

#define SSI_I2CSRIS_DATARIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_I2CSRIS_DATARIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_I2CSRIS_DATARIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_I2CSRIS_R_STARTRIS_MASK    ((uint32_t) 0x00000002UL)
#define SSI_I2CSRIS_R_STARTRIS_BIT    ((uint32_t) 1UL)
#define SSI_I2CSRIS_R_STARTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_I2CSRIS_R_STARTRIS_ACTIVE    ((uint32_t) 0x00000002UL)

#define SSI_I2CSRIS_STARTRIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_I2CSRIS_STARTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_I2CSRIS_STARTRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_I2CSRIS_R_STOPRIS_MASK    ((uint32_t) 0x00000004UL)
#define SSI_I2CSRIS_R_STOPRIS_BIT    ((uint32_t) 2UL)
#define SSI_I2CSRIS_R_STOPRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_I2CSRIS_R_STOPRIS_ACTIVE    ((uint32_t) 0x00000004UL)

#define SSI_I2CSRIS_STOPRIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_I2CSRIS_STOPRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_I2CSRIS_STOPRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CSRIS_H_ */
