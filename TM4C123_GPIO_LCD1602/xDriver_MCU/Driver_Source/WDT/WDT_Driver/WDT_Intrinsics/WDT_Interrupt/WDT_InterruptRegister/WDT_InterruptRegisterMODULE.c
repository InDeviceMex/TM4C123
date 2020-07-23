/**
 *
 * @file WDT_InterruptRegisterMODULE.c
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
 * @verbatim 22 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/Driver_Header/WDT/WDT_Driver/WDT_Intrinsics/WDT_Interrupt/WDT_InterruptRegister/WDT_InterruptRegisterMODULE.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT_Driver/WDT_Intrinsics/WDT_Interrupt/WDT_InterruptRoutine/WDT_InterruptRoutine.h>

void WDT__vRegisterMODULEISR(void (*Isr) (void))
{
    uint32_t u32Isr=0u;
    if(0u != (uint32_t)Isr)
    {
        u32Isr=((uint32_t)Isr|(uint32_t)1u);
        WDT__ISR=(void (*) (void))u32Isr;
        SCB__vRegisterISR(WDT__ISR,SCB_enVECISR_WDT01);
    }
}




