/**
 *
 * @file Frame_Life.c
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
 * @verbatim 12 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#include <xApplication/GameShip/Frame/xHeader/Frame_Life.h>
#include <xApplication/GameShip/Frame/xHeader/Frame_Defines.h>

#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>

void Frame__vDrawLife(void)
{
    uint32_t u32Pos = 0UL;
    for( u32Pos = FRAME_COLUMN_INIT; u32Pos < FRAME_COLUMN_MAX; u32Pos++)
    {
        GraphTerm__u32Printf(UART_enMODULE_0, u32Pos, FRAME_ROW_INIT,"=");
        GraphTerm__u32Printf(UART_enMODULE_0, u32Pos, FRAME_ROW_MAX - 1UL,"=");
    }
    for( u32Pos = FRAME_ROW_INIT + 1UL; u32Pos < (FRAME_ROW_MAX - 1UL); u32Pos++)
    {
        GraphTerm__u32Printf(UART_enMODULE_0, FRAME_COLUMN_INIT, u32Pos,"|");
        GraphTerm__u32Printf(UART_enMODULE_0,FRAME_COLUMN_MAX - 1UL, u32Pos, "|");
    }
}
