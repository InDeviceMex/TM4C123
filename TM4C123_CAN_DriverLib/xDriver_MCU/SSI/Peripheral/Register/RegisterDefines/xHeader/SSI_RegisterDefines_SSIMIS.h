/**
 *
 * @file SSI_RegisterDefines_SSIMIS.h
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

#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_SSIMIS_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_SSIMIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 8 SSIMIS *********************************************
******************************************************************************************/

/*--------*/
#define SSI_SSIMIS_R_RORMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIMIS_R_RORMIS_BIT    ((uint32_t) 0UL)
#define SSI_SSIMIS_R_RORMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_SSIMIS_R_RORMIS_OCCUR    ((uint32_t) 0x00000001UL)

#define SSI_SSIMIS_RORMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIMIS_RORMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_SSIMIS_RORMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SSIMIS_R_RTMIS_MASK    ((uint32_t) 0x00000002UL)
#define SSI_SSIMIS_R_RTMIS_BIT    ((uint32_t) 1UL)
#define SSI_SSIMIS_R_RTMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_SSIMIS_R_RTMIS_OCCUR    ((uint32_t) 0x00000002UL)

#define SSI_SSIMIS_RTMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIMIS_RTMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_SSIMIS_RTMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SSIMIS_R_RXMIS_MASK    ((uint32_t) 0x00000004UL)
#define SSI_SSIMIS_R_RXMIS_BIT    ((uint32_t) 2UL)
#define SSI_SSIMIS_R_RXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_SSIMIS_R_RXMIS_OCCUR    ((uint32_t) 0x00000004UL)

#define SSI_SSIMIS_RXMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIMIS_RXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_SSIMIS_RXMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SSIMIS_R_TXMIS_MASK    ((uint32_t) 0x00000008UL)
#define SSI_SSIMIS_R_TXMIS_BIT    ((uint32_t) 3UL)
#define SSI_SSIMIS_R_TXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_SSIMIS_R_TXMIS_OCCUR    ((uint32_t) 0x00000008UL)

#define SSI_SSIMIS_TXMIS_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIMIS_TXMIS_NOOCCUR    ((uint32_t) 0x00000000UL)
#define SSI_SSIMIS_TXMIS_OCCUR    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_SSIMIS_H_ */
