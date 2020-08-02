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

#include <GPIO/GPIO_Driver/GPIO_Intrinsics/GPIO_Interrupt/GPIO_InterruptRegister/GPIO_InterruptRegisterISRVector.h>
#include <stdint.h>
#include <xDriver_MCU/Core/SCB/Header/SCB.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Intrinsics/GPIO_Interrupt/GPIO_InterruptRoutine/GPIO_InterruptRoutine.h>

const SCB_nVECISR SCB_VECTOR_GPIO[6]={SCB_enVECISR_GPIOA,SCB_enVECISR_GPIOB,SCB_enVECISR_GPIOC,SCB_enVECISR_GPIOD,
                               SCB_enVECISR_GPIOE,SCB_enVECISR_GPIOF};
void GPIO__vRegisterISRVector(void (*Isr) (void),GPIO_nPORT enPort)
{
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
        GPIO__pvISRHandler[enPort]=(void (*) (void))u32Isr;
        SCB__vRegisterISR(GPIO__pvISRHandler[enPort],enVector);
    }
}


void GPIO__vRegisterAll_ISRVector(void)
{
    GPIO__vRegisterISRVector(&GPIOA__vISRHandler,GPIO_enPORTA);
    GPIO__vRegisterISRVector(&GPIOB__vISRHandler,GPIO_enPORTB);
    GPIO__vRegisterISRVector(&GPIOC__vISRHandler,GPIO_enPORTC);
    GPIO__vRegisterISRVector(&GPIOD__vISRHandler,GPIO_enPORTD);
    GPIO__vRegisterISRVector(&GPIOE__vISRHandler,GPIO_enPORTE);
    GPIO__vRegisterISRVector(&GPIOF__vISRHandler,GPIO_enPORTF);
}

