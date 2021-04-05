/**
 *
 * @file Player_Draw.c
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
#include <xApplication/GameShip/Player/xHeader/Player_Draw.h>
#include <xApplication/GameShip/Frame/Frame.h>

#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>

#include <xUtils/Conversion/Conversion_String/Conversion_String.h>

void Player__vDraw(const Player_TypeDef* psPlayerArg)
{
    GraphTerm__u32Printf(UART_enMODULE_0, psPlayerArg->u32Xpos, psPlayerArg->u32Ypos,            "  A  ");
    GraphTerm__u32Printf(UART_enMODULE_0, psPlayerArg->u32Xpos, psPlayerArg->u32Ypos + 1UL, " (x) ");
    GraphTerm__u32Printf(UART_enMODULE_0, psPlayerArg->u32Xpos, psPlayerArg->u32Ypos + 2UL, "AT TA");
}

void Player__vDrawLifes(const Player_TypeDef* psPlayerArg)
{
    uint32_t u32Pos = 0UL;
    uint32_t u32LenghtReg = 0UL;
    uint32_t u32Lenght1Reg = 0UL;
    u32LenghtReg = CONV_u32StringLength("SubLifes: ", 30UL);
    u32Lenght1Reg = CONV_u32StringLength("Life: ", 30UL);
    GraphTerm__u32Printf(UART_enMODULE_0, FRAME_COLUMN_MAX - u32LenghtReg - psPlayerArg->u32SubLifesTotal - u32Lenght1Reg - 3UL - 6UL, FRAME_ROW_INIT - 1UL,"Life: %3u", psPlayerArg->u32LifesCurrent);
    GraphTerm__u32Printf(UART_enMODULE_0, FRAME_COLUMN_MAX - u32LenghtReg - psPlayerArg->u32SubLifesTotal - 2UL, FRAME_ROW_INIT - 1UL,"SubLifes: ");
    for(u32Pos = 0UL; u32Pos < psPlayerArg->u32SubLifesTotal; u32Pos++)
    {
        GraphTerm__u32Printf(UART_enMODULE_0, (FRAME_COLUMN_MAX - psPlayerArg->u32SubLifesTotal - 2UL) + u32Pos , FRAME_ROW_INIT - 1UL," ");
    }
    for(u32Pos = 0UL; u32Pos < psPlayerArg->u32SubLifesCurrent; u32Pos++)
    {
        GraphTerm__u32Printf(UART_enMODULE_0, (FRAME_COLUMN_MAX - psPlayerArg->u32SubLifesTotal - 2UL) + u32Pos , FRAME_ROW_INIT - 1UL,"*");
    }
}
