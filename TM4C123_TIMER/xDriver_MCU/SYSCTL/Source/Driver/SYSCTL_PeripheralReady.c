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

#include <stdint.h>
#include <xDriver_MCU/SYSCTL/Header/Driver/SYSCTL_PeripheralReady.h>
#include <xDriver_MCU/SYSCTL/Header/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nPERIPHERAL_READY SYSCTL__enIsPeripheralReady(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = ((uint32_t)enPeripheral>>8u)& 0x1Fu;
    uint32_t u32NoPeripheral= ((uint32_t)enPeripheral)& 0x1Fu;
    uint32_t u32Reg=0;
    SYSCTL_nPERIPHERAL_READY enReturn = SYSCTL_enNOREADY;

    u32Reg= SYSCTL->PR[u32NoRegister];
    u32Reg>>=u32NoPeripheral;
    enReturn=(SYSCTL_nPERIPHERAL_READY)(u32Reg&1u);

    return enReturn;

}


