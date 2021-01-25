/**
 *
 * @file GPIO_RegisterDefines_PCTL_ModuleB.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEB_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEB_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
 ************************************ 22 GPIOPCTL Module B *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIOB_GPIOPCTL_R_PCM0_MASK   ((uint32_t)0x0000000FU)
#define GPIOB_GPIOPCTL_R_PCM0_BIT    (0U)
#define GPIOB_GPIOPCTL_R_PCM0_GPIO   ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_R_PCM0_U1Rx   ((uint32_t)0x00000001U)
#define GPIOB_GPIOPCTL_R_PCM0_T2CCP0 ((uint32_t)0x00000007U)

#define GPIOB_GPIOPCTL_PCM0_MASK     ((uint32_t)0x0000000FU)
#define GPIOB_GPIOPCTL_PCM0_GPIO     ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_PCM0_U1Rx     ((uint32_t)0x00000001U)
#define GPIOB_GPIOPCTL_PCM0_T2CCP0   ((uint32_t)0x00000007U)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM1_MASK   ((uint32_t)0x000000F0U)
#define GPIOB_GPIOPCTL_R_PCM1_BIT    (4U)
#define GPIOB_GPIOPCTL_R_PCM1_GPIO   ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_R_PCM1_U1Tx   ((uint32_t)0x00000010U)
#define GPIOB_GPIOPCTL_R_PCM1_T2CCP1 ((uint32_t)0x00000070U)

#define GPIOB_GPIOPCTL_PCM1_MASK     ((uint32_t)0x0000000FU)
#define GPIOB_GPIOPCTL_PCM1_GPIO     ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_PCM1_U1Tx     ((uint32_t)0x00000001U)
#define GPIOB_GPIOPCTL_PCM1_T2CCP1   ((uint32_t)0x00000007U)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM2_MASK    ((uint32_t)0x00000F00U)
#define GPIOB_GPIOPCTL_R_PCM2_BIT     (8U)
#define GPIOB_GPIOPCTL_R_PCM2_GPIO    ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_R_PCM2_I2C0SCL ((uint32_t)0x00000300U)
#define GPIOB_GPIOPCTL_R_PCM2_T3CCP0  ((uint32_t)0x00000700U)

#define GPIOB_GPIOPCTL_PCM2_MASK      ((uint32_t)0x0000000FU)
#define GPIOB_GPIOPCTL_PCM2_GPIO      ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_PCM2_I2C0SCL   ((uint32_t)0x00000003U)
#define GPIOB_GPIOPCTL_PCM2_T3CCP0    ((uint32_t)0x00000007U)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM3_MASK    ((uint32_t)0x0000F000U)
#define GPIOB_GPIOPCTL_R_PCM3_BIT     (12U)
#define GPIOB_GPIOPCTL_R_PCM3_GPIO    ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_R_PCM3_I2C0SDA ((uint32_t)0x00003000U)
#define GPIOB_GPIOPCTL_R_PCM3_T3CCP1  ((uint32_t)0x00007000U)

#define GPIOB_GPIOPCTL_PCM3_MASK      ((uint32_t)0x0000000FU)
#define GPIOB_GPIOPCTL_PCM3_GPIO      ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_PCM3_I2C0SDA   ((uint32_t)0x00000003U)
#define GPIOB_GPIOPCTL_PCM3_T3CCP1    ((uint32_t)0x00000007U)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM4_MASK    ((uint32_t)0x000F0000U)
#define GPIOB_GPIOPCTL_R_PCM4_BIT     (16U)
#define GPIOB_GPIOPCTL_R_PCM4_GPIO    ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_R_PCM4_SSI2Clk ((uint32_t)0x00020000U)
#define GPIOB_GPIOPCTL_R_PCM4_M0PWM2  ((uint32_t)0x00040000U)
#define GPIOB_GPIOPCTL_R_PCM4_T1CCP0  ((uint32_t)0x00070000U)
#define GPIOB_GPIOPCTL_R_PCM4_CAN0Rx  ((uint32_t)0x00080000U)

#define GPIOB_GPIOPCTL_PCM4_MASK      ((uint32_t)0x0000000FU)
#define GPIOB_GPIOPCTL_PCM4_GPIO      ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_PCM4_SSSI2Clk  ((uint32_t)0x00000002U)
#define GPIOB_GPIOPCTL_PCM4_M0PWM2    ((uint32_t)0x00000004U)
#define GPIOB_GPIOPCTL_PCM4_T1CCP0    ((uint32_t)0x00000007U)
#define GPIOB_GPIOPCTL_PCM4_CAN0Rx    ((uint32_t)0x00000008U)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM5_MASK    ((uint32_t)0x00F00000U)
#define GPIOB_GPIOPCTL_R_PCM5_BIT     (20U)
#define GPIOB_GPIOPCTL_R_PCM5_GPIO    ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_R_PCM5_SSI2Fss ((uint32_t)0x00200000U)
#define GPIOB_GPIOPCTL_R_PCM5_M0PWM3  ((uint32_t)0x00400000U)
#define GPIOB_GPIOPCTL_R_PCM5_T1CCP1  ((uint32_t)0x00700000U)
#define GPIOB_GPIOPCTL_R_PCM5_CAN0Tx  ((uint32_t)0x00800000U)

#define GPIOB_GPIOPCTL_PCM5_MASK      ((uint32_t)0x0000000FU)
#define GPIOB_GPIOPCTL_PCM5_GPIO      ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_PCM5_SSI2Fss   ((uint32_t)0x00000002U)
#define GPIOB_GPIOPCTL_PCM5_M0PWM3    ((uint32_t)0x00000004U)
#define GPIOB_GPIOPCTL_PCM5_T1CCP1    ((uint32_t)0x00000007U)
#define GPIOB_GPIOPCTL_PCM5_CAN0Tx    ((uint32_t)0x00000008U)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM6_MASK    ((uint32_t)0x0F000000U)
#define GPIOB_GPIOPCTL_R_PCM6_BIT     (24U)
#define GPIOB_GPIOPCTL_R_PCM6_GPIO    ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_R_PCM6_SSI2Rx  ((uint32_t)0x02000000U)
#define GPIOB_GPIOPCTL_R_PCM6_M0PWM0  ((uint32_t)0x04000000U)
#define GPIOB_GPIOPCTL_R_PCM6_T0CCP0  ((uint32_t)0x07000000U)

#define GPIOB_GPIOPCTL_PCM6_MASK      ((uint32_t)0x0000000FU)
#define GPIOB_GPIOPCTL_PCM6_GPIO      ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_PCM6_SSI2Rx    ((uint32_t)0x00000002U)
#define GPIOB_GPIOPCTL_PCM6_M0PWM0    ((uint32_t)0x00000004U)
#define GPIOB_GPIOPCTL_PCM6_T0CCP0    ((uint32_t)0x00000007U)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM7_MASK    ((uint32_t)0xF0000000U)
#define GPIOB_GPIOPCTL_R_PCM7_BIT     (28U)
#define GPIOB_GPIOPCTL_R_PCM7_GPIO    ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_R_PCM7_SSI2Tx  ((uint32_t)0x20000000U)
#define GPIOB_GPIOPCTL_R_PCM7_M0PWM1  ((uint32_t)0x40000000U)
#define GPIOB_GPIOPCTL_R_PCM7_T0CCP1  ((uint32_t)0x70000000U)

#define GPIOB_GPIOPCTL_PCM7_MASK      ((uint32_t)0x0000000FU)
#define GPIOB_GPIOPCTL_PCM7_GPIO      ((uint32_t)0x00000000U)
#define GPIOB_GPIOPCTL_PCM7_SSI2Tx    ((uint32_t)0x00000002U)
#define GPIOB_GPIOPCTL_PCM7_M0PWM1    ((uint32_t)0x00000004U)
#define GPIOB_GPIOPCTL_PCM7_T0CCP1    ((uint32_t)0x00000007U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEB_H_ */
