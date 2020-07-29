/**
 *
 * @file SYSCTL_PeripheralReset.c
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


#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_Driver/SYSCTL_PeripheralReset.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_Peripheral/SYSCTL_Peripheral.h>

#define SYSCTL_vNoOperation()   {__asm(" NOP");}

void SYSCTL__vResetPeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = ((uint32_t)enPeripheral>>8u)& 0x1Fu;
    uint32_t u32NoPeripheral= ((uint32_t)enPeripheral)& 0x1Fu;
    uint32_t u32PeripheralValue=0;

    u32PeripheralValue = ((uint32_t)1u<<u32NoPeripheral);
    SYSCTL->SR[u32NoRegister]|=u32PeripheralValue;
    SYSCTL_vNoOperation();
    SYSCTL_vNoOperation();
    SYSCTL_vNoOperation();
    SYSCTL_vNoOperation();
    u32PeripheralValue = ((uint32_t)1<<u32NoPeripheral);
    SYSCTL->SR[u32NoRegister]&=~u32PeripheralValue;
    SYSCTL_vNoOperation();
    SYSCTL_vNoOperation();
    SYSCTL_vNoOperation();
    SYSCTL_vNoOperation();
}


