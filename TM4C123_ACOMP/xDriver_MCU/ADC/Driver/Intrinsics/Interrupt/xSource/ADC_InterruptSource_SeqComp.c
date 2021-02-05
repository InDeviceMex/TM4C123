/**
 *
 * @file ADC_InterruptSource_SeqComp.c
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
 * @verbatim 22 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/xHeader/ADC_InterruptSource_SeqComp.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC__vEnInterruptComp(ADC_nMODULE enModule, ADC_nCOMPARATOR  enSeqComparator)
{
    uint32_t u32RegisterOffset = ADC_ADCDCCTL_OFFSET;
    uint32_t u32Comparator = 0UL;
    u32Comparator = MCU__u32CheckPatams((uint32_t) enSeqComparator, (uint32_t) ADC_en_COMPARATOR_MAX);
    u32Comparator *= 4UL;
    u32RegisterOffset += u32Comparator;
    ADC__vWriteRegister(enModule , u32RegisterOffset, ADC_ADCDCCTL_CIE_EN, ADC_ADCDCCTL_CIE_MASK, ADC_ADCDCCTL_R_CIE_BIT);
}

void ADC__vDisInterruptComp(ADC_nMODULE enModule, ADC_nCOMPARATOR  enSeqComparator)
{
    uint32_t u32RegisterOffset = ADC_ADCDCCTL_OFFSET;
    uint32_t u32Comparator = 0UL;
    u32Comparator = MCU__u32CheckPatams((uint32_t) enSeqComparator, (uint32_t) ADC_en_COMPARATOR_MAX);
    u32Comparator *= 4UL;
    u32RegisterOffset += u32Comparator;
    ADC__vWriteRegister(enModule , u32RegisterOffset, ADC_ADCDCCTL_CIE_DIS, ADC_ADCDCCTL_CIE_MASK, ADC_ADCDCCTL_R_CIE_BIT);
}

void ADC__vClearInterruptComp(ADC_nMODULE enModule, ADC_nCOMPARATOR  enSeqComparator)
{
    uint32_t u32Comparator = 0UL;
    u32Comparator = MCU__u32CheckPatams((uint32_t) enSeqComparator, (uint32_t) ADC_en_COMPARATOR_MAX);
    ADC__vWriteRegister(enModule , ADC_ADCDCISC_OFFSET, ADC_ADCDCISC_DCINT_CLEAR, ADC_ADCDCISC_DCINT_MASK, u32Comparator);
}

ADC_nCOMP_INT_STATUS ADC__enStatusInterruptComp(ADC_nMODULE enModule, ADC_nCOMPARATOR  enSeqComparator)
{
    ADC_nCOMP_INT_STATUS enInterruptReg = ADC_enCOMP_INT_STATUS_UNDEF;
    uint32_t u32Comparator = 0UL;
    u32Comparator = MCU__u32CheckPatams((uint32_t) enSeqComparator, (uint32_t) ADC_en_COMPARATOR_MAX);
    ADC__enReadRegister(enModule, ADC_ADCDCISC_OFFSET, (uint32_t*) &enInterruptReg, ADC_ADCDCISC_DCINT_MASK, u32Comparator);
    return enInterruptReg;
}
