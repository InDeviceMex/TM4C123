/**
 *
 * @file WDT_InterruptVector.c
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
 * @verbatim 23 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Dependencies.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/xHeader/WDT_InterruptVector.h>

void WDT__vEnInterruptVector(WDT_nPRIORITY enWDTPriority)
{
    NVIC__vSetEnableIRQ(NVIC_enSTIR_WDT01, (NVIC_nPRIORITY) enWDTPriority);
}

void WDT__vDisInterruptVector(void)
{
    NVIC__vClearEnableIRQ(NVIC_enSTIR_WDT01);
}
