/**
 *
 * @file GPIO_RegisterDefines_IM.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_IM_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_IM_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
 ************************************ 6 GPIOIM *********************************************
 ******************************************************************************************/
/*----------*/
#define GPIO_GPIOIM_R_IME_MASK          ((uint32_t)0x000000FFu)
#define GPIO_GPIOIM_R_IME_BIT           (0u)
#define GPIO_GPIOIM_R_IME_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME_EN            ((uint32_t)0x000000FFu)

#define GPIO_GPIOIM_IME_MASK            ((uint32_t)0x000000FFu)
#define GPIO_GPIOIM_IME_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME_EN              ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME0_MASK         ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_R_IME0_BIT          (0u)
#define GPIO_GPIOIM_R_IME0_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME0_EN           ((uint32_t)0x00000001u)

#define GPIO_GPIOIM_IME0_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME0_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME0_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME1_MASK         ((uint32_t)0x00000002u)
#define GPIO_GPIOIM_R_IME1_BIT          (1u)
#define GPIO_GPIOIM_R_IME1_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME1_EN           ((uint32_t)0x00000002u)

#define GPIO_GPIOIM_IME1_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME1_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME1_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME2_MASK         ((uint32_t)0x00000004u)
#define GPIO_GPIOIM_R_IME2_BIT          (2u)
#define GPIO_GPIOIM_R_IME2_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME2_EN           ((uint32_t)0x00000004u)

#define GPIO_GPIOIM_IME2_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME2_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME2_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME3_MASK         ((uint32_t)0x00000008u)
#define GPIO_GPIOIM_R_IME3_BIT          (3u)
#define GPIO_GPIOIM_R_IME3_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME3_EN           ((uint32_t)0x00000008u)

#define GPIO_GPIOIM_IME3_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME3_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME3_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME4_MASK         ((uint32_t)0x00000010u)
#define GPIO_GPIOIM_R_IME4_BIT          (4u)
#define GPIO_GPIOIM_R_IME4_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME4_EN           ((uint32_t)0x00000010u)

#define GPIO_GPIOIM_IME4_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME4_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME4_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME5_MASK         ((uint32_t)0x00000020u)
#define GPIO_GPIOIM_R_IME5_BIT          (5u)
#define GPIO_GPIOIM_R_IME5_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME5_EN           ((uint32_t)0x00000020u)

#define GPIO_GPIOIM_IME5_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME5_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME5_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME6_MASK         ((uint32_t)0x00000040u)
#define GPIO_GPIOIM_R_IME6_BIT          (6u)
#define GPIO_GPIOIM_R_IME6_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME6_EN           ((uint32_t)0x00000040u)

#define GPIO_GPIOIM_IME6_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME6_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME6_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME7_MASK         ((uint32_t)0x00000080u)
#define GPIO_GPIOIM_R_IME7_BIT          (7u)
#define GPIO_GPIOIM_R_IME7_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME7_EN           ((uint32_t)0x00000080u)

#define GPIO_GPIOIM_IME7_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME7_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME7_EN             ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_IM_H_ */
