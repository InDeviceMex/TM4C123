/**
 *
 * @file WDT_InterruptRoutine_Source.c
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

#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/WDT_InterruptRoutine_Source.h>

static void WDT_vIRQSourceHandler_Dummy(void);

void (*WDT__vIRQSourceHandler[ (uint32_t) WDT_enINT_TYPE_MAX + 1U ][ (uint32_t) WDT_enMODULE_MAX + 1U ]) (void)=
{{&WDT_vIRQSourceHandler_Dummy, &WDT_vIRQSourceHandler_Dummy},
 {&WDT_vIRQSourceHandler_Dummy, &WDT_vIRQSourceHandler_Dummy}};


static void WDT_vIRQSourceHandler_Dummy(void)
{
    while( 1U  )
    {

    }
}


