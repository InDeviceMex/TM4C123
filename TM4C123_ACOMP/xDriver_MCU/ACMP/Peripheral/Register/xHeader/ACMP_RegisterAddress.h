/**
 *
 * @file ACMP_RegisterAddress.h
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
 * @verbatim 28 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_XHEADER_ACMP_REGISTERADDRESS_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_XHEADER_ACMP_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define ACMP_BASE            ((uint32_t)0x4003C000u)

#define ACMP_OFFSET         ((uint32_t)0x0003C000u)

#define ACMP_BITBANDING_BASE        ((uint32_t)0x42000000u)

#define ACMP_ACMIS_OFFSET                      ((uint32_t)0x0000u)
#define ACMP_ACRIS_OFFSET                      ((uint32_t)0x0004u)
#define ACMP_ACINTEN_OFFSET                    ((uint32_t)0x0008u)
#define ACMP_ACREFCTL_OFFSET               ((uint32_t)0x0010u)
#define ACMP_ACSTAT0_OFFSET               ((uint32_t)0x0020u)
#define ACMP_ACCTL0_OFFSET               ((uint32_t)0x0024u)
#define ACMP_ACSTAT1_OFFSET               ((uint32_t)0x0040u)
#define ACMP_ACCTL1_OFFSET               ((uint32_t)0x0044u)
#define ACMP_ACMPPP_OFFSET              ((uint32_t)0x0FC0u)

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_XHEADER_ACMP_REGISTERADDRESS_H_ */
