/**
 *
 * @file Shot_Erase.c
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
#include <xApplication/GameShip/Shot/xHeader/Shot_Erase.h>

#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>

void Shot__vErase(const Shot_TypeDef* pstShotArg)
{
    GraphTerm__u32Printf(UART_enMODULE_0, pstShotArg->u32Xpos, pstShotArg->u32Ypos, " ");
}


