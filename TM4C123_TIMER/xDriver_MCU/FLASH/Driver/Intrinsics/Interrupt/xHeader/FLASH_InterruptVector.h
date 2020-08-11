/**
 *
 * @file FLASH_InterruptVector.h
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
#ifndef XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_INTERRUPT_XHEADER_FLASH_INTERRUPTVECTOR_H_
#define XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_INTERRUPT_XHEADER_FLASH_INTERRUPTVECTOR_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

void FLASH__vEnInterruptVector(FLASH_nPRIORITY enPriority);
void FLASH__vDisInterruptVector(void);

#endif /* XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_INTERRUPT_XHEADER_FLASH_INTERRUPTVECTOR_H_ */
