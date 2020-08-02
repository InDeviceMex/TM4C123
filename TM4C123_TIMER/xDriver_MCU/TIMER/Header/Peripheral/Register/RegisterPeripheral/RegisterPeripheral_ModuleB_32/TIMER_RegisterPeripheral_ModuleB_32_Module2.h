/**
 *
 * @file TIMER_RegisterPeripheral_ModuleB_32_Module2.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEB_32_TIMER_REGISTERPERIPHERAL_MODULEB_32_MODULE2_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEB_32_TIMER_REGISTERPERIPHERAL_MODULEB_32_MODULE2_H_

#include <xDriver_MCU/TIMER/Header/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Header/Peripheral/Struct/StructPeripheral/TIMER_StructPeripheral_ModuleB_32.h>

#define GPWTM2_TB                 (((GPWTM_TB_TypeDef*)(GPWTM2_BASE)))

/******************************************************************************************
************************************ 3 GPTMTBMR *********************************************
******************************************************************************************/
#define GPWTM2_TB_GPTMTnMR               (((TB_GPTMMR_TypeDef*)(GPWTM2_BASE + GPWTM_TB_GPTMTnMR_OFFSET )))
#define GPWTM2_TB_GPTMTnMR_R             (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TB_GPTMTnMR_OFFSET)))

/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPWTM2_TB_GPTMTnCTL                 (((TB_GPTMCTL_TypeDef*)(GPWTM2_BASE + GPWTM_TB_GPTMTnCTL_OFFSET )))
#define GPWTM2_TB_GPTMTnCTL_R               (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TB_GPTMTnCTL_OFFSET)))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPWTM2_TB_GPTMTnIMR                 (((TB_GPTMIMR_TypeDef*)(GPWTM2_BASE + GPWTM_TB_GPTMTnIMR_OFFSET )))
#define GPWTM2_TB_GPTMTnIMR_R               (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TB_GPTMTnIMR_OFFSET)))

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPWTM2_TB_GPTMTnRIS                 (((TB_GPTMRIS_TypeDef*)(GPWTM2_BASE + GPWTM_TB_GPTMTnRIS_OFFSET )))
#define GPWTM2_TB_GPTMTnRIS_R               (*((volatile const uint32_t *)(GPWTM2_BASE +GPWTM_TB_GPTMTnRIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPWTM2_TB_GPTMTnMIS                 (((TB_GPTMMIS_TypeDef*)(GPWTM2_BASE + GPWTM_TB_GPTMTnMIS_OFFSET )))
#define GPWTM2_TB_GPTMTnMIS_R               (*((volatile const uint32_t *)(GPWTM2_BASE +GPWTM_TB_GPTMTnMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPWTM2_TB_GPTMTnICR                 (((TB_GPTMICR_TypeDef*)(GPWTM2_BASE + GPWTM_TB_GPTMTnICR_OFFSET )))
#define GPWTM2_TB_GPTMTnICR_R               (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TB_GPTMTnICR_OFFSET)))

/******************************************************************************************
************************************ 11 GPTMTBILR *********************************************
******************************************************************************************/
#define GPWTM2_TB_GPTMTnILR                     (((TB_GPWTMILR_TypeDef*)(GPWTM2_BASE + GPWTM_TB_GPTMTnILR_OFFSET )))
#define GPWTM2_TB_GPTMTnILR_R                   (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TB_GPTMTnILR_OFFSET)))

/******************************************************************************************
************************************ 13 GPTMTBMATCHR *********************************************
******************************************************************************************/
#define GPWTM2_TB_GPTMTnMATCHR                      (((TB_GPWTMMATCHR_TypeDef*)(GPWTM2_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET )))
#define GPWTM2_TB_GPTMTnMATCHR_R                    (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TB_GPTMTnMATCHR_OFFSET)))

/******************************************************************************************
************************************ 15 GPTMTBPR *********************************************
******************************************************************************************/
#define GPWTM2_TB_GPTMTnPR                       (((TB_GPWTMPR_TypeDef*)(GPWTM2_BASE + GPWTM_TB_GPTMTnPR_OFFSET )))
#define GPWTM2_TB_GPTMTnPR_R                     (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TB_GPTMTnPR_OFFSET)))

/******************************************************************************************
************************************ 17 GPTMTBPMR *********************************************
******************************************************************************************/
#define GPWTM2_TB_GPTMTnPMR                       (((TB_GPWTMPMR_TypeDef*)(GPWTM2_BASE + GPWTM_TB_GPTMTnPMR_OFFSET )))
#define GPWTM2_TB_GPTMTnPMR_R                     (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TB_GPTMTnPMR_OFFSET)))

/******************************************************************************************
************************************ 19 GPTMTBR *********************************************
******************************************************************************************/
#define GPWTM2_TB_GPTMTnR                      (((TB_GPTMR_TypeDef*)(GPWTM2_BASE + GPWTM_TB_GPTMTnR_OFFSET )))
#define GPWTM2_TB_GPTMTnR_R                    (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TB_GPTMTnR_OFFSET)))

/******************************************************************************************
************************************ 21 GPTMTBV *********************************************
******************************************************************************************/
#define GPWTM2_TB_GPTMTnV                      (((TB_GPTMV_TypeDef*)(GPWTM2_BASE + GPWTM_TB_GPTMTnV_OFFSET )))
#define GPWTM2_TB_GPTMTnV_R                    (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TB_GPTMTnV_OFFSET)))

/******************************************************************************************
************************************ 24 GPTMTBPS *********************************************
******************************************************************************************/
#define GPWTM2_TB_GPTMTnPS                       (((TB_GPWTMPS_TypeDef*)(GPWTM2_BASE + GPWTM_TB_GPTMTnPS_OFFSET )))
#define GPWTM2_TB_GPTMTnPS_R                     (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TB_GPTMTnPS_OFFSET)))

/******************************************************************************************
************************************ 26 GPTMTBPV *********************************************
******************************************************************************************/
#define GPWTM2_TB_GPTMTnPV                       (((TB_GPWTMPV_TypeDef*)(GPWTM2_BASE + GPWTM_TB_GPTMTnPV_OFFSET )))
#define GPWTM2_TB_GPTMTnPV_R                     (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TB_GPTMTnPV_OFFSET)))





#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEB_32_TIMER_REGISTERPERIPHERAL_MODULEB_32_MODULE2_H_ */
