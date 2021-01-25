/**
 *
 * @file ACMP_InterruptVector.c
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
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Dependencies.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/xHeader/ACMP_InterruptVector.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

static NVIC_nSTIR ACMP__enGetInterruptVector(ACMP_nMODULE enModule);



static NVIC_nSTIR ACMP__enGetInterruptVector(ACMP_nMODULE enModule)
{
    NVIC_nSTIR NVIC_VECTOR_ACMP[(uint32_t)ACMP_enMODULE_MAX+1U]={ NVIC_enSTIR_ACOMP0,NVIC_enSTIR_ACOMP1};
    NVIC_nSTIR enVector=NVIC_enSTIR_ACOMP0;
    uint32_t u32Module= (uint32_t) enModule;
    if((uint32_t)ACMP_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ACMP_enMODULE_MAX;
    }
    enVector=NVIC_VECTOR_ACMP[u32Module];
    return enVector;
}

void ACMP__vEnInterruptVector(ACMP_nMODULE enModule, ACMP_nPRIORITY enACMPPriority)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_ACOMP0;
    enVector= ACMP__enGetInterruptVector(enModule);
    enACMPPriority&=ACMP_enPRIMAX;
    NVIC__enSetEnableIRQ((NVIC_nSTIR)enVector,(NVIC_nPRIORITY)enACMPPriority);
}

void ACMP__vDisInterruptVector(ACMP_nMODULE enModule)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_ACOMP0;
    enVector= ACMP__enGetInterruptVector(enModule);
    NVIC__enClearEnableIRQ((NVIC_nSTIR)enVector);
}


