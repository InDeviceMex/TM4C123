/**
 *
 * @file WDT_InterruptRoutine.h
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
 * @verbatim 22 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPTROUTINE_WDT_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPTROUTINE_WDT_INTERRUPTROUTINE_H_

#include <xDriver_MCU/WDT/Header/Driver/Intrinsics/Interrupt/InterruptRoutine/WDT_InterruptRoutine_Modules.h>
#include <xDriver_MCU/WDT/Header/Peripheral/WDT_Enum.h>

void WDT__vISR(void);
void WDT_NMI__vISR_Dummy(void);
void WDT_NMI__vISR(void);

extern void (*WDT__ISR[(uint32_t)WDT_enINT_TYPE_NMI+1u]) (void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPTROUTINE_WDT_INTERRUPTROUTINE_H_ */
