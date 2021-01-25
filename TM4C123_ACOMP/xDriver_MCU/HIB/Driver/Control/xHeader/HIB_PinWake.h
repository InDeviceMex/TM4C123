/**
 *
 * @file HIB_PinWake.h
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
 * @verbatim 21 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_HIB_DRIVER_CONTROL_XHEADER_HIB_PINWAKE_H_
#define XDRIVER_MCU_HIB_DRIVER_CONTROL_XHEADER_HIB_PINWAKE_H_

#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Enum.h>

HIB_nSTATUS HIB__enEnPinWakeUp(void);
HIB_nSTATUS HIB__enDisPinWakeUp(void);

HIB_nSTATUS HIB__enSetPinWakeUp(HIB_nPINWAKE enPinWake);
HIB_nSTATUS HIB__enGetPinWakeUp(HIB_nPINWAKE* enFeatureValue);




#endif /* XDRIVER_MCU_HIB_DRIVER_CONTROL_XHEADER_HIB_PINWAKE_H_ */
