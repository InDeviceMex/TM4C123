/**
 *
 * @file Ship_Coordenates.c
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
#include <xApplication/GameShip/Ship/xHeader/Ship_Coordenates.h>


uint32_t Ship__u32GetXPos(const Ship_TypeDef* psShipArg)
{
    return psShipArg->u32Xpos;
}

void Ship__vSetXPos(Ship_TypeDef* psShipArg, uint32_t u32XPosArg)
{
    psShipArg->u32Xpos= u32XPosArg;
}

uint32_t Ship__u32GetYPos(const Ship_TypeDef* psShipArg)
{
    return psShipArg->u32Ypos;
}

void Ship__vSetYPos(Ship_TypeDef* psShipArg, uint32_t u32YPosArg)
{
    psShipArg->u32Ypos= u32YPosArg;
}


uint32_t Ship__u32GetWidth(const Ship_TypeDef* psShipArg)
{
    return psShipArg->u32WidthShip;
}

uint32_t Ship__u32GetHeight(const Ship_TypeDef* psShipArg)
{
    return psShipArg->u32HeightShip;
}


uint32_t Ship__u32GetSubLifes(const Ship_TypeDef* psShipArg)
{
    return psShipArg->u32SubLifesCurrent;
}

void Ship__vSetSubLifes(Ship_TypeDef* psShipArg, uint32_t u32SubLifesArg)
{
    psShipArg->u32SubLifesCurrent = u32SubLifesArg;
}

uint32_t Ship__u32GetLifes(const Ship_TypeDef* psShipArg)
{
    return psShipArg->u32LifesCurrent;
}

void Ship__vSetLifes(Ship_TypeDef* psShipArg, uint32_t u32LifesArg)
{
    psShipArg->u32LifesCurrent = u32LifesArg;
}
