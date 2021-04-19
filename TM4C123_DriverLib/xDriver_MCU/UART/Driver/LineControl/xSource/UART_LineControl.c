/**
 *
 * @file UART_LineControl.c
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
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/UART/Driver/LineControl/UART_LineControl.h>


void UART__vSetLineControl(UART_nMODULE enModule, UART_nLENGTH enLengthDataArg, UART_nFIFO enFifoEnable, UART_nSTOP enStopBitsArg, UART_nPARITY enParityState, UART_nPARITY_TYPE enParityTypeArg, UART_nPARITY_STICK enParityStickArg)
{
    UART__vSetDataLength(enModule, enLengthDataArg);
    UART__vSetFifoEnable(enModule, enFifoEnable);
    UART__vSetStopBits(enModule, enStopBitsArg);
    UART__vSetParityEnable(enModule, enParityState);
    UART__vSetParityType(enModule, enParityTypeArg);
    UART__vSetParityStick(enModule, enParityStickArg);
}

void UART__vSetLineControlStruct(UART_nMODULE enModule, const UART_LINE_CONTROL_TypeDef sLineControl)
{
    UART__vSetDataLength(enModule, sLineControl.enLength);
    UART__vSetFifoEnable(enModule, sLineControl.enFifo);
    UART__vSetStopBits(enModule, sLineControl.enStop);
    UART__vSetParityEnable(enModule, sLineControl.enParity);
    UART__vSetParityType(enModule, sLineControl.enParityType);
    UART__vSetParityStick(enModule, sLineControl.enParityStick);
}

void UART__vSetLineControlStructPointer(UART_nMODULE enModule, const UART_LINE_CONTROL_TypeDef* psLineControl)
{
    if((uint32_t) 0UL != (uint32_t) psLineControl)
    {
        UART__vSetDataLength(enModule, psLineControl->enLength);
        UART__vSetFifoEnable(enModule, psLineControl->enFifo);
        UART__vSetStopBits(enModule, psLineControl->enStop);
        UART__vSetParityEnable(enModule, psLineControl->enParity);
        UART__vSetParityType(enModule, psLineControl->enParityType);
        UART__vSetParityStick(enModule, psLineControl->enParityStick);
    }
}

UART_nSTATUS UART__enSetBaudRateAndLineControl(UART_nMODULE enModule, UART_nLENGTH enLengthDataArg, UART_nFIFO enFifoEnable, UART_nSTOP enStopBitsArg, UART_nPARITY enParityState, UART_nPARITY_TYPE enParityTypeArg, UART_nPARITY_STICK enParityStickArg, uint32_t u32BaudRateArg)
{
    UART_nSTATUS enStatus = UART_enSTATUS_ERROR;
    enStatus = UART__enSetBaudRate(enModule, u32BaudRateArg);
    if(UART_enSTATUS_OK == enStatus)
    {
        UART__vSetLineControl(enModule, enLengthDataArg, enFifoEnable, enStopBitsArg, enParityState, enParityTypeArg, enParityStickArg);
    }
    return enStatus;
}

UART_nSTATUS UART__enSetBaudRateAndLineControlStruct(UART_nMODULE enModule, const UART_LINE_CONTROL_TypeDef sLineControl, uint32_t u32BaudRateArg)
{
    UART_nSTATUS enStatus = UART_enSTATUS_ERROR;
    enStatus = UART__enSetBaudRate(enModule, u32BaudRateArg);
    if(UART_enSTATUS_OK == enStatus)
    {
        UART__vSetLineControlStruct(enModule, sLineControl);
    }
    return enStatus;
}

UART_nSTATUS UART__enSetBaudRateAndLineControlStructPointer(UART_nMODULE enModule, const UART_LINE_CONTROL_TypeDef* psLineControl, uint32_t u32BaudRateArg)
{
    UART_nSTATUS enStatus = UART_enSTATUS_ERROR;
    enStatus = UART__enSetBaudRate(enModule, u32BaudRateArg);
    if(UART_enSTATUS_OK == enStatus)
    {
        UART__vSetLineControlStructPointer(enModule, psLineControl);
    }
    return enStatus;
}
