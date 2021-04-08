/**
 *
 * @file SCB_Traps.c
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
#include <xDriver_MCU/Core/SCB/Driver/xHeader/SCB_Traps.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

inline void SCB__vEnDIV0Trap(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_CCR_OFFSET, SCB_CCR_DIV_0_TRP_TRAP, SCB_CCR_DIV_0_TRP_MASK, SCB_CCR_R_DIV_0_TRP_BIT);
}
inline void SCB__vDisDIV0Trap(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_CCR_OFFSET, SCB_CCR_DIV_0_TRP_NOTRAP, SCB_CCR_DIV_0_TRP_MASK, SCB_CCR_R_DIV_0_TRP_BIT);
}
inline void SCB__vEnUnAlignTrap(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_CCR_OFFSET, SCB_CCR_UNALIGN_TRP_TRAP, SCB_CCR_UNALIGN_TRP_MASK, SCB_CCR_R_UNALIGN_TRP_BIT);
}
inline void SCB__vDisUnAlignTrap(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_CCR_OFFSET, SCB_CCR_UNALIGN_TRP_NOTRAP, SCB_CCR_UNALIGN_TRP_MASK, SCB_CCR_R_UNALIGN_TRP_BIT);
}
inline void SCB__vEnUnprivilegedSWTRIGGER(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_CCR_OFFSET, SCB_CCR_USERSETMPEND_EN, SCB_CCR_USERSETMPEND_MASK, SCB_CCR_R_USERSETMPEND_BIT);
}
inline void SCB__vDisUnprivilegedSWTRIGGER(void)
{
    MCU__vWriteRegister(SCB_BASE, SCB_CCR_OFFSET, SCB_CCR_USERSETMPEND_DIS, SCB_CCR_USERSETMPEND_MASK, SCB_CCR_R_USERSETMPEND_BIT);
}

inline void SCB__vEnableTraps(void)
{
    SCB__vEnDIV0Trap();
    SCB__vEnUnAlignTrap();
    SCB__vEnUnprivilegedSWTRIGGER();
}
