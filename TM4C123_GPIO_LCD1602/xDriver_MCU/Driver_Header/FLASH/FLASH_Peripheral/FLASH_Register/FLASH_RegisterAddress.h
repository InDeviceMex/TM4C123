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


#define FLASH_BASE              ((uint32_t)0x400FD000u)
#define FLASH_BITBANDING_BASE   ((uint32_t)0x42000000u)
#define FLASH_OFFSET            ((uint32_t)0x000FD000u)

#define FLASH_ADDRESS_MAX       ((uint32_t)0x00040000u)
#define FLASH_ADDRESS_MIN       ((uint32_t)0x00000000u)
#define FLASH_PAGE_SIZE         ((uint32_t)0x00000400u)
#define FLASH_PAGE_COUNT        (256u)
#define FLASH_ERASEWORLD        ((uint32_t)0xFFFFFFFFu)
#define FLASH_ERASEHALFWORLD    ((uint32_t)0xFFFFu)
#define FLASH_ERASEBYTE         ((uint32_t)0xFFu)

#define FLASH_FMA_OFFSET     ((uint32_t)0x0000u)
#define FLASH_FMD_OFFSET     ((uint32_t)0x0004u)
#define FLASH_FMC_OFFSET     ((uint32_t)0x0008u)
#define FLASH_FCRIS_OFFSET   ((uint32_t)0x000Cu)
#define FLASH_FCIM_OFFSET    ((uint32_t)0x0010u)
#define FLASH_FCMISC_OFFSET  ((uint32_t)0x0014u)
#define FLASH_FMC2_OFFSET    ((uint32_t)0x0020u)
#define FLASH_FWBVAL_OFFSET  ((uint32_t)0x0030u)
#define FLASH_FWBn_OFFSET    ((uint32_t)0x0100u)
#define FLASH_FWB0_OFFSET    ((uint32_t)0x0100u)
#define FLASH_FWB1_OFFSET    ((uint32_t)0x0104u)
#define FLASH_FWB2_OFFSET    ((uint32_t)0x0108u)
#define FLASH_FWB3_OFFSET    ((uint32_t)0x010Cu)
#define FLASH_FWB4_OFFSET    ((uint32_t)0x0110u)
#define FLASH_FWB5_OFFSET    ((uint32_t)0x0114u)
#define FLASH_FWB6_OFFSET    ((uint32_t)0x0118u)
#define FLASH_FWB7_OFFSET    ((uint32_t)0x011Cu)
#define FLASH_FWB8_OFFSET    ((uint32_t)0x0120u)
#define FLASH_FWB9_OFFSET    ((uint32_t)0x0124u)
#define FLASH_FWB10_OFFSET   ((uint32_t)0x0128u)
#define FLASH_FWB11_OFFSET   ((uint32_t)0x012Cu)
#define FLASH_FWB12_OFFSET   ((uint32_t)0x0130u)
#define FLASH_FWB13_OFFSET   ((uint32_t)0x0134u)
#define FLASH_FWB14_OFFSET   ((uint32_t)0x0138u)
#define FLASH_FWB15_OFFSET   ((uint32_t)0x013Cu)
#define FLASH_FWB16_OFFSET   ((uint32_t)0x0140u)
#define FLASH_FWB17_OFFSET   ((uint32_t)0x0144u)
#define FLASH_FWB18_OFFSET   ((uint32_t)0x0148u)
#define FLASH_FWB19_OFFSET   ((uint32_t)0x014Cu)
#define FLASH_FWB20_OFFSET   ((uint32_t)0x0150u)
#define FLASH_FWB21_OFFSET   ((uint32_t)0x0154u)
#define FLASH_FWB22_OFFSET   ((uint32_t)0x0158u)
#define FLASH_FWB23_OFFSET   ((uint32_t)0x015Cu)
#define FLASH_FWB24_OFFSET   ((uint32_t)0x0160u)
#define FLASH_FWB25_OFFSET   ((uint32_t)0x0164u)
#define FLASH_FWB26_OFFSET   ((uint32_t)0x0168u)
#define FLASH_FWB27_OFFSET   ((uint32_t)0x016Cu)
#define FLASH_FWB28_OFFSET   ((uint32_t)0x0170u)
#define FLASH_FWB29_OFFSET   ((uint32_t)0x0174u)
#define FLASH_FWB30_OFFSET   ((uint32_t)0x0178u)
#define FLASH_FWB31_OFFSET   ((uint32_t)0x017Cu)
#define FLASH_FSIZE_OFFSET   ((uint32_t)0x0FC0u)
#define FLASH_SSIZE_OFFSET   ((uint32_t)0x0FC4u)
#define FLASH_ROMSWMAP_OFFSET ((uint32_t)0x0FCCu)

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_PERIPHERAL_FLASH_REGISTER_FLASH_REGISTERADDRESS_H_ */
