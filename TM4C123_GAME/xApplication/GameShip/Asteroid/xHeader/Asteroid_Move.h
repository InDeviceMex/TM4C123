/**
 *
 * @file Asteroid_Move.h
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

#ifndef XAPPLICATION_GAMESHIP_ASTEROID_XHEADER_ASTEROID_MOVE_H_
#define XAPPLICATION_GAMESHIP_ASTEROID_XHEADER_ASTEROID_MOVE_H_

#include <xApplication/GameShip/Asteroid/xHeader/Asteroid_Struct.h>

uint32_t Asteroid__u32GetRandPosX(void);
uint32_t Asteroid__u32GetRandPosY(void);

void Asteroid__vMove(Asteroid_TypeDef* psAsteroidArg);
void Asteroid__vSetNewPos(Asteroid_TypeDef* psAsteroidArg);

#endif /* XAPPLICATION_GAMESHIP_ASTEROID_XHEADER_ASTEROID_MOVE_H_ */
