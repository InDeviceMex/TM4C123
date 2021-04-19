/**
 *
 * @file Player_Erase.c
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
#include <xApplication/GameShip/Player/xHeader/Player_Erase.h>
#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>

void Player__vErase(const Player_TypeDef* psPlayerArg)
{
    GraphTerm__u32Printf(UART_enMODULE_0, psPlayerArg->u32Xpos, psPlayerArg->u32Ypos, "     ");
    GraphTerm__u32Printf(UART_enMODULE_0, psPlayerArg->u32Xpos, psPlayerArg->u32Ypos + 1UL, "     ");
    GraphTerm__u32Printf(UART_enMODULE_0, psPlayerArg->u32Xpos, psPlayerArg->u32Ypos + 2UL, "     ");
}
