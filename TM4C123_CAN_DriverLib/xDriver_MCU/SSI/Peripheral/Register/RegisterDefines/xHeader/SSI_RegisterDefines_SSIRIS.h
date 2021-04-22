/**
 *
 * @file SSI_RegisterDefines_SSIRIS.h
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

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_SSIRIS_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_SSIRIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 7 SSIRIS *********************************************
******************************************************************************************/

/*--------*/
#define SSI_SSIRIS_R_RORRIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIRIS_R_RORRIS_BIT    ((uint32_t) 0UL)
#define SSI_SSIRIS_R_RORRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_SSIRIS_R_RORRIS_ACTIVE    ((uint32_t) 0x00000001UL)

#define SSI_SSIRIS_RORRIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIRIS_RORRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_SSIRIS_RORRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SSIRIS_R_RTRIS_MASK    ((uint32_t) 0x00000002UL)
#define SSI_SSIRIS_R_RTRIS_BIT    ((uint32_t) 1UL)
#define SSI_SSIRIS_R_RTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_SSIRIS_R_RTRIS_ACTIVE    ((uint32_t) 0x00000002UL)

#define SSI_SSIRIS_RTRIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIRIS_RTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_SSIRIS_RTRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SSIRIS_R_RXRIS_MASK    ((uint32_t) 0x00000004UL)
#define SSI_SSIRIS_R_RXRIS_BIT    ((uint32_t) 2UL)
#define SSI_SSIRIS_R_RXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_SSIRIS_R_RXRIS_ACTIVE    ((uint32_t) 0x00000004UL)

#define SSI_SSIRIS_RXRIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIRIS_RXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_SSIRIS_RXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SSIRIS_R_TXRIS_MASK    ((uint32_t) 0x00000008UL)
#define SSI_SSIRIS_R_TXRIS_BIT    ((uint32_t) 3UL)
#define SSI_SSIRIS_R_TXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_SSIRIS_R_TXRIS_ACTIVE    ((uint32_t) 0x00000008UL)

#define SSI_SSIRIS_TXRIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIRIS_TXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define SSI_SSIRIS_TXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_SSIRIS_H_ */
