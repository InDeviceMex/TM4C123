/**
 *
 * @file GPIO_InterruptRegisterISR.c
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

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Intrinsics/GPIO_Interrupt/GPIO_InterruptRegister/GPIO_InterruptRegisterISR.h>

void GPIO__vRegisterISR(void (*Isr) (void),GPIO_nPORT enPort,GPIO_nPIN enPin)
{
    uint32_t u32Count=0;
    uint32_t u32Pin =(uint32_t) enPin;
    uint32_t u32Isr=0;
    if((uint32_t)Isr !=0u)
    {
        if(enPort>GPIO_enMAX)
        {
            enPort=GPIO_enMAX;
        }

        enPin&=GPIO_enALL;
        while((u32Pin&0x1u) ==0u)
        {
            u32Count++;
            u32Pin>>=1;
        }
        u32Isr=((uint32_t)Isr|(uint32_t)1u);
        GPIO[(uint32_t)enPort][u32Count]=(void (*) (void))u32Isr;
    }
}


