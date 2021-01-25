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

#define ACMP_BASE            ((uint32_t)0x4003C000U)

#define ACMP_OFFSET         ((uint32_t)0x0003C000U)

#define ACMP_BITBANDING_BASE        ((uint32_t)0x42000000U)

#define ACMP_ACMIS_OFFSET                      ((uint32_t)0x0000U)
#define ACMP_ACRIS_OFFSET                      ((uint32_t)0x0004U)
#define ACMP_ACINTEN_OFFSET                    ((uint32_t)0x0008U)
#define ACMP_ACREFCTL_OFFSET               ((uint32_t)0x0010U)
#define ACMP_ACSTAT0_OFFSET               ((uint32_t)0x0020U)
#define ACMP_ACCTL0_OFFSET               ((uint32_t)0x0024U)
#define ACMP_ACSTAT1_OFFSET               ((uint32_t)0x0040U)
#define ACMP_ACCTL1_OFFSET               ((uint32_t)0x0044U)
#define ACMP_ACMPPP_OFFSET              ((uint32_t)0x0FC0U)

#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_XHEADER_ACMP_REGISTERADDRESS_H_ */
