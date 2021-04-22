/**
 *
 * @file HIB_InterruptRoutine_Vector.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/HIB/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/HIB_InterruptRoutine_Vector.h>

#include <xDriver_MCU/HIB/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/HIB_InterruptRoutine_Source.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/Primitives/HIB_Primitives.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>

void HIB__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;

    u32Reg = HIB_MIS_R;
    if((uint32_t) HIB_enINT_RTCALT & u32Reg)
    {
        HIB__enWait();
        HIB_IC_R = (uint32_t) HIB_enINT_RTCALT;
        HIB__vIRQSourceHandler[(uint32_t) HIB_enINTERRUPT_RTCALT]();
    }
    if((uint32_t) HIB_enINT_LOWBAT & u32Reg)
    {
        HIB__enWait();
        HIB_IC_R = (uint32_t) HIB_enINT_LOWBAT;
        HIB__vIRQSourceHandler[(uint32_t) HIB_enINTERRUPT_LOWBAT]();
    }
    if((uint32_t) HIB_enINT_EXTW & u32Reg)
    {
        HIB__enWait();
        HIB_IC_R = (uint32_t) HIB_enINT_EXTW;
        HIB__vIRQSourceHandler[(uint32_t) HIB_enINTERRUPT_EXTW]();
    }
    if((uint32_t) HIB_enINT_WC & u32Reg)
    {
        HIB__enWait();
        HIB_IC_R = (uint32_t) HIB_enINT_WC;
        HIB__vIRQSourceHandler[(uint32_t) HIB_enINTERRUPT_WC]();
    }
}
