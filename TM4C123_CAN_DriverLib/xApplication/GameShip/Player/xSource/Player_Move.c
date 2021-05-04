/**
 *
 * @file Player_Move.c
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
#include <xApplication/GameShip/Player/xHeader/Player_Draw.h>
#include <xApplication/GameShip/Player/xHeader/Player_Erase.h>
#include <xApplication/GameShip/Player/xHeader/Player_Move.h>
#include <xApplication/GameShip/Player/xHeader/Player_Erase.h>
#include <xApplication/GameShip/Frame/Frame.h>
#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>
#include <xApplication/EDUMKII/EDUMKII.h>

void Player__vMove(Player_TypeDef* pstPlayerArg)
{
    uint32_t u32JoystickXValue = 0UL;
    uint32_t u32JoystickYValue = 0UL;
    EDUMKII_nJOYSTICK enJoystickSelectValue = (EDUMKII_nJOYSTICK) 0UL;

    EDUMKII_Joystick_vSample( &u32JoystickXValue, &u32JoystickYValue, &enJoystickSelectValue);
    Player__vErase(pstPlayerArg);
    /*to Left*/
    if((u32JoystickXValue <= 1100UL) && (pstPlayerArg->u32Xpos > FRAME_COLUMN_WORKING_INIT))
    {
        pstPlayerArg->u32Xpos--;
    }
    /*to right*/
    if(((u32JoystickXValue >= 3000UL) && (u32JoystickXValue <= 4096UL)) &&  (pstPlayerArg->u32Xpos < (FRAME_COLUMN_WORKING_MAX - pstPlayerArg->u32WidthPlayer)))
    {
        pstPlayerArg->u32Xpos++;
    }

    /*to Down*/
    if((u32JoystickYValue <= 1100UL) && (pstPlayerArg->u32Ypos < (FRAME_ROW_WORKING_MAX - pstPlayerArg->u32HeightPlayer)))
    {
        pstPlayerArg->u32Ypos++;
    }
    /*to Up*/
    if(((u32JoystickYValue >= 3000UL) && (u32JoystickYValue <= 4096UL)) && (pstPlayerArg->u32Ypos > FRAME_ROW_WORKING_INIT))
    {
        pstPlayerArg->u32Ypos--;
    }

    if(EDUMKII_enJOYSTICK_PRESS == enJoystickSelectValue)
    {
        if(0UL != pstPlayerArg->u32SubLifesCurrent)
        {
            pstPlayerArg->u32SubLifesCurrent--;
        }
    }
    Player__vDraw(pstPlayerArg);
    Player__vDrawLifes(pstPlayerArg);
}
