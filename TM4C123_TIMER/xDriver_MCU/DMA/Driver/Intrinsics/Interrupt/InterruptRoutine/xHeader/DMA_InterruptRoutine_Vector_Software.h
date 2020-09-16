/**
 *
 * @file DMA_InterruptRoutine_Vector_Software.h
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
 * @verbatim 1 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_DRIVER_DMA_INTRINSICS_DMA_INTERRUPT_DMA_INTERRUPTROUTINE_DMA_INTERRUPTROUTINE_MODULES_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_DRIVER_DMA_INTRINSICS_DMA_INTERRUPT_DMA_INTERRUPTROUTINE_DMA_INTERRUPTROUTINE_MODULES_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

extern void (*DMA__MODULE[(uint32_t)DMA_enMODULE_MAX+1u]) (void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_DRIVER_DMA_INTRINSICS_DMA_INTERRUPT_DMA_INTERRUPTROUTINE_DMA_INTERRUPTROUTINE_MODULES_H_ */
