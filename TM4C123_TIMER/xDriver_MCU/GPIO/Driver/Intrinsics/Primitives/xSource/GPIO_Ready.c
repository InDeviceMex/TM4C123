/**
 *
 * @file GPIO_Ready.c
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
 * @verbatim 29 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/xHeader/GPIO_Ready.h>
#include <xDriver_MCU/SYSCTL/SYSCTL.h>

void GPIO__vSetReady(GPIO_nPORT enPort)
{
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enGPIOA;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPeripheral|=enPort;
    SYSCTL__vSetReady(enPeripheral);
}

void GPIO__vClearReady(GPIO_nPORT enPort)
{
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enGPIOA;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPeripheral|=enPort;
    SYSCTL__vClearReady(enPeripheral);
}
GPIO_nREADY GPIO__enIsReady(GPIO_nPORT enPort)
{
    GPIO_nREADY enReady=GPIO_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enGPIOA;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPeripheral|=enPort;
    enReady=(GPIO_nREADY)SYSCTL__enIsReady(enPeripheral);
    return enReady;
}

