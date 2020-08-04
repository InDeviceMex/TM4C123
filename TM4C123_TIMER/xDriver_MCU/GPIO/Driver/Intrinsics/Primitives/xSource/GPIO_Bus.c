/**
 *
 * @file GPIO_Bus.c
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */


#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/xHeader/GPIO_Bus.h>
#include <xDriver_MCU/SYSCTL/SYSCTL.h>

GPIO_nBUS GPIO__enGetBus(GPIO_nPORT enPort)
{
    GPIO_nBUS enReturn= GPIO_enAPB;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    SYSCTL_nGPIOBUS enGPIO =(SYSCTL_nGPIOBUS)((uint32_t)1u<<(uint32_t)enPort);
    enReturn = (GPIO_nBUS)SYSCTL__vGetGPIOBus(enGPIO);
    return enReturn;
}

