/**
 *
 * @file UART_Parity.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/UART/Driver/LineControl/xHeader/UART_Parity.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetParityEnable(UART_nMODULE enModule, UART_nPARITY enParityState)
{
    UART_TypeDef *uart = 0;
    uint32_t u32ParityState = (uint32_t)enParityState;
    uint32_t u32Reg = 0UL;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    UART__vSetReady(enModule);
    u32ParityState &= UART_UARTLCRH_PEN_MASK;
    u32ParityState <<= UART_UARTLCRH_R_PEN_BIT;
    uart = UART_BLOCK[enModule];
    u32Reg = uart->UARTLCRH;
    u32Reg &= ~UART_UARTLCRH_R_PEN_MASK;
    u32Reg |= u32ParityState;
    uart->UARTLCRH  = u32Reg;
}


UART_nPARITY UART__enGetParityEnable(UART_nMODULE enModule)
{
    UART_nREADY enReady = UART_enNOREADY;
    UART_nPARITY enStatus = UART_enPARITY_UNDEF;
    uint32_t u32Reg = 0UL;
    UART_TypeDef *uart = 0;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    enReady = UART__enIsReady(enModule);
    if(UART_enREADY == enReady)
    {
            uart = UART_BLOCK[enModule];
            u32Reg = uart->UARTLCRH;
            u32Reg>>= UART_UARTLCRH_R_PEN_BIT;
            u32Reg &= UART_UARTLCRH_PEN_MASK;
            enStatus = (UART_nPARITY) u32Reg;
    }
    return enStatus;
}


void UART__vSetParityType(UART_nMODULE enModule, UART_nPARITY_TYPE enParityTypeArg)
{
    UART_TypeDef *uart = 0;
    uint32_t u32ParityTypeArg = (uint32_t)enParityTypeArg;
    uint32_t u32Reg = 0UL;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    UART__vSetReady(enModule);
    u32ParityTypeArg &= UART_UARTLCRH_EPS_MASK;
    u32ParityTypeArg <<= UART_UARTLCRH_R_EPS_BIT;
    uart = UART_BLOCK[enModule];
    u32Reg = uart->UARTLCRH;
    u32Reg &= ~UART_UARTLCRH_R_EPS_MASK;
    u32Reg |= u32ParityTypeArg;
    uart->UARTLCRH  = u32Reg;

}

UART_nPARITY_TYPE UART__enGetParityType(UART_nMODULE enModule)
{
    UART_nREADY enReady = UART_enNOREADY;
    UART_nPARITY_TYPE enStatus = UART_enPARITY_TYPE_UNDEF;
    uint32_t u32Reg = 0UL;
    UART_TypeDef *uart = 0;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    enReady = UART__enIsReady(enModule);
    if(UART_enREADY == enReady)
    {
            uart = UART_BLOCK[enModule];
            u32Reg = uart->UARTLCRH;
            u32Reg>>= UART_UARTLCRH_R_EPS_BIT;
            u32Reg &= UART_UARTLCRH_EPS_MASK;
            enStatus = (UART_nPARITY_TYPE) u32Reg;
    }
    return enStatus;
}

void UART__vSetParityStick(UART_nMODULE enModule, UART_nPARITY_STICK enParityStickArg)
{
    UART_TypeDef *uart = 0;
    uint32_t u32ParityStickArg = (uint32_t)enParityStickArg;
    uint32_t u32Reg = 0UL;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    UART__vSetReady(enModule);
    u32ParityStickArg &= UART_UARTLCRH_SPS_MASK;
    u32ParityStickArg <<= UART_UARTLCRH_R_SPS_BIT;
    uart = UART_BLOCK[enModule];
    u32Reg = uart->UARTLCRH;
    u32Reg &= ~UART_UARTLCRH_R_SPS_MASK;
    u32Reg |= u32ParityStickArg;
    uart->UARTLCRH  = u32Reg;

}

UART_nPARITY_STICK UART__enGetParityStick(UART_nMODULE enModule)
{
    UART_nREADY enReady = UART_enNOREADY;
    UART_nPARITY_STICK enStatus = UART_enPARITY_STICK_UNDEF;
    uint32_t u32Reg = 0UL;
    UART_TypeDef *uart = 0;
    if(enModule > UART_enMODULE_MAX)
    {
        enModule = UART_enMODULE_MAX;
    }
    enReady = UART__enIsReady(enModule);
    if(UART_enREADY == enReady)
    {
            uart = UART_BLOCK[enModule];
            u32Reg = uart->UARTLCRH;
            u32Reg>>= UART_UARTLCRH_R_SPS_BIT;
            u32Reg &= UART_UARTLCRH_SPS_MASK;
            enStatus = (UART_nPARITY_STICK) u32Reg;
    }
    return enStatus;
}

void UART__vSetParityConfigStruct(UART_nMODULE enModule, UART_PARITY_TypeDef sParityConfig)
{
    UART__vSetParityConfig(enModule, sParityConfig.enParity, sParityConfig.enParityType,sParityConfig.enParityStick);
}

void UART__vSetParityConfigStructPointer(UART_nMODULE enModule, UART_PARITY_TypeDef* psParityConfig)
{
    if((uint32_t)0UL != (uint32_t)psParityConfig)
    {
        UART__vSetParityConfig(enModule, psParityConfig->enParity, psParityConfig->enParityType,psParityConfig->enParityStick);
    }
}

void UART__vSetParityConfig(UART_nMODULE enModule, UART_nPARITY enParityState, UART_nPARITY_TYPE enParityTypeArg, UART_nPARITY_STICK enParityStickArg)
{
    UART__vSetParityEnable(enModule, enParityState);
    UART__vSetParityType(enModule, enParityTypeArg);
    UART__vSetParityStick(enModule, enParityStickArg);
}


