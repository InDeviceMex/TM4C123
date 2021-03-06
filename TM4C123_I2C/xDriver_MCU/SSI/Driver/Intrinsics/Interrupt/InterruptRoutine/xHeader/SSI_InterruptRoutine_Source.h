/**
 *
 * @file SSI_InterruptRoutine_Source.h
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_SSI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_SSI_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_SSI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_SSI_INTERRUPTROUTINE_SOURCE_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

extern void (*SSI__vIRQSourceHandler[(uint32_t) SSI_enMODULE_MAX][(uint32_t) SSI_enINTERRUPT_MAX]) (void);

#endif /* XDRIVER_MCU_SSI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_SSI_INTERRUPTROUTINE_SOURCE_H_ */
