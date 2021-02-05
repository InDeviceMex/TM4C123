/**
 *
 * @file GPIO_InterruptSource.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/xHeader/GPIO_InterruptSource.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

void GPIO__vEnInterruptSource(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    enPin &= GPIO_enPIN_ALL;
    GPIO__vWriteRegister(enPort, GPIO_GPIOIM_OFFSET, (uint32_t) enPin, (uint32_t) enPin, 0UL);
}

void GPIO__vDisInterruptSource(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    enPin &= GPIO_enPIN_ALL;
    GPIO__vWriteRegister(enPort, GPIO_GPIOIM_OFFSET,  0UL, (uint32_t) enPin, 0UL);
}

void GPIO__vClearInterruptSource(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    enPin &= GPIO_enPIN_ALL;
    GPIO__vWriteRegister(enPort, GPIO_GPIOICR_OFFSET, (uint32_t) enPin, (uint32_t) enPin, 0UL);
}

GPIO_nINT_STATUS GPIO__enStatusInterruptSource(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nSTATUS enStatusRead= GPIO_enSTATUS_UNDEF;
    GPIO_nINT_STATUS enStatus = GPIO_enINT_STATUS_UNDEF;
    uint32_t u32Reg = 0UL;

    enPin &= GPIO_enPIN_ALL;

    enStatusRead = GPIO__enReadRegister(enPort, GPIO_GPIORIS_OFFSET, &u32Reg, (uint32_t) enPin, 0UL);
    if(GPIO_enSTATUS_ERROR != enStatusRead)
    {
        if(0UL != u32Reg)
        {
            enStatus = GPIO_enINT_OCCUR;
        }
        else
        {
            enStatus = GPIO_enINT_NOOCCUR;
        }
    }
    return enStatus;
}
