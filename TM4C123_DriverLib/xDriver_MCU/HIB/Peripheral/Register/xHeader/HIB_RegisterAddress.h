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

#define HIB_RTCC_OFFSET    ((uint32_t) 0x0000UL)
#define HIB_RTCM0_OFFSET    ((uint32_t) 0x0004UL)
#define HIB_RTCLD_OFFSET    ((uint32_t) 0x000CUL)
#define HIB_CTL_OFFSET    ((uint32_t) 0x0010UL)
#define HIB_IM_OFFSET    ((uint32_t) 0x0014UL)
#define HIB_RIS_OFFSET    ((uint32_t) 0x0018UL)
#define HIB_MIS_OFFSET    ((uint32_t) 0x001CUL)
#define HIB_IC_OFFSET    ((uint32_t) 0x0020UL)
#define HIB_RTCT_OFFSET    ((uint32_t) 0x0024UL)
#define HIB_RTCSS_OFFSET    ((uint32_t) 0x0028UL)
#define HIB_DATA_OFFSET    ((uint32_t) 0x0030UL)
#define HIB_DATA0_OFFSET    ((uint32_t) 0x0030UL)
#define HIB_DATA1_OFFSET    ((uint32_t) 0x0034UL)
#define HIB_DATA2_OFFSET    ((uint32_t) 0x0038UL)
#define HIB_DATA3_OFFSET    ((uint32_t) 0x003CUL)
#define HIB_DATA4_OFFSET    ((uint32_t) 0x0040UL)
#define HIB_DATA5_OFFSET    ((uint32_t) 0x0044UL)
#define HIB_DATA6_OFFSET    ((uint32_t) 0x0048UL)
#define HIB_DATA7_OFFSET    ((uint32_t) 0x004CUL)
#define HIB_DATA8_OFFSET    ((uint32_t) 0x0050UL)
#define HIB_DATA9_OFFSET    ((uint32_t) 0x0054UL)
#define HIB_DATA10_OFFSET    ((uint32_t) 0x0058UL)
#define HIB_DATA11_OFFSET    ((uint32_t) 0x005CUL)
#define HIB_DATA12_OFFSET    ((uint32_t) 0x0060UL)
#define HIB_DATA13_OFFSET    ((uint32_t) 0x0064UL)
#define HIB_DATA14_OFFSET    ((uint32_t) 0x0068UL)
#define HIB_DATA15_OFFSET    ((uint32_t) 0x006CUL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_REGISTER_HIB_REGISTERADDRESS_H_ */
