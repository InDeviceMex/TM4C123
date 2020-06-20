/**
 *
 * @file SCB_WakeUp.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_WakeUp.h>



SCB_nSTATUS SCB__enSetWakeUpSource(SCB_nWAKEUPSOURCE enSource)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    switch(enSource)
    {
        case SCB_enWAKEUP_ONLY:
            SCB_SCR_R &=~SCB_SCR_R_SEVONPEND_MASK;
            enReturn=SCB_enOK;
            break;
        case SCB_enWAKEUP_ALL:
            SCB_SCR_R |=SCB_SCR_R_SEVONPEND_MASK;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }
    return enReturn;
}
SCB_nWAKEUPSOURCE SCB__enGetWakeUpSource(void)
{
    SCB_nWAKEUPSOURCE enReturn=SCB_enWAKEUP_ERROR;
    uint32_t u32Reg=SCB_SCR_R;
    u32Reg&=SCB_SCR_R_SEVONPEND_MASK;
    u32Reg>>=SCB_SCR_R_SEVONPEND_BIT;
    enReturn=(SCB_nWAKEUPSOURCE)u32Reg;
    return enReturn;
}

