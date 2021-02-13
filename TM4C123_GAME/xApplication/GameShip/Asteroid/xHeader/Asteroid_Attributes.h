/**
 *
 * @file Asteroid_Attributes.h
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

#ifndef XAPPLICATION_GAMESHIP_ASTEROID_XHEADER_ASTEROID_ATTRIBUTES_H_
#define XAPPLICATION_GAMESHIP_ASTEROID_XHEADER_ASTEROID_ATTRIBUTES_H_

#include <xApplication/GameShip/Asteroid/xHeader/Asteroid_Struct.h>

uint32_t Asteroid__u32GetXPos(const Asteroid_TypeDef* psAsteroidArg);
void Asteroid__vSetXPos(Asteroid_TypeDef* psAsteroidArg, uint32_t u32XPosArg);

uint32_t Asteroid__u32GetYPos(const Asteroid_TypeDef* psAsteroidArg);
void Asteroid__vSetYPos(Asteroid_TypeDef* psAsteroidArg, uint32_t u32YPosArg);

#endif /* XAPPLICATION_GAMESHIP_ASTEROID_XHEADER_ASTEROID_ATTRIBUTES_H_ */
