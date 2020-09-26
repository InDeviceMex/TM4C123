/**
 *
 * @file HIB_GlobalCountStatus.h
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
#ifndef XDRIVER_MCU_HIB_APP_XHEADER_HIB_GLOBALCOUNTSTATUS_H_
#define XDRIVER_MCU_HIB_APP_XHEADER_HIB_GLOBALCOUNTSTATUS_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Enum.h>

void HIB__enSetGlobalCountStatus(HIB_nREADY enStatus);
HIB_nREADY HIB__enGetGlobalCountStatus(void);



#endif /* XDRIVER_MCU_HIB_APP_XHEADER_HIB_GLOBALCOUNTSTATUS_H_ */
