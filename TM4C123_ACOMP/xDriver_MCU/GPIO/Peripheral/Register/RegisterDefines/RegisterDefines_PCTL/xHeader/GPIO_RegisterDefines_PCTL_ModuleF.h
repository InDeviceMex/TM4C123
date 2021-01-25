/**
 *
 * @file GPIO_RegisterDefines_PCTL_ModuleF.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEF_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEF_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
 ************************************ 22 GPIOPCTL Module F *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIOF_GPIOPCTL_R_PCM0_MASK    ((uint32_t)0x0000000FU)
#define GPIOF_GPIOPCTL_R_PCM0_BIT     (0U)
#define GPIOF_GPIOPCTL_R_PCM0_GPIO    ((uint32_t)0x00000000U)
#define GPIOF_GPIOPCTL_R_PCM0_U1RTS   ((uint32_t)0x00000001U)
#define GPIOF_GPIOPCTL_R_PCM0_SSI1Rx  ((uint32_t)0x00000002U)
#define GPIOF_GPIOPCTL_R_PCM0_CAN0Rx  ((uint32_t)0x00000003U)
#define GPIOF_GPIOPCTL_R_PCM0_M1PWM4  ((uint32_t)0x00000005U)
#define GPIOF_GPIOPCTL_R_PCM0_PhA0    ((uint32_t)0x00000006U)
#define GPIOF_GPIOPCTL_R_PCM0_T0CCP0  ((uint32_t)0x00000007U)
#define GPIOF_GPIOPCTL_R_PCM0_NMI     ((uint32_t)0x00000008U)
#define GPIOF_GPIOPCTL_R_PCM0_C0o     ((uint32_t)0x00000009U)

#define GPIOF_GPIOPCTL_PCM0_MASK     ((uint32_t)0x0000000FU)
#define GPIOF_GPIOPCTL_PCM0_GPIO     ((uint32_t)0x00000000U)
#define GPIOF_GPIOPCTL_PCM0_U1RTS    ((uint32_t)0x00000001U)
#define GPIOF_GPIOPCTL_PCM0_SSI1Rx   ((uint32_t)0x00000002U)
#define GPIOF_GPIOPCTL_PCM0_CAN0Rx   ((uint32_t)0x00000003U)
#define GPIOF_GPIOPCTL_PCM0_M1PWM4   ((uint32_t)0x00000005U)
#define GPIOF_GPIOPCTL_PCM0_PhA0     ((uint32_t)0x00000006U)
#define GPIOF_GPIOPCTL_PCM0_T0CCP0   ((uint32_t)0x00000007U)
#define GPIOF_GPIOPCTL_PCM0_NMI      ((uint32_t)0x00000008U)
#define GPIOF_GPIOPCTL_PCM0_C0o      ((uint32_t)0x00000009U)
/*----------*/

/*----------*/
#define GPIOF_GPIOPCTL_R_PCM1_MASK    ((uint32_t)0x000000F0U)
#define GPIOF_GPIOPCTL_R_PCM1_BIT     (4U)
#define GPIOF_GPIOPCTL_R_PCM1_GPIO    ((uint32_t)0x00000000U)
#define GPIOF_GPIOPCTL_R_PCM1_U1CTS   ((uint32_t)0x00000010U)
#define GPIOF_GPIOPCTL_R_PCM1_SSI1Tx  ((uint32_t)0x00000020U)
#define GPIOF_GPIOPCTL_R_PCM1_M1PWM5  ((uint32_t)0x00000050U)
#define GPIOF_GPIOPCTL_R_PCM1_PhB0    ((uint32_t)0x00000060U)
#define GPIOF_GPIOPCTL_R_PCM1_T0CCP1  ((uint32_t)0x00000070U)
#define GPIOF_GPIOPCTL_R_PCM1_C1o     ((uint32_t)0x00000090U)
#define GPIOF_GPIOPCTL_R_PCM1_TRD1    ((uint32_t)0x000000E0U)

#define GPIOF_GPIOPCTL_PCM1_MASK     ((uint32_t)0x0000000FU)
#define GPIOF_GPIOPCTL_PCM1_GPIO     ((uint32_t)0x00000000U)
#define GPIOF_GPIOPCTL_PCM1_U1CTS    ((uint32_t)0x00000001U)
#define GPIOF_GPIOPCTL_PCM1_SSI1Tx   ((uint32_t)0x00000002U)
#define GPIOF_GPIOPCTL_PCM1_M1PWM5   ((uint32_t)0x00000005U)
#define GPIOF_GPIOPCTL_PCM1_PhB0     ((uint32_t)0x00000006U)
#define GPIOF_GPIOPCTL_PCM1_T0CCP1   ((uint32_t)0x00000007U)
#define GPIOF_GPIOPCTL_PCM1_C1o      ((uint32_t)0x00000009U)
#define GPIOF_GPIOPCTL_PCM1_TRD1     ((uint32_t)0x0000000EU)
/*----------*/

/*----------*/
#define GPIOF_GPIOPCTL_R_PCM2_MASK     ((uint32_t)0x00000F00U)
#define GPIOF_GPIOPCTL_R_PCM2_BIT      (8U)
#define GPIOF_GPIOPCTL_R_PCM2_GPIO     ((uint32_t)0x00000000U)
#define GPIOF_GPIOPCTL_R_PCM2_SSI1Clk  ((uint32_t)0x00000200U)
#define GPIOF_GPIOPCTL_R_PCM2_M0FAULT0 ((uint32_t)0x00000400U)
#define GPIOF_GPIOPCTL_R_PCM2_M1PWM6   ((uint32_t)0x00000500U)
#define GPIOF_GPIOPCTL_R_PCM2_T1CCP0   ((uint32_t)0x00000700U)
#define GPIOF_GPIOPCTL_R_PCM2_TRD0     ((uint32_t)0x00000E00U)

#define GPIOF_GPIOPCTL_PCM2_MASK     ((uint32_t)0x0000000FU)
#define GPIOF_GPIOPCTL_PCM2_GPIO     ((uint32_t)0x00000000U)
#define GPIOF_GPIOPCTL_PCM2_SSI1Clk  ((uint32_t)0x00000002U)
#define GPIOF_GPIOPCTL_PCM2_M0FAULT0 ((uint32_t)0x00000004U)
#define GPIOF_GPIOPCTL_PCM2_M1PWM6   ((uint32_t)0x00000005U)
#define GPIOF_GPIOPCTL_PCM2_T1CCP0   ((uint32_t)0x00000007U)
#define GPIOF_GPIOPCTL_PCM2_TRD0     ((uint32_t)0x0000000EU)
/*----------*/

/*----------*/
#define GPIOF_GPIOPCTL_R_PCM3_MASK     ((uint32_t)0x0000F000U)
#define GPIOF_GPIOPCTL_R_PCM3_BIT      (12U)
#define GPIOF_GPIOPCTL_R_PCM3_GPIO     ((uint32_t)0x00000000U)
#define GPIOF_GPIOPCTL_R_PCM3_SSI1Fss  ((uint32_t)0x00002000U)
#define GPIOF_GPIOPCTL_R_PCM3_CAN0Tx   ((uint32_t)0x00003000U)
#define GPIOF_GPIOPCTL_R_PCM3_M1PWM7   ((uint32_t)0x00005000U)
#define GPIOF_GPIOPCTL_R_PCM3_T1CCP1   ((uint32_t)0x00007000U)
#define GPIOF_GPIOPCTL_R_PCM3_TRCLK    ((uint32_t)0x0000E000U)

#define GPIOF_GPIOPCTL_PCM3_MASK     ((uint32_t)0x0000000FU)
#define GPIOF_GPIOPCTL_PCM3_GPIO     ((uint32_t)0x00000000U)
#define GPIOF_GPIOPCTL_PCM3_SSI1Fss  ((uint32_t)0x00000002U)
#define GPIOF_GPIOPCTL_PCM3_CAN0Tx   ((uint32_t)0x00000003U)
#define GPIOF_GPIOPCTL_PCM3_M1PWM7   ((uint32_t)0x00000005U)
#define GPIOF_GPIOPCTL_PCM3_T1CCP1   ((uint32_t)0x00000007U)
#define GPIOF_GPIOPCTL_PCM3_TRCLK    ((uint32_t)0x0000000EU)
/*----------*/

/*----------*/
#define GPIOF_GPIOPCTL_R_PCM4_MASK     ((uint32_t)0x000F0000U)
#define GPIOF_GPIOPCTL_R_PCM4_BIT      (16U)
#define GPIOF_GPIOPCTL_R_PCM4_GPIO     ((uint32_t)0x00000000U)
#define GPIOF_GPIOPCTL_R_PCM4_M1FAULT0 ((uint32_t)0x00050000U)
#define GPIOF_GPIOPCTL_R_PCM4_IDX0     ((uint32_t)0x00060000U)
#define GPIOF_GPIOPCTL_R_PCM4_T2CCP0   ((uint32_t)0x00070000U)
#define GPIOF_GPIOPCTL_R_PCM4_USB0EPEN ((uint32_t)0x00080000U)

#define GPIOF_GPIOPCTL_PCM4_MASK      ((uint32_t)0x0000000FU)
#define GPIOF_GPIOPCTL_PCM4_GPIO      ((uint32_t)0x00000000U)
#define GPIOF_GPIOPCTL_PCM4_M1FAULT0  ((uint32_t)0x00000005U)
#define GPIOF_GPIOPCTL_PCM4_IDX0      ((uint32_t)0x00000006U)
#define GPIOF_GPIOPCTL_PCM4_T2CCP0    ((uint32_t)0x00000007U)
#define GPIOF_GPIOPCTL_PCM4_USB0EPEN  ((uint32_t)0x00000008U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEF_H_ */
