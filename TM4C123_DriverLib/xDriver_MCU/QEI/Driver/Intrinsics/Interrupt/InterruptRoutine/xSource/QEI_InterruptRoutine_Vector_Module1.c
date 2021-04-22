/**
 *
 * @file QEI_InterruptRoutine_Vector_Module1.c
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/QEI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/QEI_InterruptRoutine_Vector_Module1.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/QEI_InterruptRoutine_Source.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI1__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;

    u32Reg = (uint32_t) QEI1_ISC_R;

    if((uint32_t) QEI_enINT_SOURCE_INDEX & u32Reg)
    {
        QEI1_ISC_R = (uint32_t) QEI_enINT_SOURCE_INDEX;
        QEI__vIRQSourceHandler[(uint32_t) QEI_enMODULE_1][(uint32_t) QEI_enINTERRUPT_INDEX]();
    }
    if((uint32_t) QEI_enINT_SOURCE_TIMER & u32Reg)
    {
        QEI__vIRQSourceHandler[(uint32_t) QEI_enMODULE_1][(uint32_t) QEI_enINTERRUPT_TIMER]();
        QEI1_ISC_R = (uint32_t) QEI_enINT_SOURCE_TIMER;
    }
    if((uint32_t) QEI_enINT_SOURCE_DIRECTION & u32Reg)
    {
        QEI__vIRQSourceHandler[(uint32_t) QEI_enMODULE_1][(uint32_t) QEI_enINTERRUPT_DIRECTION]();
    }
    if((uint32_t) QEI_enINT_SOURCE_ERROR & u32Reg)
    {
        QEI__vIRQSourceHandler[(uint32_t) QEI_enMODULE_1][(uint32_t) QEI_enINTERRUPT_ERROR]();
    }
}




