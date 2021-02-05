/**
 *
 * @file SCB_RegisterIRQVector.h
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB__REGISTERIRQVECTOR_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB__REGISTERIRQVECTOR_H_

#include <xDriver_MCU/Core/SCB/Peripheral/xHeader/SCB_Enum.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(SCB__vRegisterIRQVectorHandler, ".ramcode")
#pragma  CODE_SECTION(SCB__vUnRegisterIRQVectorHandler, ".ramcode")

void SCB__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void), void (**pfIrqVectorHandlerExtern) (void), SCB_nVECISR enVector);
void SCB__vUnRegisterIRQVectorHandler(SCB_nVECISR enVector);

#elif defined (__GNUC__ )

void SCB__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void), void (**pfIrqVectorHandlerExtern) (void), SCB_nVECISR enVector) __attribute__((section(".ramcode")));
void SCB__vUnRegisterIRQVectorHandler(SCB_nVECISR enVector) __attribute__((section(".ramcode")));

#endif


#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB__REGISTERIRQVECTOR_H_ */
