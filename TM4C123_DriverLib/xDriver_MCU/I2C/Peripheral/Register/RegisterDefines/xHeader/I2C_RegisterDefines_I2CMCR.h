/**
 *
 * @file I2C_RegisterDefines_I2CMCR.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CMCR_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CMCR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 9 I2CMCR *********************************************
******************************************************************************************/
/*--------*/
#define I2C_I2CMCR_R_LPBK_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCR_R_LPBK_BIT    ((uint32_t) 0UL)
#define I2C_I2CMCR_R_LPBK_NORMAL    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCR_R_LPBK_LOOPBACK    ((uint32_t) 0x00000001UL)

#define I2C_I2CMCR_LPBK_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCR_LPBK_NORMAL    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCR_LPBK_LOOPBACK    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMCR_R_MFE_MASK    ((uint32_t) 0x00000010UL)
#define I2C_I2CMCR_R_MFE_BIT    ((uint32_t) 4UL)
#define I2C_I2CMCR_R_MFE_DIS    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCR_R_MFE_ENA    ((uint32_t) 0x00000010UL)

#define I2C_I2CMCR_MFE_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCR_MFE_DIS    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCR_MFE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMCR_R_SFE_MASK    ((uint32_t) 0x00000020UL)
#define I2C_I2CMCR_R_SFE_BIT    ((uint32_t) 5UL)
#define I2C_I2CMCR_R_SFE_DIS    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCR_R_SFE_ENA    ((uint32_t) 0x00000020UL)

#define I2C_I2CMCR_SFE_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCR_SFE_DIS    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCR_SFE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define I2C_I2CMCR_R_GFE_MASK    ((uint32_t) 0x00000040UL)
#define I2C_I2CMCR_R_GFE_BIT    ((uint32_t) 6UL)
#define I2C_I2CMCR_R_GFE_DIS    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCR_R_GFE_ENA    ((uint32_t) 0x00000040UL)

#define I2C_I2CMCR_GFE_MASK    ((uint32_t) 0x00000001UL)
#define I2C_I2CMCR_GFE_DIS    ((uint32_t) 0x00000000UL)
#define I2C_I2CMCR_GFE_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_I2C_REGISTERDEFINES_I2CMCR_H_ */
