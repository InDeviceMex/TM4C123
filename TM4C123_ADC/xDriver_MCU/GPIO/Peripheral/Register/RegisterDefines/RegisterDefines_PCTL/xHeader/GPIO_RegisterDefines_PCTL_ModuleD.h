/**
 *
 * @file GPIO_RegisterDefines_PCTL_ModuleD.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULED_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULED_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 22 GPIOPCTL Module D *********************************************
******************************************************************************************/
/*----------*/
#define GPIOD_GPIOPCTL_R_PCM0_MASK    ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_R_PCM0_BIT     (0u)
#define GPIOD_GPIOPCTL_R_PCM0_GPIO    ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM0_SSI3Clk ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_R_PCM0_SSI1Clk ((uint32_t)0x00000002u)
#define GPIOD_GPIOPCTL_R_PCM0_I2C3SCL ((uint32_t)0x00000003u)
#define GPIOD_GPIOPCTL_R_PCM0_M0PWM6  ((uint32_t)0x00000004u)
#define GPIOD_GPIOPCTL_R_PCM0_M1PWM0  ((uint32_t)0x00000005u)
#define GPIOD_GPIOPCTL_R_PCM0_WT2CCP0 ((uint32_t)0x00000007u)

#define GPIOD_GPIOPCTL_PCM0_MASK     ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM0_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM0_SSI3Clk  ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM0_SSI1Clk  ((uint32_t)0x00000002u)
#define GPIOD_GPIOPCTL_PCM0_I2C3SCL  ((uint32_t)0x00000003u)
#define GPIOD_GPIOPCTL_PCM0_M0PWM6   ((uint32_t)0x00000004u)
#define GPIOD_GPIOPCTL_PCM0_M1PWM0   ((uint32_t)0x00000005u)
#define GPIOD_GPIOPCTL_PCM0_WT2CCP0  ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM1_MASK    ((uint32_t)0x000000F0u)
#define GPIOD_GPIOPCTL_R_PCM1_BIT     (4u)
#define GPIOD_GPIOPCTL_R_PCM1_GPIO    ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM1_SSI3Fss ((uint32_t)0x00000010u)
#define GPIOD_GPIOPCTL_R_PCM1_SSI1Fss ((uint32_t)0x00000020u)
#define GPIOD_GPIOPCTL_R_PCM1_I2C3SDA ((uint32_t)0x00000030u)
#define GPIOD_GPIOPCTL_R_PCM1_M0PWM7  ((uint32_t)0x00000040u)
#define GPIOD_GPIOPCTL_R_PCM1_M1PWM1  ((uint32_t)0x00000050u)
#define GPIOD_GPIOPCTL_R_PCM1_WT2CCP1 ((uint32_t)0x00000070u)

#define GPIOD_GPIOPCTL_PCM1_MASK     ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM1_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM1_SSI3Fss  ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM1_SSI1Fss  ((uint32_t)0x00000002u)
#define GPIOD_GPIOPCTL_PCM1_I2C3SDA  ((uint32_t)0x00000003u)
#define GPIOD_GPIOPCTL_PCM1_M0PWM7   ((uint32_t)0x00000004u)
#define GPIOD_GPIOPCTL_PCM1_M1PWM1   ((uint32_t)0x00000005u)
#define GPIOD_GPIOPCTL_PCM1_WT2CCP1  ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM2_MASK     ((uint32_t)0x00000F00u)
#define GPIOD_GPIOPCTL_R_PCM2_BIT      (8u)
#define GPIOD_GPIOPCTL_R_PCM2_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM2_SSI3Rx   ((uint32_t)0x00000100u)
#define GPIOD_GPIOPCTL_R_PCM2_SSI1Rx   ((uint32_t)0x00000200u)
#define GPIOD_GPIOPCTL_R_PCM2_M0FAULT0 ((uint32_t)0x00000400u)
#define GPIOD_GPIOPCTL_R_PCM2_WT3CCP0  ((uint32_t)0x00000700u)
#define GPIOD_GPIOPCTL_R_PCM2_USB0EPEN ((uint32_t)0x00000800u)

#define GPIOD_GPIOPCTL_PCM2_MASK     ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM2_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM2_SSI3Rx   ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM2_SSI1Rx   ((uint32_t)0x00000002u)
#define GPIOD_GPIOPCTL_PCM2_M0FAULT0 ((uint32_t)0x00000004u)
#define GPIOD_GPIOPCTL_PCM2_WT3CCP0  ((uint32_t)0x00000007u)
#define GPIOD_GPIOPCTL_PCM2_USB0EPEN ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM3_MASK     ((uint32_t)0x0000F000u)
#define GPIOD_GPIOPCTL_R_PCM3_BIT      (12u)
#define GPIOD_GPIOPCTL_R_PCM3_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM3_SSI3Tx   ((uint32_t)0x00001000u)
#define GPIOD_GPIOPCTL_R_PCM3_SSI1Tx   ((uint32_t)0x00002000u)
#define GPIOD_GPIOPCTL_R_PCM3_IDX0     ((uint32_t)0x00006000u)
#define GPIOD_GPIOPCTL_R_PCM3_WT3CCP1  ((uint32_t)0x00007000u)
#define GPIOD_GPIOPCTL_R_PCM3_USB0PFLT ((uint32_t)0x00008000u)

#define GPIOD_GPIOPCTL_PCM3_MASK     ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM3_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM3_SSI3Tx   ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM3_SSI1Tx   ((uint32_t)0x00000002u)
#define GPIOD_GPIOPCTL_PCM3_IDX0     ((uint32_t)0x00000006u)
#define GPIOD_GPIOPCTL_PCM3_WT3CCP1  ((uint32_t)0x00000007u)
#define GPIOD_GPIOPCTL_PCM3_USB0PFLT ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM4_MASK    ((uint32_t)0x000F0000u)
#define GPIOD_GPIOPCTL_R_PCM4_BIT     (16u)
#define GPIOD_GPIOPCTL_R_PCM4_GPIO    ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM4_U6Rx    ((uint32_t)0x00010000u)
#define GPIOD_GPIOPCTL_R_PCM4_WT4CCP0 ((uint32_t)0x00070000u)

#define GPIOD_GPIOPCTL_PCM4_MASK      ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM4_GPIO      ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM4_U6Rx      ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM4_WT4CCP0   ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM5_MASK    ((uint32_t)0x00F00000u)
#define GPIOD_GPIOPCTL_R_PCM5_BIT     (20u)
#define GPIOD_GPIOPCTL_R_PCM5_GPIO    ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM5_U6Tx    ((uint32_t)0x00100000u)
#define GPIOD_GPIOPCTL_R_PCM5_WT4CCP1 ((uint32_t)0x00700000u)

#define GPIOD_GPIOPCTL_PCM5_MASK      ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM5_GPIO      ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM5_U6Tx      ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM5_WT4CCP1   ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM6_MASK     ((uint32_t)0x0F000000u)
#define GPIOD_GPIOPCTL_R_PCM6_BIT      (24u)
#define GPIOD_GPIOPCTL_R_PCM6_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM6_U2Rx     ((uint32_t)0x01000000u)
#define GPIOD_GPIOPCTL_R_PCM6_M0FAULT0 ((uint32_t)0x04000000u)
#define GPIOD_GPIOPCTL_R_PCM6_PhA0     ((uint32_t)0x06000000u)
#define GPIOD_GPIOPCTL_R_PCM6_WT5CCP0  ((uint32_t)0x07000000u)

#define GPIOD_GPIOPCTL_PCM6_MASK      ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM6_GPIO      ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM6_U2Rx      ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM6_M0FAULT0  ((uint32_t)0x00000004u)
#define GPIOD_GPIOPCTL_PCM6_PhA0      ((uint32_t)0x00000006u)
#define GPIOD_GPIOPCTL_PCM6_WT5CCP0   ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM7_MASK     ((uint32_t)0xF000000u)
#define GPIOD_GPIOPCTL_R_PCM7_BIT      (28u)
#define GPIOD_GPIOPCTL_R_PCM7_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM7_U2Tx     ((uint32_t)0x10000000u)
#define GPIOD_GPIOPCTL_R_PCM7_PhB0     ((uint32_t)0x60000000u)
#define GPIOD_GPIOPCTL_R_PCM7_WT5CCP1  ((uint32_t)0x70000000u)
#define GPIOD_GPIOPCTL_R_PCM7_NMI      ((uint32_t)0x80000000u)

#define GPIOD_GPIOPCTL_PCM7_MASK      ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM7_GPIO      ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM7_U2Tx      ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM7_PhB0      ((uint32_t)0x00000006u)
#define GPIOD_GPIOPCTL_PCM7_WT5CCP1   ((uint32_t)0x00000007u)
#define GPIOD_GPIOPCTL_PCM7_NMI       ((uint32_t)0x00000008u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULED_H_ */
