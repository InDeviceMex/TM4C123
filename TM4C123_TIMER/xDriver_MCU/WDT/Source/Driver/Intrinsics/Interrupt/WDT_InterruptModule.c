/**
 *
 * @file WDT_InterruptModule.c
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
#include <xDriver_MCU/Core/NVIC/Header/NVIC.h>
#include <xDriver_MCU/WDT/Header/Driver/Intrinsics/Interrupt/WDT_InterruptModule.h>

void WDT__vEnInterruptMODULE(WDT_nPRIORITY enPriority)
{
    enPriority&=0x7u;
    NVIC__enSetEnableIRQ(NVIC_enSTIR_WDT01,(NVIC_nPRIORITY)enPriority);
}

void WDT__vDisInterruptMODULE(void)
{
    NVIC__enClearEnableIRQ(NVIC_enSTIR_WDT01);
}

