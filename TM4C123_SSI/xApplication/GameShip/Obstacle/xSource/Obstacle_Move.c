/**
 *
 * @file Obstacle_Move.c
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
#include <xApplication/GameShip/Obstacle/xHeader/Obstacle_Draw.h>
#include <xApplication/GameShip/Obstacle/xHeader/Obstacle_Erase.h>
#include <xApplication/GameShip/Obstacle/xHeader/Obstacle_Move.h>
#include <xApplication/GameShip/Obstacle/xHeader/Obstacle_Erase.h>
#include <xApplication/GameShip/Frame/Frame.h>
#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>
#include <stdlib.h>

uint32_t Obstacle__u32GetRandPosX(void)
{
    return ((uint32_t) rand() % (FRAME_COLUMN_WORKING_MAX - 1UL)) + FRAME_COLUMN_WORKING_INIT ;
}

uint32_t Obstacle__u32GetRandPosY(void)
{
    return ((uint32_t) rand() % (FRAME_ROW_WORKING_MAX - ((3UL * FRAME_ROW_WORKING_MAX)/4UL))) + FRAME_ROW_WORKING_INIT ;
}

void Obstacle__vSetNewPos(Obstacle_TypeDef* psObstacleArg)
{
    psObstacleArg->u32Xpos = Obstacle__u32GetRandPosX() ;
    psObstacleArg->u32Ypos = FRAME_ROW_WORKING_INIT;
}

void Obstacle__vMove(Obstacle_TypeDef* psObstacleArg)
{
    Obstacle__vErase(psObstacleArg);
    psObstacleArg->u32Ypos++;
    if(psObstacleArg->u32Ypos > FRAME_ROW_WORKING_MAX - 1UL)
    {
        Obstacle__vSetNewPos(psObstacleArg);
    }
    Obstacle__vDraw(psObstacleArg);
}
