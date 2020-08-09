/**
 *
 * @file SCB_InterruptNMI.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */


#include <xDriver_MCU/Core/SCB/Driver/InterruptRoutine/xHeader/SCB_InterruptNMI.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/WDT_InterruptRoutine.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

void NMI__vIRQVectorHandler(void)
{
    WDT__vIRQSourceHandler[(uint32_t)WDT_enINT_TYPE_NMI]();
    /*use for GPIO activation*/
    while(1u){}
}
