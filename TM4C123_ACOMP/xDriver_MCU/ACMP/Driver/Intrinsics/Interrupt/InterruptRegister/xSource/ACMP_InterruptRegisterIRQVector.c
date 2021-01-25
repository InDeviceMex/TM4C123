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
#include <ACMP/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/ACMP_InterruptRegisterIRQVector.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Dependencies.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/ACMP_InterruptRoutine.h>

const SCB_nVECISR SCB_enVECISR_ACMP[(uint32_t)ACMP_enMODULE_MAX+ 1U]=
{
    SCB_enVECISR_ACOMP0,SCB_enVECISR_ACOMP1
};
void ACMP__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),ACMP_nMODULE enModule)
{
    SCB_nVECISR enVector=SCB_enVECISR_ACOMP0;
    uint32_t u32IrqVectorHandler=0U;
    uint32_t u32Module=(uint32_t)enModule;
    if(0u != (uint32_t)pfIrqVectorHandler)
    {
        if(u32Module>(uint32_t)ACMP_enMODULE_MAX)
        {
            u32Module=(uint32_t)ACMP_enMODULE_MAX;
        }
        enVector=SCB_enVECISR_ACMP[u32Module];
        u32IrqVectorHandler=((uint32_t)pfIrqVectorHandler|(uint32_t)1U);
        ACMP__pvIRQVectorHandler[u32Module]=(void (*) (void))u32IrqVectorHandler;
        SCB__vRegisterIRQVectorHandler(ACMP__pvIRQVectorHandler[u32Module],enVector);
    }
}


