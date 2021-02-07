/**
 *
 * @file UART_BaudRate.c
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
 * @verbatim 6 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/xHeader/UART_BaudRate.h>

#include <xDriver_MCU/UART/Driver/xHeader/UART_ClockConfig.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>


void UART__vSetBaudRateIntegerPart(UART_nMODULE enModule, uint32_t u32Integer)
{
    UART__vWriteRegister(enModule, UART_UARTIBRD_OFFSET, u32Integer, UART_UARTIBRD_DIVINT_MASK, UART_UARTIBRD_R_DIVINT_BIT);
}

uint32_t UART__u32GetBaudRateIntegerPart(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_UARTIBRD_OFFSET, &u32Reg, UART_UARTIBRD_DIVINT_MASK, UART_UARTIBRD_R_DIVINT_BIT);
    return u32Reg;
}

void UART__vSetBaudRateFractionalPart(UART_nMODULE enModule, uint32_t u32Fractional)
{
    UART__vWriteRegister(enModule, UART_UARTFBRD_OFFSET, u32Fractional, UART_UARTFBRD_DIVFRAC_MASK, UART_UARTFBRD_R_DIVFRAC_BIT);
}

uint32_t UART__u32GetBaudRateFractionalPart(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_UARTFBRD_OFFSET, &u32Reg, UART_UARTFBRD_DIVFRAC_MASK, UART_UARTFBRD_R_DIVFRAC_BIT);
    return u32Reg;
}

UART_nSTATUS UART__enSetBaudRate(UART_nMODULE enModule, uint32_t u32BaudRateArg)
{
    UART_nSTATUS enStatus = UART_enSTATUS_OK;
    UART_nCLOCK enUartClock = UART_enCLOCK_UNDEF;
    float32_t fBaudRateDivisor = 0.0f;
    float32_t fBaudRateFractional = 0.0f;
    uint32_t u32BaudRateFractional = 0UL;
    uint32_t u32BaudRateFractional2 = 0UL;
    uint32_t u32BaudRateInteger = 0UL;
    uint32_t u32BaudRateInteger2 = 0UL;
    UART_nMODE enUartMode = UART_enMODE_UNDEF;
    UART_nHIGH_SPEED enHSEValue = UART_enHIGH_SPEED_EN;
    uint32_t u32CurrentClock = 16000000UL;

    enUartClock = UART__enGetClockConfig(enModule);
    if(UART_enCLOCK_SYSCLK == enUartClock)
    {
        u32CurrentClock = SYSCTL__u32GetClock();
    }

    fBaudRateDivisor = (float32_t) u32CurrentClock;
    fBaudRateDivisor /= (float32_t) u32BaudRateArg;
    fBaudRateDivisor /= 8.0f;
    /*Set HSE to 8 */
    /*get uart mode*/
    if((65535.0f < fBaudRateDivisor) || (UART_enMODE_SMART_CARD == enUartMode))
    {
        fBaudRateDivisor /= 2.0f; /*HSE feature*/
        /*Set HSE to 16 */
        if(65535.0f < fBaudRateDivisor)
        {
            enStatus = UART_enSTATUS_ERROR;
        }
        else
        {
            enHSEValue = UART_enHIGH_SPEED_DIS;
        }
    }

    if(UART_enSTATUS_OK == enStatus)
    {
        u32BaudRateInteger = (uint32_t) fBaudRateDivisor;

        fBaudRateFractional = fBaudRateDivisor;
        fBaudRateFractional -= (float32_t) u32BaudRateInteger;
        fBaudRateFractional *= 64.0f;
        fBaudRateFractional += 0.5f;

        u32BaudRateFractional = (uint32_t) fBaudRateFractional;
        if(UART_enHIGH_SPEED_EN == enHSEValue)
        {
            fBaudRateDivisor /= 2.0f;
            u32BaudRateInteger2 = (uint32_t) fBaudRateDivisor;

            fBaudRateFractional = fBaudRateDivisor;
            fBaudRateFractional -= (float32_t) u32BaudRateInteger2;
            fBaudRateFractional *= 64.0f;
            fBaudRateFractional += 0.5f;

            u32BaudRateFractional2 = (uint32_t) fBaudRateFractional;

            if(u32BaudRateFractional2 < u32BaudRateFractional)
            {
                enHSEValue = UART_enHIGH_SPEED_DIS;
                /*Set HSE to 16*/
                u32BaudRateFractional = u32BaudRateFractional2;
                u32BaudRateInteger = u32BaudRateInteger2;
            }
        }
        /*Set HSE*/
        UART__vSetBaudRateIntegerPart(enModule, u32BaudRateInteger);
        UART__vSetBaudRateFractionalPart(enModule, u32BaudRateFractional);
    }
    return enStatus;
}

uint32_t UART__u32GetBaudRate(UART_nMODULE enModule)
{
    UART_nCLOCK enUartClock = UART_enCLOCK_UNDEF;
    UART_nHIGH_SPEED enHSEValue = UART_enHIGH_SPEED_UNDEF;
    uint32_t u32BaudRate = 0UL;
    float32_t fBaudRate = 0.0f;
    float32_t fBaudRateDivisor = 0.0f;
    float32_t fBaudRateFractional = 0.0f;
    uint32_t u32BaudRateFractional = 0UL;
    uint32_t u32BaudRateInteger = 0UL;
    uint32_t u32HSEDivider= 8UL;
    uint32_t u32CurrentClock = 16000000UL;

    /*enHSEValue = UART__enGetHighSpeed(enModule);*/
    if(UART_enHIGH_SPEED_UNDEF != enHSEValue)
    {
        if(UART_enHIGH_SPEED_DIS == enHSEValue)
        {
            u32HSEDivider = 16UL;
        }

        enUartClock = UART__enGetClockConfig(enModule);
        if(UART_enCLOCK_SYSCLK == enUartClock)
        {
            u32CurrentClock = SYSCTL__u32GetClock();
        }

        u32BaudRateInteger = UART__u32GetBaudRateIntegerPart(enModule);
        fBaudRateDivisor = (float32_t) u32BaudRateInteger;
        u32BaudRateFractional = UART__u32GetBaudRateFractionalPart(enModule);
        fBaudRateFractional = (float32_t) u32BaudRateFractional;
        fBaudRateFractional /= 64.0f;

        fBaudRateDivisor += fBaudRateFractional;
        fBaudRateDivisor *= (float32_t) u32HSEDivider;
        fBaudRate = (float32_t) u32CurrentClock;
        fBaudRate /= fBaudRateDivisor;

        u32BaudRate = (uint32_t) fBaudRate;
    }
    return u32BaudRate;
}

