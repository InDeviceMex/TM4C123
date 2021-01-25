/**
 *
 * @file FLASH_RegisterAddress.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define FLASH_BASE              ((uint32_t)0x400FD000U)
#define FLASH_BITBANDING_BASE   ((uint32_t)0x42000000U)
#define FLASH_OFFSET            ((uint32_t)0x000FD000U)

#define FLASH_ADDRESS_MAX       ((uint32_t)0x00040000U)
#define FLASH_ADDRESS_MIN       ((uint32_t)0x00000000U)
#define FLASH_PAGE_SIZE         ((uint32_t)0x00000400U)
#define FLASH_PAGE_COUNT        (256U)
#define FLASH_ERASEWORLD        ((uint32_t)0xFFFFFFFFU)
#define FLASH_ERASEHALFWORLD    ((uint32_t)0xFFFFU)
#define FLASH_ERASEBYTE         ((uint32_t)0xFFU)

#define FLASH_FMA_OFFSET     ((uint32_t)0x0000U)
#define FLASH_FMD_OFFSET     ((uint32_t)0x0004U)
#define FLASH_FMC_OFFSET     ((uint32_t)0x0008U)
#define FLASH_FCRIS_OFFSET   ((uint32_t)0x000CU)
#define FLASH_FCIM_OFFSET    ((uint32_t)0x0010U)
#define FLASH_FCMISC_OFFSET  ((uint32_t)0x0014U)
#define FLASH_FMC2_OFFSET    ((uint32_t)0x0020U)
#define FLASH_FWBVAL_OFFSET  ((uint32_t)0x0030U)
#define FLASH_FWBn_OFFSET    ((uint32_t)0x0100U)
#define FLASH_FWB0_OFFSET    ((uint32_t)0x0100U)
#define FLASH_FWB1_OFFSET    ((uint32_t)0x0104U)
#define FLASH_FWB2_OFFSET    ((uint32_t)0x0108U)
#define FLASH_FWB3_OFFSET    ((uint32_t)0x010CU)
#define FLASH_FWB4_OFFSET    ((uint32_t)0x0110U)
#define FLASH_FWB5_OFFSET    ((uint32_t)0x0114U)
#define FLASH_FWB6_OFFSET    ((uint32_t)0x0118U)
#define FLASH_FWB7_OFFSET    ((uint32_t)0x011CU)
#define FLASH_FWB8_OFFSET    ((uint32_t)0x0120U)
#define FLASH_FWB9_OFFSET    ((uint32_t)0x0124U)
#define FLASH_FWB10_OFFSET   ((uint32_t)0x0128U)
#define FLASH_FWB11_OFFSET   ((uint32_t)0x012CU)
#define FLASH_FWB12_OFFSET   ((uint32_t)0x0130U)
#define FLASH_FWB13_OFFSET   ((uint32_t)0x0134U)
#define FLASH_FWB14_OFFSET   ((uint32_t)0x0138U)
#define FLASH_FWB15_OFFSET   ((uint32_t)0x013CU)
#define FLASH_FWB16_OFFSET   ((uint32_t)0x0140U)
#define FLASH_FWB17_OFFSET   ((uint32_t)0x0144U)
#define FLASH_FWB18_OFFSET   ((uint32_t)0x0148U)
#define FLASH_FWB19_OFFSET   ((uint32_t)0x014CU)
#define FLASH_FWB20_OFFSET   ((uint32_t)0x0150U)
#define FLASH_FWB21_OFFSET   ((uint32_t)0x0154U)
#define FLASH_FWB22_OFFSET   ((uint32_t)0x0158U)
#define FLASH_FWB23_OFFSET   ((uint32_t)0x015CU)
#define FLASH_FWB24_OFFSET   ((uint32_t)0x0160U)
#define FLASH_FWB25_OFFSET   ((uint32_t)0x0164U)
#define FLASH_FWB26_OFFSET   ((uint32_t)0x0168U)
#define FLASH_FWB27_OFFSET   ((uint32_t)0x016CU)
#define FLASH_FWB28_OFFSET   ((uint32_t)0x0170U)
#define FLASH_FWB29_OFFSET   ((uint32_t)0x0174U)
#define FLASH_FWB30_OFFSET   ((uint32_t)0x0178U)
#define FLASH_FWB31_OFFSET   ((uint32_t)0x017CU)
#define FLASH_FSIZE_OFFSET   ((uint32_t)0x0FC0U)
#define FLASH_SSIZE_OFFSET   ((uint32_t)0x0FC4U)
#define FLASH_ROMSWMAP_OFFSET ((uint32_t)0x0FCCU)

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERADDRESS_H_ */
