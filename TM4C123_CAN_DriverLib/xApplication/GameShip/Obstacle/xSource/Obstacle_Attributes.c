/**
 *
 * @file Obstacle_Attributes.c
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
#include <xApplication/GameShip/Obstacle/xHeader/Obstacle_Attributes.h>

uint32_t Obstacle__u32GetXPos(const Obstacle_TypeDef* pstObstacleArg)
{
    return pstObstacleArg->u32Xpos;
}

void Obstacle__vSetXPos(Obstacle_TypeDef* pstObstacleArg, uint32_t u32XPosArg)
{
    pstObstacleArg->u32Xpos= u32XPosArg;
}

uint32_t Obstacle__u32GetYPos(const Obstacle_TypeDef* pstObstacleArg)
{
    return pstObstacleArg->u32Ypos;
}

void Obstacle__vSetYPos(Obstacle_TypeDef* pstObstacleArg, uint32_t u32YPosArg)
{
    pstObstacleArg->u32Ypos= u32YPosArg;
}
