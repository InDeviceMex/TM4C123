/**
 *
 * @file Asteroid_Attributes.c
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
#include <xApplication/GameShip/Asteroid/xHeader/Asteroid_Attributes.h>

uint32_t Asteroid__u32GetXPos(const Asteroid_TypeDef* psAsteroidArg)
{
    return psAsteroidArg->u32Xpos;
}

void Asteroid__vSetXPos(Asteroid_TypeDef* psAsteroidArg, uint32_t u32XPosArg)
{
    psAsteroidArg->u32Xpos= u32XPosArg;
}

uint32_t Asteroid__u32GetYPos(const Asteroid_TypeDef* psAsteroidArg)
{
    return psAsteroidArg->u32Ypos;
}

void Asteroid__vSetYPos(Asteroid_TypeDef* psAsteroidArg, uint32_t u32YPosArg)
{
    psAsteroidArg->u32Ypos= u32YPosArg;
}
