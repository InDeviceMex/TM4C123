/**
 *
 * @file UART_InterruptVector.c
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
#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Dependencies.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/xHeader/UART_InterruptVector.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

static NVIC_nSTIR UART__enGetInterruptVector(UART_nMODULE enModule);



static NVIC_nSTIR UART__enGetInterruptVector(UART_nMODULE enModule)
{
    NVIC_nSTIR NVIC_VECTOR_UART[(uint32_t)UART_enMODULE_MAX+1U]=
    {
        NVIC_enSTIR_UART0,NVIC_enSTIR_UART1,NVIC_enSTIR_UART2,NVIC_enSTIR_UART3,
        NVIC_enSTIR_UART4,NVIC_enSTIR_UART5,NVIC_enSTIR_UART6,NVIC_enSTIR_UART7
    };
    NVIC_nSTIR enVector=NVIC_enSTIR_UART0;
    uint32_t u32Module= (uint32_t) enModule;
    if((uint32_t)UART_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)UART_enMODULE_MAX;
    }
    enVector=NVIC_VECTOR_UART[u32Module];
    return enVector;
}

void UART__vEnInterruptVector(UART_nMODULE enModule, UART_nPRIORITY enUARTPriority)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_UART0;
    enVector= UART__enGetInterruptVector(enModule);
    enUARTPriority&=0x7U;
    NVIC__enSetEnableIRQ((NVIC_nSTIR)enVector,(NVIC_nPRIORITY)enUARTPriority);
}

void UART__vDisInterruptVector(UART_nMODULE enModule)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_UART0;
    enVector= UART__enGetInterruptVector(enModule);
    NVIC__enClearEnableIRQ((NVIC_nSTIR)enVector);
}


