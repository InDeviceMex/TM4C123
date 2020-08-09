/**
 *
 * @file GPIO_InterruptRegisterIRQVector.c
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

#include <GPIO/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/GPIO_InterruptRegisterIRQVector.h>
#include <stdint.h>
#include <xDriver_MCU/Core/SCB/SCB.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/GPIO_InterruptRoutine.h>

const SCB_nVECISR SCB_enVECISR_GPIO__vIRQSourceHandler[(uint32_t)GPIO_enMAX+ 1u]={SCB_enVECISR_GPIOA,SCB_enVECISR_GPIOB,SCB_enVECISR_GPIOC,SCB_enVECISR_GPIOD,
                               SCB_enVECISR_GPIOE,SCB_enVECISR_GPIOF};

void GPIO__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),GPIO_nPORT enPort)
{
    SCB_nVECISR enVector=SCB_enVECISR_GPIOA;
    uint32_t u32IrqVectorHandler=0;
    if(0u != (uint32_t)pfIrqVectorHandler)
    {
        if(enPort>GPIO_enMAX)
        {
            enPort=GPIO_enMAX;
        }
        enVector=SCB_enVECISR_GPIO__vIRQSourceHandler[enPort];
        u32IrqVectorHandler=((uint32_t)pfIrqVectorHandler|(uint32_t)1u);
        GPIO__pvIRQVectorHandler[enPort]=(void (*) (void))u32IrqVectorHandler;
        SCB__vRegisterIRQVectorHandler(GPIO__pvIRQVectorHandler[enPort],enVector);
    }
}


void GPIO__vRegisterAll_IRQVectorHandler(void)
{
    GPIO__vRegisterIRQVectorHandler(&GPIOA__vIRQVectorHandler,GPIO_enPORTA);
    GPIO__vRegisterIRQVectorHandler(&GPIOB__vIRQVectorHandler,GPIO_enPORTB);
    GPIO__vRegisterIRQVectorHandler(&GPIOC__vIRQVectorHandler,GPIO_enPORTC);
    GPIO__vRegisterIRQVectorHandler(&GPIOD__vIRQVectorHandler,GPIO_enPORTD);
    GPIO__vRegisterIRQVectorHandler(&GPIOE__vIRQVectorHandler,GPIO_enPORTE);
    GPIO__vRegisterIRQVectorHandler(&GPIOF__vIRQVectorHandler,GPIO_enPORTF);
}

