/**
 *
 * @file QEI_RegisterAddress.h
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
 * @verbatim Apr 5, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 5, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_XHEADER_QEI_REGISTERADDRESS_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_XHEADER_QEI_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define QEI_BASE    ((uint32_t) 0x4002C000UL)
#define QEI0_BASE    ((uint32_t) 0x4002C000UL)
#define QEI1_BASE    ((uint32_t) 0x4002D000UL)

#define QEI_OFFSET    ((uint32_t) 0x0002C000UL)
#define QEI0_OFFSET    ((uint32_t) 0x0002C000UL)
#define QEI1_OFFSET    ((uint32_t) 0x0002D000UL)

#define QEI_BITBANDING_BASE    ((uint32_t) 0x42000000UL)

#define QEI_QEICTL_OFFSET    ((uint32_t) 0x0000UL)
#define QEI_QEISTAT_OFFSET    ((uint32_t) 0x0004UL)
#define QEI_QEIPOS_OFFSET    ((uint32_t) 0x0008UL)
#define QEI_QEIMAXPOS_OFFSET    ((uint32_t) 0x000CUL)
#define QEI_QEILOAD_OFFSET    ((uint32_t) 0x0010UL)
#define QEI_QEITIME_OFFSET    ((uint32_t) 0x0014UL)
#define QEI_QEICOUNT_OFFSET    ((uint32_t) 0x0018UL)
#define QEI_QEISPEED_OFFSET    ((uint32_t) 0x001CUL)
#define QEI_QEIINTEN_OFFSET    ((uint32_t) 0x0020UL)
#define QEI_QEIRIS_OFFSET    ((uint32_t) 0x0024UL)
#define QEI_QEIISC_OFFSET    ((uint32_t) 0x0028UL)

#endif /* XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_XHEADER_QEI_REGISTERADDRESS_H_ */
