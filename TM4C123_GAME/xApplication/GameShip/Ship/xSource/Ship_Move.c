/**
 *
 * @file Ship_Move.c
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
#include <xApplication/GameShip/Ship/xHeader/Ship_Move.h>

#include <xApplication/GameShip/Ship/xHeader/Ship_Erase.h>
#include <xApplication/GameShip/Ship/xHeader/Ship_Draw.h>
#include <xApplication/GameShip/Frame/Frame.h>
#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>
#include <xApplication/EDUMKII/EDUMKII.h>

void Ship__vMove(Ship_TypeDef* psShipArg)
{
    uint32_t u32JoystickXValue = 0UL;
    uint32_t u32JoystickYValue = 0UL;
    EDUMKII_nJOYSTICK enJoystickSelectValue = (EDUMKII_nJOYSTICK) 0UL;

    EDUMKII_Joystick_vSample( &u32JoystickXValue, &u32JoystickYValue, &enJoystickSelectValue);
    Ship__vErase(psShipArg);
    /*to Left*/
    if((u32JoystickXValue <= 1100UL) && (psShipArg->u32Xpos > FRAME_COLUMN_WORKING_INIT))
    {
        psShipArg->u32Xpos--;
    }
    /*to right*/
    if(((u32JoystickXValue >= 3000UL) && (u32JoystickXValue <= 4096UL)) &&  (psShipArg->u32Xpos < (FRAME_COLUMN_WORKING_MAX - psShipArg->u32WidthShip)))
    {
        psShipArg->u32Xpos++;
    }

    /*to Down*/
    if((u32JoystickYValue <= 1100UL) && (psShipArg->u32Ypos < (FRAME_ROW_WORKING_MAX - psShipArg->u32HeightShip)))
    {
        psShipArg->u32Ypos++;
    }
    /*to right*/
    if(((u32JoystickYValue >= 3000UL) && (u32JoystickYValue <= 4096UL)) && (psShipArg->u32Ypos > FRAME_ROW_WORKING_INIT))
    {
        psShipArg->u32Ypos--;
    }

    if(EDUMKII_enJOYSTICK_PRESS == enJoystickSelectValue)
    {
        if(0UL != psShipArg->u32SubLifesCurrent)
        {
            psShipArg->u32SubLifesCurrent--;
        }
    }
    Ship__vDraw(psShipArg);
    Ship__vDrawLifes(psShipArg);
}
