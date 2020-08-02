/**
 *
 * @file WDT_InterruptRoutine_Modules.c
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

#include <xDriver_MCU/WDT/Header/Driver/Intrinsics/Interrupt/InterruptRoutine/WDT_InterruptRoutine_Modules.h>

static void WDT_vDUMMY(void);

void (*WDT__MODULE[(uint32_t)WDT_enMODULE_MAX+1u]) (void)={&WDT_vDUMMY,&WDT_vDUMMY};


static void WDT_vDUMMY(void)
{
    while(1u)
    {

    }
}


