/**
 *
 * @file GPIO_Data_APB.c
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
 * @verbatim 3 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */


#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Data_APB.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Intrinsics/GPIO_Primitives/GPIO_Primitives.h>

inline void GPIO_APB__vSetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data)
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
    if(GPIO_enAPB==enBus)
    {
        gpio=GPIO_APB_BLOCK[(uint32_t)enPort];
        gpio->GPIODATA_MASK[enPin]=u32Data;
    }
}

inline uint32_t GPIO_APB__u32GetData(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nREADY enReady= GPIO_enNOREADY;
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Reg=0xFFFFFFFF;
    GPIO_TypeDef* gpio=0;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    enReady = GPIO__enIsReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    if(GPIO_enREADY == enReady)
    {
        if(GPIO_enAPB ==enBus)
        {
            gpio= GPIO_APB_BLOCK[enPort];
            u32Reg=gpio->GPIODATA_MASK[enPin];
        }
    }
    return u32Reg;
}

inline void GPIO_APB__vSetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data)
{
    GPIO_APB_BLOCK[(uint32_t)enPort]->GPIODATA_MASK[enPin]=u32Data;
}
inline uint32_t GPIO_APB__u32GetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    uint32_t u32Reg=0;
    u32Reg=GPIO_APB_BLOCK[(uint32_t)enPort]->GPIODATA_MASK[enPin];
    return u32Reg;
}

