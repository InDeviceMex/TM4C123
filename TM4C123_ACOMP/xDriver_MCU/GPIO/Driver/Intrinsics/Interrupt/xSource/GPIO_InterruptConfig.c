/**
 *
 * @file GPIO_InterruptConfig.c
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
 * @verbatim 30 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptConfig.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptEdge.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptLevel.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptSense.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptSource.h>

void GPIO__vEnInterruptSourceConfig(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nINT_CONFIG enIntConfig)
{
    uint32_t u32Sense = 0UL;
    uint32_t u32Event = 0UL;

    u32Sense = (uint32_t) enIntConfig;
    u32Sense >>= 8UL;
    u32Sense &= 1UL;

    u32Event = (uint32_t) enIntConfig;
    u32Event &= 0x3UL;

    if((uint32_t) GPIO_enSENSE_EDGE == u32Sense)
    {
        GPIO__vSetIntEdge(enPort, enPin, (GPIO_nEDGE) u32Event);
    }
    else
    {
        GPIO__vSetIntLevel(enPort, enPin, (GPIO_nLEVEL) u32Event);
    }
    GPIO__vEnInterruptSource(enPort, enPin);
}
