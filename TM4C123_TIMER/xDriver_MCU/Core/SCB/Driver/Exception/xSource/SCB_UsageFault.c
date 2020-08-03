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

#include <stdint.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_UsageFault.h>

#define SCB_vBarrier() {__asm(" DSB");}

inline void SCB_UsageFault__vSetPriority(SCB_nSHPR enPriority)
{
    uint32_t u32Reg=SCB_SHPR1_R;
    uint32_t u32RegAux=0;

    u32Reg&=~SCB_SHPR1_R_USAGE_MASK;
    u32RegAux = ((uint32_t)enPriority &SCB_SHPR1_USAGE_MASK);
    u32RegAux<<=SCB_SHPR1_R_USAGE_BIT;
    u32Reg|=u32RegAux;
    SCB_vBarrier();
    SCB_SHPR1_R=u32Reg;
    SCB_vBarrier();
}
SCB_nSHPR SCB_UsageFault__enGetPriority(void)
{
    SCB_nSHPR enReturn= SCB_enSHPR0;
    uint32_t u32Reg=SCB_SHPR1_R;
    u32Reg&=SCB_SHPR1_R_USAGE_MASK;
    u32Reg>>=SCB_SHPR1_R_USAGE_BIT;
    enReturn=(SCB_nSHPR)(u32Reg);
    return enReturn;
}




inline void SCB_UsageFault__vEnable(void)
{
    SCB_SHCSR_R|=SCB_SHCSR_R_USGFAULTENA_MASK;
}
inline void SCB_UsageFault__vDisable(void)
{
    SCB_SHCSR_R&=~SCB_SHCSR_R_USGFAULTENA_MASK;
}


inline void SCB_UsageFault__vSetPending(void)
{
    SCB_SHCSR_R|=SCB_SHCSR_R_USGFAULTPENDED_MASK;
}
inline void SCB_UsageFault__vClearPending(void)
{
    SCB_SHCSR_R&=~SCB_SHCSR_R_USGFAULTPENDED_MASK;
}
SCB_nPENDSTATE SCB_UsageFault__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_SHCSR_R;
    u32Reg&=SCB_SHCSR_R_USGFAULTPENDED_MASK;
    u32Reg>>=SCB_SHCSR_R_USGFAULTPENDED_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}
