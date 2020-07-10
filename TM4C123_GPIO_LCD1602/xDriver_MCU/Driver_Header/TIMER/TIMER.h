/*
 * TIMER.h
 *
 *  Created on: 3 may. 2018
 *      Author: InDev
 */

#ifndef TIMER_H_
#define TIMER_H_


#include <xDriver_MCU/Driver_Header/NVIC/NVIC.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB.h>
#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL.h>

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Peripheral.h>


#define TIMER_MAX (5u)
#define TIMER_INT (5u)
#define TIMER_32  (0u)
#define TIMER_64  (1u)
#define TIMER_A  (0u)
#define TIMER_B  (1u)
#define TIMER_W  (2u)

void TIMER__vInit(void);
void TIMER__vRegisterISR(void (*Isr) (void),TIMER_nMODULE enModule,TIMER_nINTERRUPT enInterrupt);
void TIMER__vRegisterMODULEISR(void (*Isr) (void),TIMER_nMODULE enModule);

void TIMER__vEnInterruptMODULE(TIMER_nMODULE enModule,TIMER_nPRIORITY enPriority);
void TIMER__vDisInterruptMODULE(TIMER_nMODULE enModule);

void TIMER__vSetReady(TIMER_nMODULE enModule);
void TIMER__vClearReady(TIMER_nMODULE enModule);
TIMER_nREADY TIMER__enIsReady(TIMER_nMODULE enModule);

void TIMER__vSetConfiguration(TIMER_nMODULE enModule, TIMER_nCONFIG enConf);
TIMER_nCONFIG TIMER__enGetConfiguration(TIMER_nMODULE enModule);

void TIMER__vSetSubMode(TIMER_nMODULE enModule, TIMER_nSUB_MODE enSubMode);
TIMER_nSUB_MODE TIMER__enGetSubMode(TIMER_nMODULE enModule);

void TIMER__vSetEdgeMode(TIMER_nMODULE enModule, TIMER_nEDGE_MODE enEdgeMode);
TIMER_nEDGE_MODE TIMER__enGetEdgeMode(TIMER_nMODULE enModule);

void TIMER__vSetAltMode(TIMER_nMODULE enModule, TIMER_nALT_MODE enAltMode);
TIMER_nALT_MODE TIMER__enGetAltMode(TIMER_nMODULE enModule);

void TIMER__vSetCountDir(TIMER_nMODULE enModule, TIMER_nCOUNT_DIR enCountDir);
TIMER_nCOUNT_DIR TIMER__enGetCountDir(TIMER_nMODULE enModule);

void TIMER__vSetWaitTrigger(TIMER_nMODULE enModule, TIMER_nWAIT enWaitTrigger);
TIMER_nWAIT TIMER__enGetWaitTrigger(TIMER_nMODULE enModule);

void TIMER__vSetSnapShot(TIMER_nMODULE enModule, TIMER_nSNAPSHOT enSnapShot);
TIMER_nSNAPSHOT TIMER__enGetSnapShot(TIMER_nMODULE enModule);

void TIMER__vSetUpdateIntervalMode(TIMER_nMODULE enModule, TIMER_nUPDATE_INTERVAL enUpdateIntervalMode);
TIMER_nUPDATE_INTERVAL TIMER__enGetUpdateIntervalMode(TIMER_nMODULE enModule);

void TIMER__vSetPWMInterrupt(TIMER_nMODULE enModule, TIMER_nPWM_INT enPWMInterrupt);
TIMER_nPWM_INT TIMER__enGetPWMInterrupt(TIMER_nMODULE enModule);

void TIMER__vSetMatchEventInterrupt(TIMER_nMODULE enModule, TIMER_nEVENT_INT enEventInterrupt);
TIMER_nEVENT_INT TIMER__enGetMatchEventInterrupt(TIMER_nMODULE enModule);

void TIMER__vSetUpdateMatchMode(TIMER_nMODULE enModule, TIMER_nUPDATE_MATCH enUpdateMatchMode);
TIMER_nUPDATE_MATCH TIMER__enGetUpdateMatchMode(TIMER_nMODULE enModule);

void TIMER__vSetPWMOutputInit(TIMER_nMODULE enModule, TIMER_nPWM_OUT_INIT enPWMOutputInit);
TIMER_nPWM_OUT_INIT TIMER__enGetPWMOutputInit(TIMER_nMODULE enModule);



void TIMER__vSetEnable(TIMER_nMODULE enModule, TIMER_nENABLE enEnable);
TIMER_nENABLE TIMER__enGetEnable(TIMER_nMODULE enModule);

void TIMER__vSetStall(TIMER_nMODULE enModule, TIMER_nSTALL enStall);
TIMER_nSTALL TIMER__enGetStall(TIMER_nMODULE enModule);

void TIMER__vSetEdgeEvent(TIMER_nMODULE enModule, TIMER_nEDGE_EVENT enEdgeEvent);
TIMER_nEDGE_EVENT TIMER__enGetEdgeEvent(TIMER_nMODULE enModule);

void TIMER__vSetRTCStall(TIMER_nMODULE enModule, TIMER_nRTC_STALL enRTCStall);
TIMER_nRTC_STALL TIMER__enGetRTCStall(TIMER_nMODULE enModule);

void TIMER__vSetADCTrigger(TIMER_nMODULE enModule, TIMER_nADC_TRIGGER enADCTrigger);
TIMER_nADC_TRIGGER TIMER__enGetADCTrigger(TIMER_nMODULE enModule);

void TIMER__vSetPWMOutputLevel(TIMER_nMODULE enModule, TIMER_nPWM_OUTPUT enPWMOutputLevel);
TIMER_nPWM_OUTPUT TIMER__enGetPWMOutputLevel(TIMER_nMODULE enModule);

void TIMER__vSetSyncronize(TIMER_nSYNC enSync);

void TIMER__vEnInterrupt(TIMER_nMODULE enModule, TIMER_nINT enInterrupt);
void TIMER__vDisInterrupt(TIMER_nMODULE enModule, TIMER_nINT enInterrupt);
void TIMER__vClearInterrupt(TIMER_nMODULE enModule, TIMER_nINT enInterrupt);
TIMER_nINT_STATUS TIMER__enStatusInterrupt(TIMER_nMODULE enModule, TIMER_nINT enInterrupt);

void TIMER__vCreateModeStructPointer(TIMER_nMODE enMode,TIMER_MODE_Typedef* psMode);
TIMER_MODE_Typedef* TIMER__psCreateModeStruct(TIMER_nMODE enMode);

void TIMER__vDeleteModeStruct(TIMER_MODE_Typedef* psMode);

TIMER_nSTATUS TIMER__enSetMode(TIMER_nMODULE enModule, TIMER_nMODE enMode);
TIMER_nSTATUS TIMER__enSetModeStruct(TIMER_nMODULE enModule, const TIMER_MODE_Typedef* psMode);

TIMER_nMODE TIMER__enGetMode(TIMER_nMODULE enModule);
void TIMER__vGetMode(TIMER_nMODULE enModule, TIMER_MODE_Typedef* psMode);
TIMER_MODE_Typedef* TIMER__psGetMode(TIMER_nMODULE enModule);

TIMER_nSTATUS TIMER__enSetExtraModeStruct(TIMER_nMODULE enModule, const TIMER_EXTRAMODE_Typedef* psExtraMode);

TIMER_EXTRAMODE_Typedef* TIMER__psGetExtraMode(TIMER_nMODULE enModule);
void TIMER__vGetExtraMode(TIMER_nMODULE enModule, TIMER_EXTRAMODE_Typedef* psExtraMode);

void TIMER__vSetReload(TIMER_nMODULE enModule, uint32_t u32PrescalerRTC, uint64_t u64Reload);
void TIMER__vSetMatch(TIMER_nMODULE enModule,uint64_t u64Match);

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
