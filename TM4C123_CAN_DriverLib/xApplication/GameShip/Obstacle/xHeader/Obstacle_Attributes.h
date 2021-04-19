/**
 *
 * @file Obstacle_Attributes.h
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

#ifndef XAPPLICATION_GAMESHIP_OBSTACLE_XHEADER_ASTEROID_ATTRIBUTES_H_
#define XAPPLICATION_GAMESHIP_OBSTACLE_XHEADER_ASTEROID_ATTRIBUTES_H_

#include <xApplication/GameShip/Obstacle/xHeader/Obstacle_Struct.h>

uint32_t Obstacle__u32GetXPos(const Obstacle_TypeDef* psObstacleArg);
void Obstacle__vSetXPos(Obstacle_TypeDef* psObstacleArg, uint32_t u32XPosArg);

uint32_t Obstacle__u32GetYPos(const Obstacle_TypeDef* psObstacleArg);
void Obstacle__vSetYPos(Obstacle_TypeDef* psObstacleArg, uint32_t u32YPosArg);

#endif /* XAPPLICATION_GAMESHIP_OBSTACLE_XHEADER_ASTEROID_ATTRIBUTES_H_ */
