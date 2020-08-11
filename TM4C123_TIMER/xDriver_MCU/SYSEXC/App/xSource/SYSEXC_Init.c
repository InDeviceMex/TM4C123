/**
 *
 * @file SYSEXC_Init.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */


#include <stdint.h>
#include <xDriver_MCU/SYSEXC/App/xHeader/SYSEXC_Init.h>
#include <xDriver_MCU/SYSEXC/Driver/SYSEXC_Driver.h>

void SYSEXC__vInit(SYSEXC_nINT enInterrupt,SYSEXC_nPRIORITY enPriority)
{
    SYSEXC__vRegisterIRQVectorHandler(&SYSEXC__vIRQVectorHandler);

    SYSEXC__vDisInterruptSource(SYSEXC_enINT_ALL);
    SYSEXC__vEnInterruptSource(enInterrupt);
    SYSEXC__vEnInterruptVector(enPriority);
}
