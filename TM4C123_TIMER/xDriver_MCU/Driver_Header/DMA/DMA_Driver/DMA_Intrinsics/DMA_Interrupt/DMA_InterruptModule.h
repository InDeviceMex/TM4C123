/**
 *
 * @file DMA_InterruptModule.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_DRIVER_DMA_INTRINSICS_DMA_INTERRUPT_DMA_INTERRUPTMODULE_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_DRIVER_DMA_INTRINSICS_DMA_INTERRUPT_DMA_INTERRUPTMODULE_H_

#include <xDriver_MCU/Driver_Header/DMA/DMA_Peripheral/DMA_Enum.h>

void DMA__vEnInterruptMODULE(DMA_nPRIORITY enPriority);
void DMA__vDisInterruptMODULE(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_DRIVER_DMA_INTRINSICS_DMA_INTERRUPT_DMA_INTERRUPTMODULE_H_ */
