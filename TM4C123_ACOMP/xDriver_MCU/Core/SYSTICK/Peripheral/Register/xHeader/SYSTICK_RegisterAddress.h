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

#include <xUtils/Standard/Standard.h>

#define SysTick_BASE            ((uint32_t)0xE000E000U)
#define SysTick_VALUEMAX        ((uint32_t)0xFFFFFFU)
#define SysTick_PIOSC4          ((uint32_t)4000000U)
#define SysTick_PIOSC           ((uint32_t)16000000U)

#define SysTick_CSR_OFFSET      ((uint32_t)0x010U)
#define SysTick_RVR_OFFSET      ((uint32_t)0x014U)
#define SysTick_CVR_OFFSET      ((uint32_t)0x018U)
#define SysTick_CR_OFFSET       ((uint32_t)0x01CU)

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERADDRESS_H_ */
