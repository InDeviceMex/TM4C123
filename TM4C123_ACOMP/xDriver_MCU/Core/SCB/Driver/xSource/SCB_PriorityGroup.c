/**
 *
 * @file SCB_PriorityGroup.c
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
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_PriorityGroup.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

SCB_nSTATUS SCB__enSetPriorityGroup(SCB_nPRIGROUP enGroup)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    uint32_t u32Reg=SCB_AIRCR_R_VECTKEY_WRITE;
    u32Reg |= (uint32_t)enGroup << SCB_AIRCR_R_PRIGROUP_BIT;
    if((uint32_t) SCB_enPRIGROUP_MAX >= (uint32_t)enGroup)
    {
        enReturn=SCB_enOK;
        SCB_vBarrier();
        MCU__vWriteRegister(SCB_BASE, SCB_AIRCR_OFFSET, u32Reg, (SCB_AIRCR_R_VECTKEY_MASK|SCB_AIRCR_R_PRIGROUP_MASK), 0UL);
        SCB_vBarrier();
    }
    return enReturn;
}

SCB_nPRIGROUP SCB__enGetPriorityGroup(void)
{
    SCB_nPRIGROUP enReturn=SCB_enPRIGROUP_ERROR;
    uint32_t u32Reg= 0UL;

    u32Reg = MCU__u32ReadRegister(SCB_BASE, SCB_AIRCR_OFFSET, SCB_AIRCR_PRIGROUP_MASK, SCB_AIRCR_R_PRIGROUP_BIT);
    enReturn=(SCB_nPRIGROUP)(u32Reg);

    return enReturn;
}



