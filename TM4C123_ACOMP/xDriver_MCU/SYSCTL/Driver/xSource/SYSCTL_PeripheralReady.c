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

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralReady.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nPERIPHERAL_READY SYSCTL__enIsPeripheralReady(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = ((uint32_t)enPeripheral>>8U)& 0x1FU;
    uint32_t u32NoPeripheral= ((uint32_t)enPeripheral)& 0x1FU;
    uint32_t u32Reg=0;
    SYSCTL_nPERIPHERAL_READY enReturn = SYSCTL_enNOREADY;

    u32Reg= SYSCTL->PR[u32NoRegister];
    u32Reg>>=u32NoPeripheral;
    enReturn=(SYSCTL_nPERIPHERAL_READY)(u32Reg&1U);

    return enReturn;

}


