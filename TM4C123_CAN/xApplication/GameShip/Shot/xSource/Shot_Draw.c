/**
 *
 * @file Shot_Draw.c
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
#include <xApplication/GameShip/Shot/xHeader/Shot_Draw.h>

#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>

void Shot__vDraw(const Shot_TypeDef* psShotArg)
{
    GraphTerm__u32Printf(UART_enMODULE_0, psShotArg->u32Xpos, psShotArg->u32Ypos,            "*");
}
