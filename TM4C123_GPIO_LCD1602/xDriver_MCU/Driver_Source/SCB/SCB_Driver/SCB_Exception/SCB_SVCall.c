/**
 *
 * @file SCB_SVCall.c
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

#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_Exception/SCB_SVCall.h>


inline void SCB_SVCall__vSetPriority(SCB_nSHPR enPriority)
{
    uint32_t u32Reg=SCB_SHPR2_R;
    uint32_t u32RegAux=0;

    u32Reg&=~SCB_SHPR2_R_SVCALL_MASK;
    u32RegAux = ((uint32_t)enPriority &SCB_SHPR2_SVCALL_MASK);
    u32RegAux<<=SCB_SHPR2_R_SVCALL_BIT;
    u32Reg|=u32RegAux;
    SCB_vBarrier();
    SCB_SHPR2_R=u32Reg;
    SCB_vBarrier();
}
SCB_nSHPR SCB_SVCall__enGetPriority(void)
{
    SCB_nSHPR enReturn= SCB_enSHPR0;
    uint32_t u32Reg=SCB_SHPR2_R;
    u32Reg&=SCB_SHPR2_R_SVCALL_MASK;
    u32Reg>>=SCB_SHPR2_R_SVCALL_BIT;
    enReturn=(SCB_nSHPR)(u32Reg);
    return enReturn;
}


inline void SCB_SVCall__vSetPending(void)
{
    SCB_SHCSR_R|=SCB_SHCSR_R_SVCALLPENDED_MASK;
}
inline void SCB_SVCall__vClearPending(void)
{
    SCB_SHCSR_R&=~SCB_SHCSR_R_SVCALLPENDED_MASK;
}
SCB_nPENDSTATE SCB_SVCall__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_SHCSR_R;
    u32Reg&=SCB_SHCSR_R_SVCALLPENDED_MASK;
    u32Reg>>=SCB_SHCSR_R_SVCALLPENDED_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}
