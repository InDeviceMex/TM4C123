/**
 *
 * @file SSI_InterruptRoutine.c
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
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRoutine/SSI_InterruptRoutine.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Enum.h>

void (*SSI__pvIRQVectorHandler[(uint32_t) SSI_enMODULE_MAX]) (void)=
{
    &SSI0__vIRQVectorHandler,&SSI1__vIRQVectorHandler,&SSI2__vIRQVectorHandler,&SSI3__vIRQVectorHandler,
};
