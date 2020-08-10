/**
 *
 * @file GPIO_InterruptSource.c
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
 * @verbatim 2 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */



#include <stdint.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptSource.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vEnInterruptSource(GPIO_nPORT enPort, GPIO_nPIN enPin)
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
    u32Reg=gpio->GPIOIM;
    u32Reg|=enPin;
    gpio->GPIOIM=u32Reg;

}

void GPIO__vDisInterruptSource(GPIO_nPORT enPort, GPIO_nPIN enPin)
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
    u32Reg=gpio->GPIOIM;
    u32Reg&=~(uint32_t)enPin;
    gpio->GPIOIM=u32Reg;
}


void GPIO__vClearInterruptSource(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
    gpio->GPIOICR=enPin;

}

GPIO_nINT_STATUS GPIO__enStatusInterruptSource(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    GPIO_nINT_STATUS enStatus= GPIO_enINT_STATUS_UNDEF;
    GPIO_nREADY enReady= GPIO_enNOREADY;
    uint32_t u32Reg=0;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    enReady = GPIO__enIsReady(enPort);
    enBus=GPIO__enGetBus(enPort);

    if((GPIO_enREADY == enReady) )
    {
        gpio=GPIO_BLOCK[enBus][(uint32_t)enPort];
        u32Reg=gpio->GPIORIS;
        u32Reg&=enPin;
        if(u32Reg!=0u)
        {
            enStatus= GPIO_enINT_OCCUR;
        }
        else
        {
            enStatus= GPIO_enINT_NOOCCUR;
        }
    }
    return enStatus;
}




