/**
 *
 * @file HIB_InterruptRoutine_Source.h
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
#ifndef XDRIVER_MCU_HIB_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_HIB_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_HIB_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_HIB_INTERRUPTROUTINE_SOURCE_H_

#include <stdint.h>
#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Enum.h>

extern void (*HIB__vIRQSourceHandler[(uint32_t)HIB_enINTERRUPT_MAX+1u]) (void);


#endif /* XDRIVER_MCU_HIB_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_HIB_INTERRUPTROUTINE_SOURCE_H_ */
