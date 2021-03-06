/**
 *
 * @file Player_Constructor.c
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
#include <xApplication/GameShip/Player/xHeader/Player_Constructor.h>
#include <stdlib.h>

Player_TypeDef* Player__psConstructor(uint32_t u32XPosArg, uint32_t u32YPosArg, uint32_t u32LifesArg, uint32_t u32SubLifesArg)
{
    Player_TypeDef* PlayerHandle = 0UL;

    #if defined (__TI_ARM__ )
    PlayerHandle = (Player_TypeDef*) memalign( (size_t) 4, (size_t) (sizeof(Player_TypeDef)));
    #elif defined (__GNUC__ )
    PlayerHandle = (Player_TypeDef*) malloc( (size_t) sizeof(Player_TypeDef));
    #endif

    if(0UL != (uint32_t) PlayerHandle)
    {
        PlayerHandle->u32Xpos = u32XPosArg;
        PlayerHandle->u32Ypos = u32YPosArg;
        PlayerHandle->u32WidthPlayer = 5UL;
        PlayerHandle->u32HeightPlayer = 3UL;
        PlayerHandle->u32SubLifesTotal = u32SubLifesArg;
        PlayerHandle->u32SubLifesCurrent = u32SubLifesArg;
        PlayerHandle->u32LifesTotal = u32LifesArg;
        PlayerHandle->u32LifesCurrent = u32LifesArg;
    }
    return PlayerHandle;
}

void Player__vDestructor(void* pvPlayerArg)
{
    Player_TypeDef* psPlayerArg = (Player_TypeDef*) pvPlayerArg;
    if(0UL != (uint32_t) psPlayerArg)
    {
        psPlayerArg->u32Xpos = 0UL;
        psPlayerArg->u32Ypos = 0UL;
        psPlayerArg->u32WidthPlayer = 0UL;
        psPlayerArg->u32HeightPlayer = 0UL;
        psPlayerArg->u32SubLifesTotal = 0UL;
        psPlayerArg->u32SubLifesCurrent = 0UL;
        psPlayerArg->u32LifesTotal = 0UL;
        psPlayerArg->u32LifesCurrent = 0UL;
        free(psPlayerArg);
        psPlayerArg = (Player_TypeDef*) 0UL;
    }
}
