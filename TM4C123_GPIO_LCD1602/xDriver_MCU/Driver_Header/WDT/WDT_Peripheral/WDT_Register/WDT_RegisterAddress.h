/**
 *
 * @file WDT_RegisterAddress.h
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
 * @verbatim 19 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERADDRESS_H_

#include <stdint.h>

#define WDT_BASE            ((uint32_t)0x40000000u)
#define WDT0_BASE           ((uint32_t)0x40000000u)
#define WDT1_BASE           ((uint32_t)0x40001000u)

#define WDT_OFFSET          ((uint32_t)0x00000000u)
#define WDT0_OFFSET         ((uint32_t)0x00000000u)
#define WDT1_OFFSET         ((uint32_t)0x00001000u)

#define WDT_BITBANDING_BASE        ((uint32_t)0x42000000u)

#define WDT_WDTLOAD_OFFSET      ((uint32_t)0x0000u)
#define WDT_WDTVALUE_OFFSET     ((uint32_t)0x0004u)
#define WDT_WDTCTL_OFFSET       ((uint32_t)0x0008u)
#define WDT_WDTICR_OFFSET       ((uint32_t)0x000Cu)
#define WDT_WDTRIS_OFFSET       ((uint32_t)0x0010u)
#define WDT_WDTMIS_OFFSET       ((uint32_t)0x0014u)
#define WDT_WDTTEST_OFFSET      ((uint32_t)0x0418u)
#define WDT_WDTLOCK_OFFSET      ((uint32_t)0x0C00u)
#define WDT_WDTPeriphID4_OFFSET ((uint32_t)0x0FD0u)
#define WDT_WDTPeriphID5_OFFSET ((uint32_t)0x0FD4u)
#define WDT_WDTPeriphID6_OFFSET ((uint32_t)0x0FD8u)
#define WDT_WDTPeriphID7_OFFSET ((uint32_t)0x0FDCu)
#define WDT_WDTPeriphID0_OFFSET ((uint32_t)0x0FE0u)
#define WDT_WDTPeriphID1_OFFSET ((uint32_t)0x0FE4u)
#define WDT_WDTPeriphID2_OFFSET ((uint32_t)0x0FE8u)
#define WDT_WDTPeriphID3_OFFSET ((uint32_t)0x0FECu)
#define WDT_WDTPCellID0_OFFSET  ((uint32_t)0x0FF0u)
#define WDT_WDTPCellID1_OFFSET  ((uint32_t)0x0FF4u)
#define WDT_WDTPCellID2_OFFSET  ((uint32_t)0x0FF8u)
#define WDT_WDTPCellID3_OFFSET  ((uint32_t)0x0FFCu)

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERADDRESS_H_ */
