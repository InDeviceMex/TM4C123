/**
 *
 * @file QEI_InterruptRegisterIRQVector.c
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
#include <xDriver_MCU/QEI/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/QEI_InterruptRegisterIRQVector.h>

#include <xDriver_MCU/Common/xHeader/MCU_CheckParams.h>
#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Dependencies.h>
#include <xDriver_MCU/QEI/Driver/Intrinsics/Interrupt/InterruptRoutine/QEI_InterruptRoutine.h>

void QEI__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),QEI_nMODULE enModule)
{
    SCB_nVECISR enVector = SCB_enVECISR_QEI0;
    uint32_t u32Module = 0UL;
    const SCB_nVECISR SCB_enVECISR_QEI[(uint32_t) QEI_enMODULE_MAX]=
    {
        SCB_enVECISR_QEI0, SCB_enVECISR_QEI1
    };

    if(0UL != (uint32_t) pfIrqVectorHandler)
    {
        u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) QEI_enMODULE_MAX);
        enVector = SCB_enVECISR_QEI[u32Module];
        SCB__vRegisterIRQVectorHandler(pfIrqVectorHandler, &QEI__pvIRQVectorHandler[u32Module], enVector);
    }
}



