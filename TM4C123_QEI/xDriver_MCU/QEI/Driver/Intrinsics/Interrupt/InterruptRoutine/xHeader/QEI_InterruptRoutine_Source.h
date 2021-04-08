/**
 *
 * @file QEI_InterruptRoutine_Source.h
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_QEI_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_QEI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_QEI_INTERRUPTROUTINE_SOURCE_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Enum.h>

extern void (*QEI__vIRQSourceHandler[(uint32_t) QEI_enMODULE_MAX][(uint32_t) QEI_enINTERRUPT_MAX]) (void);

#endif /* XDRIVER_MCU_QEI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_QEI_INTERRUPTROUTINE_SOURCE_H_ */
