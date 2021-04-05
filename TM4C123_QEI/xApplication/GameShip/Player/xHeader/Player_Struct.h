/**
 *
 * @file Player_Struct.h
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

#ifndef XAPPLICATION_GAMESHIP_PLAYER_XHEADER_PLAYER_STRUCT_H_
#define XAPPLICATION_GAMESHIP_PLAYER_XHEADER_PLAYER_STRUCT_H_

#include <xUtils/Standard/Standard.h>

typedef struct
{
        uint32_t u32Xpos;
        uint32_t u32Ypos;
        uint32_t u32WidthPlayer;
        uint32_t u32HeightPlayer;
        uint32_t u32SubLifesTotal;
        uint32_t u32SubLifesCurrent;
        uint32_t u32LifesTotal;
        uint32_t u32LifesCurrent;
}Player_TypeDef;

#endif /* XAPPLICATION_GAMESHIP_PLAYER_XHEADER_PLAYER_STRUCT_H_ */
