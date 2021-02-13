/**
 *
 * @file Ship_Destroy.c
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
#include <xApplication/GameShip/Ship/xHeader/Ship_Destroy.h>
#include <xApplication/GameShip/Frame/Frame.h>

#include <xApplication/GameShip/Ship/xHeader/Ship_Draw.h>
#include <xApplication/GameShip/Ship/xHeader/Ship_Erase.h>
#include <xDriver_MCU/Core/SYSTICK/SYSTICK.h>
#include <xDriver_MCU/UART/App/GraphicTerminal/GraphicTerminal.h>

#include <xUtils/Conversion/Conversion_String/Conversion_String.h>

uint32_t Ship__u32Destroy(Ship_TypeDef* psShipArg)
{
    uint32_t u32GameOver = 0UL;
    if(0UL == psShipArg->u32SubLifesCurrent)
    {
        Ship__vErase(psShipArg);
        GraphTerm__u32Printf(UART_enMODULE_0, psShipArg->u32Xpos, psShipArg->u32Ypos,            "  *  ");
        GraphTerm__u32Printf(UART_enMODULE_0, psShipArg->u32Xpos, psShipArg->u32Ypos + 1UL, " *** ");
        GraphTerm__u32Printf(UART_enMODULE_0, psShipArg->u32Xpos, psShipArg->u32Ypos + 2UL, "  *  ");
        SysTick__vDelayUs(200000.0f);

        Ship__vErase(psShipArg);
        GraphTerm__u32Printf(UART_enMODULE_0, psShipArg->u32Xpos, psShipArg->u32Ypos,            "* * *");
        GraphTerm__u32Printf(UART_enMODULE_0, psShipArg->u32Xpos, psShipArg->u32Ypos + 1UL, " *** ");
        GraphTerm__u32Printf(UART_enMODULE_0, psShipArg->u32Xpos, psShipArg->u32Ypos + 2UL, "* * *");
        SysTick__vDelayUs(200000.0f);
        if(0UL != psShipArg->u32LifesCurrent)
        {
        psShipArg->u32LifesCurrent--;
        psShipArg->u32SubLifesCurrent = psShipArg->u32SubLifesTotal;
        Ship__vDrawLifes(psShipArg);
        Ship__vDraw(psShipArg);
        }
        else
        {
            u32GameOver = 1UL;
        }
    }
    return u32GameOver;
}



