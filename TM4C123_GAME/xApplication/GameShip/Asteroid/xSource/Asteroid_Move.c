/**
 *
 * @file Asteroid_Move.c
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
#include <xApplication/GameShip/Asteroid/xHeader/Asteroid_Move.h>

#include <xApplication/GameShip/Asteroid/xHeader/Asteroid_Erase.h>
#include <xApplication/GameShip/Asteroid/xHeader/Asteroid_Draw.h>
#include <xApplication/GameShip/Frame/Frame.h>
#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>
#include <stdlib.h>

uint32_t Asteroid__u32GetRandPosX(void)
{
    return ((uint32_t) rand() % (FRAME_COLUMN_WORKING_MAX - 1UL)) + FRAME_COLUMN_WORKING_INIT ;
}

uint32_t Asteroid__u32GetRandPosY(void)
{
    return ((uint32_t) rand() % (FRAME_ROW_WORKING_MAX - ((3UL * FRAME_ROW_WORKING_MAX)/4UL))) + FRAME_ROW_WORKING_INIT ;
}

void Asteroid__vSetNewPos(Asteroid_TypeDef* psAsteroidArg)
{
    psAsteroidArg->u32Xpos = Asteroid__u32GetRandPosX() ;
    psAsteroidArg->u32Ypos = FRAME_ROW_WORKING_INIT;
}

void Asteroid__vMove(Asteroid_TypeDef* psAsteroidArg)
{
    Asteroid__vErase(psAsteroidArg);
    psAsteroidArg->u32Ypos++;
    if(psAsteroidArg->u32Ypos > FRAME_ROW_WORKING_MAX - 1UL)
    {
        Asteroid__vSetNewPos(psAsteroidArg);
    }
    Asteroid__vDraw(psAsteroidArg);
}
