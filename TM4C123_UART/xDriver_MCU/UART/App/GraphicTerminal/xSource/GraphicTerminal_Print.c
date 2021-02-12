/**
 *
 * @file GraphicTerminal_Print.c
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
#include <xDriver_MCU/UART/App/GraphicTerminal/xHeader/GraphicTerminal_Print.h>

#include <xDriver_MCU/UART/App/GraphicTerminal/xHeader/GraphicTerminal_Cursor.h>
#include <xDriver_MCU/UART/App/xHeader/UART_Printf.h>

#if defined (__TI_ARM__ )
    #pragma CHECK_MISRA("-6.3, -10.1, -10.3, -12.2, -12.7, -12.10, -14.5, -16.1")
#endif

uint32_t GraphTerm__u32Printf(UART_nMODULE enModule, uint32_t u32Column, uint32_t u32Row, const char* pcFormat, ... )
{
    uint32_t u32Lengtht = 0UL;
    va_list vaList;
    va_start(vaList, pcFormat);
    GraphTerm__vSetCursorXY(enModule, u32Column, u32Row);
    u32Lengtht = UART__u32vsPrintf(enModule, pcFormat,vaList);
    va_end(vaList);
    return  u32Lengtht;
}

#if defined (__TI_ARM__ )
    #pragma RESET_MISRA("6.3, 10.1, 10.3, 12.2, 12.7, 12.10, 14.5, 16.1")
#endif
