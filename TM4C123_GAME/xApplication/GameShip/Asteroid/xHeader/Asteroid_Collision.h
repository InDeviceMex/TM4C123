/**
 *
 * @file Asteroid_Collision.h
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
#ifndef XAPPLICATION_GAMESHIP_ASTEROID_XHEADER_ASTEROID_COLLISION_H_
#define XAPPLICATION_GAMESHIP_ASTEROID_XHEADER_ASTEROID_COLLISION_H_

#include <xApplication/GameShip/Asteroid/xHeader/Asteroid_Struct.h>
#include <xApplication/GameShip/Ship/xHeader/Ship_Struct.h>

void Asteroid__vCollision(Asteroid_TypeDef* psAsteroidArg, Ship_TypeDef* psShipArg);

#endif /* XAPPLICATION_GAMESHIP_ASTEROID_XHEADER_ASTEROID_COLLISION_H_ */
