/**
 *
 * @file GPIO_WriteRegister.h
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
 * @verbatim 30 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_GPIO_WRITEREGISTER_H_
#define XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_GPIO_WRITEREGISTER_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO__vWriteRegisterBus(GPIO_nPORT enPort, GPIO_nBUS enBus, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);
void GPIO__vWriteRegister(GPIO_nPORT enPort, uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_GPIO_WRITEREGISTER_H_ */
