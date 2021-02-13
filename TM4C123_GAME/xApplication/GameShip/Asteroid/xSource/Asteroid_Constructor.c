/**
 *
 * @file Asteroid_Constructor.c
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
#include <xApplication/GameShip/Asteroid/xHeader/Asteroid_Constructor.h>
#include <stdlib.h>

Asteroid_TypeDef* Asteroid__psConstructor(uint32_t u32XPosArg, uint32_t u32YPosArg)
{
    Asteroid_TypeDef* AsteroidHandle = 0UL;

    #if defined (__TI_ARM__ )
    AsteroidHandle = (Asteroid_TypeDef*) memalign( (size_t) 4, (size_t) (sizeof(Asteroid_TypeDef) ));
    #elif defined (__GNUC__ )
    AsteroidHandle = (Asteroid_TypeDef*) malloc( (size_t) sizeof(Asteroid_TypeDef));
    #endif

    if(0UL != (uint32_t) AsteroidHandle)
    {
        AsteroidHandle->u32Xpos = u32XPosArg;
        AsteroidHandle->u32Ypos = u32YPosArg;
    }
    return AsteroidHandle;
}

void Asteroid__vDestructor(void* pvAsteroidArg)
{
    Asteroid_TypeDef* psAsteroidArg = (Asteroid_TypeDef*) pvAsteroidArg;
    if(0UL != (uint32_t) psAsteroidArg)
    {
        psAsteroidArg->u32Xpos = 0UL;
        psAsteroidArg->u32Ypos = 0UL;
        free(psAsteroidArg);
        psAsteroidArg = (Asteroid_TypeDef*) 0UL;
    }
}
