/**
 *
 * @file HIB_InterruptRoutine_Source.c
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
#include <xDriver_MCU/HIB/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/HIB_InterruptRoutine_Source.h>

static void HIB_vIRQSourceHandler_Dummy(void);

void (*HIB__vIRQSourceHandler[(uint32_t)HIB_enINTERRUPT_MAX+1U]) (void)=
{&HIB_vIRQSourceHandler_Dummy,
 &HIB_vIRQSourceHandler_Dummy,
 &HIB_vIRQSourceHandler_Dummy,
 &HIB_vIRQSourceHandler_Dummy,};

static void HIB_vIRQSourceHandler_Dummy(void)
{
    while(1U)
    {

    }
}


