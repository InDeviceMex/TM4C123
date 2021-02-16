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

void Obstacle__vCollision(Obstacle_TypeDef* psObstacleArg, Player_TypeDef* psPlayerArg)
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

    u32PlayerXPos = Player__u32GetXPos(psPlayerArg);
    u32PlayerYPos = Player__u32GetYPos(psPlayerArg);
    u32PlayerWidth = Player__u32GetWidth(psPlayerArg);
    u32PlayerHeight = Player__u32GetHeight(psPlayerArg);
    u32PlayerXComplete = u32PlayerXPos + u32PlayerWidth;
    u32PlayerYComplete = u32PlayerYPos + u32PlayerHeight;
    u32XCompare1 = psObstacleArg->u32Xpos;
    u32XCompare2 = psObstacleArg->u32Xpos;
    u32YCompare1 = psObstacleArg->u32Ypos;
    u32YCompare2 = psObstacleArg->u32Ypos;
    if(((u32XCompare1 >=  u32PlayerXPos) && (u32XCompare2 <= u32PlayerXComplete)) && ((u32YCompare1 >=  u32PlayerYPos) && (u32YCompare2 <= u32PlayerYComplete)))
    {
        Obstacle__vErase(psObstacleArg);
        u32SubLifesReg = Player__u32GetSubLifes(psPlayerArg);
        if(0UL != u32SubLifesReg)
        {
            u32SubLifesReg--;
        }
        Player__vSetSubLifes(psPlayerArg, u32SubLifesReg);
        Player__vDraw(psPlayerArg);
        Player__vDrawLifes(psPlayerArg);
        Obstacle__vSetNewPos(psObstacleArg);
    }
}

void Obstacle__vCheckPlayerCollision(const DLinkedList_TypeDef* psObstacleListArg, Player_TypeDef* psPlayerArg)
{
    Obstacle_TypeDef* psObstacleGeneric = (Obstacle_TypeDef*) 0UL;
    DLinkedListElement_TypeDef* psObstacleIterator = (DLinkedListElement_TypeDef*) 0UL;
    psObstacleIterator = DLinkedList__psGetHead(psObstacleListArg);
    while((uint32_t) psObstacleIterator != 0UL)
    {
        psObstacleGeneric = (Obstacle_TypeDef*) DLinkedList__pvGetElementData(psObstacleIterator);
        Obstacle__vMove(psObstacleGeneric);
        Obstacle__vCollision(psObstacleGeneric, psPlayerArg);
        psObstacleIterator = DLinkedList__psGetElementNextNode(psObstacleIterator);
    }
}
