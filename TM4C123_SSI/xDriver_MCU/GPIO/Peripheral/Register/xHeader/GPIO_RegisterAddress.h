/**
 *
 * @file GPIO_RegisterAddress.h
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define GPIO_APB_BASE    ((uint32_t) 0x40004000UL)
#define GPIOA_APB_BASE    ((uint32_t) 0x40004000UL)
#define GPIOB_APB_BASE    ((uint32_t) 0x40005000UL)
#define GPIOC_APB_BASE    ((uint32_t) 0x40006000UL)
#define GPIOD_APB_BASE    ((uint32_t) 0x40007000UL)
#define GPIOE_APB_BASE    ((uint32_t) 0x40024000UL)
#define GPIOF_APB_BASE    ((uint32_t) 0x40025000UL)

#define GPIO_APB_OFFSET    ((uint32_t) 0x00004000UL)
#define GPIOA_APB_OFFSET    ((uint32_t) 0x00004000UL)
#define GPIOB_APB_OFFSET    ((uint32_t) 0x00005000UL)
#define GPIOC_APB_OFFSET    ((uint32_t) 0x00006000UL)
#define GPIOD_APB_OFFSET    ((uint32_t) 0x00007000UL)
#define GPIOE_APB_OFFSET    ((uint32_t) 0x00024000UL)
#define GPIOF_APB_OFFSET    ((uint32_t) 0x00025000UL)

#define GPIO_AHB_BASE    ((uint32_t) 0x40058000UL)
#define GPIOA_AHB_BASE    ((uint32_t) 0x40058000UL)
#define GPIOB_AHB_BASE    ((uint32_t) 0x40059000UL)
#define GPIOC_AHB_BASE    ((uint32_t) 0x4005A000UL)
#define GPIOD_AHB_BASE    ((uint32_t) 0x4005B000UL)
#define GPIOE_AHB_BASE    ((uint32_t) 0x4005C000UL)
#define GPIOF_AHB_BASE    ((uint32_t) 0x4005D000UL)

#define GPIO_AHB_OFFSET    ((uint32_t) 0x00058000UL)
#define GPIOA_AHB_OFFSET    ((uint32_t) 0x00058000UL)
#define GPIOB_AHB_OFFSET    ((uint32_t) 0x00059000UL)
#define GPIOC_AHB_OFFSET    ((uint32_t) 0x0005A000UL)
#define GPIOD_AHB_OFFSET    ((uint32_t) 0x0005B000UL)
#define GPIOE_AHB_OFFSET    ((uint32_t) 0x0005C000UL)
#define GPIOF_AHB_OFFSET    ((uint32_t) 0x0005D000UL)

#define GPIO_BITBANDING_BASE    ((uint32_t) 0x42000000UL)

#define GPIO_GPIODATA_MASK_OFFSET    ((uint32_t) 0x000UL)
#define GPIO_GPIODATA0_MASK_OFFSET    ((uint32_t) 0x004UL)
#define GPIO_GPIODATA1_MASK_OFFSET    ((uint32_t) 0x008UL)
#define GPIO_GPIODATA2_MASK_OFFSET    ((uint32_t) 0x010UL)
#define GPIO_GPIODATA3_MASK_OFFSET    ((uint32_t) 0x020UL)
#define GPIO_GPIODATA4_MASK_OFFSET    ((uint32_t) 0x040UL)
#define GPIO_GPIODATA5_MASK_OFFSET    ((uint32_t) 0x080UL)
#define GPIO_GPIODATA6_MASK_OFFSET    ((uint32_t) 0x100UL)
#define GPIO_GPIODATA7_MASK_OFFSET    ((uint32_t) 0x200UL)
#define GPIO_GPIODATA_OFFSET    ((uint32_t) 0x3FCUL)
#define GPIO_GPIODIR_OFFSET    ((uint32_t) 0x400UL)
#define GPIO_GPIOIS_OFFSET    ((uint32_t) 0x404UL)
#define GPIO_GPIOIBE_OFFSET    ((uint32_t) 0x408UL)
#define GPIO_GPIOIEV_OFFSET    ((uint32_t) 0x40CUL)
#define GPIO_GPIOIM_OFFSET    ((uint32_t) 0x410UL)
#define GPIO_GPIORIS_OFFSET    ((uint32_t) 0x414UL)
#define GPIO_GPIOMIS_OFFSET    ((uint32_t) 0x418UL)
#define GPIO_GPIOICR_OFFSET    ((uint32_t) 0x41CUL)
#define GPIO_GPIOAFSEL_OFFSET    ((uint32_t) 0x420UL)
#define GPIO_GPIODRR_OFFSET    ((uint32_t) 0x500UL)
#define GPIO_GPIODR2R_OFFSET    ((uint32_t) 0x500UL)
#define GPIO_GPIODR4R_OFFSET    ((uint32_t) 0x504UL)
#define GPIO_GPIODR8R_OFFSET    ((uint32_t) 0x508UL)
#define GPIO_GPIOODR_OFFSET    ((uint32_t) 0x50CUL)
#define GPIO_GPIOPUR_OFFSET    ((uint32_t) 0x510UL)
#define GPIO_GPIOPDR_OFFSET    ((uint32_t) 0x514UL)
#define GPIO_GPIOSLR_OFFSET    ((uint32_t) 0x518UL)
#define GPIO_GPIODEN_OFFSET    ((uint32_t) 0x51CUL)
#define GPIO_GPIOLOCK_OFFSET    ((uint32_t) 0x520UL)
#define GPIO_GPIOCR_OFFSET    ((uint32_t) 0x524UL)
#define GPIO_GPIOAMSEL_OFFSET    ((uint32_t) 0x528UL)
#define GPIO_GPIOPCTL_OFFSET    ((uint32_t) 0x52CUL)
#define GPIO_GPIOADCCTL_OFFSET    ((uint32_t) 0x530UL)
#define GPIO_GPIODMACTL_OFFSET    ((uint32_t) 0x534UL)
#define GPIO_GPIOPeriphID4_OFFSET    ((uint32_t) 0xFD0UL)
#define GPIO_GPIOPeriphID5_OFFSET    ((uint32_t) 0xFD4UL)
#define GPIO_GPIOPeriphID6_OFFSET    ((uint32_t) 0xFD8UL)
#define GPIO_GPIOPeriphID7_OFFSET    ((uint32_t) 0xFDCUL)
#define GPIO_GPIOPeriphID0_OFFSET    ((uint32_t) 0xFE0UL)
#define GPIO_GPIOPeriphID1_OFFSET    ((uint32_t) 0xFE4UL)
#define GPIO_GPIOPeriphID2_OFFSET    ((uint32_t) 0xFE8UL)
#define GPIO_GPIOPeriphID3_OFFSET    ((uint32_t) 0xFECUL)
#define GPIO_GPIOPCellID0_OFFSET    ((uint32_t) 0xFF0UL)
#define GPIO_GPIOPCellID1_OFFSET    ((uint32_t) 0xFF4UL)
#define GPIO_GPIOPCellID2_OFFSET    ((uint32_t) 0xFF8UL)
#define GPIO_GPIOPCellID3_OFFSET    ((uint32_t) 0xFFCUL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERADDRESS_H_ */
