/**
 *
 * @file GPIO_InterruptRegisterMODULE.h
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
 * @verbatim 2 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTREGISTER_GPIO_INTERRUPTREGISTERMODULE_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTREGISTER_GPIO_INTERRUPTREGISTERMODULE_H_

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Enum.h>

void GPIO__vRegisterMODULEISR(void (*Isr) (void),GPIO_nPORT enPort);
void GPIO__vRegisterAllMODULEDefault(void);



#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTREGISTER_GPIO_INTERRUPTREGISTERMODULE_H_ */
