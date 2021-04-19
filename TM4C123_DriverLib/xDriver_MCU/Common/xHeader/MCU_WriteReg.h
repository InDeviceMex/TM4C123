/**
 *
 * @file MCU_WriteReg.h
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
#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_WRITEREG_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_WRITEREG_H_

#include <xUtils/Standard/Standard.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(MCU__vWriteRegister_RAM, ".ramcode")

void MCU__vWriteRegister_RAM(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);

#elif defined (__GNUC__ )

void MCU__vWriteRegister_RAM(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature) __attribute__((section(".ramcode")));

#endif

void MCU__vWriteRegister(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);
void MCU__vWriteRegister_Direct(uint32_t u32PeripheralBase, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_WRITEREG_H_ */
