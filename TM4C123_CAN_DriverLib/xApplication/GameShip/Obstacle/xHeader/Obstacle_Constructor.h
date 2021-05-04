/**
 *
 * @file Obstacle_Constructor.h
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

#ifndef XAPPLICATION_GAMESHIP_OBSTACLE_XHEADER_ASTEROID_CONSTRUCTOR_H_
#define XAPPLICATION_GAMESHIP_OBSTACLE_XHEADER_ASTEROID_CONSTRUCTOR_H_

#include <xApplication/GameShip/Obstacle/xHeader/Obstacle_Struct.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/DoubleLinkedList.h>

Obstacle_TypeDef* Obstacle__pstConstructor(uint32_t u32XPosArg, uint32_t u32YPosArg);
void Obstacle__vDestructor(void* pvObstacleArg);

DLinkedList_TypeDef* Obstacle__pstInitList(void);
void Obstacle__vDestroyList(DLinkedList_TypeDef* pstObstacleDLinkedListArg);

DLinkedListElement_TypeDef* Obstacle__pstAddElement(DLinkedList_TypeDef* pstObstacleDLinkedListArg, uint32_t u32XPosArg, uint32_t u32YPosArg);

#endif /* XAPPLICATION_GAMESHIP_OBSTACLE_XHEADER_ASTEROID_CONSTRUCTOR_H_ */
