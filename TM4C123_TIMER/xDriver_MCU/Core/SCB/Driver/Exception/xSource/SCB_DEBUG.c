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

#include <stdint.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_DEBUG.h>

#define SCB_vBarrier() {__asm(" DSB");}
void SCB_DEBUG__vSetPriority(SCB_nSHPR enPriority)
{
    uint32_t u32Reg=SCB_SHPR3_R;
    uint32_t u32RegAux=0;

    u32Reg&=~SCB_SHPR3_R_DEBUG_MASK;
    u32RegAux =((uint32_t)enPriority &SCB_SHPR3_DEBUG_MASK);
    u32RegAux<<= SCB_SHPR3_R_DEBUG_BIT;
    u32Reg|=u32RegAux;
    SCB_vBarrier();
    SCB_SHPR3_R=u32Reg;
    SCB_vBarrier();
}

SCB_nSHPR SCB_DEBUG__enGetPriority(void)
{
    SCB_nSHPR enReturn= SCB_enSHPR0;
    uint32_t u32Reg=SCB_SHPR3_R;
    u32Reg&=SCB_SHPR3_R_DEBUG_MASK;
    u32Reg>>=SCB_SHPR3_R_DEBUG_BIT;
    enReturn=(SCB_nSHPR)(u32Reg);
    return enReturn;
}
