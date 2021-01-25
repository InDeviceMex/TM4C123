/**
 *
 * @file ACMP_InterruptRoutine_Vector.c
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
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ACMP_InterruptRoutine_Vector.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ACMP_InterruptRoutine_Vector_Module0.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ACMP_InterruptRoutine_Vector_Module1.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

void (*ACMP__pvIRQVectorHandler[(uint32_t)ACMP_enMODULE_MAX+1U]) (void)={ &ACMP0__vIRQVectorHandler,&ACMP0__vIRQVectorHandler };
