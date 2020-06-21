/*
 * SYSCTL.h
 *
 *  Created on: Jan 22, 2018
 *      Author: Vyldram
 */

#ifndef SYSCTL_H_
#define SYSCTL_H_


#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nRESET SYSCTL__enGetResetCause(void);
void SYSCTL__vClearResetCause(SYSCTL_nRESET enReset);
void SYSCTL__vSetGPIOBus_AHB(SYSCTL_nGPIOBUS enGPIO);
void SYSCTL__vSetGPIOBus_APB(SYSCTL_nGPIOBUS enGPIO);
SYSCTL_nGPIOBUS_CURRENT SYSCTL__vGetGPIOBus(SYSCTL_nGPIOBUS enGPIO);

SYSCTL_nSTATUS SYSCTL__enInit(void);
uint32_t SYSCTL__u32GetClock(void);

SYSCTL_nPERIPHERAL_PRESENT SYSCTL__enIsPeripheralPresent(SYSCTL_nPERIPHERAL enPeripheral);
SYSCTL_nPERIPHERAL_READY SYSCTL__enIsPeripheralReady(SYSCTL_nPERIPHERAL enPeripheral);
void SYSCTL__vResetPeripheral(SYSCTL_nPERIPHERAL enPeripheral);
void SYSCTL__vEnRunModePeripheral(SYSCTL_nPERIPHERAL enPeripheral);
void SYSCTL__vDisRunModePeripheral(SYSCTL_nPERIPHERAL enPeripheral);

void SYSCTL__vEnSleepModePeripheral(SYSCTL_nPERIPHERAL enPeripheral);
void SYSCTL__vDisSleepModePeripheral(SYSCTL_nPERIPHERAL enPeripheral);

void SYSCTL__vEnDeepSleepModePeripheral(SYSCTL_nPERIPHERAL enPeripheral);
void SYSCTL__vDisDeepSleepModePeripheral(SYSCTL_nPERIPHERAL enPeripheral);

#endif /* SYSCTL_H_ */
