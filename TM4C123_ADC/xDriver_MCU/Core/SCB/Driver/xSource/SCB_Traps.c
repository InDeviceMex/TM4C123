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

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>


inline void SCB__vEnDIV0Trap(void)
{
    SCB_CCR_R|=SCB_CCR_R_DIV_0_TRP_MASK;
}
inline void SCB__vDisDIV0Trap(void)
{
    SCB_CCR_R&=~SCB_CCR_R_DIV_0_TRP_MASK;
}
inline void SCB__vEnUnAlignTrap(void)
{
    SCB_CCR_R|=SCB_CCR_R_UNALIGN_TRP_MASK;
}
inline void SCB__vDisUnAlignTrap(void)
{
    SCB_CCR_R&=~SCB_CCR_R_UNALIGN_TRP_MASK;
}
inline void SCB__vEnUnprivilegedSWTRIGGER(void)
{
    SCB_CCR_R|=SCB_CCR_R_USERSETMPEND_MASK;
}
inline void SCB__vDisUnprivilegedSWTRIGGER(void)
{
    SCB_CCR_R&=~SCB_CCR_R_USERSETMPEND_MASK;
}


inline void SCB__vEnableTraps(void)
{
    SCB__vEnDIV0Trap();
    SCB__vEnUnAlignTrap();
    SCB__vEnUnprivilegedSWTRIGGER();
}
