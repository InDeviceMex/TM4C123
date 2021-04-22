/**
 *
 * @file ACMP_InterruptRoutine_Vector_Module0_COMP1.c
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
 * @verbatim Apr 1, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 1, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/xHeader/ACMP_InterruptRoutine_Vector_Module0_COMP1.h>

#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ACMP_InterruptRoutine_Source.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

void ACMP0_Comp1__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;

    u32Reg = ACMP0_MIS_R;
    if((uint32_t) ACMP_enCOMPMASK_1 & u32Reg)
    {
        ACMP0_MIS_R = (uint32_t) ACMP_enCOMPMASK_1;
        ACMP__vIRQSourceHandler[(uint32_t) ACMP_enMODULE_0][(uint32_t) ACMP_enCOMP_1]();
    }
}




