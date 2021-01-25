/**
 *
 * @file GPIO_RegisterDefines_PCTL_ModuleA.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEA_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEA_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
 ************************************ 22 GPIOPCTL Module A *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIOA_GPIOPCTL_R_PCM0_MASK   ((uint32_t)0x0000000FU)
#define GPIOA_GPIOPCTL_R_PCM0_BIT    (0U)
#define GPIOA_GPIOPCTL_R_PCM0_GPIO   ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_R_PCM0_U0Rx   ((uint32_t)0x00000001U)
#define GPIOA_GPIOPCTL_R_PCM0_CAN1Rx ((uint32_t)0x00000008U)

#define GPIOA_GPIOPCTL_PCM0_MASK     ((uint32_t)0x0000000FU)
#define GPIOA_GPIOPCTL_PCM0_GPIO     ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_PCM0_U0Rx     ((uint32_t)0x00000001U)
#define GPIOA_GPIOPCTL_PCM0_CAN1Rx   ((uint32_t)0x00000008U)
/*----------*/

/*----------*/
#define GPIOA_GPIOPCTL_R_PCM1_MASK   ((uint32_t)0x000000F0U)
#define GPIOA_GPIOPCTL_R_PCM1_BIT    (4U)
#define GPIOA_GPIOPCTL_R_PCM1_GPIO   ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_R_PCM1_U0Tx   ((uint32_t)0x00000010U)
#define GPIOA_GPIOPCTL_R_PCM1_CAN1Tx ((uint32_t)0x00000080U)

#define GPIOA_GPIOPCTL_PCM1_MASK     ((uint32_t)0x0000000FU)
#define GPIOA_GPIOPCTL_PCM1_GPIO     ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_PCM1_U0Tx     ((uint32_t)0x00000001U)
#define GPIOA_GPIOPCTL_PCM1_CAN1Tx   ((uint32_t)0x00000008U)
/*----------*/

/*----------*/
#define GPIOA_GPIOPCTL_R_PCM2_MASK    ((uint32_t)0x00000F00U)
#define GPIOA_GPIOPCTL_R_PCM2_BIT     (8U)
#define GPIOA_GPIOPCTL_R_PCM2_GPIO    ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_R_PCM2_SSI0Clk ((uint32_t)0x00000200U)

#define GPIOA_GPIOPCTL_PCM2_MASK      ((uint32_t)0x0000000FU)
#define GPIOA_GPIOPCTL_PCM2_GPIO      ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_PCM2_SSI0Clk   ((uint32_t)0x00000002U)
/*----------*/

/*----------*/
#define GPIOA_GPIOPCTL_R_PCM3_MASK    ((uint32_t)0x0000F000U)
#define GPIOA_GPIOPCTL_R_PCM3_BIT     (12U)
#define GPIOA_GPIOPCTL_R_PCM3_GPIO    ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_R_PCM3_SSI0Fss ((uint32_t)0x00002000U)

#define GPIOA_GPIOPCTL_PCM3_MASK      ((uint32_t)0x0000000FU)
#define GPIOA_GPIOPCTL_PCM3_GPIO      ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_PCM3_SSI0Fss   ((uint32_t)0x00000002U)
/*----------*/

/*----------*/
#define GPIOA_GPIOPCTL_R_PCM4_MASK    ((uint32_t)0x000F0000U)
#define GPIOA_GPIOPCTL_R_PCM4_BIT     (16U)
#define GPIOA_GPIOPCTL_R_PCM4_GPIO    ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_R_PCM4_SSI0Rx  ((uint32_t)0x00020000U)

#define GPIOA_GPIOPCTL_PCM4_MASK      ((uint32_t)0x0000000FU)
#define GPIOA_GPIOPCTL_PCM4_GPIO      ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_PCM4_SSI0Rx    ((uint32_t)0x00000002U)
/*----------*/

/*----------*/
#define GPIOA_GPIOPCTL_R_PCM5_MASK    ((uint32_t)0x00F00000U)
#define GPIOA_GPIOPCTL_R_PCM5_BIT     (20U)
#define GPIOA_GPIOPCTL_R_PCM5_GPIO    ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_R_PCM5_SSI0Tx  ((uint32_t)0x00200000U)

#define GPIOA_GPIOPCTL_PCM5_MASK      ((uint32_t)0x0000000FU)
#define GPIOA_GPIOPCTL_PCM5_GPIO      ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_PCM5_SSI0Tx    ((uint32_t)0x00000002U)
/*----------*/

/*----------*/
#define GPIOA_GPIOPCTL_R_PCM6_MASK    ((uint32_t)0x0F000000U)
#define GPIOA_GPIOPCTL_R_PCM6_BIT     (24U)
#define GPIOA_GPIOPCTL_R_PCM6_GPIO    ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_R_PCM6_I2C1SCL ((uint32_t)0x03000000U)
#define GPIOA_GPIOPCTL_R_PCM6_M1PWM2  ((uint32_t)0x05000000U)

#define GPIOA_GPIOPCTL_PCM6_MASK      ((uint32_t)0x0000000FU)
#define GPIOA_GPIOPCTL_PCM6_GPIO      ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_PCM6_I2C1SCL   ((uint32_t)0x00000003U)
#define GPIOA_GPIOPCTL_PCM6_M1PWM2    ((uint32_t)0x00000005U)
/*----------*/

/*----------*/
#define GPIOA_GPIOPCTL_R_PCM7_MASK    ((uint32_t)0xF0000000U)
#define GPIOA_GPIOPCTL_R_PCM7_BIT     (28U)
#define GPIOA_GPIOPCTL_R_PCM7_GPIO    ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_R_PCM7_I2C1SDA ((uint32_t)0x30000000U)
#define GPIOA_GPIOPCTL_R_PCM7_M1PWM3  ((uint32_t)0x50000000U)

#define GPIOA_GPIOPCTL_PCM7_MASK      ((uint32_t)0x0000000FU)
#define GPIOA_GPIOPCTL_PCM7_GPIO      ((uint32_t)0x00000000U)
#define GPIOA_GPIOPCTL_PCM7_I2C1SDA   ((uint32_t)0x00000003U)
#define GPIOA_GPIOPCTL_PCM7_M1PWM3    ((uint32_t)0x00000005U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEA_H_ */
