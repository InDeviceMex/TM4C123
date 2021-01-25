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
#define GPIOD_GPIOPCTL_R_PCM0_MASK    ((uint32_t)0x0000000FU)
#define GPIOD_GPIOPCTL_R_PCM0_BIT     (0U)
#define GPIOD_GPIOPCTL_R_PCM0_GPIO    ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_R_PCM0_SSI3Clk ((uint32_t)0x00000001U)
#define GPIOD_GPIOPCTL_R_PCM0_SSI1Clk ((uint32_t)0x00000002U)
#define GPIOD_GPIOPCTL_R_PCM0_I2C3SCL ((uint32_t)0x00000003U)
#define GPIOD_GPIOPCTL_R_PCM0_M0PWM6  ((uint32_t)0x00000004U)
#define GPIOD_GPIOPCTL_R_PCM0_M1PWM0  ((uint32_t)0x00000005U)
#define GPIOD_GPIOPCTL_R_PCM0_WT2CCP0 ((uint32_t)0x00000007U)

#define GPIOD_GPIOPCTL_PCM0_MASK     ((uint32_t)0x0000000FU)
#define GPIOD_GPIOPCTL_PCM0_GPIO     ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_PCM0_SSI3Clk  ((uint32_t)0x00000001U)
#define GPIOD_GPIOPCTL_PCM0_SSI1Clk  ((uint32_t)0x00000002U)
#define GPIOD_GPIOPCTL_PCM0_I2C3SCL  ((uint32_t)0x00000003U)
#define GPIOD_GPIOPCTL_PCM0_M0PWM6   ((uint32_t)0x00000004U)
#define GPIOD_GPIOPCTL_PCM0_M1PWM0   ((uint32_t)0x00000005U)
#define GPIOD_GPIOPCTL_PCM0_WT2CCP0  ((uint32_t)0x00000007U)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM1_MASK    ((uint32_t)0x000000F0U)
#define GPIOD_GPIOPCTL_R_PCM1_BIT     (4U)
#define GPIOD_GPIOPCTL_R_PCM1_GPIO    ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_R_PCM1_SSI3Fss ((uint32_t)0x00000010U)
#define GPIOD_GPIOPCTL_R_PCM1_SSI1Fss ((uint32_t)0x00000020U)
#define GPIOD_GPIOPCTL_R_PCM1_I2C3SDA ((uint32_t)0x00000030U)
#define GPIOD_GPIOPCTL_R_PCM1_M0PWM7  ((uint32_t)0x00000040U)
#define GPIOD_GPIOPCTL_R_PCM1_M1PWM1  ((uint32_t)0x00000050U)
#define GPIOD_GPIOPCTL_R_PCM1_WT2CCP1 ((uint32_t)0x00000070U)

#define GPIOD_GPIOPCTL_PCM1_MASK     ((uint32_t)0x0000000FU)
#define GPIOD_GPIOPCTL_PCM1_GPIO     ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_PCM1_SSI3Fss  ((uint32_t)0x00000001U)
#define GPIOD_GPIOPCTL_PCM1_SSI1Fss  ((uint32_t)0x00000002U)
#define GPIOD_GPIOPCTL_PCM1_I2C3SDA  ((uint32_t)0x00000003U)
#define GPIOD_GPIOPCTL_PCM1_M0PWM7   ((uint32_t)0x00000004U)
#define GPIOD_GPIOPCTL_PCM1_M1PWM1   ((uint32_t)0x00000005U)
#define GPIOD_GPIOPCTL_PCM1_WT2CCP1  ((uint32_t)0x00000007U)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM2_MASK     ((uint32_t)0x00000F00U)
#define GPIOD_GPIOPCTL_R_PCM2_BIT      (8U)
#define GPIOD_GPIOPCTL_R_PCM2_GPIO     ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_R_PCM2_SSI3Rx   ((uint32_t)0x00000100U)
#define GPIOD_GPIOPCTL_R_PCM2_SSI1Rx   ((uint32_t)0x00000200U)
#define GPIOD_GPIOPCTL_R_PCM2_M0FAULT0 ((uint32_t)0x00000400U)
#define GPIOD_GPIOPCTL_R_PCM2_WT3CCP0  ((uint32_t)0x00000700U)
#define GPIOD_GPIOPCTL_R_PCM2_USB0EPEN ((uint32_t)0x00000800U)

#define GPIOD_GPIOPCTL_PCM2_MASK     ((uint32_t)0x0000000FU)
#define GPIOD_GPIOPCTL_PCM2_GPIO     ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_PCM2_SSI3Rx   ((uint32_t)0x00000001U)
#define GPIOD_GPIOPCTL_PCM2_SSI1Rx   ((uint32_t)0x00000002U)
#define GPIOD_GPIOPCTL_PCM2_M0FAULT0 ((uint32_t)0x00000004U)
#define GPIOD_GPIOPCTL_PCM2_WT3CCP0  ((uint32_t)0x00000007U)
#define GPIOD_GPIOPCTL_PCM2_USB0EPEN ((uint32_t)0x00000008U)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM3_MASK     ((uint32_t)0x0000F000U)
#define GPIOD_GPIOPCTL_R_PCM3_BIT      (12U)
#define GPIOD_GPIOPCTL_R_PCM3_GPIO     ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_R_PCM3_SSI3Tx   ((uint32_t)0x00001000U)
#define GPIOD_GPIOPCTL_R_PCM3_SSI1Tx   ((uint32_t)0x00002000U)
#define GPIOD_GPIOPCTL_R_PCM3_IDX0     ((uint32_t)0x00006000U)
#define GPIOD_GPIOPCTL_R_PCM3_WT3CCP1  ((uint32_t)0x00007000U)
#define GPIOD_GPIOPCTL_R_PCM3_USB0PFLT ((uint32_t)0x00008000U)

#define GPIOD_GPIOPCTL_PCM3_MASK     ((uint32_t)0x0000000FU)
#define GPIOD_GPIOPCTL_PCM3_GPIO     ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_PCM3_SSI3Tx   ((uint32_t)0x00000001U)
#define GPIOD_GPIOPCTL_PCM3_SSI1Tx   ((uint32_t)0x00000002U)
#define GPIOD_GPIOPCTL_PCM3_IDX0     ((uint32_t)0x00000006U)
#define GPIOD_GPIOPCTL_PCM3_WT3CCP1  ((uint32_t)0x00000007U)
#define GPIOD_GPIOPCTL_PCM3_USB0PFLT ((uint32_t)0x00000008U)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM4_MASK    ((uint32_t)0x000F0000U)
#define GPIOD_GPIOPCTL_R_PCM4_BIT     (16U)
#define GPIOD_GPIOPCTL_R_PCM4_GPIO    ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_R_PCM4_U6Rx    ((uint32_t)0x00010000U)
#define GPIOD_GPIOPCTL_R_PCM4_WT4CCP0 ((uint32_t)0x00070000U)

#define GPIOD_GPIOPCTL_PCM4_MASK      ((uint32_t)0x0000000FU)
#define GPIOD_GPIOPCTL_PCM4_GPIO      ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_PCM4_U6Rx      ((uint32_t)0x00000001U)
#define GPIOD_GPIOPCTL_PCM4_WT4CCP0   ((uint32_t)0x00000007U)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM5_MASK    ((uint32_t)0x00F00000U)
#define GPIOD_GPIOPCTL_R_PCM5_BIT     (20U)
#define GPIOD_GPIOPCTL_R_PCM5_GPIO    ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_R_PCM5_U6Tx    ((uint32_t)0x00100000U)
#define GPIOD_GPIOPCTL_R_PCM5_WT4CCP1 ((uint32_t)0x00700000U)

#define GPIOD_GPIOPCTL_PCM5_MASK      ((uint32_t)0x0000000FU)
#define GPIOD_GPIOPCTL_PCM5_GPIO      ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_PCM5_U6Tx      ((uint32_t)0x00000001U)
#define GPIOD_GPIOPCTL_PCM5_WT4CCP1   ((uint32_t)0x00000007U)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM6_MASK     ((uint32_t)0x0F000000U)
#define GPIOD_GPIOPCTL_R_PCM6_BIT      (24U)
#define GPIOD_GPIOPCTL_R_PCM6_GPIO     ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_R_PCM6_U2Rx     ((uint32_t)0x01000000U)
#define GPIOD_GPIOPCTL_R_PCM6_M0FAULT0 ((uint32_t)0x04000000U)
#define GPIOD_GPIOPCTL_R_PCM6_PhA0     ((uint32_t)0x06000000U)
#define GPIOD_GPIOPCTL_R_PCM6_WT5CCP0  ((uint32_t)0x07000000U)

#define GPIOD_GPIOPCTL_PCM6_MASK      ((uint32_t)0x0000000FU)
#define GPIOD_GPIOPCTL_PCM6_GPIO      ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_PCM6_U2Rx      ((uint32_t)0x00000001U)
#define GPIOD_GPIOPCTL_PCM6_M0FAULT0  ((uint32_t)0x00000004U)
#define GPIOD_GPIOPCTL_PCM6_PhA0      ((uint32_t)0x00000006U)
#define GPIOD_GPIOPCTL_PCM6_WT5CCP0   ((uint32_t)0x00000007U)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM7_MASK     ((uint32_t)0xF000000U)
#define GPIOD_GPIOPCTL_R_PCM7_BIT      (28U)
#define GPIOD_GPIOPCTL_R_PCM7_GPIO     ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_R_PCM7_U2Tx     ((uint32_t)0x10000000U)
#define GPIOD_GPIOPCTL_R_PCM7_PhB0     ((uint32_t)0x60000000U)
#define GPIOD_GPIOPCTL_R_PCM7_WT5CCP1  ((uint32_t)0x70000000U)
#define GPIOD_GPIOPCTL_R_PCM7_NMI      ((uint32_t)0x80000000U)

#define GPIOD_GPIOPCTL_PCM7_MASK      ((uint32_t)0x0000000FU)
#define GPIOD_GPIOPCTL_PCM7_GPIO      ((uint32_t)0x00000000U)
#define GPIOD_GPIOPCTL_PCM7_U2Tx      ((uint32_t)0x00000001U)
#define GPIOD_GPIOPCTL_PCM7_PhB0      ((uint32_t)0x00000006U)
#define GPIOD_GPIOPCTL_PCM7_WT5CCP1   ((uint32_t)0x00000007U)
#define GPIOD_GPIOPCTL_PCM7_NMI       ((uint32_t)0x00000008U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULED_H_ */
