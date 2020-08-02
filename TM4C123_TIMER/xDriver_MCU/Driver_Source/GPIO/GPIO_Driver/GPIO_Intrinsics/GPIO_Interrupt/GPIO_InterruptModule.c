/**
 *
 * @file GPIO_InterruptModule.c
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

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Intrinsics/GPIO_Interrupt/GPIO_InterruptModule.h>

#include <xDriver_MCU/Core/NVIC/Header/NVIC.h>


static NVIC_nSTIR NVIC_VECTOR_GPIO[6]={NVIC_enSTIR_GPIOA,NVIC_enSTIR_GPIOB,NVIC_enSTIR_GPIOC,NVIC_enSTIR_GPIOD,
                           NVIC_enSTIR_GPIOE,NVIC_enSTIR_GPIOF};


void GPIO__vEnInterruptMODULE(GPIO_nPORT enPort,GPIO_nPRIORITY enPriority)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_GPIOA;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }

    enVector=NVIC_VECTOR_GPIO[enPort];

    enPriority&=0x7u;
    NVIC__enSetEnableIRQ((NVIC_nSTIR)enVector,(NVIC_nPRIORITY)enPriority);
}

void GPIO__vDisInterruptMODULE(GPIO_nPORT enPort)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_GPIOA;
    if(enPort>GPIO_enMAX)
    {
        enPort=GPIO_enMAX;
    }

    enVector=NVIC_VECTOR_GPIO[enPort];
    NVIC__enClearEnableIRQ((NVIC_nSTIR)enVector);
}
