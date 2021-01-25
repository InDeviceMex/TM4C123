/**
 *
 * @file ACMP_InterruptRoutine_Source.c
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
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ACMP_InterruptRoutine_Source.h>

static void ACMP_vIRQSourceHandler_Dummy(void);

void (*ACMP__vIRQSourceHandler[(uint32_t)ACMP_enMODULE_MAX +1u])(void) =
{
 &ACMP_vIRQSourceHandler_Dummy, &ACMP_vIRQSourceHandler_Dummy
};

static void ACMP_vIRQSourceHandler_Dummy(void)
{
    while(1U)
    {
    }
}



