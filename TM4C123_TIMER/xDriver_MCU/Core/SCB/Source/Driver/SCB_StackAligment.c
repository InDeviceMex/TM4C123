/**
 *
 * @file SCB_StackAligment.c
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

#include <xDriver_MCU/Core/SCB/Header/Driver/SCB_StackAligment.h>

#include <stdint.h>
#include <xDriver_MCU/Core/SCB/Header/Peripheral/SCB_Peripheral.h>

SCB_nSTATUS SCB__enSetStackAligment(SCB_nAlignment enAlign)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    switch(enAlign)
    {
        case SCB_enALIGN_4BYTE:
            SCB_CCR_R&=~SCB_CCR_R_STKALIGN_MASK;
            enReturn=SCB_enOK;
            break;
        case SCB_enALIGN_8BYTE:
            SCB_CCR_R|=SCB_CCR_R_STKALIGN_MASK;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }

    return enReturn;
}
SCB_nAlignment SCB__enGetStackAligment(void)
{
    SCB_nAlignment enReturn=SCB_enALIGN_ERROR;
    uint32_t u32Reg=SCB_CCR_R;
    u32Reg&=SCB_CCR_R_STKALIGN_MASK;
    u32Reg>>=SCB_CCR_R_STKALIGN_BIT;
    enReturn=(SCB_nAlignment)u32Reg;
    return enReturn;
}


