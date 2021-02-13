/**
 *
 * @file HIB_RegisterAddress.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define HIB_BASE    ((uint32_t) 0x400FC000UL)
#define HIB_BITBANDING_BASE    ((uint32_t) 0x42000000UL)
#define HIB_OFFSET    ((uint32_t) 0x000FC000UL)

#define HIB_HIBRTCC_OFFSET    ((uint32_t) 0x0000UL)
#define HIB_HIBRTCM0_OFFSET    ((uint32_t) 0x0004UL)
#define HIB_HIBRTCLD_OFFSET    ((uint32_t) 0x000CUL)
#define HIB_HIBCTL_OFFSET    ((uint32_t) 0x0010UL)
#define HIB_HIBIM_OFFSET    ((uint32_t) 0x0014UL)
#define HIB_HIBRIS_OFFSET    ((uint32_t) 0x0018UL)
#define HIB_HIBMIS_OFFSET    ((uint32_t) 0x001CUL)
#define HIB_HIBIC_OFFSET    ((uint32_t) 0x0020UL)
#define HIB_HIBRTCT_OFFSET    ((uint32_t) 0x0024UL)
#define HIB_HIBRTCSS_OFFSET    ((uint32_t) 0x0028UL)
#define HIB_HIBDATA_OFFSET    ((uint32_t) 0x0030UL)
#define HIB_HIBDATA0_OFFSET    ((uint32_t) 0x0030UL)
#define HIB_HIBDATA1_OFFSET    ((uint32_t) 0x0034UL)
#define HIB_HIBDATA2_OFFSET    ((uint32_t) 0x0038UL)
#define HIB_HIBDATA3_OFFSET    ((uint32_t) 0x003CUL)
#define HIB_HIBDATA4_OFFSET    ((uint32_t) 0x0040UL)
#define HIB_HIBDATA5_OFFSET    ((uint32_t) 0x0044UL)
#define HIB_HIBDATA6_OFFSET    ((uint32_t) 0x0048UL)
#define HIB_HIBDATA7_OFFSET    ((uint32_t) 0x004CUL)
#define HIB_HIBDATA8_OFFSET    ((uint32_t) 0x0050UL)
#define HIB_HIBDATA9_OFFSET    ((uint32_t) 0x0054UL)
#define HIB_HIBDATA10_OFFSET    ((uint32_t) 0x0058UL)
#define HIB_HIBDATA11_OFFSET    ((uint32_t) 0x005CUL)
#define HIB_HIBDATA12_OFFSET    ((uint32_t) 0x0060UL)
#define HIB_HIBDATA13_OFFSET    ((uint32_t) 0x0064UL)
#define HIB_HIBDATA14_OFFSET    ((uint32_t) 0x0068UL)
#define HIB_HIBDATA15_OFFSET    ((uint32_t) 0x006CUL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERADDRESS_H_ */
