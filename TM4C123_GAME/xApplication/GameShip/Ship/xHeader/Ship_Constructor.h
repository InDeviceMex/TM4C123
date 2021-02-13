/**
 *
 * @file Ship_Constructor.h
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
#ifndef XAPPLICATION_GAMESHIP_SHIP_XHEADER_SHIP_CONSTRUCTOR_H_
#define XAPPLICATION_GAMESHIP_SHIP_XHEADER_SHIP_CONSTRUCTOR_H_

#include <xApplication/GameShip/Ship/xHeader/Ship_Struct.h>

Ship_TypeDef* Ship__psConstructor(uint32_t u32XPosArg, uint32_t u32YPosArg, uint32_t u32LifesArg, uint32_t u32SubLifesArg);
void Ship__vDestructor(void* pvShipArg);

#endif /* XAPPLICATION_GAMESHIP_SHIP_XHEADER_SHIP_CONSTRUCTOR_H_ */
