/**
 *
 * @file Obstacle_Constructor.c
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
#include <xApplication/GameShip/Obstacle/xHeader/Obstacle_Constructor.h>
#include <stdlib.h>

Obstacle_TypeDef* Obstacle__psConstructor(uint32_t u32XPosArg, uint32_t u32YPosArg)
{
    Obstacle_TypeDef* ObstacleHandle = 0UL;

    #if defined (__TI_ARM__ )
    ObstacleHandle = (Obstacle_TypeDef*) memalign( (size_t) 4, (size_t) (sizeof(Obstacle_TypeDef) ));
    #elif defined (__GNUC__ )
    ObstacleHandle = (Obstacle_TypeDef*) malloc( (size_t) sizeof(Obstacle_TypeDef));
    #endif

    if(0UL != (uint32_t) ObstacleHandle)
    {
        ObstacleHandle->u32Xpos = u32XPosArg;
        ObstacleHandle->u32Ypos = u32YPosArg;
    }
    return ObstacleHandle;
}

void Obstacle__vDestructor(void* pvObstacleArg)
{
    Obstacle_TypeDef* psObstacleArg = (Obstacle_TypeDef*) pvObstacleArg;
    if(0UL != (uint32_t) psObstacleArg)
    {
        psObstacleArg->u32Xpos = 0UL;
        psObstacleArg->u32Ypos = 0UL;
        free(psObstacleArg);
        psObstacleArg = (Obstacle_TypeDef*) 0UL;
    }
}
