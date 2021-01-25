/**
 *
 * @file WDT_InterruptRoutine_Source.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPTROUTINE_WDT_INTERRUPTROUTINE_MODULES_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPTROUTINE_WDT_INTERRUPTROUTINE_MODULES_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

extern void (*WDT__vIRQSourceHandler[(uint32_t)WDT_enINT_TYPE_MAX+1U][(uint32_t)WDT_enMODULE_MAX+1U]) (void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPTROUTINE_WDT_INTERRUPTROUTINE_MODULES_H_ */
