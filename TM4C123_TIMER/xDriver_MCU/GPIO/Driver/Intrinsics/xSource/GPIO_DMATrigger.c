/**
 *
 * @file GPIO_DMATrigger.c
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

#include <stdint.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_DMATrigger.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vEnDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Reg=0;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    u32Reg=gpio->GPIODMACTL;
    u32Reg|=enPin;
    gpio->GPIODMACTL=u32Reg;

}

void GPIO__vDisDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Reg=0;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    u32Reg=gpio->GPIODMACTL;
    u32Reg&=~(uint32_t)enPin;
    gpio->GPIODMACTL=u32Reg;
}

