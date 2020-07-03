/**
 *
 * @file GPIO_Data_AHB.c
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


#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Data_AHB.h>


inline void GPIO_AHB__vSetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    GPIO__vSetReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    if(GPIO_enAHB==enBus)
    {
        GPIO_AHB->AHB[(uint32_t)enPort].GPIODATA_MASK[enPin]=u32Data;
    }
}
inline uint32_t GPIO_AHB__u32GetData(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nREADY enReady= GPIO_enNOREADY;
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Reg=0xFFFFFFFF;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }
    enPin&=GPIO_enALL;
    enReady = GPIO__enIsReady(enPort);
    enBus=GPIO__enGetBus(enPort);
    if(GPIO_enREADY == enReady)
    {
        if(GPIO_enAHB ==enBus)
        {
            u32Reg=GPIO_AHB->AHB[(uint32_t)enPort].GPIODATA_MASK[enPin];
        }
    }
    return u32Reg;
}

inline void GPIO_AHB__vSetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data)
{
        GPIO_AHB->AHB[(uint32_t)enPort].GPIODATA_MASK[enPin]=u32Data;
}
inline uint32_t GPIO_AHB__u32GetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    uint32_t u32Reg=0;
    u32Reg=GPIO_AHB->AHB[(uint32_t)enPort].GPIODATA_MASK[enPin];
    return u32Reg;
}

