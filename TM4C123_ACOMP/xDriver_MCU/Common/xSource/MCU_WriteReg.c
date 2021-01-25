/**
 *
 * @file MCU_WriteReg.c
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
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/Common/xHeader/MCU_WriteReg.h>

void MCU__vWriteRegister(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature)
{
    uint32_t u32FeatureReg=u32FeatureValue;
    uint32_t u32FeatureClear=u32MaskFeature;
    uint32_t u32Reg=0U;
    uint32_t u32RegAddress= u32PeripheralBase;
    volatile uint32_t* pu32Peripheral=0U;

    /*Get Value in bit position*/
    u32FeatureReg &= u32MaskFeature;
    u32FeatureReg <<=u32BitFeature;

    /*Get Value to clear*/
    u32FeatureClear<<=u32BitFeature;

    u32RegAddress+= u32OffsetRegister;
    pu32Peripheral=(volatile uint32_t*) (u32RegAddress);
    u32Reg= (*pu32Peripheral);
    u32Reg&= ~u32FeatureClear;
    u32Reg|= u32FeatureReg;
    (*pu32Peripheral) = u32Reg;
}
