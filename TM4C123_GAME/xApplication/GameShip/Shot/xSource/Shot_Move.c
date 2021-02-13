/**
 *
 * @file Shot_Move.c
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
#include <xApplication/GameShip/Shot/xHeader/Shot_Move.h>

#include <xApplication/GameShip/Shot/xHeader/Shot_Erase.h>
#include <xApplication/GameShip/Shot/xHeader/Shot_Draw.h>
#include <xApplication/GameShip/Frame/Frame.h>
#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>
#include <stdlib.h>

uint32_t Shot__u32Move(Shot_TypeDef* psShotArg)
{
    uint32_t u32State = 0UL;
    Shot__vErase(psShotArg);
    psShotArg->u32Ypos--;
    if(psShotArg->u32Ypos <= FRAME_ROW_WORKING_INIT)
    {
        u32State = 1UL;
    }
    else
    {
        Shot__vDraw(psShotArg);
    }
    return u32State;
}
