/**
 *
 * @file SYSCTL_PeripheralRunMode.c
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
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralReset.h>
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_PeripheralRunMode.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

#define SYSCTL_vNoOperation()   {__asm(" NOP");}

void SYSCTL__vEnRunModePeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = ((uint32_t)enPeripheral>>8u)& 0x1Fu;
    uint32_t u32NoPeripheral= ((uint32_t)enPeripheral)& 0x1Fu;
    uint32_t u32PeripheralValue=0;



    if(0u==(uint32_t)(SYSCTL->RCGC[u32NoRegister]&(uint32_t)((uint32_t)1u<<u32NoPeripheral)))
    {
        u32PeripheralValue = ((uint32_t)1u<<u32NoPeripheral);
        SYSCTL->RCGC[u32NoRegister]|=u32PeripheralValue;
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        while(0u==(uint32_t)(SYSCTL->PR[u32NoRegister]&(uint32_t)((uint32_t)1u<<u32NoPeripheral))){}
    }
}

void SYSCTL__vDisRunModePeripheral(SYSCTL_nPERIPHERAL enPeripheral)
{
    uint32_t u32NoRegister = ((uint32_t)enPeripheral>>8u)& 0x1Fu;
    uint32_t u32NoPeripheral= ((uint32_t)enPeripheral)& 0x1Fu;
    uint32_t u32PeripheralValue=0;


    u32PeripheralValue = ((uint32_t)1u<<u32NoPeripheral);
    if(u32PeripheralValue==(SYSCTL->RCGC[u32NoRegister]&u32PeripheralValue))
    {
        SYSCTL__vResetPeripheral(enPeripheral);
        SYSCTL->RCGC[u32NoRegister]&=~u32PeripheralValue;
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
        SYSCTL_vNoOperation();
    }
}


