/**
 *
 * @file TIMER_RegisterPeripheral_ModuleB_16_Module1.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEB_16_TIMER_REGISTERPERIPHERAL_MODULEB_16_MODULE1_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEB_16_TIMER_REGISTERPERIPHERAL_MODULEB_16_MODULE1_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Register/TIMER_RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_ModuleB_16.h>

#define GPTM1_TB                 (((GPTM_TB_TypeDef*)(GPTM1_BASE)))

/******************************************************************************************
************************************ 3 GPTMTBMR *********************************************
******************************************************************************************/
#define GPTM1_TB_GPTMTnMR               (((TB_GPTMMR_TypeDef*)(GPTM1_BASE + GPTM_TB_GPTMTnMR_OFFSET )))
#define GPTM1_TB_GPTMTnMR_R             (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TB_GPTMTnMR_OFFSET)))

/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPTM1_TB_GPTMTnCTL                  (((TB_GPTMCTL_TypeDef*)(GPTM1_BASE + GPTM_TB_GPTMTnCTL_OFFSET )))
#define GPTM1_TB_GPTMTnCTL_R                (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TB_GPTMTnCTL_OFFSET)))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPTM1_TB_GPTMTnIMR                  (((TB_GPTMIMR_TypeDef*)(GPTM1_BASE + GPTM_TB_GPTMTnIMR_OFFSET )))
#define GPTM1_TB_GPTMTnIMR_R                (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TB_GPTMTnIMR_OFFSET)))

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPTM1_TB_GPTMTnRIS                  (((TB_GPTMRIS_TypeDef*)(GPTM1_BASE + GPTM_TB_GPTMTnRIS_OFFSET )))
#define GPTM1_TB_GPTMTnRIS_R                (*((volatile const uint32_t *)(GPTM1_BASE +GPTM_TB_GPTMTnRIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPTM1_TB_GPTMTnMIS                  (((TB_GPTMMIS_TypeDef*)(GPTM1_BASE + GPTM_TB_GPTMTnMIS_OFFSET )))
#define GPTM1_TB_GPTMTnMIS_R                (*((volatile const uint32_t *)(GPTM1_BASE +GPTM_TB_GPTMTnMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPTM1_TB_GPTMTnICR                  (((TB_GPTMICR_TypeDef*)(GPTM1_BASE + GPTM_TB_GPTMTnICR_OFFSET )))
#define GPTM1_TB_GPTMTnICR_R                (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TB_GPTMTnICR_OFFSET)))

/******************************************************************************************
************************************ 11 GPTMTBILR *********************************************
******************************************************************************************/
#define GPTM1_TB_GPTMTnILR                      (((TB_GPTMILR_TypeDef*)(GPTM1_BASE + GPTM_TB_GPTMTnILR_OFFSET )))
#define GPTM1_TB_GPTMTnILR_R                    (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TB_GPTMTnILR_OFFSET)))

/******************************************************************************************
************************************ 13 GPTMTBMATCHR *********************************************
******************************************************************************************/
#define GPTM1_TB_GPTMTnMATCHR                       (((TB_GPTMMATCHR_TypeDef*)(GPTM1_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET )))
#define GPTM1_TB_GPTMTnMATCHR_R                     (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TB_GPTMTnMATCHR_OFFSET)))

/******************************************************************************************
************************************ 15 GPTMTBPR *********************************************
******************************************************************************************/
#define GPTM1_TB_GPTMTnPR                       (((TB_GPTMPR_TypeDef*)(GPTM1_BASE + GPTM_TB_GPTMTnPR_OFFSET )))
#define GPTM1_TB_GPTMTnPR_R                     (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TB_GPTMTnPR_OFFSET)))

/******************************************************************************************
************************************ 17 GPTMTBPMR *********************************************
******************************************************************************************/
#define GPTM1_TB_GPTMTnPMR                       (((TB_GPTMPMR_TypeDef*)(GPTM1_BASE + GPTM_TB_GPTMTnPMR_OFFSET )))
#define GPTM1_TB_GPTMTnPMR_R                     (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TB_GPTMTnPMR_OFFSET)))

/******************************************************************************************
************************************ 19 GPTMTBR *********************************************
******************************************************************************************/
#define GPTM1_TB_GPTMTnR                       (((TB_GPTMR_TypeDef*)(GPTM1_BASE + GPTM_TB_GPTMTnR_OFFSET )))
#define GPTM1_TB_GPTMTnR_R                     (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TB_GPTMTnR_OFFSET)))

/******************************************************************************************
************************************ 21 GPTMTBV *********************************************
******************************************************************************************/
#define GPTM1_TB_GPTMTnV                       (((TB_GPTMV_TypeDef*)(GPTM1_BASE + GPTM_TB_GPTMTnV_OFFSET )))
#define GPTM1_TB_GPTMTnV_R                     (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TB_GPTMTnV_OFFSET)))

/******************************************************************************************
************************************ 24 GPTMTBPS *********************************************
******************************************************************************************/
#define GPTM1_TB_GPTMTnPS                       (((TB_GPTMPS_TypeDef*)(GPTM1_BASE + GPTM_TB_GPTMTnPS_OFFSET )))
#define GPTM1_TB_GPTMTnPS_R                     (*((volatile uint32_t *)(GPTM1_BASE +GPTM_TB_GPTMTnPS_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEB_16_TIMER_REGISTERPERIPHERAL_MODULEB_16_MODULE1_H_ */
