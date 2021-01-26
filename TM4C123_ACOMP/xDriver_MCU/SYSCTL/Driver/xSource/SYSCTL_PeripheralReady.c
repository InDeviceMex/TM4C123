/**
 *
 * @file SYSCTL_PeripheralReady.c
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralReady.h>

#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralGeneric.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nPERIPHERAL_READY SYSCTL__enIsPeripheralReady(SYSCTL_nPERIPHERAL enPeripheral)
{
    SYSCTL_nPERIPHERAL_READY enReturn = SYSCTL_enNOREADY;
    uint32_t u32RegisterValue = 0UL;

    u32RegisterValue = SYSCTL__u32ReadPeripheral(enPeripheral,SYSCTL_PR_OFFSET);
    enReturn=(SYSCTL_nPERIPHERAL_READY)(u32RegisterValue);

    return enReturn;
}


