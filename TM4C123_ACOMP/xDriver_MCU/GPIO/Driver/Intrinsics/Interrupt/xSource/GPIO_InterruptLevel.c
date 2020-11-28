/**
 *
 * @file GPIO_InterruptLevel.c
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

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptLevel.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptSense.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetIntLevel(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nLEVEL enLevel)
{
    GPIO_nBUS enBus = GPIO_enBUS_APB;
    uint32_t u32Reg = 0;
    GPIO_TypeDef *gpio = 0;
    if(enPort > GPIO_enPORT_MAX)
    {
        enPort = GPIO_enPORT_MAX;
    }
    enPin &= GPIO_enPIN_ALL;
    GPIO__vSetReady(enPort);
    enBus = GPIO__enGetBus(enPort);
    GPIO__vSetIntSense(enPort, enPin, GPIO_enSENSE_LEVEL);
    gpio = GPIO_BLOCK[enBus][(uint32_t) enPort];
    u32Reg = gpio->GPIOIEV;
    if(GPIO_enLEVEL_HIGH == enLevel)
    {
        u32Reg |= enPin;
    }
    else
    {
        u32Reg &= ~(uint32_t) enPin;
    }
    gpio->GPIOIEV = u32Reg;
}

GPIO_nLEVEL GPIO__enGetIntLevel(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nLEVEL enLevel = GPIO_enLEVEL_UNDEF;
    GPIO_nREADY enReady = GPIO_enNOREADY;
    GPIO_nBUS enBus = GPIO_enBUS_APB;
    GPIO_nSENSE enSense = GPIO_enSENSE_UNDEF;
    uint32_t u32Reg = 0;
    GPIO_TypeDef *gpio = 0;
    if(enPort > GPIO_enPORT_MAX)
    {
        enPort = GPIO_enPORT_MAX;
    }
    enPin &= GPIO_enPIN_ALL;
    enReady = GPIO__enIsReady(enPort);
    enBus = GPIO__enGetBus(enPort);
    enSense = GPIO__enGetIntSense(enPort, enPin);
    if((GPIO_enREADY == enReady) && (GPIO_enSENSE_LEVEL == enSense))
    {
        gpio = GPIO_BLOCK[enBus][(uint32_t) enPort];
        u32Reg = gpio->GPIOIEV;
        u32Reg &= enPin;
        if((uint32_t) GPIO_enLEVEL_LOW == u32Reg)
        {
            enLevel = GPIO_enLEVEL_LOW;
        }
        else
        {
            enLevel = GPIO_enLEVEL_HIGH;
        }
    }
    return enLevel;
}

