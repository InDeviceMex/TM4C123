/**
 *
 * @file HIB_GlobalStatus.c
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
 * @verbatim 11 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/HIB/App/xHeader/HIB_GlobalStatus.h>

static HIB_nREADY HIB_enStatus = HIB_enNOREADY;

void HIB__enSetGlobalStatus(HIB_nREADY enStatus)
{
    HIB_enStatus = enStatus;
}

HIB_nREADY HIB__enGetGlobalStatus(void)
{
    return HIB_enStatus;
}
