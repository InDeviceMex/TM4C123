/**
 *
 * @file FLASH_InterruptRegisterIRQVector.h
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_FLASH_INTERRUPTREGISTERIRQVECTOR_H_
#define XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_FLASH_INTERRUPTREGISTERIRQVECTOR_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH__vRegisterIRQVectorHandler, ".ramcode")

void FLASH__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void));

#elif defined (__GNUC__ )

void FLASH__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void))__attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_FLASH_INTERRUPTREGISTERIRQVECTOR_H_ */
