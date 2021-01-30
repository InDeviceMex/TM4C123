/**
 *
 * @file DMA_InterruptRoutine.c
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
 * @verbatim 17 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/DMA_InterruptRoutine.h>

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

void (*DMA__pvIRQVectorHandler[(uint32_t) DMA_enVECTOR_MAX]) (void)= { &DMA_SW__vIRQVectorHandler, &DMA_ERROR__vIRQVectorHandler};
