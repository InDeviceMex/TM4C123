/**
 *
 * @file ACMP_RegisterPeripheral.h
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
 * @verbatim Mar 31, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 31, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_ACMP_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_ACMP_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/ACMP/Peripheral/Register/RegisterPeripheral/xHeader/ACMP_RegisterPeripheral_Module0.h>

#define ACMP    ((ACMPS_TypeDef*) (ACMP_BASE))

extern ACMP_TypeDef* ACMP_BLOCK[(uint32_t) ACMP_enMODULE_MAX];
extern uint32_t ACMP_BLOCK_ADDRESS[(uint32_t) ACMP_enMODULE_MAX];


#endif /* XDRIVER_MCU_ACMP_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_ACMP_REGISTERPERIPHERAL_H_ */
