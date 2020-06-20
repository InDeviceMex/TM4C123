/*
 * SCB.h
 *
 *  Created on: Jan 18, 2018
 *      Author: Lalo_Alvarez
 */

#ifndef SCB_H_
#define SCB_H_



#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_VectorOffset.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_SysReset.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_Traps.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_Exception.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_PriorityGroup.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_SleepMode.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_WakeUp.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_StackAligment.h>






void SCB__vInit(void);

void SCB__vRegisterISR(void (*Isr) (void),SCB_nVECISR enVector);
void SCB__vUnRegisterISR(SCB_nVECISR enVector);

#endif /* SCB_H_ */
