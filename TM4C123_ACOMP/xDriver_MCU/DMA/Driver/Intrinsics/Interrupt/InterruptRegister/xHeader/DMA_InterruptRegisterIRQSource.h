/**
 *
 * @file DMA_InterruptRegisterIRQSource.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_DMA_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_DMA_INTERRUPTREGISTERIRQSOURCE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void DMA__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void), DMA_nCH_MODULE enDMAModule, DMA_nCH_ENCODER enInterruptSourceType);

#endif /* XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_DMA_INTERRUPTREGISTERIRQSOURCE_H_ */
