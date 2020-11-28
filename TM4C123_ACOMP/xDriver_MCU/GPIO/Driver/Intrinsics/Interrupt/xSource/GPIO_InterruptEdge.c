/**
 *
 * @file GPIO_InterruptEdge.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptEdge.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptSense.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetIntEdge(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nEDGE enEdge)
{
    GPIO_nBUS enBus = GPIO_enBUS_APB;
    uint32_t u32RegIEV = 0;
    uint32_t u32RegIBE = 0;
    GPIO_TypeDef *gpio = 0;
    if(enPort > GPIO_enPORT_MAX)
    {
        enPort = GPIO_enPORT_MAX;
    }
    enPin &= GPIO_enPIN_ALL;
    GPIO__vSetReady(enPort);
    enBus = GPIO__enGetBus(enPort);
    GPIO__vSetIntSense(enPort, enPin, GPIO_enSENSE_EDGE);

    gpio = GPIO_BLOCK[enBus][(uint32_t) enPort];
    u32RegIEV = gpio->GPIOIEV;
    if(GPIO_enEDGE_RISING == enEdge)
    {
        u32RegIEV |= enPin;
    }
    else
    {
        u32RegIEV &= ~(uint32_t) enPin;
    }
    u32RegIBE = gpio->GPIOIBE;
    gpio->GPIOIEV = u32RegIEV;
    if(GPIO_enEDGE_BOTH == enEdge)
    {
        u32RegIBE |= enPin;
    }
    else
    {
        u32RegIBE &= ~(uint32_t) enPin;
    }
    gpio->GPIOIBE = u32RegIBE;

}

GPIO_nEDGE GPIO__enGetIntEdge(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nEDGE enEdge = GPIO_enEDGE_UNDEF;
    GPIO_nREADY enReady = GPIO_enNOREADY;
    GPIO_nBUS enBus = GPIO_enBUS_APB;
    GPIO_nSENSE enSense = GPIO_enSENSE_UNDEF;
    uint32_t u32RegIEV = 0;
    uint32_t u32RegIBE = 0;
    GPIO_TypeDef *gpio = 0;
    if(enPort > GPIO_enPORT_MAX)
    {
        enPort = GPIO_enPORT_MAX;
    }
    enPin &= GPIO_enPIN_ALL;
    enReady = GPIO__enIsReady(enPort);
    enBus = GPIO__enGetBus(enPort);
    enSense = GPIO__enGetIntSense(enPort, enPin);
    if((GPIO_enREADY == enReady) && (GPIO_enSENSE_EDGE == enSense))
    {
        gpio = GPIO_BLOCK[enBus][(uint32_t) enPort];
        u32RegIEV = gpio->GPIOIEV;
        u32RegIBE = gpio->GPIOIBE;

        u32RegIEV &= enPin;
        u32RegIBE &= enPin;
        if(0u == u32RegIBE)
        {
            if((uint32_t) GPIO_enEDGE_FALLING == u32RegIEV)
            {
                enEdge = GPIO_enEDGE_FALLING;
            }
            else
            {
                enEdge = GPIO_enEDGE_RISING;
            }
        }
        else
        {
            enEdge = GPIO_enEDGE_BOTH;
        }
    }
    return enEdge;
}

