/**
 *
 * @file HIB_Ready.c
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
 * @verbatim 22 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/xHeader/HIB_Ready.h>

#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Dependencies.h>

void HIB__vSetReady(void)
{
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enHIB;
    SYSCTL__vSetReady( enPeripheral);
}

void HIB__vReset(void)
{
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enHIB;
    SYSCTL__vReset( enPeripheral);
}

void HIB__vClearReady(void)
{
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enHIB;
    SYSCTL__vClearReady( enPeripheral);
}

HIB_nREADY HIB__enIsReady(void)
{
    HIB_nREADY enReady = HIB_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enHIB;
    enReady = (HIB_nREADY) SYSCTL__enIsReady( enPeripheral);
    return enReady;
}
