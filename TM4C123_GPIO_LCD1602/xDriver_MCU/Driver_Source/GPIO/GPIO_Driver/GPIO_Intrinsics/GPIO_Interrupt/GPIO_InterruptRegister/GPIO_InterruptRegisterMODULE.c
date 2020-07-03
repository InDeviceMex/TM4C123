/**
 *
 * @file GPIO_InterruptRegisterMODULE.c
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

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Intrinsics/GPIO_Interrupt/GPIO_InterruptRegister/GPIO_InterruptRegisterMODULE.h>


void GPIO__vRegisterMODULEISR(void (*Isr) (void),GPIO_nPORT enPort)
{
    SCB_nVECISR SCB_VECTOR_GPIO[6]={SCB_enVECISR_GPIOA,SCB_enVECISR_GPIOB,SCB_enVECISR_GPIOC,SCB_enVECISR_GPIOD,
                               SCB_enVECISR_GPIOE,SCB_enVECISR_GPIOF};
    SCB_nVECISR enVector=SCB_enVECISR_GPIOA;
    uint32_t u32Isr=0;
    if(0u != (uint32_t)Isr)
    {
        if(enPort>GPIO_enMAX)
        {
            enPort=GPIO_enMAX;
        }
        enVector=SCB_VECTOR_GPIO[enPort];
        u32Isr=((uint32_t)Isr|(uint32_t)1u);
        GPIO_ISR[enPort]=(void (*) (void))u32Isr;
        SCB__vRegisterISR(GPIO_ISR[enPort],enVector);
    }
}


void GPIO__vRegisterAllMODULEDefault(void)
{
    GPIO__vRegisterMODULEISR(&GPIOA__vISR,GPIO_enPORTA);
    GPIO__vRegisterMODULEISR(&GPIOB__vISR,GPIO_enPORTB);
    GPIO__vRegisterMODULEISR(&GPIOC__vISR,GPIO_enPORTC);
    GPIO__vRegisterMODULEISR(&GPIOD__vISR,GPIO_enPORTD);
    GPIO__vRegisterMODULEISR(&GPIOE__vISR,GPIO_enPORTE);
    GPIO__vRegisterMODULEISR(&GPIOF__vISR,GPIO_enPORTF);
}

