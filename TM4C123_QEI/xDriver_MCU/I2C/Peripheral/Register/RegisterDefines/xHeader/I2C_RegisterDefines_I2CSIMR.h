/**
 *
 * @file I2C_RegisterDefines_I2CSIMR.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CSIMR_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CSIMR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 16 I2CSIMR *********************************************
******************************************************************************************/

/*--------*/
#define SSI_I2CSIMR_R_DATAIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_I2CSIMR_R_DATAIM_BIT    ((uint32_t) 0UL)
#define SSI_I2CSIMR_R_DATAIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_I2CSIMR_R_DATAIM_ENA    ((uint32_t) 0x00000001UL)

#define SSI_I2CSIMR_DATAIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_I2CSIMR_DATAIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_I2CSIMR_DATAIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_I2CSIMR_R_STARTIM_MASK    ((uint32_t) 0x00000002UL)
#define SSI_I2CSIMR_R_STARTIM_BIT    ((uint32_t) 1UL)
#define SSI_I2CSIMR_R_STARTIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_I2CSIMR_R_STARTIM_ENA    ((uint32_t) 0x00000002UL)

#define SSI_I2CSIMR_STARTIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_I2CSIMR_STARTIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_I2CSIMR_STARTIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_I2CSIMR_R_STOPIM_MASK    ((uint32_t) 0x00000004UL)
#define SSI_I2CSIMR_R_STOPIM_BIT    ((uint32_t) 2UL)
#define SSI_I2CSIMR_R_STOPIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_I2CSIMR_R_STOPIM_ENA    ((uint32_t) 0x00000004UL)

#define SSI_I2CSIMR_STOPIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_I2CSIMR_STOPIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_I2CSIMR_STOPIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CSIMR_H_ */
