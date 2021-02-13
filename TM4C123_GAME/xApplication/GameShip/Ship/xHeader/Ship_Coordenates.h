/**
 *
 * @file Ship_Coordenates.h
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
#ifndef XAPPLICATION_GAMESHIP_SHIP_XHEADER_SHIP_COORDENATES_H_
#define XAPPLICATION_GAMESHIP_SHIP_XHEADER_SHIP_COORDENATES_H_

#include <xApplication/GameShip/Ship/xHeader/Ship_Struct.h>

uint32_t Ship__u32GetXPos(const Ship_TypeDef* psShipArg);
void Ship__vSetXPos(Ship_TypeDef* psShipArg, uint32_t u32XPosArg);

uint32_t Ship__u32GetYPos(const Ship_TypeDef* psShipArg);
void Ship__vSetYPos(Ship_TypeDef* psShipArg, uint32_t u32YPosArg);

uint32_t Ship__u32GetWidth(const Ship_TypeDef* psShipArg);
uint32_t Ship__u32GetHeight(const Ship_TypeDef* psShipArg);

uint32_t Ship__u32GetSubLifes(const Ship_TypeDef* psShipArg);
void Ship__vSetSubLifes(Ship_TypeDef* psShipArg, uint32_t u32SubLifesArg);

uint32_t Ship__u32GetLifes(const Ship_TypeDef* psShipArg);
void Ship__vSetLifes(Ship_TypeDef* psShipArg, uint32_t u32LifesArg);

#endif /* XAPPLICATION_GAMESHIP_SHIP_XHEADER_SHIP_COORDENATES_H_ */
