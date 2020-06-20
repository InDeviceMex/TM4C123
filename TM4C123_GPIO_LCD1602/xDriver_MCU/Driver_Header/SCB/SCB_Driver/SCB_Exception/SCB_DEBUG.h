/**
 *
 * @file SCB_DEBUG.h
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_DEBUG_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_DEBUG_H_


#include <xDriver_MCU/Driver_Header/SCB/SCB_Peripheral/SCB_Peripheral.h>

void SCB_DEBUG__vSetPriority(SCB_nSHPR enPriority);
SCB_nSHPR SCB_DEBUG__enGetPriority(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_DEBUG_H_ */
