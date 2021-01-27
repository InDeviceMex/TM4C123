/**
 *
 * @file SYSCTL_PeripheralPresent.c
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
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralPresent.h>

#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralGeneric.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nPERIPHERAL_PRESENT SYSCTL__enIsPeripheralPresent(SYSCTL_nPERIPHERAL enPeripheral)
{
    SYSCTL_nPERIPHERAL_PRESENT enReturn = SYSCTL_enNOPRESENT;
    uint32_t u32RegisterValue = 0UL;

    u32RegisterValue = SYSCTL__u32ReadPeripheral( enPeripheral, SYSCTL_PP_OFFSET);
    enReturn = (SYSCTL_nPERIPHERAL_PRESENT) u32RegisterValue;

    return enReturn;
}
