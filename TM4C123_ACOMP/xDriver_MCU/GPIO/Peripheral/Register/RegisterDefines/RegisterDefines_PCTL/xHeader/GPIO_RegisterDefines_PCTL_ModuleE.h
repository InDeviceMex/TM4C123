/**
 *
 * @file GPIO_RegisterDefines_PCTL_ModuleE.h
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
 * @verbatim 25 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEE_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEE_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
 ************************************ 22 GPIOPCTL Module E *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIOE_GPIOPCTL_R_PCM0_MASK    ((uint32_t)0x0000000FU)
#define GPIOE_GPIOPCTL_R_PCM0_BIT     (0U)
#define GPIOE_GPIOPCTL_R_PCM0_GPIO    ((uint32_t)0x00000000U)
#define GPIOE_GPIOPCTL_R_PCM0_U7Rx    ((uint32_t)0x00000001U)

#define GPIOE_GPIOPCTL_PCM0_MASK     ((uint32_t)0x0000000FU)
#define GPIOE_GPIOPCTL_PCM0_GPIO     ((uint32_t)0x00000000U)
#define GPIOE_GPIOPCTL_PCM0_U7Rx     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPIOE_GPIOPCTL_R_PCM1_MASK    ((uint32_t)0x000000F0U)
#define GPIOE_GPIOPCTL_R_PCM1_BIT     (4U)
#define GPIOE_GPIOPCTL_R_PCM1_GPIO    ((uint32_t)0x00000000U)
#define GPIOE_GPIOPCTL_R_PCM1_U7Tx    ((uint32_t)0x00000010U)

#define GPIOE_GPIOPCTL_PCM1_MASK     ((uint32_t)0x0000000FU)
#define GPIOE_GPIOPCTL_PCM1_GPIO     ((uint32_t)0x00000000U)
#define GPIOE_GPIOPCTL_PCM1_U7Tx     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPIOE_GPIOPCTL_R_PCM2_MASK     ((uint32_t)0x00000F00U)
#define GPIOE_GPIOPCTL_R_PCM2_BIT      (8U)
#define GPIOE_GPIOPCTL_R_PCM2_GPIO     ((uint32_t)0x00000000U)

#define GPIOE_GPIOPCTL_PCM2_MASK     ((uint32_t)0x0000000FU)
#define GPIOE_GPIOPCTL_PCM2_GPIO     ((uint32_t)0x00000000U)
/*----------*/

/*----------*/
#define GPIOE_GPIOPCTL_R_PCM3_MASK     ((uint32_t)0x0000F000U)
#define GPIOE_GPIOPCTL_R_PCM3_BIT      (12U)
#define GPIOE_GPIOPCTL_R_PCM3_GPIO     ((uint32_t)0x00000000U)

#define GPIOE_GPIOPCTL_PCM3_MASK     ((uint32_t)0x0000000FU)
#define GPIOE_GPIOPCTL_PCM3_GPIO     ((uint32_t)0x00000000U)
/*----------*/

/*----------*/
#define GPIOE_GPIOPCTL_R_PCM4_MASK    ((uint32_t)0x000F0000U)
#define GPIOE_GPIOPCTL_R_PCM4_BIT     (16U)
#define GPIOE_GPIOPCTL_R_PCM4_GPIO    ((uint32_t)0x00000000U)
#define GPIOE_GPIOPCTL_R_PCM4_U5Rx    ((uint32_t)0x00010000U)
#define GPIOE_GPIOPCTL_R_PCM4_I2C2SCL ((uint32_t)0x00030000U)
#define GPIOE_GPIOPCTL_R_PCM4_M0PWM4  ((uint32_t)0x00040000U)
#define GPIOE_GPIOPCTL_R_PCM4_M1PWM2  ((uint32_t)0x00050000U)
#define GPIOE_GPIOPCTL_R_PCM4_CAN0Rx  ((uint32_t)0x00080000U)

#define GPIOE_GPIOPCTL_PCM4_MASK      ((uint32_t)0x0000000FU)
#define GPIOE_GPIOPCTL_PCM4_GPIO      ((uint32_t)0x00000000U)
#define GPIOE_GPIOPCTL_PCM4_U5Rx      ((uint32_t)0x00000001U)
#define GPIOE_GPIOPCTL_PCM4_I2C2SCL   ((uint32_t)0x00000003U)
#define GPIOE_GPIOPCTL_PCM4_M0PWM4    ((uint32_t)0x00000004U)
#define GPIOE_GPIOPCTL_PCM4_M1PWM2    ((uint32_t)0x00000005U)
#define GPIOE_GPIOPCTL_PCM4_CAN0Rx    ((uint32_t)0x00000008U)
/*----------*/

/*----------*/
#define GPIOE_GPIOPCTL_R_PCM5_MASK    ((uint32_t)0x00F00000U)
#define GPIOE_GPIOPCTL_R_PCM5_BIT     (20U)
#define GPIOE_GPIOPCTL_R_PCM5_GPIO    ((uint32_t)0x00000000U)
#define GPIOE_GPIOPCTL_R_PCM5_U5Tx    ((uint32_t)0x00100000U)
#define GPIOE_GPIOPCTL_R_PCM5_I2C2SDA ((uint32_t)0x00300000U)
#define GPIOE_GPIOPCTL_R_PCM5_M0PWM5  ((uint32_t)0x00400000U)
#define GPIOE_GPIOPCTL_R_PCM5_M1PWM3  ((uint32_t)0x00500000U)
#define GPIOE_GPIOPCTL_R_PCM5_CAN0Tx  ((uint32_t)0x00800000U)

#define GPIOE_GPIOPCTL_PCM5_MASK      ((uint32_t)0x0000000FU)
#define GPIOE_GPIOPCTL_PCM5_GPIO      ((uint32_t)0x00000000U)
#define GPIOE_GPIOPCTL_PCM5_U5Tx      ((uint32_t)0x00000001U)
#define GPIOE_GPIOPCTL_PCM5_I2C2SDA   ((uint32_t)0x00000003U)
#define GPIOE_GPIOPCTL_PCM5_M0PWM5    ((uint32_t)0x00000004U)
#define GPIOE_GPIOPCTL_PCM5_M1PWM3    ((uint32_t)0x00000005U)
#define GPIOE_GPIOPCTL_PCM5_CAN0Tx    ((uint32_t)0x00000008U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEE_H_ */
