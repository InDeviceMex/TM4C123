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
#define GPIOB_GPIOPCTL_R_PCM0_MASK   ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_R_PCM0_BIT    (0u)
#define GPIOB_GPIOPCTL_R_PCM0_GPIO   ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM0_U1Rx   ((uint32_t)0x00000001u)
#define GPIOB_GPIOPCTL_R_PCM0_T2CCP0 ((uint32_t)0x00000007u)

#define GPIOB_GPIOPCTL_PCM0_MASK     ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM0_GPIO     ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM0_U1Rx     ((uint32_t)0x00000001u)
#define GPIOB_GPIOPCTL_PCM0_T2CCP0   ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM1_MASK   ((uint32_t)0x000000F0u)
#define GPIOB_GPIOPCTL_R_PCM1_BIT    (4u)
#define GPIOB_GPIOPCTL_R_PCM1_GPIO   ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM1_U1Tx   ((uint32_t)0x00000010u)
#define GPIOB_GPIOPCTL_R_PCM1_T2CCP1 ((uint32_t)0x00000070u)

#define GPIOB_GPIOPCTL_PCM1_MASK     ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM1_GPIO     ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM1_U1Tx     ((uint32_t)0x00000001u)
#define GPIOB_GPIOPCTL_PCM1_T2CCP1   ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM2_MASK    ((uint32_t)0x00000F00u)
#define GPIOB_GPIOPCTL_R_PCM2_BIT     (8u)
#define GPIOB_GPIOPCTL_R_PCM2_GPIO    ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM2_I2C0SCL ((uint32_t)0x00000300u)
#define GPIOB_GPIOPCTL_R_PCM2_T3CCP0  ((uint32_t)0x00000700u)

#define GPIOB_GPIOPCTL_PCM2_MASK      ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM2_GPIO      ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM2_I2C0SCL   ((uint32_t)0x00000003u)
#define GPIOB_GPIOPCTL_PCM2_T3CCP0    ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM3_MASK    ((uint32_t)0x0000F000u)
#define GPIOB_GPIOPCTL_R_PCM3_BIT     (12u)
#define GPIOB_GPIOPCTL_R_PCM3_GPIO    ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM3_I2C0SDA ((uint32_t)0x00003000u)
#define GPIOB_GPIOPCTL_R_PCM3_T3CCP1  ((uint32_t)0x00007000u)

#define GPIOB_GPIOPCTL_PCM3_MASK      ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM3_GPIO      ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM3_I2C0SDA   ((uint32_t)0x00000003u)
#define GPIOB_GPIOPCTL_PCM3_T3CCP1    ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM4_MASK    ((uint32_t)0x000F0000u)
#define GPIOB_GPIOPCTL_R_PCM4_BIT     (16u)
#define GPIOB_GPIOPCTL_R_PCM4_GPIO    ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM4_SSI2Clk ((uint32_t)0x00020000u)
#define GPIOB_GPIOPCTL_R_PCM4_M0PWM2  ((uint32_t)0x00040000u)
#define GPIOB_GPIOPCTL_R_PCM4_T1CCP0  ((uint32_t)0x00070000u)
#define GPIOB_GPIOPCTL_R_PCM4_CAN0Rx  ((uint32_t)0x00080000u)

#define GPIOB_GPIOPCTL_PCM4_MASK      ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM4_GPIO      ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM4_SSSI2Clk  ((uint32_t)0x00000002u)
#define GPIOB_GPIOPCTL_PCM4_M0PWM2    ((uint32_t)0x00000004u)
#define GPIOB_GPIOPCTL_PCM4_T1CCP0    ((uint32_t)0x00000007u)
#define GPIOB_GPIOPCTL_PCM4_CAN0Rx    ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM5_MASK    ((uint32_t)0x00F00000u)
#define GPIOB_GPIOPCTL_R_PCM5_BIT     (20u)
#define GPIOB_GPIOPCTL_R_PCM5_GPIO    ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM5_SSI2Fss ((uint32_t)0x00200000u)
#define GPIOB_GPIOPCTL_R_PCM5_M0PWM3  ((uint32_t)0x00400000u)
#define GPIOB_GPIOPCTL_R_PCM5_T1CCP1  ((uint32_t)0x00700000u)
#define GPIOB_GPIOPCTL_R_PCM5_CAN0Tx  ((uint32_t)0x00800000u)

#define GPIOB_GPIOPCTL_PCM5_MASK      ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM5_GPIO      ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM5_SSI2Fss   ((uint32_t)0x00000002u)
#define GPIOB_GPIOPCTL_PCM5_M0PWM3    ((uint32_t)0x00000004u)
#define GPIOB_GPIOPCTL_PCM5_T1CCP1    ((uint32_t)0x00000007u)
#define GPIOB_GPIOPCTL_PCM5_CAN0Tx    ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM6_MASK    ((uint32_t)0x0F000000u)
#define GPIOB_GPIOPCTL_R_PCM6_BIT     (24u)
#define GPIOB_GPIOPCTL_R_PCM6_GPIO    ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM6_SSI2Rx  ((uint32_t)0x02000000u)
#define GPIOB_GPIOPCTL_R_PCM6_M0PWM0  ((uint32_t)0x04000000u)
#define GPIOB_GPIOPCTL_R_PCM6_T0CCP0  ((uint32_t)0x07000000u)

#define GPIOB_GPIOPCTL_PCM6_MASK      ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM6_GPIO      ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM6_SSI2Rx    ((uint32_t)0x00000002u)
#define GPIOB_GPIOPCTL_PCM6_M0PWM0    ((uint32_t)0x00000004u)
#define GPIOB_GPIOPCTL_PCM6_T0CCP0    ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM7_MASK    ((uint32_t)0xF0000000u)
#define GPIOB_GPIOPCTL_R_PCM7_BIT     (28u)
#define GPIOB_GPIOPCTL_R_PCM7_GPIO    ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM7_SSI2Tx  ((uint32_t)0x20000000u)
#define GPIOB_GPIOPCTL_R_PCM7_M0PWM1  ((uint32_t)0x40000000u)
#define GPIOB_GPIOPCTL_R_PCM7_T0CCP1  ((uint32_t)0x70000000u)

#define GPIOB_GPIOPCTL_PCM7_MASK      ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM7_GPIO      ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM7_SSI2Tx    ((uint32_t)0x00000002u)
#define GPIOB_GPIOPCTL_PCM7_M0PWM1    ((uint32_t)0x00000004u)
#define GPIOB_GPIOPCTL_PCM7_T0CCP1    ((uint32_t)0x00000007u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEB_H_ */
