/**
 *
 * @file Shot_Attributes.h
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
#ifndef XAPPLICATION_GAMESHIP_SHOT_XHEADER_SHOT_ATTRIBUTES_H_
#define XAPPLICATION_GAMESHIP_SHOT_XHEADER_SHOT_ATTRIBUTES_H_

#include <xApplication/GameShip/Shot/xHeader/Shot_Struct.h>

uint32_t Shot__u32GetXPos(const Shot_TypeDef* pstShotArg);
void Shot__vSetXPos(Shot_TypeDef* pstShotArg, uint32_t u32XPosArg);

uint32_t Shot__u32GetYPos(const Shot_TypeDef* pstShotArg);
void Shot__vSetYPos(Shot_TypeDef* pstShotArg, uint32_t u32YPosArg);




#endif /* XAPPLICATION_GAMESHIP_SHOT_XHEADER_SHOT_ATTRIBUTES_H_ */
