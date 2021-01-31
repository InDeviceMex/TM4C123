/**
 *
 * @file GPIO_InterruptSense.c
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptSense.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_Generic.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vSetIntSense(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nSENSE enSense)
{
    GPIO__vSetGeneric( enPort, GPIO_GPIOIS_OFFSET, enPin, (uint32_t) enSense);
}

GPIO_nSENSE GPIO__enGetIntSense(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nSENSE enFeature = GPIO_enSENSE_UNDEF;
    enFeature = (GPIO_nSENSE) GPIO__u32GetGeneric( enPort, GPIO_GPIOIS_OFFSET, enPin);
    return enFeature;
}
