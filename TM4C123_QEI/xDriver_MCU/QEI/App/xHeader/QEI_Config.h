/**
 *
 * @file QEI_Config.h
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_APP_XHEADER_QEI_CONFIG_H_
#define XDRIVER_MCU_QEI_APP_XHEADER_QEI_CONFIG_H_
#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Enum.h>

QEI_nSTATUS QEI__enSetConfig(QEI_nMODULE enModule, const QEI_CONTROL_TypeDef* pstControlConfig, const QEI_SIGNAL_TypeDef* pstSignalConfig, uint32_t u32InitialPosArg, uint32_t u32MaxPositionArg, uint32_t u32TimerLoad);

#endif /* XDRIVER_MCU_QEI_APP_XHEADER_QEI_CONFIG_H_ */
