/**
 *
 * @file SCB_PriorityGroup.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_PRIORITYGROUP_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_PRIORITYGROUP_H_

#include <xDriver_MCU/Driver_Header/SCB/SCB_Peripheral/SCB_Enum.h>

SCB_nSTATUS SCB__enSetPriorityGroup(SCB_nPRIGROUP enGroup);
SCB_nPRIGROUP SCB__enGetPriorityGroup(void);




#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_PRIORITYGROUP_H_ */
