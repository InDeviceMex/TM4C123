/**
 *
 * @file Shot_Attributes.c
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
#include <xApplication/GameShip/Shot/xHeader/Shot_Attributes.h>

uint32_t Shot__u32GetXPos(const Shot_TypeDef* psShotArg)
{
    return psShotArg->u32Xpos;
}

void Shot__vSetXPos(Shot_TypeDef* psShotArg, uint32_t u32XPosArg)
{
    psShotArg->u32Xpos= u32XPosArg;
}

uint32_t Shot__u32GetYPos(const Shot_TypeDef* psShotArg)
{
    return psShotArg->u32Ypos;
}

void Shot__vSetYPos(Shot_TypeDef* psShotArg, uint32_t u32YPosArg)
{
    psShotArg->u32Ypos= u32YPosArg;
}


