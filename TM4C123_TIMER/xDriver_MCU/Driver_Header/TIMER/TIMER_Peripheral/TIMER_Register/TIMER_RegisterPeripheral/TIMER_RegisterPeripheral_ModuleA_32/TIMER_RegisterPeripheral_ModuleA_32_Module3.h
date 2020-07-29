/**
 *
 * @file TIMER_RegisterPeripheral_ModuleA_32_Module3.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEA_32_TIMER_REGISTERPERIPHERAL_MODULEA_32_MODULE3_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEA_32_TIMER_REGISTERPERIPHERAL_MODULEA_32_MODULE3_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Register/TIMER_RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_ModuleA_32.h>

#define GPWTM3_TA                 (((GPWTM_TA_TypeDef*)(GPWTM3_BASE)))

/******************************************************************************************
************************************ 2 GPTMTAMR *********************************************
******************************************************************************************/
#define GPWTM3_TA_GPTMTnMR               (((TA_GPTMMR_TypeDef*)(GPWTM3_BASE + GPWTM_TA_GPTMTnMR_OFFSET )))
#define GPWTM3_TA_GPTMTnMR_R             (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_TA_GPTMTnMR_OFFSET)))

/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPWTM3_TA_GPTMTnCTL                 (((TA_GPTMCTL_TypeDef*)(GPWTM3_BASE + GPWTM_TA_GPTMTnCTL_OFFSET )))
#define GPWTM3_TA_GPTMTnCTL_R               (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_TA_GPTMTnCTL_OFFSET)))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPWTM3_TA_GPTMTnIMR                 (((TA_GPTMIMR_TypeDef*)(GPWTM3_BASE + GPWTM_TA_GPTMTnIMR_OFFSET )))
#define GPWTM3_TA_GPTMTnIMR_R               (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_TA_GPTMTnIMR_OFFSET)))


/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPWTM3_TA_GPTMTnRIS                 (((TA_GPTMRIS_TypeDef*)(GPWTM3_BASE + GPWTM_TA_GPTMTnRIS_OFFSET )))
#define GPWTM3_TA_GPTMTnRIS_R               (*((volatile const uint32_t *)(GPWTM3_BASE +GPWTM_TA_GPTMTnRIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPWTM3_TA_GPTMTnMIS                 (((TA_GPTMMIS_TypeDef*)(GPWTM3_BASE + GPWTM_TA_GPTMTnMIS_OFFSET )))
#define GPWTM3_TA_GPTMTnMIS_R               (*((volatile const uint32_t *)(GPWTM3_BASE +GPWTM_TA_GPTMTnMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPWTM3_TA_GPTMTnICR                 (((TA_GPTMICR_TypeDef*)(GPWTM3_BASE + GPWTM_TA_GPTMTnICR_OFFSET )))
#define GPWTM3_TA_GPTMTnICR_R               (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_TA_GPTMTnICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPTMTAILR *********************************************
******************************************************************************************/
#define GPWTM3_TA_GPTMTnILR                     (((TA_GPWTMILR_TypeDef*)(GPWTM3_BASE + GPWTM_TA_GPTMTnILR_OFFSET )))
#define GPWTM3_TA_GPTMTnILR_R                   (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_TA_GPTMTnILR_OFFSET)))

/******************************************************************************************
************************************ 12 GPTMTAMATCHR *********************************************
******************************************************************************************/
#define GPWTM3_TA_GPTMTnMATCHR                      (((TA_GPWTMMATCHR_TypeDef*)(GPWTM3_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET )))
#define GPWTM3_TA_GPTMTnMATCHR_R                    (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_TA_GPTMTnMATCHR_OFFSET)))

/******************************************************************************************
************************************ 14 GPTMTAPR *********************************************
******************************************************************************************/
#define GPWTM3_TA_GPTMTnPR                       (((TA_GPWTMPR_TypeDef*)(GPWTM3_BASE + GPWTM_TA_GPTMTnPR_OFFSET )))
#define GPWTM3_TA_GPTMTnPR_R                     (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_TA_GPTMTnPR_OFFSET)))

/******************************************************************************************
************************************ 16 GPTMTAPMR *********************************************
******************************************************************************************/
#define GPWTM3_TA_GPTMTnPMR                       (((TA_GPWTMPMR_TypeDef*)(GPWTM3_BASE + GPWTM_TA_GPTMTnPMR_OFFSET )))
#define GPWTM3_TA_GPTMTnPMR_R                     (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_TA_GPTMTnPMR_OFFSET)))

/******************************************************************************************
************************************ 18 GPTMTAR *********************************************
******************************************************************************************/
#define GPWTM3_TA_GPTMTnR                      (((TA_GPTMR_TypeDef*)(GPWTM3_BASE + GPWTM_TA_GPTMTnR_OFFSET )))
#define GPWTM3_TA_GPTMTnR_R                    (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_TA_GPTMTnR_OFFSET)))

/******************************************************************************************
************************************ 20 GPTMTAV *********************************************
******************************************************************************************/
#define GPWTM3_TA_GPTMTnV                      (((TA_GPTMV_TypeDef*)(GPWTM3_BASE + GPWTM_TA_GPTMTnV_OFFSET )))
#define GPWTM3_TA_GPTMTnV_R                    (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_TA_GPTMTnV_OFFSET)))

/******************************************************************************************
************************************ 23 GPTMTAPS *********************************************
******************************************************************************************/
#define GPWTM3_TA_GPTMTnPS                       (((TA_GPWTMPS_TypeDef*)(GPWTM3_BASE + GPWTM_TA_GPTMTnPS_OFFSET )))
#define GPWTM3_TA_GPTMTnPS_R                     (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_TA_GPTMTnPS_OFFSET)))

/******************************************************************************************
************************************ 25 GPTMTAPV *********************************************
******************************************************************************************/
#define GPWTM3_TA_GPTMTnPV                       (((TA_GPWTMPV_TypeDef*)(GPWTM3_BASE + GPWTM_TA_GPTMTnPV_OFFSET )))
#define GPWTM3_TA_GPTMTnPV_R                     (*((volatile uint32_t *)(GPWTM3_BASE +GPWTM_TA_GPTMTnPV_OFFSET)))





#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEA_32_TIMER_REGISTERPERIPHERAL_MODULEA_32_MODULE3_H_ */
