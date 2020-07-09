/**
 *
 * @file TIMER_RegisterPeripheral_ModuleA_16_Module0.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEA_16_TIMER_REGISTERPERIPHERAL_MODULEA_16_MODULE0_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEA_16_TIMER_REGISTERPERIPHERAL_MODULEA_16_MODULE0_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_ModuleA_16.h>

#define GPTM0_TA                 (((GPTM_TA_TypeDef*)(GPTM0_BASE)))

/******************************************************************************************
************************************ 2 GPTMTAMR *********************************************
******************************************************************************************/
#define GPTM0_TA_GPTMTnMR               (((TA_GPTMMR_TypeDef*)(GPTM0_BASE + GPTM_TA_GPTMTnMR_OFFSET )))
#define GPTM0_TA_GPTMTnMR_R             (*((volatile uint32_t *)(GPTM0_BASE +GPTM_TA_GPTMTnMR_OFFSET)))

/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPTM0_TA_GPTMTnCTL                  (((TA_GPTMCTL_TypeDef*)(GPTM0_BASE + GPTM_TA_GPTMTnCTL_OFFSET )))
#define GPTM0_TA_GPTMTnCTL_R                (*((volatile uint32_t *)(GPTM0_BASE +GPTM_TA_GPTMTnCTL_OFFSET)))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPTM0_TA_GPTMTnIMR                  (((TA_GPTMIMR_TypeDef*)(GPTM0_BASE + GPTM_TA_GPTMTnIMR_OFFSET )))
#define GPTM0_TA_GPTMTnIMR_R                (*((volatile uint32_t *)(GPTM0_BASE +GPTM_TA_GPTMTnIMR_OFFSET)))

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPTM0_TA_GPTMTnRIS                  (((TA_GPTMRIS_TypeDef*)(GPTM0_BASE + GPTM_TA_GPTMTnRIS_OFFSET )))
#define GPTM0_TA_GPTMTnRIS_R                (*((volatile const uint32_t *)(GPTM0_BASE +GPTM_TA_GPTMTnRIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPTM0_TA_GPTMTnMIS                  (((TA_GPTMMIS_TypeDef*)(GPTM0_BASE + GPTM_TA_GPTMTnMIS_OFFSET )))
#define GPTM0_TA_GPTMTnMIS_R                (*((volatile const uint32_t *)(GPTM0_BASE +GPTM_TA_GPTMTnMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPTM0_TA_GPTMTnICR                  (((TA_GPTMICR_TypeDef*)(GPTM0_BASE + GPTM_TA_GPTMTnICR_OFFSET )))
#define GPTM0_TA_GPTMTnICR_R                (*((volatile uint32_t *)(GPTM0_BASE +GPTM_TA_GPTMTnICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPTMTAILR *********************************************
******************************************************************************************/
#define GPTM0_TA_GPTMTnILR                      (((TA_GPTMILR_TypeDef*)(GPTM0_BASE + GPTM_TA_GPTMTnILR_OFFSET )))
#define GPTM0_TA_GPTMTnILR_R                    (*((volatile uint32_t *)(GPTM0_BASE +GPTM_TA_GPTMTnILR_OFFSET)))

/******************************************************************************************
************************************ 12 GPTMTAMATCHR *********************************************
******************************************************************************************/
#define GPTM0_TA_GPTMTnMATCHR                       (((TA_GPTMMATCHR_TypeDef*)(GPTM0_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET )))
#define GPTM0_TA_GPTMTnMATCHR_R                     (*((volatile uint32_t *)(GPTM0_BASE +GPTM_TA_GPTMTnMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 GPTMTAPR *********************************************
******************************************************************************************/
#define GPTM0_TA_GPTMTnPR                       (((TA_GPTMPR_TypeDef*)(GPTM0_BASE + GPTM_TA_GPTMTnPR_OFFSET )))
#define GPTM0_TA_GPTMTnPR_R                     (*((volatile uint32_t *)(GPTM0_BASE +GPTM_TA_GPTMTnPR_OFFSET)))

/******************************************************************************************
************************************ 16 GPTMTAPMR *********************************************
******************************************************************************************/
#define GPTM0_TA_GPTMTnPMR                       (((TA_GPTMPMR_TypeDef*)(GPTM0_BASE + GPTM_TA_GPTMTnPMR_OFFSET )))
#define GPTM0_TA_GPTMTnPMR_R                     (*((volatile uint32_t *)(GPTM0_BASE +GPTM_TA_GPTMTnPMR_OFFSET)))

/******************************************************************************************
************************************ 18 GPTMTAR *********************************************
******************************************************************************************/
#define GPTM0_TA_GPTMTnR                       (((TA_GPTMR_TypeDef*)(GPTM0_BASE + GPTM_TA_GPTMTnR_OFFSET )))
#define GPTM0_TA_GPTMTnR_R                     (*((volatile uint32_t *)(GPTM0_BASE +GPTM_TA_GPTMTnR_OFFSET)))

/******************************************************************************************
************************************ 20 GPTMTAV *********************************************
******************************************************************************************/
#define GPTM0_TA_GPTMTnV                       (((TA_GPTMV_TypeDef*)(GPTM0_BASE + GPTM_TA_GPTMTnV_OFFSET )))
#define GPTM0_TA_GPTMTnV_R                     (*((volatile uint32_t *)(GPTM0_BASE +GPTM_TA_GPTMTnV_OFFSET)))

/******************************************************************************************
************************************ 23 GPTMTAPS *********************************************
******************************************************************************************/
#define GPTM0_TA_GPTMTnPS                       (((TA_GPTMPS_TypeDef*)(GPTM0_BASE + GPTM_TA_GPTMTnPS_OFFSET )))
#define GPTM0_TA_GPTMTnPS_R                     (*((volatile uint32_t *)(GPTM0_BASE +GPTM_TA_GPTMTnPS_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEA_16_TIMER_REGISTERPERIPHERAL_MODULEA_16_MODULE0_H_ */
