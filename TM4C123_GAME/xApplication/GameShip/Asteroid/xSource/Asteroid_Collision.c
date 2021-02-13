/**
 *
 * @file Asteroid_Collision.c
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
#include <xApplication/GameShip/Asteroid/xHeader/Asteroid_Collision.h>
#include <xApplication/GameShip/Asteroid/xHeader/Asteroid_Move.h>
#include <xApplication/GameShip/Asteroid/xHeader/Asteroid_Erase.h>
#include <xApplication/GameShip/Ship/Ship.h>

#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>

void Asteroid__vCollision(Asteroid_TypeDef* psAsteroidArg, Ship_TypeDef* psShipArg)
{
    uint32_t u32SubLifesReg = 0UL;
    uint32_t u32ShipXPos = 0UL;
    uint32_t u32ShipYPos = 0UL;
    uint32_t u32ShipWidth = 0UL;
    uint32_t u32ShipHeight = 0UL;
    uint32_t u32ShipXComplete = 0UL;
    uint32_t u32ShipYComplete = 0UL;
    uint32_t u32XCompare1 = 0UL;
    uint32_t u32XCompare2 = 0UL;
    uint32_t u32YCompare1 = 0UL;
    uint32_t u32YCompare2 = 0UL;

    u32ShipXPos = Ship__u32GetXPos(psShipArg);
    u32ShipYPos = Ship__u32GetYPos(psShipArg);
    u32ShipWidth = Ship__u32GetWidth(psShipArg);
    u32ShipHeight = Ship__u32GetHeight(psShipArg);
    u32ShipXComplete = u32ShipXPos + u32ShipWidth;
    u32ShipYComplete = u32ShipYPos + u32ShipHeight;
    u32XCompare1 = (uint32_t) (psAsteroidArg->u32Xpos >= u32ShipXPos);
    u32XCompare2 = (uint32_t) (psAsteroidArg->u32Xpos <= u32ShipXComplete);
    u32YCompare1 = (uint32_t) (psAsteroidArg->u32Ypos >= u32ShipYPos);
    u32YCompare2 = (uint32_t) (psAsteroidArg->u32Ypos <= u32ShipYComplete);
    if((u32XCompare1 && u32XCompare2) && (u32YCompare1 && u32YCompare2))
    {
        Asteroid__vErase(psAsteroidArg);
        u32SubLifesReg = Ship__u32GetSubLifes(psShipArg);
        if(0UL != u32SubLifesReg)
        {
            u32SubLifesReg--;
        }
        Ship__vSetSubLifes(psShipArg, u32SubLifesReg);
        Ship__vDraw(psShipArg);
        Ship__vDrawLifes(psShipArg);
        Asteroid__vSetNewPos(psAsteroidArg);
    }
}
