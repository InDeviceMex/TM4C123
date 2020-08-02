/**
 *
 * @file TIMER_RegisterPeripheral_ModuleW_64_Module2.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEW_64_TIMER_REGISTERPERIPHERAL_MODULEW_64_MODULE2_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEW_64_TIMER_REGISTERPERIPHERAL_MODULEW_64_MODULE2_H_

#include <xDriver_MCU/TIMER/Header/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Header/Peripheral/Struct/StructPeripheral/TIMER_StructPeripheral_ModuleW_64.h>


#define GPWTM2_TW                 (((GPWTM_TW_TypeDef*)(GPWTM2_BASE)))

/******************************************************************************************
************************************ 2 GPTMTAMR *********************************************
******************************************************************************************/
#define GPWTM2_TW_GPTMTnMR               (((TW_GPTMMR_TypeDef*)(GPWTM2_BASE + GPWTM_TW_GPTMTnMR_OFFSET )))
#define GPWTM2_TW_GPTMTnMR_R             (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TW_GPTMTnMR_OFFSET)))

/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPWTM2_TW_GPTMTnCTL                 (((TW_GPTMCTL_TypeDef*)(GPWTM2_BASE + GPWTM_TW_GPTMTnCTL_OFFSET )))
#define GPWTM2_TW_GPTMTnCTL_R               (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TW_GPTMTnCTL_OFFSET)))

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPWTM2_TW_GPTMTnIMR                 (((TW_GPWTMIMR_TypeDef*)(GPWTM2_BASE + GPWTM_TW_GPTMTnIMR_OFFSET )))
#define GPWTM2_TW_GPTMTnIMR_R               (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TW_GPTMTnIMR_OFFSET)))

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPWTM2_TW_GPTMTnRIS                 (((TW_GPWTMRIS_TypeDef*)(GPWTM2_BASE + GPWTM_TW_GPTMTnRIS_OFFSET )))
#define GPWTM2_TW_GPTMTnRIS_R               (*((volatile const uint32_t *)(GPWTM2_BASE +GPWTM_TW_GPTMTnRIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPWTM2_TW_GPTMTnMIS                 (((TW_GPWTMMIS_TypeDef*)(GPWTM2_BASE + GPWTM_TW_GPTMTnMIS_OFFSET )))
#define GPWTM2_TW_GPTMTnMIS_R               (*((volatile const uint32_t *)(GPWTM2_BASE +GPWTM_TW_GPTMTnMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/
#define GPWTM2_TW_GPTMTnICR                 (((TW_GPWTMICR_TypeDef*)(GPWTM2_BASE + GPWTM_TW_GPTMTnICR_OFFSET )))
#define GPWTM2_TW_GPTMTnICR_R               (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TW_GPTMTnICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPTMTAILR *********************************************
******************************************************************************************/
#define GPWTM2_TW_GPTMTnILR_LOW                 (((TW_GPWTMILR_LOW_TypeDef*)(GPWTM2_BASE + GPWTM_TW_GPTMTnILR_LOW_OFFSET )))
#define GPWTM2_TW_GPTMTnILR_LOW_R               (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TW_GPTMTnILR_LOW_OFFSET)))

/******************************************************************************************
************************************ 11 GPTMTBILR *********************************************
******************************************************************************************/

#define GPWTM2_TW_GPTMTnILR_HIGH                (((TW_GPWTMILR_HIGH_TypeDef*)(GPWTM2_BASE + GPWTM_TW_GPTMTnILR_HIGH_OFFSET )))
#define GPWTM2_TW_GPTMTnILR_HIGH_R              (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TW_GPTMTnILR_HIGH_OFFSET)))

/******************************************************************************************
************************************ 12 GPTMTAMATCHR *********************************************
******************************************************************************************/
#define GPWTM2_TW_GPTMTnMATCHR_LOW                  (((TW_GPWTMMATCHR_LOW_TypeDef*)(GPWTM2_BASE + GPWTM_TW_GPTMTnMATCHR_LOW_OFFSET )))
#define GPWTM2_TW_GPTMTnMATCHR_LOW_R                (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TW_GPTMTnMATCHR_LOW_OFFSET)))

/******************************************************************************************
************************************ 13 GPTMTBMATCHR *********************************************
******************************************************************************************/
#define GPWTM2_TW_GPTMTnMATCHR_HIGH                 (((TW_GPWTMMATCHR_HIGH_TypeDef*)(GPWTM2_BASE + GPWTM_TW_GPTMTnMATCHR_HIGH_OFFSET )))
#define GPWTM2_TW_GPTMTnMATCHR_HIGH_R               (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TW_GPTMTnMATCHR_HIGH_OFFSET)))

/******************************************************************************************
************************************ 18 GPTMTAR *********************************************
******************************************************************************************/
#define GPWTM2_TW_GPTMTnR_LOW                  (((TW_GPWTMR_LOW_TypeDef*)(GPWTM2_BASE + GPWTM_TW_GPTMTnR_LOW_OFFSET )))
#define GPWTM2_TW_GPTMTnR_LOW_R                (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TW_GPTMTnR_LOW_OFFSET)))

/******************************************************************************************
************************************ 19 GPTMTBR *********************************************
******************************************************************************************/
#define GPWTM2_TW_GPTMTnR_HIGH                 (((TW_GPWTMR_HIGH_TypeDef*)(GPWTM2_BASE + GPWTM_TW_GPTMTnR_HIGH_OFFSET )))
#define GPWTM2_TW_GPTMTnR_HIGH_R               (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TW_GPTMTnR_HIGH_OFFSET)))

/******************************************************************************************
************************************ 20 GPTMTAV *********************************************
******************************************************************************************/
#define GPWTM2_TW_GPTMTnV_LOW                  (((TW_GPWTMV_LOW_TypeDef*)(GPWTM2_BASE + GPWTM_TW_GPTMTnV_LOW_OFFSET )))
#define GPWTM2_TW_GPTMTnV_LOW_R                (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TW_GPTMTnV_LOW_OFFSET)))

/******************************************************************************************
************************************ 21 GPTMTBV *********************************************
******************************************************************************************/
#define GPWTM2_TW_GPTMTnV_HIGH                 (((TW_GPWTMV_HIGH_TypeDef*)(GPWTM2_BASE + GPWTM_TW_GPTMTnV_HIGH_OFFSET )))
#define GPWTM2_TW_GPTMTnV_HIGH_R               (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TW_GPTMTnV_HIGH_OFFSET)))

/******************************************************************************************
************************************ 22 GPTMRTCPD *********************************************
******************************************************************************************/
#define GPWTM2_TW_GPTMRTCPD                      (((TW_GPTMRTCPD_TypeDef*)(GPWTM2_BASE + GPWTM_TW_GPTMRTCPD_OFFSET )))
#define GPWTM2_TW_GPTMRTCPD_R                    (*((volatile uint32_t *)(GPWTM2_BASE +GPWTM_TW_GPTMRTCPD_OFFSET)))






#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEW_64_TIMER_REGISTERPERIPHERAL_MODULEW_64_MODULE2_H_ */
