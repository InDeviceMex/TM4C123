/**
 *
 * @file WDT_InterruptRegisterISR.c
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

#include <xDriver_MCU/Driver_Header/WDT/WDT_Driver/WDT_Intrinsics/WDT_Interrupt/WDT_InterruptRegister/WDT_InterruptRegisterISR.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT_Peripheral/WDT_Enum.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT_Driver/WDT_Intrinsics/WDT_Interrupt/WDT_InterruptRoutine/WDT_InterruptRoutine_Modules.h>

void WDT__vRegisterISR(void (*Isr) (void),WDT_nMODULE enModule)
{
    uint32_t u32Isr=0;
    if((uint32_t)Isr !=0u)
    {
        if(enModule>WDT_enMODULE_MAX)
        {
            enModule=WDT_enMODULE_MAX;
        }
        u32Isr=((uint32_t)Isr|(uint32_t)1u);
        WDT__MODULE[(uint32_t)enModule]=(void (*) (void))u32Isr;
    }
}


