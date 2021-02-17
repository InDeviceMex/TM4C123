/**
 *
 * @file SSI_RegisterDefines_SSIICR.h
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
#ifndef XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_SSIICR_H_
#define XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_SSIICR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 9 SSIICR *********************************************
******************************************************************************************/

/*--------*/
#define SSI_SSIICR_R_RORIC_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIICR_R_RORIC_BIT    ((uint32_t) 0UL)
#define SSI_SSIICR_R_RORIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define SSI_SSIICR_R_RORIC_CLEAR    ((uint32_t) 0x00000001UL)

#define SSI_SSIICR_RORIC_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIICR_RORIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define SSI_SSIICR_RORIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define SSI_SSIICR_R_RTIC_MASK    ((uint32_t) 0x00000002UL)
#define SSI_SSIICR_R_RTIC_BIT    ((uint32_t) 1UL)
#define SSI_SSIICR_R_RTIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define SSI_SSIICR_R_RTIC_CLEAR    ((uint32_t) 0x00000002UL)

#define SSI_SSIICR_RTIC_MASK    ((uint32_t) 0x00000001UL)
#define SSI_SSIICR_RTIC_NOEFFECT    ((uint32_t) 0x00000000UL)
#define SSI_SSIICR_RTIC_CLEAR    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_SSI_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_SSI_REGISTERDEFINES_SSIICR_H_ */
