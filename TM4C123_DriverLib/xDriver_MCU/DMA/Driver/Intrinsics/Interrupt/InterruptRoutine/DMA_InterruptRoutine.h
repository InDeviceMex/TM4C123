/**
 *
 * @file DMA_InterruptRoutine.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_DRIVER_DMA_INTRINSICS_DMA_INTERRUPT_DMA_INTERRUPTROUTINE_DMA_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_DRIVER_DMA_INTRINSICS_DMA_INTERRUPT_DMA_INTERRUPTROUTINE_DMA_INTERRUPTROUTINE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Vector_Software.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Vector_Error.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Source.h>

void (*DMA__pvfGetIRQVectorHandler(DMA_nVECTOR enDmaVector))(void);
void (**DMA__pvfGetIRQVectorHandlerPointer(DMA_nVECTOR enDmaVector))(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_DRIVER_DMA_INTRINSICS_DMA_INTERRUPT_DMA_INTERRUPTROUTINE_DMA_INTERRUPTROUTINE_H_ */
