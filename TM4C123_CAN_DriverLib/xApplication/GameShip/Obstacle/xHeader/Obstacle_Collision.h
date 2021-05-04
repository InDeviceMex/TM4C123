/**
 *
 * @file Obstacle_Collision.h
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

#ifndef XAPPLICATION_GAMESHIP_OBSTACLE_XHEADER_ASTEROID_COLLISION_H_
#define XAPPLICATION_GAMESHIP_OBSTACLE_XHEADER_ASTEROID_COLLISION_H_

#include <xApplication/GameShip/Obstacle/xHeader/Obstacle_Struct.h>
#include <xApplication/GameShip/Player/xHeader/Player_Struct.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/DoubleLinkedList.h>

void Obstacle__vCollision(Obstacle_TypeDef* pstObstacleArg, Player_TypeDef* pstPlayerArg);
void Obstacle__vCheckPlayerCollision(const DLinkedList_TypeDef* pstObstacleListArg, Player_TypeDef* pstPlayerArg);

#endif /* XAPPLICATION_GAMESHIP_OBSTACLE_XHEADER_ASTEROID_COLLISION_H_ */
