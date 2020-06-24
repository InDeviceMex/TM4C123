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

#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_Driver/SYSCTL_PeripheralPresent.h>

SYSCTL_nPERIPHERAL_PRESENT SYSCTL__enIsPeripheralPresent(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = ((uint32_t)enPeripheral>>8u)& 0x1Fu;
    uint32_t u32NoPeripheral= ((uint32_t)enPeripheral)& 0x1Fu;
    uint32_t u32Reg=0u;
    SYSCTL_nPERIPHERAL_PRESENT enReturn = SYSCTL_enNOPRESENT;

    u32Reg= SYSCTL->PP[u32NoRegister];
    u32Reg>>=u32NoPeripheral;
    enReturn=(SYSCTL_nPERIPHERAL_PRESENT)(u32Reg&1u);

    return enReturn;

}

