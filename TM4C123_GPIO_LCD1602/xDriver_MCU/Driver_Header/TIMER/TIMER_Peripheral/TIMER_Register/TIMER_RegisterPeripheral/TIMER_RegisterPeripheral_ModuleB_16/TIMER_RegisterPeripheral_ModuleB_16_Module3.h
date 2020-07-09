/**
 *
 * @file TIMER_RegisterPeripheral_ModuleB_16_Module3.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEB_16_TIMER_REGISTERPERIPHERAL_MODULEB_16_MODULE3_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEB_16_TIMER_REGISTERPERIPHERAL_MODULEB_16_MODULE3_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_ModuleB_16.h>

#define GPTM3_TB                 (((GPTM_TB_TypeDef*)(GPTM3_BASE)))

/******************************************************************************************
************************************ 3 GPTMTBMR *********************************************
******************************************************************************************/
#define GPTM3_TB_GPTMTnMR               (((TB_GPTMMR_TypeDef*)(GPTM3_BASE + GPTM_TB_GPTMTnMR_OFFSET )))
#define GPTM3_TB_GPTMTnMR_R             (*((volatile uint32_t *)(GPTM3_BASE +GPTM_TB_GPTMTnMR_OFFSET)))

/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPTM3_TB_GPTMTnCTL                  (((TB_GPTMCTL_TypeDef*)(GPTM3_BASE + GPTM_TB_GPTMTnCTL_OFFSET )))
#define GPTM3_TB_GPTMTnCTL_R                (*((volatile uint32_t *)(GPTM3_BASE +GPTM_TB_GPTMTnCTL_OFFSET)))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPTM3_TB_GPTMTnIMR                  (((TB_GPTMIMR_TypeDef*)(GPTM3_BASE + GPTM_TB_GPTMTnIMR_OFFSET )))
#define GPTM3_TB_GPTMTnIMR_R                (*((volatile uint32_t *)(GPTM3_BASE +GPTM_TB_GPTMTnIMR_OFFSET)))

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPTM3_TB_GPTMTnRIS                  (((TB_GPTMRIS_TypeDef*)(GPTM3_BASE + GPTM_TB_GPTMTnRIS_OFFSET )))
#define GPTM3_TB_GPTMTnRIS_R                (*((volatile const uint32_t *)(GPTM3_BASE +GPTM_TB_GPTMTnRIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPTM3_TB_GPTMTnMIS                  (((TB_GPTMMIS_TypeDef*)(GPTM3_BASE + GPTM_TB_GPTMTnMIS_OFFSET )))
#define GPTM3_TB_GPTMTnMIS_R                (*((volatile const uint32_t *)(GPTM3_BASE +GPTM_TB_GPTMTnMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPTM3_TB_GPTMTnICR                  (((TB_GPTMICR_TypeDef*)(GPTM3_BASE + GPTM_TB_GPTMTnICR_OFFSET )))
#define GPTM3_TB_GPTMTnICR_R                (*((volatile uint32_t *)(GPTM3_BASE +GPTM_TB_GPTMTnICR_OFFSET)))

/******************************************************************************************
************************************ 11 GPTMTBILR *********************************************
******************************************************************************************/
#define GPTM3_TB_GPTMTnILR                      (((TB_GPTMILR_TypeDef*)(GPTM3_BASE + GPTM_TB_GPTMTnILR_OFFSET )))
#define GPTM3_TB_GPTMTnILR_R                    (*((volatile uint32_t *)(GPTM3_BASE +GPTM_TB_GPTMTnILR_OFFSET)))

/******************************************************************************************
************************************ 13 GPTMTBMATCHR *********************************************
******************************************************************************************/
#define GPTM3_TB_GPTMTnMATCHR                       (((TB_GPTMMATCHR_TypeDef*)(GPTM3_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET )))
#define GPTM3_TB_GPTMTnMATCHR_R                     (*((volatile uint32_t *)(GPTM3_BASE +GPTM_TB_GPTMTnMATCHR_OFFSET)))

/******************************************************************************************
************************************ 15 GPTMTBPR *********************************************
******************************************************************************************/
#define GPTM3_TB_GPTMTnPR                       (((TB_GPTMPR_TypeDef*)(GPTM3_BASE + GPTM_TB_GPTMTnPR_OFFSET )))
#define GPTM3_TB_GPTMTnPR_R                     (*((volatile uint32_t *)(GPTM3_BASE +GPTM_TB_GPTMTnPR_OFFSET)))

/******************************************************************************************
************************************ 17 GPTMTBPMR *********************************************
******************************************************************************************/
#define GPTM3_TB_GPTMTnPMR                       (((TB_GPTMPMR_TypeDef*)(GPTM3_BASE + GPTM_TB_GPTMTnPMR_OFFSET )))
#define GPTM3_TB_GPTMTnPMR_R                     (*((volatile uint32_t *)(GPTM3_BASE +GPTM_TB_GPTMTnPMR_OFFSET)))

/******************************************************************************************
************************************ 19 GPTMTBR *********************************************
******************************************************************************************/
#define GPTM3_TB_GPTMTnR                       (((TB_GPTMR_TypeDef*)(GPTM3_BASE + GPTM_TB_GPTMTnR_OFFSET )))
#define GPTM3_TB_GPTMTnR_R                     (*((volatile uint32_t *)(GPTM3_BASE +GPTM_TB_GPTMTnR_OFFSET)))

/******************************************************************************************
************************************ 21 GPTMTBV *********************************************
******************************************************************************************/
#define GPTM3_TB_GPTMTnV                       (((TB_GPTMV_TypeDef*)(GPTM3_BASE + GPTM_TB_GPTMTnV_OFFSET )))
#define GPTM3_TB_GPTMTnV_R                     (*((volatile uint32_t *)(GPTM3_BASE +GPTM_TB_GPTMTnV_OFFSET)))

/******************************************************************************************
************************************ 24 GPTMTBPS *********************************************
******************************************************************************************/
#define GPTM3_TB_GPTMTnPS                       (((TB_GPTMPS_TypeDef*)(GPTM3_BASE + GPTM_TB_GPTMTnPS_OFFSET )))
#define GPTM3_TB_GPTMTnPS_R                     (*((volatile uint32_t *)(GPTM3_BASE +GPTM_TB_GPTMTnPS_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEB_16_TIMER_REGISTERPERIPHERAL_MODULEB_16_MODULE3_H_ */
