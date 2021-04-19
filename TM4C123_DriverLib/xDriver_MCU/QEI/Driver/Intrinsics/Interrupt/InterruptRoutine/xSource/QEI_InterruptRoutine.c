/**
 *
 * @file QEI_InterruptRoutine.c
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/QEI/Driver/Intrinsics/Interrupt/InterruptRoutine/QEI_InterruptRoutine.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Enum.h>

void (*QEI__pvIRQVectorHandler[(uint32_t) QEI_enMODULE_MAX]) (void)=
{
    &QEI0__vIRQVectorHandler,&QEI1__vIRQVectorHandler
};



