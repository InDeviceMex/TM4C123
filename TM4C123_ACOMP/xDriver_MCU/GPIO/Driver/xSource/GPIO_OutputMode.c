/**
 *
 * @file GPIO_OutputMode.c
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
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_Digital.h>
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_OutputMode.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetOutputMode(GPIO_nPORT enPort, GPIO_nPIN enPin,
                          GPIO_nOUTMODE enMode)
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
    GPIO__vEnDigital(enPort, enPin);
    gpio = GPIO_BLOCK[enBus][(uint32_t) enPort];
    u32Reg = gpio->GPIOODR;
    if(GPIO_enOUTMODE_OD == enMode)
    {
        u32Reg |= enPin;
    }
    else
    {
        u32Reg &= ~(uint32_t) enPin;
    }
    gpio->GPIOODR = u32Reg;
}

GPIO_nOUTMODE GPIO__enGetOutputMode(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nOUTMODE enOutMode = GPIO_enOUTMODE_UNDEF;
    GPIO_nREADY enReady = GPIO_enNOREADY;
    GPIO_nBUS enBus = GPIO_enBUS_APB;
    uint32_t u32Reg = 0;
    GPIO_TypeDef *gpio = 0;
    if(enPort > GPIO_enPORT_MAX)
    {
        enPort = GPIO_enPORT_MAX;
    }
    enPin &= GPIO_enPIN_ALL;
    enReady = GPIO__enIsReady(enPort);
    enBus = GPIO__enGetBus(enPort);
    if(GPIO_enREADY == enReady)
    {
        gpio = GPIO_BLOCK[enBus][(uint32_t) enPort];
        u32Reg = gpio->GPIOODR;
        u32Reg &= enPin;
        if((uint32_t) GPIO_enOUTMODE_PP == u32Reg)
        {
            enOutMode = GPIO_enOUTMODE_PP;
        }
        else
        {
            enOutMode = GPIO_enOUTMODE_OD;
        }
    }
    return enOutMode;
}

