/**
 *
 * @file Ship_Erase.c
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
#include <xApplication/GameShip/Ship/xHeader/Ship_Erase.h>

#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>

void Ship__vErase(const Ship_TypeDef* psShipArg)
{
    GraphTerm__u32Printf(UART_enMODULE_0, psShipArg->u32Xpos, psShipArg->u32Ypos, "     ");
    GraphTerm__u32Printf(UART_enMODULE_0, psShipArg->u32Xpos, psShipArg->u32Ypos + 1UL, "     ");
    GraphTerm__u32Printf(UART_enMODULE_0, psShipArg->u32Xpos, psShipArg->u32Ypos + 2UL, "     ");
}
