/**
 *
 * @file SSI_InterruptRoutine_Source.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Source.h>

void SSI_vIRQSourceHandler_Dummy(void);

void (*SSI__vIRQSourceHandler[(uint32_t) SSI_enMODULE_MAX][(uint32_t) SSI_enINTERRUPT_MAX]) (void) =
{
    {
         &SSI_vIRQSourceHandler_Dummy,&SSI_vIRQSourceHandler_Dummy,&SSI_vIRQSourceHandler_Dummy,&SSI_vIRQSourceHandler_Dummy,
    },
    {
         &SSI_vIRQSourceHandler_Dummy,&SSI_vIRQSourceHandler_Dummy,&SSI_vIRQSourceHandler_Dummy,&SSI_vIRQSourceHandler_Dummy,
    },
    {
         &SSI_vIRQSourceHandler_Dummy,&SSI_vIRQSourceHandler_Dummy,&SSI_vIRQSourceHandler_Dummy,&SSI_vIRQSourceHandler_Dummy,
    },
    {
         &SSI_vIRQSourceHandler_Dummy,&SSI_vIRQSourceHandler_Dummy,&SSI_vIRQSourceHandler_Dummy,&SSI_vIRQSourceHandler_Dummy,
    },
};

void SSI_vIRQSourceHandler_Dummy(void)
{
    while(1UL){}
}


