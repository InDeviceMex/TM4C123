/**
 *
 * @file HIB_InterruptVector.c
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
#include <xDriver_MCU/HIB/Driver/Intrinsics/Interrupt/xHeader/HIB_InterruptVector.h>

#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Dependencies.h>

void HIB__vEnInterruptVector(HIB_nPRIORITY enPriority)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_HIB;
    NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enPriority);
}

void HIB__vDisInterruptVector(void)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_HIB;
    NVIC__vClearEnableIRQ(enVector);
}
