/**
 *
 * @file QEI_VelocityCount.h
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

#ifndef XDRIVER_MCU_QEI_DRIVER_XHEADER_QEI_VELOCITYCOUNT_H_
#define XDRIVER_MCU_QEI_DRIVER_XHEADER_QEI_VELOCITYCOUNT_H_

#include <QEI/Peripheral/xHeader/QEI_Enum.h>

QEI_nSTATUS QEI__enGetVelocityCount(QEI_nMODULE enModule, uint32_t* pu32VelocityCountArg);

#endif /* XDRIVER_MCU_QEI_DRIVER_XHEADER_QEI_VELOCITYCOUNT_H_ */
