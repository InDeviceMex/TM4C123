/**
 *
 * @file Obstacle_Constructor.c
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
#include <xApplication/GameShip/Obstacle/xHeader/Obstacle_Constructor.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/DoubleLinkedList.h>
#include <stdlib.h>

Obstacle_TypeDef* Obstacle__pstConstructor(uint32_t u32XPosArg, uint32_t u32YPosArg)
{
    Obstacle_TypeDef* ObstacleHandle = 0UL;

    #if defined (__TI_ARM__ )
    ObstacleHandle = (Obstacle_TypeDef*) memalign( (size_t) 4, (size_t) (sizeof(Obstacle_TypeDef) ));
    #elif defined (__GNUC__ )
    ObstacleHandle = (Obstacle_TypeDef*) malloc( (size_t) sizeof(Obstacle_TypeDef));
    #endif

    if(0UL != (uint32_t) ObstacleHandle)
    {
        ObstacleHandle->u32Xpos = u32XPosArg;
        ObstacleHandle->u32Ypos = u32YPosArg;
    }
    return ObstacleHandle;
}

void Obstacle__vDestructor(void* pvObstacleArg)
{
    Obstacle_TypeDef* pstObstacleArg = (Obstacle_TypeDef*) pvObstacleArg;
    if(0UL != (uint32_t) pstObstacleArg)
    {
        pstObstacleArg->u32Xpos = 0UL;
        pstObstacleArg->u32Ypos = 0UL;
        free(pstObstacleArg);
        pstObstacleArg = (Obstacle_TypeDef*) 0UL;
    }
}

DLinkedList_TypeDef* Obstacle__pstInitList(void)
{
    DLinkedList_TypeDef* pstObstacleDLinkedList = (DLinkedList_TypeDef*) 0UL;
    pstObstacleDLinkedList = DLinkedList__pstInit(&Obstacle__vDestructor);
    return pstObstacleDLinkedList;
}

void Obstacle__vDestroyList(DLinkedList_TypeDef* pstObstacleDLinkedListArg)
{
    DLinkedList__vDestroy(pstObstacleDLinkedListArg);
}

DLinkedListElement_TypeDef* Obstacle__pstAddElement(DLinkedList_TypeDef* pstObstacleDLinkedListArg, uint32_t u32XPosArg, uint32_t u32YPosArg)
{
    DLinkedListElement_TypeDef* pstNewObstacleElement = (DLinkedListElement_TypeDef*) 0UL;
    Obstacle_TypeDef* pstNewObstacle = (Obstacle_TypeDef*) 0UL;
    pstNewObstacle = Obstacle__pstConstructor(u32XPosArg, u32YPosArg);
    if(0UL != (uint32_t) pstNewObstacle)
    {
        pstNewObstacleElement = DLinkedList__pstAddEnd(pstObstacleDLinkedListArg,  (void*) pstNewObstacle);
    }
    return pstNewObstacleElement;
}
