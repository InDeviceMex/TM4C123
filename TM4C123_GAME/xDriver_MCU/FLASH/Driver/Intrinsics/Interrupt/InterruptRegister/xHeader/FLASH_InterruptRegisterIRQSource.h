/**
 *
 * @file FLASH_InterruptRegisterIRQSource.h
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

#ifndef XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_FLASH_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_FLASH_INTERRUPTREGISTERIRQSOURCE_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

void FLASH__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),FLASH_nINTERRUPT enInterruptParam);

#endif /* XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_FLASH_INTERRUPTREGISTERIRQSOURCE_H_ */
