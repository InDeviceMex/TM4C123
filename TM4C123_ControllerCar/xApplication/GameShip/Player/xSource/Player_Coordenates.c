/**
 *
 * @file Player_Coordenates.c
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
 #include <xApplication/GameShip/Player/xHeader/Player_Coordenates.h>

uint32_t Player__u32GetXPos(const Player_TypeDef* pstPlayerArg)
{
    return pstPlayerArg->u32Xpos;
}

void Player__vSetXPos(Player_TypeDef* pstPlayerArg, uint32_t u32XPosArg)
{
    pstPlayerArg->u32Xpos= u32XPosArg;
}

uint32_t Player__u32GetYPos(const Player_TypeDef* pstPlayerArg)
{
    return pstPlayerArg->u32Ypos;
}

void Player__vSetYPos(Player_TypeDef* pstPlayerArg, uint32_t u32YPosArg)
{
    pstPlayerArg->u32Ypos= u32YPosArg;
}


uint32_t Player__u32GetWidth(const Player_TypeDef* pstPlayerArg)
{
    return pstPlayerArg->u32WidthPlayer;
}

uint32_t Player__u32GetHeight(const Player_TypeDef* pstPlayerArg)
{
    return pstPlayerArg->u32HeightPlayer;
}


uint32_t Player__u32GetSubLifes(const Player_TypeDef* pstPlayerArg)
{
    return pstPlayerArg->u32SubLifesCurrent;
}

void Player__vSetSubLifes(Player_TypeDef* pstPlayerArg, uint32_t u32SubLifesArg)
{
    pstPlayerArg->u32SubLifesCurrent = u32SubLifesArg;
}

uint32_t Player__u32GetLifes(const Player_TypeDef* pstPlayerArg)
{
    return pstPlayerArg->u32LifesCurrent;
}

void Player__vSetLifes(Player_TypeDef* pstPlayerArg, uint32_t u32LifesArg)
{
    pstPlayerArg->u32LifesCurrent = u32LifesArg;
}
