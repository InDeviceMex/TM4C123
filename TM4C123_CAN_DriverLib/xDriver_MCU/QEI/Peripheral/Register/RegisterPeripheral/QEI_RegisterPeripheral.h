/**
 *
 * @file QEI_RegisterPeripheral.h
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

#ifndef XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_QEI_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_QEI_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/QEI/Peripheral/Register/RegisterPeripheral/xHeader/QEI_RegisterPeripheral_Module0.h>
#include <xDriver_MCU/QEI/Peripheral/Register/RegisterPeripheral/xHeader/QEI_RegisterPeripheral_Module1.h>

#define QEI    ((QEIS_TypeDef*) (QEI_BASE))

extern QEI_TypeDef* QEI_BLOCK[(uint32_t) QEI_enMODULE_MAX];
extern uint32_t QEI_BLOCK_ADDRESS[(uint32_t) QEI_enMODULE_MAX];


#endif /* XDRIVER_MCU_QEI_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_QEI_REGISTERPERIPHERAL_H_ */
