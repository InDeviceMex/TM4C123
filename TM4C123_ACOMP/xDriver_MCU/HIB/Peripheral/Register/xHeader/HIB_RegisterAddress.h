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

#define HIB_BASE            ((uint32_t)0x400FC000U)
#define HIB_BITBANDING_BASE ((uint32_t)0x42000000U)
#define HIB_OFFSET          ((uint32_t)0x000FC000U)

#define HIB_HIBRTCC_OFFSET     ((uint32_t)0x0000U)
#define HIB_HIBRTCM0_OFFSET    ((uint32_t)0x0004U)
#define HIB_HIBRTCLD_OFFSET    ((uint32_t)0x000CU)
#define HIB_HIBCTL_OFFSET      ((uint32_t)0x0010U)
#define HIB_HIBIM_OFFSET       ((uint32_t)0x0014U)
#define HIB_HIBRIS_OFFSET      ((uint32_t)0x0018U)
#define HIB_HIBMIS_OFFSET      ((uint32_t)0x001CU)
#define HIB_HIBIC_OFFSET       ((uint32_t)0x0020U)
#define HIB_HIBRTCT_OFFSET     ((uint32_t)0x0024U)
#define HIB_HIBRTCSS_OFFSET    ((uint32_t)0x0028U)
#define HIB_HIBDATA_OFFSET     ((uint32_t)0x0030U)
#define HIB_HIBDATA0_OFFSET    ((uint32_t)0x0030U)
#define HIB_HIBDATA1_OFFSET    ((uint32_t)0x0034U)
#define HIB_HIBDATA2_OFFSET    ((uint32_t)0x0038U)
#define HIB_HIBDATA3_OFFSET    ((uint32_t)0x003CU)
#define HIB_HIBDATA4_OFFSET    ((uint32_t)0x0040U)
#define HIB_HIBDATA5_OFFSET    ((uint32_t)0x0044U)
#define HIB_HIBDATA6_OFFSET    ((uint32_t)0x0048U)
#define HIB_HIBDATA7_OFFSET    ((uint32_t)0x004CU)
#define HIB_HIBDATA8_OFFSET    ((uint32_t)0x0050U)
#define HIB_HIBDATA9_OFFSET    ((uint32_t)0x0054U)
#define HIB_HIBDATA10_OFFSET   ((uint32_t)0x0058U)
#define HIB_HIBDATA11_OFFSET   ((uint32_t)0x005CU)
#define HIB_HIBDATA12_OFFSET   ((uint32_t)0x0060U)
#define HIB_HIBDATA13_OFFSET   ((uint32_t)0x0064U)
#define HIB_HIBDATA14_OFFSET   ((uint32_t)0x0068U)
#define HIB_HIBDATA15_OFFSET   ((uint32_t)0x006CU)




#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERADDRESS_H_ */
