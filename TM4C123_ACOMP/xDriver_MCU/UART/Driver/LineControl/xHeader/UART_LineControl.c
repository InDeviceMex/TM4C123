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
#include <xDriver_MCU/UART/Driver/LineControl/UART_LineControl.h>


void UART__vSetLineControl(UART_nMODULE enModule, UART_nLENGTH enLengthData, UART_nFIFO enFifoEnable, UART_nSTOP enStopBitsArg, UART_nPARITY enParityState, UART_nPARITY_TYPE enParityTypeArg, UART_nPARITY_STICK enParityStickArg)
{
    UART__vSetDataLength(enModule, enLengthData);
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
    if((uint32_t)0UL != (uint32_t)psLineControl)
    {
        UART__vSetDataLength(enModule, psLineControl->enLength);
        UART__vSetFifoEnable(enModule, psLineControl->enFifo);
        UART__vSetStopBits(enModule, psLineControl->enStop);
        UART__vSetParityEnable(enModule, psLineControl->enParity);
        UART__vSetParityType(enModule, psLineControl->enParityType);
        UART__vSetParityStick(enModule, psLineControl->enParityStick);
    }
}

