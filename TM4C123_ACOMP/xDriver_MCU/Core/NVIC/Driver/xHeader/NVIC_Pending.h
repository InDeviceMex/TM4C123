/**
 *
 * @file NVIC_Pending.h
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
 * @verbatim 20 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_PENDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_PENDING_H_

#include <xDriver_MCU/Core/NVIC/Peripheral/xHeader/NVIC_Enum.h>

NVIC_nPENDING NVIC__enGetPendingIRQ( NVIC_nSTIR enIRQ);
NVIC_nSTATUS NVIC__enSetPendingIRQ( NVIC_nSTIR enIRQ);
NVIC_nSTATUS NVIC__enClearPendingIRQ( NVIC_nSTIR enIRQ);

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_PENDING_H_ */
