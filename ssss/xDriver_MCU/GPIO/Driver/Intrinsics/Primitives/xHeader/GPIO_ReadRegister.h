/**
 *
 * @file GPIO_ReadRegister.h
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

#ifndef XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_GPIO_READREGISTER_H_
#define XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_GPIO_READREGISTER_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_nSTATUS GPIO__enReadRegisterBus(GPIO_nPORT enPort, GPIO_nBUS enBus, uint32_t u32OffsetRegister, uint32_t* pu32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);
GPIO_nSTATUS GPIO__enReadRegister(GPIO_nPORT enPort, uint32_t u32OffsetRegister, uint32_t* pu32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);

#endif /* XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_GPIO_READREGISTER_H_ */
