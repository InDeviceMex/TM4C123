/**
 *
 * @file Player_Destroy.c
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
#include <xApplication/GameShip/Player/xHeader/Player_Destroy.h>
#include <xApplication/GameShip/Player/xHeader/Player_Draw.h>
#include <xApplication/GameShip/Player/xHeader/Player_Erase.h>
#include <xApplication/GameShip/Frame/Frame.h>

#include <xDriver_MCU/Core/SYSTICK/SYSTICK.h>
#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>

#include <xUtils/Conversion/Conversion_String/Conversion_String.h>

uint32_t Player__u32Destroy(Player_TypeDef* pstPlayerArg)
{
    uint32_t u32GameOver = 0UL;
    if(0UL == pstPlayerArg->u32SubLifesCurrent)
    {
        Player__vErase(pstPlayerArg);
        GraphTerm__u32Printf(UART_enMODULE_0, pstPlayerArg->u32Xpos, pstPlayerArg->u32Ypos,            "  *  ");
        GraphTerm__u32Printf(UART_enMODULE_0, pstPlayerArg->u32Xpos, pstPlayerArg->u32Ypos + 1UL, " *** ");
        GraphTerm__u32Printf(UART_enMODULE_0, pstPlayerArg->u32Xpos, pstPlayerArg->u32Ypos + 2UL, "  *  ");
        SysTick__vDelayUs(200000.0f);

        Player__vErase(pstPlayerArg);
        GraphTerm__u32Printf(UART_enMODULE_0, pstPlayerArg->u32Xpos, pstPlayerArg->u32Ypos,            "* * *");
        GraphTerm__u32Printf(UART_enMODULE_0, pstPlayerArg->u32Xpos, pstPlayerArg->u32Ypos + 1UL, " *** ");
        GraphTerm__u32Printf(UART_enMODULE_0, pstPlayerArg->u32Xpos, pstPlayerArg->u32Ypos + 2UL, "* * *");
        SysTick__vDelayUs(200000.0f);
        if(0UL != pstPlayerArg->u32LifesCurrent)
        {
        pstPlayerArg->u32LifesCurrent--;
        pstPlayerArg->u32SubLifesCurrent = pstPlayerArg->u32SubLifesTotal;
        Player__vDrawLifes(pstPlayerArg);
        Player__vDraw(pstPlayerArg);
        }
        else
        {
            u32GameOver = 1UL;
        }
    }
    return u32GameOver;
}



