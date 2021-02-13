/**
 *
 * @file ACMP_Ready.c
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
 * @verbatim 29 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/xHeader/ACMP_Ready.h>
#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Dependencies.h>

void ACMP__vSetReady(void)
{
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enACMP;
    SYSCTL__vSetReady(enPeripheral);
}

void ACMP__vClearReady(void)
{
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enACMP;
    SYSCTL__vClearReady(enPeripheral);
}
ACMP_nREADY ACMP__enIsReady(void)
{
    ACMP_nREADY enReady = ACMP_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enACMP;
    enReady = (ACMP_nREADY)SYSCTL__enIsReady(enPeripheral);
    return enReady;
}



