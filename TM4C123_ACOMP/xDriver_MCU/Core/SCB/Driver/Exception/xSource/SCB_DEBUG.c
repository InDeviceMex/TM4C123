/**
 *
 * @file SCB_DEBUG.c
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
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_DEBUG.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

void SCB_DEBUG__vSetPriority(SCB_nSHPR enDEBUGPriority)
{
    SCB_vBarrier();
    MCU__vWriteRegister( SCB_BASE, SCB_SHPR3_OFFSET, (uint32_t) enDEBUGPriority, SCB_SHPR3_DEBUG_MASK, SCB_SHPR3_R_DEBUG_BIT);
    SCB_vBarrier();
}

SCB_nSHPR SCB_DEBUG__enGetPriority(void)
{
    SCB_nSHPR enReturn = SCB_enSHPR0;
    uint32_t u32Reg = 0UL;

    u32Reg = MCU__u32ReadRegister( SCB_BASE, SCB_SHPR3_OFFSET, SCB_SHPR3_DEBUG_MASK, SCB_SHPR3_R_DEBUG_BIT);
    enReturn = (SCB_nSHPR) u32Reg;

    return enReturn;
}
