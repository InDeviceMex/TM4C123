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

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Dependencies.h>

GPIO_nBUS GPIO__enGetBus(GPIO_nPORT enPort)
{
    GPIO_nBUS enReturn = GPIO_enBUS_APB;
    enPort = (GPIO_nPORT) MCU__u32CheckPatams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);
    SYSCTL_nGPIOBUS enGPIO = (SYSCTL_nGPIOBUS) ((uint32_t) 1UL << (uint32_t) enPort);
    enReturn = (GPIO_nBUS) SYSCTL__vGetGPIOBus( enGPIO);
    return enReturn;
}
