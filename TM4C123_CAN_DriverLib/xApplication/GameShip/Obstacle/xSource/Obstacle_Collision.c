/**
 *
 * @file Obstacle_Collision.c
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
#include <xApplication/GameShip/Obstacle/xHeader/Obstacle_Collision.h>
#include <xApplication/GameShip/Obstacle/xHeader/Obstacle_Erase.h>
#include <xApplication/GameShip/Obstacle/xHeader/Obstacle_Move.h>
#include <xApplication/GameShip/Player/Player.h>
#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/DoubleLinkedList.h>

void Obstacle__vCollision(Obstacle_TypeDef* pstObstacleArg, Player_TypeDef* pstPlayerArg)
{
    uint32_t u32SubLifesReg = 0UL;
    uint32_t u32PlayerXPos = 0UL;
    uint32_t u32PlayerYPos = 0UL;
    uint32_t u32PlayerWidth = 0UL;
    uint32_t u32PlayerHeight = 0UL;
    uint32_t u32PlayerXComplete = 0UL;
    uint32_t u32PlayerYComplete = 0UL;
    uint32_t u32XCompare1 = 0UL;
    uint32_t u32XCompare2 = 0UL;
    uint32_t u32YCompare1 = 0UL;
    uint32_t u32YCompare2 = 0UL;

    u32PlayerXPos = Player__u32GetXPos(pstPlayerArg);
    u32PlayerYPos = Player__u32GetYPos(pstPlayerArg);
    u32PlayerWidth = Player__u32GetWidth(pstPlayerArg);
    u32PlayerHeight = Player__u32GetHeight(pstPlayerArg);
    u32PlayerXComplete = u32PlayerXPos + u32PlayerWidth;
    u32PlayerYComplete = u32PlayerYPos + u32PlayerHeight;
    u32XCompare1 = pstObstacleArg->u32Xpos;
    u32XCompare2 = pstObstacleArg->u32Xpos;
    u32YCompare1 = pstObstacleArg->u32Ypos;
    u32YCompare2 = pstObstacleArg->u32Ypos;
    if(((u32XCompare1 >=  u32PlayerXPos) && (u32XCompare2 <= u32PlayerXComplete)) && ((u32YCompare1 >=  u32PlayerYPos) && (u32YCompare2 <= u32PlayerYComplete)))
    {
        Obstacle__vErase(pstObstacleArg);
        u32SubLifesReg = Player__u32GetSubLifes(pstPlayerArg);
        if(0UL != u32SubLifesReg)
        {
            u32SubLifesReg--;
        }
        Player__vSetSubLifes(pstPlayerArg, u32SubLifesReg);
        Player__vDraw(pstPlayerArg);
        Player__vDrawLifes(pstPlayerArg);
        Obstacle__vSetNewPos(pstObstacleArg);
    }
}

void Obstacle__vCheckPlayerCollision(const DLinkedList_TypeDef* pstObstacleListArg, Player_TypeDef* pstPlayerArg)
{
    Obstacle_TypeDef* pstObstacleGeneric = (Obstacle_TypeDef*) 0UL;
    DLinkedListElement_TypeDef* pstObstacleIterator = (DLinkedListElement_TypeDef*) 0UL;
    pstObstacleIterator = DLinkedList__pstGetHead(pstObstacleListArg);
    while((uint32_t) pstObstacleIterator != 0UL)
    {
        pstObstacleGeneric = (Obstacle_TypeDef*) DLinkedList__pvGetElementData(pstObstacleIterator);
        Obstacle__vMove(pstObstacleGeneric);
        Obstacle__vCollision(pstObstacleGeneric, pstPlayerArg);
        pstObstacleIterator = DLinkedList__pstGetElementNextNode(pstObstacleIterator);
    }
}
