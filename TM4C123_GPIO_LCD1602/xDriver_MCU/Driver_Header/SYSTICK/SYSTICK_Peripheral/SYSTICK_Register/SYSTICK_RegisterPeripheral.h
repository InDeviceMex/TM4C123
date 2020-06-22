/**
 *
 * @file SYSTICK_RegisterPeripheral.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Peripheral/SYSTICK_Struct/SYSTICK_StructPeripheral.h>
#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Peripheral/SYSTICK_Register/SYSTICK_RegisterAddress.h>

#define SysTick                 (((SysTick_TypeDef*)(SysTick_BASE)))

/*********************************************************************************************
************************************** 1 CSR **********************************************
*********************************************************************************************/
#define SysTick_CSR                     (((SysTick_CSR_TypeDef*)(SysTick_BASE+SysTick_CSR_OFFSET)))
#define SysTick_CSR_R                   (*((volatile uint32_t *)(SysTick_BASE+SysTick_CSR_OFFSET)))


/*********************************************************************************************
************************************** 2 LOAD **********************************************
*********************************************************************************************/
#define SysTick_RVR                     (((SysTick_RVR_TypeDef*)(SysTick_BASE+SysTick_RVR_OFFSET)))
#define SysTick_RVR_R                   (*((volatile uint32_t *)(SysTick_BASE+SysTick_RVR_OFFSET)))

/*********************************************************************************************
**************************************** 3 VAL **********************************************
***********************************************************************************************/
#define SysTick_CVR                     (((SysTick_CVR_TypeDef*)(SysTick_BASE+SysTick_CVR_OFFSET)))
#define SysTick_CVR_R                   (*((volatile uint32_t *)(SysTick_BASE+SysTick_CVR_OFFSET)))

/*********************************************************************************************
**************************************** 3 CR **********************************************
***********************************************************************************************/
#define SysTick_CR                   (((SysTick_CR_TypeDef*)(SysTick_BASE+SysTick_CR_OFFSET)))
#define SysTick_CR_R                 (*((volatile uint32_t *)(SysTick_BASE+SysTick_CR_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERPERIPHERAL_H_ */
