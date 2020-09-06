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
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Core/SCB/SCB.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/GPIO_InterruptRoutine.h>

const SCB_nVECISR SCB_enVECISR_GPIO[(uint32_t)GPIO_enPORT_MAX+ 1u]={SCB_enVECISR_GPIOA,SCB_enVECISR_GPIOB,SCB_enVECISR_GPIOC,SCB_enVECISR_GPIOD,
                               SCB_enVECISR_GPIOE,SCB_enVECISR_GPIOF};

void GPIO__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),GPIO_nPORT enPort)
{
    SCB_nVECISR enVector=SCB_enVECISR_GPIOA;
    uint32_t u32IrqVectorHandler=0;
    if(0u != (uint32_t)pfIrqVectorHandler)
    {
        if(enPort>GPIO_enPORT_MAX)
        {
            enPort=GPIO_enPORT_MAX;
        }
        enVector=SCB_enVECISR_GPIO[enPort];
        u32IrqVectorHandler=((uint32_t)pfIrqVectorHandler|(uint32_t)1u);
        GPIO__pvIRQVectorHandler[enPort]=(void (*) (void))u32IrqVectorHandler;
        SCB__vRegisterIRQVectorHandler(GPIO__pvIRQVectorHandler[enPort],enVector);
    }
}


void GPIO__vRegisterAll_IRQVectorHandler(void)
{
    GPIO__vRegisterIRQVectorHandler(&GPIOA__vIRQVectorHandler,GPIO_enPORT_A);
    GPIO__vRegisterIRQVectorHandler(&GPIOB__vIRQVectorHandler,GPIO_enPORT_B);
    GPIO__vRegisterIRQVectorHandler(&GPIOC__vIRQVectorHandler,GPIO_enPORT_C);
    GPIO__vRegisterIRQVectorHandler(&GPIOD__vIRQVectorHandler,GPIO_enPORT_D);
    GPIO__vRegisterIRQVectorHandler(&GPIOE__vIRQVectorHandler,GPIO_enPORT_E);
    GPIO__vRegisterIRQVectorHandler(&GPIOF__vIRQVectorHandler,GPIO_enPORT_F);
}

