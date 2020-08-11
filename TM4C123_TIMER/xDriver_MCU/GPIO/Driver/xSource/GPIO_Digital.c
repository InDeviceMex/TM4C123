/**
 *
 * @file GPIO_Digital.c
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


#include <stdint.h>
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_Digital.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Lock.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vEnDigital(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nBUS enBus=GPIO_enBUS_APB;
    uint32_t u32Reg=0;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enPORT_MAX)
    {
        enPort=GPIO_enPORT_MAX;
    }
    enPin&=GPIO_enPIN_ALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    GPIO__vUnlock(enPort,enPin);
    u32Reg=gpio->GPIODEN;
    u32Reg|=enPin;
    gpio->GPIODEN=u32Reg;

}


void GPIO__vDisDigital(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nBUS enBus=GPIO_enBUS_APB;
    uint32_t u32Reg=0;
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
    u32Reg=gpio->GPIODEN;
    u32Reg&=~(uint32_t)enPin;
    GPIO_BLOCK[enBus][(uint32_t)enPort]->GPIODEN=u32Reg;
}
