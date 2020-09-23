/**
 *
 * @file DMA_InterruptRoutine_Source.h
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
 * @verbatim 23 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_DMA_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_DMA_INTERRUPTROUTINE_SOURCE_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

extern void (*DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_INTERRUPT_SOURCE_MAX+1u][(uint32_t)DMA_enCH_MODULE_MAX+1u]) (void);

#endif /* XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_DMA_INTERRUPTROUTINE_SOURCE_H_ */
