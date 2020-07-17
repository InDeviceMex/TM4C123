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

#include <stdint.h>

#define HIB_BASE            ((uint32_t)0x400FC000u)
#define HIB_BITBANDING_BASE ((uint32_t)0x42000000u)
#define HIB_OFFSET          ((uint32_t)0x000FC000u)

#define HIB_HIBRTCC_OFFSET     ((uint32_t)0x0000u)
#define HIB_HIBRTCM0_OFFSET    ((uint32_t)0x0004u)
#define HIB_HIBRTCLD_OFFSET    ((uint32_t)0x000Cu)
#define HIB_HIBCTL_OFFSET      ((uint32_t)0x0010u)
#define HIB_HIBIM_OFFSET       ((uint32_t)0x0014u)
#define HIB_HIBRIS_OFFSET      ((uint32_t)0x0018u)
#define HIB_HIBMIS_OFFSET      ((uint32_t)0x001Cu)
#define HIB_HIBIC_OFFSET       ((uint32_t)0x0020u)
#define HIB_HIBRTCT_OFFSET     ((uint32_t)0x0024u)
#define HIB_HIBRTCSS_OFFSET    ((uint32_t)0x0028u)
#define HIB_HIBDATA_OFFSET     ((uint32_t)0x0030u)
#define HIB_HIBDATA0_OFFSET    ((uint32_t)0x0030u)
#define HIB_HIBDATA1_OFFSET    ((uint32_t)0x0034u)
#define HIB_HIBDATA2_OFFSET    ((uint32_t)0x0038u)
#define HIB_HIBDATA3_OFFSET    ((uint32_t)0x003Cu)
#define HIB_HIBDATA4_OFFSET    ((uint32_t)0x0040u)
#define HIB_HIBDATA5_OFFSET    ((uint32_t)0x0044u)
#define HIB_HIBDATA6_OFFSET    ((uint32_t)0x0048u)
#define HIB_HIBDATA7_OFFSET    ((uint32_t)0x004Cu)
#define HIB_HIBDATA8_OFFSET    ((uint32_t)0x0050u)
#define HIB_HIBDATA9_OFFSET    ((uint32_t)0x0054u)
#define HIB_HIBDATA10_OFFSET   ((uint32_t)0x0058u)
#define HIB_HIBDATA11_OFFSET   ((uint32_t)0x005Cu)
#define HIB_HIBDATA12_OFFSET   ((uint32_t)0x0060u)
#define HIB_HIBDATA13_OFFSET   ((uint32_t)0x0064u)
#define HIB_HIBDATA14_OFFSET   ((uint32_t)0x0068u)
#define HIB_HIBDATA15_OFFSET   ((uint32_t)0x006Cu)




#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERADDRESS_H_ */
