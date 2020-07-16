/**
 *
 * @file TIMER_ModeMatch.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_APP_TIMER_MODEMATCH_TIMER_MODEMATCH_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_APP_TIMER_MODEMATCH_TIMER_MODEMATCH_H_


#include <xDriver_MCU/Driver_Header/TIMER/TIMER_App/TIMER_ModeMatch/TIMER_ModeMatchStruct.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_App/TIMER_Mode/TIMER_Mode.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Driver.h>


TIMER_nSTATUS TIMER__enSetModeStruct_Match(TIMER_nMODULE enModule, const TIMER_MODE_Typedef* psMode,uint64_t u64Match);
TIMER_nSTATUS TIMER__enSetMode_Match(TIMER_nMODULE enModule, TIMER_nMODE enMode,uint64_t u64Match);

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_APP_TIMER_MODEMATCH_TIMER_MODEMATCH_H_ */
