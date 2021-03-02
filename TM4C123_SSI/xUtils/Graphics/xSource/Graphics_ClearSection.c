/**
 *
 * @file Graphics_ClearSection.c
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
 * @verbatim 19 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#include <xUtils/Graphics/xHeader/Graphics_ClearSection.h>
#include <xUtils/Graphics/Common/Graphics_Common.h>

void Graphics__vClearSection (void (*pfvCallback)(Graphics_Layer_TypeDef* restrict psLayerArg, Graphics_DIMENSIONS_TypeDef sDimensionsArg, uint32_t  u32Color), Graphics_Layer_TypeDef* restrict psLayerArg, Graphics_DIMENSIONS_TypeDef sDimensionsArg, uint32_t  u32Color)
{
    Graphics_nSTATUS enStatus = Graphics_enSTATUS_OK;
    uint32_t enStatusWidth = 0UL;
    uint32_t enStatusHeight = 0UL;

    enStatusHeight = (uint32_t) Graphics__enCheckParams(sDimensionsArg.u32Height,  sDimensionsArg.u32CoordY_Initial, psLayerArg->u32HeightTotal);
    enStatusWidth = (uint32_t) Graphics__enCheckParams(sDimensionsArg.u32Width,  sDimensionsArg.u32CoordY_Initial, psLayerArg->u32WidthTotal);

    enStatusHeight |= enStatusWidth;
    enStatus = (Graphics_nSTATUS) enStatusHeight;

    if(Graphics_enSTATUS_OK == enStatus)
    {
        pfvCallback(psLayerArg, sDimensionsArg, u32Color);
    }
}


