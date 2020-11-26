/**
 *
 * @file ADC_Ready.c
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
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Dependencies.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/xHeader/ADC_Ready.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

static SYSCTL_nPERIPHERAL SYSCTL_VECTOR_ADC[(uint32_t)ADC_enMODULE_MAX+1u]={SYSCTL_enADC0, SYSCTL_enADC1};

void ADC__vSetReady(ADC_nMODULE enModule)
{
    ADC_nREADY enReady=ADC_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enADC0;
    uint32_t u32Module= (uint32_t) enModule;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    enPeripheral=SYSCTL_VECTOR_ADC[u32Module];
    enReady = ADC__enIsReady(enModule);
    if(ADC_enNOREADY == enReady)
    {
        SYSCTL__vSetReady(enPeripheral);
        SYSCTL__vReset(SYSCTL_enADC0);
        SYSCTL__vSetReady(enPeripheral);
    }
}

void ADC__vClearReady(ADC_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enADC0;
    uint32_t u32Module= (uint32_t) enModule;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    enPeripheral=SYSCTL_VECTOR_ADC[u32Module];
    SYSCTL__vClearReady(enPeripheral);
}

ADC_nREADY ADC__enIsReady(ADC_nMODULE enModule)
{
    ADC_nREADY enReady=ADC_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enADC0;
    uint32_t u32Module= (uint32_t) enModule;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    enPeripheral=SYSCTL_VECTOR_ADC[u32Module];
    enReady=(ADC_nREADY)SYSCTL__enIsReady(enPeripheral);
    return enReady;
}
