/*
 * GPIO.h
 *
 *  Created on: Dec 27, 2017
 *      Author: Lalo_Alvarez
 */

#ifndef GPIO_H_
#define GPIO_H_

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Driver.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Peripheral.h>

#include <xDriver_MCU/Driver_Header/NVIC/NVIC.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB.h>
#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL.h>


#define PIN0   ((uint32_t)0x000000001u)
#define PIN1   ((uint32_t)0x000000002u)
#define PIN2   ((uint32_t)0x000000004u)
#define PIN3   ((uint32_t)0x000000008u)
#define PIN4   ((uint32_t)0x000000010u)
#define PIN5   ((uint32_t)0x000000020u)
#define PIN6   ((uint32_t)0x000000040u)
#define PIN7   ((uint32_t)0x000000080u)
#define PIN8   ((uint32_t)0x000000100u)
#define PIN9   ((uint32_t)0x000000200u)
#define PIN10  ((uint32_t)0x000000400u)
#define PIN11  ((uint32_t)0x000000800u)
#define PIN12  ((uint32_t)0x000001000u)
#define PIN13  ((uint32_t)0x000002000u)
#define PIN14  ((uint32_t)0x000004000u)
#define PIN15  ((uint32_t)0x000008000u)
#define PIN16  ((uint32_t)0x000100000u)
#define PIN17  ((uint32_t)0x000200000u)
#define PIN18  ((uint32_t)0x000400000u)
#define PIN19  ((uint32_t)0x000800000u)
#define PIN20  ((uint32_t)0x001000000u)
#define PIN21  ((uint32_t)0x002000000u)
#define PIN22  ((uint32_t)0x004000000u)
#define PIN23  ((uint32_t)0x008000000u)
#define PIN24  ((uint32_t)0x010000000u)
#define PIN25  ((uint32_t)0x020000000u)
#define PIN26  ((uint32_t)0x040000000u)
#define PIN27  ((uint32_t)0x080000000u)
#define PIN28  ((uint32_t)0x100000000u)
#define PIN29  ((uint32_t)0x200000000u)
#define PIN30  ((uint32_t)0x400000000u)
#define PIN31  ((uint32_t)0x800000000u)


#define BIT0   ((uint32_t)0x000000001u)
#define BIT1   ((uint32_t)0x000000002u)
#define BIT2   ((uint32_t)0x000000004u)
#define BIT3   ((uint32_t)0x000000008u)
#define BIT4   ((uint32_t)0x000000010u)
#define BIT5   ((uint32_t)0x000000020u)
#define BIT6   ((uint32_t)0x000000040u)
#define BIT7   ((uint32_t)0x000000080u)
#define BIT8   ((uint32_t)0x000000100u)
#define BIT9   ((uint32_t)0x000000200u)
#define BIT10  ((uint32_t)0x000000400u)
#define BIT11  ((uint32_t)0x000000800u)
#define BIT12  ((uint32_t)0x000001000u)
#define BIT13  ((uint32_t)0x000002000u)
#define BIT14  ((uint32_t)0x000004000u)
#define BIT15  ((uint32_t)0x000008000u)
#define BIT16  ((uint32_t)0x000100000u)
#define BIT17  ((uint32_t)0x000200000u)
#define BIT18  ((uint32_t)0x000400000u)
#define BIT19  ((uint32_t)0x000800000u)
#define BIT20  ((uint32_t)0x001000000u)
#define BIT21  ((uint32_t)0x002000000u)
#define BIT22  ((uint32_t)0x004000000u)
#define BIT23  ((uint32_t)0x008000000u)
#define BIT24  ((uint32_t)0x010000000u)
#define BIT25  ((uint32_t)0x020000000u)
#define BIT26  ((uint32_t)0x040000000u)
#define BIT27  ((uint32_t)0x080000000u)
#define BIT28  ((uint32_t)0x100000000u)
#define BIT29  ((uint32_t)0x200000000u)
#define BIT30  ((uint32_t)0x400000000u)
#define BIT31  ((uint32_t)0x800000000u)



void GPIO__vInit(void);
void GPIO__vRegisterISR(void (*Isr) (void),GPIO_nPORT enPort,GPIO_nPIN enPin);
void GPIO__vRegisterMODULEISR(void (*Isr) (void),GPIO_nPORT enPort);


void GPIO__vEnInterruptMODULE(GPIO_nPORT enPort,GPIO_nPRIORITY enPriority);
void GPIO__vDisInterruptMODULE(GPIO_nPORT enPort);




void GPIO__vSetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data);
uint32_t GPIO__u32GetData(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO_AHB__vSetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data);
uint32_t GPIO_AHB__u32GetData(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO_AHB__vSetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data);
uint32_t GPIO_AHB__u32GetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO_APB__vSetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data);
uint32_t GPIO_APB__u32GetData(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO_APB__vSetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data);
uint32_t GPIO_APB__u32GetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin);




void GPIO__vEnInterrupt(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vEnInterruptConfig(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_nINT_CONFIG enIntConfig);

void GPIO__vDisInterrupt(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vClearInterrupt(GPIO_nPORT enPort, GPIO_nPIN enPin);
GPIO_nINT_STATUS GPIO__enStatusInterrupt(GPIO_nPORT enPort, GPIO_nPIN enPin);








void GPIO__vSetDigitalFunction(GPIO_nDIGITAL_FUNCTION enFunction);

void GPIO__vCreateConfigStructPointer(GPIO_nCONFIG enConfig,GPIO_CONFIG_Typedef* psConfig);
GPIO_CONFIG_Typedef* GPIO__psCreateConfigStruct(GPIO_nCONFIG enConfig);

void GPIO__vDeleteConfigStruct(GPIO_CONFIG_Typedef* psConfig);

GPIO_nSTATUS GPIO__enSetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_nCONFIG enConfig);
GPIO_nSTATUS GPIO__enSetConfigStruct(GPIO_nPORT enPort, GPIO_nPIN enPin,const GPIO_CONFIG_Typedef* psConfig);

GPIO_nCONFIG GPIO__enGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_CONFIG_Typedef* psConfig);
GPIO_CONFIG_Typedef* GPIO__psGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin);


GPIO_nSTATUS GPIO__enSetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction,GPIO_nCONFIG enConfig);
GPIO_nSTATUS GPIO__enSetDigitalConfigStruct(GPIO_nDIGITAL_FUNCTION enFunction,const GPIO_CONFIG_Typedef* psConfig);

GPIO_nCONFIG GPIO__enGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction);
void GPIO__vGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction, GPIO_CONFIG_Typedef* psConfig);
GPIO_CONFIG_Typedef* GPIO__psGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction);

void GPIO__vSetAnalogFunction(GPIO_nANALOG_FUNCTION enFunction);




#endif /* GPIO_H_ */
