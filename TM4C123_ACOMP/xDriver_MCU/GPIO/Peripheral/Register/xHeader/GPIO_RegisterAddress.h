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

#define GPIO_APB_BASE               ((uint32_t)0x40004000U)
#define GPIOA_APB_BASE              ((uint32_t)0x40004000U)
#define GPIOB_APB_BASE              ((uint32_t)0x40005000U)
#define GPIOC_APB_BASE              ((uint32_t)0x40006000U)
#define GPIOD_APB_BASE              ((uint32_t)0x40007000U)
#define GPIOE_APB_BASE              ((uint32_t)0x40024000U)
#define GPIOF_APB_BASE              ((uint32_t)0x40025000U)

#define GPIO_APB_OFFSET             ((uint32_t)0x00004000U)
#define GPIOA_APB_OFFSET            ((uint32_t)0x00004000U)
#define GPIOB_APB_OFFSET            ((uint32_t)0x00005000U)
#define GPIOC_APB_OFFSET            ((uint32_t)0x00006000U)
#define GPIOD_APB_OFFSET            ((uint32_t)0x00007000U)
#define GPIOE_APB_OFFSET            ((uint32_t)0x00024000U)
#define GPIOF_APB_OFFSET            ((uint32_t)0x00025000U)

#define GPIO_AHB_BASE               ((uint32_t)0x40058000U)
#define GPIOA_AHB_BASE              ((uint32_t)0x40058000U)
#define GPIOB_AHB_BASE              ((uint32_t)0x40059000U)
#define GPIOC_AHB_BASE              ((uint32_t)0x4005A000U)
#define GPIOD_AHB_BASE              ((uint32_t)0x4005B000U)
#define GPIOE_AHB_BASE              ((uint32_t)0x4005C000U)
#define GPIOF_AHB_BASE              ((uint32_t)0x4005D000U)

#define GPIO_AHB_OFFSET             ((uint32_t)0x00058000U)
#define GPIOA_AHB_OFFSET            ((uint32_t)0x00058000U)
#define GPIOB_AHB_OFFSET            ((uint32_t)0x00059000U)
#define GPIOC_AHB_OFFSET            ((uint32_t)0x0005A000U)
#define GPIOD_AHB_OFFSET            ((uint32_t)0x0005B000U)
#define GPIOE_AHB_OFFSET            ((uint32_t)0x0005C000U)
#define GPIOF_AHB_OFFSET            ((uint32_t)0x0005D000U)

#define GPIO_BITBANDING_BASE        ((uint32_t)0x42000000U)

#define GPIO_GPIODATA_MASK_OFFSET        ((uint32_t)0x000U)
#define GPIO_GPIODATA0_MASK_OFFSET       ((uint32_t)0x004U)
#define GPIO_GPIODATA1_MASK_OFFSET       ((uint32_t)0x008U)
#define GPIO_GPIODATA2_MASK_OFFSET       ((uint32_t)0x010U)
#define GPIO_GPIODATA3_MASK_OFFSET       ((uint32_t)0x020U)
#define GPIO_GPIODATA4_MASK_OFFSET       ((uint32_t)0x040U)
#define GPIO_GPIODATA5_MASK_OFFSET       ((uint32_t)0x080U)
#define GPIO_GPIODATA6_MASK_OFFSET       ((uint32_t)0x100U)
#define GPIO_GPIODATA7_MASK_OFFSET       ((uint32_t)0x200U)
#define GPIO_GPIODATA_OFFSET             ((uint32_t)0x3FCU)
#define GPIO_GPIODIR_OFFSET              ((uint32_t)0x400U)
#define GPIO_GPIOIS_OFFSET               ((uint32_t)0x404U)
#define GPIO_GPIOIBE_OFFSET              ((uint32_t)0x408U)
#define GPIO_GPIOIEV_OFFSET              ((uint32_t)0x40CU)
#define GPIO_GPIOIM_OFFSET               ((uint32_t)0x410U)
#define GPIO_GPIORIS_OFFSET              ((uint32_t)0x414U)
#define GPIO_GPIOMIS_OFFSET              ((uint32_t)0x418U)
#define GPIO_GPIOICR_OFFSET              ((uint32_t)0x41CU)
#define GPIO_GPIOAFSEL_OFFSET            ((uint32_t)0x420U)
#define GPIO_GPIODR2R_OFFSET             ((uint32_t)0x500U)
#define GPIO_GPIODR4R_OFFSET             ((uint32_t)0x504U)
#define GPIO_GPIODR8R_OFFSET             ((uint32_t)0x508U)
#define GPIO_GPIOODR_OFFSET              ((uint32_t)0x50CU)
#define GPIO_GPIOPUR_OFFSET              ((uint32_t)0x510U)
#define GPIO_GPIOPDR_OFFSET              ((uint32_t)0x514U)
#define GPIO_GPIOSLR_OFFSET              ((uint32_t)0x518U)
#define GPIO_GPIODEN_OFFSET              ((uint32_t)0x51CU)
#define GPIO_GPIOLOCK_OFFSET             ((uint32_t)0x520U)
#define GPIO_GPIOCR_OFFSET               ((uint32_t)0x524U)
#define GPIO_GPIOAMSEL_OFFSET            ((uint32_t)0x528U)
#define GPIO_GPIOPCTL_OFFSET             ((uint32_t)0x52CU)
#define GPIO_GPIOADCCTL_OFFSET           ((uint32_t)0x530U)
#define GPIO_GPIODMACTL_OFFSET           ((uint32_t)0x534U)
#define GPIO_GPIOPeriphID4_OFFSET        ((uint32_t)0xFD0U)
#define GPIO_GPIOPeriphID5_OFFSET        ((uint32_t)0xFD4U)
#define GPIO_GPIOPeriphID6_OFFSET        ((uint32_t)0xFD8U)
#define GPIO_GPIOPeriphID7_OFFSET        ((uint32_t)0xFDCU)
#define GPIO_GPIOPeriphID0_OFFSET        ((uint32_t)0xFE0U)
#define GPIO_GPIOPeriphID1_OFFSET        ((uint32_t)0xFE4U)
#define GPIO_GPIOPeriphID2_OFFSET        ((uint32_t)0xFE8U)
#define GPIO_GPIOPeriphID3_OFFSET        ((uint32_t)0xFECU)
#define GPIO_GPIOPCellID0_OFFSET         ((uint32_t)0xFF0U)
#define GPIO_GPIOPCellID1_OFFSET         ((uint32_t)0xFF4U)
#define GPIO_GPIOPCellID2_OFFSET         ((uint32_t)0xFF8U)
#define GPIO_GPIOPCellID3_OFFSET         ((uint32_t)0xFFCU)

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERADDRESS_H_ */
