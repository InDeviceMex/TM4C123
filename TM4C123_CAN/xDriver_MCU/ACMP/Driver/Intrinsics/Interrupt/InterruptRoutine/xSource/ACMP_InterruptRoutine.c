/**
 *
 * @file ACMP_InterruptRoutine.c
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
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/ACMP_InterruptRoutine.h>

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

void (*ACMP__pvIRQVectorHandler[(uint32_t) ACMP_enMODULE_MAX][(uint32_t) ACMP_enCOMP_MAX ]) (void)=
{
     {&ACMP0_Comp0__vIRQVectorHandler, &ACMP0_Comp1__vIRQVectorHandler}
};
