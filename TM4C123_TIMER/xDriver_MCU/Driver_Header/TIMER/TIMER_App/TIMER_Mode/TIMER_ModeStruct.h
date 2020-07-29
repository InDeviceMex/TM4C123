/**
 *
 * @file TIMER_ModeStruct.h
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
 * @verbatim 16 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_APP_TIMER_MODE_TIMER_MODESTRUCT_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_APP_TIMER_MODE_TIMER_MODESTRUCT_H_


#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Enum.h>

void TIMER__vCreateModeStructPointer(TIMER_nMODE enMode,TIMER_MODE_Typedef* psMode);
TIMER_MODE_Typedef* TIMER__psCreateModeStruct(TIMER_nMODE enMode);

void TIMER__vDeleteModeStruct(TIMER_MODE_Typedef* psMode);



#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_APP_TIMER_MODE_TIMER_MODESTRUCT_H_ */
