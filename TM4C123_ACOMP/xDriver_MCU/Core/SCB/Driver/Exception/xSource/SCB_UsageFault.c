/**
 *
 * @file SCB_UsageFault.c
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
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_UsageFault.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

inline void SCB_UsageFault__vSetPriority(SCB_nSHPR enUsageFaultPriority)
{
    SCB_vBarrier();
    MCU__vWriteRegister(SCB_BASE, SCB_SHPR1_OFFSET, (uint32_t)enUsageFaultPriority, SCB_SHPR1_USAGE_MASK, SCB_SHPR1_R_USAGE_BIT);
    SCB_vBarrier();
}

SCB_nSHPR SCB_UsageFault__enGetPriority(void)
{
    SCB_nSHPR enReturn= SCB_enSHPR0;
    uint32_t u32Reg= 0UL;

    u32Reg = MCU__u32ReadRegister(SCB_BASE, SCB_SHPR1_OFFSET, SCB_SHPR1_USAGE_MASK, SCB_SHPR1_R_USAGE_BIT);
    enReturn=(SCB_nSHPR)(u32Reg);

    return enReturn;
}

inline void SCB_UsageFault__vEnable(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_USGFAULTENA_EN, SCB_SHCSR_USGFAULTENA_MASK, SCB_SHCSR_R_USGFAULTENA_BIT);
}
inline void SCB_UsageFault__vDisable(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_USGFAULTENA_DIS, SCB_SHCSR_USGFAULTENA_MASK, SCB_SHCSR_R_USGFAULTENA_BIT);
}

inline void SCB_UsageFault__vSetPending(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_USGFAULTPENDED_PEND, SCB_SHCSR_USGFAULTPENDED_MASK, SCB_SHCSR_R_USGFAULTPENDED_BIT);
}

inline void SCB_UsageFault__vClearPending(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_USGFAULTPENDED_NOPEND, SCB_SHCSR_USGFAULTPENDED_MASK, SCB_SHCSR_R_USGFAULTPENDED_BIT);
}

SCB_nPENDSTATE SCB_UsageFault__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= 0UL;

    u32Reg = MCU__u32ReadRegister(SCB_BASE, SCB_SHCSR_OFFSET, SCB_SHCSR_USGFAULTPENDED_MASK, SCB_SHCSR_R_USGFAULTPENDED_BIT);
    enReturn=(SCB_nPENDSTATE)(u32Reg);

    return enReturn;
}
