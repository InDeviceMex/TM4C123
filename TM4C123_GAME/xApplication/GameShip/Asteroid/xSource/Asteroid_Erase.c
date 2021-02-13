/**
 *
 * @file Asteroid_Erase.c
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
#include <xApplication/GameShip/Asteroid/xHeader/Asteroid_Erase.h>

#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>

void Asteroid__vErase(const Asteroid_TypeDef* psAsteroidArg)
{
    GraphTerm__u32Printf(UART_enMODULE_0, psAsteroidArg->u32Xpos, psAsteroidArg->u32Ypos, " ");
}
