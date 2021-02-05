/**
 *
 * @file UART_InterruptSource.c
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/xHeader/UART_InterruptSource.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vEnInterruptSource(UART_nMODULE enModule, UART_nINT enIntSource)
{
    uint32_t u32Reg = 0;
    UART_TypeDef *gpio = 0;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    enIntSource &= (uint32_t) UART_enINT_ALL;
    UART__vSetReady(enModule);
    gpio = UART_BLOCK[(uint32_t) enModule];
    u32Reg = gpio->UARTIM;
    u32Reg |= enIntSource;
    gpio->UARTIM = u32Reg;

}

void UART__vDisInterruptSource(UART_nMODULE enModule, UART_nINT enIntSource)
{
    uint32_t u32Reg = 0;
    UART_TypeDef *gpio = 0;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    enIntSource &= (uint32_t) UART_enINT_ALL;
    UART__vSetReady(enModule);
    gpio = UART_BLOCK[(uint32_t) enModule];
    u32Reg = gpio->UARTIM;
    u32Reg &= ~(uint32_t) enIntSource;
    gpio->UARTIM = u32Reg;
}

void UART__vClearInterruptSource(UART_nMODULE enModule, UART_nINT enIntSource)
{
    UART_TypeDef *gpio = 0;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    enIntSource &= (uint32_t) UART_enINT_ALL;
    UART__vSetReady(enModule);
    gpio = UART_BLOCK[(uint32_t) enModule];
    gpio->UARTICR = enIntSource;

}

UART_nINT_STATUS UART__enStatusInterruptSource(UART_nMODULE enModule, UART_nINT enIntSource)
{
    UART_nINT_STATUS enStatus = UART_enINT_STATUS_UNDEF;
    UART_nREADY enReady = UART_enNOREADY;
    uint32_t u32Reg = 0;
    UART_TypeDef *gpio = 0;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    enIntSource &= (uint32_t) UART_enINT_ALL;
    enReady = UART__enIsReady(enModule);

    if((UART_enREADY == enReady))
    {
        gpio = UART_BLOCK[(uint32_t) enModule];
        u32Reg = gpio->UARTRIS;
        u32Reg &= enIntSource;
        if(u32Reg != 0U)
        {
            enStatus = UART_enINT_OCCUR;
        }
        else
        {
            enStatus = UART_enINT_NOOCCUR;
        }
    }
    return enStatus;
}


