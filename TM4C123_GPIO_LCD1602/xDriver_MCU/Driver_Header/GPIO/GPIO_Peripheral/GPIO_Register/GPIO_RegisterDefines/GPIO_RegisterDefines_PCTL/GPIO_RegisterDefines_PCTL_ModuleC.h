/**
 *
 * @file GPIO_RegisterDefines_PCTL_ModuleC.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEC_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEC_H_

/******************************************************************************************
************************************ 22 GPIOPCTL Module C *********************************************
******************************************************************************************/
/*----------*/
#define GPIOC_GPIOPCTL_R_PCM0_MASK   ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_R_PCM0_BIT    (0u)
#define GPIOC_GPIOPCTL_R_PCM0_GPIO   ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM0_TCK    ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_R_PCM0_T4CCP0 ((uint32_t)0x00000007u)

#define GPIOC_GPIOPCTL_PCM0_MASK     ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM0_GPIO     ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM0_TCK      ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM0_T4CCP0   ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOC_GPIOPCTL_R_PCM1_MASK   ((uint32_t)0x000000F0u)
#define GPIOC_GPIOPCTL_R_PCM1_BIT    (4u)
#define GPIOC_GPIOPCTL_R_PCM1_GPIO   ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM1_TMS    ((uint32_t)0x00000010u)
#define GPIOC_GPIOPCTL_R_PCM1_T4CCP1 ((uint32_t)0x00000070u)

#define GPIOC_GPIOPCTL_PCM1_MASK     ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM1_GPIO     ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM1_TMS      ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM1_T4CCP1   ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOC_GPIOPCTL_R_PCM2_MASK    ((uint32_t)0x00000F00u)
#define GPIOC_GPIOPCTL_R_PCM2_BIT     (8u)
#define GPIOC_GPIOPCTL_R_PCM2_GPIO    ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM2_TDI     ((uint32_t)0x00000100u)
#define GPIOC_GPIOPCTL_R_PCM2_T5CCP0  ((uint32_t)0x00000700u)

#define GPIOC_GPIOPCTL_PCM2_MASK      ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM2_GPIO      ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM2_TDI       ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM2_T5CCP0    ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOC_GPIOPCTL_R_PCM3_MASK    ((uint32_t)0x0000F000u)
#define GPIOC_GPIOPCTL_R_PCM3_BIT     (12u)
#define GPIOC_GPIOPCTL_R_PCM3_GPIO    ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM3_TDO     ((uint32_t)0x00001000u)
#define GPIOC_GPIOPCTL_R_PCM3_T5CCP1  ((uint32_t)0x00007000u)

#define GPIOC_GPIOPCTL_PCM3_MASK      ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM3_GPIO      ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM3_TDO       ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM3_T5CCP1    ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOC_GPIOPCTL_R_PCM4_MASK    ((uint32_t)0x000F0000u)
#define GPIOC_GPIOPCTL_R_PCM4_BIT     (16u)
#define GPIOC_GPIOPCTL_R_PCM4_GPIO    ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM4_U4Rx    ((uint32_t)0x00010000u)
#define GPIOC_GPIOPCTL_R_PCM4_U1Rx    ((uint32_t)0x00020000u)
#define GPIOC_GPIOPCTL_R_PCM4_M0PWM6  ((uint32_t)0x00040000u)
#define GPIOC_GPIOPCTL_R_PCM4_IDX1    ((uint32_t)0x00060000u)
#define GPIOC_GPIOPCTL_R_PCM4_WT0CCP0 ((uint32_t)0x00070000u)
#define GPIOC_GPIOPCTL_R_PCM4_U1RTS   ((uint32_t)0x00080000u)

#define GPIOC_GPIOPCTL_PCM4_MASK      ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM4_GPIO      ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM4_U4Rx      ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM4_U1Rx      ((uint32_t)0x00000002u)
#define GPIOC_GPIOPCTL_PCM4_M0PWM6    ((uint32_t)0x00000004u)
#define GPIOC_GPIOPCTL_PCM4_IDX1      ((uint32_t)0x00000006u)
#define GPIOC_GPIOPCTL_PCM4_WT0CCP0   ((uint32_t)0x00000007u)
#define GPIOC_GPIOPCTL_PCM4_U1RTS     ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOC_GPIOPCTL_R_PCM5_MASK    ((uint32_t)0x00F00000u)
#define GPIOC_GPIOPCTL_R_PCM5_BIT     (20u)
#define GPIOC_GPIOPCTL_R_PCM5_GPIO    ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM5_U4Tx    ((uint32_t)0x00100000u)
#define GPIOC_GPIOPCTL_R_PCM5_U1Tx    ((uint32_t)0x00200000u)
#define GPIOC_GPIOPCTL_R_PCM5_M0PWM7  ((uint32_t)0x00400000u)
#define GPIOC_GPIOPCTL_R_PCM5_PhA1    ((uint32_t)0x00600000u)
#define GPIOC_GPIOPCTL_R_PCM5_WT0CCP1 ((uint32_t)0x00700000u)
#define GPIOC_GPIOPCTL_R_PCM5_U1CTS   ((uint32_t)0x00800000u)

#define GPIOC_GPIOPCTL_PCM5_MASK      ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM5_GPIO      ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM5_U4Tx      ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM5_U1Tx      ((uint32_t)0x00000002u)
#define GPIOC_GPIOPCTL_PCM5_M0PWM7    ((uint32_t)0x00000004u)
#define GPIOC_GPIOPCTL_PCM5_PhA1      ((uint32_t)0x00000006u)
#define GPIOC_GPIOPCTL_PCM5_WT0CCP1   ((uint32_t)0x00000007u)
#define GPIOC_GPIOPCTL_PCM5_U1CTS     ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOC_GPIOPCTL_R_PCM6_MASK     ((uint32_t)0x0F000000u)
#define GPIOC_GPIOPCTL_R_PCM6_BIT      (24u)
#define GPIOC_GPIOPCTL_R_PCM6_GPIO     ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM6_U3Rx     ((uint32_t)0x01000000u)
#define GPIOC_GPIOPCTL_R_PCM6_PhB1     ((uint32_t)0x06000000u)
#define GPIOC_GPIOPCTL_R_PCM6_WT1CCP0  ((uint32_t)0x07000000u)
#define GPIOC_GPIOPCTL_R_PCM6_USB0EPEN ((uint32_t)0x08000000u)

#define GPIOC_GPIOPCTL_PCM6_MASK      ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM6_GPIO      ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM6_U3Rx      ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM6_PhB1      ((uint32_t)0x00000006u)
#define GPIOC_GPIOPCTL_PCM6_WT1CCP0   ((uint32_t)0x00000007u)
#define GPIOC_GPIOPCTL_PCM6_USB0EPEN  ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOC_GPIOPCTL_R_PCM7_MASK     ((uint32_t)0xF000000u)
#define GPIOC_GPIOPCTL_R_PCM7_BIT      (28u)
#define GPIOC_GPIOPCTL_R_PCM7_GPIO     ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM7_U3Tx     ((uint32_t)0x10000000u)
#define GPIOC_GPIOPCTL_R_PCM7_WT1CCP1  ((uint32_t)0x70000000u)
#define GPIOC_GPIOPCTL_R_PCM7_USB0PFLT ((uint32_t)0x80000000u)

#define GPIOC_GPIOPCTL_PCM7_MASK      ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM7_GPIO      ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM7_U3Tx      ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM7_WT1CCP1   ((uint32_t)0x00000007u)
#define GPIOC_GPIOPCTL_PCM7_USB0PFLT  ((uint32_t)0x00000008u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_PCTL_GPIO_REGISTERDEFINES_PCTL_MODULEC_H_ */
