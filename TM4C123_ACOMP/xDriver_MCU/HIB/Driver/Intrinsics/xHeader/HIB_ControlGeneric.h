/**
 *
 * @file HIB_ControlGeneric.h
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
 * @verbatim 11 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_HIB_DRIVER_INTRINSICS_XHEADER_HIB_CONTROLGENERIC_H_
#define XDRIVER_MCU_HIB_DRIVER_INTRINSICS_XHEADER_HIB_CONTROLGENERIC_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Enum.h>

HIB_nSTATUS HIB__enSetControlGeneric(uint32_t u32ControlGeneric,uint32_t u32Mask, uint32_t u32Bit);
HIB_nSTATUS HIB__enGetControlGeneric(uint32_t* pu32ControlGeneric, uint32_t u32Mask, uint32_t u32Bit);

HIB_nSTATUS HIB__enEnControlGeneric(uint32_t u32Mask);
HIB_nSTATUS HIB__enDisControlGeneric(uint32_t u32Mask);


#endif /* XDRIVER_MCU_HIB_DRIVER_INTRINSICS_XHEADER_HIB_CONTROLGENERIC_H_ */
