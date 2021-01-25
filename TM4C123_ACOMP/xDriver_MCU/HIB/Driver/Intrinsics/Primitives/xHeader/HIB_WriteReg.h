/**
 *
 * @file HIB_WriteReg.h
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
 * @verbatim 25 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_HIB_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_HIB_WRITEREG_H_
#define XDRIVER_MCU_HIB_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_HIB_WRITEREG_H_

#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Enum.h>
#include <xUtils/Standard/Standard.h>

HIB_nSTATUS HIB__enWriteRegister(uint32_t u32OffsetRegister, uint32_t u32FeatureValue, uint32_t u32MaskFeature, uint32_t u32BitFeature);





#endif /* XDRIVER_MCU_HIB_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_HIB_WRITEREG_H_ */
