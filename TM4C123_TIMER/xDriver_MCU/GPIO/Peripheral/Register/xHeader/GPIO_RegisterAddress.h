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

#include <stdint.h>

#define GPIO_APB_BASE               ((uint32_t)0x40004000u)
#define GPIOA_APB_BASE              ((uint32_t)0x40004000u)
#define GPIOB_APB_BASE              ((uint32_t)0x40005000u)
#define GPIOC_APB_BASE              ((uint32_t)0x40006000u)
#define GPIOD_APB_BASE              ((uint32_t)0x40007000u)
#define GPIOE_APB_BASE              ((uint32_t)0x40024000u)
#define GPIOF_APB_BASE              ((uint32_t)0x40025000u)

#define GPIO_APB_OFFSET             ((uint32_t)0x00004000u)
#define GPIOA_APB_OFFSET            ((uint32_t)0x00004000u)
#define GPIOB_APB_OFFSET            ((uint32_t)0x00005000u)
#define GPIOC_APB_OFFSET            ((uint32_t)0x00006000u)
#define GPIOD_APB_OFFSET            ((uint32_t)0x00007000u)
#define GPIOE_APB_OFFSET            ((uint32_t)0x00024000u)
#define GPIOF_APB_OFFSET            ((uint32_t)0x00025000u)

#define GPIO_AHB_BASE               ((uint32_t)0x40058000u)
#define GPIOA_AHB_BASE              ((uint32_t)0x40058000u)
#define GPIOB_AHB_BASE              ((uint32_t)0x40059000u)
#define GPIOC_AHB_BASE              ((uint32_t)0x4005A000u)
#define GPIOD_AHB_BASE              ((uint32_t)0x4005B000u)
#define GPIOE_AHB_BASE              ((uint32_t)0x4005C000u)
#define GPIOF_AHB_BASE              ((uint32_t)0x4005D000u)

#define GPIO_AHB_OFFSET             ((uint32_t)0x00058000u)
#define GPIOA_AHB_OFFSET            ((uint32_t)0x00058000u)
#define GPIOB_AHB_OFFSET            ((uint32_t)0x00059000u)
#define GPIOC_AHB_OFFSET            ((uint32_t)0x0005A000u)
#define GPIOD_AHB_OFFSET            ((uint32_t)0x0005B000u)
#define GPIOE_AHB_OFFSET            ((uint32_t)0x0005C000u)
#define GPIOF_AHB_OFFSET            ((uint32_t)0x0005D000u)

#define GPIO_BITBANDING_BASE        ((uint32_t)0x42000000u)


#define GPIO_GPIODATA_MASK_OFFSET        ((uint32_t)0x000u)
#define GPIO_GPIODATA0_MASK_OFFSET       ((uint32_t)0x004u)
#define GPIO_GPIODATA1_MASK_OFFSET       ((uint32_t)0x008u)
#define GPIO_GPIODATA2_MASK_OFFSET       ((uint32_t)0x010u)
#define GPIO_GPIODATA3_MASK_OFFSET       ((uint32_t)0x020u)
#define GPIO_GPIODATA4_MASK_OFFSET       ((uint32_t)0x040u)
#define GPIO_GPIODATA5_MASK_OFFSET       ((uint32_t)0x080u)
#define GPIO_GPIODATA6_MASK_OFFSET       ((uint32_t)0x100u)
#define GPIO_GPIODATA7_MASK_OFFSET       ((uint32_t)0x200u)
#define GPIO_GPIODATA_OFFSET             ((uint32_t)0x3FCu)
#define GPIO_GPIODIR_OFFSET              ((uint32_t)0x400u)
#define GPIO_GPIOIS_OFFSET               ((uint32_t)0x404u)
#define GPIO_GPIOIBE_OFFSET              ((uint32_t)0x408u)
#define GPIO_GPIOIEV_OFFSET              ((uint32_t)0x40Cu)
#define GPIO_GPIOIM_OFFSET               ((uint32_t)0x410u)
#define GPIO_GPIORIS_OFFSET              ((uint32_t)0x414u)
#define GPIO_GPIOMIS_OFFSET              ((uint32_t)0x418u)
#define GPIO_GPIOICR_OFFSET              ((uint32_t)0x41Cu)
#define GPIO_GPIOAFSEL_OFFSET            ((uint32_t)0x420u)
#define GPIO_GPIODR2R_OFFSET             ((uint32_t)0x500u)
#define GPIO_GPIODR4R_OFFSET             ((uint32_t)0x504u)
#define GPIO_GPIODR8R_OFFSET             ((uint32_t)0x508u)
#define GPIO_GPIOODR_OFFSET              ((uint32_t)0x50Cu)
#define GPIO_GPIOPUR_OFFSET              ((uint32_t)0x510u)
#define GPIO_GPIOPDR_OFFSET              ((uint32_t)0x514u)
#define GPIO_GPIOSLR_OFFSET              ((uint32_t)0x518u)
#define GPIO_GPIODEN_OFFSET              ((uint32_t)0x51Cu)
#define GPIO_GPIOLOCK_OFFSET             ((uint32_t)0x520u)
#define GPIO_GPIOCR_OFFSET               ((uint32_t)0x524u)
#define GPIO_GPIOAMSEL_OFFSET            ((uint32_t)0x528u)
#define GPIO_GPIOPCTL_OFFSET             ((uint32_t)0x52Cu)
#define GPIO_GPIOADCCTL_OFFSET           ((uint32_t)0x530u)
#define GPIO_GPIODMACTL_OFFSET           ((uint32_t)0x534u)
#define GPIO_GPIOPeriphID4_OFFSET        ((uint32_t)0xFD0u)
#define GPIO_GPIOPeriphID5_OFFSET        ((uint32_t)0xFD4u)
#define GPIO_GPIOPeriphID6_OFFSET        ((uint32_t)0xFD8u)
#define GPIO_GPIOPeriphID7_OFFSET        ((uint32_t)0xFDCu)
#define GPIO_GPIOPeriphID0_OFFSET        ((uint32_t)0xFE0u)
#define GPIO_GPIOPeriphID1_OFFSET        ((uint32_t)0xFE4u)
#define GPIO_GPIOPeriphID2_OFFSET        ((uint32_t)0xFE8u)
#define GPIO_GPIOPeriphID3_OFFSET        ((uint32_t)0xFECu)
#define GPIO_GPIOPCellID0_OFFSET         ((uint32_t)0xFF0u)
#define GPIO_GPIOPCellID1_OFFSET         ((uint32_t)0xFF4u)
#define GPIO_GPIOPCellID2_OFFSET         ((uint32_t)0xFF8u)
#define GPIO_GPIOPCellID3_OFFSET         ((uint32_t)0xFFCu)


#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERADDRESS_H_ */
