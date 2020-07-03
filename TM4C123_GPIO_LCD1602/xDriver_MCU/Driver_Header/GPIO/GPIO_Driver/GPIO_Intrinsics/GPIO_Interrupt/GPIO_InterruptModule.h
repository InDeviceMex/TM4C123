/**
 *
 * @file GPIO_InterruptModule.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTMODULE_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTMODULE_H_

#include <xDriver_MCU/Driver_Header/NVIC/NVIC.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Peripheral.h>

void GPIO__vEnInterruptMODULE(GPIO_nPORT enPort,GPIO_nPRIORITY enPriority);
void GPIO__vDisInterruptMODULE(GPIO_nPORT enPort);





#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTMODULE_H_ */
