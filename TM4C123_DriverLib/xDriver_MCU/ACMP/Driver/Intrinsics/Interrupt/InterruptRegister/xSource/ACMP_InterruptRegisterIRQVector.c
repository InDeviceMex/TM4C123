/**
 *
 * @file ACMP_InterruptRegisterIRQVector.c
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
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/ACMP_InterruptRegisterIRQVector.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Dependencies.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/ACMP_InterruptRoutine.h>

void ACMP__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg)
{
    SCB_nVECISR enVector = SCB_enVECISR_ACMP0;
    uint32_t u32Module = 0UL;
    uint32_t u32Comparator = 0UL;

    const SCB_nVECISR SCB_enVECISR_ACMP[(uint32_t) ACMP_enMODULE_MAX][(uint32_t) ACMP_enCOMP_MAX]=
    {
        {SCB_enVECISR_ACMP0, SCB_enVECISR_ACMP1},
    };

    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ACMP_enMODULE_MAX);
        u32Comparator = MCU__u32CheckParams((uint32_t) enComparatorArg, (uint32_t) ACMP_enCOMP_MAX);
        enVector = SCB_enVECISR_ACMP[u32Module][u32Comparator];
        SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler, &ACMP__pvIRQVectorHandler[u32Module][u32Comparator], enVector);
    }
}

