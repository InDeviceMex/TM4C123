/**
 *
 * @file SCB_MemoryFault.c
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
#include <xDriver_MCU/Core/SCB/Header/Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Core/SCB/Header/Driver/Exception/SCB_MemoryFault.h>

#define SCB_vBarrier() {__asm(" DSB");}

inline void SCB_MemoryFault__vSetPriority(SCB_nSHPR enPriority)
{
    uint32_t u32Reg=SCB_SHPR1_R;
    uint32_t u32RegAux=0;

    u32Reg&=~SCB_SHPR1_R_MEM_MASK;
    u32RegAux = ((uint32_t)enPriority &SCB_SHPR1_MEM_MASK);
    u32RegAux <<=SCB_SHPR1_R_MEM_BIT;
    u32Reg|=u32RegAux;
    SCB_vBarrier();
    SCB_SHPR1_R=u32Reg;
    SCB_vBarrier();
}
SCB_nSHPR SCB_MemoryFault__enGetPriority(void)
{
    SCB_nSHPR enReturn= SCB_enSHPR0;
    uint32_t u32Reg=SCB_SHPR1_R;
    u32Reg&=SCB_SHPR1_R_MEM_MASK;
    u32Reg>>=SCB_SHPR1_R_MEM_BIT;
    enReturn=(SCB_nSHPR)(u32Reg);
    return enReturn;
}

inline void SCB_MemoryFault__vEnable(void)
{
    SCB_SHCSR_R|=SCB_SHCSR_R_MEMFAULTENA_MASK;
}
inline void SCB_MemoryFault__vDisable(void)
{
    SCB_SHCSR_R&=~SCB_SHCSR_R_MEMFAULTENA_MASK;
}


inline void SCB_MemoryFault__vSetPending(void)
{
    SCB_SHCSR_R|=SCB_SHCSR_R_MEMFAULTPENDED_MASK;
}
inline void SCB_MemoryFault__vClearPending(void)
{
    SCB_SHCSR_R&=~SCB_SHCSR_R_MEMFAULTPENDED_MASK;
}
SCB_nPENDSTATE SCB_MemoryFault__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_SHCSR_R;
    u32Reg&=SCB_SHCSR_R_MEMFAULTPENDED_MASK;
    u32Reg>>=SCB_SHCSR_R_MEMFAULTPENDED_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}


inline uint32_t SCB_MemoryFault_u32GetAddress(void)
{
    return SCB_MMFAR_R;
}
