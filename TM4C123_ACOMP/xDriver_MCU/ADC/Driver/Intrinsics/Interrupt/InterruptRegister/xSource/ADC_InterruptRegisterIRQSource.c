/**
 *
 * @file ADC_InterruptRegisterIRQSource.c
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
 * @verbatim 19 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/ADC_InterruptRegisterIRQSource.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ADC_InterruptRoutine_Source.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
void ADC_Sample__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),ADC_nMODULE enModule, ADC_nSEQUENCER enSequence)
{
    uint32_t u32IrqSourceHandler = 0U;
    uint32_t u32Module = (uint32_t) enModule;
    uint32_t u32Sequencer = (uint32_t) enSequence;
    if((uint32_t) pfIrqSourceHandler != 0U)
    {
        if(u32Module>(uint32_t) ADC_enMODULE_MAX)
        {
            u32Module = (uint32_t) ADC_enMODULE_MAX;
        }
        if(u32Sequencer>(uint32_t) ADC_enSEQ_MAX)
        {
            u32Sequencer = (uint32_t) ADC_enSEQ_MAX;
        }
        u32IrqSourceHandler = ((uint32_t) pfIrqSourceHandler | (uint32_t) 1U);
        ADC_SAMPLE__vIRQSourceHandler[u32Module][u32Sequencer] =(void (*) (void))u32IrqSourceHandler;
    }
}

void ADC_Comp__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void),ADC_nMODULE enModule, ADC_nSEQUENCER enSequence, ADC_nCOMPARATOR enSeqComparator)
{
    uint32_t u32IrqSourceHandler = 0U;
    uint32_t u32Module = (uint32_t) enModule;
    uint32_t u32Sequencer = (uint32_t) enSequence;
    uint32_t u32Comparator = (uint32_t) enSeqComparator;
    if((uint32_t) pfIrqSourceHandler != 0U)
    {
        if(u32Module>(uint32_t) ADC_enMODULE_MAX)
        {
            u32Module = (uint32_t) ADC_enMODULE_MAX;
        }
        if(u32Sequencer>(uint32_t) ADC_enSEQ_MAX)
        {
            u32Sequencer = (uint32_t) ADC_enSEQ_MAX;
        }
        if(u32Comparator>(uint32_t) ADC_en_COMPARATOR_MAX)
        {
            u32Comparator = (uint32_t) ADC_en_COMPARATOR_MAX;
        }
        u32IrqSourceHandler = ((uint32_t) pfIrqSourceHandler | (uint32_t) 1U);
        ADC_COMP__vIRQSourceHandler[u32Module][u32Sequencer][enSeqComparator] =(void (*) (void))u32IrqSourceHandler;
    }
}

