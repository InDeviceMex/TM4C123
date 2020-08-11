/**
 *
 * @file FLASH_InterruptSource.h
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
#ifndef XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_INTERRUPT_XHEADER_FLASH_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_INTERRUPT_XHEADER_FLASH_INTERRUPTSOURCE_H_

#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

void FLASH__vEnInterruptSource(FLASH_nINT enInterrupt);
void FLASH__vDisInterruptSource(FLASH_nINT enInterrupt);
void FLASH__vClearInterruptSource(FLASH_nINT enInterrupt);
FLASH_nINT_STATUS FLASH__enStatusInterruptSource(FLASH_nINT enInterrupt);


#endif /* XDRIVER_MCU_FLASH_DRIVER_INTRINSICS_INTERRUPT_XHEADER_FLASH_INTERRUPTSOURCE_H_ */
