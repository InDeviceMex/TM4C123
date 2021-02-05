/**
 *
 * @file FLASH_InterruptRoutine_Vector.h
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

#ifndef XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_FLASH_INTERRUPTROUTINE_VECTOR_H_
#define XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_FLASH_INTERRUPTROUTINE_VECTOR_H_

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH__vIRQVectorHandler, ".ramcode")

void FLASH__vIRQVectorHandler(void);

#elif defined (__GNUC__ )

void FLASH__vIRQVectorHandler(void) __attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_FLASH_INTERRUPTROUTINE_VECTOR_H_ */
