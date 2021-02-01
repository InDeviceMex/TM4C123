/**
 *
 * @file HIB_InterruptRoutine.c
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
#include <xDriver_MCU/HIB/Driver/Intrinsics/Interrupt/InterruptRoutine/HIB_InterruptRoutine.h>

void (*HIB__pvIRQVectorHandler) (void)= { &HIB__vIRQVectorHandler};
