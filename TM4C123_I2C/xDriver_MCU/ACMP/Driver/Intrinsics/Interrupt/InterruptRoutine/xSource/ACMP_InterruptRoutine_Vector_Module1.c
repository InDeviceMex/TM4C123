/**
 *
 * @file ACMP_InterruptRoutine_Vector_Module1.c
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
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ACMP_InterruptRoutine_Vector_Module1.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ACMP_InterruptRoutine_Source.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

void ACMP1__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;

    u32Reg = ACMP_ACMIS_R;
    if((uint32_t) ACMP_enMODULEMASK_1 & u32Reg)
    {
        ACMP_ACMIS_R = (uint32_t) ACMP_enMODULEMASK_1;
        ACMP__vIRQSourceHandler[(uint32_t) ACMP_enMODULE_1]();
    }
}


