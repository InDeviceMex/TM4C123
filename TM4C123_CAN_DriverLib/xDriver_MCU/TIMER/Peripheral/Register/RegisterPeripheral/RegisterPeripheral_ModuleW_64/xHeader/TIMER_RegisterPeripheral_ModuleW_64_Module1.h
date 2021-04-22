/**
 *
 * @file TIMER_RegisterPeripheral_ModuleW_64_Module1.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEW_64_TIMER_REGISTERPERIPHERAL_MODULEW_64_MODULE1_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEW_64_TIMER_REGISTERPERIPHERAL_MODULEW_64_MODULE1_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_ModuleW_64.h>


#define GPWTM1_TW    (((GPWTM_TW_TypeDef*) (GPWTM1_BASE)))

/******************************************************************************************
************************************ 2 TAMR *********************************************
******************************************************************************************/
#define GPWTM1_TW_TnMR    ((TW_GPTMMR_TypeDef*) (GPWTM1_BASE + GPWTM_TW_TnMR_OFFSET))
#define GPWTM1_TW_TnMR_R    (*((volatile uint32_t*) (GPWTM1_BASE + GPWTM_TW_TnMR_OFFSET)))

/******************************************************************************************
************************************ 4 CTL *********************************************
******************************************************************************************/
#define GPWTM1_TW_TnCTL    ((TW_GPTMCTL_TypeDef*) (GPWTM1_BASE + GPWTM_TW_TnCTL_OFFSET))
#define GPWTM1_TW_TnCTL_R    (*((volatile uint32_t*) (GPWTM1_BASE + GPWTM_TW_TnCTL_OFFSET)))

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/
#define GPWTM1_TW_TnIMR    ((TW_GPWTMIMR_TypeDef*) (GPWTM1_BASE + GPWTM_TW_TnIMR_OFFSET))
#define GPWTM1_TW_TnIMR_R    (*((volatile uint32_t*) (GPWTM1_BASE + GPWTM_TW_TnIMR_OFFSET)))

/******************************************************************************************
************************************ 7 RIS *********************************************
******************************************************************************************/
#define GPWTM1_TW_TnRIS    ((TW_GPWTMRIS_TypeDef*) (GPWTM1_BASE + GPWTM_TW_TnRIS_OFFSET))
#define GPWTM1_TW_TnRIS_R    (*((volatile const uint32_t*) (GPWTM1_BASE + GPWTM_TW_TnRIS_OFFSET)))

/******************************************************************************************
************************************ 8 MIS *********************************************
******************************************************************************************/
#define GPWTM1_TW_TnMIS    ((TW_GPWTMMIS_TypeDef*) (GPWTM1_BASE + GPWTM_TW_TnMIS_OFFSET))
#define GPWTM1_TW_TnMIS_R    (*((volatile const uint32_t*) (GPWTM1_BASE + GPWTM_TW_TnMIS_OFFSET)))

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/
#define GPWTM1_TW_TnICR    ((TW_GPWTMICR_TypeDef*) (GPWTM1_BASE + GPWTM_TW_TnICR_OFFSET))
#define GPWTM1_TW_TnICR_R    (*((volatile uint32_t*) (GPWTM1_BASE + GPWTM_TW_TnICR_OFFSET)))

/******************************************************************************************
************************************ 10 TAILR *********************************************
******************************************************************************************/
#define GPWTM1_TW_TnILR_LOW    ((TW_GPWTMILR_LOW_TypeDef*) (GPWTM1_BASE + GPWTM_TW_TnILR_LOW_OFFSET))
#define GPWTM1_TW_TnILR_LOW_R    (*((volatile uint32_t*) (GPWTM1_BASE + GPWTM_TW_TnILR_LOW_OFFSET)))

/******************************************************************************************
************************************ 11 TBILR *********************************************
******************************************************************************************/

#define GPWTM1_TW_TnILR_HIGH    ((TW_GPWTMILR_HIGH_TypeDef*) (GPWTM1_BASE + GPWTM_TW_TnILR_HIGH_OFFSET))
#define GPWTM1_TW_TnILR_HIGH_R    (*((volatile uint32_t*) (GPWTM1_BASE + GPWTM_TW_TnILR_HIGH_OFFSET)))

/******************************************************************************************
************************************ 12 TAMATCHR *********************************************
******************************************************************************************/
#define GPWTM1_TW_TnMATCHR_LOW    ((TW_GPWTMMATCHR_LOW_TypeDef*) (GPWTM1_BASE + GPWTM_TW_TnMATCHR_LOW_OFFSET))
#define GPWTM1_TW_TnMATCHR_LOW_R    (*((volatile uint32_t*) (GPWTM1_BASE + GPWTM_TW_TnMATCHR_LOW_OFFSET)))

/******************************************************************************************
************************************ 13 TBMATCHR *********************************************
******************************************************************************************/
#define GPWTM1_TW_TnMATCHR_HIGH    ((TW_GPWTMMATCHR_HIGH_TypeDef*) (GPWTM1_BASE + GPWTM_TW_TnMATCHR_HIGH_OFFSET))
#define GPWTM1_TW_TnMATCHR_HIGH_R    (*((volatile uint32_t*) (GPWTM1_BASE + GPWTM_TW_TnMATCHR_HIGH_OFFSET)))

/******************************************************************************************
************************************ 18 TAR *********************************************
******************************************************************************************/
#define GPWTM1_TW_TnR_LOW    ((TW_GPWTMR_LOW_TypeDef*) (GPWTM1_BASE + GPWTM_TW_TnR_LOW_OFFSET))
#define GPWTM1_TW_TnR_LOW_R    (*((volatile uint32_t*) (GPWTM1_BASE + GPWTM_TW_TnR_LOW_OFFSET)))

/******************************************************************************************
************************************ 19 TBR *********************************************
******************************************************************************************/
#define GPWTM1_TW_TnR_HIGH    ((TW_GPWTMR_HIGH_TypeDef*) (GPWTM1_BASE + GPWTM_TW_TnR_HIGH_OFFSET))
#define GPWTM1_TW_TnR_HIGH_R    (*((volatile uint32_t*) (GPWTM1_BASE + GPWTM_TW_TnR_HIGH_OFFSET)))

/******************************************************************************************
************************************ 20 TAV *********************************************
******************************************************************************************/
#define GPWTM1_TW_TnV_LOW    ((TW_GPWTMV_LOW_TypeDef*) (GPWTM1_BASE + GPWTM_TW_TnV_LOW_OFFSET))
#define GPWTM1_TW_TnV_LOW_R    (*((volatile uint32_t*) (GPWTM1_BASE + GPWTM_TW_TnV_LOW_OFFSET)))

/******************************************************************************************
************************************ 21 TBV *********************************************
******************************************************************************************/
#define GPWTM1_TW_TnV_HIGH    ((TW_GPWTMV_HIGH_TypeDef*) (GPWTM1_BASE + GPWTM_TW_TnV_HIGH_OFFSET))
#define GPWTM1_TW_TnV_HIGH_R    (*((volatile uint32_t*) (GPWTM1_BASE + GPWTM_TW_TnV_HIGH_OFFSET)))

/******************************************************************************************
************************************ 22 RTCPD *********************************************
******************************************************************************************/
#define GPWTM1_TW_RTCPD    ((TW_GPTMRTCPD_TypeDef*) (GPWTM1_BASE + GPWTM_TW_RTCPD_OFFSET))
#define GPWTM1_TW_RTCPD_R    (*((volatile uint32_t*) (GPWTM1_BASE + GPWTM_TW_RTCPD_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_MODULEW_64_TIMER_REGISTERPERIPHERAL_MODULEW_64_MODULE1_H_ */
