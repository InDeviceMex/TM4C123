/**
 *
 * @file GPIO_RegisterDefines_LOCK.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_LOCK_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_LOCK_H_

#include <stdint.h>

/******************************************************************************************
************************************ 19 GPIOLOCK *********************************************
******************************************************************************************/
/*----------*/
#define GPIO_GPIOLOCK_R_LOCK_MASK     ((uint32_t)0xFFFFFFFFu)
#define GPIO_GPIOLOCK_R_LOCK_BIT      (0u)
#define GPIO_GPIOLOCK_R_LOCK_KEY      ((uint32_t)0x4C4F434Bu)
#define GPIO_GPIOLOCK_R_LOCK_UNLOCK   ((uint32_t)0x00000000u)
#define GPIO_GPIOLOCK_R_LOCK_LOCK     ((uint32_t)0x00000001u)

#define GPIO_GPIOLOCK_LOCK_MASK       ((uint32_t)0xFFFFFFFFu)
#define GPIO_GPIOLOCK_LOCK_KEY        ((uint32_t)0x4C4F434Bu)
#define GPIO_GPIOLOCK_LOCK_UNLOCK     ((uint32_t)0x00000000u)
#define GPIO_GPIOLOCK_LOCK_LOCK       ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERDEFINES_GPIO_REGISTERDEFINES_LOCK_H_ */
