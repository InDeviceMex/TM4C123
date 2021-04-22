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

#define GPIO_DATA_MASK_OFFSET    ((uint32_t) 0x000UL)
#define GPIO_DATA0_MASK_OFFSET    ((uint32_t) 0x004UL)
#define GPIO_DATA1_MASK_OFFSET    ((uint32_t) 0x008UL)
#define GPIO_DATA2_MASK_OFFSET    ((uint32_t) 0x010UL)
#define GPIO_DATA3_MASK_OFFSET    ((uint32_t) 0x020UL)
#define GPIO_DATA4_MASK_OFFSET    ((uint32_t) 0x040UL)
#define GPIO_DATA5_MASK_OFFSET    ((uint32_t) 0x080UL)
#define GPIO_DATA6_MASK_OFFSET    ((uint32_t) 0x100UL)
#define GPIO_DATA7_MASK_OFFSET    ((uint32_t) 0x200UL)
#define GPIO_DATA_OFFSET    ((uint32_t) 0x3FCUL)
#define GPIO_DIR_OFFSET    ((uint32_t) 0x400UL)
#define GPIO_IS_OFFSET    ((uint32_t) 0x404UL)
#define GPIO_IBE_OFFSET    ((uint32_t) 0x408UL)
#define GPIO_IEV_OFFSET    ((uint32_t) 0x40CUL)
#define GPIO_IM_OFFSET    ((uint32_t) 0x410UL)
#define GPIO_RIS_OFFSET    ((uint32_t) 0x414UL)
#define GPIO_MIS_OFFSET    ((uint32_t) 0x418UL)
#define GPIO_ICR_OFFSET    ((uint32_t) 0x41CUL)
#define GPIO_AFSEL_OFFSET    ((uint32_t) 0x420UL)
#define GPIO_DRR_OFFSET    ((uint32_t) 0x500UL)
#define GPIO_DR2R_OFFSET    ((uint32_t) 0x500UL)
#define GPIO_DR4R_OFFSET    ((uint32_t) 0x504UL)
#define GPIO_DR8R_OFFSET    ((uint32_t) 0x508UL)
#define GPIO_ODR_OFFSET    ((uint32_t) 0x50CUL)
#define GPIO_PUR_OFFSET    ((uint32_t) 0x510UL)
#define GPIO_PDR_OFFSET    ((uint32_t) 0x514UL)
#define GPIO_SLR_OFFSET    ((uint32_t) 0x518UL)
#define GPIO_DEN_OFFSET    ((uint32_t) 0x51CUL)
#define GPIO_LOCK_OFFSET    ((uint32_t) 0x520UL)
#define GPIO_CR_OFFSET    ((uint32_t) 0x524UL)
#define GPIO_AMSEL_OFFSET    ((uint32_t) 0x528UL)
#define GPIO_PCTL_OFFSET    ((uint32_t) 0x52CUL)
#define GPIO_ADCCTL_OFFSET    ((uint32_t) 0x530UL)
#define GPIO_DMACTL_OFFSET    ((uint32_t) 0x534UL)
#define GPIO_PeriphID4_OFFSET    ((uint32_t) 0xFD0UL)
#define GPIO_PeriphID5_OFFSET    ((uint32_t) 0xFD4UL)
#define GPIO_PeriphID6_OFFSET    ((uint32_t) 0xFD8UL)
#define GPIO_PeriphID7_OFFSET    ((uint32_t) 0xFDCUL)
#define GPIO_PeriphID0_OFFSET    ((uint32_t) 0xFE0UL)
#define GPIO_PeriphID1_OFFSET    ((uint32_t) 0xFE4UL)
#define GPIO_PeriphID2_OFFSET    ((uint32_t) 0xFE8UL)
#define GPIO_PeriphID3_OFFSET    ((uint32_t) 0xFECUL)
#define GPIO_PCellID0_OFFSET    ((uint32_t) 0xFF0UL)
#define GPIO_PCellID1_OFFSET    ((uint32_t) 0xFF4UL)
#define GPIO_PCellID2_OFFSET    ((uint32_t) 0xFF8UL)
#define GPIO_PCellID3_OFFSET    ((uint32_t) 0xFFCUL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERADDRESS_H_ */
