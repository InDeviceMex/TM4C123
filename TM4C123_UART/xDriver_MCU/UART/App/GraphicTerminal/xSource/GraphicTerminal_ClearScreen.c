/**
 *
 * @file GraphicTerminal_ClearScreen.c
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
 * @verbatim 11 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/App/GraphicTerminal/xHeader/GraphicTerminal_ClearScreen.h>

#include <xDriver_MCU/UART/App/xHeader/UART_Printf.h>

void GraphTerm__vClearScreen(UART_nMODULE enModule)
{
    UART__u32Printf(enModule,"\x1B[2J" );
}
