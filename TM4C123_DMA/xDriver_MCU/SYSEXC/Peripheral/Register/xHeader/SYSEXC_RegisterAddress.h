/**
 *
 * @file SYSEXC_RegisterAddress.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define SYSEXC_BASE            ((uint32_t)0x400F9000u)
#define SYSEXC_BITBANDING_BASE ((uint32_t)0x42000000u)
#define SYSEXC_OFFSET          ((uint32_t)0x000F9000u)

#define SYSEXC_SYSEXCRIS_OFFSET    ((uint32_t)0x0000u)
#define SYSEXC_SYSEXCIM_OFFSET     ((uint32_t)0x0004u)
#define SYSEXC_SYSEXCMIS_OFFSET    ((uint32_t)0x0008u)
#define SYSEXC_SYSEXCIC_OFFSET     ((uint32_t)0x000Cu)

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERADDRESS_H_ */
