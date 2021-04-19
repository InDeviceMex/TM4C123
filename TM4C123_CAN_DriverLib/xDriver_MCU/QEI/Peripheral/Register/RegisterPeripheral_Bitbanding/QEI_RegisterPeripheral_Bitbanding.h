/**
 *
 * @file QEI_RegisterPeripheral_Bitbanding.h
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
 * @verbatim Apr 5, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 5, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_QEI_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_QEI_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/QEI/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/QEI_RegisterPeripheral_Bitbanding_Module0.h>
#include <xDriver_MCU/QEI/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/QEI_RegisterPeripheral_Bitbanding_Module1.h>

#define QEI_BITBANDING    ((QEIS_BITBANDING_TypeDef*) (QEI_BITBANDING_BASE + (QEI_OFFSET * 32UL)))

extern QEI_BITBANDING_TypeDef* QEI_BITBANDING_BLOCK[(uint32_t) QEI_enMODULE_MAX];



#endif /* XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_BITBANDING_QEI_REGISTERPERIPHERAL_BITBANDING_H_ */
