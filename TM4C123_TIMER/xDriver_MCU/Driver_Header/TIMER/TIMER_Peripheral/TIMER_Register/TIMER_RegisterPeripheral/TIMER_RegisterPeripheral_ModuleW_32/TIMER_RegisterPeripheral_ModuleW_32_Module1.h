/**
 *
 * @file TIMER_RegisterPeripheral_ModuleW_32_Module1.h
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
 * @verbatim 9 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEW_32_TIMER_REGISTERPERIPHERAL_MODULEW_32_MODULE1_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEW_32_TIMER_REGISTERPERIPHERAL_MODULEW_32_MODULE1_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Register/TIMER_RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_ModuleW_32.h>

#define GPTM1_TW                 (((GPTM_TW_TypeDef*)(GPTM1_BASE)))

/******************************************************************************************
************************************ 2 GPTMTAMR *********************************************
******************************************************************************************/
#define GPTM1_TW_GPTMTnMR               (((TW_GPTMMR_TypeDef*)(GPTM1_BASE + GPTM_TW_GPTMTnMR_OFFSET )))
#define GPTM1_TW_GPTMTnMR_R             (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TW_GPTMTnMR_OFFSET)))

/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPTM1_TW_GPTMTnCTL                  (((TW_GPTMCTL_TypeDef*)(GPTM1_BASE + GPTM_TW_GPTMTnCTL_OFFSET )))
#define GPTM1_TW_GPTMTnCTL_R                (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TW_GPTMTnCTL_OFFSET)))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPTM1_TW_GPTMTnIMR                  (((TW_GPTMIMR_TypeDef*)(GPTM1_BASE + GPTM_TW_GPTMTnIMR_OFFSET )))
#define GPTM1_TW_GPTMTnIMR_R                (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TW_GPTMTnIMR_OFFSET)))

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPTM1_TW_GPTMTnRIS                  (((TW_GPTMRIS_TypeDef*)(GPTM1_BASE + GPTM_TW_GPTMTnRIS_OFFSET )))
#define GPTM1_TW_GPTMTnRIS_R                (*((volatile const uint32_t *)(GPTM1_BASE +GPTM_TW_GPTMTnRIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPTM1_TW_GPTMTnMIS                  (((TW_GPTMMIS_TypeDef*)(GPTM1_BASE + GPTM_TW_GPTMTnMIS_OFFSET )))
#define GPTM1_TW_GPTMTnMIS_R                (*((volatile const uint32_t *)(GPTM1_BASE +GPTM_TW_GPTMTnMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPTM1_TW_GPTMTnICR                  (((TW_GPTMICR_TypeDef*)(GPTM1_BASE + GPTM_TW_GPTMTnICR_OFFSET )))
#define GPTM1_TW_GPTMTnICR_R                (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TW_GPTMTnICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPTMTAILR *********************************************
******************************************************************************************/
#define GPTM1_TW_GPTMTnILR                      (((TW_GPTMILR_TypeDef*)(GPTM1_BASE + GPTM_TW_GPTMTnILR_OFFSET )))
#define GPTM1_TW_GPTMTnILR_R                    (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TW_GPTMTnILR_OFFSET)))

/******************************************************************************************
************************************ 12 GPTMTAMATCHR *********************************************
******************************************************************************************/
#define GPTM1_TW_GPTMTnMATCHR                       (((TW_GPTMMATCHR_TypeDef*)(GPTM1_BASE + GPTM_TW_GPTMTnMATCHR_OFFSET )))
#define GPTM1_TW_GPTMTnMATCHR_R                     (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TW_GPTMTnMATCHR_OFFSET)))

/******************************************************************************************
************************************ 18 GPTMTAR *********************************************
******************************************************************************************/
#define GPTM1_TW_GPTMTnR                       (((TW_GPTMR_TypeDef*)(GPTM1_BASE + GPTM_TW_GPTMTnR_OFFSET )))
#define GPTM1_TW_GPTMTnR_R                     (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TW_GPTMTnR_OFFSET)))

/******************************************************************************************
************************************ 20 GPTMTAV *********************************************
******************************************************************************************/
#define GPTM1_TW_GPTMTnV                       (((TW_GPTMV_TypeDef*)(GPTM1_BASE + GPTM_TW_GPTMTnV_OFFSET )))
#define GPTM1_TW_GPTMTnV_R                     (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TW_GPTMTnV_OFFSET)))

/******************************************************************************************
************************************ 22 GPTMRTCPD *********************************************
******************************************************************************************/
#define GPTM1_TW_GPTMRTCPD                       (((TW_GPTMRTCPD_TypeDef*)(GPTM1_BASE + GPTM_TW_GPTMRTCPD_OFFSET )))
#define GPTM1_TW_GPTMRTCPD_R                     (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TW_GPTMRTCPD_OFFSET)))






#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEW_32_TIMER_REGISTERPERIPHERAL_MODULEW_32_MODULE1_H_ */
