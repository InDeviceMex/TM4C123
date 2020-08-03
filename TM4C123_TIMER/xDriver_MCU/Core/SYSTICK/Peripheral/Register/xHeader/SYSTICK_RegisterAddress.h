/**
 *
 * @file SYSTICK_RegisterAddress.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERADDRESS_H_

#include <stdint.h>

#define SysTick_BASE            ((uint32_t)0xE000E000u)
#define SysTick_VALUEMAX        ((uint32_t)0xFFFFFFu)
#define SysTick_PIOSC4          ((uint32_t)4000000u)
#define SysTick_PIOSC           ((uint32_t)16000000u)

#define SysTick_CSR_OFFSET      ((uint32_t)0x010u)
#define SysTick_RVR_OFFSET      ((uint32_t)0x014u)
#define SysTick_CVR_OFFSET      ((uint32_t)0x018u)
#define SysTick_CR_OFFSET       ((uint32_t)0x01Cu)

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERADDRESS_H_ */
