/**
 *
 * @file Player_Constructor.h
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

#ifndef XAPPLICATION_GAMESHIP_PLAYER_XHEADER_PLAYER_CONSTRUCTOR_H_
#define XAPPLICATION_GAMESHIP_PLAYER_XHEADER_PLAYER_CONSTRUCTOR_H_

#include <xApplication/GameShip/Player/xHeader/Player_Struct.h>

Player_TypeDef* Player__psConstructor(uint32_t u32XPosArg, uint32_t u32YPosArg, uint32_t u32LifesArg, uint32_t u32SubLifesArg);
void Player__vDestructor(void* pvPlayerArg);

#endif /* XAPPLICATION_GAMESHIP_PLAYER_XHEADER_PLAYER_CONSTRUCTOR_H_ */
