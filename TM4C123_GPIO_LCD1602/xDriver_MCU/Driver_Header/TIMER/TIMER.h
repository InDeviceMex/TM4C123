/*
 * TIMER.h
 *
 *  Created on: 3 may. 2018
 *      Author: InDev
 */

#ifndef TIMER_H_
#define TIMER_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Driver.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_App/TIMER_App.h>









TIMER_nSTATUS TIMER__enSetMode_Reload(TIMER_nMODULE enModule, TIMER_nMODE enMode, uint32_t u32PrescalerRTC, uint64_t u64Reload);
TIMER_nSTATUS TIMER__enSetModeStruct_Reload(TIMER_nMODULE enModule, const TIMER_MODE_Typedef* psMode, uint32_t u32PrescalerRTC, uint64_t u64Reload);


TIMER_nSTATUS TIMER__enSetMode_Match(TIMER_nMODULE enModule, TIMER_nMODE enMode,uint64_t u64Match);
TIMER_nSTATUS TIMER__enSetModeStruct_Match(TIMER_nMODULE enModule, const TIMER_MODE_Typedef* psMode,uint64_t u64Match);

TIMER_nSTATUS TIMER__enSetMode_ReloadMatch(TIMER_nMODULE enModule, TIMER_nMODE enMode, uint32_t u32PrescalerRTC, uint64_t u64Reload,uint64_t u64Match);
TIMER_nSTATUS TIMER__enSetModeStruct_ReloadMatch(TIMER_nMODULE enModule, const TIMER_MODE_Typedef* psMode, uint32_t u32PrescalerRTC, uint64_t u64Reload,uint64_t u64Match);

/*ToDO Add implementation to read counter of the timer TnR and TnPS (current), TnV and TnPV (free-Running)
 * Create TIMER__vGetReload and TIMER__vGetMatch
 * */

uint64_t TIMER__u64GetValueCurrent(TIMER_nMODULE enModule);
uint64_t TIMER__u64GetValueFreeRunning(TIMER_nMODULE enModule);

#endif /* TIMER_H_ */
