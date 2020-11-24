/**
 *
 * @file ADC_GeneralGeneric.c
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
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_GeneralGeneric.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>



void ADC__vSetGeneralGeneric(uint32_t u32Module,uint32_t u32OffsetRegister, uint32_t u32Feature, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32Reg=0u;
    uint32_t u32RegAddress=0u;
    volatile uint32_t* pu32Adc=0u;

    u32Feature &= u32MaskFeature;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    ADC__vSetReady((ADC_nMODULE)u32Module);
    u32RegAddress = ADC_BLOCK_ADDRESS[u32Module];
    u32RegAddress+= u32OffsetRegister;
    pu32Adc=(volatile uint32_t*)(u32RegAddress);
    u32Reg=*pu32Adc;
    u32Reg&= ~(u32MaskFeature<<u32BitFeature);
    u32Reg|= (u32Feature<<u32BitFeature);
    *pu32Adc=u32Reg;
}

uint32_t ADC__u32GetGeneralGeneric(uint32_t u32Module, uint32_t u32OffsetRegister, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32Reg=0u;
    uint32_t u32RegAddress=0u;
    volatile uint32_t* pu32Adc=0u;

    ADC_nREADY enReady= ADC_enNOREADY;
    uint32_t u32Feature = 0xFFFFFFFFu;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    enReady=ADC__enIsReady((ADC_nMODULE)u32Module);
    if(ADC_enREADY == enReady)
    {
        u32RegAddress = ADC_BLOCK_ADDRESS[u32Module];
        u32RegAddress+= u32OffsetRegister;
        pu32Adc=(volatile uint32_t*) (u32RegAddress);
        u32Reg=*pu32Adc;
        u32Reg>>= u32BitFeature;
        u32Reg&= u32MaskFeature;
        u32Feature = u32Reg;
    }
    return u32Feature;
}
