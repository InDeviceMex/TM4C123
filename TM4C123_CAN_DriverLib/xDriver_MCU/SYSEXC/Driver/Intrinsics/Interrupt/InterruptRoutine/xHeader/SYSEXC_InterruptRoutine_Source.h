/**
 *
 * @file SYSEXC_InterruptRoutine_Source.h
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

#ifndef XDRIVER_MCU_SYSEXC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_SYSEXC_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_SYSEXC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_SYSEXC_INTERRUPTROUTINE_SOURCE_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/SYSEXC/Peripheral/xHeader/SYSEXC_Enum.h>

extern void (*SYSEXC__vIRQSourceHandler[(uint32_t) SYSEXC_enINTERRUPT_MAX]) (void);

#endif /* XDRIVER_MCU_SYSEXC_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_SYSEXC_INTERRUPTROUTINE_SOURCE_H_ */
