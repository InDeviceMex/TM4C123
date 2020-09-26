/**
 *
 * @file GPIO_Resistor.c
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
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_Resistor.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Lock.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetResistorMode(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_nRESMODE enMode)
{
    GPIO_nBUS enBus=GPIO_enBUS_APB;
    uint32_t u32RegPUR=0;
    uint32_t u32RegPDR=0;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enPORT_MAX)
    {
        enPort=GPIO_enPORT_MAX;
    }
    enPin&=GPIO_enPIN_ALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    GPIO__vUnlock(enPort,enPin);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    u32RegPUR=gpio->GPIOPUR;
    u32RegPDR=gpio->GPIOPDR;
    switch(enMode)
    {
    case GPIO_enRESMODE_INACTIVE:
        u32RegPUR&=~(uint32_t)enPin;
        u32RegPDR&=~(uint32_t)enPin;
        break;
    case GPIO_enRESMODE_PULLUP:
        u32RegPUR|=(uint32_t)enPin;
        u32RegPDR&=~(uint32_t)enPin;
        break;
    case GPIO_enRESMODE_PULLDOWN:
        u32RegPUR&=~(uint32_t)enPin;
        u32RegPDR|=(uint32_t)enPin;
        break;
    default:
        break;
    }
    gpio->GPIOPUR=u32RegPUR;
    gpio->GPIOPDR=u32RegPDR;
}


GPIO_nRESMODE GPIO__enGetResistorMode(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nRESMODE enRes=GPIO_enRESMODE_UNDEF;
    GPIO_nREADY enReady= GPIO_enNOREADY;
    GPIO_nBUS enBus=GPIO_enBUS_APB;
    uint32_t u32RegPU=0;
    uint32_t u32RegPD=0;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enPORT_MAX)
    {
        enPort=GPIO_enPORT_MAX;
    }
    enPin&=GPIO_enPIN_ALL;
    enReady = GPIO__enIsReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    if(GPIO_enREADY == enReady)
    {
        gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
        u32RegPU=gpio->GPIOPUR;
        u32RegPD=gpio->GPIOPDR;
        u32RegPU&=enPin;
        u32RegPD&=enPin;

        if((u32RegPU==0u)&&(u32RegPD==0u))
        {
            enRes=GPIO_enRESMODE_INACTIVE;
        }
        else if((u32RegPU!=0u))
        {
            enRes=GPIO_enRESMODE_PULLUP;
        }
        else if((u32RegPD!=0u))
        {
            enRes=GPIO_enRESMODE_PULLDOWN;
        }
        else{}
    }
    return enRes;
}

