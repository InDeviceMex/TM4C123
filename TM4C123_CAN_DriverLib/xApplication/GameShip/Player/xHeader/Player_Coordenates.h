/**
 *
 * @file Player_Coordenates.h
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

#ifndef XAPPLICATION_GAMESHIP_PLAYER_XHEADER_PLAYER_COORDENATES_H_
#define XAPPLICATION_GAMESHIP_PLAYER_XHEADER_PLAYER_COORDENATES_H_

#include <xApplication/GameShip/Player/xHeader/Player_Struct.h>

uint32_t Player__u32GetXPos(const Player_TypeDef* psPlayerArg);
void Player__vSetXPos(Player_TypeDef* psPlayerArg, uint32_t u32XPosArg);

uint32_t Player__u32GetYPos(const Player_TypeDef* psPlayerArg);
void Player__vSetYPos(Player_TypeDef* psPlayerArg, uint32_t u32YPosArg);

uint32_t Player__u32GetWidth(const Player_TypeDef* psPlayerArg);
uint32_t Player__u32GetHeight(const Player_TypeDef* psPlayerArg);

uint32_t Player__u32GetSubLifes(const Player_TypeDef* psPlayerArg);
void Player__vSetSubLifes(Player_TypeDef* psPlayerArg, uint32_t u32SubLifesArg);

uint32_t Player__u32GetLifes(const Player_TypeDef* psPlayerArg);
void Player__vSetLifes(Player_TypeDef* psPlayerArg, uint32_t u32LifesArg);

#endif /* XAPPLICATION_GAMESHIP_PLAYER_XHEADER_PLAYER_COORDENATES_H_ */
