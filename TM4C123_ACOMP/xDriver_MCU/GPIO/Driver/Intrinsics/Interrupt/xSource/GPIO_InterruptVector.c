/**
 *
 * @file GPIO_InterruptVector.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptVector.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Dependencies.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

static NVIC_nSTIR NVIC_enSTIR_GPIO[ (uint32_t) GPIO_enPORT_MAX] =
{ NVIC_enSTIR_GPIOA, NVIC_enSTIR_GPIOB, NVIC_enSTIR_GPIOC, NVIC_enSTIR_GPIOD, NVIC_enSTIR_GPIOE, NVIC_enSTIR_GPIOF };

void GPIO__vEnInterruptVector(GPIO_nPORT enPort, GPIO_nPRIORITY enGPIOPriority)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_GPIOA;
    enPort = (GPIO_nPORT) MCU__u32CheckPatams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);

    enVector = NVIC_enSTIR_GPIO[ (uint32_t) enPort];

    NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enGPIOPriority);
}

void GPIO__vDisInterruptVector(GPIO_nPORT enPort)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_GPIOA;
    enPort = (GPIO_nPORT) MCU__u32CheckPatams( (uint32_t) enPort, (uint32_t) GPIO_enPORT_MAX);

    enVector = NVIC_enSTIR_GPIO[ (uint32_t) enPort];
    NVIC__vClearEnableIRQ(enVector);
}
