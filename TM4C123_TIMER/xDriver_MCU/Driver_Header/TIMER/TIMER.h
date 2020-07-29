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


/*ToDO Add implementation to read counter of the timer TnR and TnPS (current), TnV and TnPV (free-Running)
 * Create TIMER__vGetReload and TIMER__vGetMatch
 * */

uint64_t TIMER__u64GetValueCurrent(TIMER_nMODULE enModule);
uint64_t TIMER__u64GetValueFreeRunning(TIMER_nMODULE enModule);

#endif /* TIMER_H_ */
