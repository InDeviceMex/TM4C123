/**
 *
 * @file SCB_SysTick.c
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
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_SysTick.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

inline void SCB_SysTick__vSetPriority(SCB_nSHPR enSysTickPriority)
{
    SCB_vBarrier();
    MCU__vWriteRegister(SCB_BASE, SCB_SHPR3_OFFSET, (uint32_t) enSysTickPriority, SCB_SHPR3_SYSTICK_MASK, SCB_SHPR3_R_SYSTICK_BIT);
    SCB_vBarrier();
}

SCB_nSHPR SCB_SysTick__enGetPriority(void)
{
    SCB_nSHPR enReturn = SCB_enSHPR0;
    uint32_t u32Reg = 0UL;

    u32Reg = MCU__u32ReadRegister(SCB_BASE, SCB_SHPR3_OFFSET, SCB_SHPR3_SYSTICK_MASK, SCB_SHPR3_R_SYSTICK_BIT);
    enReturn = (SCB_nSHPR) u32Reg;

    return enReturn;

}

inline void SCB_SysTick__vSetPending(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_ICSR_OFFSET, SCB_ICSR_PENDSTSET_SET, SCB_ICSR_PENDSTSET_MASK, SCB_ICSR_R_PENDSTSET_BIT);
}

inline void SCB_SysTick__vClearPending(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_ICSR_OFFSET, SCB_ICSR_PENDSTCLR_REMOVE, SCB_ICSR_PENDSTCLR_MASK, SCB_ICSR_R_PENDSTCLR_BIT);
}

SCB_nPENDSTATE SCB_SysTick__enGetPending(void)
{
    SCB_nPENDSTATE enReturn = SCB_enNOPENDING;
    uint32_t u32Reg = 0UL;

    u32Reg = MCU__u32ReadRegister(SCB_BASE, SCB_ICSR_OFFSET, SCB_ICSR_PENDSTSET_MASK, SCB_ICSR_R_PENDSTSET_BIT);
    enReturn = (SCB_nPENDSTATE) u32Reg;

    return enReturn;
}
