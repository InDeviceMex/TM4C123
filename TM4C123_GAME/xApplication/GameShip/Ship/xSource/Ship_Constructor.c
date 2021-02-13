/**
 *
 * @file Ship_Constructor.c
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
#include <xApplication/GameShip/Ship/xHeader/Ship_Constructor.h>
#include <stdlib.h>

Ship_TypeDef* Ship__psConstructor(uint32_t u32XPosArg, uint32_t u32YPosArg, uint32_t u32LifesArg, uint32_t u32SubLifesArg)
{
    Ship_TypeDef* ShipHandle = 0UL;

    #if defined (__TI_ARM__ )
    ShipHandle = (Ship_TypeDef*) memalign( (size_t) 4, (size_t) (sizeof(Ship_TypeDef) ));
    #elif defined (__GNUC__ )
    ShipHandle = (Ship_TypeDef*) malloc( (size_t) sizeof(Ship_TypeDef));
    #endif

    if(0UL != (uint32_t) ShipHandle)
    {
        ShipHandle->u32Xpos = u32XPosArg;
        ShipHandle->u32Ypos = u32YPosArg;
        ShipHandle->u32WidthShip = 5UL;
        ShipHandle->u32HeightShip = 3UL;
        ShipHandle->u32SubLifesTotal = u32SubLifesArg;
        ShipHandle->u32SubLifesCurrent = u32SubLifesArg;
        ShipHandle->u32LifesTotal = u32LifesArg;
        ShipHandle->u32LifesCurrent = u32LifesArg;
    }
    return ShipHandle;
}

void Ship__vDestructor(void* pvShipArg)
{
    Ship_TypeDef* psShipArg = (Ship_TypeDef*) pvShipArg;
    if(0UL != (uint32_t) psShipArg)
    {
        psShipArg->u32Xpos = 0UL;
        psShipArg->u32Ypos = 0UL;
        psShipArg->u32WidthShip = 0UL;
        psShipArg->u32HeightShip = 0UL;
        psShipArg->u32SubLifesTotal = 0UL;
        psShipArg->u32SubLifesCurrent = 0UL;
        psShipArg->u32LifesTotal = 0UL;
        psShipArg->u32LifesCurrent = 0UL;
        free(psShipArg);
        psShipArg = (Ship_TypeDef*) 0UL;
    }
}
