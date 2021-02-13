/**
 *
 * @file Shot_Constructor.h
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
#ifndef XAPPLICATION_GAMESHIP_SHOT_XHEADER_SHOT_CONSTRUCTOR_H_
#define XAPPLICATION_GAMESHIP_SHOT_XHEADER_SHOT_CONSTRUCTOR_H_

#include <xApplication/GameShip/Shot/xHeader/Shot_Struct.h>

Shot_TypeDef* Shot__psConstructor(uint32_t u32XPosArg, uint32_t u32YPosArg);
void Shot__vDestructor(Shot_TypeDef* psShotArg);

#endif /* XAPPLICATION_GAMESHIP_SHOT_XHEADER_SHOT_CONSTRUCTOR_H_ */
