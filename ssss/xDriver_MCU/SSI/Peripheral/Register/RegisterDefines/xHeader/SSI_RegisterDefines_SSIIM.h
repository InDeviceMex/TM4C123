/**
 *
 * @file SSI_RegisterDefines_SSIIM.h
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_SSIIM_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_SSIIM_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 6 SSIIM *********************************************
******************************************************************************************/

/*--------*/
#define SSI_SSIIM_R_RORIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIIM_R_RORIM_BIT    ((uint32_t) 0UL)
#define SSI_SSIIM_R_RORIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SSIIM_R_RORIM_ENA    ((uint32_t) 0x00000001UL)

#define SSI_SSIIM_RORIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIIM_RORIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SSIIM_RORIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SSIIM_R_RTIM_MASK    ((uint32_t) 0x00000002UL)
#define SSI_SSIIM_R_RTIM_BIT    ((uint32_t) 1UL)
#define SSI_SSIIM_R_RTIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SSIIM_R_RTIM_ENA    ((uint32_t) 0x00000002UL)

#define SSI_SSIIM_RTIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIIM_RTIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SSIIM_RTIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SSIIM_R_RXIM_MASK    ((uint32_t) 0x00000004UL)
#define SSI_SSIIM_R_RXIM_BIT    ((uint32_t) 2UL)
#define SSI_SSIIM_R_RXIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SSIIM_R_RXIM_ENA    ((uint32_t) 0x00000004UL)

#define SSI_SSIIM_RXIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIIM_RXIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SSIIM_RXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SSIIM_R_TXIM_MASK    ((uint32_t) 0x00000008UL)
#define SSI_SSIIM_R_TXIM_BIT    ((uint32_t) 3UL)
#define SSI_SSIIM_R_TXIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SSIIM_R_TXIM_ENA    ((uint32_t) 0x00000008UL)

#define SSI_SSIIM_TXIM_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIIM_TXIM_DIS    ((uint32_t) 0x00000000UL)
#define SSI_SSIIM_TXIM_ENA    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_SSIIM_H_ */
