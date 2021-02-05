/**
 *
 * @file ADC_WriteRegister.c
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
 * @verbatim 5 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/xHeader/ADC_WriteRegister.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/xHeader/ADC_Ready.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC__vWriteRegister(ADC_nMODULE enModule, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32AdcBase = 0UL;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckPatams((uint32_t) enModule, (uint32_t) ADC_enMODULE_MAX);

    ADC__vSetReady((ADC_nMODULE) u32Module);
    u32AdcBase = ADC_BLOCK_ADDRESS [u32Module];
    MCU__vWriteRegister(u32AdcBase, u32OffsetRegister, u32FeatureValue, u32MaskFeature, u32BitFeature);
}
