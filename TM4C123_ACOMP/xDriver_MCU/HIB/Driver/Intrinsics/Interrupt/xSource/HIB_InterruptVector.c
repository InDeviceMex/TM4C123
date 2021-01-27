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
    uint32_t u32Priority = (uint32_t) enPriority;
    u32Priority &= (uint32_t) HIB_enPRI_MIN;
    NVIC__enSetEnableIRQ( enVector, (NVIC_nPRIORITY) u32Priority);
}

void HIB__vDisInterruptVector(void)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_HIB;
    NVIC__enClearEnableIRQ( enVector);
}
